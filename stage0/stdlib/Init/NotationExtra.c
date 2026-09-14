// Lean compiler output
// Module: Init.NotationExtra
// Imports: public import Init.Conv public import Init.GetElem import Init.Meta.Defs
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_binderIdent;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwError___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getId(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
static const lean_string_object l_Lean_unbracketedExplicitBinders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unbracketedExplicitBinders"};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__0 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__0_value;
static const lean_string_object l_Lean_unbracketedExplicitBinders___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__1 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__2_value_aux_0),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 220, 119, 82, 242, 112, 119, 200)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__2 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__2_value;
static const lean_string_object l_Lean_unbracketedExplicitBinders___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__3 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__3_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__4 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value;
static const lean_string_object l_Lean_unbracketedExplicitBinders___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__5 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__5_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__5_value),LEAN_SCALAR_PTR_LITERAL(55, 136, 52, 6, 12, 19, 78, 239)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__6 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__6_value;
static const lean_string_object l_Lean_unbracketedExplicitBinders___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppSpace"};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__7 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__7_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__7_value),LEAN_SCALAR_PTR_LITERAL(207, 47, 58, 43, 30, 240, 125, 246)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__8 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__8_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__8_value)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__9 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__9_value;
static lean_once_cell_t l_Lean_unbracketedExplicitBinders___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_unbracketedExplicitBinders___closed__10;
static lean_once_cell_t l_Lean_unbracketedExplicitBinders___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_unbracketedExplicitBinders___closed__11;
static const lean_string_object l_Lean_unbracketedExplicitBinders___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__12 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__12_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__12_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__13 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__13_value;
static const lean_string_object l_Lean_unbracketedExplicitBinders___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__14 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__14_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__14_value)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__15 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__15_value;
static const lean_string_object l_Lean_unbracketedExplicitBinders___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__16 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__16_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__16_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__17 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__17_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__18 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__15_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__19 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__19_value;
static const lean_ctor_object l_Lean_unbracketedExplicitBinders___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__13_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__19_value)}};
static const lean_object* l_Lean_unbracketedExplicitBinders___closed__20 = (const lean_object*)&l_Lean_unbracketedExplicitBinders___closed__20_value;
static lean_once_cell_t l_Lean_unbracketedExplicitBinders___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_unbracketedExplicitBinders___closed__21;
static lean_once_cell_t l_Lean_unbracketedExplicitBinders___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_unbracketedExplicitBinders___closed__22;
LEAN_EXPORT lean_object* l_Lean_unbracketedExplicitBinders;
static const lean_string_object l_Lean_bracketedExplicitBinders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "bracketedExplicitBinders"};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__0 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__0_value;
static const lean_ctor_object l_Lean_bracketedExplicitBinders___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_bracketedExplicitBinders___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_bracketedExplicitBinders___closed__1_value_aux_0),((lean_object*)&l_Lean_bracketedExplicitBinders___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 65, 7, 186, 44, 89, 152, 79)}};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__1 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__1_value;
static const lean_string_object l_Lean_bracketedExplicitBinders___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__2 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__2_value;
static const lean_ctor_object l_Lean_bracketedExplicitBinders___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_bracketedExplicitBinders___closed__2_value)}};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__3 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__3_value;
static const lean_string_object l_Lean_bracketedExplicitBinders___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__4 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__4_value;
static const lean_ctor_object l_Lean_bracketedExplicitBinders___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_bracketedExplicitBinders___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 6, 27, 142, 141, 165, 41, 16)}};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__5 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__5_value;
static lean_once_cell_t l_Lean_bracketedExplicitBinders___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_bracketedExplicitBinders___closed__6;
static lean_once_cell_t l_Lean_bracketedExplicitBinders___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_bracketedExplicitBinders___closed__7;
static const lean_string_object l_Lean_bracketedExplicitBinders___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__8 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__8_value;
static const lean_ctor_object l_Lean_bracketedExplicitBinders___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_bracketedExplicitBinders___closed__8_value)}};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__9 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__9_value;
static lean_once_cell_t l_Lean_bracketedExplicitBinders___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_bracketedExplicitBinders___closed__10;
static lean_once_cell_t l_Lean_bracketedExplicitBinders___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_bracketedExplicitBinders___closed__11;
static lean_once_cell_t l_Lean_bracketedExplicitBinders___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_bracketedExplicitBinders___closed__12;
static lean_once_cell_t l_Lean_bracketedExplicitBinders___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_bracketedExplicitBinders___closed__13;
static const lean_string_object l_Lean_bracketedExplicitBinders___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__14 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__14_value;
static const lean_ctor_object l_Lean_bracketedExplicitBinders___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_bracketedExplicitBinders___closed__14_value)}};
static const lean_object* l_Lean_bracketedExplicitBinders___closed__15 = (const lean_object*)&l_Lean_bracketedExplicitBinders___closed__15_value;
static lean_once_cell_t l_Lean_bracketedExplicitBinders___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_bracketedExplicitBinders___closed__16;
static lean_once_cell_t l_Lean_bracketedExplicitBinders___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_bracketedExplicitBinders___closed__17;
LEAN_EXPORT lean_object* l_Lean_bracketedExplicitBinders;
static const lean_string_object l_Lean_explicitBinders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "explicitBinders"};
static const lean_object* l_Lean_explicitBinders___closed__0 = (const lean_object*)&l_Lean_explicitBinders___closed__0_value;
static const lean_ctor_object l_Lean_explicitBinders___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_explicitBinders___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_explicitBinders___closed__1_value_aux_0),((lean_object*)&l_Lean_explicitBinders___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 149, 127, 13, 202, 239, 226, 94)}};
static const lean_object* l_Lean_explicitBinders___closed__1 = (const lean_object*)&l_Lean_explicitBinders___closed__1_value;
static const lean_string_object l_Lean_explicitBinders___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_explicitBinders___closed__2 = (const lean_object*)&l_Lean_explicitBinders___closed__2_value;
static const lean_ctor_object l_Lean_explicitBinders___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_explicitBinders___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_explicitBinders___closed__3 = (const lean_object*)&l_Lean_explicitBinders___closed__3_value;
static lean_once_cell_t l_Lean_explicitBinders___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_explicitBinders___closed__4;
static lean_once_cell_t l_Lean_explicitBinders___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_explicitBinders___closed__5;
static lean_once_cell_t l_Lean_explicitBinders___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_explicitBinders___closed__6;
static lean_once_cell_t l_Lean_explicitBinders___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_explicitBinders___closed__7;
LEAN_EXPORT lean_object* l_Lean_explicitBinders;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__2 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__4 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__6 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__6_value;
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7_value_aux_2),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__8 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__8_value;
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9_value_aux_2),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__10 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__10_value;
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11_value_aux_2),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12_value;
static lean_once_cell_t l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15_value;
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16_value_aux_2),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16_value;
static const lean_string_object l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17 = (const lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17_value;
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandExplicitBindersAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandExplicitBindersAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandBracketedBindersAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandBracketedBindersAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_expandExplicitBinders_spec__0(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_expandExplicitBinders_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_expandExplicitBinders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected explicit binder"};
static const lean_object* l_Lean_expandExplicitBinders___closed__0 = (const lean_object*)&l_Lean_expandExplicitBinders___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_expandExplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandExplicitBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandBracketedBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandBracketedBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_unifConstraint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "unifConstraint"};
static const lean_object* l_Lean_unifConstraint___closed__0 = (const lean_object*)&l_Lean_unifConstraint___closed__0_value;
static const lean_ctor_object l_Lean_unifConstraint___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_unifConstraint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unifConstraint___closed__1_value_aux_0),((lean_object*)&l_Lean_unifConstraint___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 40, 39, 182, 219, 40, 214, 56)}};
static const lean_object* l_Lean_unifConstraint___closed__1 = (const lean_object*)&l_Lean_unifConstraint___closed__1_value;
static const lean_string_object l_Lean_unifConstraint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ≟ "};
static const lean_object* l_Lean_unifConstraint___closed__2 = (const lean_object*)&l_Lean_unifConstraint___closed__2_value;
static const lean_string_object l_Lean_unifConstraint___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =\?= "};
static const lean_object* l_Lean_unifConstraint___closed__3 = (const lean_object*)&l_Lean_unifConstraint___closed__3_value;
static const lean_ctor_object l_Lean_unifConstraint___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)&l_Lean_unifConstraint___closed__2_value),((lean_object*)&l_Lean_unifConstraint___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_unifConstraint___closed__4 = (const lean_object*)&l_Lean_unifConstraint___closed__4_value;
static const lean_ctor_object l_Lean_unifConstraint___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value),((lean_object*)&l_Lean_unifConstraint___closed__4_value)}};
static const lean_object* l_Lean_unifConstraint___closed__5 = (const lean_object*)&l_Lean_unifConstraint___closed__5_value;
static const lean_ctor_object l_Lean_unifConstraint___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unifConstraint___closed__5_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value)}};
static const lean_object* l_Lean_unifConstraint___closed__6 = (const lean_object*)&l_Lean_unifConstraint___closed__6_value;
static const lean_ctor_object l_Lean_unifConstraint___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_unifConstraint___closed__0_value),((lean_object*)&l_Lean_unifConstraint___closed__1_value),((lean_object*)&l_Lean_unifConstraint___closed__6_value)}};
static const lean_object* l_Lean_unifConstraint___closed__7 = (const lean_object*)&l_Lean_unifConstraint___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_unifConstraint = (const lean_object*)&l_Lean_unifConstraint___closed__7_value;
static const lean_string_object l_Lean_unifConstraintElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unifConstraintElem"};
static const lean_object* l_Lean_unifConstraintElem___closed__0 = (const lean_object*)&l_Lean_unifConstraintElem___closed__0_value;
static const lean_ctor_object l_Lean_unifConstraintElem___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_unifConstraintElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unifConstraintElem___closed__1_value_aux_0),((lean_object*)&l_Lean_unifConstraintElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(154, 160, 61, 144, 137, 134, 194, 47)}};
static const lean_object* l_Lean_unifConstraintElem___closed__1 = (const lean_object*)&l_Lean_unifConstraintElem___closed__1_value;
static const lean_string_object l_Lean_unifConstraintElem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colGe"};
static const lean_object* l_Lean_unifConstraintElem___closed__2 = (const lean_object*)&l_Lean_unifConstraintElem___closed__2_value;
static const lean_ctor_object l_Lean_unifConstraintElem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unifConstraintElem___closed__2_value),LEAN_SCALAR_PTR_LITERAL(119, 36, 80, 74, 173, 106, 150, 68)}};
static const lean_object* l_Lean_unifConstraintElem___closed__3 = (const lean_object*)&l_Lean_unifConstraintElem___closed__3_value;
static const lean_ctor_object l_Lean_unifConstraintElem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_unifConstraintElem___closed__3_value)}};
static const lean_object* l_Lean_unifConstraintElem___closed__4 = (const lean_object*)&l_Lean_unifConstraintElem___closed__4_value;
static const lean_ctor_object l_Lean_unifConstraintElem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unifConstraintElem___closed__4_value),((lean_object*)&l_Lean_unifConstraint___closed__7_value)}};
static const lean_object* l_Lean_unifConstraintElem___closed__5 = (const lean_object*)&l_Lean_unifConstraintElem___closed__5_value;
static const lean_string_object l_Lean_unifConstraintElem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_unifConstraintElem___closed__6 = (const lean_object*)&l_Lean_unifConstraintElem___closed__6_value;
static const lean_ctor_object l_Lean_unifConstraintElem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_unifConstraintElem___closed__6_value)}};
static const lean_object* l_Lean_unifConstraintElem___closed__7 = (const lean_object*)&l_Lean_unifConstraintElem___closed__7_value;
static const lean_ctor_object l_Lean_unifConstraintElem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__13_value),((lean_object*)&l_Lean_unifConstraintElem___closed__7_value)}};
static const lean_object* l_Lean_unifConstraintElem___closed__8 = (const lean_object*)&l_Lean_unifConstraintElem___closed__8_value;
static const lean_ctor_object l_Lean_unifConstraintElem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unifConstraintElem___closed__5_value),((lean_object*)&l_Lean_unifConstraintElem___closed__8_value)}};
static const lean_object* l_Lean_unifConstraintElem___closed__9 = (const lean_object*)&l_Lean_unifConstraintElem___closed__9_value;
static const lean_ctor_object l_Lean_unifConstraintElem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_unifConstraintElem___closed__0_value),((lean_object*)&l_Lean_unifConstraintElem___closed__1_value),((lean_object*)&l_Lean_unifConstraintElem___closed__9_value)}};
static const lean_object* l_Lean_unifConstraintElem___closed__10 = (const lean_object*)&l_Lean_unifConstraintElem___closed__10_value;
LEAN_EXPORT const lean_object* l_Lean_unifConstraintElem = (const lean_object*)&l_Lean_unifConstraintElem___closed__10_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 34, .m_data = "command__Unif_hint____Where_|_-⊢__"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__0 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__0_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__1_value_aux_0),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 81, 240, 79, 209, 199, 153, 255)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__1 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__1_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__2 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__2_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__3 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__3_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__3_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__4 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__4_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__13_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__4_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__5 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__5_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__6 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__6_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(144, 113, 220, 36, 163, 13, 57, 223)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__7 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__7_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__7_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__8 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__8_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__5_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__8_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__9 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__9_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "unif_hint"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__10 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__10_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__10_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__11 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__11_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__9_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__11_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__12 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__12_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__13 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__13_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__13_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__15 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__15_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__9_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__15_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__16 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__16_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__13_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__16_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__17 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__17_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__12_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__17_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__18 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__18_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__19 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__19_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__19_value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bracketedBinder"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__21 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__21_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__21_value),LEAN_SCALAR_PTR_LITERAL(126, 188, 9, 177, 18, 110, 216, 30)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__22 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__22_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__22_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__23 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__23_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__9_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__23_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__24 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__24_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__24_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__25 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__25_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__18_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__25_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__26 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__26_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " where "};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__27 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__27_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__27_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__28 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__28_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__26_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__28_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__29 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__29_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withPosition"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__30 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__30_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__30_value),LEAN_SCALAR_PTR_LITERAL(246, 171, 180, 145, 132, 143, 108, 238)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20_value),((lean_object*)&l_Lean_unifConstraintElem___closed__10_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__32 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__32_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__32_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__33 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__33_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__29_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__33_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__34 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__34_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "patternIgnore"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__35 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__35_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__35_value),LEAN_SCALAR_PTR_LITERAL(195, 83, 213, 191, 208, 4, 123, 240)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__36 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__36_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__37 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__37_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__37_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__39 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__39_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__39_value),LEAN_SCALAR_PTR_LITERAL(56, 145, 113, 208, 127, 167, 216, 55)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__40 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__40_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__41 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__41_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__41_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__42 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__42_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "noWs"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__43 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__43_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__43_value),LEAN_SCALAR_PTR_LITERAL(92, 29, 204, 148, 167, 109, 242, 21)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__44 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__44_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__44_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__45 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__45_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__42_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__45_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__46 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__46_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__47 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__47_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__47_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__48 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__48_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__46_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__48_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__49 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__49_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__40_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__49_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__50 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__50_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__50_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__51 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__51_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊢"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__52 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__52_value;
static const lean_string_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__53 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__53_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__53_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__54_value_aux_0),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__52_value),LEAN_SCALAR_PTR_LITERAL(140, 188, 44, 162, 35, 62, 206, 40)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__54 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__54_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__52_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__55 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__55_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__52_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__54_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__55_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__56 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__56_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_explicitBinders___closed__3_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__51_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__56_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__57 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__57_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__36_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__57_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__58 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__58_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__34_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__58_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__59 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__59_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__59_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__9_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__60 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__60_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__60_value),((lean_object*)&l_Lean_unifConstraint___closed__7_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__61 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__61_value;
static const lean_ctor_object l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__61_value)}};
static const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__62 = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__62_value;
LEAN_EXPORT const lean_object* l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2____ = (const lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__62_value;
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arrow"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 146, 143, 73, 122, 115, 5, 207)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_=_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(167, 251, 107, 62, 223, 239, 203, 78)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__0 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__0_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__1 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__1_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__2 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__2_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Sort"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__3 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__3_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Level"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__4 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__4_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__5 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__5_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__7 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__7_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__8 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__8_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__9 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__9_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__10 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__10_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__11 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__11_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__12 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__12_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__13 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__13_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unification_hint"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__14 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__14_value;
static lean_once_cell_t l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(169, 153, 150, 74, 163, 227, 238, 154)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__16 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__16_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "expose"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__18 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__18_value;
static lean_once_cell_t l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(170, 113, 233, 77, 243, 78, 243, 129)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__20 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__20_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__22 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__22_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__23 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__23_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__24 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__24_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__25 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__25_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__26 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__26_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hint"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__27 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__27_value;
static lean_once_cell_t l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__28;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 129, 8, 98, 135, 223, 96, 106)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__29 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__29_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__31 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__31_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32_value;
static const lean_array_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__34 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__34_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35_value_aux_2),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36_value_aux_2),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36_value;
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term_u2203___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 8, .m_data = "term∃_,_"};
static const lean_object* l_term_u2203___x2c___00__closed__0 = (const lean_object*)&l_term_u2203___x2c___00__closed__0_value;
static const lean_ctor_object l_term_u2203___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_u2203___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 105, 219, 112, 166, 139, 167, 161)}};
static const lean_object* l_term_u2203___x2c___00__closed__1 = (const lean_object*)&l_term_u2203___x2c___00__closed__1_value;
static const lean_string_object l_term_u2203___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∃"};
static const lean_object* l_term_u2203___x2c___00__closed__2 = (const lean_object*)&l_term_u2203___x2c___00__closed__2_value;
static const lean_ctor_object l_term_u2203___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_u2203___x2c___00__closed__2_value)}};
static const lean_object* l_term_u2203___x2c___00__closed__3 = (const lean_object*)&l_term_u2203___x2c___00__closed__3_value;
static lean_once_cell_t l_term_u2203___x2c___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2203___x2c___00__closed__4;
static lean_once_cell_t l_term_u2203___x2c___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2203___x2c___00__closed__5;
static lean_once_cell_t l_term_u2203___x2c___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2203___x2c___00__closed__6;
static lean_once_cell_t l_term_u2203___x2c___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2203___x2c___00__closed__7;
LEAN_EXPORT lean_object* l_term_u2203___x2c__;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__0 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__0_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__1 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__1_value;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_termExists___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "termExists_,_"};
static const lean_object* l_termExists___x2c___00__closed__0 = (const lean_object*)&l_termExists___x2c___00__closed__0_value;
static const lean_ctor_object l_termExists___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_termExists___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 28, 246, 22, 86, 216, 86, 26)}};
static const lean_object* l_termExists___x2c___00__closed__1 = (const lean_object*)&l_termExists___x2c___00__closed__1_value;
static const lean_string_object l_termExists___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "exists"};
static const lean_object* l_termExists___x2c___00__closed__2 = (const lean_object*)&l_termExists___x2c___00__closed__2_value;
static const lean_ctor_object l_termExists___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_termExists___x2c___00__closed__2_value)}};
static const lean_object* l_termExists___x2c___00__closed__3 = (const lean_object*)&l_termExists___x2c___00__closed__3_value;
static lean_once_cell_t l_termExists___x2c___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termExists___x2c___00__closed__4;
static lean_once_cell_t l_termExists___x2c___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termExists___x2c___00__closed__5;
static lean_once_cell_t l_termExists___x2c___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termExists___x2c___00__closed__6;
static lean_once_cell_t l_termExists___x2c___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_termExists___x2c___00__closed__7;
LEAN_EXPORT lean_object* l_termExists___x2c__;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__termExists___x2c____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__termExists___x2c____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term_u03a3___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 8, .m_data = "termΣ_,_"};
static const lean_object* l_term_u03a3___x2c___00__closed__0 = (const lean_object*)&l_term_u03a3___x2c___00__closed__0_value;
static const lean_ctor_object l_term_u03a3___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_u03a3___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 61, 86, 48, 13, 47, 85, 120)}};
static const lean_object* l_term_u03a3___x2c___00__closed__1 = (const lean_object*)&l_term_u03a3___x2c___00__closed__1_value;
static const lean_string_object l_term_u03a3___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "Σ"};
static const lean_object* l_term_u03a3___x2c___00__closed__2 = (const lean_object*)&l_term_u03a3___x2c___00__closed__2_value;
static const lean_ctor_object l_term_u03a3___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_u03a3___x2c___00__closed__2_value)}};
static const lean_object* l_term_u03a3___x2c___00__closed__3 = (const lean_object*)&l_term_u03a3___x2c___00__closed__3_value;
static lean_once_cell_t l_term_u03a3___x2c___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u03a3___x2c___00__closed__4;
static lean_once_cell_t l_term_u03a3___x2c___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u03a3___x2c___00__closed__5;
static lean_once_cell_t l_term_u03a3___x2c___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u03a3___x2c___00__closed__6;
static lean_once_cell_t l_term_u03a3___x2c___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u03a3___x2c___00__closed__7;
LEAN_EXPORT lean_object* l_term_u03a3___x2c__;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Sigma"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__0 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__0_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 250, 144, 56, 109, 24, 162, 237)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__1 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__1_value;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term_u03a3_x27___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 9, .m_data = "termΣ'_,_"};
static const lean_object* l_term_u03a3_x27___x2c___00__closed__0 = (const lean_object*)&l_term_u03a3_x27___x2c___00__closed__0_value;
static const lean_ctor_object l_term_u03a3_x27___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_u03a3_x27___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 244, 129, 9, 43, 224, 237, 22)}};
static const lean_object* l_term_u03a3_x27___x2c___00__closed__1 = (const lean_object*)&l_term_u03a3_x27___x2c___00__closed__1_value;
static const lean_string_object l_term_u03a3_x27___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 2, .m_data = "Σ'"};
static const lean_object* l_term_u03a3_x27___x2c___00__closed__2 = (const lean_object*)&l_term_u03a3_x27___x2c___00__closed__2_value;
static const lean_ctor_object l_term_u03a3_x27___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_u03a3_x27___x2c___00__closed__2_value)}};
static const lean_object* l_term_u03a3_x27___x2c___00__closed__3 = (const lean_object*)&l_term_u03a3_x27___x2c___00__closed__3_value;
static lean_once_cell_t l_term_u03a3_x27___x2c___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u03a3_x27___x2c___00__closed__4;
static lean_once_cell_t l_term_u03a3_x27___x2c___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u03a3_x27___x2c___00__closed__5;
static lean_once_cell_t l_term_u03a3_x27___x2c___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u03a3_x27___x2c___00__closed__6;
static lean_once_cell_t l_term_u03a3_x27___x2c___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u03a3_x27___x2c___00__closed__7;
LEAN_EXPORT lean_object* l_term_u03a3_x27___x2c__;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "PSigma"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__0 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__0_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__1 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__1_value;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term___xd7____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 9, .m_data = "term_×__1"};
static const lean_object* l_term___xd7____1___closed__0 = (const lean_object*)&l_term___xd7____1___closed__0_value;
static const lean_ctor_object l_term___xd7____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term___xd7____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(114, 66, 226, 190, 84, 185, 148, 180)}};
static const lean_object* l_term___xd7____1___closed__1 = (const lean_object*)&l_term___xd7____1___closed__1_value;
static const lean_string_object l_term___xd7____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 3, .m_data = " × "};
static const lean_object* l_term___xd7____1___closed__2 = (const lean_object*)&l_term___xd7____1___closed__2_value;
static const lean_ctor_object l_term___xd7____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term___xd7____1___closed__2_value)}};
static const lean_object* l_term___xd7____1___closed__3 = (const lean_object*)&l_term___xd7____1___closed__3_value;
static lean_once_cell_t l_term___xd7____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___xd7____1___closed__4;
static const lean_ctor_object l_term___xd7____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__17_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l_term___xd7____1___closed__5 = (const lean_object*)&l_term___xd7____1___closed__5_value;
static lean_once_cell_t l_term___xd7____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___xd7____1___closed__6;
static lean_once_cell_t l_term___xd7____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___xd7____1___closed__7;
LEAN_EXPORT lean_object* l_term___xd7____1;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term___xd7____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term___xd7____1__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term___xd7_x27____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 10, .m_data = "term_×'__1"};
static const lean_object* l_term___xd7_x27____1___closed__0 = (const lean_object*)&l_term___xd7_x27____1___closed__0_value;
static const lean_ctor_object l_term___xd7_x27____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term___xd7_x27____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 58, 119, 129, 26, 229, 143, 92)}};
static const lean_object* l_term___xd7_x27____1___closed__1 = (const lean_object*)&l_term___xd7_x27____1___closed__1_value;
static const lean_string_object l_term___xd7_x27____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = " ×' "};
static const lean_object* l_term___xd7_x27____1___closed__2 = (const lean_object*)&l_term___xd7_x27____1___closed__2_value;
static const lean_ctor_object l_term___xd7_x27____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term___xd7_x27____1___closed__2_value)}};
static const lean_object* l_term___xd7_x27____1___closed__3 = (const lean_object*)&l_term___xd7_x27____1___closed__3_value;
static lean_once_cell_t l_term___xd7_x27____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___xd7_x27____1___closed__4;
static lean_once_cell_t l_term___xd7_x27____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___xd7_x27____1___closed__5;
static lean_once_cell_t l_term___xd7_x27____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___xd7_x27____1___closed__6;
LEAN_EXPORT lean_object* l_term___xd7_x27____1;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term___xd7_x27____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term___xd7_x27____1__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_calcFirstStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "calcFirstStep"};
static const lean_object* l_Lean_calcFirstStep___closed__0 = (const lean_object*)&l_Lean_calcFirstStep___closed__0_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_calcFirstStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_calcFirstStep___closed__1_value_aux_0),((lean_object*)&l_Lean_calcFirstStep___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 79, 246, 49, 58, 153, 94, 105)}};
static const lean_object* l_Lean_calcFirstStep___closed__1 = (const lean_object*)&l_Lean_calcFirstStep___closed__1_value;
static const lean_string_object l_Lean_calcFirstStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ppIndent"};
static const lean_object* l_Lean_calcFirstStep___closed__2 = (const lean_object*)&l_Lean_calcFirstStep___closed__2_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_calcFirstStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(240, 142, 232, 190, 100, 212, 29, 41)}};
static const lean_object* l_Lean_calcFirstStep___closed__3 = (const lean_object*)&l_Lean_calcFirstStep___closed__3_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unifConstraintElem___closed__4_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value)}};
static const lean_object* l_Lean_calcFirstStep___closed__4 = (const lean_object*)&l_Lean_calcFirstStep___closed__4_value;
static const lean_string_object l_Lean_calcFirstStep___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_calcFirstStep___closed__5 = (const lean_object*)&l_Lean_calcFirstStep___closed__5_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_calcFirstStep___closed__5_value)}};
static const lean_object* l_Lean_calcFirstStep___closed__6 = (const lean_object*)&l_Lean_calcFirstStep___closed__6_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcFirstStep___closed__6_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value)}};
static const lean_object* l_Lean_calcFirstStep___closed__7 = (const lean_object*)&l_Lean_calcFirstStep___closed__7_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__13_value),((lean_object*)&l_Lean_calcFirstStep___closed__7_value)}};
static const lean_object* l_Lean_calcFirstStep___closed__8 = (const lean_object*)&l_Lean_calcFirstStep___closed__8_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcFirstStep___closed__4_value),((lean_object*)&l_Lean_calcFirstStep___closed__8_value)}};
static const lean_object* l_Lean_calcFirstStep___closed__9 = (const lean_object*)&l_Lean_calcFirstStep___closed__9_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_calcFirstStep___closed__3_value),((lean_object*)&l_Lean_calcFirstStep___closed__9_value)}};
static const lean_object* l_Lean_calcFirstStep___closed__10 = (const lean_object*)&l_Lean_calcFirstStep___closed__10_value;
static const lean_ctor_object l_Lean_calcFirstStep___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_calcFirstStep___closed__0_value),((lean_object*)&l_Lean_calcFirstStep___closed__1_value),((lean_object*)&l_Lean_calcFirstStep___closed__10_value)}};
static const lean_object* l_Lean_calcFirstStep___closed__11 = (const lean_object*)&l_Lean_calcFirstStep___closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_calcFirstStep = (const lean_object*)&l_Lean_calcFirstStep___closed__11_value;
static const lean_string_object l_Lean_calcStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "calcStep"};
static const lean_object* l_Lean_calcStep___closed__0 = (const lean_object*)&l_Lean_calcStep___closed__0_value;
static const lean_ctor_object l_Lean_calcStep___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_calcStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_calcStep___closed__1_value_aux_0),((lean_object*)&l_Lean_calcStep___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 3, 210, 123, 188, 211, 75, 180)}};
static const lean_object* l_Lean_calcStep___closed__1 = (const lean_object*)&l_Lean_calcStep___closed__1_value;
static const lean_ctor_object l_Lean_calcStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcFirstStep___closed__4_value),((lean_object*)&l_Lean_calcFirstStep___closed__6_value)}};
static const lean_object* l_Lean_calcStep___closed__2 = (const lean_object*)&l_Lean_calcStep___closed__2_value;
static const lean_ctor_object l_Lean_calcStep___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcStep___closed__2_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value)}};
static const lean_object* l_Lean_calcStep___closed__3 = (const lean_object*)&l_Lean_calcStep___closed__3_value;
static const lean_ctor_object l_Lean_calcStep___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_calcFirstStep___closed__3_value),((lean_object*)&l_Lean_calcStep___closed__3_value)}};
static const lean_object* l_Lean_calcStep___closed__4 = (const lean_object*)&l_Lean_calcStep___closed__4_value;
static const lean_ctor_object l_Lean_calcStep___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_calcStep___closed__0_value),((lean_object*)&l_Lean_calcStep___closed__1_value),((lean_object*)&l_Lean_calcStep___closed__4_value)}};
static const lean_object* l_Lean_calcStep___closed__5 = (const lean_object*)&l_Lean_calcStep___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_calcStep = (const lean_object*)&l_Lean_calcStep___closed__5_value;
static const lean_string_object l_Lean_calcSteps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "calcSteps"};
static const lean_object* l_Lean_calcSteps___closed__0 = (const lean_object*)&l_Lean_calcSteps___closed__0_value;
static const lean_ctor_object l_Lean_calcSteps___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_calcSteps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_calcSteps___closed__1_value_aux_0),((lean_object*)&l_Lean_calcSteps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 10, 254, 10, 206, 238, 242, 161)}};
static const lean_object* l_Lean_calcSteps___closed__1 = (const lean_object*)&l_Lean_calcSteps___closed__1_value;
static const lean_string_object l_Lean_calcSteps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ppLine"};
static const lean_object* l_Lean_calcSteps___closed__2 = (const lean_object*)&l_Lean_calcSteps___closed__2_value;
static const lean_ctor_object l_Lean_calcSteps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_calcSteps___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 61, 38, 245, 158, 59, 171, 58)}};
static const lean_object* l_Lean_calcSteps___closed__3 = (const lean_object*)&l_Lean_calcSteps___closed__3_value;
static const lean_ctor_object l_Lean_calcSteps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_calcSteps___closed__3_value)}};
static const lean_object* l_Lean_calcSteps___closed__4 = (const lean_object*)&l_Lean_calcSteps___closed__4_value;
static const lean_ctor_object l_Lean_calcSteps___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31_value),((lean_object*)&l_Lean_calcFirstStep___closed__11_value)}};
static const lean_object* l_Lean_calcSteps___closed__5 = (const lean_object*)&l_Lean_calcSteps___closed__5_value;
static const lean_ctor_object l_Lean_calcSteps___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcSteps___closed__4_value),((lean_object*)&l_Lean_calcSteps___closed__5_value)}};
static const lean_object* l_Lean_calcSteps___closed__6 = (const lean_object*)&l_Lean_calcSteps___closed__6_value;
static const lean_string_object l_Lean_calcSteps___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "linebreak"};
static const lean_object* l_Lean_calcSteps___closed__7 = (const lean_object*)&l_Lean_calcSteps___closed__7_value;
static const lean_ctor_object l_Lean_calcSteps___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_calcSteps___closed__7_value),LEAN_SCALAR_PTR_LITERAL(74, 147, 100, 44, 136, 108, 159, 66)}};
static const lean_object* l_Lean_calcSteps___closed__8 = (const lean_object*)&l_Lean_calcSteps___closed__8_value;
static const lean_ctor_object l_Lean_calcSteps___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_calcSteps___closed__8_value)}};
static const lean_object* l_Lean_calcSteps___closed__9 = (const lean_object*)&l_Lean_calcSteps___closed__9_value;
static const lean_ctor_object l_Lean_calcSteps___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcSteps___closed__4_value),((lean_object*)&l_Lean_calcSteps___closed__9_value)}};
static const lean_object* l_Lean_calcSteps___closed__10 = (const lean_object*)&l_Lean_calcSteps___closed__10_value;
static const lean_ctor_object l_Lean_calcSteps___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcSteps___closed__10_value),((lean_object*)&l_Lean_calcStep___closed__5_value)}};
static const lean_object* l_Lean_calcSteps___closed__11 = (const lean_object*)&l_Lean_calcSteps___closed__11_value;
static const lean_ctor_object l_Lean_calcSteps___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20_value),((lean_object*)&l_Lean_calcSteps___closed__11_value)}};
static const lean_object* l_Lean_calcSteps___closed__12 = (const lean_object*)&l_Lean_calcSteps___closed__12_value;
static const lean_ctor_object l_Lean_calcSteps___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31_value),((lean_object*)&l_Lean_calcSteps___closed__12_value)}};
static const lean_object* l_Lean_calcSteps___closed__13 = (const lean_object*)&l_Lean_calcSteps___closed__13_value;
static const lean_ctor_object l_Lean_calcSteps___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcSteps___closed__6_value),((lean_object*)&l_Lean_calcSteps___closed__13_value)}};
static const lean_object* l_Lean_calcSteps___closed__14 = (const lean_object*)&l_Lean_calcSteps___closed__14_value;
static const lean_ctor_object l_Lean_calcSteps___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_calcSteps___closed__0_value),((lean_object*)&l_Lean_calcSteps___closed__1_value),((lean_object*)&l_Lean_calcSteps___closed__14_value)}};
static const lean_object* l_Lean_calcSteps___closed__15 = (const lean_object*)&l_Lean_calcSteps___closed__15_value;
LEAN_EXPORT const lean_object* l_Lean_calcSteps = (const lean_object*)&l_Lean_calcSteps___closed__15_value;
static const lean_string_object l_Lean_calc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "calc"};
static const lean_object* l_Lean_calc___closed__0 = (const lean_object*)&l_Lean_calc___closed__0_value;
static const lean_ctor_object l_Lean_calc___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_calc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_calc___closed__1_value_aux_0),((lean_object*)&l_Lean_calc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 46, 171, 201, 40, 237, 174, 33)}};
static const lean_object* l_Lean_calc___closed__1 = (const lean_object*)&l_Lean_calc___closed__1_value;
static const lean_ctor_object l_Lean_calc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_calc___closed__0_value)}};
static const lean_object* l_Lean_calc___closed__2 = (const lean_object*)&l_Lean_calc___closed__2_value;
static const lean_ctor_object l_Lean_calc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calc___closed__2_value),((lean_object*)&l_Lean_calcSteps___closed__15_value)}};
static const lean_object* l_Lean_calc___closed__3 = (const lean_object*)&l_Lean_calc___closed__3_value;
static const lean_ctor_object l_Lean_calc___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_calc___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_calc___closed__3_value)}};
static const lean_object* l_Lean_calc___closed__4 = (const lean_object*)&l_Lean_calc___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_calc = (const lean_object*)&l_Lean_calc___closed__4_value;
static const lean_string_object l_Lean_calcTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "calcTactic"};
static const lean_object* l_Lean_calcTactic___closed__0 = (const lean_object*)&l_Lean_calcTactic___closed__0_value;
static const lean_ctor_object l_Lean_calcTactic___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_calcTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_calcTactic___closed__1_value_aux_0),((lean_object*)&l_Lean_calcTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 188, 49, 237, 47, 139, 25, 127)}};
static const lean_object* l_Lean_calcTactic___closed__1 = (const lean_object*)&l_Lean_calcTactic___closed__1_value;
static const lean_ctor_object l_Lean_calcTactic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_calc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_calcTactic___closed__2 = (const lean_object*)&l_Lean_calcTactic___closed__2_value;
static const lean_ctor_object l_Lean_calcTactic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcTactic___closed__2_value),((lean_object*)&l_Lean_calcSteps___closed__15_value)}};
static const lean_object* l_Lean_calcTactic___closed__3 = (const lean_object*)&l_Lean_calcTactic___closed__3_value;
static const lean_ctor_object l_Lean_calcTactic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_calcTactic___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_calcTactic___closed__3_value)}};
static const lean_object* l_Lean_calcTactic___closed__4 = (const lean_object*)&l_Lean_calcTactic___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_calcTactic = (const lean_object*)&l_Lean_calcTactic___closed__4_value;
static const lean_string_object l_Lean_convCalc___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "convCalc_"};
static const lean_object* l_Lean_convCalc___00__closed__0 = (const lean_object*)&l_Lean_convCalc___00__closed__0_value;
static const lean_ctor_object l_Lean_convCalc___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_convCalc___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_convCalc___00__closed__1_value_aux_0),((lean_object*)&l_Lean_convCalc___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 82, 111, 111, 95, 3, 213, 249)}};
static const lean_object* l_Lean_convCalc___00__closed__1 = (const lean_object*)&l_Lean_convCalc___00__closed__1_value;
static const lean_ctor_object l_Lean_convCalc___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_convCalc___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_calcTactic___closed__3_value)}};
static const lean_object* l_Lean_convCalc___00__closed__2 = (const lean_object*)&l_Lean_convCalc___00__closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_convCalc__ = (const lean_object*)&l_Lean_convCalc___00__closed__2_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Conv"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__1 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__1_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedTactic"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__2 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__2_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value_aux_3),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 28, 213, 2, 207, 8, 223, 137)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__4 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__4_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__5 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__5_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__7 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__7_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8_value;
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandUnit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_fakeMod"};
static const lean_object* l_unexpandUnit___redArg___closed__0 = (const lean_object*)&l_unexpandUnit___redArg___closed__0_value;
static const lean_ctor_object l_unexpandUnit___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandUnit___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 44, 241, 255, 153, 255, 67, 53)}};
static const lean_object* l_unexpandUnit___redArg___closed__1 = (const lean_object*)&l_unexpandUnit___redArg___closed__1_value;
static const lean_string_object l_unexpandUnit___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_unexpandUnit___redArg___closed__2 = (const lean_object*)&l_unexpandUnit___redArg___closed__2_value;
static const lean_ctor_object l_unexpandUnit___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_unexpandUnit___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_unexpandUnit___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_unexpandUnit___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__3_value_aux_2),((lean_object*)&l_unexpandUnit___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_unexpandUnit___redArg___closed__3 = (const lean_object*)&l_unexpandUnit___redArg___closed__3_value;
static const lean_string_object l_unexpandUnit___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_unexpandUnit___redArg___closed__4 = (const lean_object*)&l_unexpandUnit___redArg___closed__4_value;
static const lean_ctor_object l_unexpandUnit___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_unexpandUnit___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_unexpandUnit___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__5_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_unexpandUnit___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__5_value_aux_2),((lean_object*)&l_unexpandUnit___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_unexpandUnit___redArg___closed__5 = (const lean_object*)&l_unexpandUnit___redArg___closed__5_value;
static const lean_string_object l_unexpandUnit___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_unexpandUnit___redArg___closed__6 = (const lean_object*)&l_unexpandUnit___redArg___closed__6_value;
static const lean_ctor_object l_unexpandUnit___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandUnit___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_unexpandUnit___redArg___closed__7 = (const lean_object*)&l_unexpandUnit___redArg___closed__7_value;
static const lean_string_object l_unexpandUnit___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_unexpandUnit___redArg___closed__8 = (const lean_object*)&l_unexpandUnit___redArg___closed__8_value;
static lean_once_cell_t l_unexpandUnit___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_unexpandUnit___redArg___closed__9;
static lean_once_cell_t l_unexpandUnit___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_unexpandUnit___redArg___closed__10;
static lean_once_cell_t l_unexpandUnit___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_unexpandUnit___redArg___closed__11;
static lean_once_cell_t l_unexpandUnit___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_unexpandUnit___redArg___closed__12;
static const lean_ctor_object l_unexpandUnit___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_unexpandUnit___redArg___closed__13 = (const lean_object*)&l_unexpandUnit___redArg___closed__13_value;
static const lean_ctor_object l_unexpandUnit___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__13_value)}};
static const lean_object* l_unexpandUnit___redArg___closed__14 = (const lean_object*)&l_unexpandUnit___redArg___closed__14_value;
static const lean_ctor_object l_unexpandUnit___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_unexpandUnit___redArg___closed__15 = (const lean_object*)&l_unexpandUnit___redArg___closed__15_value;
static lean_once_cell_t l_unexpandUnit___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_unexpandUnit___redArg___closed__16;
LEAN_EXPORT lean_object* l_unexpandUnit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandUnit___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandUnit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandUnit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandListNil___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l_unexpandListNil___redArg___closed__0 = (const lean_object*)&l_unexpandListNil___redArg___closed__0_value;
static const lean_ctor_object l_unexpandListNil___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandListNil___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l_unexpandListNil___redArg___closed__1 = (const lean_object*)&l_unexpandListNil___redArg___closed__1_value;
static const lean_string_object l_unexpandListNil___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_unexpandListNil___redArg___closed__2 = (const lean_object*)&l_unexpandListNil___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_unexpandListNil___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandListNil___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandListNil(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandListNil___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandListCons___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "omission"};
static const lean_object* l_unexpandListCons___closed__0 = (const lean_object*)&l_unexpandListCons___closed__0_value;
static const lean_ctor_object l_unexpandListCons___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_unexpandListCons___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandListCons___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_unexpandListCons___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandListCons___closed__1_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_unexpandListCons___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandListCons___closed__1_value_aux_2),((lean_object*)&l_unexpandListCons___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 154, 52, 140, 5, 177, 16, 6)}};
static const lean_object* l_unexpandListCons___closed__1 = (const lean_object*)&l_unexpandListCons___closed__1_value;
LEAN_EXPORT lean_object* l_unexpandListCons(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandListCons___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandListToArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_unexpandListToArray___closed__0 = (const lean_object*)&l_unexpandListToArray___closed__0_value;
static const lean_ctor_object l_unexpandListToArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandListToArray___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_unexpandListToArray___closed__1 = (const lean_object*)&l_unexpandListToArray___closed__1_value;
static const lean_string_object l_unexpandListToArray___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_unexpandListToArray___closed__2 = (const lean_object*)&l_unexpandListToArray___closed__2_value;
LEAN_EXPORT lean_object* l_unexpandListToArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandListToArray___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandProdMk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandProdMk___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l_unexpandIte___closed__0 = (const lean_object*)&l_unexpandIte___closed__0_value;
static const lean_ctor_object l_unexpandIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l_unexpandIte___closed__1 = (const lean_object*)&l_unexpandIte___closed__1_value;
static const lean_string_object l_unexpandIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_unexpandIte___closed__2 = (const lean_object*)&l_unexpandIte___closed__2_value;
static const lean_string_object l_unexpandIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_unexpandIte___closed__3 = (const lean_object*)&l_unexpandIte___closed__3_value;
static const lean_string_object l_unexpandIte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_unexpandIte___closed__4 = (const lean_object*)&l_unexpandIte___closed__4_value;
LEAN_EXPORT lean_object* l_unexpandIte(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandIte___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandEqNDRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_unexpandEqNDRec___closed__0 = (const lean_object*)&l_unexpandEqNDRec___closed__0_value;
static const lean_ctor_object l_unexpandEqNDRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_unexpandEqNDRec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandEqNDRec___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_unexpandEqNDRec___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandEqNDRec___closed__1_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_unexpandEqNDRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandEqNDRec___closed__1_value_aux_2),((lean_object*)&l_unexpandEqNDRec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 13, 108, 115, 152, 155, 29, 181)}};
static const lean_object* l_unexpandEqNDRec___closed__1 = (const lean_object*)&l_unexpandEqNDRec___closed__1_value;
static const lean_string_object l_unexpandEqNDRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "▸"};
static const lean_object* l_unexpandEqNDRec___closed__2 = (const lean_object*)&l_unexpandEqNDRec___closed__2_value;
LEAN_EXPORT lean_object* l_unexpandEqNDRec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandEqNDRec___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandEqRec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandEqRec___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandExists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_unexpandExists___closed__0 = (const lean_object*)&l_unexpandExists___closed__0_value;
static const lean_ctor_object l_unexpandExists___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_unexpandExists___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandExists___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_unexpandExists___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandExists___closed__1_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_unexpandExists___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandExists___closed__1_value_aux_2),((lean_object*)&l_unexpandExists___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_unexpandExists___closed__1 = (const lean_object*)&l_unexpandExists___closed__1_value;
static const lean_string_object l_unexpandExists___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_unexpandExists___closed__2 = (const lean_object*)&l_unexpandExists___closed__2_value;
static const lean_ctor_object l_unexpandExists___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_unexpandExists___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandExists___closed__3_value_aux_0),((lean_object*)&l_unexpandExists___closed__2_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_unexpandExists___closed__3 = (const lean_object*)&l_unexpandExists___closed__3_value;
LEAN_EXPORT lean_object* l_unexpandExists(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandExists___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandSigma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "×"};
static const lean_object* l_unexpandSigma___closed__0 = (const lean_object*)&l_unexpandSigma___closed__0_value;
LEAN_EXPORT lean_object* l_unexpandSigma(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandSigma___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandPSigma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 2, .m_data = "×'"};
static const lean_object* l_unexpandPSigma___closed__0 = (const lean_object*)&l_unexpandPSigma___closed__0_value;
LEAN_EXPORT lean_object* l_unexpandPSigma(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandPSigma___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandSubtype___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "term{_:_//_}"};
static const lean_object* l_unexpandSubtype___closed__0 = (const lean_object*)&l_unexpandSubtype___closed__0_value;
static const lean_ctor_object l_unexpandSubtype___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandSubtype___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 133, 82, 74, 101, 189, 164, 87)}};
static const lean_object* l_unexpandSubtype___closed__1 = (const lean_object*)&l_unexpandSubtype___closed__1_value;
static const lean_string_object l_unexpandSubtype___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_unexpandSubtype___closed__2 = (const lean_object*)&l_unexpandSubtype___closed__2_value;
static const lean_string_object l_unexpandSubtype___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l_unexpandSubtype___closed__3 = (const lean_object*)&l_unexpandSubtype___closed__3_value;
static const lean_string_object l_unexpandSubtype___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_unexpandSubtype___closed__4 = (const lean_object*)&l_unexpandSubtype___closed__4_value;
LEAN_EXPORT lean_object* l_unexpandSubtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandSubtype___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandTSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandTSyntax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandTSyntaxArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandTSyntaxArray___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandTSepArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandTSepArray___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandGetElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term__[_]"};
static const lean_object* l_unexpandGetElem___closed__0 = (const lean_object*)&l_unexpandGetElem___closed__0_value;
static const lean_ctor_object l_unexpandGetElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandGetElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 68, 146, 84, 128, 183, 70, 246)}};
static const lean_object* l_unexpandGetElem___closed__1 = (const lean_object*)&l_unexpandGetElem___closed__1_value;
LEAN_EXPORT lean_object* l_unexpandGetElem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandGetElem___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandGetElem_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term__[_]_!"};
static const lean_object* l_unexpandGetElem_x21___closed__0 = (const lean_object*)&l_unexpandGetElem_x21___closed__0_value;
static const lean_ctor_object l_unexpandGetElem_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandGetElem_x21___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 145, 92, 47, 59, 8, 18, 13)}};
static const lean_object* l_unexpandGetElem_x21___closed__1 = (const lean_object*)&l_unexpandGetElem_x21___closed__1_value;
static const lean_string_object l_unexpandGetElem_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l_unexpandGetElem_x21___closed__2 = (const lean_object*)&l_unexpandGetElem_x21___closed__2_value;
LEAN_EXPORT lean_object* l_unexpandGetElem_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandGetElem_x21___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_unexpandGetElem_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "term__[_]_\?"};
static const lean_object* l_unexpandGetElem_x3f___closed__0 = (const lean_object*)&l_unexpandGetElem_x3f___closed__0_value;
static const lean_ctor_object l_unexpandGetElem_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_unexpandGetElem_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 178, 109, 68, 161, 229, 23, 17)}};
static const lean_object* l_unexpandGetElem_x3f___closed__1 = (const lean_object*)&l_unexpandGetElem_x3f___closed__1_value;
static const lean_string_object l_unexpandGetElem_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_unexpandGetElem_x3f___closed__2 = (const lean_object*)&l_unexpandGetElem_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_unexpandGetElem_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandGetElem_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandArrayEmpty___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandArrayEmpty___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandArrayEmpty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandArrayEmpty___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unexpandMkArray8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_tacticFunext_______00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "tacticFunext___"};
static const lean_object* l_tacticFunext_______00__closed__0 = (const lean_object*)&l_tacticFunext_______00__closed__0_value;
static const lean_ctor_object l_tacticFunext_______00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_tacticFunext_______00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 155, 131, 24, 73, 26, 166, 240)}};
static const lean_object* l_tacticFunext_______00__closed__1 = (const lean_object*)&l_tacticFunext_______00__closed__1_value;
static const lean_string_object l_tacticFunext_______00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "funext"};
static const lean_object* l_tacticFunext_______00__closed__2 = (const lean_object*)&l_tacticFunext_______00__closed__2_value;
static const lean_ctor_object l_tacticFunext_______00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_tacticFunext_______00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_tacticFunext_______00__closed__3 = (const lean_object*)&l_tacticFunext_______00__closed__3_value;
static const lean_string_object l_tacticFunext_______00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colGt"};
static const lean_object* l_tacticFunext_______00__closed__4 = (const lean_object*)&l_tacticFunext_______00__closed__4_value;
static const lean_ctor_object l_tacticFunext_______00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_tacticFunext_______00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(185, 236, 32, 153, 169, 213, 53, 244)}};
static const lean_object* l_tacticFunext_______00__closed__5 = (const lean_object*)&l_tacticFunext_______00__closed__5_value;
static const lean_ctor_object l_tacticFunext_______00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_tacticFunext_______00__closed__5_value)}};
static const lean_object* l_tacticFunext_______00__closed__6 = (const lean_object*)&l_tacticFunext_______00__closed__6_value;
static const lean_ctor_object l_tacticFunext_______00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__9_value),((lean_object*)&l_tacticFunext_______00__closed__6_value)}};
static const lean_object* l_tacticFunext_______00__closed__7 = (const lean_object*)&l_tacticFunext_______00__closed__7_value;
static const lean_ctor_object l_tacticFunext_______00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__17_value),((lean_object*)(((size_t)(1024) << 1) | 1))}};
static const lean_object* l_tacticFunext_______00__closed__8 = (const lean_object*)&l_tacticFunext_______00__closed__8_value;
static const lean_ctor_object l_tacticFunext_______00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_tacticFunext_______00__closed__7_value),((lean_object*)&l_tacticFunext_______00__closed__8_value)}};
static const lean_object* l_tacticFunext_______00__closed__9 = (const lean_object*)&l_tacticFunext_______00__closed__9_value;
static const lean_ctor_object l_tacticFunext_______00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20_value),((lean_object*)&l_tacticFunext_______00__closed__9_value)}};
static const lean_object* l_tacticFunext_______00__closed__10 = (const lean_object*)&l_tacticFunext_______00__closed__10_value;
static const lean_ctor_object l_tacticFunext_______00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_tacticFunext_______00__closed__3_value),((lean_object*)&l_tacticFunext_______00__closed__10_value)}};
static const lean_object* l_tacticFunext_______00__closed__11 = (const lean_object*)&l_tacticFunext_______00__closed__11_value;
static const lean_ctor_object l_tacticFunext_______00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_tacticFunext_______00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_tacticFunext_______00__closed__11_value)}};
static const lean_object* l_tacticFunext_______00__closed__12 = (const lean_object*)&l_tacticFunext_______00__closed__12_value;
LEAN_EXPORT const lean_object* l_tacticFunext______ = (const lean_object*)&l_tacticFunext_______00__closed__12_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "seq1"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__0 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__0_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 140, 137, 56, 141, 11, 143, 117)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__2 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__2_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(202, 125, 237, 78, 179, 140, 218, 80)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3_value;
static lean_once_cell_t l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_tacticFunext_______00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(226, 251, 226, 140, 5, 134, 146, 130)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__5 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__5_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__6 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__6_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__7 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__7_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__8 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__8_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__9 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__9_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(41, 145, 9, 18, 75, 146, 159, 78)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticRepeat_"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__11 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__11_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(149, 101, 42, 245, 144, 172, 68, 230)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "repeat"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__13 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__13_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__14 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__14_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15_value;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "List.cons"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__4_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__5_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__7_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term%[_|_]"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__0 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__0_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 149, 151, 28, 109, 173, 225, 162)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__1 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__1_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__2 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__2_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 166, 195, 152, 24, 103, 8, 2)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__4 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__4_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__6 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__6_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__8 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__8_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__10 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__10_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__12 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__12_value;
static lean_once_cell_t l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__13;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(72, 55, 55, 9, 143, 73, 230, 150)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__14 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__14_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "%["};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__15 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__15_value;
static lean_once_cell_t l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Command_classAbbrev___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "classAbbrev"};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__0 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__1_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 112, 139, 141, 120, 66, 29, 3)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__1 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(113, 135, 0, 93, 130, 217, 220, 132)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__2 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__2_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__3 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__3_value;
static const lean_string_object l_Lean_Parser_Command_classAbbrev___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "class "};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__4 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__4_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__4_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__5 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__3_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__5_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__6 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__6_value;
static const lean_string_object l_Lean_Parser_Command_classAbbrev___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "abbrev "};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__7 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__7_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__8 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__8_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__6_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__8_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__9 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__9_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(210, 155, 24, 168, 139, 44, 164, 47)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__10 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__10_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__10_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__11 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__11_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__9_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__11_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__12 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__12_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20_value),((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__23_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__13 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__13_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__12_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__13_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__14 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__14_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__15 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__15_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__15_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__16 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__16_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__13_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__16_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__17 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__17_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__14_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__17_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__18 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__18_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__19 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__19_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__18_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__19_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__20 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__20_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__21 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__21_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__13_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__21_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__22 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__22_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_calcFirstStep___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__22_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__23 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__23_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__23_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__24 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__24_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__20_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__24_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__25 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__25_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__25_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__26 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__26_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__20_value),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__26_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__27 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__27_value;
static const lean_ctor_object l_Lean_Parser_Command_classAbbrev___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__27_value)}};
static const lean_object* l_Lean_Parser_Command_classAbbrev___closed__28 = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__28_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Command_classAbbrev = (const lean_object*)&l_Lean_Parser_Command_classAbbrev___closed__28_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0___closed__0 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0___closed__0_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0___closed__1 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "structParent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 41, 245, 205, 163, 229, 236, 195)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "extends"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__1 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__1_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(231, 24, 97, 144, 91, 250, 92, 29)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optDeriving"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__3 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__3_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(215, 163, 253, 206, 79, 89, 101, 240)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__5 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__5_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__7 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__7_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(128, 1, 138, 227, 223, 112, 103, 179)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "structure"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__10 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__10_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(180, 236, 187, 15, 83, 171, 117, 65)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "classTk"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__12 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__12_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(166, 117, 114, 200, 210, 60, 33, 9)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__14 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__14_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15_value;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_cdotTk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cdotTk"};
static const lean_object* l_Lean_cdotTk___closed__0 = (const lean_object*)&l_Lean_cdotTk___closed__0_value;
static const lean_ctor_object l_Lean_cdotTk___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_cdotTk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_cdotTk___closed__1_value_aux_0),((lean_object*)&l_Lean_cdotTk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 126, 44, 217, 38, 3, 69, 145)}};
static const lean_object* l_Lean_cdotTk___closed__1 = (const lean_object*)&l_Lean_cdotTk___closed__1_value;
static const lean_string_object l_Lean_cdotTk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 2, .m_data = "· "};
static const lean_object* l_Lean_cdotTk___closed__2 = (const lean_object*)&l_Lean_cdotTk___closed__2_value;
static const lean_string_object l_Lean_cdotTk___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ". "};
static const lean_object* l_Lean_cdotTk___closed__3 = (const lean_object*)&l_Lean_cdotTk___closed__3_value;
static const lean_ctor_object l_Lean_cdotTk___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 12}, .m_objs = {((lean_object*)&l_Lean_cdotTk___closed__2_value),((lean_object*)&l_Lean_cdotTk___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_cdotTk___closed__4 = (const lean_object*)&l_Lean_cdotTk___closed__4_value;
static const lean_ctor_object l_Lean_cdotTk___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_cdotTk___closed__0_value),((lean_object*)&l_Lean_cdotTk___closed__1_value),((lean_object*)&l_Lean_cdotTk___closed__4_value)}};
static const lean_object* l_Lean_cdotTk___closed__5 = (const lean_object*)&l_Lean_cdotTk___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_cdotTk = (const lean_object*)&l_Lean_cdotTk___closed__5_value;
static const lean_string_object l_Lean_cdot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l_Lean_cdot___closed__0 = (const lean_object*)&l_Lean_cdot___closed__0_value;
static const lean_ctor_object l_Lean_cdot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_cdot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_cdot___closed__1_value_aux_0),((lean_object*)&l_Lean_cdot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 151, 138, 49, 249, 18, 254, 242)}};
static const lean_object* l_Lean_cdot___closed__1 = (const lean_object*)&l_Lean_cdot___closed__1_value;
static const lean_string_object l_Lean_cdot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tacticSeqIndentGt"};
static const lean_object* l_Lean_cdot___closed__2 = (const lean_object*)&l_Lean_cdot___closed__2_value;
static const lean_ctor_object l_Lean_cdot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_cdot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 96, 154, 40, 0, 37, 199, 17)}};
static const lean_object* l_Lean_cdot___closed__3 = (const lean_object*)&l_Lean_cdot___closed__3_value;
static const lean_ctor_object l_Lean_cdot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_cdot___closed__3_value)}};
static const lean_object* l_Lean_cdot___closed__4 = (const lean_object*)&l_Lean_cdot___closed__4_value;
static const lean_ctor_object l_Lean_cdot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_cdotTk___closed__5_value),((lean_object*)&l_Lean_cdot___closed__4_value)}};
static const lean_object* l_Lean_cdot___closed__5 = (const lean_object*)&l_Lean_cdot___closed__5_value;
static const lean_ctor_object l_Lean_cdot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_cdot___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_cdot___closed__5_value)}};
static const lean_object* l_Lean_cdot___closed__6 = (const lean_object*)&l_Lean_cdot___closed__6_value;
LEAN_EXPORT const lean_object* l_Lean_cdot = (const lean_object*)&l_Lean_cdot___closed__6_value;
static const lean_string_object l_Lean_solveTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "solveTactic"};
static const lean_object* l_Lean_solveTactic___closed__0 = (const lean_object*)&l_Lean_solveTactic___closed__0_value;
static const lean_ctor_object l_Lean_solveTactic___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_solveTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_solveTactic___closed__1_value_aux_0),((lean_object*)&l_Lean_solveTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 93, 240, 221, 8, 79, 216, 244)}};
static const lean_object* l_Lean_solveTactic___closed__1 = (const lean_object*)&l_Lean_solveTactic___closed__1_value;
static const lean_string_object l_Lean_solveTactic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "solve"};
static const lean_object* l_Lean_solveTactic___closed__2 = (const lean_object*)&l_Lean_solveTactic___closed__2_value;
static const lean_ctor_object l_Lean_solveTactic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_solveTactic___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_solveTactic___closed__3 = (const lean_object*)&l_Lean_solveTactic___closed__3_value;
static const lean_string_object l_Lean_solveTactic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ppDedent"};
static const lean_object* l_Lean_solveTactic___closed__4 = (const lean_object*)&l_Lean_solveTactic___closed__4_value;
static const lean_ctor_object l_Lean_solveTactic___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_solveTactic___closed__4_value),LEAN_SCALAR_PTR_LITERAL(242, 37, 230, 124, 106, 100, 159, 37)}};
static const lean_object* l_Lean_solveTactic___closed__5 = (const lean_object*)&l_Lean_solveTactic___closed__5_value;
static const lean_ctor_object l_Lean_solveTactic___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_solveTactic___closed__5_value),((lean_object*)&l_Lean_calcSteps___closed__4_value)}};
static const lean_object* l_Lean_solveTactic___closed__6 = (const lean_object*)&l_Lean_solveTactic___closed__6_value;
static const lean_ctor_object l_Lean_solveTactic___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_solveTactic___closed__6_value),((lean_object*)&l_Lean_unifConstraintElem___closed__4_value)}};
static const lean_object* l_Lean_solveTactic___closed__7 = (const lean_object*)&l_Lean_solveTactic___closed__7_value;
static const lean_string_object l_Lean_solveTactic___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "| "};
static const lean_object* l_Lean_solveTactic___closed__8 = (const lean_object*)&l_Lean_solveTactic___closed__8_value;
static const lean_ctor_object l_Lean_solveTactic___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_solveTactic___closed__8_value)}};
static const lean_object* l_Lean_solveTactic___closed__9 = (const lean_object*)&l_Lean_solveTactic___closed__9_value;
static const lean_ctor_object l_Lean_solveTactic___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_solveTactic___closed__7_value),((lean_object*)&l_Lean_solveTactic___closed__9_value)}};
static const lean_object* l_Lean_solveTactic___closed__10 = (const lean_object*)&l_Lean_solveTactic___closed__10_value;
static const lean_ctor_object l_Lean_solveTactic___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(13, 106, 54, 236, 164, 218, 24, 154)}};
static const lean_object* l_Lean_solveTactic___closed__11 = (const lean_object*)&l_Lean_solveTactic___closed__11_value;
static const lean_ctor_object l_Lean_solveTactic___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_solveTactic___closed__11_value)}};
static const lean_object* l_Lean_solveTactic___closed__12 = (const lean_object*)&l_Lean_solveTactic___closed__12_value;
static const lean_ctor_object l_Lean_solveTactic___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_solveTactic___closed__10_value),((lean_object*)&l_Lean_solveTactic___closed__12_value)}};
static const lean_object* l_Lean_solveTactic___closed__13 = (const lean_object*)&l_Lean_solveTactic___closed__13_value;
static const lean_ctor_object l_Lean_solveTactic___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38_value),((lean_object*)&l_Lean_solveTactic___closed__13_value)}};
static const lean_object* l_Lean_solveTactic___closed__14 = (const lean_object*)&l_Lean_solveTactic___closed__14_value;
static const lean_ctor_object l_Lean_solveTactic___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__6_value),((lean_object*)&l_Lean_solveTactic___closed__14_value)}};
static const lean_object* l_Lean_solveTactic___closed__15 = (const lean_object*)&l_Lean_solveTactic___closed__15_value;
static const lean_ctor_object l_Lean_solveTactic___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31_value),((lean_object*)&l_Lean_solveTactic___closed__15_value)}};
static const lean_object* l_Lean_solveTactic___closed__16 = (const lean_object*)&l_Lean_solveTactic___closed__16_value;
static const lean_ctor_object l_Lean_solveTactic___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_solveTactic___closed__3_value),((lean_object*)&l_Lean_solveTactic___closed__16_value)}};
static const lean_object* l_Lean_solveTactic___closed__17 = (const lean_object*)&l_Lean_solveTactic___closed__17_value;
static const lean_ctor_object l_Lean_solveTactic___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_solveTactic___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_solveTactic___closed__17_value)}};
static const lean_object* l_Lean_solveTactic___closed__18 = (const lean_object*)&l_Lean_solveTactic___closed__18_value;
LEAN_EXPORT const lean_object* l_Lean_solveTactic = (const lean_object*)&l_Lean_solveTactic___closed__18_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 179, 82, 204, 87, 48, 123)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "focus"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__0 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__0_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 223, 207, 6, 131, 57, 182, 221)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "first"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__2 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__2_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3_value_aux_1),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(59, 232, 35, 17, 172, 62, 48, 174)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_term__Matches___x7c___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "term_Matches_|"};
static const lean_object* l_Lean_term__Matches___x7c___closed__0 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__0_value;
static const lean_ctor_object l_Lean_term__Matches___x7c___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_term__Matches___x7c___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_term__Matches___x7c___closed__1_value_aux_0),((lean_object*)&l_Lean_term__Matches___x7c___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 90, 108, 139, 70, 136, 238, 145)}};
static const lean_object* l_Lean_term__Matches___x7c___closed__1 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__1_value;
static const lean_string_object l_Lean_term__Matches___x7c___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " matches "};
static const lean_object* l_Lean_term__Matches___x7c___closed__2 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__2_value;
static const lean_ctor_object l_Lean_term__Matches___x7c___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_term__Matches___x7c___closed__2_value)}};
static const lean_object* l_Lean_term__Matches___x7c___closed__3 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__3_value;
static const lean_ctor_object l_Lean_term__Matches___x7c___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__17_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l_Lean_term__Matches___x7c___closed__4 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__4_value;
static const lean_string_object l_Lean_term__Matches___x7c___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* l_Lean_term__Matches___x7c___closed__5 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__5_value;
static const lean_ctor_object l_Lean_term__Matches___x7c___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_term__Matches___x7c___closed__5_value)}};
static const lean_object* l_Lean_term__Matches___x7c___closed__6 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__6_value;
static const lean_ctor_object l_Lean_term__Matches___x7c___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Lean_term__Matches___x7c___closed__4_value),((lean_object*)&l_Lean_term__Matches___x7c___closed__5_value),((lean_object*)&l_Lean_term__Matches___x7c___closed__6_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_term__Matches___x7c___closed__7 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__7_value;
static const lean_ctor_object l_Lean_term__Matches___x7c___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_Lean_term__Matches___x7c___closed__3_value),((lean_object*)&l_Lean_term__Matches___x7c___closed__7_value)}};
static const lean_object* l_Lean_term__Matches___x7c___closed__8 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__8_value;
static const lean_ctor_object l_Lean_term__Matches___x7c___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_term__Matches___x7c___closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&l_Lean_term__Matches___x7c___closed__8_value)}};
static const lean_object* l_Lean_term__Matches___x7c___closed__9 = (const lean_object*)&l_Lean_term__Matches___x7c___closed__9_value;
LEAN_EXPORT const lean_object* l_Lean_term__Matches___x7c = (const lean_object*)&l_Lean_term__Matches___x7c___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_unexpandUnit___redArg___closed__14_value),((lean_object*)&l_unexpandUnit___redArg___closed__15_value)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__0 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__0_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1_value_aux_2),((lean_object*)&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__2 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__2_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__4 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__4_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__6 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__6_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__7 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__7_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__9 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__9_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10_value_aux_0),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10_value_aux_1),((lean_object*)&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10_value_aux_2),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10_value;
static lean_once_cell_t l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__11;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__12 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__12_value;
static lean_once_cell_t l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__13;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(235, 97, 249, 134, 197, 220, 12, 91)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__14 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__14_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__15 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__15_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__16_value_aux_0),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__16 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__16_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__17 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__17_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__18 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__18_value;
static const lean_string_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__19 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__19_value;
static lean_once_cell_t l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__20;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(160, 214, 196, 140, 104, 187, 164, 111)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__21 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__21_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__22_value_aux_0),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__22 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__22_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__23 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__23_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__24 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__24_value;
static lean_once_cell_t l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__25;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__26 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__26_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__27 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__27_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__26_value)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__28 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__28_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__29 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__29_value;
static const lean_ctor_object l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__27_value),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__29_value)}};
static const lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__30 = (const lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__30_value;
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_term_x7b___x7d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term{_}"};
static const lean_object* l_term_x7b___x7d___closed__0 = (const lean_object*)&l_term_x7b___x7d___closed__0_value;
static const lean_ctor_object l_term_x7b___x7d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x7b___x7d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 26, 220, 95, 138, 254, 219, 101)}};
static const lean_object* l_term_x7b___x7d___closed__1 = (const lean_object*)&l_term_x7b___x7d___closed__1_value;
static const lean_ctor_object l_term_x7b___x7d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_unexpandSubtype___closed__2_value)}};
static const lean_object* l_term_x7b___x7d___closed__2 = (const lean_object*)&l_term_x7b___x7d___closed__2_value;
static const lean_ctor_object l_term_x7b___x7d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__31_value),((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__18_value)}};
static const lean_object* l_term_x7b___x7d___closed__3 = (const lean_object*)&l_term_x7b___x7d___closed__3_value;
static const lean_ctor_object l_term_x7b___x7d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_term_x7b___x7d___closed__3_value),((lean_object*)&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17_value),((lean_object*)&l_Lean_unifConstraintElem___closed__7_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_term_x7b___x7d___closed__4 = (const lean_object*)&l_term_x7b___x7d___closed__4_value;
static const lean_ctor_object l_term_x7b___x7d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_term_x7b___x7d___closed__2_value),((lean_object*)&l_term_x7b___x7d___closed__4_value)}};
static const lean_object* l_term_x7b___x7d___closed__5 = (const lean_object*)&l_term_x7b___x7d___closed__5_value;
static const lean_ctor_object l_term_x7b___x7d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_unexpandSubtype___closed__4_value)}};
static const lean_object* l_term_x7b___x7d___closed__6 = (const lean_object*)&l_term_x7b___x7d___closed__6_value;
static const lean_ctor_object l_term_x7b___x7d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_unbracketedExplicitBinders___closed__4_value),((lean_object*)&l_term_x7b___x7d___closed__5_value),((lean_object*)&l_term_x7b___x7d___closed__6_value)}};
static const lean_object* l_term_x7b___x7d___closed__7 = (const lean_object*)&l_term_x7b___x7d___closed__7_value;
static const lean_ctor_object l_term_x7b___x7d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x7b___x7d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_term_x7b___x7d___closed__7_value)}};
static const lean_object* l_term_x7b___x7d___closed__8 = (const lean_object*)&l_term_x7b___x7d___closed__8_value;
LEAN_EXPORT const lean_object* l_term_x7b___x7d = (const lean_object*)&l_term_x7b___x7d___closed__8_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "insert"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__0 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__0_value;
static lean_once_cell_t l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__1;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 186, 105, 165, 216, 51, 157, 222)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__2 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__2_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Insert"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__3 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__3_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(126, 209, 156, 174, 188, 62, 109, 85)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 132, 219, 243, 180, 219, 203, 85)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__4 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__4_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__5 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__5_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__6 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__6_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "singleton"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__7 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__7_value;
static lean_once_cell_t l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__8;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(208, 33, 246, 107, 223, 5, 156, 82)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__9 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__9_value;
static const lean_string_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Singleton"};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__10 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__10_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(190, 73, 36, 155, 228, 35, 161, 122)}};
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__11_value_aux_0),((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(185, 48, 115, 60, 21, 14, 217, 215)}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__11 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__11_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__12 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__12_value;
static const lean_ctor_object l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__13 = (const lean_object*)&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__13_value;
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_singletonUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_singletonUnexpander___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_insertUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_insertUnexpander___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_unbracketedExplicitBinders___closed__10(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_17_ = l_Lean_binderIdent;
v___x_18_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__9));
v___x_19_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_20_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set(v___x_20_, 2, v___x_17_);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_unbracketedExplicitBinders___closed__11(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_21_ = lean_obj_once(&l_Lean_unbracketedExplicitBinders___closed__10, &l_Lean_unbracketedExplicitBinders___closed__10_once, _init_l_Lean_unbracketedExplicitBinders___closed__10);
v___x_22_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__6));
v___x_23_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___x_21_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_unbracketedExplicitBinders___closed__21(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_43_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__20));
v___x_44_ = lean_obj_once(&l_Lean_unbracketedExplicitBinders___closed__11, &l_Lean_unbracketedExplicitBinders___closed__11_once, _init_l_Lean_unbracketedExplicitBinders___closed__11);
v___x_45_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_46_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
lean_ctor_set(v___x_46_, 2, v___x_43_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_unbracketedExplicitBinders___closed__22(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_47_ = lean_obj_once(&l_Lean_unbracketedExplicitBinders___closed__21, &l_Lean_unbracketedExplicitBinders___closed__21_once, _init_l_Lean_unbracketedExplicitBinders___closed__21);
v___x_48_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__2));
v___x_49_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__0));
v___x_50_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___x_48_);
lean_ctor_set(v___x_50_, 2, v___x_47_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_unbracketedExplicitBinders(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_obj_once(&l_Lean_unbracketedExplicitBinders___closed__22, &l_Lean_unbracketedExplicitBinders___closed__22_once, _init_l_Lean_unbracketedExplicitBinders___closed__22);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders___closed__6(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_62_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__9));
v___x_63_ = l_Lean_binderIdent;
v___x_64_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_65_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v___x_63_);
lean_ctor_set(v___x_65_, 2, v___x_62_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders___closed__7(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = lean_obj_once(&l_Lean_bracketedExplicitBinders___closed__6, &l_Lean_bracketedExplicitBinders___closed__6_once, _init_l_Lean_bracketedExplicitBinders___closed__6);
v___x_67_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__6));
v___x_68_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders___closed__10(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_72_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__9));
v___x_73_ = lean_obj_once(&l_Lean_bracketedExplicitBinders___closed__7, &l_Lean_bracketedExplicitBinders___closed__7_once, _init_l_Lean_bracketedExplicitBinders___closed__7);
v___x_74_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_75_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___x_73_);
lean_ctor_set(v___x_75_, 2, v___x_72_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders___closed__11(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_76_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__18));
v___x_77_ = lean_obj_once(&l_Lean_bracketedExplicitBinders___closed__10, &l_Lean_bracketedExplicitBinders___closed__10_once, _init_l_Lean_bracketedExplicitBinders___closed__10);
v___x_78_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_79_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_76_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders___closed__12(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_obj_once(&l_Lean_bracketedExplicitBinders___closed__11, &l_Lean_bracketedExplicitBinders___closed__11_once, _init_l_Lean_bracketedExplicitBinders___closed__11);
v___x_81_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__5));
v___x_82_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders___closed__13(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = lean_obj_once(&l_Lean_bracketedExplicitBinders___closed__12, &l_Lean_bracketedExplicitBinders___closed__12_once, _init_l_Lean_bracketedExplicitBinders___closed__12);
v___x_84_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__3));
v___x_85_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_86_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
lean_ctor_set(v___x_86_, 2, v___x_83_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders___closed__16(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_90_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__15));
v___x_91_ = lean_obj_once(&l_Lean_bracketedExplicitBinders___closed__13, &l_Lean_bracketedExplicitBinders___closed__13_once, _init_l_Lean_bracketedExplicitBinders___closed__13);
v___x_92_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_93_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_91_);
lean_ctor_set(v___x_93_, 2, v___x_90_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders___closed__17(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_94_ = lean_obj_once(&l_Lean_bracketedExplicitBinders___closed__16, &l_Lean_bracketedExplicitBinders___closed__16_once, _init_l_Lean_bracketedExplicitBinders___closed__16);
v___x_95_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__1));
v___x_96_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__0));
v___x_97_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
lean_ctor_set(v___x_97_, 2, v___x_94_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_bracketedExplicitBinders(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_obj_once(&l_Lean_bracketedExplicitBinders___closed__17, &l_Lean_bracketedExplicitBinders___closed__17_once, _init_l_Lean_bracketedExplicitBinders___closed__17);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_explicitBinders___closed__4(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_106_ = l_Lean_bracketedExplicitBinders;
v___x_107_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__9));
v___x_108_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_109_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_107_);
lean_ctor_set(v___x_109_, 2, v___x_106_);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_explicitBinders___closed__5(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_110_ = lean_obj_once(&l_Lean_explicitBinders___closed__4, &l_Lean_explicitBinders___closed__4_once, _init_l_Lean_explicitBinders___closed__4);
v___x_111_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__6));
v___x_112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_110_);
return v___x_112_;
}
}
static lean_object* _init_l_Lean_explicitBinders___closed__6(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_113_ = l_Lean_unbracketedExplicitBinders;
v___x_114_ = lean_obj_once(&l_Lean_explicitBinders___closed__5, &l_Lean_explicitBinders___closed__5_once, _init_l_Lean_explicitBinders___closed__5);
v___x_115_ = ((lean_object*)(l_Lean_explicitBinders___closed__3));
v___x_116_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
lean_ctor_set(v___x_116_, 2, v___x_113_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_explicitBinders___closed__7(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = lean_obj_once(&l_Lean_explicitBinders___closed__6, &l_Lean_explicitBinders___closed__6_once, _init_l_Lean_explicitBinders___closed__6);
v___x_118_ = ((lean_object*)(l_Lean_explicitBinders___closed__1));
v___x_119_ = ((lean_object*)(l_Lean_explicitBinders___closed__0));
v___x_120_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_117_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_explicitBinders(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Lean_explicitBinders___closed__7, &l_Lean_explicitBinders___closed__7_once, _init_l_Lean_explicitBinders___closed__7);
return v___x_121_;
}
}
static lean_object* _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Array_mkArray0___redArg();
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg(lean_object* v_combinator_161_, lean_object* v_idents_162_, lean_object* v_type_x3f_163_, lean_object* v_i_164_, lean_object* v_acc_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_zero_168_; uint8_t v_isZero_169_; 
v_zero_168_ = lean_unsigned_to_nat(0u);
v_isZero_169_ = lean_nat_dec_eq(v_i_164_, v_zero_168_);
if (v_isZero_169_ == 1)
{
lean_object* v___x_170_; 
lean_dec(v_i_164_);
lean_dec(v_type_x3f_163_);
lean_dec(v_combinator_161_);
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v_acc_165_);
lean_ctor_set(v___x_170_, 1, v_a_167_);
return v___x_170_;
}
else
{
lean_object* v_one_171_; lean_object* v_n_172_; lean_object* v___x_173_; lean_object* v_ident_174_; uint8_t v___x_175_; 
v_one_171_ = lean_unsigned_to_nat(1u);
v_n_172_ = lean_nat_sub(v_i_164_, v_one_171_);
lean_dec(v_i_164_);
v___x_173_ = lean_array_fget_borrowed(v_idents_162_, v_n_172_);
v_ident_174_ = l_Lean_Syntax_getArg(v___x_173_, v_zero_168_);
v___x_175_ = l_Lean_Syntax_isIdent(v_ident_174_);
if (v___x_175_ == 0)
{
lean_dec(v_ident_174_);
if (lean_obj_tag(v_type_x3f_163_) == 0)
{
lean_object* v_ref_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_ref_176_ = lean_ctor_get(v_a_166_, 5);
v___x_177_ = l_Lean_SourceInfo_fromRef(v_ref_176_, v___x_175_);
v___x_178_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
v___x_179_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_180_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__6));
v___x_181_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7));
lean_inc_n(v___x_177_, 9);
v___x_182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_177_);
lean_ctor_set(v___x_182_, 1, v___x_180_);
v___x_183_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9));
v___x_184_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11));
v___x_185_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12));
v___x_186_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_177_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = l_Lean_Syntax_node1(v___x_177_, v___x_184_, v___x_186_);
v___x_188_ = l_Lean_Syntax_node1(v___x_177_, v___x_179_, v___x_187_);
v___x_189_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_190_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_190_, 0, v___x_177_);
lean_ctor_set(v___x_190_, 1, v___x_179_);
lean_ctor_set(v___x_190_, 2, v___x_189_);
v___x_191_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14));
v___x_192_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_177_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = l_Lean_Syntax_node4(v___x_177_, v___x_183_, v___x_188_, v___x_190_, v___x_192_, v_acc_165_);
v___x_194_ = l_Lean_Syntax_node2(v___x_177_, v___x_181_, v___x_182_, v___x_193_);
v___x_195_ = l_Lean_Syntax_node1(v___x_177_, v___x_179_, v___x_194_);
lean_inc(v_combinator_161_);
v___x_196_ = l_Lean_Syntax_node2(v___x_177_, v___x_178_, v_combinator_161_, v___x_195_);
v_i_164_ = v_n_172_;
v_acc_165_ = v___x_196_;
goto _start;
}
else
{
lean_object* v_val_198_; lean_object* v_ref_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_val_198_ = lean_ctor_get(v_type_x3f_163_, 0);
v_ref_199_ = lean_ctor_get(v_a_166_, 5);
v___x_200_ = l_Lean_SourceInfo_fromRef(v_ref_199_, v___x_175_);
v___x_201_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
v___x_202_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_203_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__6));
v___x_204_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7));
lean_inc_n(v___x_200_, 11);
v___x_205_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_200_);
lean_ctor_set(v___x_205_, 1, v___x_203_);
v___x_206_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9));
v___x_207_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11));
v___x_208_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12));
v___x_209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_200_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = l_Lean_Syntax_node1(v___x_200_, v___x_207_, v___x_209_);
v___x_211_ = l_Lean_Syntax_node1(v___x_200_, v___x_202_, v___x_210_);
v___x_212_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16));
v___x_213_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_200_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
lean_inc(v_val_198_);
v___x_215_ = l_Lean_Syntax_node2(v___x_200_, v___x_212_, v___x_214_, v_val_198_);
v___x_216_ = l_Lean_Syntax_node1(v___x_200_, v___x_202_, v___x_215_);
v___x_217_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14));
v___x_218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_200_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = l_Lean_Syntax_node4(v___x_200_, v___x_206_, v___x_211_, v___x_216_, v___x_218_, v_acc_165_);
v___x_220_ = l_Lean_Syntax_node2(v___x_200_, v___x_204_, v___x_205_, v___x_219_);
v___x_221_ = l_Lean_Syntax_node1(v___x_200_, v___x_202_, v___x_220_);
lean_inc(v_combinator_161_);
v___x_222_ = l_Lean_Syntax_node2(v___x_200_, v___x_201_, v_combinator_161_, v___x_221_);
v_i_164_ = v_n_172_;
v_acc_165_ = v___x_222_;
goto _start;
}
}
else
{
if (lean_obj_tag(v_type_x3f_163_) == 0)
{
lean_object* v_ref_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_ref_224_ = lean_ctor_get(v_a_166_, 5);
v___x_225_ = l_Lean_SourceInfo_fromRef(v_ref_224_, v_isZero_169_);
v___x_226_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
v___x_227_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_228_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__6));
v___x_229_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7));
lean_inc_n(v___x_225_, 7);
v___x_230_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_225_);
lean_ctor_set(v___x_230_, 1, v___x_228_);
v___x_231_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9));
v___x_232_ = l_Lean_Syntax_node1(v___x_225_, v___x_227_, v_ident_174_);
v___x_233_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_234_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_234_, 0, v___x_225_);
lean_ctor_set(v___x_234_, 1, v___x_227_);
lean_ctor_set(v___x_234_, 2, v___x_233_);
v___x_235_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14));
v___x_236_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_225_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = l_Lean_Syntax_node4(v___x_225_, v___x_231_, v___x_232_, v___x_234_, v___x_236_, v_acc_165_);
v___x_238_ = l_Lean_Syntax_node2(v___x_225_, v___x_229_, v___x_230_, v___x_237_);
v___x_239_ = l_Lean_Syntax_node1(v___x_225_, v___x_227_, v___x_238_);
lean_inc(v_combinator_161_);
v___x_240_ = l_Lean_Syntax_node2(v___x_225_, v___x_226_, v_combinator_161_, v___x_239_);
v_i_164_ = v_n_172_;
v_acc_165_ = v___x_240_;
goto _start;
}
else
{
lean_object* v_val_242_; lean_object* v_ref_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v_val_242_ = lean_ctor_get(v_type_x3f_163_, 0);
v_ref_243_ = lean_ctor_get(v_a_166_, 5);
v___x_244_ = l_Lean_SourceInfo_fromRef(v_ref_243_, v_isZero_169_);
v___x_245_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
v___x_246_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_247_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__6));
v___x_248_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7));
lean_inc_n(v___x_244_, 9);
v___x_249_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_244_);
lean_ctor_set(v___x_249_, 1, v___x_247_);
v___x_250_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9));
v___x_251_ = l_Lean_Syntax_node1(v___x_244_, v___x_246_, v_ident_174_);
v___x_252_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__16));
v___x_253_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_244_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
lean_inc(v_val_242_);
v___x_255_ = l_Lean_Syntax_node2(v___x_244_, v___x_252_, v___x_254_, v_val_242_);
v___x_256_ = l_Lean_Syntax_node1(v___x_244_, v___x_246_, v___x_255_);
v___x_257_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14));
v___x_258_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_244_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = l_Lean_Syntax_node4(v___x_244_, v___x_250_, v___x_251_, v___x_256_, v___x_258_, v_acc_165_);
v___x_260_ = l_Lean_Syntax_node2(v___x_244_, v___x_248_, v___x_249_, v___x_259_);
v___x_261_ = l_Lean_Syntax_node1(v___x_244_, v___x_246_, v___x_260_);
lean_inc(v_combinator_161_);
v___x_262_ = l_Lean_Syntax_node2(v___x_244_, v___x_245_, v_combinator_161_, v___x_261_);
v_i_164_ = v_n_172_;
v_acc_165_ = v___x_262_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___boxed(lean_object* v_combinator_264_, lean_object* v_idents_265_, lean_object* v_type_x3f_266_, lean_object* v_i_267_, lean_object* v_acc_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg(v_combinator_264_, v_idents_265_, v_type_x3f_266_, v_i_267_, v_acc_268_, v_a_269_, v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec_ref(v_idents_265_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop(lean_object* v_combinator_272_, lean_object* v_idents_273_, lean_object* v_type_x3f_274_, lean_object* v_i_275_, lean_object* v_h_276_, lean_object* v_acc_277_, lean_object* v_a_278_, lean_object* v_a_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg(v_combinator_272_, v_idents_273_, v_type_x3f_274_, v_i_275_, v_acc_277_, v_a_278_, v_a_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___boxed(lean_object* v_combinator_281_, lean_object* v_idents_282_, lean_object* v_type_x3f_283_, lean_object* v_i_284_, lean_object* v_h_285_, lean_object* v_acc_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop(v_combinator_281_, v_idents_282_, v_type_x3f_283_, v_i_284_, v_h_285_, v_acc_286_, v_a_287_, v_a_288_);
lean_dec_ref(v_a_287_);
lean_dec_ref(v_idents_282_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandExplicitBindersAux(lean_object* v_combinator_290_, lean_object* v_idents_291_, lean_object* v_type_x3f_292_, lean_object* v_body_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_array_get_size(v_idents_291_);
v___x_297_ = l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg(v_combinator_290_, v_idents_291_, v_type_x3f_292_, v___x_296_, v_body_293_, v_a_294_, v_a_295_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandExplicitBindersAux___boxed(lean_object* v_combinator_298_, lean_object* v_idents_299_, lean_object* v_type_x3f_300_, lean_object* v_body_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_expandExplicitBindersAux(v_combinator_298_, v_idents_299_, v_type_x3f_300_, v_body_301_, v_a_302_, v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec_ref(v_idents_299_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___redArg(lean_object* v_combinator_305_, lean_object* v_binders_306_, lean_object* v_i_307_, lean_object* v_acc_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_zero_311_; uint8_t v_isZero_312_; 
v_zero_311_ = lean_unsigned_to_nat(0u);
v_isZero_312_ = lean_nat_dec_eq(v_i_307_, v_zero_311_);
if (v_isZero_312_ == 1)
{
lean_object* v___x_313_; 
lean_dec(v_i_307_);
lean_dec(v_combinator_305_);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v_acc_308_);
lean_ctor_set(v___x_313_, 1, v_a_310_);
return v___x_313_;
}
else
{
lean_object* v_one_314_; lean_object* v_n_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v_idents_318_; lean_object* v___x_319_; lean_object* v_type_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v_a_323_; lean_object* v_a_324_; 
v_one_314_ = lean_unsigned_to_nat(1u);
v_n_315_ = lean_nat_sub(v_i_307_, v_one_314_);
lean_dec(v_i_307_);
v___x_316_ = lean_array_fget_borrowed(v_binders_306_, v_n_315_);
v___x_317_ = l_Lean_Syntax_getArg(v___x_316_, v_one_314_);
v_idents_318_ = l_Lean_Syntax_getArgs(v___x_317_);
lean_dec(v___x_317_);
v___x_319_ = lean_unsigned_to_nat(3u);
v_type_320_ = l_Lean_Syntax_getArg(v___x_316_, v___x_319_);
v___x_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_321_, 0, v_type_320_);
lean_inc(v_combinator_305_);
v___x_322_ = l_Lean_expandExplicitBindersAux(v_combinator_305_, v_idents_318_, v___x_321_, v_acc_308_, v_a_309_, v_a_310_);
lean_dec_ref(v_idents_318_);
v_a_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_323_);
v_a_324_ = lean_ctor_get(v___x_322_, 1);
lean_inc(v_a_324_);
lean_dec_ref(v___x_322_);
v_i_307_ = v_n_315_;
v_acc_308_ = v_a_323_;
v_a_310_ = v_a_324_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___redArg___boxed(lean_object* v_combinator_326_, lean_object* v_binders_327_, lean_object* v_i_328_, lean_object* v_acc_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___redArg(v_combinator_326_, v_binders_327_, v_i_328_, v_acc_329_, v_a_330_, v_a_331_);
lean_dec_ref(v_a_330_);
lean_dec_ref(v_binders_327_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop(lean_object* v_combinator_333_, lean_object* v_binders_334_, lean_object* v_i_335_, lean_object* v_h_336_, lean_object* v_acc_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___redArg(v_combinator_333_, v_binders_334_, v_i_335_, v_acc_337_, v_a_338_, v_a_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___boxed(lean_object* v_combinator_341_, lean_object* v_binders_342_, lean_object* v_i_343_, lean_object* v_h_344_, lean_object* v_acc_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop(v_combinator_341_, v_binders_342_, v_i_343_, v_h_344_, v_acc_345_, v_a_346_, v_a_347_);
lean_dec_ref(v_a_346_);
lean_dec_ref(v_binders_342_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandBracketedBindersAux(lean_object* v_combinator_349_, lean_object* v_binders_350_, lean_object* v_body_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lean_array_get_size(v_binders_350_);
v___x_355_ = l___private_Init_NotationExtra_0__Lean_expandBracketedBindersAux_loop___redArg(v_combinator_349_, v_binders_350_, v___x_354_, v_body_351_, v_a_352_, v_a_353_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandBracketedBindersAux___boxed(lean_object* v_combinator_356_, lean_object* v_binders_357_, lean_object* v_body_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_expandBracketedBindersAux(v_combinator_356_, v_binders_357_, v_body_358_, v_a_359_, v_a_360_);
lean_dec_ref(v_a_359_);
lean_dec_ref(v_binders_357_);
return v_res_361_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_expandExplicitBinders_spec__0(uint8_t v___x_362_, lean_object* v_as_363_, size_t v_i_364_, size_t v_stop_365_){
_start:
{
uint8_t v___x_366_; 
v___x_366_ = lean_usize_dec_eq(v_i_364_, v_stop_365_);
if (v___x_366_ == 0)
{
uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_367_ = 1;
v___x_368_ = lean_array_uget_borrowed(v_as_363_, v_i_364_);
lean_inc(v___x_368_);
v___x_369_ = l_Lean_Syntax_getKind(v___x_368_);
v___x_370_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__1));
v___x_371_ = lean_name_eq(v___x_369_, v___x_370_);
lean_dec(v___x_369_);
if (v___x_371_ == 0)
{
return v___x_367_;
}
else
{
if (v___x_362_ == 0)
{
size_t v___x_372_; size_t v___x_373_; 
v___x_372_ = ((size_t)1ULL);
v___x_373_ = lean_usize_add(v_i_364_, v___x_372_);
v_i_364_ = v___x_373_;
goto _start;
}
else
{
return v___x_367_;
}
}
}
else
{
uint8_t v___x_375_; 
v___x_375_ = 0;
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_expandExplicitBinders_spec__0___boxed(lean_object* v___x_376_, lean_object* v_as_377_, lean_object* v_i_378_, lean_object* v_stop_379_){
_start:
{
uint8_t v___x_803__boxed_380_; size_t v_i_boxed_381_; size_t v_stop_boxed_382_; uint8_t v_res_383_; lean_object* v_r_384_; 
v___x_803__boxed_380_ = lean_unbox(v___x_376_);
v_i_boxed_381_ = lean_unbox_usize(v_i_378_);
lean_dec(v_i_378_);
v_stop_boxed_382_ = lean_unbox_usize(v_stop_379_);
lean_dec(v_stop_379_);
v_res_383_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_expandExplicitBinders_spec__0(v___x_803__boxed_380_, v_as_377_, v_i_boxed_381_, v_stop_boxed_382_);
lean_dec_ref(v_as_377_);
v_r_384_ = lean_box(v_res_383_);
return v_r_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandExplicitBinders(lean_object* v_combinatorDeclName_386_, lean_object* v_explicitBinders_387_, lean_object* v_body_388_, lean_object* v_a_389_, lean_object* v_a_390_){
_start:
{
lean_object* v_ref_391_; uint8_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; uint8_t v___x_398_; 
v_ref_391_ = lean_ctor_get(v_a_389_, 5);
v___x_392_ = 0;
v___x_393_ = l_Lean_mkCIdentFrom(v_ref_391_, v_combinatorDeclName_386_, v___x_392_);
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = l_Lean_Syntax_getArg(v_explicitBinders_387_, v___x_394_);
lean_inc(v___x_395_);
v___x_396_ = l_Lean_Syntax_getKind(v___x_395_);
v___x_397_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__2));
v___x_398_ = lean_name_eq(v___x_396_, v___x_397_);
lean_dec(v___x_396_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_399_ = l_Lean_Syntax_getArgs(v___x_395_);
lean_dec(v___x_395_);
v___x_400_ = lean_array_get_size(v___x_399_);
v___x_401_ = lean_nat_dec_lt(v___x_394_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
v___x_402_ = l_Lean_expandBracketedBindersAux(v___x_393_, v___x_399_, v_body_388_, v_a_389_, v_a_390_);
lean_dec_ref(v___x_399_);
return v___x_402_;
}
else
{
if (v___x_401_ == 0)
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_expandBracketedBindersAux(v___x_393_, v___x_399_, v_body_388_, v_a_389_, v_a_390_);
lean_dec_ref(v___x_399_);
return v___x_403_;
}
else
{
size_t v___x_404_; size_t v___x_405_; uint8_t v___x_406_; 
v___x_404_ = ((size_t)0ULL);
v___x_405_ = lean_usize_of_nat(v___x_400_);
v___x_406_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_expandExplicitBinders_spec__0(v___x_398_, v___x_399_, v___x_404_, v___x_405_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; 
v___x_407_ = l_Lean_expandBracketedBindersAux(v___x_393_, v___x_399_, v_body_388_, v_a_389_, v_a_390_);
lean_dec_ref(v___x_399_);
return v___x_407_;
}
else
{
if (v___x_398_ == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec_ref(v___x_399_);
lean_dec(v___x_393_);
lean_dec(v_body_388_);
v___x_408_ = ((lean_object*)(l_Lean_expandExplicitBinders___closed__0));
v___x_409_ = l_Lean_Macro_throwError___redArg(v___x_408_, v_a_389_, v_a_390_);
return v___x_409_;
}
else
{
lean_object* v___x_410_; 
v___x_410_ = l_Lean_expandBracketedBindersAux(v___x_393_, v___x_399_, v_body_388_, v_a_389_, v_a_390_);
lean_dec_ref(v___x_399_);
return v___x_410_;
}
}
}
}
}
else
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_411_ = l_Lean_Syntax_getArg(v___x_395_, v___x_394_);
v___x_412_ = l_Lean_Syntax_getArgs(v___x_411_);
lean_dec(v___x_411_);
v___x_413_ = lean_unsigned_to_nat(1u);
v___x_414_ = l_Lean_Syntax_getArg(v___x_395_, v___x_413_);
lean_dec(v___x_395_);
v___x_415_ = l_Lean_Syntax_isNone(v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = l_Lean_Syntax_getArg(v___x_414_, v___x_413_);
lean_dec(v___x_414_);
v___x_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
v___x_418_ = l_Lean_expandExplicitBindersAux(v___x_393_, v___x_412_, v___x_417_, v_body_388_, v_a_389_, v_a_390_);
lean_dec_ref(v___x_412_);
return v___x_418_;
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; 
lean_dec(v___x_414_);
v___x_419_ = lean_box(0);
v___x_420_ = l_Lean_expandExplicitBindersAux(v___x_393_, v___x_412_, v___x_419_, v_body_388_, v_a_389_, v_a_390_);
lean_dec_ref(v___x_412_);
return v___x_420_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_expandExplicitBinders___boxed(lean_object* v_combinatorDeclName_421_, lean_object* v_explicitBinders_422_, lean_object* v_body_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_expandExplicitBinders(v_combinatorDeclName_421_, v_explicitBinders_422_, v_body_423_, v_a_424_, v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_explicitBinders_422_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandBracketedBinders(lean_object* v_combinatorDeclName_427_, lean_object* v_bracketedExplicitBinders_428_, lean_object* v_body_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v_ref_432_; uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_ref_432_ = lean_ctor_get(v_a_430_, 5);
v___x_433_ = 0;
v___x_434_ = l_Lean_mkCIdentFrom(v_ref_432_, v_combinatorDeclName_427_, v___x_433_);
v___x_435_ = lean_unsigned_to_nat(1u);
v___x_436_ = lean_mk_empty_array_with_capacity(v___x_435_);
v___x_437_ = lean_array_push(v___x_436_, v_bracketedExplicitBinders_428_);
v___x_438_ = l_Lean_expandBracketedBindersAux(v___x_434_, v___x_437_, v_body_429_, v_a_430_, v_a_431_);
lean_dec_ref(v___x_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandBracketedBinders___boxed(lean_object* v_combinatorDeclName_439_, lean_object* v_bracketedExplicitBinders_440_, lean_object* v_body_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_expandBracketedBinders(v_combinatorDeclName_439_, v_bracketedExplicitBinders_440_, v_body_441_, v_a_442_, v_a_443_);
lean_dec_ref(v_a_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(lean_object* v_____do__lift_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
uint8_t v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_651_ = 0;
v___x_652_ = l_Lean_SourceInfo_fromRef(v_____do__lift_648_, v___x_651_);
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
lean_ctor_set(v___x_653_, 1, v___y_650_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0___boxed(lean_object* v_____do__lift_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(v_____do__lift_654_, v___y_655_, v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v_____do__lift_654_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__0(size_t v_sz_658_, size_t v_i_659_, lean_object* v_bs_660_){
_start:
{
uint8_t v___x_661_; 
v___x_661_ = lean_usize_dec_lt(v_i_659_, v_sz_658_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = l_unsafeCast___redArg(v_bs_660_);
lean_dec_ref(v_bs_660_);
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
return v___x_663_;
}
else
{
lean_object* v_v_664_; lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v_v_664_ = lean_array_uget_borrowed(v_bs_660_, v_i_659_);
v___x_665_ = l_unsafeCast___redArg(v_v_664_);
v___x_666_ = ((lean_object*)(l_Lean_unifConstraintElem___closed__1));
lean_inc(v___x_665_);
v___x_667_ = l_Lean_Syntax_isOfKind(v___x_665_, v___x_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; 
lean_dec(v___x_665_);
lean_dec_ref(v_bs_660_);
v___x_668_ = lean_box(0);
return v___x_668_;
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_669_ = lean_unsigned_to_nat(0u);
v___x_670_ = l_Lean_Syntax_getArg(v___x_665_, v___x_669_);
v___x_671_ = ((lean_object*)(l_Lean_unifConstraint___closed__1));
lean_inc(v___x_670_);
v___x_672_ = l_Lean_Syntax_isOfKind(v___x_670_, v___x_671_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; 
lean_dec(v___x_670_);
lean_dec(v___x_665_);
lean_dec_ref(v_bs_660_);
v___x_673_ = lean_box(0);
return v___x_673_;
}
else
{
lean_object* v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
v___x_674_ = lean_unsigned_to_nat(1u);
v___x_675_ = l_Lean_Syntax_getArg(v___x_665_, v___x_674_);
lean_dec(v___x_665_);
v___x_676_ = l_Lean_Syntax_matchesNull(v___x_675_, v___x_669_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; 
lean_dec(v___x_670_);
lean_dec_ref(v_bs_660_);
v___x_677_ = lean_box(0);
return v___x_677_;
}
else
{
lean_object* v___x_678_; lean_object* v_bs_x27_679_; lean_object* v_cs_u2081_680_; lean_object* v_cs_u2082_681_; lean_object* v___x_682_; size_t v___x_683_; size_t v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_678_ = lean_unsigned_to_nat(2u);
v_bs_x27_679_ = lean_array_uset(v_bs_660_, v_i_659_, v___x_669_);
v_cs_u2081_680_ = l_Lean_Syntax_getArg(v___x_670_, v___x_669_);
v_cs_u2082_681_ = l_Lean_Syntax_getArg(v___x_670_, v___x_678_);
lean_dec(v___x_670_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v_cs_u2081_680_);
lean_ctor_set(v___x_682_, 1, v_cs_u2082_681_);
v___x_683_ = ((size_t)1ULL);
v___x_684_ = lean_usize_add(v_i_659_, v___x_683_);
v___x_685_ = l_unsafeCast___redArg(v___x_682_);
lean_dec_ref_known(v___x_682_, 2);
v___x_686_ = lean_array_uset(v_bs_x27_679_, v_i_659_, v___x_685_);
v_i_659_ = v___x_684_;
v_bs_660_ = v___x_686_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__0___boxed(lean_object* v_sz_688_, lean_object* v_i_689_, lean_object* v_bs_690_){
_start:
{
size_t v_sz_boxed_691_; size_t v_i_boxed_692_; lean_object* v_res_693_; 
v_sz_boxed_691_ = lean_unbox_usize(v_sz_688_);
lean_dec(v_sz_688_);
v_i_boxed_692_ = lean_unbox_usize(v_i_689_);
lean_dec(v_i_689_);
v_res_693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__0(v_sz_boxed_691_, v_i_boxed_692_, v_bs_690_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3(lean_object* v_as_705_, size_t v_sz_706_, size_t v_i_707_, lean_object* v_b_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
uint8_t v___x_711_; 
v___x_711_ = lean_usize_dec_lt(v_i_707_, v_sz_706_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; 
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v_b_708_);
lean_ctor_set(v___x_712_, 1, v___y_710_);
return v___x_712_;
}
else
{
lean_object* v_a_713_; lean_object* v_fst_714_; lean_object* v_snd_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_735_; 
v_a_713_ = lean_array_uget(v_as_705_, v_i_707_);
v_fst_714_ = lean_ctor_get(v_a_713_, 0);
v_snd_715_ = lean_ctor_get(v_a_713_, 1);
v_isSharedCheck_735_ = !lean_is_exclusive(v_a_713_);
if (v_isSharedCheck_735_ == 0)
{
v___x_717_ = v_a_713_;
v_isShared_718_ = v_isSharedCheck_735_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_snd_715_);
lean_inc(v_fst_714_);
lean_dec(v_a_713_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_735_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v_ref_719_; uint8_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
v_ref_719_ = lean_ctor_get(v___y_709_, 5);
v___x_720_ = 0;
v___x_721_ = l_Lean_SourceInfo_fromRef(v_ref_719_, v___x_720_);
v___x_722_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__1));
v___x_723_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__3));
v___x_724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__4));
lean_inc(v___x_721_);
if (v_isShared_718_ == 0)
{
lean_ctor_set_tag(v___x_717_, 2);
lean_ctor_set(v___x_717_, 1, v___x_724_);
lean_ctor_set(v___x_717_, 0, v___x_721_);
v___x_726_ = v___x_717_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_721_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v___x_724_);
v___x_726_ = v_reuseFailAlloc_734_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; size_t v___x_731_; size_t v___x_732_; 
lean_inc_n(v___x_721_, 2);
v___x_727_ = l_Lean_Syntax_node3(v___x_721_, v___x_723_, v_fst_714_, v___x_726_, v_snd_715_);
v___x_728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__5));
v___x_729_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_721_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = l_Lean_Syntax_node3(v___x_721_, v___x_722_, v___x_727_, v___x_729_, v_b_708_);
v___x_731_ = ((size_t)1ULL);
v___x_732_ = lean_usize_add(v_i_707_, v___x_731_);
v_i_707_ = v___x_732_;
v_b_708_ = v___x_730_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___boxed(lean_object* v_as_736_, lean_object* v_sz_737_, lean_object* v_i_738_, lean_object* v_b_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
size_t v_sz_boxed_742_; size_t v_i_boxed_743_; lean_object* v_res_744_; 
v_sz_boxed_742_ = lean_unbox_usize(v_sz_737_);
lean_dec(v_sz_737_);
v_i_boxed_743_ = lean_unbox_usize(v_i_738_);
lean_dec(v_i_738_);
v_res_744_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3(v_as_736_, v_sz_boxed_742_, v_i_boxed_743_, v_b_739_, v___y_740_, v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec_ref(v_as_736_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5(size_t v_sz_745_, size_t v_i_746_, lean_object* v_bs_747_){
_start:
{
uint8_t v___x_748_; 
v___x_748_ = lean_usize_dec_lt(v_i_746_, v_sz_745_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; 
v___x_749_ = l_unsafeCast___redArg(v_bs_747_);
lean_dec_ref(v_bs_747_);
return v___x_749_;
}
else
{
lean_object* v_v_750_; lean_object* v___x_751_; lean_object* v_bs_x27_752_; lean_object* v___x_753_; size_t v___x_754_; size_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_v_750_ = lean_array_uget(v_bs_747_, v_i_746_);
v___x_751_ = lean_unsigned_to_nat(0u);
v_bs_x27_752_ = lean_array_uset(v_bs_747_, v_i_746_, v___x_751_);
v___x_753_ = l_unsafeCast___redArg(v_v_750_);
lean_dec(v_v_750_);
v___x_754_ = ((size_t)1ULL);
v___x_755_ = lean_usize_add(v_i_746_, v___x_754_);
v___x_756_ = l_unsafeCast___redArg(v___x_753_);
lean_dec(v___x_753_);
v___x_757_ = lean_array_uset(v_bs_x27_752_, v_i_746_, v___x_756_);
v_i_746_ = v___x_755_;
v_bs_747_ = v___x_757_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5___boxed(lean_object* v_sz_759_, lean_object* v_i_760_, lean_object* v_bs_761_){
_start:
{
size_t v_sz_boxed_762_; size_t v_i_boxed_763_; lean_object* v_res_764_; 
v_sz_boxed_762_ = lean_unbox_usize(v_sz_759_);
lean_dec(v_sz_759_);
v_i_boxed_763_ = lean_unbox_usize(v_i_760_);
lean_dec(v_i_760_);
v_res_764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5(v_sz_boxed_762_, v_i_boxed_763_, v_bs_761_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4(size_t v_sz_765_, size_t v_i_766_, lean_object* v_bs_767_){
_start:
{
uint8_t v___x_768_; 
v___x_768_ = lean_usize_dec_lt(v_i_766_, v_sz_765_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; 
v___x_769_ = l_unsafeCast___redArg(v_bs_767_);
lean_dec_ref(v_bs_767_);
return v___x_769_;
}
else
{
lean_object* v_v_770_; lean_object* v___x_771_; lean_object* v_bs_x27_772_; lean_object* v___x_773_; size_t v___x_774_; size_t v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_v_770_ = lean_array_uget(v_bs_767_, v_i_766_);
v___x_771_ = lean_unsigned_to_nat(0u);
v_bs_x27_772_ = lean_array_uset(v_bs_767_, v_i_766_, v___x_771_);
v___x_773_ = l_unsafeCast___redArg(v_v_770_);
lean_dec(v_v_770_);
v___x_774_ = ((size_t)1ULL);
v___x_775_ = lean_usize_add(v_i_766_, v___x_774_);
v___x_776_ = l_unsafeCast___redArg(v___x_773_);
lean_dec(v___x_773_);
v___x_777_ = lean_array_uset(v_bs_x27_772_, v_i_766_, v___x_776_);
v_i_766_ = v___x_775_;
v_bs_767_ = v___x_777_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4___boxed(lean_object* v_sz_779_, lean_object* v_i_780_, lean_object* v_bs_781_){
_start:
{
size_t v_sz_boxed_782_; size_t v_i_boxed_783_; lean_object* v_res_784_; 
v_sz_boxed_782_ = lean_unbox_usize(v_sz_779_);
lean_dec(v_sz_779_);
v_i_boxed_783_ = lean_unbox_usize(v_i_780_);
lean_dec(v_i_780_);
v_res_784_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4(v_sz_boxed_782_, v_i_boxed_783_, v_bs_781_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__2(size_t v_sz_785_, size_t v_i_786_, lean_object* v_bs_787_){
_start:
{
uint8_t v___x_788_; 
v___x_788_ = lean_usize_dec_lt(v_i_786_, v_sz_785_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; 
v___x_789_ = l_unsafeCast___redArg(v_bs_787_);
lean_dec_ref(v_bs_787_);
return v___x_789_;
}
else
{
lean_object* v_v_790_; lean_object* v___x_791_; lean_object* v_fst_792_; lean_object* v___x_793_; lean_object* v_bs_x27_794_; size_t v___x_795_; size_t v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v_v_790_ = lean_array_uget_borrowed(v_bs_787_, v_i_786_);
v___x_791_ = l_unsafeCast___redArg(v_v_790_);
v_fst_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_fst_792_);
lean_dec(v___x_791_);
v___x_793_ = lean_unsigned_to_nat(0u);
v_bs_x27_794_ = lean_array_uset(v_bs_787_, v_i_786_, v___x_793_);
v___x_795_ = ((size_t)1ULL);
v___x_796_ = lean_usize_add(v_i_786_, v___x_795_);
v___x_797_ = l_unsafeCast___redArg(v_fst_792_);
lean_dec(v_fst_792_);
v___x_798_ = lean_array_uset(v_bs_x27_794_, v_i_786_, v___x_797_);
v_i_786_ = v___x_796_;
v_bs_787_ = v___x_798_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__2___boxed(lean_object* v_sz_800_, lean_object* v_i_801_, lean_object* v_bs_802_){
_start:
{
size_t v_sz_boxed_803_; size_t v_i_boxed_804_; lean_object* v_res_805_; 
v_sz_boxed_803_ = lean_unbox_usize(v_sz_800_);
lean_dec(v_sz_800_);
v_i_boxed_804_ = lean_unbox_usize(v_i_801_);
lean_dec(v_i_801_);
v_res_805_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__2(v_sz_boxed_803_, v_i_boxed_804_, v_bs_802_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__1(size_t v_sz_806_, size_t v_i_807_, lean_object* v_bs_808_){
_start:
{
uint8_t v___x_809_; 
v___x_809_ = lean_usize_dec_lt(v_i_807_, v_sz_806_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; 
v___x_810_ = l_unsafeCast___redArg(v_bs_808_);
lean_dec_ref(v_bs_808_);
return v___x_810_;
}
else
{
lean_object* v_v_811_; lean_object* v___x_812_; lean_object* v_snd_813_; lean_object* v___x_814_; lean_object* v_bs_x27_815_; size_t v___x_816_; size_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v_v_811_ = lean_array_uget_borrowed(v_bs_808_, v_i_807_);
v___x_812_ = l_unsafeCast___redArg(v_v_811_);
v_snd_813_ = lean_ctor_get(v___x_812_, 1);
lean_inc(v_snd_813_);
lean_dec(v___x_812_);
v___x_814_ = lean_unsigned_to_nat(0u);
v_bs_x27_815_ = lean_array_uset(v_bs_808_, v_i_807_, v___x_814_);
v___x_816_ = ((size_t)1ULL);
v___x_817_ = lean_usize_add(v_i_807_, v___x_816_);
v___x_818_ = l_unsafeCast___redArg(v_snd_813_);
lean_dec(v_snd_813_);
v___x_819_ = lean_array_uset(v_bs_x27_815_, v_i_807_, v___x_818_);
v_i_807_ = v___x_817_;
v_bs_808_ = v___x_819_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__1___boxed(lean_object* v_sz_821_, lean_object* v_i_822_, lean_object* v_bs_823_){
_start:
{
size_t v_sz_boxed_824_; size_t v_i_boxed_825_; lean_object* v_res_826_; 
v_sz_boxed_824_ = lean_unbox_usize(v_sz_821_);
lean_dec(v_sz_821_);
v_i_boxed_825_ = lean_unbox_usize(v_i_822_);
lean_dec(v_i_822_);
v_res_826_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__1(v_sz_boxed_824_, v_i_boxed_825_, v_bs_823_);
return v_res_826_;
}
}
static lean_object* _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__14));
v___x_844_ = l_String_toRawSubstring_x27(v___x_843_);
return v___x_844_;
}
}
static lean_object* _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__18));
v___x_850_ = l_String_toRawSubstring_x27(v___x_849_);
return v___x_850_;
}
}
static lean_object* _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__28(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__27));
v___x_861_ = l_String_toRawSubstring_x27(v___x_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1(lean_object* v_x_880_, lean_object* v_a_881_, lean_object* v_a_882_){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; 
v___x_883_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__1));
v___x_884_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__1));
lean_inc(v_x_880_);
v___x_885_ = l_Lean_Syntax_isOfKind(v_x_880_, v___x_884_);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; lean_object* v___x_887_; 
lean_dec(v_x_880_);
v___x_886_ = lean_box(1);
v___x_887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_886_);
lean_ctor_set(v___x_887_, 1, v_a_882_);
return v___x_887_;
}
else
{
lean_object* v___x_888_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; size_t v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; size_t v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; size_t v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___y_1103_; lean_object* v___y_1104_; lean_object* v___y_1105_; size_t v___y_1106_; lean_object* v___y_1107_; lean_object* v___y_1108_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; size_t v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; size_t v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1301_; lean_object* v___y_1302_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___y_1305_; lean_object* v___y_1306_; size_t v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1315_; lean_object* v___y_1316_; lean_object* v___y_1317_; lean_object* v___y_1318_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; size_t v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1428_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; size_t v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1437_; lean_object* v___y_1438_; uint8_t v___y_1439_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v_doc_x3f_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___x_1596_; uint8_t v___x_1597_; 
v___x_888_ = lean_unsigned_to_nat(0u);
v___x_1596_ = l_Lean_Syntax_getArg(v_x_880_, v___x_888_);
v___x_1597_ = l_Lean_Syntax_isNone(v___x_1596_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; uint8_t v___x_1599_; 
v___x_1598_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1596_);
v___x_1599_ = l_Lean_Syntax_matchesNull(v___x_1596_, v___x_1598_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
lean_dec(v___x_1596_);
lean_dec(v_x_880_);
v___x_1600_ = lean_box(1);
v___x_1601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
lean_ctor_set(v___x_1601_, 1, v_a_882_);
return v___x_1601_;
}
else
{
lean_object* v_doc_x3f_1602_; 
v_doc_x3f_1602_ = l_Lean_Syntax_getArg(v___x_1596_, v___x_888_);
lean_dec(v___x_1596_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1605_; uint8_t v___x_1606_; 
v___x_1605_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__36));
lean_inc(v_doc_x3f_1602_);
v___x_1606_ = l_Lean_Syntax_isOfKind(v_doc_x3f_1602_, v___x_1605_);
if (v___x_1606_ == 0)
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
lean_dec(v_doc_x3f_1602_);
lean_dec(v_x_880_);
v___x_1607_ = lean_box(1);
v___x_1608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
lean_ctor_set(v___x_1608_, 1, v_a_882_);
return v___x_1608_;
}
else
{
goto v___jp_1603_;
}
}
else
{
goto v___jp_1603_;
}
v___jp_1603_:
{
lean_object* v___x_1604_; 
v___x_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1604_, 0, v_doc_x3f_1602_);
v_doc_x3f_1543_ = v___x_1604_;
v___y_1544_ = v_a_881_;
v___y_1545_ = v_a_882_;
goto v___jp_1542_;
}
}
}
else
{
lean_object* v___x_1609_; 
lean_dec(v___x_1596_);
v___x_1609_ = lean_box(0);
v_doc_x3f_1543_ = v___x_1609_;
v___y_1544_ = v_a_881_;
v___y_1545_ = v_a_882_;
goto v___jp_1542_;
}
v___jp_889_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; size_t v_sz_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; size_t v_sz_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_908_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__0));
v___x_909_ = lean_box(2);
lean_inc_n(v___y_898_, 4);
v___x_910_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
lean_ctor_set(v___x_910_, 1, v___y_898_);
lean_ctor_set(v___x_910_, 2, v___x_908_);
v___x_911_ = lean_mk_empty_array_with_capacity(v___y_890_);
v___x_912_ = lean_array_push(v___x_911_, v___y_907_);
v___x_913_ = lean_array_push(v___x_912_, v___x_910_);
v___x_914_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_914_, 0, v___x_909_);
lean_ctor_set(v___x_914_, 1, v___y_896_);
lean_ctor_set(v___x_914_, 2, v___x_913_);
v___x_915_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__1));
lean_inc_ref(v___y_893_);
lean_inc_ref_n(v___y_891_, 6);
v___x_916_ = l_Lean_Name_mkStr4(v___x_883_, v___y_891_, v___y_893_, v___x_915_);
v___x_917_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__10));
v_sz_918_ = lean_array_size(v___y_903_);
v___x_919_ = l_unsafeCast___redArg(v___y_903_);
lean_dec(v___y_903_);
v___x_920_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4(v_sz_918_, v___y_894_, v___x_919_);
v___x_921_ = l_unsafeCast___redArg(v___x_920_);
lean_dec_ref(v___x_920_);
v_sz_922_ = lean_array_size(v___x_921_);
v___x_923_ = l_unsafeCast___redArg(v___x_921_);
lean_dec(v___x_921_);
v___x_924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5(v_sz_922_, v___y_894_, v___x_923_);
v___x_925_ = l_unsafeCast___redArg(v___x_924_);
lean_dec_ref(v___x_924_);
v___x_926_ = l_unsafeCast___redArg(v___x_925_);
lean_dec(v___x_925_);
lean_inc_ref(v___y_904_);
v___x_927_ = l_Array_append___redArg(v___y_904_, v___x_926_);
lean_dec(v___x_926_);
lean_inc_n(v___y_899_, 14);
v___x_928_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_928_, 0, v___y_899_);
lean_ctor_set(v___x_928_, 1, v___y_898_);
lean_ctor_set(v___x_928_, 2, v___x_927_);
v___x_929_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15));
lean_inc_ref_n(v___y_900_, 2);
v___x_930_ = l_Lean_Name_mkStr4(v___x_883_, v___y_891_, v___y_900_, v___x_929_);
v___x_931_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_932_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_932_, 0, v___y_899_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
v___x_933_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__2));
v___x_934_ = l_Lean_Name_mkStr4(v___x_883_, v___y_891_, v___y_900_, v___x_933_);
v___x_935_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__3));
v___x_936_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_936_, 0, v___y_899_);
lean_ctor_set(v___x_936_, 1, v___x_935_);
v___x_937_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__4));
v___x_938_ = l_Lean_Name_mkStr4(v___x_883_, v___y_891_, v___x_937_, v___x_917_);
v___x_939_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12));
v___x_940_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_940_, 0, v___y_899_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = l_Lean_Syntax_node1(v___y_899_, v___x_938_, v___x_940_);
v___x_942_ = l_Lean_Syntax_node1(v___y_899_, v___y_898_, v___x_941_);
v___x_943_ = l_Lean_Syntax_node2(v___y_899_, v___x_934_, v___x_936_, v___x_942_);
v___x_944_ = l_Lean_Syntax_node2(v___y_899_, v___x_930_, v___x_932_, v___x_943_);
v___x_945_ = l_Lean_Syntax_node1(v___y_899_, v___y_898_, v___x_944_);
v___x_946_ = l_Lean_Syntax_node2(v___y_899_, v___x_916_, v___x_928_, v___x_945_);
v___x_947_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__5));
v___x_948_ = l_Lean_Name_mkStr4(v___x_883_, v___y_891_, v___y_893_, v___x_947_);
v___x_949_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6));
v___x_950_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_950_, 0, v___y_899_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__7));
v___x_952_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__8));
v___x_953_ = l_Lean_Name_mkStr4(v___x_883_, v___y_891_, v___x_951_, v___x_952_);
lean_inc_n(v___y_906_, 3);
v___x_954_ = l_Lean_Syntax_node2(v___y_899_, v___x_953_, v___y_906_, v___y_906_);
v___x_955_ = l_Lean_Syntax_node4(v___y_899_, v___x_948_, v___x_950_, v___y_895_, v___x_954_, v___y_906_);
v___x_956_ = l_Lean_Syntax_node5(v___y_899_, v___y_892_, v___y_902_, v___x_914_, v___x_946_, v___x_955_, v___y_906_);
v___x_957_ = l_Lean_Syntax_node2(v___y_899_, v___y_905_, v___y_901_, v___x_956_);
v___x_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
lean_ctor_set(v___x_958_, 1, v___y_897_);
return v___x_958_;
}
v___jp_959_:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
lean_inc_ref_n(v___y_976_, 2);
v___x_981_ = l_Array_append___redArg(v___y_976_, v___y_980_);
lean_dec_ref(v___y_980_);
lean_inc_n(v___y_972_, 5);
lean_inc_n(v___y_971_, 20);
v___x_982_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_982_, 0, v___y_971_);
lean_ctor_set(v___x_982_, 1, v___y_972_);
lean_ctor_set(v___x_982_, 2, v___x_981_);
v___x_983_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__9));
lean_inc_ref_n(v___y_973_, 2);
lean_inc_ref_n(v___y_963_, 6);
v___x_984_ = l_Lean_Name_mkStr4(v___x_883_, v___y_963_, v___y_973_, v___x_983_);
v___x_985_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__10));
v___x_986_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_986_, 0, v___y_971_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__11));
v___x_988_ = l_Lean_Name_mkStr4(v___x_883_, v___y_963_, v___y_973_, v___x_987_);
v___x_989_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__12));
v___x_990_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__13));
v___x_991_ = l_Lean_Name_mkStr4(v___x_883_, v___y_963_, v___x_989_, v___x_990_);
v___x_992_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15);
v___x_993_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__16));
lean_inc(v___y_960_);
lean_inc(v___y_978_);
v___x_994_ = l_Lean_addMacroScope(v___y_978_, v___x_993_, v___y_960_);
lean_inc_n(v___y_974_, 2);
v___x_995_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_995_, 0, v___y_971_);
lean_ctor_set(v___x_995_, 1, v___x_992_);
lean_ctor_set(v___x_995_, 2, v___x_994_);
lean_ctor_set(v___x_995_, 3, v___y_974_);
v___x_996_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_996_, 0, v___y_971_);
lean_ctor_set(v___x_996_, 1, v___y_972_);
lean_ctor_set(v___x_996_, 2, v___y_976_);
lean_inc_ref_n(v___x_996_, 7);
lean_inc(v___x_991_);
v___x_997_ = l_Lean_Syntax_node2(v___y_971_, v___x_991_, v___x_995_, v___x_996_);
lean_inc(v___x_988_);
v___x_998_ = l_Lean_Syntax_node2(v___y_971_, v___x_988_, v___y_965_, v___x_997_);
v___x_999_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_1000_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___y_971_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
lean_inc(v___y_966_);
v___x_1001_ = l_Lean_Syntax_node1(v___y_971_, v___y_966_, v___x_996_);
v___x_1002_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19);
v___x_1003_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__20));
v___x_1004_ = l_Lean_addMacroScope(v___y_978_, v___x_1003_, v___y_960_);
v___x_1005_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1005_, 0, v___y_971_);
lean_ctor_set(v___x_1005_, 1, v___x_1002_);
lean_ctor_set(v___x_1005_, 2, v___x_1004_);
lean_ctor_set(v___x_1005_, 3, v___y_974_);
v___x_1006_ = l_Lean_Syntax_node2(v___y_971_, v___x_991_, v___x_1005_, v___x_996_);
v___x_1007_ = l_Lean_Syntax_node2(v___y_971_, v___x_988_, v___x_1001_, v___x_1006_);
v___x_1008_ = l_Lean_Syntax_node3(v___y_971_, v___y_972_, v___x_998_, v___x_1000_, v___x_1007_);
v___x_1009_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_1010_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___y_971_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = l_Lean_Syntax_node3(v___y_971_, v___x_984_, v___x_986_, v___x_1008_, v___x_1010_);
v___x_1012_ = l_Lean_Syntax_node1(v___y_971_, v___y_972_, v___x_1011_);
v___x_1013_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__22));
lean_inc_ref_n(v___y_967_, 3);
v___x_1014_ = l_Lean_Name_mkStr4(v___x_883_, v___y_963_, v___y_967_, v___x_1013_);
v___x_1015_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___y_971_);
lean_ctor_set(v___x_1015_, 1, v___x_1013_);
v___x_1016_ = l_Lean_Syntax_node1(v___y_971_, v___x_1014_, v___x_1015_);
v___x_1017_ = l_Lean_Syntax_node1(v___y_971_, v___y_972_, v___x_1016_);
v___x_1018_ = l_Lean_Syntax_node7(v___y_971_, v___y_964_, v___x_982_, v___x_1012_, v___x_1017_, v___x_996_, v___x_996_, v___x_996_, v___x_996_);
v___x_1019_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__23));
v___x_1020_ = l_Lean_Name_mkStr4(v___x_883_, v___y_963_, v___y_967_, v___x_1019_);
v___x_1021_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__24));
v___x_1022_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___y_971_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__25));
v___x_1024_ = l_Lean_Name_mkStr4(v___x_883_, v___y_963_, v___y_967_, v___x_1023_);
if (lean_obj_tag(v___y_962_) == 0)
{
v___y_890_ = v___y_961_;
v___y_891_ = v___y_963_;
v___y_892_ = v___x_1020_;
v___y_893_ = v___y_967_;
v___y_894_ = v___y_968_;
v___y_895_ = v___y_969_;
v___y_896_ = v___x_1024_;
v___y_897_ = v___y_970_;
v___y_898_ = v___y_972_;
v___y_899_ = v___y_971_;
v___y_900_ = v___y_973_;
v___y_901_ = v___x_1018_;
v___y_902_ = v___x_1022_;
v___y_903_ = v___y_975_;
v___y_904_ = v___y_976_;
v___y_905_ = v___y_977_;
v___y_906_ = v___x_996_;
v___y_907_ = v___y_979_;
goto v___jp_889_;
}
else
{
lean_object* v_val_1025_; 
lean_dec(v___y_979_);
v_val_1025_ = lean_ctor_get(v___y_962_, 0);
lean_inc(v_val_1025_);
lean_dec_ref_known(v___y_962_, 1);
v___y_890_ = v___y_961_;
v___y_891_ = v___y_963_;
v___y_892_ = v___x_1020_;
v___y_893_ = v___y_967_;
v___y_894_ = v___y_968_;
v___y_895_ = v___y_969_;
v___y_896_ = v___x_1024_;
v___y_897_ = v___y_970_;
v___y_898_ = v___y_972_;
v___y_899_ = v___y_971_;
v___y_900_ = v___y_973_;
v___y_901_ = v___x_1018_;
v___y_902_ = v___x_1022_;
v___y_903_ = v___y_975_;
v___y_904_ = v___y_976_;
v___y_905_ = v___y_977_;
v___y_906_ = v___x_996_;
v___y_907_ = v_val_1025_;
goto v___jp_889_;
}
}
v___jp_1026_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; size_t v_sz_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; size_t v_sz_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1045_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__0));
v___x_1046_ = lean_box(2);
lean_inc_n(v___y_1029_, 4);
v___x_1047_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set(v___x_1047_, 1, v___y_1029_);
lean_ctor_set(v___x_1047_, 2, v___x_1045_);
v___x_1048_ = lean_mk_empty_array_with_capacity(v___y_1027_);
v___x_1049_ = lean_array_push(v___x_1048_, v___y_1044_);
v___x_1050_ = lean_array_push(v___x_1049_, v___x_1047_);
v___x_1051_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1046_);
lean_ctor_set(v___x_1051_, 1, v___y_1042_);
lean_ctor_set(v___x_1051_, 2, v___x_1050_);
v___x_1052_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__1));
lean_inc_ref(v___y_1035_);
lean_inc_ref_n(v___y_1028_, 6);
v___x_1053_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1028_, v___y_1035_, v___x_1052_);
v___x_1054_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__10));
v_sz_1055_ = lean_array_size(v___y_1040_);
v___x_1056_ = l_unsafeCast___redArg(v___y_1040_);
lean_dec(v___y_1040_);
v___x_1057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4(v_sz_1055_, v___y_1034_, v___x_1056_);
v___x_1058_ = l_unsafeCast___redArg(v___x_1057_);
lean_dec_ref(v___x_1057_);
v_sz_1059_ = lean_array_size(v___x_1058_);
v___x_1060_ = l_unsafeCast___redArg(v___x_1058_);
lean_dec(v___x_1058_);
v___x_1061_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5(v_sz_1059_, v___y_1034_, v___x_1060_);
v___x_1062_ = l_unsafeCast___redArg(v___x_1061_);
lean_dec_ref(v___x_1061_);
v___x_1063_ = l_unsafeCast___redArg(v___x_1062_);
lean_dec(v___x_1062_);
lean_inc_ref(v___y_1030_);
v___x_1064_ = l_Array_append___redArg(v___y_1030_, v___x_1063_);
lean_dec(v___x_1063_);
lean_inc_n(v___y_1038_, 14);
v___x_1065_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1065_, 0, v___y_1038_);
lean_ctor_set(v___x_1065_, 1, v___y_1029_);
lean_ctor_set(v___x_1065_, 2, v___x_1064_);
v___x_1066_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15));
lean_inc_ref_n(v___y_1039_, 2);
v___x_1067_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1028_, v___y_1039_, v___x_1066_);
v___x_1068_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_1069_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___y_1038_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__2));
v___x_1071_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1028_, v___y_1039_, v___x_1070_);
v___x_1072_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__3));
v___x_1073_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___y_1038_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__4));
v___x_1075_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1028_, v___x_1074_, v___x_1054_);
v___x_1076_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12));
v___x_1077_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___y_1038_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = l_Lean_Syntax_node1(v___y_1038_, v___x_1075_, v___x_1077_);
v___x_1079_ = l_Lean_Syntax_node1(v___y_1038_, v___y_1029_, v___x_1078_);
v___x_1080_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1071_, v___x_1073_, v___x_1079_);
v___x_1081_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1067_, v___x_1069_, v___x_1080_);
v___x_1082_ = l_Lean_Syntax_node1(v___y_1038_, v___y_1029_, v___x_1081_);
v___x_1083_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1053_, v___x_1065_, v___x_1082_);
v___x_1084_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__5));
v___x_1085_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1028_, v___y_1035_, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6));
v___x_1087_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___y_1038_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__7));
v___x_1089_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__8));
v___x_1090_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1028_, v___x_1088_, v___x_1089_);
lean_inc_n(v___y_1031_, 3);
v___x_1091_ = l_Lean_Syntax_node2(v___y_1038_, v___x_1090_, v___y_1031_, v___y_1031_);
v___x_1092_ = l_Lean_Syntax_node4(v___y_1038_, v___x_1085_, v___x_1087_, v___y_1036_, v___x_1091_, v___y_1031_);
v___x_1093_ = l_Lean_Syntax_node5(v___y_1038_, v___y_1033_, v___y_1041_, v___x_1051_, v___x_1083_, v___x_1092_, v___y_1031_);
v___x_1094_ = l_Lean_Syntax_node2(v___y_1038_, v___y_1043_, v___y_1037_, v___x_1093_);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
lean_ctor_set(v___x_1095_, 1, v___y_1032_);
return v___x_1095_;
}
v___jp_1096_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
lean_inc_ref_n(v___y_1101_, 2);
v___x_1118_ = l_Array_append___redArg(v___y_1101_, v___y_1117_);
lean_dec_ref(v___y_1117_);
lean_inc_n(v___y_1102_, 5);
lean_inc_n(v___y_1110_, 20);
v___x_1119_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1119_, 0, v___y_1110_);
lean_ctor_set(v___x_1119_, 1, v___y_1102_);
lean_ctor_set(v___x_1119_, 2, v___x_1118_);
v___x_1120_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__9));
lean_inc_ref_n(v___y_1111_, 2);
lean_inc_ref_n(v___y_1100_, 6);
v___x_1121_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1100_, v___y_1111_, v___x_1120_);
v___x_1122_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__10));
v___x_1123_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___y_1110_);
lean_ctor_set(v___x_1123_, 1, v___x_1122_);
v___x_1124_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__11));
v___x_1125_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1100_, v___y_1111_, v___x_1124_);
v___x_1126_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__12));
v___x_1127_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__13));
v___x_1128_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1100_, v___x_1126_, v___x_1127_);
v___x_1129_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15);
v___x_1130_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__16));
lean_inc(v___y_1097_);
lean_inc(v___y_1114_);
v___x_1131_ = l_Lean_addMacroScope(v___y_1114_, v___x_1130_, v___y_1097_);
lean_inc_n(v___y_1112_, 2);
v___x_1132_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1132_, 0, v___y_1110_);
lean_ctor_set(v___x_1132_, 1, v___x_1129_);
lean_ctor_set(v___x_1132_, 2, v___x_1131_);
lean_ctor_set(v___x_1132_, 3, v___y_1112_);
v___x_1133_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1133_, 0, v___y_1110_);
lean_ctor_set(v___x_1133_, 1, v___y_1102_);
lean_ctor_set(v___x_1133_, 2, v___y_1101_);
lean_inc_ref_n(v___x_1133_, 7);
lean_inc(v___x_1128_);
v___x_1134_ = l_Lean_Syntax_node2(v___y_1110_, v___x_1128_, v___x_1132_, v___x_1133_);
lean_inc(v___x_1125_);
v___x_1135_ = l_Lean_Syntax_node2(v___y_1110_, v___x_1125_, v___y_1103_, v___x_1134_);
v___x_1136_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_1137_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___y_1110_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
lean_inc(v___y_1105_);
v___x_1138_ = l_Lean_Syntax_node1(v___y_1110_, v___y_1105_, v___x_1133_);
v___x_1139_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19);
v___x_1140_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__20));
v___x_1141_ = l_Lean_addMacroScope(v___y_1114_, v___x_1140_, v___y_1097_);
v___x_1142_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1142_, 0, v___y_1110_);
lean_ctor_set(v___x_1142_, 1, v___x_1139_);
lean_ctor_set(v___x_1142_, 2, v___x_1141_);
lean_ctor_set(v___x_1142_, 3, v___y_1112_);
v___x_1143_ = l_Lean_Syntax_node2(v___y_1110_, v___x_1128_, v___x_1142_, v___x_1133_);
v___x_1144_ = l_Lean_Syntax_node2(v___y_1110_, v___x_1125_, v___x_1138_, v___x_1143_);
v___x_1145_ = l_Lean_Syntax_node3(v___y_1110_, v___y_1102_, v___x_1135_, v___x_1137_, v___x_1144_);
v___x_1146_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_1147_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___y_1110_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = l_Lean_Syntax_node3(v___y_1110_, v___x_1121_, v___x_1123_, v___x_1145_, v___x_1147_);
v___x_1149_ = l_Lean_Syntax_node1(v___y_1110_, v___y_1102_, v___x_1148_);
v___x_1150_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__22));
lean_inc_ref_n(v___y_1109_, 3);
v___x_1151_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1100_, v___y_1109_, v___x_1150_);
v___x_1152_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___y_1110_);
lean_ctor_set(v___x_1152_, 1, v___x_1150_);
v___x_1153_ = l_Lean_Syntax_node1(v___y_1110_, v___x_1151_, v___x_1152_);
v___x_1154_ = l_Lean_Syntax_node1(v___y_1110_, v___y_1102_, v___x_1153_);
v___x_1155_ = l_Lean_Syntax_node7(v___y_1110_, v___y_1107_, v___x_1119_, v___x_1149_, v___x_1154_, v___x_1133_, v___x_1133_, v___x_1133_, v___x_1133_);
v___x_1156_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__23));
v___x_1157_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1100_, v___y_1109_, v___x_1156_);
v___x_1158_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__24));
v___x_1159_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___y_1110_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__25));
v___x_1161_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1100_, v___y_1109_, v___x_1160_);
if (lean_obj_tag(v___y_1099_) == 0)
{
v___y_1027_ = v___y_1098_;
v___y_1028_ = v___y_1100_;
v___y_1029_ = v___y_1102_;
v___y_1030_ = v___y_1101_;
v___y_1031_ = v___x_1133_;
v___y_1032_ = v___y_1104_;
v___y_1033_ = v___x_1157_;
v___y_1034_ = v___y_1106_;
v___y_1035_ = v___y_1109_;
v___y_1036_ = v___y_1108_;
v___y_1037_ = v___x_1155_;
v___y_1038_ = v___y_1110_;
v___y_1039_ = v___y_1111_;
v___y_1040_ = v___y_1113_;
v___y_1041_ = v___x_1159_;
v___y_1042_ = v___x_1161_;
v___y_1043_ = v___y_1116_;
v___y_1044_ = v___y_1115_;
goto v___jp_1026_;
}
else
{
lean_object* v_val_1162_; 
lean_dec(v___y_1115_);
v_val_1162_ = lean_ctor_get(v___y_1099_, 0);
lean_inc(v_val_1162_);
lean_dec_ref_known(v___y_1099_, 1);
v___y_1027_ = v___y_1098_;
v___y_1028_ = v___y_1100_;
v___y_1029_ = v___y_1102_;
v___y_1030_ = v___y_1101_;
v___y_1031_ = v___x_1133_;
v___y_1032_ = v___y_1104_;
v___y_1033_ = v___x_1157_;
v___y_1034_ = v___y_1106_;
v___y_1035_ = v___y_1109_;
v___y_1036_ = v___y_1108_;
v___y_1037_ = v___x_1155_;
v___y_1038_ = v___y_1110_;
v___y_1039_ = v___y_1111_;
v___y_1040_ = v___y_1113_;
v___y_1041_ = v___x_1159_;
v___y_1042_ = v___x_1161_;
v___y_1043_ = v___y_1116_;
v___y_1044_ = v_val_1162_;
goto v___jp_1026_;
}
}
v___jp_1163_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; size_t v_sz_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; size_t v_sz_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1182_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__0));
v___x_1183_ = lean_box(2);
lean_inc_n(v___y_1179_, 4);
v___x_1184_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
lean_ctor_set(v___x_1184_, 1, v___y_1179_);
lean_ctor_set(v___x_1184_, 2, v___x_1182_);
v___x_1185_ = lean_mk_empty_array_with_capacity(v___y_1164_);
v___x_1186_ = lean_array_push(v___x_1185_, v___y_1181_);
v___x_1187_ = lean_array_push(v___x_1186_, v___x_1184_);
v___x_1188_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1183_);
lean_ctor_set(v___x_1188_, 1, v___y_1172_);
lean_ctor_set(v___x_1188_, 2, v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__1));
lean_inc_ref(v___y_1169_);
lean_inc_ref_n(v___y_1165_, 6);
v___x_1190_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1165_, v___y_1169_, v___x_1189_);
v___x_1191_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__10));
v_sz_1192_ = lean_array_size(v___y_1178_);
v___x_1193_ = l_unsafeCast___redArg(v___y_1178_);
lean_dec(v___y_1178_);
v___x_1194_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4(v_sz_1192_, v___y_1168_, v___x_1193_);
v___x_1195_ = l_unsafeCast___redArg(v___x_1194_);
lean_dec_ref(v___x_1194_);
v_sz_1196_ = lean_array_size(v___x_1195_);
v___x_1197_ = l_unsafeCast___redArg(v___x_1195_);
lean_dec(v___x_1195_);
v___x_1198_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5(v_sz_1196_, v___y_1168_, v___x_1197_);
v___x_1199_ = l_unsafeCast___redArg(v___x_1198_);
lean_dec_ref(v___x_1198_);
v___x_1200_ = l_unsafeCast___redArg(v___x_1199_);
lean_dec(v___x_1199_);
lean_inc_ref(v___y_1173_);
v___x_1201_ = l_Array_append___redArg(v___y_1173_, v___x_1200_);
lean_dec(v___x_1200_);
lean_inc_n(v___y_1167_, 14);
v___x_1202_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1202_, 0, v___y_1167_);
lean_ctor_set(v___x_1202_, 1, v___y_1179_);
lean_ctor_set(v___x_1202_, 2, v___x_1201_);
v___x_1203_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15));
lean_inc_ref_n(v___y_1176_, 2);
v___x_1204_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1165_, v___y_1176_, v___x_1203_);
v___x_1205_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_1206_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___y_1167_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__2));
v___x_1208_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1165_, v___y_1176_, v___x_1207_);
v___x_1209_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__3));
v___x_1210_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___y_1167_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v___x_1211_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__4));
v___x_1212_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1165_, v___x_1211_, v___x_1191_);
v___x_1213_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12));
v___x_1214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___y_1167_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = l_Lean_Syntax_node1(v___y_1167_, v___x_1212_, v___x_1214_);
v___x_1216_ = l_Lean_Syntax_node1(v___y_1167_, v___y_1179_, v___x_1215_);
v___x_1217_ = l_Lean_Syntax_node2(v___y_1167_, v___x_1208_, v___x_1210_, v___x_1216_);
v___x_1218_ = l_Lean_Syntax_node2(v___y_1167_, v___x_1204_, v___x_1206_, v___x_1217_);
v___x_1219_ = l_Lean_Syntax_node1(v___y_1167_, v___y_1179_, v___x_1218_);
v___x_1220_ = l_Lean_Syntax_node2(v___y_1167_, v___x_1190_, v___x_1202_, v___x_1219_);
v___x_1221_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__5));
v___x_1222_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1165_, v___y_1169_, v___x_1221_);
v___x_1223_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6));
v___x_1224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___y_1167_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
v___x_1225_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__7));
v___x_1226_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__8));
v___x_1227_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1165_, v___x_1225_, v___x_1226_);
lean_inc_n(v___y_1170_, 3);
v___x_1228_ = l_Lean_Syntax_node2(v___y_1167_, v___x_1227_, v___y_1170_, v___y_1170_);
v___x_1229_ = l_Lean_Syntax_node4(v___y_1167_, v___x_1222_, v___x_1224_, v___y_1171_, v___x_1228_, v___y_1170_);
v___x_1230_ = l_Lean_Syntax_node5(v___y_1167_, v___y_1175_, v___y_1177_, v___x_1188_, v___x_1220_, v___x_1229_, v___y_1170_);
v___x_1231_ = l_Lean_Syntax_node2(v___y_1167_, v___y_1166_, v___y_1180_, v___x_1230_);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
lean_ctor_set(v___x_1232_, 1, v___y_1174_);
return v___x_1232_;
}
v___jp_1233_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
lean_inc_ref_n(v___y_1245_, 2);
v___x_1255_ = l_Array_append___redArg(v___y_1245_, v___y_1254_);
lean_dec_ref(v___y_1254_);
lean_inc_n(v___y_1251_, 5);
lean_inc_n(v___y_1241_, 20);
v___x_1256_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1256_, 0, v___y_1241_);
lean_ctor_set(v___x_1256_, 1, v___y_1251_);
lean_ctor_set(v___x_1256_, 2, v___x_1255_);
v___x_1257_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__9));
lean_inc_ref_n(v___y_1247_, 2);
lean_inc_ref_n(v___y_1237_, 6);
v___x_1258_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1237_, v___y_1247_, v___x_1257_);
v___x_1259_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__10));
v___x_1260_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___y_1241_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__11));
v___x_1262_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1237_, v___y_1247_, v___x_1261_);
v___x_1263_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__12));
v___x_1264_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__13));
v___x_1265_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1237_, v___x_1263_, v___x_1264_);
v___x_1266_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15);
v___x_1267_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__16));
lean_inc(v___y_1234_);
lean_inc(v___y_1252_);
v___x_1268_ = l_Lean_addMacroScope(v___y_1252_, v___x_1267_, v___y_1234_);
lean_inc_n(v___y_1249_, 2);
v___x_1269_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1269_, 0, v___y_1241_);
lean_ctor_set(v___x_1269_, 1, v___x_1266_);
lean_ctor_set(v___x_1269_, 2, v___x_1268_);
lean_ctor_set(v___x_1269_, 3, v___y_1249_);
v___x_1270_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1270_, 0, v___y_1241_);
lean_ctor_set(v___x_1270_, 1, v___y_1251_);
lean_ctor_set(v___x_1270_, 2, v___y_1245_);
lean_inc_ref_n(v___x_1270_, 7);
lean_inc(v___x_1265_);
v___x_1271_ = l_Lean_Syntax_node2(v___y_1241_, v___x_1265_, v___x_1269_, v___x_1270_);
lean_inc(v___x_1262_);
v___x_1272_ = l_Lean_Syntax_node2(v___y_1241_, v___x_1262_, v___y_1238_, v___x_1271_);
v___x_1273_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_1274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___y_1241_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
lean_inc(v___y_1240_);
v___x_1275_ = l_Lean_Syntax_node1(v___y_1241_, v___y_1240_, v___x_1270_);
v___x_1276_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__19);
v___x_1277_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__20));
v___x_1278_ = l_Lean_addMacroScope(v___y_1252_, v___x_1277_, v___y_1234_);
v___x_1279_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1279_, 0, v___y_1241_);
lean_ctor_set(v___x_1279_, 1, v___x_1276_);
lean_ctor_set(v___x_1279_, 2, v___x_1278_);
lean_ctor_set(v___x_1279_, 3, v___y_1249_);
v___x_1280_ = l_Lean_Syntax_node2(v___y_1241_, v___x_1265_, v___x_1279_, v___x_1270_);
v___x_1281_ = l_Lean_Syntax_node2(v___y_1241_, v___x_1262_, v___x_1275_, v___x_1280_);
v___x_1282_ = l_Lean_Syntax_node3(v___y_1241_, v___y_1251_, v___x_1272_, v___x_1274_, v___x_1281_);
v___x_1283_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_1284_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___y_1241_);
lean_ctor_set(v___x_1284_, 1, v___x_1283_);
v___x_1285_ = l_Lean_Syntax_node3(v___y_1241_, v___x_1258_, v___x_1260_, v___x_1282_, v___x_1284_);
v___x_1286_ = l_Lean_Syntax_node1(v___y_1241_, v___y_1251_, v___x_1285_);
v___x_1287_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__22));
lean_inc_ref_n(v___y_1244_, 3);
v___x_1288_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1237_, v___y_1244_, v___x_1287_);
v___x_1289_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___y_1241_);
lean_ctor_set(v___x_1289_, 1, v___x_1287_);
v___x_1290_ = l_Lean_Syntax_node1(v___y_1241_, v___x_1288_, v___x_1289_);
v___x_1291_ = l_Lean_Syntax_node1(v___y_1241_, v___y_1251_, v___x_1290_);
v___x_1292_ = l_Lean_Syntax_node7(v___y_1241_, v___y_1248_, v___x_1256_, v___x_1286_, v___x_1291_, v___x_1270_, v___x_1270_, v___x_1270_, v___x_1270_);
v___x_1293_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__23));
v___x_1294_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1237_, v___y_1244_, v___x_1293_);
v___x_1295_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__24));
v___x_1296_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___y_1241_);
lean_ctor_set(v___x_1296_, 1, v___x_1295_);
v___x_1297_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__25));
v___x_1298_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1237_, v___y_1244_, v___x_1297_);
if (lean_obj_tag(v___y_1236_) == 0)
{
v___y_1164_ = v___y_1235_;
v___y_1165_ = v___y_1237_;
v___y_1166_ = v___y_1239_;
v___y_1167_ = v___y_1241_;
v___y_1168_ = v___y_1242_;
v___y_1169_ = v___y_1244_;
v___y_1170_ = v___x_1270_;
v___y_1171_ = v___y_1243_;
v___y_1172_ = v___x_1298_;
v___y_1173_ = v___y_1245_;
v___y_1174_ = v___y_1246_;
v___y_1175_ = v___x_1294_;
v___y_1176_ = v___y_1247_;
v___y_1177_ = v___x_1296_;
v___y_1178_ = v___y_1250_;
v___y_1179_ = v___y_1251_;
v___y_1180_ = v___x_1292_;
v___y_1181_ = v___y_1253_;
goto v___jp_1163_;
}
else
{
lean_object* v_val_1299_; 
lean_dec(v___y_1253_);
v_val_1299_ = lean_ctor_get(v___y_1236_, 0);
lean_inc(v_val_1299_);
lean_dec_ref_known(v___y_1236_, 1);
v___y_1164_ = v___y_1235_;
v___y_1165_ = v___y_1237_;
v___y_1166_ = v___y_1239_;
v___y_1167_ = v___y_1241_;
v___y_1168_ = v___y_1242_;
v___y_1169_ = v___y_1244_;
v___y_1170_ = v___x_1270_;
v___y_1171_ = v___y_1243_;
v___y_1172_ = v___x_1298_;
v___y_1173_ = v___y_1245_;
v___y_1174_ = v___y_1246_;
v___y_1175_ = v___x_1294_;
v___y_1176_ = v___y_1247_;
v___y_1177_ = v___x_1296_;
v___y_1178_ = v___y_1250_;
v___y_1179_ = v___y_1251_;
v___y_1180_ = v___x_1292_;
v___y_1181_ = v_val_1299_;
goto v___jp_1163_;
}
}
v___jp_1300_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; size_t v_sz_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; size_t v_sz_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1319_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__0));
v___x_1320_ = lean_box(2);
lean_inc_n(v___y_1308_, 4);
v___x_1321_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
lean_ctor_set(v___x_1321_, 1, v___y_1308_);
lean_ctor_set(v___x_1321_, 2, v___x_1319_);
v___x_1322_ = lean_mk_empty_array_with_capacity(v___y_1301_);
v___x_1323_ = lean_array_push(v___x_1322_, v___y_1318_);
v___x_1324_ = lean_array_push(v___x_1323_, v___x_1321_);
v___x_1325_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1320_);
lean_ctor_set(v___x_1325_, 1, v___y_1312_);
lean_ctor_set(v___x_1325_, 2, v___x_1324_);
v___x_1326_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__1));
lean_inc_ref(v___y_1305_);
lean_inc_ref_n(v___y_1303_, 6);
v___x_1327_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1303_, v___y_1305_, v___x_1326_);
v___x_1328_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__10));
v_sz_1329_ = lean_array_size(v___y_1313_);
v___x_1330_ = l_unsafeCast___redArg(v___y_1313_);
lean_dec(v___y_1313_);
v___x_1331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4(v_sz_1329_, v___y_1307_, v___x_1330_);
v___x_1332_ = l_unsafeCast___redArg(v___x_1331_);
lean_dec_ref(v___x_1331_);
v_sz_1333_ = lean_array_size(v___x_1332_);
v___x_1334_ = l_unsafeCast___redArg(v___x_1332_);
lean_dec(v___x_1332_);
v___x_1335_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5(v_sz_1333_, v___y_1307_, v___x_1334_);
v___x_1336_ = l_unsafeCast___redArg(v___x_1335_);
lean_dec_ref(v___x_1335_);
v___x_1337_ = l_unsafeCast___redArg(v___x_1336_);
lean_dec(v___x_1336_);
lean_inc_ref(v___y_1316_);
v___x_1338_ = l_Array_append___redArg(v___y_1316_, v___x_1337_);
lean_dec(v___x_1337_);
lean_inc_n(v___y_1306_, 14);
v___x_1339_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1339_, 0, v___y_1306_);
lean_ctor_set(v___x_1339_, 1, v___y_1308_);
lean_ctor_set(v___x_1339_, 2, v___x_1338_);
v___x_1340_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15));
lean_inc_ref_n(v___y_1311_, 2);
v___x_1341_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1303_, v___y_1311_, v___x_1340_);
v___x_1342_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_1343_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___y_1306_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__2));
v___x_1345_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1303_, v___y_1311_, v___x_1344_);
v___x_1346_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__3));
v___x_1347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___y_1306_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__4));
v___x_1349_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1303_, v___x_1348_, v___x_1328_);
v___x_1350_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12));
v___x_1351_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___y_1306_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = l_Lean_Syntax_node1(v___y_1306_, v___x_1349_, v___x_1351_);
v___x_1353_ = l_Lean_Syntax_node1(v___y_1306_, v___y_1308_, v___x_1352_);
v___x_1354_ = l_Lean_Syntax_node2(v___y_1306_, v___x_1345_, v___x_1347_, v___x_1353_);
v___x_1355_ = l_Lean_Syntax_node2(v___y_1306_, v___x_1341_, v___x_1343_, v___x_1354_);
v___x_1356_ = l_Lean_Syntax_node1(v___y_1306_, v___y_1308_, v___x_1355_);
v___x_1357_ = l_Lean_Syntax_node2(v___y_1306_, v___x_1327_, v___x_1339_, v___x_1356_);
v___x_1358_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__5));
v___x_1359_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1303_, v___y_1305_, v___x_1358_);
v___x_1360_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6));
v___x_1361_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___y_1306_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__7));
v___x_1363_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__8));
v___x_1364_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1303_, v___x_1362_, v___x_1363_);
lean_inc_n(v___y_1314_, 3);
v___x_1365_ = l_Lean_Syntax_node2(v___y_1306_, v___x_1364_, v___y_1314_, v___y_1314_);
v___x_1366_ = l_Lean_Syntax_node4(v___y_1306_, v___x_1359_, v___x_1361_, v___y_1310_, v___x_1365_, v___y_1314_);
v___x_1367_ = l_Lean_Syntax_node5(v___y_1306_, v___y_1304_, v___y_1302_, v___x_1325_, v___x_1357_, v___x_1366_, v___y_1314_);
v___x_1368_ = l_Lean_Syntax_node2(v___y_1306_, v___y_1317_, v___y_1315_, v___x_1367_);
v___x_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
lean_ctor_set(v___x_1369_, 1, v___y_1309_);
return v___x_1369_;
}
v___jp_1370_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
lean_inc_ref_n(v___y_1387_, 2);
v___x_1391_ = l_Array_append___redArg(v___y_1387_, v___y_1390_);
lean_dec_ref(v___y_1390_);
lean_inc_n(v___y_1379_, 5);
lean_inc_n(v___y_1377_, 15);
v___x_1392_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1392_, 0, v___y_1377_);
lean_ctor_set(v___x_1392_, 1, v___y_1379_);
lean_ctor_set(v___x_1392_, 2, v___x_1391_);
v___x_1393_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__9));
lean_inc_ref_n(v___y_1383_, 2);
lean_inc_ref_n(v___y_1374_, 6);
v___x_1394_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1374_, v___y_1383_, v___x_1393_);
v___x_1395_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__10));
v___x_1396_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___y_1377_);
lean_ctor_set(v___x_1396_, 1, v___x_1395_);
v___x_1397_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__11));
v___x_1398_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1374_, v___y_1383_, v___x_1397_);
v___x_1399_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__12));
v___x_1400_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__13));
v___x_1401_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1374_, v___x_1399_, v___x_1400_);
v___x_1402_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__15);
v___x_1403_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__16));
v___x_1404_ = l_Lean_addMacroScope(v___y_1386_, v___x_1403_, v___y_1371_);
lean_inc(v___y_1384_);
v___x_1405_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1405_, 0, v___y_1377_);
lean_ctor_set(v___x_1405_, 1, v___x_1402_);
lean_ctor_set(v___x_1405_, 2, v___x_1404_);
lean_ctor_set(v___x_1405_, 3, v___y_1384_);
v___x_1406_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1406_, 0, v___y_1377_);
lean_ctor_set(v___x_1406_, 1, v___y_1379_);
lean_ctor_set(v___x_1406_, 2, v___y_1387_);
lean_inc_ref_n(v___x_1406_, 5);
v___x_1407_ = l_Lean_Syntax_node2(v___y_1377_, v___x_1401_, v___x_1405_, v___x_1406_);
v___x_1408_ = l_Lean_Syntax_node2(v___y_1377_, v___x_1398_, v___y_1375_, v___x_1407_);
v___x_1409_ = l_Lean_Syntax_node1(v___y_1377_, v___y_1379_, v___x_1408_);
v___x_1410_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_1411_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___y_1377_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = l_Lean_Syntax_node3(v___y_1377_, v___x_1394_, v___x_1396_, v___x_1409_, v___x_1411_);
v___x_1413_ = l_Lean_Syntax_node1(v___y_1377_, v___y_1379_, v___x_1412_);
v___x_1414_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__26));
lean_inc_ref_n(v___y_1376_, 3);
v___x_1415_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1374_, v___y_1376_, v___x_1414_);
v___x_1416_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___y_1377_);
lean_ctor_set(v___x_1416_, 1, v___x_1414_);
v___x_1417_ = l_Lean_Syntax_node1(v___y_1377_, v___x_1415_, v___x_1416_);
v___x_1418_ = l_Lean_Syntax_node1(v___y_1377_, v___y_1379_, v___x_1417_);
v___x_1419_ = l_Lean_Syntax_node7(v___y_1377_, v___y_1382_, v___x_1392_, v___x_1413_, v___x_1418_, v___x_1406_, v___x_1406_, v___x_1406_, v___x_1406_);
v___x_1420_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__23));
v___x_1421_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1374_, v___y_1376_, v___x_1420_);
v___x_1422_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__24));
v___x_1423_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___y_1377_);
lean_ctor_set(v___x_1423_, 1, v___x_1422_);
v___x_1424_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__25));
v___x_1425_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1374_, v___y_1376_, v___x_1424_);
if (lean_obj_tag(v___y_1373_) == 0)
{
v___y_1301_ = v___y_1372_;
v___y_1302_ = v___x_1423_;
v___y_1303_ = v___y_1374_;
v___y_1304_ = v___x_1421_;
v___y_1305_ = v___y_1376_;
v___y_1306_ = v___y_1377_;
v___y_1307_ = v___y_1378_;
v___y_1308_ = v___y_1379_;
v___y_1309_ = v___y_1380_;
v___y_1310_ = v___y_1381_;
v___y_1311_ = v___y_1383_;
v___y_1312_ = v___x_1425_;
v___y_1313_ = v___y_1385_;
v___y_1314_ = v___x_1406_;
v___y_1315_ = v___x_1419_;
v___y_1316_ = v___y_1387_;
v___y_1317_ = v___y_1389_;
v___y_1318_ = v___y_1388_;
goto v___jp_1300_;
}
else
{
lean_object* v_val_1426_; 
lean_dec(v___y_1388_);
v_val_1426_ = lean_ctor_get(v___y_1373_, 0);
lean_inc(v_val_1426_);
lean_dec_ref_known(v___y_1373_, 1);
v___y_1301_ = v___y_1372_;
v___y_1302_ = v___x_1423_;
v___y_1303_ = v___y_1374_;
v___y_1304_ = v___x_1421_;
v___y_1305_ = v___y_1376_;
v___y_1306_ = v___y_1377_;
v___y_1307_ = v___y_1378_;
v___y_1308_ = v___y_1379_;
v___y_1309_ = v___y_1380_;
v___y_1310_ = v___y_1381_;
v___y_1311_ = v___y_1383_;
v___y_1312_ = v___x_1425_;
v___y_1313_ = v___y_1385_;
v___y_1314_ = v___x_1406_;
v___y_1315_ = v___x_1419_;
v___y_1316_ = v___y_1387_;
v___y_1317_ = v___y_1389_;
v___y_1318_ = v_val_1426_;
goto v___jp_1300_;
}
}
v___jp_1427_:
{
lean_object* v_quotContext_1445_; lean_object* v_currMacroScope_1446_; lean_object* v_ref_1447_; lean_object* v___x_1448_; lean_object* v_a_1449_; lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1541_; 
v_quotContext_1445_ = lean_ctor_get(v___y_1431_, 1);
v_currMacroScope_1446_ = lean_ctor_get(v___y_1431_, 2);
v_ref_1447_ = lean_ctor_get(v___y_1431_, 5);
v___x_1448_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(v_ref_1447_, v___y_1431_, v___y_1438_);
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
v_a_1450_ = lean_ctor_get(v___x_1448_, 1);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1452_ = v___x_1448_;
v_isShared_1453_ = v_isSharedCheck_1541_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_inc(v_a_1449_);
lean_dec(v___x_1448_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1541_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1457_; 
v___x_1454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__3));
v___x_1455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3___closed__4));
lean_inc(v_a_1449_);
if (v_isShared_1453_ == 0)
{
lean_ctor_set_tag(v___x_1452_, 2);
lean_ctor_set(v___x_1452_, 1, v___x_1455_);
v___x_1457_ = v___x_1452_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1449_);
lean_ctor_set(v_reuseFailAlloc_1540_, 1, v___x_1455_);
v___x_1457_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; size_t v_sz_1461_; lean_object* v___x_1462_; 
v___x_1458_ = l_Lean_Syntax_node3(v_a_1449_, v___x_1454_, v___y_1443_, v___x_1457_, v___y_1437_);
v___x_1459_ = l_Array_zip___redArg(v___y_1440_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec(v___y_1440_);
v___x_1460_ = l_Array_reverse___redArg(v___x_1459_);
v_sz_1461_ = lean_array_size(v___x_1460_);
v___x_1462_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__3(v___x_1460_, v_sz_1461_, v___y_1435_, v___x_1458_, v___y_1431_, v_a_1450_);
lean_dec_ref(v___x_1460_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v_a_1464_; lean_object* v___x_1465_; lean_object* v_a_1466_; lean_object* v_a_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
v_a_1464_ = lean_ctor_get(v___x_1462_, 1);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1462_, 2);
v___x_1465_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(v_ref_1447_, v___y_1431_, v_a_1464_);
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_a_1466_);
v_a_1467_ = lean_ctor_get(v___x_1465_, 1);
lean_inc(v_a_1467_);
lean_dec_ref(v___x_1465_);
v___x_1468_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__28, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__28_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__28);
v___x_1469_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__29));
lean_inc(v_currMacroScope_1446_);
lean_inc(v_quotContext_1445_);
v___x_1470_ = l_Lean_addMacroScope(v_quotContext_1445_, v___x_1469_, v_currMacroScope_1446_);
v___x_1471_ = lean_box(0);
v___x_1472_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1472_, 0, v_a_1466_);
lean_ctor_set(v___x_1472_, 1, v___x_1468_);
lean_ctor_set(v___x_1472_, 2, v___x_1470_);
lean_ctor_set(v___x_1472_, 3, v___x_1471_);
if (v___y_1439_ == 0)
{
lean_object* v___x_1473_; lean_object* v_a_1474_; lean_object* v_a_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1473_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(v_ref_1447_, v___y_1431_, v_a_1467_);
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
v_a_1475_ = lean_ctor_get(v___x_1473_, 1);
lean_inc(v_a_1475_);
lean_dec_ref(v___x_1473_);
v___x_1476_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30));
v___x_1477_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__31));
lean_inc_ref_n(v___y_1430_, 2);
v___x_1478_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___x_1476_, v___x_1477_);
v___x_1479_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32));
v___x_1480_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___x_1476_, v___x_1479_);
v___x_1481_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_1482_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
if (lean_obj_tag(v___y_1433_) == 1)
{
lean_object* v_val_1483_; lean_object* v___x_1484_; 
v_val_1483_ = lean_ctor_get(v___y_1433_, 0);
lean_inc(v_val_1483_);
lean_dec_ref_known(v___y_1433_, 1);
v___x_1484_ = l_Array_mkArray1___redArg(v_val_1483_);
lean_inc(v_quotContext_1445_);
lean_inc(v_currMacroScope_1446_);
v___y_960_ = v_currMacroScope_1446_;
v___y_961_ = v___y_1429_;
v___y_962_ = v___y_1444_;
v___y_963_ = v___y_1430_;
v___y_964_ = v___x_1480_;
v___y_965_ = v___y_1432_;
v___y_966_ = v___y_1434_;
v___y_967_ = v___x_1476_;
v___y_968_ = v___y_1435_;
v___y_969_ = v_a_1463_;
v___y_970_ = v_a_1475_;
v___y_971_ = v_a_1474_;
v___y_972_ = v___x_1481_;
v___y_973_ = v___y_1441_;
v___y_974_ = v___x_1471_;
v___y_975_ = v___y_1442_;
v___y_976_ = v___x_1482_;
v___y_977_ = v___x_1478_;
v___y_978_ = v_quotContext_1445_;
v___y_979_ = v___x_1472_;
v___y_980_ = v___x_1484_;
goto v___jp_959_;
}
else
{
lean_object* v___x_1485_; 
lean_dec(v___y_1433_);
v___x_1485_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33));
lean_inc(v_quotContext_1445_);
lean_inc(v_currMacroScope_1446_);
v___y_960_ = v_currMacroScope_1446_;
v___y_961_ = v___y_1429_;
v___y_962_ = v___y_1444_;
v___y_963_ = v___y_1430_;
v___y_964_ = v___x_1480_;
v___y_965_ = v___y_1432_;
v___y_966_ = v___y_1434_;
v___y_967_ = v___x_1476_;
v___y_968_ = v___y_1435_;
v___y_969_ = v_a_1463_;
v___y_970_ = v_a_1475_;
v___y_971_ = v_a_1474_;
v___y_972_ = v___x_1481_;
v___y_973_ = v___y_1441_;
v___y_974_ = v___x_1471_;
v___y_975_ = v___y_1442_;
v___y_976_ = v___x_1482_;
v___y_977_ = v___x_1478_;
v___y_978_ = v_quotContext_1445_;
v___y_979_ = v___x_1472_;
v___y_980_ = v___x_1485_;
goto v___jp_959_;
}
}
else
{
lean_object* v___x_1486_; uint8_t v___x_1487_; 
v___x_1486_ = l_Lean_Syntax_getArg(v___y_1432_, v___x_888_);
lean_inc(v___x_1486_);
v___x_1487_ = l_Lean_Syntax_matchesNull(v___x_1486_, v___y_1428_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; lean_object* v_a_1489_; lean_object* v_a_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_dec(v___x_1486_);
v___x_1488_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(v_ref_1447_, v___y_1431_, v_a_1467_);
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1489_);
v_a_1490_ = lean_ctor_get(v___x_1488_, 1);
lean_inc(v_a_1490_);
lean_dec_ref(v___x_1488_);
v___x_1491_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30));
v___x_1492_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__31));
lean_inc_ref_n(v___y_1430_, 2);
v___x_1493_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___x_1491_, v___x_1492_);
v___x_1494_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32));
v___x_1495_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___x_1491_, v___x_1494_);
v___x_1496_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_1497_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
if (lean_obj_tag(v___y_1433_) == 1)
{
lean_object* v_val_1498_; lean_object* v___x_1499_; 
v_val_1498_ = lean_ctor_get(v___y_1433_, 0);
lean_inc(v_val_1498_);
lean_dec_ref_known(v___y_1433_, 1);
v___x_1499_ = l_Array_mkArray1___redArg(v_val_1498_);
lean_inc(v_quotContext_1445_);
lean_inc(v_currMacroScope_1446_);
v___y_1097_ = v_currMacroScope_1446_;
v___y_1098_ = v___y_1429_;
v___y_1099_ = v___y_1444_;
v___y_1100_ = v___y_1430_;
v___y_1101_ = v___x_1497_;
v___y_1102_ = v___x_1496_;
v___y_1103_ = v___y_1432_;
v___y_1104_ = v_a_1490_;
v___y_1105_ = v___y_1434_;
v___y_1106_ = v___y_1435_;
v___y_1107_ = v___x_1495_;
v___y_1108_ = v_a_1463_;
v___y_1109_ = v___x_1491_;
v___y_1110_ = v_a_1489_;
v___y_1111_ = v___y_1441_;
v___y_1112_ = v___x_1471_;
v___y_1113_ = v___y_1442_;
v___y_1114_ = v_quotContext_1445_;
v___y_1115_ = v___x_1472_;
v___y_1116_ = v___x_1493_;
v___y_1117_ = v___x_1499_;
goto v___jp_1096_;
}
else
{
lean_object* v___x_1500_; 
lean_dec(v___y_1433_);
v___x_1500_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33));
lean_inc(v_quotContext_1445_);
lean_inc(v_currMacroScope_1446_);
v___y_1097_ = v_currMacroScope_1446_;
v___y_1098_ = v___y_1429_;
v___y_1099_ = v___y_1444_;
v___y_1100_ = v___y_1430_;
v___y_1101_ = v___x_1497_;
v___y_1102_ = v___x_1496_;
v___y_1103_ = v___y_1432_;
v___y_1104_ = v_a_1490_;
v___y_1105_ = v___y_1434_;
v___y_1106_ = v___y_1435_;
v___y_1107_ = v___x_1495_;
v___y_1108_ = v_a_1463_;
v___y_1109_ = v___x_1491_;
v___y_1110_ = v_a_1489_;
v___y_1111_ = v___y_1441_;
v___y_1112_ = v___x_1471_;
v___y_1113_ = v___y_1442_;
v___y_1114_ = v_quotContext_1445_;
v___y_1115_ = v___x_1472_;
v___y_1116_ = v___x_1493_;
v___y_1117_ = v___x_1500_;
goto v___jp_1096_;
}
}
else
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; uint8_t v___x_1504_; 
v___x_1501_ = l_Lean_Syntax_getArg(v___x_1486_, v___x_888_);
lean_dec(v___x_1486_);
v___x_1502_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__34));
lean_inc_ref(v___y_1441_);
lean_inc_ref(v___y_1430_);
v___x_1503_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___y_1441_, v___x_1502_);
v___x_1504_ = l_Lean_Syntax_isOfKind(v___x_1501_, v___x_1503_);
lean_dec(v___x_1503_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; lean_object* v_a_1506_; lean_object* v_a_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1505_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(v_ref_1447_, v___y_1431_, v_a_1467_);
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
v_a_1507_ = lean_ctor_get(v___x_1505_, 1);
lean_inc(v_a_1507_);
lean_dec_ref(v___x_1505_);
v___x_1508_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30));
v___x_1509_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__31));
lean_inc_ref_n(v___y_1430_, 2);
v___x_1510_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___x_1508_, v___x_1509_);
v___x_1511_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32));
v___x_1512_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___x_1508_, v___x_1511_);
v___x_1513_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_1514_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
if (lean_obj_tag(v___y_1433_) == 1)
{
lean_object* v_val_1515_; lean_object* v___x_1516_; 
v_val_1515_ = lean_ctor_get(v___y_1433_, 0);
lean_inc(v_val_1515_);
lean_dec_ref_known(v___y_1433_, 1);
v___x_1516_ = l_Array_mkArray1___redArg(v_val_1515_);
lean_inc(v_quotContext_1445_);
lean_inc(v_currMacroScope_1446_);
v___y_1234_ = v_currMacroScope_1446_;
v___y_1235_ = v___y_1429_;
v___y_1236_ = v___y_1444_;
v___y_1237_ = v___y_1430_;
v___y_1238_ = v___y_1432_;
v___y_1239_ = v___x_1510_;
v___y_1240_ = v___y_1434_;
v___y_1241_ = v_a_1506_;
v___y_1242_ = v___y_1435_;
v___y_1243_ = v_a_1463_;
v___y_1244_ = v___x_1508_;
v___y_1245_ = v___x_1514_;
v___y_1246_ = v_a_1507_;
v___y_1247_ = v___y_1441_;
v___y_1248_ = v___x_1512_;
v___y_1249_ = v___x_1471_;
v___y_1250_ = v___y_1442_;
v___y_1251_ = v___x_1513_;
v___y_1252_ = v_quotContext_1445_;
v___y_1253_ = v___x_1472_;
v___y_1254_ = v___x_1516_;
goto v___jp_1233_;
}
else
{
lean_object* v___x_1517_; 
lean_dec(v___y_1433_);
v___x_1517_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33));
lean_inc(v_quotContext_1445_);
lean_inc(v_currMacroScope_1446_);
v___y_1234_ = v_currMacroScope_1446_;
v___y_1235_ = v___y_1429_;
v___y_1236_ = v___y_1444_;
v___y_1237_ = v___y_1430_;
v___y_1238_ = v___y_1432_;
v___y_1239_ = v___x_1510_;
v___y_1240_ = v___y_1434_;
v___y_1241_ = v_a_1506_;
v___y_1242_ = v___y_1435_;
v___y_1243_ = v_a_1463_;
v___y_1244_ = v___x_1508_;
v___y_1245_ = v___x_1514_;
v___y_1246_ = v_a_1507_;
v___y_1247_ = v___y_1441_;
v___y_1248_ = v___x_1512_;
v___y_1249_ = v___x_1471_;
v___y_1250_ = v___y_1442_;
v___y_1251_ = v___x_1513_;
v___y_1252_ = v_quotContext_1445_;
v___y_1253_ = v___x_1472_;
v___y_1254_ = v___x_1517_;
goto v___jp_1233_;
}
}
else
{
lean_object* v___x_1518_; lean_object* v_a_1519_; lean_object* v_a_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1518_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___lam__0(v_ref_1447_, v___y_1431_, v_a_1467_);
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
v_a_1520_ = lean_ctor_get(v___x_1518_, 1);
lean_inc(v_a_1520_);
lean_dec_ref(v___x_1518_);
v___x_1521_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__30));
v___x_1522_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__31));
lean_inc_ref_n(v___y_1430_, 2);
v___x_1523_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___x_1521_, v___x_1522_);
v___x_1524_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__32));
v___x_1525_ = l_Lean_Name_mkStr4(v___x_883_, v___y_1430_, v___x_1521_, v___x_1524_);
v___x_1526_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_1527_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
if (lean_obj_tag(v___y_1433_) == 1)
{
lean_object* v_val_1528_; lean_object* v___x_1529_; 
v_val_1528_ = lean_ctor_get(v___y_1433_, 0);
lean_inc(v_val_1528_);
lean_dec_ref_known(v___y_1433_, 1);
v___x_1529_ = l_Array_mkArray1___redArg(v_val_1528_);
lean_inc(v_quotContext_1445_);
lean_inc(v_currMacroScope_1446_);
v___y_1371_ = v_currMacroScope_1446_;
v___y_1372_ = v___y_1429_;
v___y_1373_ = v___y_1444_;
v___y_1374_ = v___y_1430_;
v___y_1375_ = v___y_1432_;
v___y_1376_ = v___x_1521_;
v___y_1377_ = v_a_1519_;
v___y_1378_ = v___y_1435_;
v___y_1379_ = v___x_1526_;
v___y_1380_ = v_a_1520_;
v___y_1381_ = v_a_1463_;
v___y_1382_ = v___x_1525_;
v___y_1383_ = v___y_1441_;
v___y_1384_ = v___x_1471_;
v___y_1385_ = v___y_1442_;
v___y_1386_ = v_quotContext_1445_;
v___y_1387_ = v___x_1527_;
v___y_1388_ = v___x_1472_;
v___y_1389_ = v___x_1523_;
v___y_1390_ = v___x_1529_;
goto v___jp_1370_;
}
else
{
lean_object* v___x_1530_; 
lean_dec(v___y_1433_);
v___x_1530_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33));
lean_inc(v_quotContext_1445_);
lean_inc(v_currMacroScope_1446_);
v___y_1371_ = v_currMacroScope_1446_;
v___y_1372_ = v___y_1429_;
v___y_1373_ = v___y_1444_;
v___y_1374_ = v___y_1430_;
v___y_1375_ = v___y_1432_;
v___y_1376_ = v___x_1521_;
v___y_1377_ = v_a_1519_;
v___y_1378_ = v___y_1435_;
v___y_1379_ = v___x_1526_;
v___y_1380_ = v_a_1520_;
v___y_1381_ = v_a_1463_;
v___y_1382_ = v___x_1525_;
v___y_1383_ = v___y_1441_;
v___y_1384_ = v___x_1471_;
v___y_1385_ = v___y_1442_;
v___y_1386_ = v_quotContext_1445_;
v___y_1387_ = v___x_1527_;
v___y_1388_ = v___x_1472_;
v___y_1389_ = v___x_1523_;
v___y_1390_ = v___x_1530_;
goto v___jp_1370_;
}
}
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec(v___y_1444_);
lean_dec(v___y_1442_);
lean_dec(v___y_1433_);
lean_dec(v___y_1432_);
v_a_1531_ = lean_ctor_get(v___x_1462_, 0);
v_a_1532_ = lean_ctor_get(v___x_1462_, 1);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1462_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_inc(v_a_1531_);
lean_dec(v___x_1462_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1531_);
lean_ctor_set(v_reuseFailAlloc_1538_, 1, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
}
}
v___jp_1542_:
{
lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; uint8_t v___x_1551_; 
v___x_1546_ = lean_unsigned_to_nat(1u);
v___x_1547_ = l_Lean_Syntax_getArg(v_x_880_, v___x_1546_);
v___x_1548_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0));
v___x_1549_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1));
v___x_1550_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__35));
lean_inc(v___x_1547_);
v___x_1551_ = l_Lean_Syntax_isOfKind(v___x_1547_, v___x_1550_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
lean_dec(v___x_1547_);
lean_dec(v_doc_x3f_1543_);
lean_dec(v_x_880_);
v___x_1552_ = lean_box(1);
v___x_1553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
lean_ctor_set(v___x_1553_, 1, v___y_1545_);
return v___x_1553_;
}
else
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; size_t v_sz_1557_; size_t v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1554_ = lean_unsigned_to_nat(6u);
v___x_1555_ = l_Lean_Syntax_getArg(v_x_880_, v___x_1554_);
v___x_1556_ = l_Lean_Syntax_getArgs(v___x_1555_);
lean_dec(v___x_1555_);
v_sz_1557_ = lean_array_size(v___x_1556_);
v___x_1558_ = ((size_t)0ULL);
v___x_1559_ = l_unsafeCast___redArg(v___x_1556_);
lean_dec_ref(v___x_1556_);
v___x_1560_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__0(v_sz_1557_, v___x_1558_, v___x_1559_);
v___x_1561_ = l_unsafeCast___redArg(v___x_1560_);
lean_dec(v___x_1560_);
if (lean_obj_tag(v___x_1561_) == 0)
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
lean_dec(v___x_1547_);
lean_dec(v_doc_x3f_1543_);
lean_dec(v_x_880_);
v___x_1562_ = lean_box(1);
v___x_1563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1562_);
lean_ctor_set(v___x_1563_, 1, v___y_1545_);
return v___x_1563_;
}
else
{
lean_object* v_val_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; 
v_val_1564_ = lean_ctor_get(v___x_1561_, 0);
lean_inc(v_val_1564_);
lean_dec_ref_known(v___x_1561_, 1);
v___x_1565_ = lean_unsigned_to_nat(8u);
v___x_1566_ = l_Lean_Syntax_getArg(v_x_880_, v___x_1565_);
v___x_1567_ = ((lean_object*)(l_Lean_unifConstraint___closed__1));
lean_inc(v___x_1566_);
v___x_1568_ = l_Lean_Syntax_isOfKind(v___x_1566_, v___x_1567_);
if (v___x_1568_ == 0)
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
lean_dec(v___x_1566_);
lean_dec(v_val_1564_);
lean_dec(v___x_1547_);
lean_dec(v_doc_x3f_1543_);
lean_dec(v_x_880_);
v___x_1569_ = lean_box(1);
v___x_1570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
lean_ctor_set(v___x_1570_, 1, v___y_1545_);
return v___x_1570_;
}
else
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; size_t v_sz_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v_cs_u2082_1579_; lean_object* v___x_1580_; lean_object* v_cs_u2081_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v_bs_1585_; lean_object* v___x_1586_; 
v___x_1571_ = lean_unsigned_to_nat(2u);
v___x_1572_ = lean_unsigned_to_nat(3u);
v___x_1573_ = l_Lean_Syntax_getArg(v_x_880_, v___x_1572_);
v___x_1574_ = lean_unsigned_to_nat(4u);
v___x_1575_ = l_Lean_Syntax_getArg(v_x_880_, v___x_1574_);
lean_dec(v_x_880_);
v_sz_1576_ = lean_array_size(v_val_1564_);
v___x_1577_ = l_unsafeCast___redArg(v_val_1564_);
lean_dec(v_val_1564_);
lean_inc(v___x_1577_);
v___x_1578_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__1(v_sz_1576_, v___x_1558_, v___x_1577_);
v_cs_u2082_1579_ = l_unsafeCast___redArg(v___x_1578_);
lean_dec_ref(v___x_1578_);
v___x_1580_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__2(v_sz_1576_, v___x_1558_, v___x_1577_);
v_cs_u2081_1581_ = l_unsafeCast___redArg(v___x_1580_);
lean_dec_ref(v___x_1580_);
v___x_1582_ = l_Lean_Syntax_getArg(v___x_1566_, v___x_888_);
v___x_1583_ = l_Lean_Syntax_getArg(v___x_1566_, v___x_1571_);
lean_dec(v___x_1566_);
v___x_1584_ = l_Lean_Syntax_getArgs(v___x_1575_);
lean_dec(v___x_1575_);
v_bs_1585_ = l_unsafeCast___redArg(v___x_1584_);
lean_dec_ref(v___x_1584_);
v___x_1586_ = l_Lean_Syntax_getOptional_x3f(v___x_1573_);
lean_dec(v___x_1573_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_box(0);
v___y_1428_ = v___x_1546_;
v___y_1429_ = v___x_1571_;
v___y_1430_ = v___x_1548_;
v___y_1431_ = v___y_1544_;
v___y_1432_ = v___x_1547_;
v___y_1433_ = v_doc_x3f_1543_;
v___y_1434_ = v___x_1550_;
v___y_1435_ = v___x_1558_;
v___y_1436_ = v_cs_u2082_1579_;
v___y_1437_ = v___x_1583_;
v___y_1438_ = v___y_1545_;
v___y_1439_ = v___x_1551_;
v___y_1440_ = v_cs_u2081_1581_;
v___y_1441_ = v___x_1549_;
v___y_1442_ = v_bs_1585_;
v___y_1443_ = v___x_1582_;
v___y_1444_ = v___x_1587_;
goto v___jp_1427_;
}
else
{
lean_object* v_val_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1595_; 
v_val_1588_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1590_ = v___x_1586_;
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_val_1588_);
lean_dec(v___x_1586_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1591_ == 0)
{
v___x_1593_ = v___x_1590_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_val_1588_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
v___y_1428_ = v___x_1546_;
v___y_1429_ = v___x_1571_;
v___y_1430_ = v___x_1548_;
v___y_1431_ = v___y_1544_;
v___y_1432_ = v___x_1547_;
v___y_1433_ = v_doc_x3f_1543_;
v___y_1434_ = v___x_1550_;
v___y_1435_ = v___x_1558_;
v___y_1436_ = v_cs_u2082_1579_;
v___y_1437_ = v___x_1583_;
v___y_1438_ = v___y_1545_;
v___y_1439_ = v___x_1551_;
v___y_1440_ = v_cs_u2081_1581_;
v___y_1441_ = v___x_1549_;
v___y_1442_ = v_bs_1585_;
v___y_1443_ = v___x_1582_;
v___y_1444_ = v___x_1593_;
goto v___jp_1427_;
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
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___boxed(lean_object* v_x_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1(v_x_1610_, v_a_1611_, v_a_1612_);
lean_dec_ref(v_a_1611_);
return v_res_1613_;
}
}
static lean_object* _init_l_term_u2203___x2c___00__closed__4(void){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1620_ = l_Lean_explicitBinders;
v___x_1621_ = ((lean_object*)(l_term_u2203___x2c___00__closed__3));
v___x_1622_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1623_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
lean_ctor_set(v___x_1623_, 1, v___x_1621_);
lean_ctor_set(v___x_1623_, 2, v___x_1620_);
return v___x_1623_;
}
}
static lean_object* _init_l_term_u2203___x2c___00__closed__5(void){
_start:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1624_ = ((lean_object*)(l_Lean_unifConstraintElem___closed__7));
v___x_1625_ = lean_obj_once(&l_term_u2203___x2c___00__closed__4, &l_term_u2203___x2c___00__closed__4_once, _init_l_term_u2203___x2c___00__closed__4);
v___x_1626_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1627_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
lean_ctor_set(v___x_1627_, 1, v___x_1625_);
lean_ctor_set(v___x_1627_, 2, v___x_1624_);
return v___x_1627_;
}
}
static lean_object* _init_l_term_u2203___x2c___00__closed__6(void){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1628_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__18));
v___x_1629_ = lean_obj_once(&l_term_u2203___x2c___00__closed__5, &l_term_u2203___x2c___00__closed__5_once, _init_l_term_u2203___x2c___00__closed__5);
v___x_1630_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1631_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1630_);
lean_ctor_set(v___x_1631_, 1, v___x_1629_);
lean_ctor_set(v___x_1631_, 2, v___x_1628_);
return v___x_1631_;
}
}
static lean_object* _init_l_term_u2203___x2c___00__closed__7(void){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1632_ = lean_obj_once(&l_term_u2203___x2c___00__closed__6, &l_term_u2203___x2c___00__closed__6_once, _init_l_term_u2203___x2c___00__closed__6);
v___x_1633_ = lean_unsigned_to_nat(1022u);
v___x_1634_ = ((lean_object*)(l_term_u2203___x2c___00__closed__1));
v___x_1635_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
lean_ctor_set(v___x_1635_, 1, v___x_1633_);
lean_ctor_set(v___x_1635_, 2, v___x_1632_);
return v___x_1635_;
}
}
static lean_object* _init_l_term_u2203___x2c__(void){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = lean_obj_once(&l_term_u2203___x2c___00__closed__7, &l_term_u2203___x2c___00__closed__7_once, _init_l_term_u2203___x2c___00__closed__7);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1(lean_object* v_x_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_){
_start:
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = ((lean_object*)(l_term_u2203___x2c___00__closed__1));
lean_inc(v_x_1640_);
v___x_1644_ = l_Lean_Syntax_isOfKind(v_x_1640_, v___x_1643_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
lean_dec(v_x_1640_);
v___x_1645_ = lean_box(1);
v___x_1646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
lean_ctor_set(v___x_1646_, 1, v_a_1642_);
return v___x_1646_;
}
else
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1647_ = lean_unsigned_to_nat(1u);
v___x_1648_ = l_Lean_Syntax_getArg(v_x_1640_, v___x_1647_);
v___x_1649_ = lean_unsigned_to_nat(3u);
v___x_1650_ = l_Lean_Syntax_getArg(v_x_1640_, v___x_1649_);
lean_dec(v_x_1640_);
v___x_1651_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__1));
v___x_1652_ = l_Lean_expandExplicitBinders(v___x_1651_, v___x_1648_, v___x_1650_, v_a_1641_, v_a_1642_);
lean_dec(v___x_1648_);
return v___x_1652_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___boxed(lean_object* v_x_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1(v_x_1653_, v_a_1654_, v_a_1655_);
lean_dec_ref(v_a_1654_);
return v_res_1656_;
}
}
static lean_object* _init_l_termExists___x2c___00__closed__4(void){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1663_ = l_Lean_explicitBinders;
v___x_1664_ = ((lean_object*)(l_termExists___x2c___00__closed__3));
v___x_1665_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1666_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
lean_ctor_set(v___x_1666_, 1, v___x_1664_);
lean_ctor_set(v___x_1666_, 2, v___x_1663_);
return v___x_1666_;
}
}
static lean_object* _init_l_termExists___x2c___00__closed__5(void){
_start:
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1667_ = ((lean_object*)(l_Lean_unifConstraintElem___closed__7));
v___x_1668_ = lean_obj_once(&l_termExists___x2c___00__closed__4, &l_termExists___x2c___00__closed__4_once, _init_l_termExists___x2c___00__closed__4);
v___x_1669_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1670_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1669_);
lean_ctor_set(v___x_1670_, 1, v___x_1668_);
lean_ctor_set(v___x_1670_, 2, v___x_1667_);
return v___x_1670_;
}
}
static lean_object* _init_l_termExists___x2c___00__closed__6(void){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1671_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__18));
v___x_1672_ = lean_obj_once(&l_termExists___x2c___00__closed__5, &l_termExists___x2c___00__closed__5_once, _init_l_termExists___x2c___00__closed__5);
v___x_1673_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1674_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
lean_ctor_set(v___x_1674_, 1, v___x_1672_);
lean_ctor_set(v___x_1674_, 2, v___x_1671_);
return v___x_1674_;
}
}
static lean_object* _init_l_termExists___x2c___00__closed__7(void){
_start:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1675_ = lean_obj_once(&l_termExists___x2c___00__closed__6, &l_termExists___x2c___00__closed__6_once, _init_l_termExists___x2c___00__closed__6);
v___x_1676_ = lean_unsigned_to_nat(1022u);
v___x_1677_ = ((lean_object*)(l_termExists___x2c___00__closed__1));
v___x_1678_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
lean_ctor_set(v___x_1678_, 1, v___x_1676_);
lean_ctor_set(v___x_1678_, 2, v___x_1675_);
return v___x_1678_;
}
}
static lean_object* _init_l_termExists___x2c__(void){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_obj_once(&l_termExists___x2c___00__closed__7, &l_termExists___x2c___00__closed__7_once, _init_l_termExists___x2c___00__closed__7);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__termExists___x2c____1(lean_object* v_x_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v___x_1683_; uint8_t v___x_1684_; 
v___x_1683_ = ((lean_object*)(l_termExists___x2c___00__closed__1));
lean_inc(v_x_1680_);
v___x_1684_ = l_Lean_Syntax_isOfKind(v_x_1680_, v___x_1683_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
lean_dec(v_x_1680_);
v___x_1685_ = lean_box(1);
v___x_1686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
lean_ctor_set(v___x_1686_, 1, v_a_1682_);
return v___x_1686_;
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1687_ = lean_unsigned_to_nat(1u);
v___x_1688_ = l_Lean_Syntax_getArg(v_x_1680_, v___x_1687_);
v___x_1689_ = lean_unsigned_to_nat(3u);
v___x_1690_ = l_Lean_Syntax_getArg(v_x_1680_, v___x_1689_);
lean_dec(v_x_1680_);
v___x_1691_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_u2203___x2c____1___closed__1));
v___x_1692_ = l_Lean_expandExplicitBinders(v___x_1691_, v___x_1688_, v___x_1690_, v_a_1681_, v_a_1682_);
lean_dec(v___x_1688_);
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__termExists___x2c____1___boxed(lean_object* v_x_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l___aux__Init__NotationExtra______macroRules__termExists___x2c____1(v_x_1693_, v_a_1694_, v_a_1695_);
lean_dec_ref(v_a_1694_);
return v_res_1696_;
}
}
static lean_object* _init_l_term_u03a3___x2c___00__closed__4(void){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1703_ = l_Lean_explicitBinders;
v___x_1704_ = ((lean_object*)(l_term_u03a3___x2c___00__closed__3));
v___x_1705_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1706_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1706_, 0, v___x_1705_);
lean_ctor_set(v___x_1706_, 1, v___x_1704_);
lean_ctor_set(v___x_1706_, 2, v___x_1703_);
return v___x_1706_;
}
}
static lean_object* _init_l_term_u03a3___x2c___00__closed__5(void){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1707_ = ((lean_object*)(l_Lean_unifConstraintElem___closed__7));
v___x_1708_ = lean_obj_once(&l_term_u03a3___x2c___00__closed__4, &l_term_u03a3___x2c___00__closed__4_once, _init_l_term_u03a3___x2c___00__closed__4);
v___x_1709_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1710_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1709_);
lean_ctor_set(v___x_1710_, 1, v___x_1708_);
lean_ctor_set(v___x_1710_, 2, v___x_1707_);
return v___x_1710_;
}
}
static lean_object* _init_l_term_u03a3___x2c___00__closed__6(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1711_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__18));
v___x_1712_ = lean_obj_once(&l_term_u03a3___x2c___00__closed__5, &l_term_u03a3___x2c___00__closed__5_once, _init_l_term_u03a3___x2c___00__closed__5);
v___x_1713_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1714_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
lean_ctor_set(v___x_1714_, 1, v___x_1712_);
lean_ctor_set(v___x_1714_, 2, v___x_1711_);
return v___x_1714_;
}
}
static lean_object* _init_l_term_u03a3___x2c___00__closed__7(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1715_ = lean_obj_once(&l_term_u03a3___x2c___00__closed__6, &l_term_u03a3___x2c___00__closed__6_once, _init_l_term_u03a3___x2c___00__closed__6);
v___x_1716_ = lean_unsigned_to_nat(1022u);
v___x_1717_ = ((lean_object*)(l_term_u03a3___x2c___00__closed__1));
v___x_1718_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
lean_ctor_set(v___x_1718_, 1, v___x_1716_);
lean_ctor_set(v___x_1718_, 2, v___x_1715_);
return v___x_1718_;
}
}
static lean_object* _init_l_term_u03a3___x2c__(void){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_obj_once(&l_term_u03a3___x2c___00__closed__7, &l_term_u03a3___x2c___00__closed__7_once, _init_l_term_u03a3___x2c___00__closed__7);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1(lean_object* v_x_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_){
_start:
{
lean_object* v___x_1726_; uint8_t v___x_1727_; 
v___x_1726_ = ((lean_object*)(l_term_u03a3___x2c___00__closed__1));
lean_inc(v_x_1723_);
v___x_1727_ = l_Lean_Syntax_isOfKind(v_x_1723_, v___x_1726_);
if (v___x_1727_ == 0)
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
lean_dec(v_x_1723_);
v___x_1728_ = lean_box(1);
v___x_1729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1728_);
lean_ctor_set(v___x_1729_, 1, v_a_1725_);
return v___x_1729_;
}
else
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1730_ = lean_unsigned_to_nat(1u);
v___x_1731_ = l_Lean_Syntax_getArg(v_x_1723_, v___x_1730_);
v___x_1732_ = lean_unsigned_to_nat(3u);
v___x_1733_ = l_Lean_Syntax_getArg(v_x_1723_, v___x_1732_);
lean_dec(v_x_1723_);
v___x_1734_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__1));
v___x_1735_ = l_Lean_expandExplicitBinders(v___x_1734_, v___x_1731_, v___x_1733_, v_a_1724_, v_a_1725_);
lean_dec(v___x_1731_);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___boxed(lean_object* v_x_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1(v_x_1736_, v_a_1737_, v_a_1738_);
lean_dec_ref(v_a_1737_);
return v_res_1739_;
}
}
static lean_object* _init_l_term_u03a3_x27___x2c___00__closed__4(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1746_ = l_Lean_explicitBinders;
v___x_1747_ = ((lean_object*)(l_term_u03a3_x27___x2c___00__closed__3));
v___x_1748_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1749_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1748_);
lean_ctor_set(v___x_1749_, 1, v___x_1747_);
lean_ctor_set(v___x_1749_, 2, v___x_1746_);
return v___x_1749_;
}
}
static lean_object* _init_l_term_u03a3_x27___x2c___00__closed__5(void){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1750_ = ((lean_object*)(l_Lean_unifConstraintElem___closed__7));
v___x_1751_ = lean_obj_once(&l_term_u03a3_x27___x2c___00__closed__4, &l_term_u03a3_x27___x2c___00__closed__4_once, _init_l_term_u03a3_x27___x2c___00__closed__4);
v___x_1752_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1753_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
lean_ctor_set(v___x_1753_, 1, v___x_1751_);
lean_ctor_set(v___x_1753_, 2, v___x_1750_);
return v___x_1753_;
}
}
static lean_object* _init_l_term_u03a3_x27___x2c___00__closed__6(void){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1754_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__18));
v___x_1755_ = lean_obj_once(&l_term_u03a3_x27___x2c___00__closed__5, &l_term_u03a3_x27___x2c___00__closed__5_once, _init_l_term_u03a3_x27___x2c___00__closed__5);
v___x_1756_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1757_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1756_);
lean_ctor_set(v___x_1757_, 1, v___x_1755_);
lean_ctor_set(v___x_1757_, 2, v___x_1754_);
return v___x_1757_;
}
}
static lean_object* _init_l_term_u03a3_x27___x2c___00__closed__7(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1758_ = lean_obj_once(&l_term_u03a3_x27___x2c___00__closed__6, &l_term_u03a3_x27___x2c___00__closed__6_once, _init_l_term_u03a3_x27___x2c___00__closed__6);
v___x_1759_ = lean_unsigned_to_nat(1022u);
v___x_1760_ = ((lean_object*)(l_term_u03a3_x27___x2c___00__closed__1));
v___x_1761_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
lean_ctor_set(v___x_1761_, 1, v___x_1759_);
lean_ctor_set(v___x_1761_, 2, v___x_1758_);
return v___x_1761_;
}
}
static lean_object* _init_l_term_u03a3_x27___x2c__(void){
_start:
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_obj_once(&l_term_u03a3_x27___x2c___00__closed__7, &l_term_u03a3_x27___x2c___00__closed__7_once, _init_l_term_u03a3_x27___x2c___00__closed__7);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1(lean_object* v_x_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1769_ = ((lean_object*)(l_term_u03a3_x27___x2c___00__closed__1));
lean_inc(v_x_1766_);
v___x_1770_ = l_Lean_Syntax_isOfKind(v_x_1766_, v___x_1769_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; lean_object* v___x_1772_; 
lean_dec(v_x_1766_);
v___x_1771_ = lean_box(1);
v___x_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
lean_ctor_set(v___x_1772_, 1, v_a_1768_);
return v___x_1772_;
}
else
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1773_ = lean_unsigned_to_nat(1u);
v___x_1774_ = l_Lean_Syntax_getArg(v_x_1766_, v___x_1773_);
v___x_1775_ = lean_unsigned_to_nat(3u);
v___x_1776_ = l_Lean_Syntax_getArg(v_x_1766_, v___x_1775_);
lean_dec(v_x_1766_);
v___x_1777_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__1));
v___x_1778_ = l_Lean_expandExplicitBinders(v___x_1777_, v___x_1774_, v___x_1776_, v_a_1767_, v_a_1768_);
lean_dec(v___x_1774_);
return v___x_1778_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___boxed(lean_object* v_x_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1(v_x_1779_, v_a_1780_, v_a_1781_);
lean_dec_ref(v_a_1780_);
return v_res_1782_;
}
}
static lean_object* _init_l_term___xd7____1___closed__4(void){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1789_ = ((lean_object*)(l_term___xd7____1___closed__3));
v___x_1790_ = l_Lean_bracketedExplicitBinders;
v___x_1791_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1792_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1791_);
lean_ctor_set(v___x_1792_, 1, v___x_1790_);
lean_ctor_set(v___x_1792_, 2, v___x_1789_);
return v___x_1792_;
}
}
static lean_object* _init_l_term___xd7____1___closed__6(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1796_ = ((lean_object*)(l_term___xd7____1___closed__5));
v___x_1797_ = lean_obj_once(&l_term___xd7____1___closed__4, &l_term___xd7____1___closed__4_once, _init_l_term___xd7____1___closed__4);
v___x_1798_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1799_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1798_);
lean_ctor_set(v___x_1799_, 1, v___x_1797_);
lean_ctor_set(v___x_1799_, 2, v___x_1796_);
return v___x_1799_;
}
}
static lean_object* _init_l_term___xd7____1___closed__7(void){
_start:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1800_ = lean_obj_once(&l_term___xd7____1___closed__6, &l_term___xd7____1___closed__6_once, _init_l_term___xd7____1___closed__6);
v___x_1801_ = lean_unsigned_to_nat(35u);
v___x_1802_ = ((lean_object*)(l_term___xd7____1___closed__1));
v___x_1803_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
lean_ctor_set(v___x_1803_, 1, v___x_1801_);
lean_ctor_set(v___x_1803_, 2, v___x_1800_);
return v___x_1803_;
}
}
static lean_object* _init_l_term___xd7____1(void){
_start:
{
lean_object* v___x_1804_; 
v___x_1804_ = lean_obj_once(&l_term___xd7____1___closed__7, &l_term___xd7____1___closed__7_once, _init_l_term___xd7____1___closed__7);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term___xd7____1__1(lean_object* v_x_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v___x_1808_; uint8_t v___x_1809_; 
v___x_1808_ = ((lean_object*)(l_term___xd7____1___closed__1));
lean_inc(v_x_1805_);
v___x_1809_ = l_Lean_Syntax_isOfKind(v_x_1805_, v___x_1808_);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
lean_dec(v_x_1805_);
v___x_1810_ = lean_box(1);
v___x_1811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
lean_ctor_set(v___x_1811_, 1, v_a_1807_);
return v___x_1811_;
}
else
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1812_ = lean_unsigned_to_nat(0u);
v___x_1813_ = l_Lean_Syntax_getArg(v_x_1805_, v___x_1812_);
v___x_1814_ = lean_unsigned_to_nat(2u);
v___x_1815_ = l_Lean_Syntax_getArg(v_x_1805_, v___x_1814_);
lean_dec(v_x_1805_);
v___x_1816_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_u03a3___x2c____1___closed__1));
v___x_1817_ = l_Lean_expandBracketedBinders(v___x_1816_, v___x_1813_, v___x_1815_, v_a_1806_, v_a_1807_);
return v___x_1817_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term___xd7____1__1___boxed(lean_object* v_x_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l___aux__Init__NotationExtra______macroRules__term___xd7____1__1(v_x_1818_, v_a_1819_, v_a_1820_);
lean_dec_ref(v_a_1819_);
return v_res_1821_;
}
}
static lean_object* _init_l_term___xd7_x27____1___closed__4(void){
_start:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1828_ = ((lean_object*)(l_term___xd7_x27____1___closed__3));
v___x_1829_ = l_Lean_bracketedExplicitBinders;
v___x_1830_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1831_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
lean_ctor_set(v___x_1831_, 1, v___x_1829_);
lean_ctor_set(v___x_1831_, 2, v___x_1828_);
return v___x_1831_;
}
}
static lean_object* _init_l_term___xd7_x27____1___closed__5(void){
_start:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1832_ = ((lean_object*)(l_term___xd7____1___closed__5));
v___x_1833_ = lean_obj_once(&l_term___xd7_x27____1___closed__4, &l_term___xd7_x27____1___closed__4_once, _init_l_term___xd7_x27____1___closed__4);
v___x_1834_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__4));
v___x_1835_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
lean_ctor_set(v___x_1835_, 1, v___x_1833_);
lean_ctor_set(v___x_1835_, 2, v___x_1832_);
return v___x_1835_;
}
}
static lean_object* _init_l_term___xd7_x27____1___closed__6(void){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1836_ = lean_obj_once(&l_term___xd7_x27____1___closed__5, &l_term___xd7_x27____1___closed__5_once, _init_l_term___xd7_x27____1___closed__5);
v___x_1837_ = lean_unsigned_to_nat(35u);
v___x_1838_ = ((lean_object*)(l_term___xd7_x27____1___closed__1));
v___x_1839_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
lean_ctor_set(v___x_1839_, 1, v___x_1837_);
lean_ctor_set(v___x_1839_, 2, v___x_1836_);
return v___x_1839_;
}
}
static lean_object* _init_l_term___xd7_x27____1(void){
_start:
{
lean_object* v___x_1840_; 
v___x_1840_ = lean_obj_once(&l_term___xd7_x27____1___closed__6, &l_term___xd7_x27____1___closed__6_once, _init_l_term___xd7_x27____1___closed__6);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term___xd7_x27____1__1(lean_object* v_x_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_){
_start:
{
lean_object* v___x_1844_; uint8_t v___x_1845_; 
v___x_1844_ = ((lean_object*)(l_term___xd7_x27____1___closed__1));
lean_inc(v_x_1841_);
v___x_1845_ = l_Lean_Syntax_isOfKind(v_x_1841_, v___x_1844_);
if (v___x_1845_ == 0)
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
lean_dec(v_x_1841_);
v___x_1846_ = lean_box(1);
v___x_1847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
lean_ctor_set(v___x_1847_, 1, v_a_1843_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1848_ = lean_unsigned_to_nat(0u);
v___x_1849_ = l_Lean_Syntax_getArg(v_x_1841_, v___x_1848_);
v___x_1850_ = lean_unsigned_to_nat(2u);
v___x_1851_ = l_Lean_Syntax_getArg(v_x_1841_, v___x_1850_);
lean_dec(v_x_1841_);
v___x_1852_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_u03a3_x27___x2c____1___closed__1));
v___x_1853_ = l_Lean_expandBracketedBinders(v___x_1852_, v___x_1849_, v___x_1851_, v_a_1842_, v_a_1843_);
return v___x_1853_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term___xd7_x27____1__1___boxed(lean_object* v_x_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l___aux__Init__NotationExtra______macroRules__term___xd7_x27____1__1(v_x_1854_, v_a_1855_, v_a_1856_);
lean_dec_ref(v_a_1855_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1(lean_object* v_x_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_){
_start:
{
lean_object* v___x_2020_; uint8_t v___x_2021_; 
v___x_2020_ = ((lean_object*)(l_Lean_convCalc___00__closed__1));
lean_inc(v_x_2017_);
v___x_2021_ = l_Lean_Syntax_isOfKind(v_x_2017_, v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; lean_object* v___x_2023_; 
lean_dec(v_x_2017_);
v___x_2022_ = lean_box(1);
v___x_2023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
lean_ctor_set(v___x_2023_, 1, v_a_2019_);
return v___x_2023_;
}
else
{
lean_object* v_ref_2024_; lean_object* v___x_2025_; lean_object* v_tk_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v_ref_2024_ = lean_ctor_get(v_a_2018_, 5);
v___x_2025_ = lean_unsigned_to_nat(0u);
v_tk_2026_ = l_Lean_Syntax_getArg(v_x_2017_, v___x_2025_);
v___x_2027_ = lean_unsigned_to_nat(1u);
v___x_2028_ = l_Lean_Syntax_getArg(v_x_2017_, v___x_2027_);
lean_dec(v_x_2017_);
v___x_2029_ = 0;
v___x_2030_ = l_Lean_SourceInfo_fromRef(v_ref_2024_, v___x_2029_);
v___x_2031_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__3));
v___x_2032_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__4));
lean_inc_n(v___x_2030_, 6);
v___x_2033_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2030_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
v___x_2034_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14));
v___x_2035_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2030_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
v___x_2036_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6));
v___x_2037_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8));
v___x_2038_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2039_ = ((lean_object*)(l_Lean_calcTactic___closed__1));
v___x_2040_ = l_Lean_SourceInfo_fromRef(v_tk_2026_, v___x_2021_);
lean_dec(v_tk_2026_);
v___x_2041_ = ((lean_object*)(l_Lean_calc___closed__0));
v___x_2042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2040_);
lean_ctor_set(v___x_2042_, 1, v___x_2041_);
v___x_2043_ = l_Lean_Syntax_node2(v___x_2030_, v___x_2039_, v___x_2042_, v___x_2028_);
v___x_2044_ = l_Lean_Syntax_node1(v___x_2030_, v___x_2038_, v___x_2043_);
v___x_2045_ = l_Lean_Syntax_node1(v___x_2030_, v___x_2037_, v___x_2044_);
v___x_2046_ = l_Lean_Syntax_node1(v___x_2030_, v___x_2036_, v___x_2045_);
v___x_2047_ = l_Lean_Syntax_node3(v___x_2030_, v___x_2031_, v___x_2033_, v___x_2035_, v___x_2046_);
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
lean_ctor_set(v___x_2048_, 1, v_a_2019_);
return v___x_2048_;
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___boxed(lean_object* v_x_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_){
_start:
{
lean_object* v_res_2052_; 
v_res_2052_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1(v_x_2049_, v_a_2050_, v_a_2051_);
lean_dec_ref(v_a_2050_);
return v_res_2052_;
}
}
static lean_object* _init_l_unexpandUnit___redArg___closed__9(void){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = ((lean_object*)(l_unexpandUnit___redArg___closed__8));
v___x_2073_ = l_String_toRawSubstring_x27(v___x_2072_);
return v___x_2073_;
}
}
static lean_object* _init_l_unexpandUnit___redArg___closed__10(void){
_start:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = lean_box(0);
v___x_2075_ = l_unsafeCast___redArg(v___x_2074_);
return v___x_2075_;
}
}
static lean_object* _init_l_unexpandUnit___redArg___closed__11(void){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2076_ = lean_unsigned_to_nat(0u);
v___x_2077_ = lean_obj_once(&l_unexpandUnit___redArg___closed__10, &l_unexpandUnit___redArg___closed__10_once, _init_l_unexpandUnit___redArg___closed__10);
v___x_2078_ = ((lean_object*)(l_unexpandUnit___redArg___closed__1));
v___x_2079_ = l_Lean_addMacroScope(v___x_2078_, v___x_2077_, v___x_2076_);
return v___x_2079_;
}
}
static lean_object* _init_l_unexpandUnit___redArg___closed__12(void){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2080_ = lean_obj_once(&l_unexpandUnit___redArg___closed__10, &l_unexpandUnit___redArg___closed__10_once, _init_l_unexpandUnit___redArg___closed__10);
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2080_);
return v___x_2081_;
}
}
static lean_object* _init_l_unexpandUnit___redArg___closed__16(void){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2089_ = ((lean_object*)(l_unexpandUnit___redArg___closed__15));
v___x_2090_ = lean_obj_once(&l_unexpandUnit___redArg___closed__12, &l_unexpandUnit___redArg___closed__12_once, _init_l_unexpandUnit___redArg___closed__12);
v___x_2091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
lean_ctor_set(v___x_2091_, 1, v___x_2089_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l_unexpandUnit___redArg(lean_object* v_a_2092_, lean_object* v_a_2093_){
_start:
{
uint8_t v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2094_ = 0;
v___x_2095_ = l_Lean_SourceInfo_fromRef(v_a_2092_, v___x_2094_);
v___x_2096_ = ((lean_object*)(l_unexpandUnit___redArg___closed__3));
v___x_2097_ = ((lean_object*)(l_unexpandUnit___redArg___closed__5));
v___x_2098_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2095_, 6);
v___x_2099_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2095_);
lean_ctor_set(v___x_2099_, 1, v___x_2098_);
v___x_2100_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
v___x_2101_ = lean_obj_once(&l_unexpandUnit___redArg___closed__9, &l_unexpandUnit___redArg___closed__9_once, _init_l_unexpandUnit___redArg___closed__9);
v___x_2102_ = lean_obj_once(&l_unexpandUnit___redArg___closed__11, &l_unexpandUnit___redArg___closed__11_once, _init_l_unexpandUnit___redArg___closed__11);
v___x_2103_ = lean_obj_once(&l_unexpandUnit___redArg___closed__16, &l_unexpandUnit___redArg___closed__16_once, _init_l_unexpandUnit___redArg___closed__16);
v___x_2104_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2095_);
lean_ctor_set(v___x_2104_, 1, v___x_2101_);
lean_ctor_set(v___x_2104_, 2, v___x_2102_);
lean_ctor_set(v___x_2104_, 3, v___x_2103_);
v___x_2105_ = l_Lean_Syntax_node1(v___x_2095_, v___x_2100_, v___x_2104_);
v___x_2106_ = l_Lean_Syntax_node2(v___x_2095_, v___x_2097_, v___x_2099_, v___x_2105_);
v___x_2107_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2108_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2095_);
lean_ctor_set(v___x_2109_, 1, v___x_2107_);
lean_ctor_set(v___x_2109_, 2, v___x_2108_);
v___x_2110_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2111_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2095_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = l_Lean_Syntax_node3(v___x_2095_, v___x_2096_, v___x_2106_, v___x_2109_, v___x_2111_);
v___x_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
lean_ctor_set(v___x_2113_, 1, v_a_2093_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l_unexpandUnit___redArg___boxed(lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_unexpandUnit___redArg(v_a_2114_, v_a_2115_);
lean_dec(v_a_2114_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_unexpandUnit(lean_object* v_x_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = l_unexpandUnit___redArg(v_a_2118_, v_a_2119_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_unexpandUnit___boxed(lean_object* v_x_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_unexpandUnit(v_x_2121_, v_a_2122_, v_a_2123_);
lean_dec(v_a_2122_);
lean_dec(v_x_2121_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_unexpandListNil___redArg(lean_object* v_a_2129_, lean_object* v_a_2130_){
_start:
{
uint8_t v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2131_ = 0;
v___x_2132_ = l_Lean_SourceInfo_fromRef(v_a_2129_, v___x_2131_);
v___x_2133_ = ((lean_object*)(l_unexpandListNil___redArg___closed__1));
v___x_2134_ = ((lean_object*)(l_unexpandListNil___redArg___closed__2));
lean_inc_n(v___x_2132_, 3);
v___x_2135_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2132_);
lean_ctor_set(v___x_2135_, 1, v___x_2134_);
v___x_2136_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2137_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2138_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2132_);
lean_ctor_set(v___x_2138_, 1, v___x_2136_);
lean_ctor_set(v___x_2138_, 2, v___x_2137_);
v___x_2139_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_2140_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2132_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = l_Lean_Syntax_node3(v___x_2132_, v___x_2133_, v___x_2135_, v___x_2138_, v___x_2140_);
v___x_2142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
lean_ctor_set(v___x_2142_, 1, v_a_2130_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l_unexpandListNil___redArg___boxed(lean_object* v_a_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_unexpandListNil___redArg(v_a_2143_, v_a_2144_);
lean_dec(v_a_2143_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_unexpandListNil(lean_object* v_x_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l_unexpandListNil___redArg(v_a_2147_, v_a_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_unexpandListNil___boxed(lean_object* v_x_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_unexpandListNil(v_x_2150_, v_a_2151_, v_a_2152_);
lean_dec(v_a_2151_);
lean_dec(v_x_2150_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_unexpandListCons(lean_object* v_x_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_){
_start:
{
lean_object* v___x_2163_; uint8_t v___x_2164_; 
v___x_2163_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2160_);
v___x_2164_ = l_Lean_Syntax_isOfKind(v_x_2160_, v___x_2163_);
if (v___x_2164_ == 0)
{
lean_object* v___x_2165_; lean_object* v___x_2166_; 
lean_dec(v_x_2160_);
v___x_2165_ = lean_box(0);
v___x_2166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
lean_ctor_set(v___x_2166_, 1, v_a_2162_);
return v___x_2166_;
}
else
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; uint8_t v___x_2170_; 
v___x_2167_ = lean_unsigned_to_nat(1u);
v___x_2168_ = l_Lean_Syntax_getArg(v_x_2160_, v___x_2167_);
lean_dec(v_x_2160_);
v___x_2169_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2168_);
v___x_2170_ = l_Lean_Syntax_matchesNull(v___x_2168_, v___x_2169_);
if (v___x_2170_ == 0)
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_dec(v___x_2168_);
v___x_2171_ = lean_box(0);
v___x_2172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2171_);
lean_ctor_set(v___x_2172_, 1, v_a_2162_);
return v___x_2172_;
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; uint8_t v___x_2177_; 
v___x_2173_ = lean_unsigned_to_nat(0u);
v___x_2174_ = l_Lean_Syntax_getArg(v___x_2168_, v___x_2173_);
v___x_2175_ = l_Lean_Syntax_getArg(v___x_2168_, v___x_2167_);
lean_dec(v___x_2168_);
v___x_2176_ = ((lean_object*)(l_unexpandListNil___redArg___closed__1));
lean_inc(v___x_2175_);
v___x_2177_ = l_Lean_Syntax_isOfKind(v___x_2175_, v___x_2176_);
if (v___x_2177_ == 0)
{
lean_object* v___x_2178_; uint8_t v___x_2179_; 
v___x_2178_ = ((lean_object*)(l_unexpandListCons___closed__1));
lean_inc(v___x_2175_);
v___x_2179_ = l_Lean_Syntax_isOfKind(v___x_2175_, v___x_2178_);
if (v___x_2179_ == 0)
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
lean_dec(v___x_2175_);
lean_dec(v___x_2174_);
v___x_2180_ = lean_box(0);
v___x_2181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
lean_ctor_set(v___x_2181_, 1, v_a_2162_);
return v___x_2181_;
}
else
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2182_ = l_Lean_SourceInfo_fromRef(v_a_2161_, v___x_2177_);
v___x_2183_ = ((lean_object*)(l_unexpandListNil___redArg___closed__2));
lean_inc_n(v___x_2182_, 4);
v___x_2184_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2182_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
v___x_2185_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2186_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2182_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
v___x_2188_ = l_Lean_Syntax_node3(v___x_2182_, v___x_2185_, v___x_2174_, v___x_2187_, v___x_2175_);
v___x_2189_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_2190_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2182_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
v___x_2191_ = l_Lean_Syntax_node3(v___x_2182_, v___x_2176_, v___x_2184_, v___x_2188_, v___x_2190_);
v___x_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2191_);
lean_ctor_set(v___x_2192_, 1, v_a_2162_);
return v___x_2192_;
}
}
else
{
lean_object* v___x_2193_; uint8_t v___x_2194_; 
v___x_2193_ = l_Lean_Syntax_getArg(v___x_2175_, v___x_2167_);
lean_dec(v___x_2175_);
lean_inc(v___x_2193_);
v___x_2194_ = l_Lean_Syntax_matchesNull(v___x_2193_, v___x_2173_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2195_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2196_ = l_Lean_Syntax_getArgs(v___x_2193_);
lean_dec(v___x_2193_);
v___x_2197_ = l_Lean_SourceInfo_fromRef(v_a_2161_, v___x_2194_);
v___x_2198_ = ((lean_object*)(l_unexpandListNil___redArg___closed__2));
lean_inc_n(v___x_2197_, 4);
v___x_2199_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2197_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2201_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2197_);
lean_ctor_set(v___x_2201_, 1, v___x_2195_);
v___x_2202_ = l_Array_mkArray2___redArg(v___x_2174_, v___x_2201_);
v___x_2203_ = l_Array_append___redArg(v___x_2202_, v___x_2196_);
lean_dec_ref(v___x_2196_);
v___x_2204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2197_);
lean_ctor_set(v___x_2204_, 1, v___x_2200_);
lean_ctor_set(v___x_2204_, 2, v___x_2203_);
v___x_2205_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_2206_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2197_);
lean_ctor_set(v___x_2206_, 1, v___x_2205_);
v___x_2207_ = l_Lean_Syntax_node3(v___x_2197_, v___x_2176_, v___x_2199_, v___x_2204_, v___x_2206_);
v___x_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
lean_ctor_set(v___x_2208_, 1, v_a_2162_);
return v___x_2208_;
}
else
{
uint8_t v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
lean_dec(v___x_2193_);
v___x_2209_ = 0;
v___x_2210_ = l_Lean_SourceInfo_fromRef(v_a_2161_, v___x_2209_);
v___x_2211_ = ((lean_object*)(l_unexpandListNil___redArg___closed__2));
lean_inc_n(v___x_2210_, 3);
v___x_2212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2210_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2214_ = l_Lean_Syntax_node1(v___x_2210_, v___x_2213_, v___x_2174_);
v___x_2215_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_2216_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2210_);
lean_ctor_set(v___x_2216_, 1, v___x_2215_);
v___x_2217_ = l_Lean_Syntax_node3(v___x_2210_, v___x_2176_, v___x_2212_, v___x_2214_, v___x_2216_);
v___x_2218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
lean_ctor_set(v___x_2218_, 1, v_a_2162_);
return v___x_2218_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandListCons___boxed(lean_object* v_x_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_unexpandListCons(v_x_2219_, v_a_2220_, v_a_2221_);
lean_dec(v_a_2220_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_unexpandListToArray(lean_object* v_x_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_){
_start:
{
lean_object* v___x_2230_; uint8_t v___x_2231_; 
v___x_2230_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2227_);
v___x_2231_ = l_Lean_Syntax_isOfKind(v_x_2227_, v___x_2230_);
if (v___x_2231_ == 0)
{
lean_object* v___x_2232_; lean_object* v___x_2233_; 
lean_dec(v_x_2227_);
v___x_2232_ = lean_box(0);
v___x_2233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
lean_ctor_set(v___x_2233_, 1, v_a_2229_);
return v___x_2233_;
}
else
{
lean_object* v___x_2234_; lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2234_ = lean_unsigned_to_nat(1u);
v___x_2235_ = l_Lean_Syntax_getArg(v_x_2227_, v___x_2234_);
lean_dec(v_x_2227_);
lean_inc(v___x_2235_);
v___x_2236_ = l_Lean_Syntax_matchesNull(v___x_2235_, v___x_2234_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; lean_object* v___x_2238_; 
lean_dec(v___x_2235_);
v___x_2237_ = lean_box(0);
v___x_2238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2237_);
lean_ctor_set(v___x_2238_, 1, v_a_2229_);
return v___x_2238_;
}
else
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; uint8_t v___x_2242_; 
v___x_2239_ = lean_unsigned_to_nat(0u);
v___x_2240_ = l_Lean_Syntax_getArg(v___x_2235_, v___x_2239_);
lean_dec(v___x_2235_);
v___x_2241_ = ((lean_object*)(l_unexpandListNil___redArg___closed__1));
lean_inc(v___x_2240_);
v___x_2242_ = l_Lean_Syntax_isOfKind(v___x_2240_, v___x_2241_);
if (v___x_2242_ == 0)
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
lean_dec(v___x_2240_);
v___x_2243_ = lean_box(0);
v___x_2244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
lean_ctor_set(v___x_2244_, 1, v_a_2229_);
return v___x_2244_;
}
else
{
lean_object* v___x_2245_; lean_object* v___x_2246_; uint8_t v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2245_ = l_Lean_Syntax_getArg(v___x_2240_, v___x_2234_);
lean_dec(v___x_2240_);
v___x_2246_ = l_Lean_Syntax_getArgs(v___x_2245_);
lean_dec(v___x_2245_);
v___x_2247_ = 0;
v___x_2248_ = l_Lean_SourceInfo_fromRef(v_a_2228_, v___x_2247_);
v___x_2249_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_2250_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_2248_, 3);
v___x_2251_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2248_);
lean_ctor_set(v___x_2251_, 1, v___x_2250_);
v___x_2252_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2253_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2254_ = l_Array_append___redArg(v___x_2253_, v___x_2246_);
lean_dec_ref(v___x_2246_);
v___x_2255_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2248_);
lean_ctor_set(v___x_2255_, 1, v___x_2252_);
lean_ctor_set(v___x_2255_, 2, v___x_2254_);
v___x_2256_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_2257_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2248_);
lean_ctor_set(v___x_2257_, 1, v___x_2256_);
v___x_2258_ = l_Lean_Syntax_node3(v___x_2248_, v___x_2249_, v___x_2251_, v___x_2255_, v___x_2257_);
v___x_2259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
lean_ctor_set(v___x_2259_, 1, v_a_2229_);
return v___x_2259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandListToArray___boxed(lean_object* v_x_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_unexpandListToArray(v_x_2260_, v_a_2261_, v_a_2262_);
lean_dec(v_a_2261_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_unexpandProdMk(lean_object* v_x_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_){
_start:
{
lean_object* v___x_2267_; uint8_t v___x_2268_; 
v___x_2267_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2264_);
v___x_2268_ = l_Lean_Syntax_isOfKind(v_x_2264_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
lean_dec(v_x_2264_);
v___x_2269_ = lean_box(0);
v___x_2270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
lean_ctor_set(v___x_2270_, 1, v_a_2266_);
return v___x_2270_;
}
else
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; uint8_t v___x_2274_; 
v___x_2271_ = lean_unsigned_to_nat(1u);
v___x_2272_ = l_Lean_Syntax_getArg(v_x_2264_, v___x_2271_);
lean_dec(v_x_2264_);
v___x_2273_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2272_);
v___x_2274_ = l_Lean_Syntax_matchesNull(v___x_2272_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
lean_dec(v___x_2272_);
v___x_2275_ = lean_box(0);
v___x_2276_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v_a_2266_);
return v___x_2276_;
}
else
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; uint8_t v___x_2281_; 
v___x_2277_ = lean_unsigned_to_nat(0u);
v___x_2278_ = l_Lean_Syntax_getArg(v___x_2272_, v___x_2277_);
v___x_2279_ = l_Lean_Syntax_getArg(v___x_2272_, v___x_2271_);
lean_dec(v___x_2272_);
v___x_2280_ = ((lean_object*)(l_unexpandUnit___redArg___closed__3));
lean_inc(v___x_2279_);
v___x_2281_ = l_Lean_Syntax_isOfKind(v___x_2279_, v___x_2280_);
if (v___x_2281_ == 0)
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2282_ = l_Lean_SourceInfo_fromRef(v_a_2265_, v___x_2281_);
v___x_2283_ = ((lean_object*)(l_unexpandUnit___redArg___closed__5));
v___x_2284_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2282_, 8);
v___x_2285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2282_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
v___x_2287_ = lean_obj_once(&l_unexpandUnit___redArg___closed__9, &l_unexpandUnit___redArg___closed__9_once, _init_l_unexpandUnit___redArg___closed__9);
v___x_2288_ = lean_obj_once(&l_unexpandUnit___redArg___closed__11, &l_unexpandUnit___redArg___closed__11_once, _init_l_unexpandUnit___redArg___closed__11);
v___x_2289_ = lean_obj_once(&l_unexpandUnit___redArg___closed__16, &l_unexpandUnit___redArg___closed__16_once, _init_l_unexpandUnit___redArg___closed__16);
v___x_2290_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2282_);
lean_ctor_set(v___x_2290_, 1, v___x_2287_);
lean_ctor_set(v___x_2290_, 2, v___x_2288_);
lean_ctor_set(v___x_2290_, 3, v___x_2289_);
v___x_2291_ = l_Lean_Syntax_node1(v___x_2282_, v___x_2286_, v___x_2290_);
v___x_2292_ = l_Lean_Syntax_node2(v___x_2282_, v___x_2283_, v___x_2285_, v___x_2291_);
v___x_2293_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2294_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2282_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = l_Lean_Syntax_node1(v___x_2282_, v___x_2293_, v___x_2279_);
v___x_2297_ = l_Lean_Syntax_node3(v___x_2282_, v___x_2293_, v___x_2278_, v___x_2295_, v___x_2296_);
v___x_2298_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2282_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
v___x_2300_ = l_Lean_Syntax_node3(v___x_2282_, v___x_2280_, v___x_2292_, v___x_2297_, v___x_2299_);
v___x_2301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
lean_ctor_set(v___x_2301_, 1, v_a_2266_);
return v___x_2301_;
}
else
{
lean_object* v___x_2302_; lean_object* v___x_2303_; uint8_t v___x_2304_; 
v___x_2302_ = l_Lean_Syntax_getArg(v___x_2279_, v___x_2277_);
v___x_2303_ = ((lean_object*)(l_unexpandUnit___redArg___closed__5));
lean_inc(v___x_2302_);
v___x_2304_ = l_Lean_Syntax_isOfKind(v___x_2302_, v___x_2303_);
if (v___x_2304_ == 0)
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
lean_dec(v___x_2302_);
v___x_2305_ = l_Lean_SourceInfo_fromRef(v_a_2265_, v___x_2304_);
v___x_2306_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2305_, 8);
v___x_2307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2305_);
lean_ctor_set(v___x_2307_, 1, v___x_2306_);
v___x_2308_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
v___x_2309_ = lean_obj_once(&l_unexpandUnit___redArg___closed__9, &l_unexpandUnit___redArg___closed__9_once, _init_l_unexpandUnit___redArg___closed__9);
v___x_2310_ = lean_obj_once(&l_unexpandUnit___redArg___closed__11, &l_unexpandUnit___redArg___closed__11_once, _init_l_unexpandUnit___redArg___closed__11);
v___x_2311_ = lean_obj_once(&l_unexpandUnit___redArg___closed__16, &l_unexpandUnit___redArg___closed__16_once, _init_l_unexpandUnit___redArg___closed__16);
v___x_2312_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2305_);
lean_ctor_set(v___x_2312_, 1, v___x_2309_);
lean_ctor_set(v___x_2312_, 2, v___x_2310_);
lean_ctor_set(v___x_2312_, 3, v___x_2311_);
v___x_2313_ = l_Lean_Syntax_node1(v___x_2305_, v___x_2308_, v___x_2312_);
v___x_2314_ = l_Lean_Syntax_node2(v___x_2305_, v___x_2303_, v___x_2307_, v___x_2313_);
v___x_2315_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2316_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2305_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = l_Lean_Syntax_node1(v___x_2305_, v___x_2315_, v___x_2279_);
v___x_2319_ = l_Lean_Syntax_node3(v___x_2305_, v___x_2315_, v___x_2278_, v___x_2317_, v___x_2318_);
v___x_2320_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2321_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2305_);
lean_ctor_set(v___x_2321_, 1, v___x_2320_);
v___x_2322_ = l_Lean_Syntax_node3(v___x_2305_, v___x_2280_, v___x_2314_, v___x_2319_, v___x_2321_);
v___x_2323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2322_);
lean_ctor_set(v___x_2323_, 1, v_a_2266_);
return v___x_2323_;
}
else
{
lean_object* v___x_2324_; lean_object* v___x_2325_; uint8_t v___x_2326_; 
v___x_2324_ = l_Lean_Syntax_getArg(v___x_2302_, v___x_2271_);
lean_dec(v___x_2302_);
v___x_2325_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
lean_inc(v___x_2324_);
v___x_2326_ = l_Lean_Syntax_isOfKind(v___x_2324_, v___x_2325_);
if (v___x_2326_ == 0)
{
lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
lean_dec(v___x_2324_);
v___x_2327_ = l_Lean_SourceInfo_fromRef(v_a_2265_, v___x_2326_);
v___x_2328_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2327_, 8);
v___x_2329_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = lean_obj_once(&l_unexpandUnit___redArg___closed__9, &l_unexpandUnit___redArg___closed__9_once, _init_l_unexpandUnit___redArg___closed__9);
v___x_2331_ = lean_obj_once(&l_unexpandUnit___redArg___closed__11, &l_unexpandUnit___redArg___closed__11_once, _init_l_unexpandUnit___redArg___closed__11);
v___x_2332_ = lean_obj_once(&l_unexpandUnit___redArg___closed__16, &l_unexpandUnit___redArg___closed__16_once, _init_l_unexpandUnit___redArg___closed__16);
v___x_2333_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2327_);
lean_ctor_set(v___x_2333_, 1, v___x_2330_);
lean_ctor_set(v___x_2333_, 2, v___x_2331_);
lean_ctor_set(v___x_2333_, 3, v___x_2332_);
v___x_2334_ = l_Lean_Syntax_node1(v___x_2327_, v___x_2325_, v___x_2333_);
v___x_2335_ = l_Lean_Syntax_node2(v___x_2327_, v___x_2303_, v___x_2329_, v___x_2334_);
v___x_2336_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2337_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2338_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2327_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = l_Lean_Syntax_node1(v___x_2327_, v___x_2336_, v___x_2279_);
v___x_2340_ = l_Lean_Syntax_node3(v___x_2327_, v___x_2336_, v___x_2278_, v___x_2338_, v___x_2339_);
v___x_2341_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2342_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2327_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
v___x_2343_ = l_Lean_Syntax_node3(v___x_2327_, v___x_2280_, v___x_2335_, v___x_2340_, v___x_2342_);
v___x_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
lean_ctor_set(v___x_2344_, 1, v_a_2266_);
return v___x_2344_;
}
else
{
lean_object* v___x_2345_; lean_object* v___x_2346_; uint8_t v___x_2347_; 
v___x_2345_ = l_Lean_Syntax_getArg(v___x_2324_, v___x_2277_);
lean_dec(v___x_2324_);
v___x_2346_ = lean_obj_once(&l_unexpandUnit___redArg___closed__10, &l_unexpandUnit___redArg___closed__10_once, _init_l_unexpandUnit___redArg___closed__10);
v___x_2347_ = l_Lean_Syntax_matchesIdent(v___x_2345_, v___x_2346_);
lean_dec(v___x_2345_);
if (v___x_2347_ == 0)
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2348_ = l_Lean_SourceInfo_fromRef(v_a_2265_, v___x_2347_);
v___x_2349_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2348_, 8);
v___x_2350_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2348_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
v___x_2351_ = lean_obj_once(&l_unexpandUnit___redArg___closed__9, &l_unexpandUnit___redArg___closed__9_once, _init_l_unexpandUnit___redArg___closed__9);
v___x_2352_ = lean_obj_once(&l_unexpandUnit___redArg___closed__11, &l_unexpandUnit___redArg___closed__11_once, _init_l_unexpandUnit___redArg___closed__11);
v___x_2353_ = lean_obj_once(&l_unexpandUnit___redArg___closed__16, &l_unexpandUnit___redArg___closed__16_once, _init_l_unexpandUnit___redArg___closed__16);
v___x_2354_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2348_);
lean_ctor_set(v___x_2354_, 1, v___x_2351_);
lean_ctor_set(v___x_2354_, 2, v___x_2352_);
lean_ctor_set(v___x_2354_, 3, v___x_2353_);
v___x_2355_ = l_Lean_Syntax_node1(v___x_2348_, v___x_2325_, v___x_2354_);
v___x_2356_ = l_Lean_Syntax_node2(v___x_2348_, v___x_2303_, v___x_2350_, v___x_2355_);
v___x_2357_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2358_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2359_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2348_);
lean_ctor_set(v___x_2359_, 1, v___x_2358_);
v___x_2360_ = l_Lean_Syntax_node1(v___x_2348_, v___x_2357_, v___x_2279_);
v___x_2361_ = l_Lean_Syntax_node3(v___x_2348_, v___x_2357_, v___x_2278_, v___x_2359_, v___x_2360_);
v___x_2362_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2363_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2348_);
lean_ctor_set(v___x_2363_, 1, v___x_2362_);
v___x_2364_ = l_Lean_Syntax_node3(v___x_2348_, v___x_2280_, v___x_2356_, v___x_2361_, v___x_2363_);
v___x_2365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
lean_ctor_set(v___x_2365_, 1, v_a_2266_);
return v___x_2365_;
}
else
{
lean_object* v___x_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; 
v___x_2366_ = l_Lean_Syntax_getArg(v___x_2279_, v___x_2271_);
v___x_2367_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_2366_);
v___x_2368_ = l_Lean_Syntax_matchesNull(v___x_2366_, v___x_2367_);
if (v___x_2368_ == 0)
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
lean_dec(v___x_2366_);
v___x_2369_ = l_Lean_SourceInfo_fromRef(v_a_2265_, v___x_2368_);
v___x_2370_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2369_, 8);
v___x_2371_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2369_);
lean_ctor_set(v___x_2371_, 1, v___x_2370_);
v___x_2372_ = lean_obj_once(&l_unexpandUnit___redArg___closed__9, &l_unexpandUnit___redArg___closed__9_once, _init_l_unexpandUnit___redArg___closed__9);
v___x_2373_ = lean_obj_once(&l_unexpandUnit___redArg___closed__11, &l_unexpandUnit___redArg___closed__11_once, _init_l_unexpandUnit___redArg___closed__11);
v___x_2374_ = lean_obj_once(&l_unexpandUnit___redArg___closed__16, &l_unexpandUnit___redArg___closed__16_once, _init_l_unexpandUnit___redArg___closed__16);
v___x_2375_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2369_);
lean_ctor_set(v___x_2375_, 1, v___x_2372_);
lean_ctor_set(v___x_2375_, 2, v___x_2373_);
lean_ctor_set(v___x_2375_, 3, v___x_2374_);
v___x_2376_ = l_Lean_Syntax_node1(v___x_2369_, v___x_2325_, v___x_2375_);
v___x_2377_ = l_Lean_Syntax_node2(v___x_2369_, v___x_2303_, v___x_2371_, v___x_2376_);
v___x_2378_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2379_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2380_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2369_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = l_Lean_Syntax_node1(v___x_2369_, v___x_2378_, v___x_2279_);
v___x_2382_ = l_Lean_Syntax_node3(v___x_2369_, v___x_2378_, v___x_2278_, v___x_2380_, v___x_2381_);
v___x_2383_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2384_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2369_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = l_Lean_Syntax_node3(v___x_2369_, v___x_2280_, v___x_2377_, v___x_2382_, v___x_2384_);
v___x_2386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
lean_ctor_set(v___x_2386_, 1, v_a_2266_);
return v___x_2386_;
}
else
{
lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; uint8_t v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
lean_dec(v___x_2279_);
v___x_2387_ = l_Lean_Syntax_getArg(v___x_2366_, v___x_2277_);
v___x_2388_ = l_Lean_Syntax_getArg(v___x_2366_, v___x_2273_);
lean_dec(v___x_2366_);
v___x_2389_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2390_ = l_Lean_Syntax_getArgs(v___x_2388_);
lean_dec(v___x_2388_);
v___x_2391_ = 0;
v___x_2392_ = l_Lean_SourceInfo_fromRef(v_a_2265_, v___x_2391_);
v___x_2393_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2392_, 8);
v___x_2394_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2392_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = lean_obj_once(&l_unexpandUnit___redArg___closed__9, &l_unexpandUnit___redArg___closed__9_once, _init_l_unexpandUnit___redArg___closed__9);
v___x_2396_ = lean_obj_once(&l_unexpandUnit___redArg___closed__11, &l_unexpandUnit___redArg___closed__11_once, _init_l_unexpandUnit___redArg___closed__11);
v___x_2397_ = lean_obj_once(&l_unexpandUnit___redArg___closed__16, &l_unexpandUnit___redArg___closed__16_once, _init_l_unexpandUnit___redArg___closed__16);
v___x_2398_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2398_, 0, v___x_2392_);
lean_ctor_set(v___x_2398_, 1, v___x_2395_);
lean_ctor_set(v___x_2398_, 2, v___x_2396_);
lean_ctor_set(v___x_2398_, 3, v___x_2397_);
v___x_2399_ = l_Lean_Syntax_node1(v___x_2392_, v___x_2325_, v___x_2398_);
v___x_2400_ = l_Lean_Syntax_node2(v___x_2392_, v___x_2303_, v___x_2394_, v___x_2399_);
v___x_2401_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2402_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2392_);
lean_ctor_set(v___x_2402_, 1, v___x_2389_);
lean_inc_ref(v___x_2402_);
v___x_2403_ = l_Array_mkArray2___redArg(v___x_2387_, v___x_2402_);
v___x_2404_ = l_Array_append___redArg(v___x_2403_, v___x_2390_);
lean_dec_ref(v___x_2390_);
v___x_2405_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2392_);
lean_ctor_set(v___x_2405_, 1, v___x_2401_);
lean_ctor_set(v___x_2405_, 2, v___x_2404_);
v___x_2406_ = l_Lean_Syntax_node3(v___x_2392_, v___x_2401_, v___x_2278_, v___x_2402_, v___x_2405_);
v___x_2407_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2408_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2392_);
lean_ctor_set(v___x_2408_, 1, v___x_2407_);
v___x_2409_ = l_Lean_Syntax_node3(v___x_2392_, v___x_2280_, v___x_2400_, v___x_2406_, v___x_2408_);
v___x_2410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
lean_ctor_set(v___x_2410_, 1, v_a_2266_);
return v___x_2410_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandProdMk___boxed(lean_object* v_x_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = l_unexpandProdMk(v_x_2411_, v_a_2412_, v_a_2413_);
lean_dec(v_a_2412_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l_unexpandIte(lean_object* v_x_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_){
_start:
{
lean_object* v___x_2424_; uint8_t v___x_2425_; 
v___x_2424_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2421_);
v___x_2425_ = l_Lean_Syntax_isOfKind(v_x_2421_, v___x_2424_);
if (v___x_2425_ == 0)
{
lean_object* v___x_2426_; lean_object* v___x_2427_; 
lean_dec(v_x_2421_);
v___x_2426_ = lean_box(0);
v___x_2427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
lean_ctor_set(v___x_2427_, 1, v_a_2423_);
return v___x_2427_;
}
else
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; uint8_t v___x_2431_; 
v___x_2428_ = lean_unsigned_to_nat(1u);
v___x_2429_ = l_Lean_Syntax_getArg(v_x_2421_, v___x_2428_);
lean_dec(v_x_2421_);
v___x_2430_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_2429_);
v___x_2431_ = l_Lean_Syntax_matchesNull(v___x_2429_, v___x_2430_);
if (v___x_2431_ == 0)
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
lean_dec(v___x_2429_);
v___x_2432_ = lean_box(0);
v___x_2433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2432_);
lean_ctor_set(v___x_2433_, 1, v_a_2423_);
return v___x_2433_;
}
else
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2434_ = lean_unsigned_to_nat(0u);
v___x_2435_ = l_Lean_Syntax_getArg(v___x_2429_, v___x_2434_);
v___x_2436_ = l_Lean_Syntax_getArg(v___x_2429_, v___x_2428_);
v___x_2437_ = lean_unsigned_to_nat(2u);
v___x_2438_ = l_Lean_Syntax_getArg(v___x_2429_, v___x_2437_);
lean_dec(v___x_2429_);
v___x_2439_ = 0;
v___x_2440_ = l_Lean_SourceInfo_fromRef(v_a_2422_, v___x_2439_);
v___x_2441_ = ((lean_object*)(l_unexpandIte___closed__1));
v___x_2442_ = ((lean_object*)(l_unexpandIte___closed__2));
lean_inc_n(v___x_2440_, 3);
v___x_2443_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2440_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
v___x_2444_ = ((lean_object*)(l_unexpandIte___closed__3));
v___x_2445_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2440_);
lean_ctor_set(v___x_2445_, 1, v___x_2444_);
v___x_2446_ = ((lean_object*)(l_unexpandIte___closed__4));
v___x_2447_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2440_);
lean_ctor_set(v___x_2447_, 1, v___x_2446_);
v___x_2448_ = l_Lean_Syntax_node6(v___x_2440_, v___x_2441_, v___x_2443_, v___x_2435_, v___x_2445_, v___x_2436_, v___x_2447_, v___x_2438_);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2448_);
lean_ctor_set(v___x_2449_, 1, v_a_2423_);
return v___x_2449_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandIte___boxed(lean_object* v_x_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l_unexpandIte(v_x_2450_, v_a_2451_, v_a_2452_);
lean_dec(v_a_2451_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l_unexpandEqNDRec(lean_object* v_x_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_){
_start:
{
lean_object* v___x_2464_; uint8_t v___x_2465_; 
v___x_2464_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2461_);
v___x_2465_ = l_Lean_Syntax_isOfKind(v_x_2461_, v___x_2464_);
if (v___x_2465_ == 0)
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
lean_dec(v_x_2461_);
v___x_2466_ = lean_box(0);
v___x_2467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2466_);
lean_ctor_set(v___x_2467_, 1, v_a_2463_);
return v___x_2467_;
}
else
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; uint8_t v___x_2471_; 
v___x_2468_ = lean_unsigned_to_nat(1u);
v___x_2469_ = l_Lean_Syntax_getArg(v_x_2461_, v___x_2468_);
lean_dec(v_x_2461_);
v___x_2470_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2469_);
v___x_2471_ = l_Lean_Syntax_matchesNull(v___x_2469_, v___x_2470_);
if (v___x_2471_ == 0)
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
lean_dec(v___x_2469_);
v___x_2472_ = lean_box(0);
v___x_2473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
lean_ctor_set(v___x_2473_, 1, v_a_2463_);
return v___x_2473_;
}
else
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; uint8_t v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2474_ = lean_unsigned_to_nat(0u);
v___x_2475_ = l_Lean_Syntax_getArg(v___x_2469_, v___x_2474_);
v___x_2476_ = l_Lean_Syntax_getArg(v___x_2469_, v___x_2468_);
lean_dec(v___x_2469_);
v___x_2477_ = 0;
v___x_2478_ = l_Lean_SourceInfo_fromRef(v_a_2462_, v___x_2477_);
v___x_2479_ = ((lean_object*)(l_unexpandEqNDRec___closed__1));
v___x_2480_ = ((lean_object*)(l_unexpandEqNDRec___closed__2));
lean_inc_n(v___x_2478_, 2);
v___x_2481_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2478_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
v___x_2482_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2483_ = l_Lean_Syntax_node1(v___x_2478_, v___x_2482_, v___x_2475_);
v___x_2484_ = l_Lean_Syntax_node3(v___x_2478_, v___x_2479_, v___x_2476_, v___x_2481_, v___x_2483_);
v___x_2485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
lean_ctor_set(v___x_2485_, 1, v_a_2463_);
return v___x_2485_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandEqNDRec___boxed(lean_object* v_x_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l_unexpandEqNDRec(v_x_2486_, v_a_2487_, v_a_2488_);
lean_dec(v_a_2487_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l_unexpandEqRec(lean_object* v_x_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_){
_start:
{
lean_object* v___x_2493_; uint8_t v___x_2494_; 
v___x_2493_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2490_);
v___x_2494_ = l_Lean_Syntax_isOfKind(v_x_2490_, v___x_2493_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
lean_dec(v_x_2490_);
v___x_2495_ = lean_box(0);
v___x_2496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
lean_ctor_set(v___x_2496_, 1, v_a_2492_);
return v___x_2496_;
}
else
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; uint8_t v___x_2500_; 
v___x_2497_ = lean_unsigned_to_nat(1u);
v___x_2498_ = l_Lean_Syntax_getArg(v_x_2490_, v___x_2497_);
lean_dec(v_x_2490_);
v___x_2499_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2498_);
v___x_2500_ = l_Lean_Syntax_matchesNull(v___x_2498_, v___x_2499_);
if (v___x_2500_ == 0)
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
lean_dec(v___x_2498_);
v___x_2501_ = lean_box(0);
v___x_2502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
lean_ctor_set(v___x_2502_, 1, v_a_2492_);
return v___x_2502_;
}
else
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2503_ = lean_unsigned_to_nat(0u);
v___x_2504_ = l_Lean_Syntax_getArg(v___x_2498_, v___x_2503_);
v___x_2505_ = l_Lean_Syntax_getArg(v___x_2498_, v___x_2497_);
lean_dec(v___x_2498_);
v___x_2506_ = 0;
v___x_2507_ = l_Lean_SourceInfo_fromRef(v_a_2491_, v___x_2506_);
v___x_2508_ = ((lean_object*)(l_unexpandEqNDRec___closed__1));
v___x_2509_ = ((lean_object*)(l_unexpandEqNDRec___closed__2));
lean_inc_n(v___x_2507_, 2);
v___x_2510_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2507_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
v___x_2511_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2512_ = l_Lean_Syntax_node1(v___x_2507_, v___x_2511_, v___x_2504_);
v___x_2513_ = l_Lean_Syntax_node3(v___x_2507_, v___x_2508_, v___x_2505_, v___x_2510_, v___x_2512_);
v___x_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2514_, 0, v___x_2513_);
lean_ctor_set(v___x_2514_, 1, v_a_2492_);
return v___x_2514_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandEqRec___boxed(lean_object* v_x_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_unexpandEqRec(v_x_2515_, v_a_2516_, v_a_2517_);
lean_dec(v_a_2516_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_unexpandExists(lean_object* v_x_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_){
_start:
{
lean_object* v___x_2532_; uint8_t v___x_2533_; 
v___x_2532_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2529_);
v___x_2533_ = l_Lean_Syntax_isOfKind(v_x_2529_, v___x_2532_);
if (v___x_2533_ == 0)
{
lean_object* v___x_2534_; lean_object* v___x_2535_; 
lean_dec(v_x_2529_);
v___x_2534_ = lean_box(0);
v___x_2535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2534_);
lean_ctor_set(v___x_2535_, 1, v_a_2531_);
return v___x_2535_;
}
else
{
lean_object* v___x_2536_; lean_object* v___x_2537_; uint8_t v___x_2538_; 
v___x_2536_ = lean_unsigned_to_nat(1u);
v___x_2537_ = l_Lean_Syntax_getArg(v_x_2529_, v___x_2536_);
lean_dec(v_x_2529_);
lean_inc(v___x_2537_);
v___x_2538_ = l_Lean_Syntax_matchesNull(v___x_2537_, v___x_2536_);
if (v___x_2538_ == 0)
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
lean_dec(v___x_2537_);
v___x_2539_ = lean_box(0);
v___x_2540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2539_);
lean_ctor_set(v___x_2540_, 1, v_a_2531_);
return v___x_2540_;
}
else
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; uint8_t v___x_2544_; 
v___x_2541_ = lean_unsigned_to_nat(0u);
v___x_2542_ = l_Lean_Syntax_getArg(v___x_2537_, v___x_2541_);
lean_dec(v___x_2537_);
v___x_2543_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7));
lean_inc(v___x_2542_);
v___x_2544_ = l_Lean_Syntax_isOfKind(v___x_2542_, v___x_2543_);
if (v___x_2544_ == 0)
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
lean_dec(v___x_2542_);
v___x_2545_ = lean_box(0);
v___x_2546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
lean_ctor_set(v___x_2546_, 1, v_a_2531_);
return v___x_2546_;
}
else
{
lean_object* v___x_2547_; lean_object* v___x_2548_; uint8_t v___x_2549_; 
v___x_2547_ = l_Lean_Syntax_getArg(v___x_2542_, v___x_2536_);
lean_dec(v___x_2542_);
v___x_2548_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9));
lean_inc(v___x_2547_);
v___x_2549_ = l_Lean_Syntax_isOfKind(v___x_2547_, v___x_2548_);
if (v___x_2549_ == 0)
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
lean_dec(v___x_2547_);
v___x_2550_ = lean_box(0);
v___x_2551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
lean_ctor_set(v___x_2551_, 1, v_a_2531_);
return v___x_2551_;
}
else
{
lean_object* v___x_2552_; uint8_t v___x_2553_; 
v___x_2552_ = l_Lean_Syntax_getArg(v___x_2547_, v___x_2541_);
lean_inc(v___x_2552_);
v___x_2553_ = l_Lean_Syntax_matchesNull(v___x_2552_, v___x_2536_);
if (v___x_2553_ == 0)
{
lean_object* v___x_2554_; lean_object* v___x_2555_; 
lean_dec(v___x_2552_);
lean_dec(v___x_2547_);
v___x_2554_ = lean_box(0);
v___x_2555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2554_);
lean_ctor_set(v___x_2555_, 1, v_a_2531_);
return v___x_2555_;
}
else
{
lean_object* v___x_2556_; lean_object* v___x_2557_; uint8_t v___x_2558_; 
v___x_2556_ = l_Lean_Syntax_getArg(v___x_2552_, v___x_2541_);
lean_dec(v___x_2552_);
v___x_2557_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14));
lean_inc(v___x_2556_);
v___x_2558_ = l_Lean_Syntax_isOfKind(v___x_2556_, v___x_2557_);
if (v___x_2558_ == 0)
{
lean_object* v___x_2559_; uint8_t v___x_2560_; 
v___x_2559_ = ((lean_object*)(l_unexpandExists___closed__1));
lean_inc(v___x_2556_);
v___x_2560_ = l_Lean_Syntax_isOfKind(v___x_2556_, v___x_2559_);
if (v___x_2560_ == 0)
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
lean_dec(v___x_2556_);
lean_dec(v___x_2547_);
v___x_2561_ = lean_box(0);
v___x_2562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
lean_ctor_set(v___x_2562_, 1, v_a_2531_);
return v___x_2562_;
}
else
{
lean_object* v___x_2563_; lean_object* v___x_2564_; uint8_t v___x_2565_; 
v___x_2563_ = l_Lean_Syntax_getArg(v___x_2556_, v___x_2541_);
v___x_2564_ = ((lean_object*)(l_unexpandUnit___redArg___closed__5));
lean_inc(v___x_2563_);
v___x_2565_ = l_Lean_Syntax_isOfKind(v___x_2563_, v___x_2564_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_dec(v___x_2563_);
lean_dec(v___x_2556_);
lean_dec(v___x_2547_);
v___x_2566_ = lean_box(0);
v___x_2567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
lean_ctor_set(v___x_2567_, 1, v_a_2531_);
return v___x_2567_;
}
else
{
lean_object* v___x_2568_; lean_object* v___x_2569_; uint8_t v___x_2570_; 
v___x_2568_ = l_Lean_Syntax_getArg(v___x_2563_, v___x_2536_);
lean_dec(v___x_2563_);
v___x_2569_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
lean_inc(v___x_2568_);
v___x_2570_ = l_Lean_Syntax_isOfKind(v___x_2568_, v___x_2569_);
if (v___x_2570_ == 0)
{
lean_object* v___x_2571_; lean_object* v___x_2572_; 
lean_dec(v___x_2568_);
lean_dec(v___x_2556_);
lean_dec(v___x_2547_);
v___x_2571_ = lean_box(0);
v___x_2572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
lean_ctor_set(v___x_2572_, 1, v_a_2531_);
return v___x_2572_;
}
else
{
lean_object* v___x_2573_; lean_object* v___x_2574_; uint8_t v___x_2575_; 
v___x_2573_ = l_Lean_Syntax_getArg(v___x_2568_, v___x_2541_);
lean_dec(v___x_2568_);
v___x_2574_ = lean_obj_once(&l_unexpandUnit___redArg___closed__10, &l_unexpandUnit___redArg___closed__10_once, _init_l_unexpandUnit___redArg___closed__10);
v___x_2575_ = l_Lean_Syntax_matchesIdent(v___x_2573_, v___x_2574_);
lean_dec(v___x_2573_);
if (v___x_2575_ == 0)
{
lean_object* v___x_2576_; lean_object* v___x_2577_; 
lean_dec(v___x_2556_);
lean_dec(v___x_2547_);
v___x_2576_ = lean_box(0);
v___x_2577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2576_);
lean_ctor_set(v___x_2577_, 1, v_a_2531_);
return v___x_2577_;
}
else
{
lean_object* v___x_2578_; uint8_t v___x_2579_; 
v___x_2578_ = l_Lean_Syntax_getArg(v___x_2556_, v___x_2536_);
lean_inc(v___x_2578_);
v___x_2579_ = l_Lean_Syntax_isOfKind(v___x_2578_, v___x_2557_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2580_; lean_object* v___x_2581_; 
lean_dec(v___x_2578_);
lean_dec(v___x_2556_);
lean_dec(v___x_2547_);
v___x_2580_ = lean_box(0);
v___x_2581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2580_);
lean_ctor_set(v___x_2581_, 1, v_a_2531_);
return v___x_2581_;
}
else
{
lean_object* v___x_2582_; lean_object* v___x_2583_; uint8_t v___x_2584_; 
v___x_2582_ = lean_unsigned_to_nat(3u);
v___x_2583_ = l_Lean_Syntax_getArg(v___x_2556_, v___x_2582_);
lean_dec(v___x_2556_);
lean_inc(v___x_2583_);
v___x_2584_ = l_Lean_Syntax_matchesNull(v___x_2583_, v___x_2536_);
if (v___x_2584_ == 0)
{
lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_dec(v___x_2583_);
lean_dec(v___x_2578_);
lean_dec(v___x_2547_);
v___x_2585_ = lean_box(0);
v___x_2586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2585_);
lean_ctor_set(v___x_2586_, 1, v_a_2531_);
return v___x_2586_;
}
else
{
lean_object* v___x_2587_; uint8_t v___x_2588_; 
v___x_2587_ = l_Lean_Syntax_getArg(v___x_2547_, v___x_2536_);
v___x_2588_ = l_Lean_Syntax_matchesNull(v___x_2587_, v___x_2541_);
if (v___x_2588_ == 0)
{
lean_object* v___x_2589_; lean_object* v___x_2590_; 
lean_dec(v___x_2583_);
lean_dec(v___x_2578_);
lean_dec(v___x_2547_);
v___x_2589_ = lean_box(0);
v___x_2590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2589_);
lean_ctor_set(v___x_2590_, 1, v_a_2531_);
return v___x_2590_;
}
else
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v___x_2591_ = l_Lean_Syntax_getArg(v___x_2583_, v___x_2541_);
lean_dec(v___x_2583_);
v___x_2592_ = l_Lean_Syntax_getArg(v___x_2547_, v___x_2582_);
lean_dec(v___x_2547_);
v___x_2593_ = l_Lean_SourceInfo_fromRef(v_a_2530_, v___x_2558_);
v___x_2594_ = ((lean_object*)(l_term_u2203___x2c___00__closed__1));
v___x_2595_ = ((lean_object*)(l_term_u2203___x2c___00__closed__2));
lean_inc_n(v___x_2593_, 10);
v___x_2596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2593_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = ((lean_object*)(l_Lean_explicitBinders___closed__1));
v___x_2598_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2599_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__1));
v___x_2600_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
v___x_2601_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2593_);
lean_ctor_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = ((lean_object*)(l_unexpandExists___closed__3));
v___x_2603_ = l_Lean_Syntax_node1(v___x_2593_, v___x_2602_, v___x_2578_);
v___x_2604_ = l_Lean_Syntax_node1(v___x_2593_, v___x_2598_, v___x_2603_);
v___x_2605_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_2606_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2593_);
lean_ctor_set(v___x_2606_, 1, v___x_2605_);
v___x_2607_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2608_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2593_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
v___x_2609_ = l_Lean_Syntax_node5(v___x_2593_, v___x_2599_, v___x_2601_, v___x_2604_, v___x_2606_, v___x_2591_, v___x_2608_);
v___x_2610_ = l_Lean_Syntax_node1(v___x_2593_, v___x_2598_, v___x_2609_);
v___x_2611_ = l_Lean_Syntax_node1(v___x_2593_, v___x_2597_, v___x_2610_);
v___x_2612_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2613_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2593_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = l_Lean_Syntax_node4(v___x_2593_, v___x_2594_, v___x_2596_, v___x_2611_, v___x_2613_, v___x_2592_);
v___x_2615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2615_, 0, v___x_2614_);
lean_ctor_set(v___x_2615_, 1, v_a_2531_);
return v___x_2615_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_2616_; uint8_t v___x_2617_; 
v___x_2616_ = l_Lean_Syntax_getArg(v___x_2547_, v___x_2536_);
v___x_2617_ = l_Lean_Syntax_matchesNull(v___x_2616_, v___x_2541_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
lean_dec(v___x_2556_);
lean_dec(v___x_2547_);
v___x_2618_ = lean_box(0);
v___x_2619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
lean_ctor_set(v___x_2619_, 1, v_a_2531_);
return v___x_2619_;
}
else
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; uint8_t v___x_2623_; 
v___x_2620_ = lean_unsigned_to_nat(3u);
v___x_2621_ = l_Lean_Syntax_getArg(v___x_2547_, v___x_2620_);
lean_dec(v___x_2547_);
v___x_2622_ = ((lean_object*)(l_term_u2203___x2c___00__closed__1));
lean_inc(v___x_2621_);
v___x_2623_ = l_Lean_Syntax_isOfKind(v___x_2621_, v___x_2622_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2624_ = l_Lean_SourceInfo_fromRef(v_a_2530_, v___x_2623_);
v___x_2625_ = ((lean_object*)(l_term_u2203___x2c___00__closed__2));
lean_inc_n(v___x_2624_, 7);
v___x_2626_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2624_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v___x_2627_ = ((lean_object*)(l_Lean_explicitBinders___closed__1));
v___x_2628_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__2));
v___x_2629_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2630_ = ((lean_object*)(l_unexpandExists___closed__3));
v___x_2631_ = l_Lean_Syntax_node1(v___x_2624_, v___x_2630_, v___x_2556_);
v___x_2632_ = l_Lean_Syntax_node1(v___x_2624_, v___x_2629_, v___x_2631_);
v___x_2633_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2634_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2624_);
lean_ctor_set(v___x_2634_, 1, v___x_2629_);
lean_ctor_set(v___x_2634_, 2, v___x_2633_);
v___x_2635_ = l_Lean_Syntax_node2(v___x_2624_, v___x_2628_, v___x_2632_, v___x_2634_);
v___x_2636_ = l_Lean_Syntax_node1(v___x_2624_, v___x_2627_, v___x_2635_);
v___x_2637_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2624_);
lean_ctor_set(v___x_2638_, 1, v___x_2637_);
v___x_2639_ = l_Lean_Syntax_node4(v___x_2624_, v___x_2622_, v___x_2626_, v___x_2636_, v___x_2638_, v___x_2621_);
v___x_2640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
lean_ctor_set(v___x_2640_, 1, v_a_2531_);
return v___x_2640_;
}
else
{
lean_object* v___x_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; 
v___x_2641_ = l_Lean_Syntax_getArg(v___x_2621_, v___x_2536_);
v___x_2642_ = ((lean_object*)(l_Lean_explicitBinders___closed__1));
lean_inc(v___x_2641_);
v___x_2643_ = l_Lean_Syntax_isOfKind(v___x_2641_, v___x_2642_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
lean_dec(v___x_2641_);
v___x_2644_ = l_Lean_SourceInfo_fromRef(v_a_2530_, v___x_2643_);
v___x_2645_ = ((lean_object*)(l_term_u2203___x2c___00__closed__2));
lean_inc_n(v___x_2644_, 7);
v___x_2646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2644_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
v___x_2647_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__2));
v___x_2648_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2649_ = ((lean_object*)(l_unexpandExists___closed__3));
v___x_2650_ = l_Lean_Syntax_node1(v___x_2644_, v___x_2649_, v___x_2556_);
v___x_2651_ = l_Lean_Syntax_node1(v___x_2644_, v___x_2648_, v___x_2650_);
v___x_2652_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2653_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2644_);
lean_ctor_set(v___x_2653_, 1, v___x_2648_);
lean_ctor_set(v___x_2653_, 2, v___x_2652_);
v___x_2654_ = l_Lean_Syntax_node2(v___x_2644_, v___x_2647_, v___x_2651_, v___x_2653_);
v___x_2655_ = l_Lean_Syntax_node1(v___x_2644_, v___x_2642_, v___x_2654_);
v___x_2656_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2657_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2644_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = l_Lean_Syntax_node4(v___x_2644_, v___x_2622_, v___x_2646_, v___x_2655_, v___x_2657_, v___x_2621_);
v___x_2659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2659_, 0, v___x_2658_);
lean_ctor_set(v___x_2659_, 1, v_a_2531_);
return v___x_2659_;
}
else
{
lean_object* v___x_2660_; lean_object* v___x_2661_; uint8_t v___x_2662_; 
v___x_2660_ = l_Lean_Syntax_getArg(v___x_2641_, v___x_2541_);
lean_dec(v___x_2641_);
v___x_2661_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__2));
lean_inc(v___x_2660_);
v___x_2662_ = l_Lean_Syntax_isOfKind(v___x_2660_, v___x_2661_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; 
lean_dec(v___x_2660_);
v___x_2663_ = l_Lean_SourceInfo_fromRef(v_a_2530_, v___x_2662_);
v___x_2664_ = ((lean_object*)(l_term_u2203___x2c___00__closed__2));
lean_inc_n(v___x_2663_, 7);
v___x_2665_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2663_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v___x_2666_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2667_ = ((lean_object*)(l_unexpandExists___closed__3));
v___x_2668_ = l_Lean_Syntax_node1(v___x_2663_, v___x_2667_, v___x_2556_);
v___x_2669_ = l_Lean_Syntax_node1(v___x_2663_, v___x_2666_, v___x_2668_);
v___x_2670_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2671_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2663_);
lean_ctor_set(v___x_2671_, 1, v___x_2666_);
lean_ctor_set(v___x_2671_, 2, v___x_2670_);
v___x_2672_ = l_Lean_Syntax_node2(v___x_2663_, v___x_2661_, v___x_2669_, v___x_2671_);
v___x_2673_ = l_Lean_Syntax_node1(v___x_2663_, v___x_2642_, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2675_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2663_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = l_Lean_Syntax_node4(v___x_2663_, v___x_2622_, v___x_2665_, v___x_2673_, v___x_2675_, v___x_2621_);
v___x_2677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2676_);
lean_ctor_set(v___x_2677_, 1, v_a_2531_);
return v___x_2677_;
}
else
{
lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2678_ = l_Lean_Syntax_getArg(v___x_2660_, v___x_2536_);
v___x_2679_ = l_Lean_Syntax_matchesNull(v___x_2678_, v___x_2541_);
if (v___x_2679_ == 0)
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
lean_dec(v___x_2660_);
v___x_2680_ = l_Lean_SourceInfo_fromRef(v_a_2530_, v___x_2679_);
v___x_2681_ = ((lean_object*)(l_term_u2203___x2c___00__closed__2));
lean_inc_n(v___x_2680_, 7);
v___x_2682_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2680_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
v___x_2683_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2684_ = ((lean_object*)(l_unexpandExists___closed__3));
v___x_2685_ = l_Lean_Syntax_node1(v___x_2680_, v___x_2684_, v___x_2556_);
v___x_2686_ = l_Lean_Syntax_node1(v___x_2680_, v___x_2683_, v___x_2685_);
v___x_2687_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2680_);
lean_ctor_set(v___x_2688_, 1, v___x_2683_);
lean_ctor_set(v___x_2688_, 2, v___x_2687_);
v___x_2689_ = l_Lean_Syntax_node2(v___x_2680_, v___x_2661_, v___x_2686_, v___x_2688_);
v___x_2690_ = l_Lean_Syntax_node1(v___x_2680_, v___x_2642_, v___x_2689_);
v___x_2691_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2692_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2680_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
v___x_2693_ = l_Lean_Syntax_node4(v___x_2680_, v___x_2622_, v___x_2682_, v___x_2690_, v___x_2692_, v___x_2621_);
v___x_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2693_);
lean_ctor_set(v___x_2694_, 1, v_a_2531_);
return v___x_2694_;
}
else
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v_xs_2699_; uint8_t v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2695_ = l_Lean_Syntax_getArg(v___x_2660_, v___x_2541_);
lean_dec(v___x_2660_);
v___x_2696_ = l_Lean_Syntax_getArg(v___x_2621_, v___x_2620_);
lean_dec(v___x_2621_);
v___x_2697_ = ((lean_object*)(l_unexpandExists___closed__3));
v___x_2698_ = l_Lean_Syntax_getArgs(v___x_2695_);
lean_dec(v___x_2695_);
v_xs_2699_ = l_unsafeCast___redArg(v___x_2698_);
lean_dec_ref(v___x_2698_);
v___x_2700_ = 0;
v___x_2701_ = l_Lean_SourceInfo_fromRef(v_a_2530_, v___x_2700_);
v___x_2702_ = ((lean_object*)(l_term_u2203___x2c___00__closed__2));
lean_inc_n(v___x_2701_, 7);
v___x_2703_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2701_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2705_ = l_Lean_Syntax_node1(v___x_2701_, v___x_2697_, v___x_2556_);
v___x_2706_ = l_Array_mkArray1___redArg(v___x_2705_);
v___x_2707_ = l_unsafeCast___redArg(v_xs_2699_);
lean_dec(v_xs_2699_);
v___x_2708_ = l_Array_append___redArg(v___x_2706_, v___x_2707_);
lean_dec(v___x_2707_);
v___x_2709_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2701_);
lean_ctor_set(v___x_2709_, 1, v___x_2704_);
lean_ctor_set(v___x_2709_, 2, v___x_2708_);
v___x_2710_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2711_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2701_);
lean_ctor_set(v___x_2711_, 1, v___x_2704_);
lean_ctor_set(v___x_2711_, 2, v___x_2710_);
v___x_2712_ = l_Lean_Syntax_node2(v___x_2701_, v___x_2661_, v___x_2709_, v___x_2711_);
v___x_2713_ = l_Lean_Syntax_node1(v___x_2701_, v___x_2642_, v___x_2712_);
v___x_2714_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_2715_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2701_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = l_Lean_Syntax_node4(v___x_2701_, v___x_2622_, v___x_2703_, v___x_2713_, v___x_2715_, v___x_2696_);
v___x_2717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
lean_ctor_set(v___x_2717_, 1, v_a_2531_);
return v___x_2717_;
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
LEAN_EXPORT lean_object* l_unexpandExists___boxed(lean_object* v_x_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_unexpandExists(v_x_2718_, v_a_2719_, v_a_2720_);
lean_dec(v_a_2719_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l_unexpandSigma(lean_object* v_x_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_){
_start:
{
lean_object* v___x_2726_; uint8_t v___x_2727_; 
v___x_2726_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2723_);
v___x_2727_ = l_Lean_Syntax_isOfKind(v_x_2723_, v___x_2726_);
if (v___x_2727_ == 0)
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
lean_dec(v_x_2723_);
v___x_2728_ = lean_box(0);
v___x_2729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
lean_ctor_set(v___x_2729_, 1, v_a_2725_);
return v___x_2729_;
}
else
{
lean_object* v___x_2730_; lean_object* v___x_2731_; uint8_t v___x_2732_; 
v___x_2730_ = lean_unsigned_to_nat(1u);
v___x_2731_ = l_Lean_Syntax_getArg(v_x_2723_, v___x_2730_);
lean_dec(v_x_2723_);
lean_inc(v___x_2731_);
v___x_2732_ = l_Lean_Syntax_matchesNull(v___x_2731_, v___x_2730_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
lean_dec(v___x_2731_);
v___x_2733_ = lean_box(0);
v___x_2734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2733_);
lean_ctor_set(v___x_2734_, 1, v_a_2725_);
return v___x_2734_;
}
else
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; 
v___x_2735_ = lean_unsigned_to_nat(0u);
v___x_2736_ = l_Lean_Syntax_getArg(v___x_2731_, v___x_2735_);
lean_dec(v___x_2731_);
v___x_2737_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7));
lean_inc(v___x_2736_);
v___x_2738_ = l_Lean_Syntax_isOfKind(v___x_2736_, v___x_2737_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
lean_dec(v___x_2736_);
v___x_2739_ = lean_box(0);
v___x_2740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2739_);
lean_ctor_set(v___x_2740_, 1, v_a_2725_);
return v___x_2740_;
}
else
{
lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; 
v___x_2741_ = l_Lean_Syntax_getArg(v___x_2736_, v___x_2730_);
lean_dec(v___x_2736_);
v___x_2742_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9));
lean_inc(v___x_2741_);
v___x_2743_ = l_Lean_Syntax_isOfKind(v___x_2741_, v___x_2742_);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; lean_object* v___x_2745_; 
lean_dec(v___x_2741_);
v___x_2744_ = lean_box(0);
v___x_2745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2744_);
lean_ctor_set(v___x_2745_, 1, v_a_2725_);
return v___x_2745_;
}
else
{
lean_object* v___x_2746_; uint8_t v___x_2747_; 
v___x_2746_ = l_Lean_Syntax_getArg(v___x_2741_, v___x_2735_);
lean_inc(v___x_2746_);
v___x_2747_ = l_Lean_Syntax_matchesNull(v___x_2746_, v___x_2730_);
if (v___x_2747_ == 0)
{
lean_object* v___x_2748_; lean_object* v___x_2749_; 
lean_dec(v___x_2746_);
lean_dec(v___x_2741_);
v___x_2748_ = lean_box(0);
v___x_2749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2748_);
lean_ctor_set(v___x_2749_, 1, v_a_2725_);
return v___x_2749_;
}
else
{
lean_object* v___x_2750_; lean_object* v___x_2751_; uint8_t v___x_2752_; 
v___x_2750_ = l_Lean_Syntax_getArg(v___x_2746_, v___x_2735_);
lean_dec(v___x_2746_);
v___x_2751_ = ((lean_object*)(l_unexpandExists___closed__1));
lean_inc(v___x_2750_);
v___x_2752_ = l_Lean_Syntax_isOfKind(v___x_2750_, v___x_2751_);
if (v___x_2752_ == 0)
{
lean_object* v___x_2753_; lean_object* v___x_2754_; 
lean_dec(v___x_2750_);
lean_dec(v___x_2741_);
v___x_2753_ = lean_box(0);
v___x_2754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2753_);
lean_ctor_set(v___x_2754_, 1, v_a_2725_);
return v___x_2754_;
}
else
{
lean_object* v___x_2755_; lean_object* v___x_2756_; uint8_t v___x_2757_; 
v___x_2755_ = l_Lean_Syntax_getArg(v___x_2750_, v___x_2735_);
v___x_2756_ = ((lean_object*)(l_unexpandUnit___redArg___closed__5));
lean_inc(v___x_2755_);
v___x_2757_ = l_Lean_Syntax_isOfKind(v___x_2755_, v___x_2756_);
if (v___x_2757_ == 0)
{
lean_object* v___x_2758_; lean_object* v___x_2759_; 
lean_dec(v___x_2755_);
lean_dec(v___x_2750_);
lean_dec(v___x_2741_);
v___x_2758_ = lean_box(0);
v___x_2759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2758_);
lean_ctor_set(v___x_2759_, 1, v_a_2725_);
return v___x_2759_;
}
else
{
lean_object* v___x_2760_; lean_object* v___x_2761_; uint8_t v___x_2762_; 
v___x_2760_ = l_Lean_Syntax_getArg(v___x_2755_, v___x_2730_);
lean_dec(v___x_2755_);
v___x_2761_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
lean_inc(v___x_2760_);
v___x_2762_ = l_Lean_Syntax_isOfKind(v___x_2760_, v___x_2761_);
if (v___x_2762_ == 0)
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
lean_dec(v___x_2760_);
lean_dec(v___x_2750_);
lean_dec(v___x_2741_);
v___x_2763_ = lean_box(0);
v___x_2764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2763_);
lean_ctor_set(v___x_2764_, 1, v_a_2725_);
return v___x_2764_;
}
else
{
lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; 
v___x_2765_ = l_Lean_Syntax_getArg(v___x_2760_, v___x_2735_);
lean_dec(v___x_2760_);
v___x_2766_ = lean_obj_once(&l_unexpandUnit___redArg___closed__10, &l_unexpandUnit___redArg___closed__10_once, _init_l_unexpandUnit___redArg___closed__10);
v___x_2767_ = l_Lean_Syntax_matchesIdent(v___x_2765_, v___x_2766_);
lean_dec(v___x_2765_);
if (v___x_2767_ == 0)
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
lean_dec(v___x_2750_);
lean_dec(v___x_2741_);
v___x_2768_ = lean_box(0);
v___x_2769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2768_);
lean_ctor_set(v___x_2769_, 1, v_a_2725_);
return v___x_2769_;
}
else
{
lean_object* v___x_2770_; lean_object* v___x_2771_; uint8_t v___x_2772_; 
v___x_2770_ = l_Lean_Syntax_getArg(v___x_2750_, v___x_2730_);
v___x_2771_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14));
lean_inc(v___x_2770_);
v___x_2772_ = l_Lean_Syntax_isOfKind(v___x_2770_, v___x_2771_);
if (v___x_2772_ == 0)
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
lean_dec(v___x_2770_);
lean_dec(v___x_2750_);
lean_dec(v___x_2741_);
v___x_2773_ = lean_box(0);
v___x_2774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
lean_ctor_set(v___x_2774_, 1, v_a_2725_);
return v___x_2774_;
}
else
{
lean_object* v___x_2775_; lean_object* v___x_2776_; uint8_t v___x_2777_; 
v___x_2775_ = lean_unsigned_to_nat(3u);
v___x_2776_ = l_Lean_Syntax_getArg(v___x_2750_, v___x_2775_);
lean_dec(v___x_2750_);
lean_inc(v___x_2776_);
v___x_2777_ = l_Lean_Syntax_matchesNull(v___x_2776_, v___x_2730_);
if (v___x_2777_ == 0)
{
lean_object* v___x_2778_; lean_object* v___x_2779_; 
lean_dec(v___x_2776_);
lean_dec(v___x_2770_);
lean_dec(v___x_2741_);
v___x_2778_ = lean_box(0);
v___x_2779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2778_);
lean_ctor_set(v___x_2779_, 1, v_a_2725_);
return v___x_2779_;
}
else
{
lean_object* v___x_2780_; uint8_t v___x_2781_; 
v___x_2780_ = l_Lean_Syntax_getArg(v___x_2741_, v___x_2730_);
v___x_2781_ = l_Lean_Syntax_matchesNull(v___x_2780_, v___x_2735_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
lean_dec(v___x_2776_);
lean_dec(v___x_2770_);
lean_dec(v___x_2741_);
v___x_2782_ = lean_box(0);
v___x_2783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2782_);
lean_ctor_set(v___x_2783_, 1, v_a_2725_);
return v___x_2783_;
}
else
{
lean_object* v___x_2784_; lean_object* v___x_2785_; uint8_t v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2784_ = l_Lean_Syntax_getArg(v___x_2776_, v___x_2735_);
lean_dec(v___x_2776_);
v___x_2785_ = l_Lean_Syntax_getArg(v___x_2741_, v___x_2775_);
lean_dec(v___x_2741_);
v___x_2786_ = 0;
v___x_2787_ = l_Lean_SourceInfo_fromRef(v_a_2724_, v___x_2786_);
v___x_2788_ = ((lean_object*)(l_term___xd7____1___closed__1));
v___x_2789_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__1));
v___x_2790_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2787_, 7);
v___x_2791_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2787_);
lean_ctor_set(v___x_2791_, 1, v___x_2790_);
v___x_2792_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2793_ = ((lean_object*)(l_unexpandExists___closed__3));
v___x_2794_ = l_Lean_Syntax_node1(v___x_2787_, v___x_2793_, v___x_2770_);
v___x_2795_ = l_Lean_Syntax_node1(v___x_2787_, v___x_2792_, v___x_2794_);
v___x_2796_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_2797_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2787_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2799_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2787_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
v___x_2800_ = l_Lean_Syntax_node5(v___x_2787_, v___x_2789_, v___x_2791_, v___x_2795_, v___x_2797_, v___x_2784_, v___x_2799_);
v___x_2801_ = ((lean_object*)(l_unexpandSigma___closed__0));
v___x_2802_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2787_);
lean_ctor_set(v___x_2802_, 1, v___x_2801_);
v___x_2803_ = l_Lean_Syntax_node3(v___x_2787_, v___x_2788_, v___x_2800_, v___x_2802_, v___x_2785_);
v___x_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2803_);
lean_ctor_set(v___x_2804_, 1, v_a_2725_);
return v___x_2804_;
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
LEAN_EXPORT lean_object* l_unexpandSigma___boxed(lean_object* v_x_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_unexpandSigma(v_x_2805_, v_a_2806_, v_a_2807_);
lean_dec(v_a_2806_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_unexpandPSigma(lean_object* v_x_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_){
_start:
{
lean_object* v___x_2813_; uint8_t v___x_2814_; 
v___x_2813_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2810_);
v___x_2814_ = l_Lean_Syntax_isOfKind(v_x_2810_, v___x_2813_);
if (v___x_2814_ == 0)
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
lean_dec(v_x_2810_);
v___x_2815_ = lean_box(0);
v___x_2816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2815_);
lean_ctor_set(v___x_2816_, 1, v_a_2812_);
return v___x_2816_;
}
else
{
lean_object* v___x_2817_; lean_object* v___x_2818_; uint8_t v___x_2819_; 
v___x_2817_ = lean_unsigned_to_nat(1u);
v___x_2818_ = l_Lean_Syntax_getArg(v_x_2810_, v___x_2817_);
lean_dec(v_x_2810_);
lean_inc(v___x_2818_);
v___x_2819_ = l_Lean_Syntax_matchesNull(v___x_2818_, v___x_2817_);
if (v___x_2819_ == 0)
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
lean_dec(v___x_2818_);
v___x_2820_ = lean_box(0);
v___x_2821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2820_);
lean_ctor_set(v___x_2821_, 1, v_a_2812_);
return v___x_2821_;
}
else
{
lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; uint8_t v___x_2825_; 
v___x_2822_ = lean_unsigned_to_nat(0u);
v___x_2823_ = l_Lean_Syntax_getArg(v___x_2818_, v___x_2822_);
lean_dec(v___x_2818_);
v___x_2824_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7));
lean_inc(v___x_2823_);
v___x_2825_ = l_Lean_Syntax_isOfKind(v___x_2823_, v___x_2824_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
lean_dec(v___x_2823_);
v___x_2826_ = lean_box(0);
v___x_2827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2826_);
lean_ctor_set(v___x_2827_, 1, v_a_2812_);
return v___x_2827_;
}
else
{
lean_object* v___x_2828_; lean_object* v___x_2829_; uint8_t v___x_2830_; 
v___x_2828_ = l_Lean_Syntax_getArg(v___x_2823_, v___x_2817_);
lean_dec(v___x_2823_);
v___x_2829_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9));
lean_inc(v___x_2828_);
v___x_2830_ = l_Lean_Syntax_isOfKind(v___x_2828_, v___x_2829_);
if (v___x_2830_ == 0)
{
lean_object* v___x_2831_; lean_object* v___x_2832_; 
lean_dec(v___x_2828_);
v___x_2831_ = lean_box(0);
v___x_2832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2831_);
lean_ctor_set(v___x_2832_, 1, v_a_2812_);
return v___x_2832_;
}
else
{
lean_object* v___x_2833_; uint8_t v___x_2834_; 
v___x_2833_ = l_Lean_Syntax_getArg(v___x_2828_, v___x_2822_);
lean_inc(v___x_2833_);
v___x_2834_ = l_Lean_Syntax_matchesNull(v___x_2833_, v___x_2817_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
lean_dec(v___x_2833_);
lean_dec(v___x_2828_);
v___x_2835_ = lean_box(0);
v___x_2836_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2835_);
lean_ctor_set(v___x_2836_, 1, v_a_2812_);
return v___x_2836_;
}
else
{
lean_object* v___x_2837_; lean_object* v___x_2838_; uint8_t v___x_2839_; 
v___x_2837_ = l_Lean_Syntax_getArg(v___x_2833_, v___x_2822_);
lean_dec(v___x_2833_);
v___x_2838_ = ((lean_object*)(l_unexpandExists___closed__1));
lean_inc(v___x_2837_);
v___x_2839_ = l_Lean_Syntax_isOfKind(v___x_2837_, v___x_2838_);
if (v___x_2839_ == 0)
{
lean_object* v___x_2840_; lean_object* v___x_2841_; 
lean_dec(v___x_2837_);
lean_dec(v___x_2828_);
v___x_2840_ = lean_box(0);
v___x_2841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2840_);
lean_ctor_set(v___x_2841_, 1, v_a_2812_);
return v___x_2841_;
}
else
{
lean_object* v___x_2842_; lean_object* v___x_2843_; uint8_t v___x_2844_; 
v___x_2842_ = l_Lean_Syntax_getArg(v___x_2837_, v___x_2822_);
v___x_2843_ = ((lean_object*)(l_unexpandUnit___redArg___closed__5));
lean_inc(v___x_2842_);
v___x_2844_ = l_Lean_Syntax_isOfKind(v___x_2842_, v___x_2843_);
if (v___x_2844_ == 0)
{
lean_object* v___x_2845_; lean_object* v___x_2846_; 
lean_dec(v___x_2842_);
lean_dec(v___x_2837_);
lean_dec(v___x_2828_);
v___x_2845_ = lean_box(0);
v___x_2846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2845_);
lean_ctor_set(v___x_2846_, 1, v_a_2812_);
return v___x_2846_;
}
else
{
lean_object* v___x_2847_; lean_object* v___x_2848_; uint8_t v___x_2849_; 
v___x_2847_ = l_Lean_Syntax_getArg(v___x_2842_, v___x_2817_);
lean_dec(v___x_2842_);
v___x_2848_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
lean_inc(v___x_2847_);
v___x_2849_ = l_Lean_Syntax_isOfKind(v___x_2847_, v___x_2848_);
if (v___x_2849_ == 0)
{
lean_object* v___x_2850_; lean_object* v___x_2851_; 
lean_dec(v___x_2847_);
lean_dec(v___x_2837_);
lean_dec(v___x_2828_);
v___x_2850_ = lean_box(0);
v___x_2851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
lean_ctor_set(v___x_2851_, 1, v_a_2812_);
return v___x_2851_;
}
else
{
lean_object* v___x_2852_; lean_object* v___x_2853_; uint8_t v___x_2854_; 
v___x_2852_ = l_Lean_Syntax_getArg(v___x_2847_, v___x_2822_);
lean_dec(v___x_2847_);
v___x_2853_ = lean_obj_once(&l_unexpandUnit___redArg___closed__10, &l_unexpandUnit___redArg___closed__10_once, _init_l_unexpandUnit___redArg___closed__10);
v___x_2854_ = l_Lean_Syntax_matchesIdent(v___x_2852_, v___x_2853_);
lean_dec(v___x_2852_);
if (v___x_2854_ == 0)
{
lean_object* v___x_2855_; lean_object* v___x_2856_; 
lean_dec(v___x_2837_);
lean_dec(v___x_2828_);
v___x_2855_ = lean_box(0);
v___x_2856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2855_);
lean_ctor_set(v___x_2856_, 1, v_a_2812_);
return v___x_2856_;
}
else
{
lean_object* v___x_2857_; lean_object* v___x_2858_; uint8_t v___x_2859_; 
v___x_2857_ = l_Lean_Syntax_getArg(v___x_2837_, v___x_2817_);
v___x_2858_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14));
lean_inc(v___x_2857_);
v___x_2859_ = l_Lean_Syntax_isOfKind(v___x_2857_, v___x_2858_);
if (v___x_2859_ == 0)
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
lean_dec(v___x_2857_);
lean_dec(v___x_2837_);
lean_dec(v___x_2828_);
v___x_2860_ = lean_box(0);
v___x_2861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2860_);
lean_ctor_set(v___x_2861_, 1, v_a_2812_);
return v___x_2861_;
}
else
{
lean_object* v___x_2862_; lean_object* v___x_2863_; uint8_t v___x_2864_; 
v___x_2862_ = lean_unsigned_to_nat(3u);
v___x_2863_ = l_Lean_Syntax_getArg(v___x_2837_, v___x_2862_);
lean_dec(v___x_2837_);
lean_inc(v___x_2863_);
v___x_2864_ = l_Lean_Syntax_matchesNull(v___x_2863_, v___x_2817_);
if (v___x_2864_ == 0)
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
lean_dec(v___x_2863_);
lean_dec(v___x_2857_);
lean_dec(v___x_2828_);
v___x_2865_ = lean_box(0);
v___x_2866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2865_);
lean_ctor_set(v___x_2866_, 1, v_a_2812_);
return v___x_2866_;
}
else
{
lean_object* v___x_2867_; uint8_t v___x_2868_; 
v___x_2867_ = l_Lean_Syntax_getArg(v___x_2828_, v___x_2817_);
v___x_2868_ = l_Lean_Syntax_matchesNull(v___x_2867_, v___x_2822_);
if (v___x_2868_ == 0)
{
lean_object* v___x_2869_; lean_object* v___x_2870_; 
lean_dec(v___x_2863_);
lean_dec(v___x_2857_);
lean_dec(v___x_2828_);
v___x_2869_ = lean_box(0);
v___x_2870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2869_);
lean_ctor_set(v___x_2870_, 1, v_a_2812_);
return v___x_2870_;
}
else
{
lean_object* v___x_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2871_ = l_Lean_Syntax_getArg(v___x_2863_, v___x_2822_);
lean_dec(v___x_2863_);
v___x_2872_ = l_Lean_Syntax_getArg(v___x_2828_, v___x_2862_);
lean_dec(v___x_2828_);
v___x_2873_ = 0;
v___x_2874_ = l_Lean_SourceInfo_fromRef(v_a_2811_, v___x_2873_);
v___x_2875_ = ((lean_object*)(l_term___xd7_x27____1___closed__1));
v___x_2876_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__1));
v___x_2877_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_2874_, 7);
v___x_2878_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2874_);
lean_ctor_set(v___x_2878_, 1, v___x_2877_);
v___x_2879_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2880_ = ((lean_object*)(l_unexpandExists___closed__3));
v___x_2881_ = l_Lean_Syntax_node1(v___x_2874_, v___x_2880_, v___x_2857_);
v___x_2882_ = l_Lean_Syntax_node1(v___x_2874_, v___x_2879_, v___x_2881_);
v___x_2883_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_2884_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2874_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
v___x_2885_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_2886_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2874_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = l_Lean_Syntax_node5(v___x_2874_, v___x_2876_, v___x_2878_, v___x_2882_, v___x_2884_, v___x_2871_, v___x_2886_);
v___x_2888_ = ((lean_object*)(l_unexpandPSigma___closed__0));
v___x_2889_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2874_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
v___x_2890_ = l_Lean_Syntax_node3(v___x_2874_, v___x_2875_, v___x_2887_, v___x_2889_, v___x_2872_);
v___x_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
lean_ctor_set(v___x_2891_, 1, v_a_2812_);
return v___x_2891_;
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
LEAN_EXPORT lean_object* l_unexpandPSigma___boxed(lean_object* v_x_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_){
_start:
{
lean_object* v_res_2895_; 
v_res_2895_ = l_unexpandPSigma(v_x_2892_, v_a_2893_, v_a_2894_);
lean_dec(v_a_2893_);
return v_res_2895_;
}
}
LEAN_EXPORT lean_object* l_unexpandSubtype(lean_object* v_x_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_){
_start:
{
lean_object* v___x_2905_; uint8_t v___x_2906_; 
v___x_2905_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_2902_);
v___x_2906_ = l_Lean_Syntax_isOfKind(v_x_2902_, v___x_2905_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
lean_dec(v_x_2902_);
v___x_2907_ = lean_box(0);
v___x_2908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
lean_ctor_set(v___x_2908_, 1, v_a_2904_);
return v___x_2908_;
}
else
{
lean_object* v___x_2909_; lean_object* v___x_2910_; uint8_t v___x_2911_; 
v___x_2909_ = lean_unsigned_to_nat(1u);
v___x_2910_ = l_Lean_Syntax_getArg(v_x_2902_, v___x_2909_);
lean_dec(v_x_2902_);
lean_inc(v___x_2910_);
v___x_2911_ = l_Lean_Syntax_matchesNull(v___x_2910_, v___x_2909_);
if (v___x_2911_ == 0)
{
lean_object* v___x_2912_; lean_object* v___x_2913_; 
lean_dec(v___x_2910_);
v___x_2912_ = lean_box(0);
v___x_2913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
lean_ctor_set(v___x_2913_, 1, v_a_2904_);
return v___x_2913_;
}
else
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; uint8_t v___x_2917_; 
v___x_2914_ = lean_unsigned_to_nat(0u);
v___x_2915_ = l_Lean_Syntax_getArg(v___x_2910_, v___x_2914_);
lean_dec(v___x_2910_);
v___x_2916_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__7));
lean_inc(v___x_2915_);
v___x_2917_ = l_Lean_Syntax_isOfKind(v___x_2915_, v___x_2916_);
if (v___x_2917_ == 0)
{
lean_object* v___x_2918_; lean_object* v___x_2919_; 
lean_dec(v___x_2915_);
v___x_2918_ = lean_box(0);
v___x_2919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2918_);
lean_ctor_set(v___x_2919_, 1, v_a_2904_);
return v___x_2919_;
}
else
{
lean_object* v___x_2920_; lean_object* v___x_2921_; uint8_t v___x_2922_; 
v___x_2920_ = l_Lean_Syntax_getArg(v___x_2915_, v___x_2909_);
lean_dec(v___x_2915_);
v___x_2921_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__9));
lean_inc(v___x_2920_);
v___x_2922_ = l_Lean_Syntax_isOfKind(v___x_2920_, v___x_2921_);
if (v___x_2922_ == 0)
{
lean_object* v___x_2923_; lean_object* v___x_2924_; 
lean_dec(v___x_2920_);
v___x_2923_ = lean_box(0);
v___x_2924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2923_);
lean_ctor_set(v___x_2924_, 1, v_a_2904_);
return v___x_2924_;
}
else
{
lean_object* v___x_2925_; uint8_t v___x_2926_; 
v___x_2925_ = l_Lean_Syntax_getArg(v___x_2920_, v___x_2914_);
lean_inc(v___x_2925_);
v___x_2926_ = l_Lean_Syntax_matchesNull(v___x_2925_, v___x_2909_);
if (v___x_2926_ == 0)
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
lean_dec(v___x_2925_);
lean_dec(v___x_2920_);
v___x_2927_ = lean_box(0);
v___x_2928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
lean_ctor_set(v___x_2928_, 1, v_a_2904_);
return v___x_2928_;
}
else
{
lean_object* v___x_2929_; lean_object* v___x_2930_; uint8_t v___x_2931_; 
v___x_2929_ = l_Lean_Syntax_getArg(v___x_2925_, v___x_2914_);
lean_dec(v___x_2925_);
v___x_2930_ = ((lean_object*)(l_unexpandExists___closed__1));
lean_inc(v___x_2929_);
v___x_2931_ = l_Lean_Syntax_isOfKind(v___x_2929_, v___x_2930_);
if (v___x_2931_ == 0)
{
if (v___x_2931_ == 0)
{
lean_object* v___x_2952_; uint8_t v___x_2953_; 
v___x_2952_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14));
lean_inc(v___x_2929_);
v___x_2953_ = l_Lean_Syntax_isOfKind(v___x_2929_, v___x_2952_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
lean_dec(v___x_2929_);
lean_dec(v___x_2920_);
v___x_2954_ = lean_box(0);
v___x_2955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2954_);
lean_ctor_set(v___x_2955_, 1, v_a_2904_);
return v___x_2955_;
}
else
{
goto v___jp_2932_;
}
}
else
{
goto v___jp_2932_;
}
}
else
{
lean_object* v___x_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; 
v___x_2956_ = l_Lean_Syntax_getArg(v___x_2929_, v___x_2914_);
v___x_2957_ = ((lean_object*)(l_unexpandUnit___redArg___closed__5));
lean_inc(v___x_2956_);
v___x_2958_ = l_Lean_Syntax_isOfKind(v___x_2956_, v___x_2957_);
if (v___x_2958_ == 0)
{
lean_object* v___x_2959_; lean_object* v___x_2960_; 
lean_dec(v___x_2956_);
lean_dec(v___x_2929_);
lean_dec(v___x_2920_);
v___x_2959_ = lean_box(0);
v___x_2960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2960_, 0, v___x_2959_);
lean_ctor_set(v___x_2960_, 1, v_a_2904_);
return v___x_2960_;
}
else
{
lean_object* v___x_2961_; lean_object* v___x_2962_; uint8_t v___x_2963_; 
v___x_2961_ = l_Lean_Syntax_getArg(v___x_2956_, v___x_2909_);
lean_dec(v___x_2956_);
v___x_2962_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
lean_inc(v___x_2961_);
v___x_2963_ = l_Lean_Syntax_isOfKind(v___x_2961_, v___x_2962_);
if (v___x_2963_ == 0)
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
lean_dec(v___x_2961_);
lean_dec(v___x_2929_);
lean_dec(v___x_2920_);
v___x_2964_ = lean_box(0);
v___x_2965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
lean_ctor_set(v___x_2965_, 1, v_a_2904_);
return v___x_2965_;
}
else
{
lean_object* v___x_2966_; lean_object* v___x_2967_; uint8_t v___x_2968_; 
v___x_2966_ = l_Lean_Syntax_getArg(v___x_2961_, v___x_2914_);
lean_dec(v___x_2961_);
v___x_2967_ = lean_obj_once(&l_unexpandUnit___redArg___closed__10, &l_unexpandUnit___redArg___closed__10_once, _init_l_unexpandUnit___redArg___closed__10);
v___x_2968_ = l_Lean_Syntax_matchesIdent(v___x_2966_, v___x_2967_);
lean_dec(v___x_2966_);
if (v___x_2968_ == 0)
{
lean_object* v___x_2969_; lean_object* v___x_2970_; 
lean_dec(v___x_2929_);
lean_dec(v___x_2920_);
v___x_2969_ = lean_box(0);
v___x_2970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
lean_ctor_set(v___x_2970_, 1, v_a_2904_);
return v___x_2970_;
}
else
{
lean_object* v___x_2971_; lean_object* v___x_2972_; uint8_t v___x_2973_; 
v___x_2971_ = l_Lean_Syntax_getArg(v___x_2929_, v___x_2909_);
v___x_2972_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__14));
lean_inc(v___x_2971_);
v___x_2973_ = l_Lean_Syntax_isOfKind(v___x_2971_, v___x_2972_);
if (v___x_2973_ == 0)
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
lean_dec(v___x_2971_);
lean_dec(v___x_2929_);
lean_dec(v___x_2920_);
v___x_2974_ = lean_box(0);
v___x_2975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
lean_ctor_set(v___x_2975_, 1, v_a_2904_);
return v___x_2975_;
}
else
{
lean_object* v___x_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; 
v___x_2976_ = lean_unsigned_to_nat(3u);
v___x_2977_ = l_Lean_Syntax_getArg(v___x_2929_, v___x_2976_);
lean_dec(v___x_2929_);
lean_inc(v___x_2977_);
v___x_2978_ = l_Lean_Syntax_matchesNull(v___x_2977_, v___x_2909_);
if (v___x_2978_ == 0)
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
lean_dec(v___x_2977_);
lean_dec(v___x_2971_);
lean_dec(v___x_2920_);
v___x_2979_ = lean_box(0);
v___x_2980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
lean_ctor_set(v___x_2980_, 1, v_a_2904_);
return v___x_2980_;
}
else
{
lean_object* v___x_2981_; uint8_t v___x_2982_; 
v___x_2981_ = l_Lean_Syntax_getArg(v___x_2920_, v___x_2909_);
v___x_2982_ = l_Lean_Syntax_matchesNull(v___x_2981_, v___x_2914_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_dec(v___x_2977_);
lean_dec(v___x_2971_);
lean_dec(v___x_2920_);
v___x_2983_ = lean_box(0);
v___x_2984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2983_);
lean_ctor_set(v___x_2984_, 1, v_a_2904_);
return v___x_2984_;
}
else
{
lean_object* v___x_2985_; lean_object* v___x_2986_; uint8_t v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_2985_ = l_Lean_Syntax_getArg(v___x_2977_, v___x_2914_);
lean_dec(v___x_2977_);
v___x_2986_ = l_Lean_Syntax_getArg(v___x_2920_, v___x_2976_);
lean_dec(v___x_2920_);
v___x_2987_ = 0;
v___x_2988_ = l_Lean_SourceInfo_fromRef(v_a_2903_, v___x_2987_);
v___x_2989_ = ((lean_object*)(l_unexpandSubtype___closed__1));
v___x_2990_ = ((lean_object*)(l_unexpandSubtype___closed__2));
lean_inc_n(v___x_2988_, 5);
v___x_2991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2988_);
lean_ctor_set(v___x_2991_, 1, v___x_2990_);
v___x_2992_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2993_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_2994_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2988_);
lean_ctor_set(v___x_2994_, 1, v___x_2993_);
v___x_2995_ = l_Lean_Syntax_node2(v___x_2988_, v___x_2992_, v___x_2994_, v___x_2985_);
v___x_2996_ = ((lean_object*)(l_unexpandSubtype___closed__3));
v___x_2997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2988_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = ((lean_object*)(l_unexpandSubtype___closed__4));
v___x_2999_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2988_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
v___x_3000_ = l_Lean_Syntax_node6(v___x_2988_, v___x_2989_, v___x_2991_, v___x_2971_, v___x_2995_, v___x_2997_, v___x_2986_, v___x_2999_);
v___x_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3000_);
lean_ctor_set(v___x_3001_, 1, v_a_2904_);
return v___x_3001_;
}
}
}
}
}
}
}
v___jp_2932_:
{
lean_object* v___x_2933_; uint8_t v___x_2934_; 
v___x_2933_ = l_Lean_Syntax_getArg(v___x_2920_, v___x_2909_);
v___x_2934_ = l_Lean_Syntax_matchesNull(v___x_2933_, v___x_2914_);
if (v___x_2934_ == 0)
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
lean_dec(v___x_2929_);
lean_dec(v___x_2920_);
v___x_2935_ = lean_box(0);
v___x_2936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2935_);
lean_ctor_set(v___x_2936_, 1, v_a_2904_);
return v___x_2936_;
}
else
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2937_ = lean_unsigned_to_nat(3u);
v___x_2938_ = l_Lean_Syntax_getArg(v___x_2920_, v___x_2937_);
lean_dec(v___x_2920_);
v___x_2939_ = l_Lean_SourceInfo_fromRef(v_a_2903_, v___x_2931_);
v___x_2940_ = ((lean_object*)(l_unexpandSubtype___closed__1));
v___x_2941_ = ((lean_object*)(l_unexpandSubtype___closed__2));
lean_inc_n(v___x_2939_, 4);
v___x_2942_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2939_);
lean_ctor_set(v___x_2942_, 1, v___x_2941_);
v___x_2943_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_2944_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_2945_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2939_);
lean_ctor_set(v___x_2945_, 1, v___x_2943_);
lean_ctor_set(v___x_2945_, 2, v___x_2944_);
v___x_2946_ = ((lean_object*)(l_unexpandSubtype___closed__3));
v___x_2947_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2939_);
lean_ctor_set(v___x_2947_, 1, v___x_2946_);
v___x_2948_ = ((lean_object*)(l_unexpandSubtype___closed__4));
v___x_2949_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2939_);
lean_ctor_set(v___x_2949_, 1, v___x_2948_);
v___x_2950_ = l_Lean_Syntax_node6(v___x_2939_, v___x_2940_, v___x_2942_, v___x_2929_, v___x_2945_, v___x_2947_, v___x_2938_, v___x_2949_);
v___x_2951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
lean_ctor_set(v___x_2951_, 1, v_a_2904_);
return v___x_2951_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandSubtype___boxed(lean_object* v_x_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l_unexpandSubtype(v_x_3002_, v_a_3003_, v_a_3004_);
lean_dec(v_a_3003_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l_unexpandTSyntax(lean_object* v_x_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_){
_start:
{
lean_object* v___x_3009_; uint8_t v___x_3010_; 
v___x_3009_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3006_);
v___x_3010_ = l_Lean_Syntax_isOfKind(v_x_3006_, v___x_3009_);
if (v___x_3010_ == 0)
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
lean_dec(v_x_3006_);
v___x_3011_ = lean_box(0);
v___x_3012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3011_);
lean_ctor_set(v___x_3012_, 1, v_a_3008_);
return v___x_3012_;
}
else
{
lean_object* v___x_3013_; lean_object* v___x_3014_; uint8_t v___x_3015_; 
v___x_3013_ = lean_unsigned_to_nat(1u);
v___x_3014_ = l_Lean_Syntax_getArg(v_x_3006_, v___x_3013_);
lean_inc(v___x_3014_);
v___x_3015_ = l_Lean_Syntax_matchesNull(v___x_3014_, v___x_3013_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; lean_object* v___x_3017_; 
lean_dec(v___x_3014_);
lean_dec(v_x_3006_);
v___x_3016_ = lean_box(0);
v___x_3017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
lean_ctor_set(v___x_3017_, 1, v_a_3008_);
return v___x_3017_;
}
else
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; uint8_t v___x_3021_; 
v___x_3018_ = lean_unsigned_to_nat(0u);
v___x_3019_ = l_Lean_Syntax_getArg(v___x_3014_, v___x_3018_);
lean_dec(v___x_3014_);
v___x_3020_ = ((lean_object*)(l_unexpandListNil___redArg___closed__1));
lean_inc(v___x_3019_);
v___x_3021_ = l_Lean_Syntax_isOfKind(v___x_3019_, v___x_3020_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3022_; lean_object* v___x_3023_; 
lean_dec(v___x_3019_);
lean_dec(v_x_3006_);
v___x_3022_ = lean_box(0);
v___x_3023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
lean_ctor_set(v___x_3023_, 1, v_a_3008_);
return v___x_3023_;
}
else
{
lean_object* v___x_3024_; uint8_t v___x_3025_; 
v___x_3024_ = l_Lean_Syntax_getArg(v___x_3019_, v___x_3013_);
lean_dec(v___x_3019_);
lean_inc(v___x_3024_);
v___x_3025_ = l_Lean_Syntax_matchesNull(v___x_3024_, v___x_3013_);
if (v___x_3025_ == 0)
{
lean_object* v___x_3026_; lean_object* v___x_3027_; 
lean_dec(v___x_3024_);
lean_dec(v_x_3006_);
v___x_3026_ = lean_box(0);
v___x_3027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
lean_ctor_set(v___x_3027_, 1, v_a_3008_);
return v___x_3027_;
}
else
{
lean_object* v___x_3028_; lean_object* v___x_3029_; uint8_t v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3028_ = l_Lean_Syntax_getArg(v_x_3006_, v___x_3018_);
lean_dec(v_x_3006_);
v___x_3029_ = l_Lean_Syntax_getArg(v___x_3024_, v___x_3018_);
lean_dec(v___x_3024_);
v___x_3030_ = 0;
v___x_3031_ = l_Lean_SourceInfo_fromRef(v_a_3007_, v___x_3030_);
v___x_3032_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
lean_inc(v___x_3031_);
v___x_3033_ = l_Lean_Syntax_node1(v___x_3031_, v___x_3032_, v___x_3029_);
v___x_3034_ = l_Lean_Syntax_node2(v___x_3031_, v___x_3009_, v___x_3028_, v___x_3033_);
v___x_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
lean_ctor_set(v___x_3035_, 1, v_a_3008_);
return v___x_3035_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandTSyntax___boxed(lean_object* v_x_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = l_unexpandTSyntax(v_x_3036_, v_a_3037_, v_a_3038_);
lean_dec(v_a_3037_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_unexpandTSyntaxArray(lean_object* v_x_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_){
_start:
{
lean_object* v___x_3043_; uint8_t v___x_3044_; 
v___x_3043_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3040_);
v___x_3044_ = l_Lean_Syntax_isOfKind(v_x_3040_, v___x_3043_);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
lean_dec(v_x_3040_);
v___x_3045_ = lean_box(0);
v___x_3046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
lean_ctor_set(v___x_3046_, 1, v_a_3042_);
return v___x_3046_;
}
else
{
lean_object* v___x_3047_; lean_object* v___x_3048_; uint8_t v___x_3049_; 
v___x_3047_ = lean_unsigned_to_nat(1u);
v___x_3048_ = l_Lean_Syntax_getArg(v_x_3040_, v___x_3047_);
lean_inc(v___x_3048_);
v___x_3049_ = l_Lean_Syntax_matchesNull(v___x_3048_, v___x_3047_);
if (v___x_3049_ == 0)
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
lean_dec(v___x_3048_);
lean_dec(v_x_3040_);
v___x_3050_ = lean_box(0);
v___x_3051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3050_);
lean_ctor_set(v___x_3051_, 1, v_a_3042_);
return v___x_3051_;
}
else
{
lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; uint8_t v___x_3055_; 
v___x_3052_ = lean_unsigned_to_nat(0u);
v___x_3053_ = l_Lean_Syntax_getArg(v___x_3048_, v___x_3052_);
lean_dec(v___x_3048_);
v___x_3054_ = ((lean_object*)(l_unexpandListNil___redArg___closed__1));
lean_inc(v___x_3053_);
v___x_3055_ = l_Lean_Syntax_isOfKind(v___x_3053_, v___x_3054_);
if (v___x_3055_ == 0)
{
lean_object* v___x_3056_; lean_object* v___x_3057_; 
lean_dec(v___x_3053_);
lean_dec(v_x_3040_);
v___x_3056_ = lean_box(0);
v___x_3057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3056_);
lean_ctor_set(v___x_3057_, 1, v_a_3042_);
return v___x_3057_;
}
else
{
lean_object* v___x_3058_; uint8_t v___x_3059_; 
v___x_3058_ = l_Lean_Syntax_getArg(v___x_3053_, v___x_3047_);
lean_dec(v___x_3053_);
lean_inc(v___x_3058_);
v___x_3059_ = l_Lean_Syntax_matchesNull(v___x_3058_, v___x_3047_);
if (v___x_3059_ == 0)
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
lean_dec(v___x_3058_);
lean_dec(v_x_3040_);
v___x_3060_ = lean_box(0);
v___x_3061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3060_);
lean_ctor_set(v___x_3061_, 1, v_a_3042_);
return v___x_3061_;
}
else
{
lean_object* v___x_3062_; lean_object* v___x_3063_; uint8_t v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3062_ = l_Lean_Syntax_getArg(v_x_3040_, v___x_3052_);
lean_dec(v_x_3040_);
v___x_3063_ = l_Lean_Syntax_getArg(v___x_3058_, v___x_3052_);
lean_dec(v___x_3058_);
v___x_3064_ = 0;
v___x_3065_ = l_Lean_SourceInfo_fromRef(v_a_3041_, v___x_3064_);
v___x_3066_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
lean_inc(v___x_3065_);
v___x_3067_ = l_Lean_Syntax_node1(v___x_3065_, v___x_3066_, v___x_3063_);
v___x_3068_ = l_Lean_Syntax_node2(v___x_3065_, v___x_3043_, v___x_3062_, v___x_3067_);
v___x_3069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3068_);
lean_ctor_set(v___x_3069_, 1, v_a_3042_);
return v___x_3069_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandTSyntaxArray___boxed(lean_object* v_x_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_){
_start:
{
lean_object* v_res_3073_; 
v_res_3073_ = l_unexpandTSyntaxArray(v_x_3070_, v_a_3071_, v_a_3072_);
lean_dec(v_a_3071_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l_unexpandTSepArray(lean_object* v_x_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_){
_start:
{
lean_object* v___x_3077_; uint8_t v___x_3078_; 
v___x_3077_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3074_);
v___x_3078_ = l_Lean_Syntax_isOfKind(v_x_3074_, v___x_3077_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
lean_dec(v_x_3074_);
v___x_3079_ = lean_box(0);
v___x_3080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3079_);
lean_ctor_set(v___x_3080_, 1, v_a_3076_);
return v___x_3080_;
}
else
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; uint8_t v___x_3084_; 
v___x_3081_ = lean_unsigned_to_nat(1u);
v___x_3082_ = l_Lean_Syntax_getArg(v_x_3074_, v___x_3081_);
v___x_3083_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3082_);
v___x_3084_ = l_Lean_Syntax_matchesNull(v___x_3082_, v___x_3083_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
lean_dec(v___x_3082_);
lean_dec(v_x_3074_);
v___x_3085_ = lean_box(0);
v___x_3086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3085_);
lean_ctor_set(v___x_3086_, 1, v_a_3076_);
return v___x_3086_;
}
else
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; uint8_t v___x_3090_; 
v___x_3087_ = lean_unsigned_to_nat(0u);
v___x_3088_ = l_Lean_Syntax_getArg(v___x_3082_, v___x_3087_);
v___x_3089_ = ((lean_object*)(l_unexpandListNil___redArg___closed__1));
lean_inc(v___x_3088_);
v___x_3090_ = l_Lean_Syntax_isOfKind(v___x_3088_, v___x_3089_);
if (v___x_3090_ == 0)
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
lean_dec(v___x_3088_);
lean_dec(v___x_3082_);
lean_dec(v_x_3074_);
v___x_3091_ = lean_box(0);
v___x_3092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
lean_ctor_set(v___x_3092_, 1, v_a_3076_);
return v___x_3092_;
}
else
{
lean_object* v___x_3093_; uint8_t v___x_3094_; 
v___x_3093_ = l_Lean_Syntax_getArg(v___x_3088_, v___x_3081_);
lean_dec(v___x_3088_);
lean_inc(v___x_3093_);
v___x_3094_ = l_Lean_Syntax_matchesNull(v___x_3093_, v___x_3081_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
lean_dec(v___x_3093_);
lean_dec(v___x_3082_);
lean_dec(v_x_3074_);
v___x_3095_ = lean_box(0);
v___x_3096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
lean_ctor_set(v___x_3096_, 1, v_a_3076_);
return v___x_3096_;
}
else
{
lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; uint8_t v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3097_ = l_Lean_Syntax_getArg(v_x_3074_, v___x_3087_);
lean_dec(v_x_3074_);
v___x_3098_ = l_Lean_Syntax_getArg(v___x_3093_, v___x_3087_);
lean_dec(v___x_3093_);
v___x_3099_ = l_Lean_Syntax_getArg(v___x_3082_, v___x_3081_);
lean_dec(v___x_3082_);
v___x_3100_ = 0;
v___x_3101_ = l_Lean_SourceInfo_fromRef(v_a_3075_, v___x_3100_);
v___x_3102_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
lean_inc(v___x_3101_);
v___x_3103_ = l_Lean_Syntax_node2(v___x_3101_, v___x_3102_, v___x_3098_, v___x_3099_);
v___x_3104_ = l_Lean_Syntax_node2(v___x_3101_, v___x_3077_, v___x_3097_, v___x_3103_);
v___x_3105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3104_);
lean_ctor_set(v___x_3105_, 1, v_a_3076_);
return v___x_3105_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandTSepArray___boxed(lean_object* v_x_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = l_unexpandTSepArray(v_x_3106_, v_a_3107_, v_a_3108_);
lean_dec(v_a_3107_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l_unexpandGetElem(lean_object* v_x_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_){
_start:
{
lean_object* v___x_3116_; uint8_t v___x_3117_; 
v___x_3116_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3113_);
v___x_3117_ = l_Lean_Syntax_isOfKind(v_x_3113_, v___x_3116_);
if (v___x_3117_ == 0)
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_dec(v_x_3113_);
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
lean_ctor_set(v___x_3119_, 1, v_a_3115_);
return v___x_3119_;
}
else
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; uint8_t v___x_3123_; 
v___x_3120_ = lean_unsigned_to_nat(1u);
v___x_3121_ = l_Lean_Syntax_getArg(v_x_3113_, v___x_3120_);
lean_dec(v_x_3113_);
v___x_3122_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_3121_);
v___x_3123_ = l_Lean_Syntax_matchesNull(v___x_3121_, v___x_3122_);
if (v___x_3123_ == 0)
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
lean_dec(v___x_3121_);
v___x_3124_ = lean_box(0);
v___x_3125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
lean_ctor_set(v___x_3125_, 1, v_a_3115_);
return v___x_3125_;
}
else
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; uint8_t v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3126_ = lean_unsigned_to_nat(0u);
v___x_3127_ = l_Lean_Syntax_getArg(v___x_3121_, v___x_3126_);
v___x_3128_ = l_Lean_Syntax_getArg(v___x_3121_, v___x_3120_);
lean_dec(v___x_3121_);
v___x_3129_ = 0;
v___x_3130_ = l_Lean_SourceInfo_fromRef(v_a_3114_, v___x_3129_);
v___x_3131_ = ((lean_object*)(l_unexpandGetElem___closed__1));
v___x_3132_ = ((lean_object*)(l_unexpandListNil___redArg___closed__2));
lean_inc_n(v___x_3130_, 2);
v___x_3133_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3130_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3135_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3130_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
v___x_3136_ = l_Lean_Syntax_node4(v___x_3130_, v___x_3131_, v___x_3127_, v___x_3133_, v___x_3128_, v___x_3135_);
v___x_3137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
lean_ctor_set(v___x_3137_, 1, v_a_3115_);
return v___x_3137_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandGetElem___boxed(lean_object* v_x_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l_unexpandGetElem(v_x_3138_, v_a_3139_, v_a_3140_);
lean_dec(v_a_3139_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l_unexpandGetElem_x21(lean_object* v_x_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_){
_start:
{
lean_object* v___x_3149_; uint8_t v___x_3150_; 
v___x_3149_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3146_);
v___x_3150_ = l_Lean_Syntax_isOfKind(v_x_3146_, v___x_3149_);
if (v___x_3150_ == 0)
{
lean_object* v___x_3151_; lean_object* v___x_3152_; 
lean_dec(v_x_3146_);
v___x_3151_ = lean_box(0);
v___x_3152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3152_, 0, v___x_3151_);
lean_ctor_set(v___x_3152_, 1, v_a_3148_);
return v___x_3152_;
}
else
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; uint8_t v___x_3156_; 
v___x_3153_ = lean_unsigned_to_nat(1u);
v___x_3154_ = l_Lean_Syntax_getArg(v_x_3146_, v___x_3153_);
lean_dec(v_x_3146_);
v___x_3155_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3154_);
v___x_3156_ = l_Lean_Syntax_matchesNull(v___x_3154_, v___x_3155_);
if (v___x_3156_ == 0)
{
lean_object* v___x_3157_; lean_object* v___x_3158_; 
lean_dec(v___x_3154_);
v___x_3157_ = lean_box(0);
v___x_3158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
lean_ctor_set(v___x_3158_, 1, v_a_3148_);
return v___x_3158_;
}
else
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; uint8_t v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3159_ = lean_unsigned_to_nat(0u);
v___x_3160_ = l_Lean_Syntax_getArg(v___x_3154_, v___x_3159_);
v___x_3161_ = l_Lean_Syntax_getArg(v___x_3154_, v___x_3153_);
lean_dec(v___x_3154_);
v___x_3162_ = 0;
v___x_3163_ = l_Lean_SourceInfo_fromRef(v_a_3147_, v___x_3162_);
v___x_3164_ = ((lean_object*)(l_unexpandGetElem_x21___closed__1));
v___x_3165_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38));
v___x_3166_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
lean_inc_n(v___x_3163_, 4);
v___x_3167_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3163_);
lean_ctor_set(v___x_3167_, 1, v___x_3165_);
lean_ctor_set(v___x_3167_, 2, v___x_3166_);
v___x_3168_ = ((lean_object*)(l_unexpandListNil___redArg___closed__2));
v___x_3169_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3163_);
lean_ctor_set(v___x_3169_, 1, v___x_3168_);
v___x_3170_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3163_);
lean_ctor_set(v___x_3171_, 1, v___x_3170_);
v___x_3172_ = ((lean_object*)(l_unexpandGetElem_x21___closed__2));
v___x_3173_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3163_);
lean_ctor_set(v___x_3173_, 1, v___x_3172_);
lean_inc_ref(v___x_3167_);
v___x_3174_ = l_Lean_Syntax_node7(v___x_3163_, v___x_3164_, v___x_3160_, v___x_3167_, v___x_3169_, v___x_3161_, v___x_3171_, v___x_3167_, v___x_3173_);
v___x_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v_a_3148_);
return v___x_3175_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandGetElem_x21___boxed(lean_object* v_x_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_){
_start:
{
lean_object* v_res_3179_; 
v_res_3179_ = l_unexpandGetElem_x21(v_x_3176_, v_a_3177_, v_a_3178_);
lean_dec(v_a_3177_);
return v_res_3179_;
}
}
LEAN_EXPORT lean_object* l_unexpandGetElem_x3f(lean_object* v_x_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_){
_start:
{
lean_object* v___x_3187_; uint8_t v___x_3188_; 
v___x_3187_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3184_);
v___x_3188_ = l_Lean_Syntax_isOfKind(v_x_3184_, v___x_3187_);
if (v___x_3188_ == 0)
{
lean_object* v___x_3189_; lean_object* v___x_3190_; 
lean_dec(v_x_3184_);
v___x_3189_ = lean_box(0);
v___x_3190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3189_);
lean_ctor_set(v___x_3190_, 1, v_a_3186_);
return v___x_3190_;
}
else
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; uint8_t v___x_3194_; 
v___x_3191_ = lean_unsigned_to_nat(1u);
v___x_3192_ = l_Lean_Syntax_getArg(v_x_3184_, v___x_3191_);
lean_dec(v_x_3184_);
v___x_3193_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3192_);
v___x_3194_ = l_Lean_Syntax_matchesNull(v___x_3192_, v___x_3193_);
if (v___x_3194_ == 0)
{
lean_object* v___x_3195_; lean_object* v___x_3196_; 
lean_dec(v___x_3192_);
v___x_3195_ = lean_box(0);
v___x_3196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
lean_ctor_set(v___x_3196_, 1, v_a_3186_);
return v___x_3196_;
}
else
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; uint8_t v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3197_ = lean_unsigned_to_nat(0u);
v___x_3198_ = l_Lean_Syntax_getArg(v___x_3192_, v___x_3197_);
v___x_3199_ = l_Lean_Syntax_getArg(v___x_3192_, v___x_3191_);
lean_dec(v___x_3192_);
v___x_3200_ = 0;
v___x_3201_ = l_Lean_SourceInfo_fromRef(v_a_3185_, v___x_3200_);
v___x_3202_ = ((lean_object*)(l_unexpandGetElem_x3f___closed__1));
v___x_3203_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38));
v___x_3204_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
lean_inc_n(v___x_3201_, 4);
v___x_3205_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3201_);
lean_ctor_set(v___x_3205_, 1, v___x_3203_);
lean_ctor_set(v___x_3205_, 2, v___x_3204_);
v___x_3206_ = ((lean_object*)(l_unexpandListNil___redArg___closed__2));
v___x_3207_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3201_);
lean_ctor_set(v___x_3207_, 1, v___x_3206_);
v___x_3208_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3201_);
lean_ctor_set(v___x_3209_, 1, v___x_3208_);
v___x_3210_ = ((lean_object*)(l_unexpandGetElem_x3f___closed__2));
v___x_3211_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3201_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
lean_inc_ref(v___x_3205_);
v___x_3212_ = l_Lean_Syntax_node7(v___x_3201_, v___x_3202_, v___x_3198_, v___x_3205_, v___x_3207_, v___x_3199_, v___x_3209_, v___x_3205_, v___x_3211_);
v___x_3213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3212_);
lean_ctor_set(v___x_3213_, 1, v_a_3186_);
return v___x_3213_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandGetElem_x3f___boxed(lean_object* v_x_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = l_unexpandGetElem_x3f(v_x_3214_, v_a_3215_, v_a_3216_);
lean_dec(v_a_3215_);
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* l_unexpandArrayEmpty___redArg(lean_object* v_a_3218_, lean_object* v_a_3219_){
_start:
{
uint8_t v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3220_ = 0;
v___x_3221_ = l_Lean_SourceInfo_fromRef(v_a_3218_, v___x_3220_);
v___x_3222_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3223_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3221_, 3);
v___x_3224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3221_);
lean_ctor_set(v___x_3224_, 1, v___x_3223_);
v___x_3225_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3226_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_3227_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3221_);
lean_ctor_set(v___x_3227_, 1, v___x_3225_);
lean_ctor_set(v___x_3227_, 2, v___x_3226_);
v___x_3228_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3221_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
v___x_3230_ = l_Lean_Syntax_node3(v___x_3221_, v___x_3222_, v___x_3224_, v___x_3227_, v___x_3229_);
v___x_3231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3230_);
lean_ctor_set(v___x_3231_, 1, v_a_3219_);
return v___x_3231_;
}
}
LEAN_EXPORT lean_object* l_unexpandArrayEmpty___redArg___boxed(lean_object* v_a_3232_, lean_object* v_a_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_unexpandArrayEmpty___redArg(v_a_3232_, v_a_3233_);
lean_dec(v_a_3232_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_unexpandArrayEmpty(lean_object* v_x_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_){
_start:
{
lean_object* v___x_3238_; 
v___x_3238_ = l_unexpandArrayEmpty___redArg(v_a_3236_, v_a_3237_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_unexpandArrayEmpty___boxed(lean_object* v_x_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_unexpandArrayEmpty(v_x_3239_, v_a_3240_, v_a_3241_);
lean_dec(v_a_3240_);
lean_dec(v_x_3239_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray0___redArg(lean_object* v_a_3243_, lean_object* v_a_3244_){
_start:
{
uint8_t v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3245_ = 0;
v___x_3246_ = l_Lean_SourceInfo_fromRef(v_a_3243_, v___x_3245_);
v___x_3247_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3248_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3246_, 3);
v___x_3249_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3246_);
lean_ctor_set(v___x_3249_, 1, v___x_3248_);
v___x_3250_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3251_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_3252_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3246_);
lean_ctor_set(v___x_3252_, 1, v___x_3250_);
lean_ctor_set(v___x_3252_, 2, v___x_3251_);
v___x_3253_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3246_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
v___x_3255_ = l_Lean_Syntax_node3(v___x_3246_, v___x_3247_, v___x_3249_, v___x_3252_, v___x_3254_);
v___x_3256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
lean_ctor_set(v___x_3256_, 1, v_a_3244_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray0___redArg___boxed(lean_object* v_a_3257_, lean_object* v_a_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = l_unexpandMkArray0___redArg(v_a_3257_, v_a_3258_);
lean_dec(v_a_3257_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray0(lean_object* v_x_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_){
_start:
{
lean_object* v___x_3263_; 
v___x_3263_ = l_unexpandMkArray0___redArg(v_a_3261_, v_a_3262_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray0___boxed(lean_object* v_x_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_){
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l_unexpandMkArray0(v_x_3264_, v_a_3265_, v_a_3266_);
lean_dec(v_a_3265_);
lean_dec(v_x_3264_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray1(lean_object* v_x_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_){
_start:
{
lean_object* v___x_3271_; uint8_t v___x_3272_; 
v___x_3271_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3268_);
v___x_3272_ = l_Lean_Syntax_isOfKind(v_x_3268_, v___x_3271_);
if (v___x_3272_ == 0)
{
lean_object* v___x_3273_; lean_object* v___x_3274_; 
lean_dec(v_x_3268_);
v___x_3273_ = lean_box(0);
v___x_3274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3273_);
lean_ctor_set(v___x_3274_, 1, v_a_3270_);
return v___x_3274_;
}
else
{
lean_object* v___x_3275_; lean_object* v___x_3276_; uint8_t v___x_3277_; 
v___x_3275_ = lean_unsigned_to_nat(1u);
v___x_3276_ = l_Lean_Syntax_getArg(v_x_3268_, v___x_3275_);
lean_dec(v_x_3268_);
lean_inc(v___x_3276_);
v___x_3277_ = l_Lean_Syntax_matchesNull(v___x_3276_, v___x_3275_);
if (v___x_3277_ == 0)
{
lean_object* v___x_3278_; lean_object* v___x_3279_; 
lean_dec(v___x_3276_);
v___x_3278_ = lean_box(0);
v___x_3279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
lean_ctor_set(v___x_3279_, 1, v_a_3270_);
return v___x_3279_;
}
else
{
lean_object* v___x_3280_; lean_object* v___x_3281_; uint8_t v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3280_ = lean_unsigned_to_nat(0u);
v___x_3281_ = l_Lean_Syntax_getArg(v___x_3276_, v___x_3280_);
lean_dec(v___x_3276_);
v___x_3282_ = 0;
v___x_3283_ = l_Lean_SourceInfo_fromRef(v_a_3269_, v___x_3282_);
v___x_3284_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3285_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3283_, 3);
v___x_3286_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3283_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3288_ = l_Lean_Syntax_node1(v___x_3283_, v___x_3287_, v___x_3281_);
v___x_3289_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3290_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3283_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3291_ = l_Lean_Syntax_node3(v___x_3283_, v___x_3284_, v___x_3286_, v___x_3288_, v___x_3290_);
v___x_3292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3291_);
lean_ctor_set(v___x_3292_, 1, v_a_3270_);
return v___x_3292_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray1___boxed(lean_object* v_x_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_){
_start:
{
lean_object* v_res_3296_; 
v_res_3296_ = l_unexpandMkArray1(v_x_3293_, v_a_3294_, v_a_3295_);
lean_dec(v_a_3294_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray2(lean_object* v_x_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_){
_start:
{
lean_object* v___x_3300_; uint8_t v___x_3301_; 
v___x_3300_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3297_);
v___x_3301_ = l_Lean_Syntax_isOfKind(v_x_3297_, v___x_3300_);
if (v___x_3301_ == 0)
{
lean_object* v___x_3302_; lean_object* v___x_3303_; 
lean_dec(v_x_3297_);
v___x_3302_ = lean_box(0);
v___x_3303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3302_);
lean_ctor_set(v___x_3303_, 1, v_a_3299_);
return v___x_3303_;
}
else
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; uint8_t v___x_3307_; 
v___x_3304_ = lean_unsigned_to_nat(1u);
v___x_3305_ = l_Lean_Syntax_getArg(v_x_3297_, v___x_3304_);
lean_dec(v_x_3297_);
v___x_3306_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3305_);
v___x_3307_ = l_Lean_Syntax_matchesNull(v___x_3305_, v___x_3306_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; lean_object* v___x_3309_; 
lean_dec(v___x_3305_);
v___x_3308_ = lean_box(0);
v___x_3309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3308_);
lean_ctor_set(v___x_3309_, 1, v_a_3299_);
return v___x_3309_;
}
else
{
lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; uint8_t v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3310_ = lean_unsigned_to_nat(0u);
v___x_3311_ = l_Lean_Syntax_getArg(v___x_3305_, v___x_3310_);
v___x_3312_ = l_Lean_Syntax_getArg(v___x_3305_, v___x_3304_);
lean_dec(v___x_3305_);
v___x_3313_ = 0;
v___x_3314_ = l_Lean_SourceInfo_fromRef(v_a_3298_, v___x_3313_);
v___x_3315_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3316_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3314_, 4);
v___x_3317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3314_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
v___x_3318_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3319_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_3320_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3314_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
v___x_3321_ = l_Lean_Syntax_node3(v___x_3314_, v___x_3318_, v___x_3311_, v___x_3320_, v___x_3312_);
v___x_3322_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3323_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3314_);
lean_ctor_set(v___x_3323_, 1, v___x_3322_);
v___x_3324_ = l_Lean_Syntax_node3(v___x_3314_, v___x_3315_, v___x_3317_, v___x_3321_, v___x_3323_);
v___x_3325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3325_, 0, v___x_3324_);
lean_ctor_set(v___x_3325_, 1, v_a_3299_);
return v___x_3325_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray2___boxed(lean_object* v_x_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_){
_start:
{
lean_object* v_res_3329_; 
v_res_3329_ = l_unexpandMkArray2(v_x_3326_, v_a_3327_, v_a_3328_);
lean_dec(v_a_3327_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray3(lean_object* v_x_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_){
_start:
{
lean_object* v___x_3333_; uint8_t v___x_3334_; 
v___x_3333_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3330_);
v___x_3334_ = l_Lean_Syntax_isOfKind(v_x_3330_, v___x_3333_);
if (v___x_3334_ == 0)
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
lean_dec(v_x_3330_);
v___x_3335_ = lean_box(0);
v___x_3336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
lean_ctor_set(v___x_3336_, 1, v_a_3332_);
return v___x_3336_;
}
else
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; uint8_t v___x_3340_; 
v___x_3337_ = lean_unsigned_to_nat(1u);
v___x_3338_ = l_Lean_Syntax_getArg(v_x_3330_, v___x_3337_);
lean_dec(v_x_3330_);
v___x_3339_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_3338_);
v___x_3340_ = l_Lean_Syntax_matchesNull(v___x_3338_, v___x_3339_);
if (v___x_3340_ == 0)
{
lean_object* v___x_3341_; lean_object* v___x_3342_; 
lean_dec(v___x_3338_);
v___x_3341_ = lean_box(0);
v___x_3342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
lean_ctor_set(v___x_3342_, 1, v_a_3332_);
return v___x_3342_;
}
else
{
lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; uint8_t v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3343_ = lean_unsigned_to_nat(0u);
v___x_3344_ = l_Lean_Syntax_getArg(v___x_3338_, v___x_3343_);
v___x_3345_ = l_Lean_Syntax_getArg(v___x_3338_, v___x_3337_);
v___x_3346_ = lean_unsigned_to_nat(2u);
v___x_3347_ = l_Lean_Syntax_getArg(v___x_3338_, v___x_3346_);
lean_dec(v___x_3338_);
v___x_3348_ = 0;
v___x_3349_ = l_Lean_SourceInfo_fromRef(v_a_3331_, v___x_3348_);
v___x_3350_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3351_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3349_, 4);
v___x_3352_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3349_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
v___x_3353_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3354_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_3355_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3349_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
lean_inc_ref(v___x_3355_);
v___x_3356_ = l_Lean_Syntax_node5(v___x_3349_, v___x_3353_, v___x_3344_, v___x_3355_, v___x_3345_, v___x_3355_, v___x_3347_);
v___x_3357_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3358_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3349_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = l_Lean_Syntax_node3(v___x_3349_, v___x_3350_, v___x_3352_, v___x_3356_, v___x_3358_);
v___x_3360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
lean_ctor_set(v___x_3360_, 1, v_a_3332_);
return v___x_3360_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray3___boxed(lean_object* v_x_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_){
_start:
{
lean_object* v_res_3364_; 
v_res_3364_ = l_unexpandMkArray3(v_x_3361_, v_a_3362_, v_a_3363_);
lean_dec(v_a_3362_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray4(lean_object* v_x_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v___x_3368_; uint8_t v___x_3369_; 
v___x_3368_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3365_);
v___x_3369_ = l_Lean_Syntax_isOfKind(v_x_3365_, v___x_3368_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
lean_dec(v_x_3365_);
v___x_3370_ = lean_box(0);
v___x_3371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3370_);
lean_ctor_set(v___x_3371_, 1, v_a_3367_);
return v___x_3371_;
}
else
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; uint8_t v___x_3375_; 
v___x_3372_ = lean_unsigned_to_nat(1u);
v___x_3373_ = l_Lean_Syntax_getArg(v_x_3365_, v___x_3372_);
lean_dec(v_x_3365_);
v___x_3374_ = lean_unsigned_to_nat(4u);
lean_inc(v___x_3373_);
v___x_3375_ = l_Lean_Syntax_matchesNull(v___x_3373_, v___x_3374_);
if (v___x_3375_ == 0)
{
lean_object* v___x_3376_; lean_object* v___x_3377_; 
lean_dec(v___x_3373_);
v___x_3376_ = lean_box(0);
v___x_3377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3376_);
lean_ctor_set(v___x_3377_, 1, v_a_3367_);
return v___x_3377_;
}
else
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; uint8_t v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3378_ = lean_unsigned_to_nat(0u);
v___x_3379_ = l_Lean_Syntax_getArg(v___x_3373_, v___x_3378_);
v___x_3380_ = l_Lean_Syntax_getArg(v___x_3373_, v___x_3372_);
v___x_3381_ = lean_unsigned_to_nat(2u);
v___x_3382_ = l_Lean_Syntax_getArg(v___x_3373_, v___x_3381_);
v___x_3383_ = lean_unsigned_to_nat(3u);
v___x_3384_ = l_Lean_Syntax_getArg(v___x_3373_, v___x_3383_);
lean_dec(v___x_3373_);
v___x_3385_ = 0;
v___x_3386_ = l_Lean_SourceInfo_fromRef(v_a_3366_, v___x_3385_);
v___x_3387_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3388_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3386_, 4);
v___x_3389_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3386_);
lean_ctor_set(v___x_3389_, 1, v___x_3388_);
v___x_3390_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3391_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_3392_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3386_);
lean_ctor_set(v___x_3392_, 1, v___x_3391_);
lean_inc_ref_n(v___x_3392_, 2);
v___x_3393_ = l_Lean_Syntax_node7(v___x_3386_, v___x_3390_, v___x_3379_, v___x_3392_, v___x_3380_, v___x_3392_, v___x_3382_, v___x_3392_, v___x_3384_);
v___x_3394_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3395_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3386_);
lean_ctor_set(v___x_3395_, 1, v___x_3394_);
v___x_3396_ = l_Lean_Syntax_node3(v___x_3386_, v___x_3387_, v___x_3389_, v___x_3393_, v___x_3395_);
v___x_3397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3397_, 0, v___x_3396_);
lean_ctor_set(v___x_3397_, 1, v_a_3367_);
return v___x_3397_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray4___boxed(lean_object* v_x_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_unexpandMkArray4(v_x_3398_, v_a_3399_, v_a_3400_);
lean_dec(v_a_3399_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray5(lean_object* v_x_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_){
_start:
{
lean_object* v___x_3405_; uint8_t v___x_3406_; 
v___x_3405_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3402_);
v___x_3406_ = l_Lean_Syntax_isOfKind(v_x_3402_, v___x_3405_);
if (v___x_3406_ == 0)
{
lean_object* v___x_3407_; lean_object* v___x_3408_; 
lean_dec(v_x_3402_);
v___x_3407_ = lean_box(0);
v___x_3408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
lean_ctor_set(v___x_3408_, 1, v_a_3404_);
return v___x_3408_;
}
else
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; uint8_t v___x_3412_; 
v___x_3409_ = lean_unsigned_to_nat(1u);
v___x_3410_ = l_Lean_Syntax_getArg(v_x_3402_, v___x_3409_);
lean_dec(v_x_3402_);
v___x_3411_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_3410_);
v___x_3412_ = l_Lean_Syntax_matchesNull(v___x_3410_, v___x_3411_);
if (v___x_3412_ == 0)
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
lean_dec(v___x_3410_);
v___x_3413_ = lean_box(0);
v___x_3414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
lean_ctor_set(v___x_3414_, 1, v_a_3404_);
return v___x_3414_;
}
else
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; uint8_t v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3415_ = lean_unsigned_to_nat(0u);
v___x_3416_ = l_Lean_Syntax_getArg(v___x_3410_, v___x_3415_);
v___x_3417_ = l_Lean_Syntax_getArg(v___x_3410_, v___x_3409_);
v___x_3418_ = lean_unsigned_to_nat(2u);
v___x_3419_ = l_Lean_Syntax_getArg(v___x_3410_, v___x_3418_);
v___x_3420_ = lean_unsigned_to_nat(3u);
v___x_3421_ = l_Lean_Syntax_getArg(v___x_3410_, v___x_3420_);
v___x_3422_ = lean_unsigned_to_nat(4u);
v___x_3423_ = l_Lean_Syntax_getArg(v___x_3410_, v___x_3422_);
lean_dec(v___x_3410_);
v___x_3424_ = 0;
v___x_3425_ = l_Lean_SourceInfo_fromRef(v_a_3403_, v___x_3424_);
v___x_3426_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3427_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3425_, 4);
v___x_3428_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3425_);
lean_ctor_set(v___x_3428_, 1, v___x_3427_);
v___x_3429_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3430_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_3431_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3425_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
v___x_3432_ = lean_unsigned_to_nat(9u);
v___x_3433_ = lean_mk_empty_array_with_capacity(v___x_3432_);
v___x_3434_ = lean_array_push(v___x_3433_, v___x_3416_);
lean_inc_ref_n(v___x_3431_, 3);
v___x_3435_ = lean_array_push(v___x_3434_, v___x_3431_);
v___x_3436_ = lean_array_push(v___x_3435_, v___x_3417_);
v___x_3437_ = lean_array_push(v___x_3436_, v___x_3431_);
v___x_3438_ = lean_array_push(v___x_3437_, v___x_3419_);
v___x_3439_ = lean_array_push(v___x_3438_, v___x_3431_);
v___x_3440_ = lean_array_push(v___x_3439_, v___x_3421_);
v___x_3441_ = lean_array_push(v___x_3440_, v___x_3431_);
v___x_3442_ = lean_array_push(v___x_3441_, v___x_3423_);
v___x_3443_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3425_);
lean_ctor_set(v___x_3443_, 1, v___x_3429_);
lean_ctor_set(v___x_3443_, 2, v___x_3442_);
v___x_3444_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3445_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3425_);
lean_ctor_set(v___x_3445_, 1, v___x_3444_);
v___x_3446_ = l_Lean_Syntax_node3(v___x_3425_, v___x_3426_, v___x_3428_, v___x_3443_, v___x_3445_);
v___x_3447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3446_);
lean_ctor_set(v___x_3447_, 1, v_a_3404_);
return v___x_3447_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray5___boxed(lean_object* v_x_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_){
_start:
{
lean_object* v_res_3451_; 
v_res_3451_ = l_unexpandMkArray5(v_x_3448_, v_a_3449_, v_a_3450_);
lean_dec(v_a_3449_);
return v_res_3451_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray6(lean_object* v_x_3452_, lean_object* v_a_3453_, lean_object* v_a_3454_){
_start:
{
lean_object* v___x_3455_; uint8_t v___x_3456_; 
v___x_3455_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3452_);
v___x_3456_ = l_Lean_Syntax_isOfKind(v_x_3452_, v___x_3455_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; lean_object* v___x_3458_; 
lean_dec(v_x_3452_);
v___x_3457_ = lean_box(0);
v___x_3458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
lean_ctor_set(v___x_3458_, 1, v_a_3454_);
return v___x_3458_;
}
else
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; uint8_t v___x_3462_; 
v___x_3459_ = lean_unsigned_to_nat(1u);
v___x_3460_ = l_Lean_Syntax_getArg(v_x_3452_, v___x_3459_);
lean_dec(v_x_3452_);
v___x_3461_ = lean_unsigned_to_nat(6u);
lean_inc(v___x_3460_);
v___x_3462_ = l_Lean_Syntax_matchesNull(v___x_3460_, v___x_3461_);
if (v___x_3462_ == 0)
{
lean_object* v___x_3463_; lean_object* v___x_3464_; 
lean_dec(v___x_3460_);
v___x_3463_ = lean_box(0);
v___x_3464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3463_);
lean_ctor_set(v___x_3464_, 1, v_a_3454_);
return v___x_3464_;
}
else
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; uint8_t v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3465_ = lean_unsigned_to_nat(0u);
v___x_3466_ = l_Lean_Syntax_getArg(v___x_3460_, v___x_3465_);
v___x_3467_ = l_Lean_Syntax_getArg(v___x_3460_, v___x_3459_);
v___x_3468_ = lean_unsigned_to_nat(2u);
v___x_3469_ = l_Lean_Syntax_getArg(v___x_3460_, v___x_3468_);
v___x_3470_ = lean_unsigned_to_nat(3u);
v___x_3471_ = l_Lean_Syntax_getArg(v___x_3460_, v___x_3470_);
v___x_3472_ = lean_unsigned_to_nat(4u);
v___x_3473_ = l_Lean_Syntax_getArg(v___x_3460_, v___x_3472_);
v___x_3474_ = lean_unsigned_to_nat(5u);
v___x_3475_ = l_Lean_Syntax_getArg(v___x_3460_, v___x_3474_);
lean_dec(v___x_3460_);
v___x_3476_ = 0;
v___x_3477_ = l_Lean_SourceInfo_fromRef(v_a_3453_, v___x_3476_);
v___x_3478_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3479_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3477_, 4);
v___x_3480_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3477_);
lean_ctor_set(v___x_3480_, 1, v___x_3479_);
v___x_3481_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3482_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_3483_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3477_);
lean_ctor_set(v___x_3483_, 1, v___x_3482_);
v___x_3484_ = lean_unsigned_to_nat(11u);
v___x_3485_ = lean_mk_empty_array_with_capacity(v___x_3484_);
v___x_3486_ = lean_array_push(v___x_3485_, v___x_3466_);
lean_inc_ref_n(v___x_3483_, 4);
v___x_3487_ = lean_array_push(v___x_3486_, v___x_3483_);
v___x_3488_ = lean_array_push(v___x_3487_, v___x_3467_);
v___x_3489_ = lean_array_push(v___x_3488_, v___x_3483_);
v___x_3490_ = lean_array_push(v___x_3489_, v___x_3469_);
v___x_3491_ = lean_array_push(v___x_3490_, v___x_3483_);
v___x_3492_ = lean_array_push(v___x_3491_, v___x_3471_);
v___x_3493_ = lean_array_push(v___x_3492_, v___x_3483_);
v___x_3494_ = lean_array_push(v___x_3493_, v___x_3473_);
v___x_3495_ = lean_array_push(v___x_3494_, v___x_3483_);
v___x_3496_ = lean_array_push(v___x_3495_, v___x_3475_);
v___x_3497_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3477_);
lean_ctor_set(v___x_3497_, 1, v___x_3481_);
lean_ctor_set(v___x_3497_, 2, v___x_3496_);
v___x_3498_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3499_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3477_);
lean_ctor_set(v___x_3499_, 1, v___x_3498_);
v___x_3500_ = l_Lean_Syntax_node3(v___x_3477_, v___x_3478_, v___x_3480_, v___x_3497_, v___x_3499_);
v___x_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3500_);
lean_ctor_set(v___x_3501_, 1, v_a_3454_);
return v___x_3501_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray6___boxed(lean_object* v_x_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_unexpandMkArray6(v_x_3502_, v_a_3503_, v_a_3504_);
lean_dec(v_a_3503_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray7(lean_object* v_x_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_){
_start:
{
lean_object* v___x_3509_; uint8_t v___x_3510_; 
v___x_3509_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3506_);
v___x_3510_ = l_Lean_Syntax_isOfKind(v_x_3506_, v___x_3509_);
if (v___x_3510_ == 0)
{
lean_object* v___x_3511_; lean_object* v___x_3512_; 
lean_dec(v_x_3506_);
v___x_3511_ = lean_box(0);
v___x_3512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
lean_ctor_set(v___x_3512_, 1, v_a_3508_);
return v___x_3512_;
}
else
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; uint8_t v___x_3516_; 
v___x_3513_ = lean_unsigned_to_nat(1u);
v___x_3514_ = l_Lean_Syntax_getArg(v_x_3506_, v___x_3513_);
lean_dec(v_x_3506_);
v___x_3515_ = lean_unsigned_to_nat(7u);
lean_inc(v___x_3514_);
v___x_3516_ = l_Lean_Syntax_matchesNull(v___x_3514_, v___x_3515_);
if (v___x_3516_ == 0)
{
lean_object* v___x_3517_; lean_object* v___x_3518_; 
lean_dec(v___x_3514_);
v___x_3517_ = lean_box(0);
v___x_3518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3517_);
lean_ctor_set(v___x_3518_, 1, v_a_3508_);
return v___x_3518_;
}
else
{
lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; uint8_t v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3519_ = lean_unsigned_to_nat(0u);
v___x_3520_ = l_Lean_Syntax_getArg(v___x_3514_, v___x_3519_);
v___x_3521_ = l_Lean_Syntax_getArg(v___x_3514_, v___x_3513_);
v___x_3522_ = lean_unsigned_to_nat(2u);
v___x_3523_ = l_Lean_Syntax_getArg(v___x_3514_, v___x_3522_);
v___x_3524_ = lean_unsigned_to_nat(3u);
v___x_3525_ = l_Lean_Syntax_getArg(v___x_3514_, v___x_3524_);
v___x_3526_ = lean_unsigned_to_nat(4u);
v___x_3527_ = l_Lean_Syntax_getArg(v___x_3514_, v___x_3526_);
v___x_3528_ = lean_unsigned_to_nat(5u);
v___x_3529_ = l_Lean_Syntax_getArg(v___x_3514_, v___x_3528_);
v___x_3530_ = lean_unsigned_to_nat(6u);
v___x_3531_ = l_Lean_Syntax_getArg(v___x_3514_, v___x_3530_);
lean_dec(v___x_3514_);
v___x_3532_ = 0;
v___x_3533_ = l_Lean_SourceInfo_fromRef(v_a_3507_, v___x_3532_);
v___x_3534_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3535_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3533_, 4);
v___x_3536_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3533_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3538_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_3539_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3533_);
lean_ctor_set(v___x_3539_, 1, v___x_3538_);
v___x_3540_ = lean_unsigned_to_nat(13u);
v___x_3541_ = lean_mk_empty_array_with_capacity(v___x_3540_);
v___x_3542_ = lean_array_push(v___x_3541_, v___x_3520_);
lean_inc_ref_n(v___x_3539_, 5);
v___x_3543_ = lean_array_push(v___x_3542_, v___x_3539_);
v___x_3544_ = lean_array_push(v___x_3543_, v___x_3521_);
v___x_3545_ = lean_array_push(v___x_3544_, v___x_3539_);
v___x_3546_ = lean_array_push(v___x_3545_, v___x_3523_);
v___x_3547_ = lean_array_push(v___x_3546_, v___x_3539_);
v___x_3548_ = lean_array_push(v___x_3547_, v___x_3525_);
v___x_3549_ = lean_array_push(v___x_3548_, v___x_3539_);
v___x_3550_ = lean_array_push(v___x_3549_, v___x_3527_);
v___x_3551_ = lean_array_push(v___x_3550_, v___x_3539_);
v___x_3552_ = lean_array_push(v___x_3551_, v___x_3529_);
v___x_3553_ = lean_array_push(v___x_3552_, v___x_3539_);
v___x_3554_ = lean_array_push(v___x_3553_, v___x_3531_);
v___x_3555_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3533_);
lean_ctor_set(v___x_3555_, 1, v___x_3537_);
lean_ctor_set(v___x_3555_, 2, v___x_3554_);
v___x_3556_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3533_);
lean_ctor_set(v___x_3557_, 1, v___x_3556_);
v___x_3558_ = l_Lean_Syntax_node3(v___x_3533_, v___x_3534_, v___x_3536_, v___x_3555_, v___x_3557_);
v___x_3559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3558_);
lean_ctor_set(v___x_3559_, 1, v_a_3508_);
return v___x_3559_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray7___boxed(lean_object* v_x_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_){
_start:
{
lean_object* v_res_3563_; 
v_res_3563_ = l_unexpandMkArray7(v_x_3560_, v_a_3561_, v_a_3562_);
lean_dec(v_a_3561_);
return v_res_3563_;
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray8(lean_object* v_x_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_){
_start:
{
lean_object* v___x_3567_; uint8_t v___x_3568_; 
v___x_3567_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_3564_);
v___x_3568_ = l_Lean_Syntax_isOfKind(v_x_3564_, v___x_3567_);
if (v___x_3568_ == 0)
{
lean_object* v___x_3569_; lean_object* v___x_3570_; 
lean_dec(v_x_3564_);
v___x_3569_ = lean_box(0);
v___x_3570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3569_);
lean_ctor_set(v___x_3570_, 1, v_a_3566_);
return v___x_3570_;
}
else
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; uint8_t v___x_3574_; 
v___x_3571_ = lean_unsigned_to_nat(1u);
v___x_3572_ = l_Lean_Syntax_getArg(v_x_3564_, v___x_3571_);
lean_dec(v_x_3564_);
v___x_3573_ = lean_unsigned_to_nat(8u);
lean_inc(v___x_3572_);
v___x_3574_ = l_Lean_Syntax_matchesNull(v___x_3572_, v___x_3573_);
if (v___x_3574_ == 0)
{
lean_object* v___x_3575_; lean_object* v___x_3576_; 
lean_dec(v___x_3572_);
v___x_3575_ = lean_box(0);
v___x_3576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3575_);
lean_ctor_set(v___x_3576_, 1, v_a_3566_);
return v___x_3576_;
}
else
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; uint8_t v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3577_ = lean_unsigned_to_nat(0u);
v___x_3578_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3577_);
v___x_3579_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3571_);
v___x_3580_ = lean_unsigned_to_nat(2u);
v___x_3581_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3580_);
v___x_3582_ = lean_unsigned_to_nat(3u);
v___x_3583_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3582_);
v___x_3584_ = lean_unsigned_to_nat(4u);
v___x_3585_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3584_);
v___x_3586_ = lean_unsigned_to_nat(5u);
v___x_3587_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3586_);
v___x_3588_ = lean_unsigned_to_nat(6u);
v___x_3589_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3588_);
v___x_3590_ = lean_unsigned_to_nat(7u);
v___x_3591_ = l_Lean_Syntax_getArg(v___x_3572_, v___x_3590_);
lean_dec(v___x_3572_);
v___x_3592_ = 0;
v___x_3593_ = l_Lean_SourceInfo_fromRef(v_a_3565_, v___x_3592_);
v___x_3594_ = ((lean_object*)(l_unexpandListToArray___closed__1));
v___x_3595_ = ((lean_object*)(l_unexpandListToArray___closed__2));
lean_inc_n(v___x_3593_, 4);
v___x_3596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3593_);
lean_ctor_set(v___x_3596_, 1, v___x_3595_);
v___x_3597_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3598_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_3599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3593_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
v___x_3600_ = lean_unsigned_to_nat(15u);
v___x_3601_ = lean_mk_empty_array_with_capacity(v___x_3600_);
v___x_3602_ = lean_array_push(v___x_3601_, v___x_3578_);
lean_inc_ref_n(v___x_3599_, 6);
v___x_3603_ = lean_array_push(v___x_3602_, v___x_3599_);
v___x_3604_ = lean_array_push(v___x_3603_, v___x_3579_);
v___x_3605_ = lean_array_push(v___x_3604_, v___x_3599_);
v___x_3606_ = lean_array_push(v___x_3605_, v___x_3581_);
v___x_3607_ = lean_array_push(v___x_3606_, v___x_3599_);
v___x_3608_ = lean_array_push(v___x_3607_, v___x_3583_);
v___x_3609_ = lean_array_push(v___x_3608_, v___x_3599_);
v___x_3610_ = lean_array_push(v___x_3609_, v___x_3585_);
v___x_3611_ = lean_array_push(v___x_3610_, v___x_3599_);
v___x_3612_ = lean_array_push(v___x_3611_, v___x_3587_);
v___x_3613_ = lean_array_push(v___x_3612_, v___x_3599_);
v___x_3614_ = lean_array_push(v___x_3613_, v___x_3589_);
v___x_3615_ = lean_array_push(v___x_3614_, v___x_3599_);
v___x_3616_ = lean_array_push(v___x_3615_, v___x_3591_);
v___x_3617_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3593_);
lean_ctor_set(v___x_3617_, 1, v___x_3597_);
lean_ctor_set(v___x_3617_, 2, v___x_3616_);
v___x_3618_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_3619_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3593_);
lean_ctor_set(v___x_3619_, 1, v___x_3618_);
v___x_3620_ = l_Lean_Syntax_node3(v___x_3593_, v___x_3594_, v___x_3596_, v___x_3617_, v___x_3619_);
v___x_3621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3620_);
lean_ctor_set(v___x_3621_, 1, v_a_3566_);
return v___x_3621_;
}
}
}
}
LEAN_EXPORT lean_object* l_unexpandMkArray8___boxed(lean_object* v_x_3622_, lean_object* v_a_3623_, lean_object* v_a_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_unexpandMkArray8(v_x_3622_, v_a_3623_, v_a_3624_);
lean_dec(v_a_3623_);
return v_res_3625_;
}
}
static lean_object* _init_l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4(void){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3673_ = ((lean_object*)(l_tacticFunext_______00__closed__2));
v___x_3674_ = l_String_toRawSubstring_x27(v___x_3673_);
return v___x_3674_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1(lean_object* v_x_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_){
_start:
{
lean_object* v___x_3706_; uint8_t v___x_3707_; 
v___x_3706_ = ((lean_object*)(l_tacticFunext_______00__closed__1));
lean_inc(v_x_3703_);
v___x_3707_ = l_Lean_Syntax_isOfKind(v_x_3703_, v___x_3706_);
if (v___x_3707_ == 0)
{
lean_object* v___x_3708_; lean_object* v___x_3709_; 
lean_dec(v_x_3703_);
v___x_3708_ = lean_box(1);
v___x_3709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3708_);
lean_ctor_set(v___x_3709_, 1, v_a_3705_);
return v___x_3709_;
}
else
{
lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; uint8_t v___x_3713_; 
v___x_3710_ = lean_unsigned_to_nat(0u);
v___x_3711_ = lean_unsigned_to_nat(1u);
v___x_3712_ = l_Lean_Syntax_getArg(v_x_3703_, v___x_3711_);
lean_dec(v_x_3703_);
lean_inc(v___x_3712_);
v___x_3713_ = l_Lean_Syntax_matchesNull(v___x_3712_, v___x_3710_);
if (v___x_3713_ == 0)
{
uint8_t v___x_3714_; 
lean_inc(v___x_3712_);
v___x_3714_ = l_Lean_Syntax_matchesNull(v___x_3712_, v___x_3711_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3715_; uint8_t v___x_3716_; 
v___x_3715_ = l_Lean_Syntax_getNumArgs(v___x_3712_);
v___x_3716_ = lean_nat_dec_le(v___x_3711_, v___x_3715_);
if (v___x_3716_ == 0)
{
lean_object* v___x_3717_; lean_object* v___x_3718_; 
lean_dec(v___x_3715_);
lean_dec(v___x_3712_);
v___x_3717_ = lean_box(1);
v___x_3718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3717_);
lean_ctor_set(v___x_3718_, 1, v_a_3705_);
return v___x_3718_;
}
else
{
lean_object* v_quotContext_3719_; lean_object* v_currMacroScope_3720_; lean_object* v_ref_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v_xs_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v_quotContext_3719_ = lean_ctor_get(v_a_3704_, 1);
v_currMacroScope_3720_ = lean_ctor_get(v_a_3704_, 2);
v_ref_3721_ = lean_ctor_get(v_a_3704_, 5);
v___x_3722_ = l_Lean_Syntax_getArg(v___x_3712_, v___x_3710_);
v___x_3723_ = l_Lean_Syntax_getArgs(v___x_3712_);
lean_dec(v___x_3712_);
v___x_3724_ = l_Array_extract___redArg(v___x_3723_, v___x_3711_, v___x_3715_);
lean_dec_ref(v___x_3723_);
v___x_3725_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3726_ = lean_box(2);
v___x_3727_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3726_);
lean_ctor_set(v___x_3727_, 1, v___x_3725_);
lean_ctor_set(v___x_3727_, 2, v___x_3724_);
v___x_3728_ = l_Lean_Syntax_getArgs(v___x_3727_);
lean_dec_ref_known(v___x_3727_, 3);
v_xs_3729_ = l_unsafeCast___redArg(v___x_3728_);
lean_dec_ref(v___x_3728_);
v___x_3730_ = l_Lean_SourceInfo_fromRef(v_ref_3721_, v___x_3714_);
v___x_3731_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1));
v___x_3732_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__2));
v___x_3733_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3));
lean_inc_n(v___x_3730_, 11);
v___x_3734_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3730_);
lean_ctor_set(v___x_3734_, 1, v___x_3732_);
v___x_3735_ = ((lean_object*)(l_tacticFunext_______00__closed__2));
v___x_3736_ = lean_obj_once(&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4, &l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4_once, _init_l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4);
v___x_3737_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__5));
lean_inc(v_currMacroScope_3720_);
lean_inc(v_quotContext_3719_);
v___x_3738_ = l_Lean_addMacroScope(v_quotContext_3719_, v___x_3737_, v_currMacroScope_3720_);
v___x_3739_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__7));
v___x_3740_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3730_);
lean_ctor_set(v___x_3740_, 1, v___x_3736_);
lean_ctor_set(v___x_3740_, 2, v___x_3738_);
lean_ctor_set(v___x_3740_, 3, v___x_3739_);
v___x_3741_ = l_Lean_Syntax_node2(v___x_3730_, v___x_3733_, v___x_3734_, v___x_3740_);
v___x_3742_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__8));
v___x_3743_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3730_);
lean_ctor_set(v___x_3743_, 1, v___x_3742_);
v___x_3744_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__9));
v___x_3745_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10));
v___x_3746_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3730_);
lean_ctor_set(v___x_3746_, 1, v___x_3744_);
v___x_3747_ = l_Lean_Syntax_node1(v___x_3730_, v___x_3725_, v___x_3722_);
v___x_3748_ = l_Lean_Syntax_node2(v___x_3730_, v___x_3745_, v___x_3746_, v___x_3747_);
v___x_3749_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3730_);
lean_ctor_set(v___x_3749_, 1, v___x_3735_);
v___x_3750_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_3751_ = l_unsafeCast___redArg(v_xs_3729_);
lean_dec(v_xs_3729_);
v___x_3752_ = l_Array_append___redArg(v___x_3750_, v___x_3751_);
lean_dec(v___x_3751_);
v___x_3753_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3730_);
lean_ctor_set(v___x_3753_, 1, v___x_3725_);
lean_ctor_set(v___x_3753_, 2, v___x_3752_);
v___x_3754_ = l_Lean_Syntax_node2(v___x_3730_, v___x_3706_, v___x_3749_, v___x_3753_);
lean_inc_ref(v___x_3743_);
v___x_3755_ = l_Lean_Syntax_node5(v___x_3730_, v___x_3725_, v___x_3741_, v___x_3743_, v___x_3748_, v___x_3743_, v___x_3754_);
v___x_3756_ = l_Lean_Syntax_node1(v___x_3730_, v___x_3731_, v___x_3755_);
v___x_3757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3756_);
lean_ctor_set(v___x_3757_, 1, v_a_3705_);
return v___x_3757_;
}
}
else
{
lean_object* v_quotContext_3758_; lean_object* v_currMacroScope_3759_; lean_object* v_ref_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; 
v_quotContext_3758_ = lean_ctor_get(v_a_3704_, 1);
v_currMacroScope_3759_ = lean_ctor_get(v_a_3704_, 2);
v_ref_3760_ = lean_ctor_get(v_a_3704_, 5);
v___x_3761_ = l_Lean_Syntax_getArg(v___x_3712_, v___x_3710_);
lean_dec(v___x_3712_);
v___x_3762_ = l_Lean_SourceInfo_fromRef(v_ref_3760_, v___x_3713_);
v___x_3763_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__1));
v___x_3764_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3765_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__2));
v___x_3766_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3));
lean_inc_n(v___x_3762_, 8);
v___x_3767_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3762_);
lean_ctor_set(v___x_3767_, 1, v___x_3765_);
v___x_3768_ = lean_obj_once(&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4, &l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4_once, _init_l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4);
v___x_3769_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__5));
lean_inc(v_currMacroScope_3759_);
lean_inc(v_quotContext_3758_);
v___x_3770_ = l_Lean_addMacroScope(v_quotContext_3758_, v___x_3769_, v_currMacroScope_3759_);
v___x_3771_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__7));
v___x_3772_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3762_);
lean_ctor_set(v___x_3772_, 1, v___x_3768_);
lean_ctor_set(v___x_3772_, 2, v___x_3770_);
lean_ctor_set(v___x_3772_, 3, v___x_3771_);
v___x_3773_ = l_Lean_Syntax_node2(v___x_3762_, v___x_3766_, v___x_3767_, v___x_3772_);
v___x_3774_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__8));
v___x_3775_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3762_);
lean_ctor_set(v___x_3775_, 1, v___x_3774_);
v___x_3776_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__9));
v___x_3777_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10));
v___x_3778_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3762_);
lean_ctor_set(v___x_3778_, 1, v___x_3776_);
v___x_3779_ = l_Lean_Syntax_node1(v___x_3762_, v___x_3764_, v___x_3761_);
v___x_3780_ = l_Lean_Syntax_node2(v___x_3762_, v___x_3777_, v___x_3778_, v___x_3779_);
v___x_3781_ = l_Lean_Syntax_node3(v___x_3762_, v___x_3764_, v___x_3773_, v___x_3775_, v___x_3780_);
v___x_3782_ = l_Lean_Syntax_node1(v___x_3762_, v___x_3763_, v___x_3781_);
v___x_3783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3782_);
lean_ctor_set(v___x_3783_, 1, v_a_3705_);
return v___x_3783_;
}
}
else
{
lean_object* v_quotContext_3784_; lean_object* v_currMacroScope_3785_; lean_object* v_ref_3786_; uint8_t v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; 
lean_dec(v___x_3712_);
v_quotContext_3784_ = lean_ctor_get(v_a_3704_, 1);
v_currMacroScope_3785_ = lean_ctor_get(v_a_3704_, 2);
v_ref_3786_ = lean_ctor_get(v_a_3704_, 5);
v___x_3787_ = 0;
v___x_3788_ = l_Lean_SourceInfo_fromRef(v_ref_3786_, v___x_3787_);
v___x_3789_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__12));
v___x_3790_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__13));
lean_inc_n(v___x_3788_, 17);
v___x_3791_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3788_);
lean_ctor_set(v___x_3791_, 1, v___x_3790_);
v___x_3792_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6));
v___x_3793_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8));
v___x_3794_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_3795_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15));
v___x_3796_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
v___x_3797_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3788_);
lean_ctor_set(v___x_3797_, 1, v___x_3796_);
v___x_3798_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__2));
v___x_3799_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__3));
v___x_3800_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3788_);
lean_ctor_set(v___x_3800_, 1, v___x_3798_);
v___x_3801_ = lean_obj_once(&l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4, &l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4_once, _init_l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__4);
v___x_3802_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__5));
lean_inc(v_currMacroScope_3785_);
lean_inc(v_quotContext_3784_);
v___x_3803_ = l_Lean_addMacroScope(v_quotContext_3784_, v___x_3802_, v_currMacroScope_3785_);
v___x_3804_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__7));
v___x_3805_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3788_);
lean_ctor_set(v___x_3805_, 1, v___x_3801_);
lean_ctor_set(v___x_3805_, 2, v___x_3803_);
lean_ctor_set(v___x_3805_, 3, v___x_3804_);
v___x_3806_ = l_Lean_Syntax_node2(v___x_3788_, v___x_3799_, v___x_3800_, v___x_3805_);
v___x_3807_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__8));
v___x_3808_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3788_);
lean_ctor_set(v___x_3808_, 1, v___x_3807_);
v___x_3809_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__9));
v___x_3810_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__10));
v___x_3811_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3788_);
lean_ctor_set(v___x_3811_, 1, v___x_3809_);
v___x_3812_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_3813_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3788_);
lean_ctor_set(v___x_3813_, 1, v___x_3794_);
lean_ctor_set(v___x_3813_, 2, v___x_3812_);
v___x_3814_ = l_Lean_Syntax_node2(v___x_3788_, v___x_3810_, v___x_3811_, v___x_3813_);
v___x_3815_ = l_Lean_Syntax_node3(v___x_3788_, v___x_3794_, v___x_3806_, v___x_3808_, v___x_3814_);
v___x_3816_ = l_Lean_Syntax_node1(v___x_3788_, v___x_3793_, v___x_3815_);
v___x_3817_ = l_Lean_Syntax_node1(v___x_3788_, v___x_3792_, v___x_3816_);
v___x_3818_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_3819_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3788_);
lean_ctor_set(v___x_3819_, 1, v___x_3818_);
v___x_3820_ = l_Lean_Syntax_node3(v___x_3788_, v___x_3795_, v___x_3797_, v___x_3817_, v___x_3819_);
v___x_3821_ = l_Lean_Syntax_node1(v___x_3788_, v___x_3794_, v___x_3820_);
v___x_3822_ = l_Lean_Syntax_node1(v___x_3788_, v___x_3793_, v___x_3821_);
v___x_3823_ = l_Lean_Syntax_node1(v___x_3788_, v___x_3792_, v___x_3822_);
v___x_3824_ = l_Lean_Syntax_node2(v___x_3788_, v___x_3789_, v___x_3791_, v___x_3823_);
v___x_3825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3825_, 0, v___x_3824_);
lean_ctor_set(v___x_3825_, 1, v_a_3705_);
return v___x_3825_;
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__tacticFunext________1___boxed(lean_object* v_x_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l___aux__Init__NotationExtra______macroRules__tacticFunext________1(v_x_3826_, v_a_3827_, v_a_3828_);
lean_dec_ref(v_a_3827_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__1(size_t v_sz_3830_, size_t v_i_3831_, lean_object* v_bs_3832_){
_start:
{
uint8_t v___x_3833_; 
v___x_3833_ = lean_usize_dec_lt(v_i_3831_, v_sz_3830_);
if (v___x_3833_ == 0)
{
lean_object* v___x_3834_; 
v___x_3834_ = l_unsafeCast___redArg(v_bs_3832_);
lean_dec_ref(v_bs_3832_);
return v___x_3834_;
}
else
{
lean_object* v_v_3835_; lean_object* v___x_3836_; lean_object* v_bs_x27_3837_; lean_object* v___x_3838_; size_t v___x_3839_; size_t v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
v_v_3835_ = lean_array_uget(v_bs_3832_, v_i_3831_);
v___x_3836_ = lean_unsigned_to_nat(0u);
v_bs_x27_3837_ = lean_array_uset(v_bs_3832_, v_i_3831_, v___x_3836_);
v___x_3838_ = l_unsafeCast___redArg(v_v_3835_);
lean_dec(v_v_3835_);
v___x_3839_ = ((size_t)1ULL);
v___x_3840_ = lean_usize_add(v_i_3831_, v___x_3839_);
v___x_3841_ = l_unsafeCast___redArg(v___x_3838_);
lean_dec(v___x_3838_);
v___x_3842_ = lean_array_uset(v_bs_x27_3837_, v_i_3831_, v___x_3841_);
v_i_3831_ = v___x_3840_;
v_bs_3832_ = v___x_3842_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__1___boxed(lean_object* v_sz_3844_, lean_object* v_i_3845_, lean_object* v_bs_3846_){
_start:
{
size_t v_sz_boxed_3847_; size_t v_i_boxed_3848_; lean_object* v_res_3849_; 
v_sz_boxed_3847_ = lean_unbox_usize(v_sz_3844_);
lean_dec(v_sz_3844_);
v_i_boxed_3848_ = lean_unbox_usize(v_i_3845_);
lean_dec(v_i_3845_);
v_res_3849_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__1(v_sz_boxed_3847_, v_i_boxed_3848_, v_bs_3846_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__0(size_t v_sz_3850_, size_t v_i_3851_, lean_object* v_bs_3852_){
_start:
{
uint8_t v___x_3853_; 
v___x_3853_ = lean_usize_dec_lt(v_i_3851_, v_sz_3850_);
if (v___x_3853_ == 0)
{
lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3854_ = l_unsafeCast___redArg(v_bs_3852_);
lean_dec_ref(v_bs_3852_);
v___x_3855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3855_, 0, v___x_3854_);
return v___x_3855_;
}
else
{
lean_object* v_v_3856_; lean_object* v___x_3857_; lean_object* v_bs_x27_3858_; lean_object* v_x_3859_; size_t v___x_3860_; size_t v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; 
v_v_3856_ = lean_array_uget(v_bs_3852_, v_i_3851_);
v___x_3857_ = lean_unsigned_to_nat(0u);
v_bs_x27_3858_ = lean_array_uset(v_bs_3852_, v_i_3851_, v___x_3857_);
v_x_3859_ = l_unsafeCast___redArg(v_v_3856_);
lean_dec(v_v_3856_);
v___x_3860_ = ((size_t)1ULL);
v___x_3861_ = lean_usize_add(v_i_3851_, v___x_3860_);
v___x_3862_ = l_unsafeCast___redArg(v_x_3859_);
lean_dec(v_x_3859_);
v___x_3863_ = lean_array_uset(v_bs_x27_3858_, v_i_3851_, v___x_3862_);
v_i_3851_ = v___x_3861_;
v_bs_3852_ = v___x_3863_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__0___boxed(lean_object* v_sz_3865_, lean_object* v_i_3866_, lean_object* v_bs_3867_){
_start:
{
size_t v_sz_boxed_3868_; size_t v_i_boxed_3869_; lean_object* v_res_3870_; 
v_sz_boxed_3868_ = lean_unbox_usize(v_sz_3865_);
lean_dec(v_sz_3865_);
v_i_boxed_3869_ = lean_unbox_usize(v_i_3866_);
lean_dec(v_i_3866_);
v_res_3870_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__0(v_sz_boxed_3868_, v_i_boxed_3869_, v_bs_3867_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__3(uint8_t v___x_3871_, lean_object* v_as_3872_, size_t v_i_3873_, size_t v_stop_3874_, lean_object* v_b_3875_){
_start:
{
lean_object* v___y_3877_; uint8_t v___x_3881_; 
v___x_3881_ = lean_usize_dec_eq(v_i_3873_, v_stop_3874_);
if (v___x_3881_ == 0)
{
lean_object* v_fst_3882_; uint8_t v___x_3883_; 
v_fst_3882_ = lean_ctor_get(v_b_3875_, 0);
v___x_3883_ = lean_unbox(v_fst_3882_);
if (v___x_3883_ == 0)
{
lean_object* v_snd_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3892_; 
v_snd_3884_ = lean_ctor_get(v_b_3875_, 1);
v_isSharedCheck_3892_ = !lean_is_exclusive(v_b_3875_);
if (v_isSharedCheck_3892_ == 0)
{
lean_object* v_unused_3893_; 
v_unused_3893_ = lean_ctor_get(v_b_3875_, 0);
lean_dec(v_unused_3893_);
v___x_3886_ = v_b_3875_;
v_isShared_3887_ = v_isSharedCheck_3892_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_snd_3884_);
lean_dec(v_b_3875_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3892_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3888_; lean_object* v___x_3890_; 
v___x_3888_ = lean_box(v___x_3871_);
if (v_isShared_3887_ == 0)
{
lean_ctor_set(v___x_3886_, 0, v___x_3888_);
v___x_3890_ = v___x_3886_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v___x_3888_);
lean_ctor_set(v_reuseFailAlloc_3891_, 1, v_snd_3884_);
v___x_3890_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
v___y_3877_ = v___x_3890_;
goto v___jp_3876_;
}
}
}
else
{
lean_object* v_snd_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3904_; 
v_snd_3894_ = lean_ctor_get(v_b_3875_, 1);
v_isSharedCheck_3904_ = !lean_is_exclusive(v_b_3875_);
if (v_isSharedCheck_3904_ == 0)
{
lean_object* v_unused_3905_; 
v_unused_3905_ = lean_ctor_get(v_b_3875_, 0);
lean_dec(v_unused_3905_);
v___x_3896_ = v_b_3875_;
v_isShared_3897_ = v_isSharedCheck_3904_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_snd_3894_);
lean_dec(v_b_3875_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3904_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3898_ = lean_array_uget_borrowed(v_as_3872_, v_i_3873_);
lean_inc(v___x_3898_);
v___x_3899_ = lean_array_push(v_snd_3894_, v___x_3898_);
v___x_3900_ = lean_box(v___x_3881_);
if (v_isShared_3897_ == 0)
{
lean_ctor_set(v___x_3896_, 1, v___x_3899_);
lean_ctor_set(v___x_3896_, 0, v___x_3900_);
v___x_3902_ = v___x_3896_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v___x_3900_);
lean_ctor_set(v_reuseFailAlloc_3903_, 1, v___x_3899_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
v___y_3877_ = v___x_3902_;
goto v___jp_3876_;
}
}
}
}
else
{
return v_b_3875_;
}
v___jp_3876_:
{
size_t v___x_3878_; size_t v___x_3879_; 
v___x_3878_ = ((size_t)1ULL);
v___x_3879_ = lean_usize_add(v_i_3873_, v___x_3878_);
v_i_3873_ = v___x_3879_;
v_b_3875_ = v___y_3877_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__3___boxed(lean_object* v___x_3906_, lean_object* v_as_3907_, lean_object* v_i_3908_, lean_object* v_stop_3909_, lean_object* v_b_3910_){
_start:
{
uint8_t v___x_5139__boxed_3911_; size_t v_i_boxed_3912_; size_t v_stop_boxed_3913_; lean_object* v_res_3914_; 
v___x_5139__boxed_3911_ = lean_unbox(v___x_3906_);
v_i_boxed_3912_ = lean_unbox_usize(v_i_3908_);
lean_dec(v_i_3908_);
v_stop_boxed_3913_ = lean_unbox_usize(v_stop_3909_);
lean_dec(v_stop_3909_);
v_res_3914_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__3(v___x_5139__boxed_3911_, v_as_3907_, v_i_boxed_3912_, v_stop_boxed_3913_, v_b_3910_);
lean_dec_ref(v_as_3907_);
return v_res_3914_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3916_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__0));
v___x_3917_ = l_String_toRawSubstring_x27(v___x_3916_);
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2(lean_object* v_as_3934_, size_t v_i_3935_, size_t v_stop_3936_, lean_object* v_b_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_){
_start:
{
uint8_t v___x_3940_; 
v___x_3940_ = lean_usize_dec_eq(v_i_3935_, v_stop_3936_);
if (v___x_3940_ == 0)
{
lean_object* v_quotContext_3941_; lean_object* v_currMacroScope_3942_; lean_object* v_ref_3943_; size_t v___x_3944_; size_t v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; 
v_quotContext_3941_ = lean_ctor_get(v___y_3938_, 1);
v_currMacroScope_3942_ = lean_ctor_get(v___y_3938_, 2);
v_ref_3943_ = lean_ctor_get(v___y_3938_, 5);
v___x_3944_ = ((size_t)1ULL);
v___x_3945_ = lean_usize_sub(v_i_3935_, v___x_3944_);
v___x_3946_ = lean_array_uget_borrowed(v_as_3934_, v___x_3945_);
v___x_3947_ = l_Lean_SourceInfo_fromRef(v_ref_3943_, v___x_3940_);
v___x_3948_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
v___x_3949_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__1);
v___x_3950_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__4));
lean_inc(v_currMacroScope_3942_);
lean_inc(v_quotContext_3941_);
v___x_3951_ = l_Lean_addMacroScope(v_quotContext_3941_, v___x_3950_, v_currMacroScope_3942_);
v___x_3952_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___closed__8));
lean_inc_n(v___x_3947_, 2);
v___x_3953_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3947_);
lean_ctor_set(v___x_3953_, 1, v___x_3949_);
lean_ctor_set(v___x_3953_, 2, v___x_3951_);
lean_ctor_set(v___x_3953_, 3, v___x_3952_);
v___x_3954_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
lean_inc(v___x_3946_);
v___x_3955_ = l_Lean_Syntax_node2(v___x_3947_, v___x_3954_, v___x_3946_, v_b_3937_);
v___x_3956_ = l_Lean_Syntax_node2(v___x_3947_, v___x_3948_, v___x_3953_, v___x_3955_);
v_i_3935_ = v___x_3945_;
v_b_3937_ = v___x_3956_;
goto _start;
}
else
{
lean_object* v___x_3958_; 
v___x_3958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3958_, 0, v_b_3937_);
lean_ctor_set(v___x_3958_, 1, v___y_3939_);
return v___x_3958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2___boxed(lean_object* v_as_3959_, lean_object* v_i_3960_, lean_object* v_stop_3961_, lean_object* v_b_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_){
_start:
{
size_t v_i_boxed_3965_; size_t v_stop_boxed_3966_; lean_object* v_res_3967_; 
v_i_boxed_3965_ = lean_unbox_usize(v_i_3960_);
lean_dec(v_i_3960_);
v_stop_boxed_3966_ = lean_unbox_usize(v_stop_3961_);
lean_dec(v_stop_3961_);
v_res_3967_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2(v_as_3959_, v_i_boxed_3965_, v_stop_boxed_3966_, v_b_3962_, v___y_3963_, v___y_3964_);
lean_dec_ref(v___y_3963_);
lean_dec_ref(v_as_3959_);
return v_res_3967_;
}
}
static lean_object* _init_l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__13(void){
_start:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; 
v___x_4002_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__12));
v___x_4003_ = l_String_toRawSubstring_x27(v___x_4002_);
return v___x_4003_;
}
}
static lean_object* _init_l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16(void){
_start:
{
lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_4007_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_4008_ = l_Lean_mkAtom(v___x_4007_);
return v___x_4008_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1(lean_object* v_x_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_){
_start:
{
lean_object* v___x_4012_; uint8_t v___x_4013_; 
v___x_4012_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__1));
lean_inc(v_x_4009_);
v___x_4013_ = l_Lean_Syntax_isOfKind(v_x_4009_, v___x_4012_);
if (v___x_4013_ == 0)
{
lean_object* v___x_4014_; lean_object* v___x_4015_; 
lean_dec(v_x_4009_);
v___x_4014_ = lean_box(1);
v___x_4015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4015_, 0, v___x_4014_);
lean_ctor_set(v___x_4015_, 1, v_a_4011_);
return v___x_4015_;
}
else
{
lean_object* v___x_4016_; lean_object* v___y_4018_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; uint8_t v___x_4113_; 
v___x_4016_ = lean_unsigned_to_nat(0u);
v___x_4108_ = lean_unsigned_to_nat(1u);
v___x_4109_ = l_Lean_Syntax_getArg(v_x_4009_, v___x_4108_);
v___x_4110_ = l_Lean_Syntax_getArgs(v___x_4109_);
lean_dec(v___x_4109_);
v___x_4111_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33));
v___x_4112_ = lean_array_get_size(v___x_4110_);
v___x_4113_ = lean_nat_dec_lt(v___x_4016_, v___x_4112_);
if (v___x_4113_ == 0)
{
lean_dec_ref(v___x_4110_);
v___y_4018_ = v___x_4111_;
goto v___jp_4017_;
}
else
{
lean_object* v___x_4114_; lean_object* v___x_4115_; size_t v___x_4116_; size_t v___x_4117_; lean_object* v___x_4118_; lean_object* v_snd_4119_; 
v___x_4114_ = lean_box(v___x_4113_);
v___x_4115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
lean_ctor_set(v___x_4115_, 1, v___x_4111_);
v___x_4116_ = ((size_t)0ULL);
v___x_4117_ = lean_usize_of_nat(v___x_4112_);
v___x_4118_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__3(v___x_4013_, v___x_4110_, v___x_4116_, v___x_4117_, v___x_4115_);
lean_dec_ref(v___x_4110_);
v_snd_4119_ = lean_ctor_get(v___x_4118_, 1);
lean_inc(v_snd_4119_);
lean_dec_ref(v___x_4118_);
v___y_4018_ = v_snd_4119_;
goto v___jp_4017_;
}
v___jp_4017_:
{
size_t v_sz_4019_; size_t v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; 
v_sz_4019_ = lean_array_size(v___y_4018_);
v___x_4020_ = ((size_t)0ULL);
v___x_4021_ = l_unsafeCast___redArg(v___y_4018_);
lean_dec_ref(v___y_4018_);
v___x_4022_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__0(v_sz_4019_, v___x_4020_, v___x_4021_);
v___x_4023_ = l_unsafeCast___redArg(v___x_4022_);
lean_dec(v___x_4022_);
if (lean_obj_tag(v___x_4023_) == 0)
{
lean_object* v___x_4024_; lean_object* v___x_4025_; 
lean_dec(v_x_4009_);
v___x_4024_ = lean_box(1);
v___x_4025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4025_, 0, v___x_4024_);
lean_ctor_set(v___x_4025_, 1, v_a_4011_);
return v___x_4025_;
}
else
{
lean_object* v_val_4026_; lean_object* v___x_4027_; lean_object* v_k_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; uint8_t v___x_4031_; 
v_val_4026_ = lean_ctor_get(v___x_4023_, 0);
lean_inc(v_val_4026_);
lean_dec_ref_known(v___x_4023_, 1);
v___x_4027_ = lean_unsigned_to_nat(3u);
v_k_4028_ = l_Lean_Syntax_getArg(v_x_4009_, v___x_4027_);
lean_dec(v_x_4009_);
v___x_4029_ = lean_array_get_size(v_val_4026_);
v___x_4030_ = lean_unsigned_to_nat(8u);
v___x_4031_ = lean_nat_dec_lt(v___x_4029_, v___x_4030_);
if (v___x_4031_ == 0)
{
lean_object* v___x_4032_; lean_object* v_m_4033_; lean_object* v_quotContext_4034_; lean_object* v_currMacroScope_4035_; lean_object* v_ref_4036_; lean_object* v_y_4037_; lean_object* v_z_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; size_t v_sz_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; size_t v_sz_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4032_ = lean_unsigned_to_nat(1u);
v_m_4033_ = lean_nat_shiftr(v___x_4029_, v___x_4032_);
v_quotContext_4034_ = lean_ctor_get(v_a_4010_, 1);
v_currMacroScope_4035_ = lean_ctor_get(v_a_4010_, 2);
v_ref_4036_ = lean_ctor_get(v_a_4010_, 5);
lean_inc(v_m_4033_);
v_y_4037_ = l_Array_extract___redArg(v_val_4026_, v_m_4033_, v___x_4029_);
v_z_4038_ = l_Array_extract___redArg(v_val_4026_, v___x_4016_, v_m_4033_);
lean_dec(v_val_4026_);
v___x_4039_ = l_Lean_SourceInfo_fromRef(v_ref_4036_, v___x_4031_);
v___x_4040_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__2));
v___x_4041_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__3));
lean_inc_n(v___x_4039_, 15);
v___x_4042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4042_, 0, v___x_4039_);
lean_ctor_set(v___x_4042_, 1, v___x_4040_);
v___x_4043_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__5));
v___x_4044_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_4045_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_4046_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4046_, 0, v___x_4039_);
lean_ctor_set(v___x_4046_, 1, v___x_4044_);
lean_ctor_set(v___x_4046_, 2, v___x_4045_);
lean_inc_ref_n(v___x_4046_, 3);
v___x_4047_ = l_Lean_Syntax_node1(v___x_4039_, v___x_4043_, v___x_4046_);
v___x_4048_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__7));
v___x_4049_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__9));
v___x_4050_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__11));
v___x_4051_ = lean_obj_once(&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__13, &l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__13_once, _init_l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__13);
v___x_4052_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__14));
lean_inc(v_currMacroScope_4035_);
lean_inc(v_quotContext_4034_);
v___x_4053_ = l_Lean_addMacroScope(v_quotContext_4034_, v___x_4052_, v_currMacroScope_4035_);
v___x_4054_ = lean_box(0);
v___x_4055_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4039_);
lean_ctor_set(v___x_4055_, 1, v___x_4051_);
lean_ctor_set(v___x_4055_, 2, v___x_4053_);
lean_ctor_set(v___x_4055_, 3, v___x_4054_);
lean_inc_ref(v___x_4055_);
v___x_4056_ = l_Lean_Syntax_node1(v___x_4039_, v___x_4050_, v___x_4055_);
v___x_4057_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__6));
v___x_4058_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4058_, 0, v___x_4039_);
lean_ctor_set(v___x_4058_, 1, v___x_4057_);
v___x_4059_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__15));
v___x_4060_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4039_);
lean_ctor_set(v___x_4060_, 1, v___x_4059_);
v_sz_4061_ = lean_array_size(v_y_4037_);
v___x_4062_ = l_unsafeCast___redArg(v_y_4037_);
lean_dec_ref(v_y_4037_);
v___x_4063_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__1(v_sz_4061_, v___x_4020_, v___x_4062_);
v___x_4064_ = l_unsafeCast___redArg(v___x_4063_);
lean_dec_ref(v___x_4063_);
v___x_4065_ = lean_obj_once(&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16, &l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16_once, _init_l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16);
v___x_4066_ = l_Lean_mkSepArray(v___x_4064_, v___x_4065_);
lean_dec(v___x_4064_);
v___x_4067_ = l_Array_append___redArg(v___x_4045_, v___x_4066_);
lean_dec_ref(v___x_4066_);
v___x_4068_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4039_);
lean_ctor_set(v___x_4068_, 1, v___x_4044_);
lean_ctor_set(v___x_4068_, 2, v___x_4067_);
v___x_4069_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__41));
v___x_4070_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4039_);
lean_ctor_set(v___x_4070_, 1, v___x_4069_);
v___x_4071_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_4072_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4039_);
lean_ctor_set(v___x_4072_, 1, v___x_4071_);
lean_inc_ref(v___x_4072_);
lean_inc_ref(v___x_4070_);
lean_inc_ref(v___x_4060_);
v___x_4073_ = l_Lean_Syntax_node5(v___x_4039_, v___x_4012_, v___x_4060_, v___x_4068_, v___x_4070_, v_k_4028_, v___x_4072_);
v___x_4074_ = l_Lean_Syntax_node5(v___x_4039_, v___x_4049_, v___x_4056_, v___x_4046_, v___x_4046_, v___x_4058_, v___x_4073_);
v___x_4075_ = l_Lean_Syntax_node1(v___x_4039_, v___x_4048_, v___x_4074_);
v_sz_4076_ = lean_array_size(v_z_4038_);
v___x_4077_ = l_unsafeCast___redArg(v_z_4038_);
lean_dec_ref(v_z_4038_);
v___x_4078_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__1(v_sz_4076_, v___x_4020_, v___x_4077_);
v___x_4079_ = l_unsafeCast___redArg(v___x_4078_);
lean_dec_ref(v___x_4078_);
v___x_4080_ = l_Lean_mkSepArray(v___x_4079_, v___x_4065_);
lean_dec(v___x_4079_);
v___x_4081_ = l_Array_append___redArg(v___x_4045_, v___x_4080_);
lean_dec_ref(v___x_4080_);
v___x_4082_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4082_, 0, v___x_4039_);
lean_ctor_set(v___x_4082_, 1, v___x_4044_);
lean_ctor_set(v___x_4082_, 2, v___x_4081_);
v___x_4083_ = l_Lean_Syntax_node5(v___x_4039_, v___x_4012_, v___x_4060_, v___x_4082_, v___x_4070_, v___x_4055_, v___x_4072_);
v___x_4084_ = l_Lean_Syntax_node5(v___x_4039_, v___x_4041_, v___x_4042_, v___x_4047_, v___x_4075_, v___x_4046_, v___x_4083_);
v___x_4085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4084_);
lean_ctor_set(v___x_4085_, 1, v_a_4011_);
return v___x_4085_;
}
else
{
uint8_t v___x_4086_; 
v___x_4086_ = lean_nat_dec_lt(v___x_4016_, v___x_4029_);
if (v___x_4086_ == 0)
{
lean_object* v___x_4087_; 
lean_dec(v_val_4026_);
v___x_4087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4087_, 0, v_k_4028_);
lean_ctor_set(v___x_4087_, 1, v_a_4011_);
return v___x_4087_;
}
else
{
size_t v___x_4088_; lean_object* v___x_4089_; 
v___x_4088_ = lean_usize_of_nat(v___x_4029_);
v___x_4089_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1_spec__2(v_val_4026_, v___x_4088_, v___x_4020_, v_k_4028_, v_a_4010_, v_a_4011_);
lean_dec(v_val_4026_);
if (lean_obj_tag(v___x_4089_) == 0)
{
lean_object* v_a_4090_; lean_object* v_a_4091_; lean_object* v___x_4093_; uint8_t v_isShared_4094_; uint8_t v_isSharedCheck_4098_; 
v_a_4090_ = lean_ctor_get(v___x_4089_, 0);
v_a_4091_ = lean_ctor_get(v___x_4089_, 1);
v_isSharedCheck_4098_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4098_ == 0)
{
v___x_4093_ = v___x_4089_;
v_isShared_4094_ = v_isSharedCheck_4098_;
goto v_resetjp_4092_;
}
else
{
lean_inc(v_a_4091_);
lean_inc(v_a_4090_);
lean_dec(v___x_4089_);
v___x_4093_ = lean_box(0);
v_isShared_4094_ = v_isSharedCheck_4098_;
goto v_resetjp_4092_;
}
v_resetjp_4092_:
{
lean_object* v___x_4096_; 
if (v_isShared_4094_ == 0)
{
v___x_4096_ = v___x_4093_;
goto v_reusejp_4095_;
}
else
{
lean_object* v_reuseFailAlloc_4097_; 
v_reuseFailAlloc_4097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4097_, 0, v_a_4090_);
lean_ctor_set(v_reuseFailAlloc_4097_, 1, v_a_4091_);
v___x_4096_ = v_reuseFailAlloc_4097_;
goto v_reusejp_4095_;
}
v_reusejp_4095_:
{
return v___x_4096_;
}
}
}
else
{
lean_object* v_a_4099_; lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
v_a_4099_ = lean_ctor_get(v___x_4089_, 0);
v_a_4100_ = lean_ctor_get(v___x_4089_, 1);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4089_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_inc(v_a_4099_);
lean_dec(v___x_4089_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4099_);
lean_ctor_set(v_reuseFailAlloc_4106_, 1, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
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
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___boxed(lean_object* v_x_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1(v_x_4120_, v_a_4121_, v_a_4122_);
lean_dec_ref(v_a_4121_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0(lean_object* v_x_4212_){
_start:
{
lean_object* v___x_4213_; lean_object* v___x_4214_; 
v___x_4213_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0___closed__1));
v___x_4214_ = l_Lean_Name_append(v_x_4212_, v___x_4213_);
return v___x_4214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1(lean_object* v___x_4221_, size_t v_sz_4222_, size_t v_i_4223_, lean_object* v_bs_4224_){
_start:
{
uint8_t v___x_4225_; 
v___x_4225_ = lean_usize_dec_lt(v_i_4223_, v_sz_4222_);
if (v___x_4225_ == 0)
{
lean_object* v___x_4226_; 
lean_dec(v___x_4221_);
v___x_4226_ = l_unsafeCast___redArg(v_bs_4224_);
lean_dec_ref(v_bs_4224_);
return v___x_4226_;
}
else
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v_v_4229_; lean_object* v___x_4230_; lean_object* v_bs_x27_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; size_t v___x_4236_; size_t v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; 
v___x_4227_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_4228_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v_v_4229_ = lean_array_uget(v_bs_4224_, v_i_4223_);
v___x_4230_ = lean_unsigned_to_nat(0u);
v_bs_x27_4231_ = lean_array_uset(v_bs_4224_, v_i_4223_, v___x_4230_);
v___x_4232_ = l_unsafeCast___redArg(v_v_4229_);
lean_dec(v_v_4229_);
v___x_4233_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___closed__1));
lean_inc_n(v___x_4221_, 2);
v___x_4234_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4234_, 0, v___x_4221_);
lean_ctor_set(v___x_4234_, 1, v___x_4227_);
lean_ctor_set(v___x_4234_, 2, v___x_4228_);
v___x_4235_ = l_Lean_Syntax_node2(v___x_4221_, v___x_4233_, v___x_4234_, v___x_4232_);
v___x_4236_ = ((size_t)1ULL);
v___x_4237_ = lean_usize_add(v_i_4223_, v___x_4236_);
v___x_4238_ = l_unsafeCast___redArg(v___x_4235_);
lean_dec(v___x_4235_);
v___x_4239_ = lean_array_uset(v_bs_x27_4231_, v_i_4223_, v___x_4238_);
v_i_4223_ = v___x_4237_;
v_bs_4224_ = v___x_4239_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1___boxed(lean_object* v___x_4241_, lean_object* v_sz_4242_, lean_object* v_i_4243_, lean_object* v_bs_4244_){
_start:
{
size_t v_sz_boxed_4245_; size_t v_i_boxed_4246_; lean_object* v_res_4247_; 
v_sz_boxed_4245_ = lean_unbox_usize(v_sz_4242_);
lean_dec(v_sz_4242_);
v_i_boxed_4246_ = lean_unbox_usize(v_i_4243_);
lean_dec(v_i_4243_);
v_res_4247_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1(v___x_4241_, v_sz_boxed_4245_, v_i_boxed_4246_, v_bs_4244_);
return v_res_4247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__0(size_t v_sz_4248_, size_t v_i_4249_, lean_object* v_bs_4250_){
_start:
{
uint8_t v___x_4251_; 
v___x_4251_ = lean_usize_dec_lt(v_i_4249_, v_sz_4248_);
if (v___x_4251_ == 0)
{
lean_object* v___x_4252_; lean_object* v___x_4253_; 
v___x_4252_ = l_unsafeCast___redArg(v_bs_4250_);
lean_dec_ref(v_bs_4250_);
v___x_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4253_, 0, v___x_4252_);
return v___x_4253_;
}
else
{
lean_object* v_v_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; uint8_t v___x_4257_; 
v_v_4254_ = lean_array_uget_borrowed(v_bs_4250_, v_i_4249_);
v___x_4255_ = l_unsafeCast___redArg(v_v_4254_);
v___x_4256_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38));
lean_inc(v___x_4255_);
v___x_4257_ = l_Lean_Syntax_isOfKind(v___x_4255_, v___x_4256_);
if (v___x_4257_ == 0)
{
lean_object* v___x_4258_; 
lean_dec(v___x_4255_);
lean_dec_ref(v_bs_4250_);
v___x_4258_ = lean_box(0);
return v___x_4258_;
}
else
{
lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v_bs_x27_4261_; lean_object* v_parents_4262_; lean_object* v___x_4269_; uint8_t v___x_4270_; 
v___x_4259_ = lean_unsigned_to_nat(0u);
v___x_4260_ = lean_unsigned_to_nat(1u);
v_bs_x27_4261_ = lean_array_uset(v_bs_4250_, v_i_4249_, v___x_4259_);
v_parents_4262_ = l_Lean_Syntax_getArg(v___x_4255_, v___x_4259_);
v___x_4269_ = l_Lean_Syntax_getArg(v___x_4255_, v___x_4260_);
lean_dec(v___x_4255_);
v___x_4270_ = l_Lean_Syntax_isNone(v___x_4269_);
if (v___x_4270_ == 0)
{
uint8_t v___x_4271_; 
v___x_4271_ = l_Lean_Syntax_matchesNull(v___x_4269_, v___x_4260_);
if (v___x_4271_ == 0)
{
lean_object* v___x_4272_; 
lean_dec(v_parents_4262_);
lean_dec_ref(v_bs_x27_4261_);
v___x_4272_ = lean_box(0);
return v___x_4272_;
}
else
{
goto v___jp_4263_;
}
}
else
{
lean_dec(v___x_4269_);
goto v___jp_4263_;
}
v___jp_4263_:
{
size_t v___x_4264_; size_t v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; 
v___x_4264_ = ((size_t)1ULL);
v___x_4265_ = lean_usize_add(v_i_4249_, v___x_4264_);
v___x_4266_ = l_unsafeCast___redArg(v_parents_4262_);
lean_dec(v_parents_4262_);
v___x_4267_ = lean_array_uset(v_bs_x27_4261_, v_i_4249_, v___x_4266_);
v_i_4249_ = v___x_4265_;
v_bs_4250_ = v___x_4267_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__0___boxed(lean_object* v_sz_4273_, lean_object* v_i_4274_, lean_object* v_bs_4275_){
_start:
{
size_t v_sz_boxed_4276_; size_t v_i_boxed_4277_; lean_object* v_res_4278_; 
v_sz_boxed_4276_ = lean_unbox_usize(v_sz_4273_);
lean_dec(v_sz_4273_);
v_i_boxed_4277_ = lean_unbox_usize(v_i_4274_);
lean_dec(v_i_4274_);
v_res_4278_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__0(v_sz_boxed_4276_, v_i_boxed_4277_, v_bs_4275_);
return v_res_4278_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1(lean_object* v_x_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_){
_start:
{
lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; uint8_t v___x_4337_; 
v___x_4334_ = ((lean_object*)(l_Lean_unbracketedExplicitBinders___closed__1));
v___x_4335_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__0));
v___x_4336_ = ((lean_object*)(l_Lean_Parser_Command_classAbbrev___closed__1));
lean_inc(v_x_4331_);
v___x_4337_ = l_Lean_Syntax_isOfKind(v_x_4331_, v___x_4336_);
if (v___x_4337_ == 0)
{
lean_object* v___x_4338_; lean_object* v___x_4339_; 
lean_dec(v_x_4331_);
v___x_4338_ = lean_box(1);
v___x_4339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4339_, 0, v___x_4338_);
lean_ctor_set(v___x_4339_, 1, v_a_4333_);
return v___x_4339_;
}
else
{
lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; uint8_t v___x_4343_; 
v___x_4340_ = lean_unsigned_to_nat(0u);
v___x_4341_ = l_Lean_Syntax_getArg(v_x_4331_, v___x_4340_);
v___x_4342_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__0));
lean_inc(v___x_4341_);
v___x_4343_ = l_Lean_Syntax_isOfKind(v___x_4341_, v___x_4342_);
if (v___x_4343_ == 0)
{
lean_object* v___x_4344_; lean_object* v___x_4345_; 
lean_dec(v___x_4341_);
lean_dec(v_x_4331_);
v___x_4344_ = lean_box(1);
v___x_4345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4345_, 0, v___x_4344_);
lean_ctor_set(v___x_4345_, 1, v_a_4333_);
return v___x_4345_;
}
else
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; size_t v___y_4355_; lean_object* v___y_4356_; lean_object* v___y_4357_; lean_object* v___y_4358_; lean_object* v___y_4359_; lean_object* v___y_4360_; lean_object* v___y_4361_; lean_object* v___y_4362_; lean_object* v___y_4407_; lean_object* v___y_4408_; lean_object* v___y_4409_; lean_object* v___y_4410_; size_t v___y_4411_; lean_object* v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v_ty_4450_; lean_object* v___y_4451_; lean_object* v___y_4452_; lean_object* v___x_4485_; lean_object* v___x_4486_; uint8_t v___x_4487_; 
v___x_4346_ = lean_unsigned_to_nat(3u);
v___x_4347_ = l_Lean_Syntax_getArg(v_x_4331_, v___x_4346_);
v___x_4447_ = lean_unsigned_to_nat(4u);
v___x_4448_ = l_Lean_Syntax_getArg(v_x_4331_, v___x_4447_);
v___x_4485_ = lean_unsigned_to_nat(5u);
v___x_4486_ = l_Lean_Syntax_getArg(v_x_4331_, v___x_4485_);
v___x_4487_ = l_Lean_Syntax_isNone(v___x_4486_);
if (v___x_4487_ == 0)
{
lean_object* v___x_4488_; uint8_t v___x_4489_; 
v___x_4488_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_4486_);
v___x_4489_ = l_Lean_Syntax_matchesNull(v___x_4486_, v___x_4488_);
if (v___x_4489_ == 0)
{
lean_object* v___x_4490_; lean_object* v___x_4491_; 
lean_dec(v___x_4486_);
lean_dec(v___x_4448_);
lean_dec(v___x_4347_);
lean_dec(v___x_4341_);
lean_dec(v_x_4331_);
v___x_4490_ = lean_box(1);
v___x_4491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4491_, 0, v___x_4490_);
lean_ctor_set(v___x_4491_, 1, v_a_4333_);
return v___x_4491_;
}
else
{
lean_object* v___x_4492_; lean_object* v_ty_4493_; lean_object* v___x_4494_; 
v___x_4492_ = lean_unsigned_to_nat(1u);
v_ty_4493_ = l_Lean_Syntax_getArg(v___x_4486_, v___x_4492_);
lean_dec(v___x_4486_);
v___x_4494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4494_, 0, v_ty_4493_);
v_ty_4450_ = v___x_4494_;
v___y_4451_ = v_a_4332_;
v___y_4452_ = v_a_4333_;
goto v___jp_4449_;
}
}
else
{
lean_object* v___x_4495_; 
lean_dec(v___x_4486_);
v___x_4495_ = lean_box(0);
v_ty_4450_ = v___x_4495_;
v___y_4451_ = v_a_4332_;
v___y_4452_ = v_a_4333_;
goto v___jp_4449_;
}
v___jp_4348_:
{
lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; size_t v_sz_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; 
lean_inc_ref_n(v___y_4350_, 2);
v___x_4363_ = l_Array_append___redArg(v___y_4350_, v___y_4362_);
lean_dec_ref(v___y_4362_);
lean_inc_n(v___y_4349_, 7);
lean_inc_n(v___y_4351_, 21);
v___x_4364_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4364_, 0, v___y_4351_);
lean_ctor_set(v___x_4364_, 1, v___y_4349_);
lean_ctor_set(v___x_4364_, 2, v___x_4363_);
lean_inc(v___y_4358_);
v___x_4365_ = l_Lean_Syntax_node2(v___y_4351_, v___y_4358_, v___y_4359_, v___x_4364_);
v___x_4366_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__1));
v___x_4367_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__2));
v___x_4368_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4368_, 0, v___y_4351_);
lean_ctor_set(v___x_4368_, 1, v___x_4366_);
v_sz_4369_ = lean_array_size(v___y_4353_);
v___x_4370_ = l_unsafeCast___redArg(v___y_4353_);
lean_dec_ref(v___y_4353_);
v___x_4371_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__1(v___y_4351_, v_sz_4369_, v___y_4355_, v___x_4370_);
v___x_4372_ = l_unsafeCast___redArg(v___x_4371_);
lean_dec_ref(v___x_4371_);
v___x_4373_ = lean_obj_once(&l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16, &l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16_once, _init_l___aux__Init__NotationExtra______macroRules__term_x25_x5b___x7c___x5d__1___closed__16);
v___x_4374_ = l_Lean_mkSepArray(v___x_4372_, v___x_4373_);
lean_dec(v___x_4372_);
v___x_4375_ = l_Array_append___redArg(v___y_4350_, v___x_4374_);
lean_dec_ref(v___x_4374_);
v___x_4376_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4376_, 0, v___y_4351_);
lean_ctor_set(v___x_4376_, 1, v___y_4349_);
lean_ctor_set(v___x_4376_, 2, v___x_4375_);
v___x_4377_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4377_, 0, v___y_4351_);
lean_ctor_set(v___x_4377_, 1, v___y_4349_);
lean_ctor_set(v___x_4377_, 2, v___y_4350_);
lean_inc_ref_n(v___x_4377_, 4);
v___x_4378_ = l_Lean_Syntax_node3(v___y_4351_, v___x_4367_, v___x_4368_, v___x_4376_, v___x_4377_);
v___x_4379_ = l_Lean_Syntax_node1(v___y_4351_, v___y_4349_, v___x_4378_);
v___x_4380_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__4));
v___x_4381_ = l_Lean_Syntax_node1(v___y_4351_, v___x_4380_, v___x_4377_);
lean_inc(v___y_4357_);
v___x_4382_ = l_Lean_Syntax_node6(v___y_4351_, v___y_4357_, v___y_4356_, v___x_4347_, v___x_4365_, v___x_4379_, v___x_4377_, v___x_4381_);
lean_inc(v___y_4352_);
v___x_4383_ = l_Lean_Syntax_node2(v___y_4351_, v___y_4352_, v___x_4341_, v___x_4382_);
v___x_4384_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__5));
v___x_4385_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__6));
v___x_4386_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4386_, 0, v___y_4351_);
lean_ctor_set(v___x_4386_, 1, v___x_4384_);
v___x_4387_ = ((lean_object*)(l_unexpandListNil___redArg___closed__2));
v___x_4388_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4388_, 0, v___y_4351_);
lean_ctor_set(v___x_4388_, 1, v___x_4387_);
v___x_4389_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__11));
lean_inc_ref_n(v___y_4360_, 2);
v___x_4390_ = l_Lean_Name_mkStr4(v___x_4334_, v___x_4335_, v___y_4360_, v___x_4389_);
v___x_4391_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__6));
v___x_4392_ = l_Lean_Name_mkStr4(v___x_4334_, v___x_4335_, v___y_4360_, v___x_4391_);
v___x_4393_ = l_Lean_Syntax_node1(v___y_4351_, v___x_4392_, v___x_4377_);
v___x_4394_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__7));
v___x_4395_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__8));
v___x_4396_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4396_, 0, v___y_4351_);
lean_ctor_set(v___x_4396_, 1, v___x_4394_);
v___x_4397_ = l_Lean_Syntax_node2(v___y_4351_, v___x_4395_, v___x_4396_, v___x_4377_);
v___x_4398_ = l_Lean_Syntax_node2(v___y_4351_, v___x_4390_, v___x_4393_, v___x_4397_);
v___x_4399_ = l_Lean_Syntax_node1(v___y_4351_, v___y_4349_, v___x_4398_);
v___x_4400_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__21));
v___x_4401_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4401_, 0, v___y_4351_);
lean_ctor_set(v___x_4401_, 1, v___x_4400_);
v___x_4402_ = l_Lean_Syntax_node1(v___y_4351_, v___y_4349_, v___y_4354_);
v___x_4403_ = l_Lean_Syntax_node5(v___y_4351_, v___x_4385_, v___x_4386_, v___x_4388_, v___x_4399_, v___x_4401_, v___x_4402_);
v___x_4404_ = l_Lean_Syntax_node2(v___y_4351_, v___y_4349_, v___x_4383_, v___x_4403_);
v___x_4405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4405_, 0, v___x_4404_);
lean_ctor_set(v___x_4405_, 1, v___y_4361_);
return v___x_4405_;
}
v___jp_4406_:
{
lean_object* v_ref_4415_; uint8_t v___x_4416_; lean_object* v_ctor_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; size_t v_sz_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; size_t v_sz_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; 
v_ref_4415_ = lean_ctor_get(v___y_4409_, 5);
v___x_4416_ = 0;
v_ctor_4417_ = l_Lean_mkIdentFrom(v___x_4347_, v___y_4414_, v___x_4416_);
v___x_4418_ = l_Lean_SourceInfo_fromRef(v_ref_4415_, v___x_4416_);
v___x_4419_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_4420_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__9));
v___x_4421_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__11));
v___x_4422_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__13));
v___x_4423_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__14));
lean_inc_n(v___x_4418_, 3);
v___x_4424_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4424_, 0, v___x_4418_);
lean_ctor_set(v___x_4424_, 1, v___x_4423_);
v___x_4425_ = l_Lean_Syntax_node1(v___x_4418_, v___x_4422_, v___x_4424_);
v___x_4426_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___closed__15));
v___x_4427_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v_sz_4428_ = lean_array_size(v___y_4407_);
v___x_4429_ = l_unsafeCast___redArg(v___y_4407_);
lean_dec(v___y_4407_);
v___x_4430_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__4(v_sz_4428_, v___y_4411_, v___x_4429_);
v___x_4431_ = l_unsafeCast___redArg(v___x_4430_);
lean_dec_ref(v___x_4430_);
v_sz_4432_ = lean_array_size(v___x_4431_);
v___x_4433_ = l_unsafeCast___redArg(v___x_4431_);
lean_dec(v___x_4431_);
v___x_4434_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1_spec__5(v_sz_4432_, v___y_4411_, v___x_4433_);
v___x_4435_ = l_unsafeCast___redArg(v___x_4434_);
lean_dec_ref(v___x_4434_);
v___x_4436_ = l_unsafeCast___redArg(v___x_4435_);
lean_dec(v___x_4435_);
v___x_4437_ = l_Array_append___redArg(v___x_4427_, v___x_4436_);
lean_dec(v___x_4436_);
v___x_4438_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4418_);
lean_ctor_set(v___x_4438_, 1, v___x_4419_);
lean_ctor_set(v___x_4438_, 2, v___x_4437_);
if (lean_obj_tag(v___y_4412_) == 1)
{
lean_object* v_val_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; 
v_val_4439_ = lean_ctor_get(v___y_4412_, 0);
lean_inc(v_val_4439_);
lean_dec_ref_known(v___y_4412_, 1);
v___x_4440_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__15));
lean_inc_ref(v___y_4410_);
v___x_4441_ = l_Lean_Name_mkStr4(v___x_4334_, v___x_4335_, v___y_4410_, v___x_4440_);
v___x_4442_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
lean_inc_n(v___x_4418_, 2);
v___x_4443_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4418_);
lean_ctor_set(v___x_4443_, 1, v___x_4442_);
v___x_4444_ = l_Lean_Syntax_node2(v___x_4418_, v___x_4441_, v___x_4443_, v_val_4439_);
v___x_4445_ = l_Array_mkArray1___redArg(v___x_4444_);
v___y_4349_ = v___x_4419_;
v___y_4350_ = v___x_4427_;
v___y_4351_ = v___x_4418_;
v___y_4352_ = v___x_4420_;
v___y_4353_ = v___y_4408_;
v___y_4354_ = v_ctor_4417_;
v___y_4355_ = v___y_4411_;
v___y_4356_ = v___x_4425_;
v___y_4357_ = v___x_4421_;
v___y_4358_ = v___x_4426_;
v___y_4359_ = v___x_4438_;
v___y_4360_ = v___y_4410_;
v___y_4361_ = v___y_4413_;
v___y_4362_ = v___x_4445_;
goto v___jp_4348_;
}
else
{
lean_object* v___x_4446_; 
lean_dec(v___y_4412_);
v___x_4446_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__33));
v___y_4349_ = v___x_4419_;
v___y_4350_ = v___x_4427_;
v___y_4351_ = v___x_4418_;
v___y_4352_ = v___x_4420_;
v___y_4353_ = v___y_4408_;
v___y_4354_ = v_ctor_4417_;
v___y_4355_ = v___y_4411_;
v___y_4356_ = v___x_4425_;
v___y_4357_ = v___x_4421_;
v___y_4358_ = v___x_4426_;
v___y_4359_ = v___x_4438_;
v___y_4360_ = v___y_4410_;
v___y_4361_ = v___y_4413_;
v___y_4362_ = v___x_4446_;
goto v___jp_4348_;
}
}
v___jp_4449_:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; size_t v_sz_4456_; size_t v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; 
v___x_4453_ = lean_unsigned_to_nat(7u);
v___x_4454_ = l_Lean_Syntax_getArg(v_x_4331_, v___x_4453_);
lean_dec(v_x_4331_);
v___x_4455_ = l_Lean_Syntax_getArgs(v___x_4454_);
lean_dec(v___x_4454_);
v_sz_4456_ = lean_array_size(v___x_4455_);
v___x_4457_ = ((size_t)0ULL);
v___x_4458_ = l_unsafeCast___redArg(v___x_4455_);
lean_dec_ref(v___x_4455_);
v___x_4459_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1_spec__0(v_sz_4456_, v___x_4457_, v___x_4458_);
v___x_4460_ = l_unsafeCast___redArg(v___x_4459_);
lean_dec(v___x_4459_);
if (lean_obj_tag(v___x_4460_) == 0)
{
lean_object* v___x_4461_; lean_object* v___x_4462_; 
lean_dec(v_ty_4450_);
lean_dec(v___x_4448_);
lean_dec(v___x_4347_);
lean_dec(v___x_4341_);
v___x_4461_ = lean_box(1);
v___x_4462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4462_, 0, v___x_4461_);
lean_ctor_set(v___x_4462_, 1, v___y_4452_);
return v___x_4462_;
}
else
{
lean_object* v_val_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v_params_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; uint8_t v___x_4469_; 
v_val_4463_ = lean_ctor_get(v___x_4460_, 0);
lean_inc(v_val_4463_);
lean_dec_ref_known(v___x_4460_, 1);
v___x_4464_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__1));
v___x_4465_ = l_Lean_Syntax_getArgs(v___x_4448_);
lean_dec(v___x_4448_);
v_params_4466_ = l_unsafeCast___redArg(v___x_4465_);
lean_dec_ref(v___x_4465_);
v___x_4467_ = l_Lean_Syntax_getArg(v___x_4347_, v___x_4340_);
v___x_4468_ = l_Lean_Syntax_getId(v___x_4467_);
lean_dec(v___x_4467_);
v___x_4469_ = l_Lean_Name_hasMacroScopes(v___x_4468_);
if (v___x_4469_ == 0)
{
lean_object* v___x_4470_; 
v___x_4470_ = l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0(v___x_4468_);
v___y_4407_ = v_params_4466_;
v___y_4408_ = v_val_4463_;
v___y_4409_ = v___y_4451_;
v___y_4410_ = v___x_4464_;
v___y_4411_ = v___x_4457_;
v___y_4412_ = v_ty_4450_;
v___y_4413_ = v___y_4452_;
v___y_4414_ = v___x_4470_;
goto v___jp_4406_;
}
else
{
lean_object* v_view_4471_; lean_object* v_name_4472_; lean_object* v_imported_4473_; lean_object* v_ctx_4474_; lean_object* v_scopes_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4484_; 
v_view_4471_ = l_Lean_extractMacroScopes(v___x_4468_);
v_name_4472_ = lean_ctor_get(v_view_4471_, 0);
v_imported_4473_ = lean_ctor_get(v_view_4471_, 1);
v_ctx_4474_ = lean_ctor_get(v_view_4471_, 2);
v_scopes_4475_ = lean_ctor_get(v_view_4471_, 3);
v_isSharedCheck_4484_ = !lean_is_exclusive(v_view_4471_);
if (v_isSharedCheck_4484_ == 0)
{
v___x_4477_ = v_view_4471_;
v_isShared_4478_ = v_isSharedCheck_4484_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_scopes_4475_);
lean_inc(v_ctx_4474_);
lean_inc(v_imported_4473_);
lean_inc(v_name_4472_);
lean_dec(v_view_4471_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4484_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
lean_object* v___x_4479_; lean_object* v___x_4481_; 
v___x_4479_ = l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___lam__0(v_name_4472_);
if (v_isShared_4478_ == 0)
{
lean_ctor_set(v___x_4477_, 0, v___x_4479_);
v___x_4481_ = v___x_4477_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v___x_4479_);
lean_ctor_set(v_reuseFailAlloc_4483_, 1, v_imported_4473_);
lean_ctor_set(v_reuseFailAlloc_4483_, 2, v_ctx_4474_);
lean_ctor_set(v_reuseFailAlloc_4483_, 3, v_scopes_4475_);
v___x_4481_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
lean_object* v___x_4482_; 
v___x_4482_ = l_Lean_MacroScopesView_review(v___x_4481_);
v___y_4407_ = v_params_4466_;
v___y_4408_ = v_val_4463_;
v___y_4409_ = v___y_4451_;
v___y_4410_ = v___x_4464_;
v___y_4411_ = v___x_4457_;
v___y_4412_ = v_ty_4450_;
v___y_4413_ = v___y_4452_;
v___y_4414_ = v___x_4482_;
goto v___jp_4406_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1___boxed(lean_object* v_x_4496_, lean_object* v_a_4497_, lean_object* v_a_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = l___aux__Init__NotationExtra______macroRules__Lean__Parser__Command__classAbbrev__1(v_x_4496_, v_a_4497_, v_a_4498_);
lean_dec_ref(v_a_4497_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__0(size_t v_sz_4584_, size_t v_i_4585_, lean_object* v_bs_4586_){
_start:
{
uint8_t v___x_4587_; 
v___x_4587_ = lean_usize_dec_lt(v_i_4585_, v_sz_4584_);
if (v___x_4587_ == 0)
{
lean_object* v___x_4588_; lean_object* v___x_4589_; 
v___x_4588_ = l_unsafeCast___redArg(v_bs_4586_);
lean_dec_ref(v_bs_4586_);
v___x_4589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4589_, 0, v___x_4588_);
return v___x_4589_;
}
else
{
lean_object* v_v_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; uint8_t v___x_4593_; 
v_v_4590_ = lean_array_uget_borrowed(v_bs_4586_, v_i_4585_);
v___x_4591_ = l_unsafeCast___redArg(v_v_4590_);
v___x_4592_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38));
lean_inc(v___x_4591_);
v___x_4593_ = l_Lean_Syntax_isOfKind(v___x_4591_, v___x_4592_);
if (v___x_4593_ == 0)
{
lean_object* v___x_4594_; 
lean_dec(v___x_4591_);
lean_dec_ref(v_bs_4586_);
v___x_4594_ = lean_box(0);
return v___x_4594_;
}
else
{
lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v_bs_x27_4597_; lean_object* v_ts_4598_; size_t v___x_4599_; size_t v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4595_ = lean_unsigned_to_nat(1u);
v___x_4596_ = lean_unsigned_to_nat(0u);
v_bs_x27_4597_ = lean_array_uset(v_bs_4586_, v_i_4585_, v___x_4596_);
v_ts_4598_ = l_Lean_Syntax_getArg(v___x_4591_, v___x_4595_);
lean_dec(v___x_4591_);
v___x_4599_ = ((size_t)1ULL);
v___x_4600_ = lean_usize_add(v_i_4585_, v___x_4599_);
v___x_4601_ = l_unsafeCast___redArg(v_ts_4598_);
lean_dec(v_ts_4598_);
v___x_4602_ = lean_array_uset(v_bs_x27_4597_, v_i_4585_, v___x_4601_);
v_i_4585_ = v___x_4600_;
v_bs_4586_ = v___x_4602_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__0___boxed(lean_object* v_sz_4604_, lean_object* v_i_4605_, lean_object* v_bs_4606_){
_start:
{
size_t v_sz_boxed_4607_; size_t v_i_boxed_4608_; lean_object* v_res_4609_; 
v_sz_boxed_4607_ = lean_unbox_usize(v_sz_4604_);
lean_dec(v_sz_4604_);
v_i_boxed_4608_ = lean_unbox_usize(v_i_4605_);
lean_dec(v_i_4605_);
v_res_4609_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__0(v_sz_boxed_4607_, v_i_boxed_4608_, v_bs_4606_);
return v_res_4609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1(lean_object* v___x_4616_, size_t v_sz_4617_, size_t v_i_4618_, lean_object* v_bs_4619_){
_start:
{
uint8_t v___x_4620_; 
v___x_4620_ = lean_usize_dec_lt(v_i_4618_, v_sz_4617_);
if (v___x_4620_ == 0)
{
lean_object* v___x_4621_; 
lean_dec(v___x_4616_);
v___x_4621_ = l_unsafeCast___redArg(v_bs_4619_);
lean_dec_ref(v_bs_4619_);
return v___x_4621_;
}
else
{
lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v_v_4625_; lean_object* v___x_4626_; lean_object* v_bs_x27_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; size_t v___x_4648_; size_t v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; 
v___x_4622_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8));
v___x_4623_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_4624_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6));
v_v_4625_ = lean_array_uget(v_bs_4619_, v_i_4618_);
v___x_4626_ = lean_unsigned_to_nat(0u);
v_bs_x27_4627_ = lean_array_uset(v_bs_4619_, v_i_4618_, v___x_4626_);
v___x_4628_ = l_unsafeCast___redArg(v_v_4625_);
lean_dec(v_v_4625_);
v___x_4629_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__38));
v___x_4630_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__41));
lean_inc_n(v___x_4616_, 11);
v___x_4631_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4631_, 0, v___x_4616_);
lean_ctor_set(v___x_4631_, 1, v___x_4630_);
v___x_4632_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__15));
v___x_4633_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
v___x_4634_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4616_);
lean_ctor_set(v___x_4634_, 1, v___x_4633_);
v___x_4635_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_4636_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4616_);
lean_ctor_set(v___x_4636_, 1, v___x_4635_);
v___x_4637_ = l_Lean_Syntax_node3(v___x_4616_, v___x_4632_, v___x_4634_, v___x_4628_, v___x_4636_);
v___x_4638_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__tacticFunext________1___closed__8));
v___x_4639_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4639_, 0, v___x_4616_);
lean_ctor_set(v___x_4639_, 1, v___x_4638_);
v___x_4640_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__0));
v___x_4641_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___closed__1));
v___x_4642_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4642_, 0, v___x_4616_);
lean_ctor_set(v___x_4642_, 1, v___x_4640_);
v___x_4643_ = l_Lean_Syntax_node1(v___x_4616_, v___x_4641_, v___x_4642_);
v___x_4644_ = l_Lean_Syntax_node3(v___x_4616_, v___x_4623_, v___x_4637_, v___x_4639_, v___x_4643_);
v___x_4645_ = l_Lean_Syntax_node1(v___x_4616_, v___x_4622_, v___x_4644_);
v___x_4646_ = l_Lean_Syntax_node1(v___x_4616_, v___x_4624_, v___x_4645_);
v___x_4647_ = l_Lean_Syntax_node2(v___x_4616_, v___x_4629_, v___x_4631_, v___x_4646_);
v___x_4648_ = ((size_t)1ULL);
v___x_4649_ = lean_usize_add(v_i_4618_, v___x_4648_);
v___x_4650_ = l_unsafeCast___redArg(v___x_4647_);
lean_dec(v___x_4647_);
v___x_4651_ = lean_array_uset(v_bs_x27_4627_, v_i_4618_, v___x_4650_);
v_i_4618_ = v___x_4649_;
v_bs_4619_ = v___x_4651_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1___boxed(lean_object* v___x_4653_, lean_object* v_sz_4654_, lean_object* v_i_4655_, lean_object* v_bs_4656_){
_start:
{
size_t v_sz_boxed_4657_; size_t v_i_boxed_4658_; lean_object* v_res_4659_; 
v_sz_boxed_4657_ = lean_unbox_usize(v_sz_4654_);
lean_dec(v_sz_4654_);
v_i_boxed_4658_ = lean_unbox_usize(v_i_4655_);
lean_dec(v_i_4655_);
v_res_4659_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1(v___x_4653_, v_sz_boxed_4657_, v_i_boxed_4658_, v_bs_4656_);
return v_res_4659_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1(lean_object* v_x_4672_, lean_object* v_a_4673_, lean_object* v_a_4674_){
_start:
{
lean_object* v___x_4675_; uint8_t v___x_4676_; 
v___x_4675_ = ((lean_object*)(l_Lean_solveTactic___closed__1));
lean_inc(v_x_4672_);
v___x_4676_ = l_Lean_Syntax_isOfKind(v_x_4672_, v___x_4675_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4677_; lean_object* v___x_4678_; 
lean_dec(v_x_4672_);
v___x_4677_ = lean_box(1);
v___x_4678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4678_, 0, v___x_4677_);
lean_ctor_set(v___x_4678_, 1, v_a_4674_);
return v___x_4678_;
}
else
{
lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; size_t v_sz_4682_; size_t v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4679_ = lean_unsigned_to_nat(1u);
v___x_4680_ = l_Lean_Syntax_getArg(v_x_4672_, v___x_4679_);
lean_dec(v_x_4672_);
v___x_4681_ = l_Lean_Syntax_getArgs(v___x_4680_);
lean_dec(v___x_4680_);
v_sz_4682_ = lean_array_size(v___x_4681_);
v___x_4683_ = ((size_t)0ULL);
v___x_4684_ = l_unsafeCast___redArg(v___x_4681_);
lean_dec_ref(v___x_4681_);
v___x_4685_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__0(v_sz_4682_, v___x_4683_, v___x_4684_);
v___x_4686_ = l_unsafeCast___redArg(v___x_4685_);
lean_dec(v___x_4685_);
if (lean_obj_tag(v___x_4686_) == 0)
{
lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4687_ = lean_box(1);
v___x_4688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4688_, 0, v___x_4687_);
lean_ctor_set(v___x_4688_, 1, v_a_4674_);
return v___x_4688_;
}
else
{
lean_object* v_val_4689_; lean_object* v_ref_4690_; uint8_t v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; size_t v_sz_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; 
v_val_4689_ = lean_ctor_get(v___x_4686_, 0);
lean_inc(v_val_4689_);
lean_dec_ref_known(v___x_4686_, 1);
v_ref_4690_ = lean_ctor_get(v_a_4673_, 5);
v___x_4691_ = 0;
v___x_4692_ = l_Lean_SourceInfo_fromRef(v_ref_4690_, v___x_4691_);
v___x_4693_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__0));
v___x_4694_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__1));
lean_inc_n(v___x_4692_, 8);
v___x_4695_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4695_, 0, v___x_4692_);
lean_ctor_set(v___x_4695_, 1, v___x_4693_);
v___x_4696_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__6));
v___x_4697_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__convCalc____1___closed__8));
v___x_4698_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_4699_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__2));
v___x_4700_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___closed__3));
v___x_4701_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4701_, 0, v___x_4692_);
lean_ctor_set(v___x_4701_, 1, v___x_4699_);
v___x_4702_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v_sz_4703_ = lean_array_size(v_val_4689_);
v___x_4704_ = l_unsafeCast___redArg(v_val_4689_);
lean_dec(v_val_4689_);
v___x_4705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1_spec__1(v___x_4692_, v_sz_4703_, v___x_4683_, v___x_4704_);
v___x_4706_ = l_unsafeCast___redArg(v___x_4705_);
lean_dec_ref(v___x_4705_);
v___x_4707_ = l_Array_append___redArg(v___x_4702_, v___x_4706_);
lean_dec(v___x_4706_);
v___x_4708_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4708_, 0, v___x_4692_);
lean_ctor_set(v___x_4708_, 1, v___x_4698_);
lean_ctor_set(v___x_4708_, 2, v___x_4707_);
v___x_4709_ = l_Lean_Syntax_node2(v___x_4692_, v___x_4700_, v___x_4701_, v___x_4708_);
v___x_4710_ = l_Lean_Syntax_node1(v___x_4692_, v___x_4698_, v___x_4709_);
v___x_4711_ = l_Lean_Syntax_node1(v___x_4692_, v___x_4697_, v___x_4710_);
v___x_4712_ = l_Lean_Syntax_node1(v___x_4692_, v___x_4696_, v___x_4711_);
v___x_4713_ = l_Lean_Syntax_node2(v___x_4692_, v___x_4694_, v___x_4695_, v___x_4712_);
v___x_4714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4713_);
lean_ctor_set(v___x_4714_, 1, v_a_4674_);
return v___x_4714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1___boxed(lean_object* v_x_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_){
_start:
{
lean_object* v_res_4718_; 
v_res_4718_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__solveTactic__1(v_x_4715_, v_a_4716_, v_a_4717_);
lean_dec_ref(v_a_4716_);
return v_res_4718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1_spec__0(lean_object* v___x_4747_, size_t v_sz_4748_, size_t v_i_4749_, lean_object* v_bs_4750_){
_start:
{
uint8_t v___x_4751_; 
v___x_4751_ = lean_usize_dec_lt(v_i_4749_, v_sz_4748_);
if (v___x_4751_ == 0)
{
lean_object* v___x_4752_; 
lean_dec(v___x_4747_);
v___x_4752_ = l_unsafeCast___redArg(v_bs_4750_);
lean_dec_ref(v_bs_4750_);
return v___x_4752_;
}
else
{
lean_object* v___x_4753_; lean_object* v_v_4754_; lean_object* v___x_4755_; lean_object* v_bs_x27_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; size_t v___x_4759_; size_t v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; 
v___x_4753_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v_v_4754_ = lean_array_uget(v_bs_4750_, v_i_4749_);
v___x_4755_ = lean_unsigned_to_nat(0u);
v_bs_x27_4756_ = lean_array_uset(v_bs_4750_, v_i_4749_, v___x_4755_);
v___x_4757_ = l_unsafeCast___redArg(v_v_4754_);
lean_dec(v_v_4754_);
lean_inc(v___x_4747_);
v___x_4758_ = l_Lean_Syntax_node1(v___x_4747_, v___x_4753_, v___x_4757_);
v___x_4759_ = ((size_t)1ULL);
v___x_4760_ = lean_usize_add(v_i_4749_, v___x_4759_);
v___x_4761_ = l_unsafeCast___redArg(v___x_4758_);
lean_dec(v___x_4758_);
v___x_4762_ = lean_array_uset(v_bs_x27_4756_, v_i_4749_, v___x_4761_);
v_i_4749_ = v___x_4760_;
v_bs_4750_ = v___x_4762_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1_spec__0___boxed(lean_object* v___x_4764_, lean_object* v_sz_4765_, lean_object* v_i_4766_, lean_object* v_bs_4767_){
_start:
{
size_t v_sz_boxed_4768_; size_t v_i_boxed_4769_; lean_object* v_res_4770_; 
v_sz_boxed_4768_ = lean_unbox_usize(v_sz_4765_);
lean_dec(v_sz_4765_);
v_i_boxed_4769_ = lean_unbox_usize(v_i_4766_);
lean_dec(v_i_4766_);
v_res_4770_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1_spec__0(v___x_4764_, v_sz_boxed_4768_, v_i_boxed_4769_, v_bs_4767_);
return v_res_4770_;
}
}
static lean_object* _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__11(void){
_start:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4804_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__41));
v___x_4805_ = l_Lean_mkAtom(v___x_4804_);
return v___x_4805_;
}
}
static lean_object* _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__13(void){
_start:
{
lean_object* v___x_4807_; lean_object* v___x_4808_; 
v___x_4807_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__12));
v___x_4808_ = l_String_toRawSubstring_x27(v___x_4807_);
return v___x_4808_;
}
}
static lean_object* _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__20(void){
_start:
{
lean_object* v___x_4822_; lean_object* v___x_4823_; 
v___x_4822_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__19));
v___x_4823_ = l_String_toRawSubstring_x27(v___x_4822_);
return v___x_4823_;
}
}
static lean_object* _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__25(void){
_start:
{
lean_object* v___x_4835_; lean_object* v___x_4836_; 
v___x_4835_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__15));
v___x_4836_ = l_String_toRawSubstring_x27(v___x_4835_);
return v___x_4836_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1(lean_object* v_x_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_){
_start:
{
lean_object* v___x_4853_; uint8_t v___x_4854_; 
v___x_4853_ = ((lean_object*)(l_Lean_term__Matches___x7c___closed__1));
lean_inc(v_x_4850_);
v___x_4854_ = l_Lean_Syntax_isOfKind(v_x_4850_, v___x_4853_);
if (v___x_4854_ == 0)
{
lean_object* v___x_4855_; lean_object* v___x_4856_; 
lean_dec(v_x_4850_);
v___x_4855_ = lean_box(1);
v___x_4856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4856_, 0, v___x_4855_);
lean_ctor_set(v___x_4856_, 1, v_a_4852_);
return v___x_4856_;
}
else
{
lean_object* v_quotContext_4857_; lean_object* v_currMacroScope_4858_; lean_object* v_ref_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v_p_4864_; uint8_t v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; size_t v_sz_4896_; size_t v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; 
v_quotContext_4857_ = lean_ctor_get(v_a_4851_, 1);
v_currMacroScope_4858_ = lean_ctor_get(v_a_4851_, 2);
v_ref_4859_ = lean_ctor_get(v_a_4851_, 5);
v___x_4860_ = lean_unsigned_to_nat(0u);
v___x_4861_ = l_Lean_Syntax_getArg(v_x_4850_, v___x_4860_);
v___x_4862_ = lean_unsigned_to_nat(2u);
v___x_4863_ = l_Lean_Syntax_getArg(v_x_4850_, v___x_4862_);
lean_dec(v_x_4850_);
v_p_4864_ = l_Lean_Syntax_getArgs(v___x_4863_);
lean_dec(v___x_4863_);
v___x_4865_ = 0;
v___x_4866_ = l_Lean_SourceInfo_fromRef(v_ref_4859_, v___x_4865_);
v___x_4867_ = ((lean_object*)(l_unexpandExists___closed__1));
v___x_4868_ = ((lean_object*)(l_unexpandUnit___redArg___closed__5));
v___x_4869_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__2));
lean_inc_n(v___x_4866_, 29);
v___x_4870_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4870_, 0, v___x_4866_);
lean_ctor_set(v___x_4870_, 1, v___x_4869_);
v___x_4871_ = ((lean_object*)(l_unexpandUnit___redArg___closed__7));
v___x_4872_ = lean_obj_once(&l_unexpandUnit___redArg___closed__9, &l_unexpandUnit___redArg___closed__9_once, _init_l_unexpandUnit___redArg___closed__9);
v___x_4873_ = lean_obj_once(&l_unexpandUnit___redArg___closed__10, &l_unexpandUnit___redArg___closed__10_once, _init_l_unexpandUnit___redArg___closed__10);
lean_inc_n(v_currMacroScope_4858_, 4);
lean_inc_n(v_quotContext_4857_, 4);
v___x_4874_ = l_Lean_addMacroScope(v_quotContext_4857_, v___x_4873_, v_currMacroScope_4858_);
v___x_4875_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__0));
v___x_4876_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4876_, 0, v___x_4866_);
lean_ctor_set(v___x_4876_, 1, v___x_4872_);
lean_ctor_set(v___x_4876_, 2, v___x_4874_);
lean_ctor_set(v___x_4876_, 3, v___x_4875_);
v___x_4877_ = l_Lean_Syntax_node1(v___x_4866_, v___x_4871_, v___x_4876_);
v___x_4878_ = l_Lean_Syntax_node2(v___x_4866_, v___x_4868_, v___x_4870_, v___x_4877_);
v___x_4879_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__1));
v___x_4880_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__2));
v___x_4881_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__3));
v___x_4882_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4882_, 0, v___x_4866_);
lean_ctor_set(v___x_4882_, 1, v___x_4880_);
v___x_4883_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_4884_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_4885_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4885_, 0, v___x_4866_);
lean_ctor_set(v___x_4885_, 1, v___x_4883_);
lean_ctor_set(v___x_4885_, 2, v___x_4884_);
v___x_4886_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__5));
lean_inc_ref_n(v___x_4885_, 2);
v___x_4887_ = l_Lean_Syntax_node2(v___x_4866_, v___x_4886_, v___x_4885_, v___x_4861_);
v___x_4888_ = l_Lean_Syntax_node1(v___x_4866_, v___x_4883_, v___x_4887_);
v___x_4889_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__6));
v___x_4890_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4890_, 0, v___x_4866_);
lean_ctor_set(v___x_4890_, 1, v___x_4889_);
v___x_4891_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__8));
v___x_4892_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__10));
v___x_4893_ = ((lean_object*)(l_Lean_command____Unif__hint________Where___x7c___x2d_u22a2_____00__closed__41));
v___x_4894_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4894_, 0, v___x_4866_);
lean_ctor_set(v___x_4894_, 1, v___x_4893_);
v___x_4895_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_p_4864_);
lean_dec_ref(v_p_4864_);
v_sz_4896_ = lean_array_size(v___x_4895_);
v___x_4897_ = ((size_t)0ULL);
v___x_4898_ = l_unsafeCast___redArg(v___x_4895_);
lean_dec_ref(v___x_4895_);
v___x_4899_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1_spec__0(v___x_4866_, v_sz_4896_, v___x_4897_, v___x_4898_);
v___x_4900_ = l_unsafeCast___redArg(v___x_4899_);
lean_dec_ref(v___x_4899_);
v___x_4901_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__11, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__11_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__11);
v___x_4902_ = l_Lean_mkSepArray(v___x_4900_, v___x_4901_);
lean_dec(v___x_4900_);
v___x_4903_ = l_Array_append___redArg(v___x_4884_, v___x_4902_);
lean_dec_ref(v___x_4902_);
v___x_4904_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4904_, 0, v___x_4866_);
lean_ctor_set(v___x_4904_, 1, v___x_4883_);
lean_ctor_set(v___x_4904_, 2, v___x_4903_);
v___x_4905_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__14));
v___x_4906_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4906_, 0, v___x_4866_);
lean_ctor_set(v___x_4906_, 1, v___x_4905_);
v___x_4907_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__13, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__13_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__13);
v___x_4908_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__14));
v___x_4909_ = l_Lean_addMacroScope(v_quotContext_4857_, v___x_4908_, v_currMacroScope_4858_);
v___x_4910_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__18));
v___x_4911_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4911_, 0, v___x_4866_);
lean_ctor_set(v___x_4911_, 1, v___x_4907_);
lean_ctor_set(v___x_4911_, 2, v___x_4909_);
lean_ctor_set(v___x_4911_, 3, v___x_4910_);
lean_inc_ref(v___x_4906_);
lean_inc_ref(v___x_4894_);
v___x_4912_ = l_Lean_Syntax_node4(v___x_4866_, v___x_4892_, v___x_4894_, v___x_4904_, v___x_4906_, v___x_4911_);
v___x_4913_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__11));
v___x_4914_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__12));
v___x_4915_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4915_, 0, v___x_4866_);
lean_ctor_set(v___x_4915_, 1, v___x_4914_);
v___x_4916_ = l_Lean_Syntax_node1(v___x_4866_, v___x_4913_, v___x_4915_);
v___x_4917_ = l_Lean_Syntax_node1(v___x_4866_, v___x_4883_, v___x_4916_);
v___x_4918_ = l_Lean_Syntax_node1(v___x_4866_, v___x_4883_, v___x_4917_);
v___x_4919_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__20, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__20_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__20);
v___x_4920_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__21));
v___x_4921_ = l_Lean_addMacroScope(v_quotContext_4857_, v___x_4920_, v_currMacroScope_4858_);
v___x_4922_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__24));
v___x_4923_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4923_, 0, v___x_4866_);
lean_ctor_set(v___x_4923_, 1, v___x_4919_);
lean_ctor_set(v___x_4923_, 2, v___x_4921_);
lean_ctor_set(v___x_4923_, 3, v___x_4922_);
v___x_4924_ = l_Lean_Syntax_node4(v___x_4866_, v___x_4892_, v___x_4894_, v___x_4918_, v___x_4906_, v___x_4923_);
v___x_4925_ = l_Lean_Syntax_node2(v___x_4866_, v___x_4883_, v___x_4912_, v___x_4924_);
v___x_4926_ = l_Lean_Syntax_node1(v___x_4866_, v___x_4891_, v___x_4925_);
v___x_4927_ = l_Lean_Syntax_node6(v___x_4866_, v___x_4881_, v___x_4882_, v___x_4885_, v___x_4885_, v___x_4888_, v___x_4890_, v___x_4926_);
v___x_4928_ = ((lean_object*)(l_Lean_bracketedExplicitBinders___closed__14));
v___x_4929_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4929_, 0, v___x_4866_);
lean_ctor_set(v___x_4929_, 1, v___x_4928_);
lean_inc_ref(v___x_4929_);
lean_inc(v___x_4878_);
v___x_4930_ = l_Lean_Syntax_node3(v___x_4866_, v___x_4879_, v___x_4878_, v___x_4927_, v___x_4929_);
v___x_4931_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__17));
v___x_4932_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4932_, 0, v___x_4866_);
lean_ctor_set(v___x_4932_, 1, v___x_4931_);
v___x_4933_ = lean_obj_once(&l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__25, &l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__25_once, _init_l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__25);
v___x_4934_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__26));
v___x_4935_ = l_Lean_addMacroScope(v_quotContext_4857_, v___x_4934_, v_currMacroScope_4858_);
v___x_4936_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___closed__30));
v___x_4937_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4937_, 0, v___x_4866_);
lean_ctor_set(v___x_4937_, 1, v___x_4933_);
lean_ctor_set(v___x_4937_, 2, v___x_4935_);
lean_ctor_set(v___x_4937_, 3, v___x_4936_);
v___x_4938_ = l_Lean_Syntax_node1(v___x_4866_, v___x_4883_, v___x_4937_);
v___x_4939_ = l_Lean_Syntax_node5(v___x_4866_, v___x_4867_, v___x_4878_, v___x_4930_, v___x_4932_, v___x_4938_, v___x_4929_);
v___x_4940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4940_, 0, v___x_4939_);
lean_ctor_set(v___x_4940_, 1, v_a_4852_);
return v___x_4940_;
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1___boxed(lean_object* v_x_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_){
_start:
{
lean_object* v_res_4944_; 
v_res_4944_ = l_Lean___aux__Init__NotationExtra______macroRules__Lean__term__Matches___x7c__1(v_x_4941_, v_a_4942_, v_a_4943_);
lean_dec_ref(v_a_4942_);
return v_res_4944_;
}
}
static lean_object* _init_l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__1(void){
_start:
{
lean_object* v___x_4974_; lean_object* v___x_4975_; 
v___x_4974_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__0));
v___x_4975_ = l_String_toRawSubstring_x27(v___x_4974_);
return v___x_4975_;
}
}
static lean_object* _init_l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__8(void){
_start:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; 
v___x_4989_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__7));
v___x_4990_ = l_String_toRawSubstring_x27(v___x_4989_);
return v___x_4990_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1(lean_object* v_x_5003_, lean_object* v_a_5004_, lean_object* v_a_5005_){
_start:
{
lean_object* v___x_5006_; uint8_t v___x_5007_; 
v___x_5006_ = ((lean_object*)(l_term_x7b___x7d___closed__1));
lean_inc(v_x_5003_);
v___x_5007_ = l_Lean_Syntax_isOfKind(v_x_5003_, v___x_5006_);
if (v___x_5007_ == 0)
{
lean_object* v___x_5008_; lean_object* v___x_5009_; 
lean_dec(v_x_5003_);
v___x_5008_ = lean_box(1);
v___x_5009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5009_, 0, v___x_5008_);
lean_ctor_set(v___x_5009_, 1, v_a_5005_);
return v___x_5009_;
}
else
{
lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; uint8_t v___x_5013_; 
v___x_5010_ = lean_unsigned_to_nat(0u);
v___x_5011_ = lean_unsigned_to_nat(1u);
v___x_5012_ = l_Lean_Syntax_getArg(v_x_5003_, v___x_5011_);
lean_dec(v_x_5003_);
lean_inc(v___x_5012_);
v___x_5013_ = l_Lean_Syntax_matchesNull(v___x_5012_, v___x_5011_);
if (v___x_5013_ == 0)
{
lean_object* v___x_5014_; lean_object* v___x_5015_; uint8_t v___x_5016_; 
v___x_5014_ = lean_unsigned_to_nat(2u);
v___x_5015_ = l_Lean_Syntax_getNumArgs(v___x_5012_);
v___x_5016_ = lean_nat_dec_le(v___x_5014_, v___x_5015_);
if (v___x_5016_ == 0)
{
lean_object* v___x_5017_; lean_object* v___x_5018_; 
lean_dec(v___x_5015_);
lean_dec(v___x_5012_);
v___x_5017_ = lean_box(1);
v___x_5018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5018_, 0, v___x_5017_);
lean_ctor_set(v___x_5018_, 1, v_a_5005_);
return v___x_5018_;
}
else
{
lean_object* v_quotContext_5019_; lean_object* v_currMacroScope_5020_; lean_object* v_ref_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; 
v_quotContext_5019_ = lean_ctor_get(v_a_5004_, 1);
v_currMacroScope_5020_ = lean_ctor_get(v_a_5004_, 2);
v_ref_5021_ = lean_ctor_get(v_a_5004_, 5);
v___x_5022_ = l_Lean_Syntax_getArg(v___x_5012_, v___x_5010_);
v___x_5023_ = l_Lean_Syntax_getArgs(v___x_5012_);
lean_dec(v___x_5012_);
v___x_5024_ = l_Array_extract___redArg(v___x_5023_, v___x_5014_, v___x_5015_);
lean_dec_ref(v___x_5023_);
v___x_5025_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_5026_ = lean_box(2);
v___x_5027_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5027_, 0, v___x_5026_);
lean_ctor_set(v___x_5027_, 1, v___x_5025_);
lean_ctor_set(v___x_5027_, 2, v___x_5024_);
v___x_5028_ = l_Lean_Syntax_getArgs(v___x_5027_);
lean_dec_ref_known(v___x_5027_, 3);
v___x_5029_ = l_Lean_SourceInfo_fromRef(v_ref_5021_, v___x_5013_);
v___x_5030_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
v___x_5031_ = lean_obj_once(&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__1, &l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__1_once, _init_l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__1);
v___x_5032_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__2));
lean_inc(v_currMacroScope_5020_);
lean_inc(v_quotContext_5019_);
v___x_5033_ = l_Lean_addMacroScope(v_quotContext_5019_, v___x_5032_, v_currMacroScope_5020_);
v___x_5034_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__6));
lean_inc_n(v___x_5029_, 6);
v___x_5035_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5035_, 0, v___x_5029_);
lean_ctor_set(v___x_5035_, 1, v___x_5031_);
lean_ctor_set(v___x_5035_, 2, v___x_5033_);
lean_ctor_set(v___x_5035_, 3, v___x_5034_);
v___x_5036_ = ((lean_object*)(l_unexpandSubtype___closed__2));
v___x_5037_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5037_, 0, v___x_5029_);
lean_ctor_set(v___x_5037_, 1, v___x_5036_);
v___x_5038_ = lean_obj_once(&l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13, &l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13_once, _init_l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__13);
v___x_5039_ = l_Array_append___redArg(v___x_5038_, v___x_5028_);
lean_dec_ref(v___x_5028_);
v___x_5040_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5040_, 0, v___x_5029_);
lean_ctor_set(v___x_5040_, 1, v___x_5025_);
lean_ctor_set(v___x_5040_, 2, v___x_5039_);
v___x_5041_ = ((lean_object*)(l_unexpandSubtype___closed__4));
v___x_5042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5042_, 0, v___x_5029_);
lean_ctor_set(v___x_5042_, 1, v___x_5041_);
v___x_5043_ = l_Lean_Syntax_node3(v___x_5029_, v___x_5006_, v___x_5037_, v___x_5040_, v___x_5042_);
v___x_5044_ = l_Lean_Syntax_node2(v___x_5029_, v___x_5025_, v___x_5022_, v___x_5043_);
v___x_5045_ = l_Lean_Syntax_node2(v___x_5029_, v___x_5030_, v___x_5035_, v___x_5044_);
v___x_5046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5046_, 0, v___x_5045_);
lean_ctor_set(v___x_5046_, 1, v_a_5005_);
return v___x_5046_;
}
}
else
{
lean_object* v_quotContext_5047_; lean_object* v_currMacroScope_5048_; lean_object* v_ref_5049_; lean_object* v___x_5050_; uint8_t v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; 
v_quotContext_5047_ = lean_ctor_get(v_a_5004_, 1);
v_currMacroScope_5048_ = lean_ctor_get(v_a_5004_, 2);
v_ref_5049_ = lean_ctor_get(v_a_5004_, 5);
v___x_5050_ = l_Lean_Syntax_getArg(v___x_5012_, v___x_5010_);
lean_dec(v___x_5012_);
v___x_5051_ = 0;
v___x_5052_ = l_Lean_SourceInfo_fromRef(v_ref_5049_, v___x_5051_);
v___x_5053_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
v___x_5054_ = lean_obj_once(&l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__8, &l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__8_once, _init_l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__8);
v___x_5055_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__9));
lean_inc(v_currMacroScope_5048_);
lean_inc(v_quotContext_5047_);
v___x_5056_ = l_Lean_addMacroScope(v_quotContext_5047_, v___x_5055_, v_currMacroScope_5048_);
v___x_5057_ = ((lean_object*)(l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___closed__13));
lean_inc_n(v___x_5052_, 2);
v___x_5058_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5058_, 0, v___x_5052_);
lean_ctor_set(v___x_5058_, 1, v___x_5054_);
lean_ctor_set(v___x_5058_, 2, v___x_5056_);
lean_ctor_set(v___x_5058_, 3, v___x_5057_);
v___x_5059_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_5060_ = l_Lean_Syntax_node1(v___x_5052_, v___x_5059_, v___x_5050_);
v___x_5061_ = l_Lean_Syntax_node2(v___x_5052_, v___x_5053_, v___x_5058_, v___x_5060_);
v___x_5062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5062_, 0, v___x_5061_);
lean_ctor_set(v___x_5062_, 1, v_a_5005_);
return v___x_5062_;
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1___boxed(lean_object* v_x_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_){
_start:
{
lean_object* v_res_5066_; 
v_res_5066_ = l___aux__Init__NotationExtra______macroRules__term_x7b___x7d__1(v_x_5063_, v_a_5064_, v_a_5065_);
lean_dec_ref(v_a_5064_);
return v_res_5066_;
}
}
LEAN_EXPORT lean_object* l_Lean_singletonUnexpander(lean_object* v_x_5067_, lean_object* v_a_5068_, lean_object* v_a_5069_){
_start:
{
lean_object* v___x_5070_; uint8_t v___x_5071_; 
v___x_5070_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_5067_);
v___x_5071_ = l_Lean_Syntax_isOfKind(v_x_5067_, v___x_5070_);
if (v___x_5071_ == 0)
{
lean_object* v___x_5072_; lean_object* v___x_5073_; 
lean_dec(v_x_5067_);
v___x_5072_ = lean_box(0);
v___x_5073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5073_, 0, v___x_5072_);
lean_ctor_set(v___x_5073_, 1, v_a_5069_);
return v___x_5073_;
}
else
{
lean_object* v___x_5074_; lean_object* v___x_5075_; uint8_t v___x_5076_; 
v___x_5074_ = lean_unsigned_to_nat(1u);
v___x_5075_ = l_Lean_Syntax_getArg(v_x_5067_, v___x_5074_);
lean_dec(v_x_5067_);
lean_inc(v___x_5075_);
v___x_5076_ = l_Lean_Syntax_matchesNull(v___x_5075_, v___x_5074_);
if (v___x_5076_ == 0)
{
lean_object* v___x_5077_; lean_object* v___x_5078_; 
lean_dec(v___x_5075_);
v___x_5077_ = lean_box(0);
v___x_5078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5078_, 0, v___x_5077_);
lean_ctor_set(v___x_5078_, 1, v_a_5069_);
return v___x_5078_;
}
else
{
lean_object* v___x_5079_; lean_object* v___x_5080_; uint8_t v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; 
v___x_5079_ = lean_unsigned_to_nat(0u);
v___x_5080_ = l_Lean_Syntax_getArg(v___x_5075_, v___x_5079_);
lean_dec(v___x_5075_);
v___x_5081_ = 0;
v___x_5082_ = l_Lean_SourceInfo_fromRef(v_a_5068_, v___x_5081_);
v___x_5083_ = ((lean_object*)(l_term_x7b___x7d___closed__1));
v___x_5084_ = ((lean_object*)(l_unexpandSubtype___closed__2));
lean_inc_n(v___x_5082_, 3);
v___x_5085_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5085_, 0, v___x_5082_);
lean_ctor_set(v___x_5085_, 1, v___x_5084_);
v___x_5086_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_5087_ = l_Lean_Syntax_node1(v___x_5082_, v___x_5086_, v___x_5080_);
v___x_5088_ = ((lean_object*)(l_unexpandSubtype___closed__4));
v___x_5089_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5089_, 0, v___x_5082_);
lean_ctor_set(v___x_5089_, 1, v___x_5088_);
v___x_5090_ = l_Lean_Syntax_node3(v___x_5082_, v___x_5083_, v___x_5085_, v___x_5087_, v___x_5089_);
v___x_5091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5091_, 0, v___x_5090_);
lean_ctor_set(v___x_5091_, 1, v_a_5069_);
return v___x_5091_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_singletonUnexpander___boxed(lean_object* v_x_5092_, lean_object* v_a_5093_, lean_object* v_a_5094_){
_start:
{
lean_object* v_res_5095_; 
v_res_5095_ = l_Lean_singletonUnexpander(v_x_5092_, v_a_5093_, v_a_5094_);
lean_dec(v_a_5093_);
return v_res_5095_;
}
}
LEAN_EXPORT lean_object* l_Lean_insertUnexpander(lean_object* v_x_5096_, lean_object* v_a_5097_, lean_object* v_a_5098_){
_start:
{
lean_object* v___x_5099_; uint8_t v___x_5100_; 
v___x_5099_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__3));
lean_inc(v_x_5096_);
v___x_5100_ = l_Lean_Syntax_isOfKind(v_x_5096_, v___x_5099_);
if (v___x_5100_ == 0)
{
lean_object* v___x_5101_; lean_object* v___x_5102_; 
lean_dec(v_x_5096_);
v___x_5101_ = lean_box(0);
v___x_5102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5102_, 0, v___x_5101_);
lean_ctor_set(v___x_5102_, 1, v_a_5098_);
return v___x_5102_;
}
else
{
lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; uint8_t v___x_5106_; 
v___x_5103_ = lean_unsigned_to_nat(1u);
v___x_5104_ = l_Lean_Syntax_getArg(v_x_5096_, v___x_5103_);
lean_dec(v_x_5096_);
v___x_5105_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_5104_);
v___x_5106_ = l_Lean_Syntax_matchesNull(v___x_5104_, v___x_5105_);
if (v___x_5106_ == 0)
{
lean_object* v___x_5107_; lean_object* v___x_5108_; 
lean_dec(v___x_5104_);
v___x_5107_ = lean_box(0);
v___x_5108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5108_, 0, v___x_5107_);
lean_ctor_set(v___x_5108_, 1, v_a_5098_);
return v___x_5108_;
}
else
{
lean_object* v___x_5109_; lean_object* v___x_5110_; uint8_t v___x_5111_; 
v___x_5109_ = l_Lean_Syntax_getArg(v___x_5104_, v___x_5103_);
v___x_5110_ = ((lean_object*)(l_term_x7b___x7d___closed__1));
lean_inc(v___x_5109_);
v___x_5111_ = l_Lean_Syntax_isOfKind(v___x_5109_, v___x_5110_);
if (v___x_5111_ == 0)
{
lean_object* v___x_5112_; lean_object* v___x_5113_; 
lean_dec(v___x_5109_);
lean_dec(v___x_5104_);
v___x_5112_ = lean_box(0);
v___x_5113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5113_, 0, v___x_5112_);
lean_ctor_set(v___x_5113_, 1, v_a_5098_);
return v___x_5113_;
}
else
{
lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; uint8_t v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; 
v___x_5114_ = lean_unsigned_to_nat(0u);
v___x_5115_ = l_Lean_Syntax_getArg(v___x_5104_, v___x_5114_);
lean_dec(v___x_5104_);
v___x_5116_ = l_Lean_Syntax_getArg(v___x_5109_, v___x_5103_);
lean_dec(v___x_5109_);
v___x_5117_ = ((lean_object*)(l_Lean___aux__Init__NotationExtra______macroRules__Lean__command____Unif__hint________Where___x7c___x2d_u22a2______1___closed__17));
v___x_5118_ = l_Lean_Syntax_getArgs(v___x_5116_);
lean_dec(v___x_5116_);
v___x_5119_ = 0;
v___x_5120_ = l_Lean_SourceInfo_fromRef(v_a_5097_, v___x_5119_);
v___x_5121_ = ((lean_object*)(l_unexpandSubtype___closed__2));
lean_inc_n(v___x_5120_, 4);
v___x_5122_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5122_, 0, v___x_5120_);
lean_ctor_set(v___x_5122_, 1, v___x_5121_);
v___x_5123_ = ((lean_object*)(l___private_Init_NotationExtra_0__Lean_expandExplicitBindersAux_loop___redArg___closed__5));
v___x_5124_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5124_, 0, v___x_5120_);
lean_ctor_set(v___x_5124_, 1, v___x_5117_);
v___x_5125_ = l_Array_mkArray2___redArg(v___x_5115_, v___x_5124_);
v___x_5126_ = l_Array_append___redArg(v___x_5125_, v___x_5118_);
lean_dec_ref(v___x_5118_);
v___x_5127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5127_, 0, v___x_5120_);
lean_ctor_set(v___x_5127_, 1, v___x_5123_);
lean_ctor_set(v___x_5127_, 2, v___x_5126_);
v___x_5128_ = ((lean_object*)(l_unexpandSubtype___closed__4));
v___x_5129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5129_, 0, v___x_5120_);
lean_ctor_set(v___x_5129_, 1, v___x_5128_);
v___x_5130_ = l_Lean_Syntax_node3(v___x_5120_, v___x_5110_, v___x_5122_, v___x_5127_, v___x_5129_);
v___x_5131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5131_, 0, v___x_5130_);
lean_ctor_set(v___x_5131_, 1, v_a_5098_);
return v___x_5131_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_insertUnexpander___boxed(lean_object* v_x_5132_, lean_object* v_a_5133_, lean_object* v_a_5134_){
_start:
{
lean_object* v_res_5135_; 
v_res_5135_ = l_Lean_insertUnexpander(v_x_5132_, v_a_5133_, v_a_5134_);
lean_dec(v_a_5133_);
return v_res_5135_;
}
}
lean_object* runtime_initialize_Init_Conv(uint8_t builtin);
lean_object* runtime_initialize_Init_GetElem(uint8_t builtin);
lean_object* runtime_initialize_Init_Meta_Defs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_NotationExtra(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Conv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_NotationExtra(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_unbracketedExplicitBinders = _init_l_Lean_unbracketedExplicitBinders();
lean_mark_persistent(l_Lean_unbracketedExplicitBinders);
l_Lean_bracketedExplicitBinders = _init_l_Lean_bracketedExplicitBinders();
lean_mark_persistent(l_Lean_bracketedExplicitBinders);
l_Lean_explicitBinders = _init_l_Lean_explicitBinders();
lean_mark_persistent(l_Lean_explicitBinders);
l_term_u2203___x2c__ = _init_l_term_u2203___x2c__();
lean_mark_persistent(l_term_u2203___x2c__);
l_termExists___x2c__ = _init_l_termExists___x2c__();
lean_mark_persistent(l_termExists___x2c__);
l_term_u03a3___x2c__ = _init_l_term_u03a3___x2c__();
lean_mark_persistent(l_term_u03a3___x2c__);
l_term_u03a3_x27___x2c__ = _init_l_term_u03a3_x27___x2c__();
lean_mark_persistent(l_term_u03a3_x27___x2c__);
l_term___xd7____1 = _init_l_term___xd7____1();
lean_mark_persistent(l_term___xd7____1);
l_term___xd7_x27____1 = _init_l_term___xd7_x27____1();
lean_mark_persistent(l_term___xd7_x27____1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Conv(uint8_t builtin);
lean_object* initialize_Init_GetElem(uint8_t builtin);
lean_object* initialize_Init_Meta_Defs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_NotationExtra(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Conv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_NotationExtra(builtin);
}
#ifdef __cplusplus
}
#endif

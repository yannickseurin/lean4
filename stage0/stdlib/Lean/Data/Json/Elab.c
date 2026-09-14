// Lean compiler output
// Module: Lean.Data.Json.Elab
// Imports: public import Lean.Data.Json.FromToJson public meta import Lean.Syntax
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
static const lean_string_object l_Lean_Json_json_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Json_json_quot___closed__0 = (const lean_object*)&l_Lean_Json_json_quot___closed__0_value;
static const lean_string_object l_Lean_Json_json_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Json_json_quot___closed__1 = (const lean_object*)&l_Lean_Json_json_quot___closed__1_value;
static const lean_string_object l_Lean_Json_json_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Json_json_quot___closed__2 = (const lean_object*)&l_Lean_Json_json_quot___closed__2_value;
static const lean_string_object l_Lean_Json_json_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Json_json_quot___closed__3 = (const lean_object*)&l_Lean_Json_json_quot___closed__3_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_json_quot___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__4_value_aux_0),((lean_object*)&l_Lean_Json_json_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Json_json_quot___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__4_value_aux_1),((lean_object*)&l_Lean_Json_json_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Json_json_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__4_value_aux_2),((lean_object*)&l_Lean_Json_json_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(145, 163, 173, 41, 168, 168, 65, 81)}};
static const lean_object* l_Lean_Json_json_quot___closed__4 = (const lean_object*)&l_Lean_Json_json_quot___closed__4_value;
static const lean_string_object l_Lean_Json_json_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "json"};
static const lean_object* l_Lean_Json_json_quot___closed__5 = (const lean_object*)&l_Lean_Json_json_quot___closed__5_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__5_value),LEAN_SCALAR_PTR_LITERAL(69, 242, 190, 241, 110, 39, 195, 20)}};
static const lean_ctor_object l_Lean_Json_json_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__6_value_aux_0),((lean_object*)&l_Lean_Json_json_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 235, 101, 110, 98, 158, 24, 121)}};
static const lean_object* l_Lean_Json_json_quot___closed__6 = (const lean_object*)&l_Lean_Json_json_quot___closed__6_value;
static const lean_string_object l_Lean_Json_json_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Json_json_quot___closed__7 = (const lean_object*)&l_Lean_Json_json_quot___closed__7_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__7_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Json_json_quot___closed__8 = (const lean_object*)&l_Lean_Json_json_quot___closed__8_value;
static const lean_string_object l_Lean_Json_json_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "`(json| "};
static const lean_object* l_Lean_Json_json_quot___closed__9 = (const lean_object*)&l_Lean_Json_json_quot___closed__9_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__9_value)}};
static const lean_object* l_Lean_Json_json_quot___closed__10 = (const lean_object*)&l_Lean_Json_json_quot___closed__10_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__5_value),LEAN_SCALAR_PTR_LITERAL(69, 242, 190, 241, 110, 39, 195, 20)}};
static const lean_object* l_Lean_Json_json_quot___closed__11 = (const lean_object*)&l_Lean_Json_json_quot___closed__11_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json_json_quot___closed__12 = (const lean_object*)&l_Lean_Json_json_quot___closed__12_value;
static const lean_string_object l_Lean_Json_json_quot___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Json_json_quot___closed__13 = (const lean_object*)&l_Lean_Json_json_quot___closed__13_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__13_value)}};
static const lean_object* l_Lean_Json_json_quot___closed__14 = (const lean_object*)&l_Lean_Json_json_quot___closed__14_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_json_quot___closed__12_value),((lean_object*)&l_Lean_Json_json_quot___closed__14_value)}};
static const lean_object* l_Lean_Json_json_quot___closed__15 = (const lean_object*)&l_Lean_Json_json_quot___closed__15_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_json_quot___closed__10_value),((lean_object*)&l_Lean_Json_json_quot___closed__15_value)}};
static const lean_object* l_Lean_Json_json_quot___closed__16 = (const lean_object*)&l_Lean_Json_json_quot___closed__16_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__6_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__16_value)}};
static const lean_object* l_Lean_Json_json_quot___closed__17 = (const lean_object*)&l_Lean_Json_json_quot___closed__17_value;
static const lean_ctor_object l_Lean_Json_json_quot___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__17_value)}};
static const lean_object* l_Lean_Json_json_quot___closed__18 = (const lean_object*)&l_Lean_Json_json_quot___closed__18_value;
LEAN_EXPORT const lean_object* l_Lean_Json_json_quot = (const lean_object*)&l_Lean_Json_json_quot___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Category_json;
static const lean_string_object l_Lean_Json_jsonNull___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Json"};
static const lean_object* l_Lean_Json_jsonNull___closed__0 = (const lean_object*)&l_Lean_Json_jsonNull___closed__0_value;
static const lean_string_object l_Lean_Json_jsonNull___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "jsonNull"};
static const lean_object* l_Lean_Json_jsonNull___closed__1 = (const lean_object*)&l_Lean_Json_jsonNull___closed__1_value;
static const lean_ctor_object l_Lean_Json_jsonNull___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_jsonNull___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonNull___closed__2_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_jsonNull___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonNull___closed__2_value_aux_1),((lean_object*)&l_Lean_Json_jsonNull___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 60, 51, 96, 46, 237, 101, 89)}};
static const lean_object* l_Lean_Json_jsonNull___closed__2 = (const lean_object*)&l_Lean_Json_jsonNull___closed__2_value;
static const lean_string_object l_Lean_Json_jsonNull___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Json_jsonNull___closed__3 = (const lean_object*)&l_Lean_Json_jsonNull___closed__3_value;
static const lean_ctor_object l_Lean_Json_jsonNull___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Json_jsonNull___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Json_jsonNull___closed__4 = (const lean_object*)&l_Lean_Json_jsonNull___closed__4_value;
static const lean_ctor_object l_Lean_Json_jsonNull___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_jsonNull___closed__2_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Json_jsonNull___closed__4_value)}};
static const lean_object* l_Lean_Json_jsonNull___closed__5 = (const lean_object*)&l_Lean_Json_jsonNull___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Json_jsonNull = (const lean_object*)&l_Lean_Json_jsonNull___closed__5_value;
static const lean_string_object l_Lean_Json_jsonTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "jsonTrue"};
static const lean_object* l_Lean_Json_jsonTrue___closed__0 = (const lean_object*)&l_Lean_Json_jsonTrue___closed__0_value;
static const lean_ctor_object l_Lean_Json_jsonTrue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_jsonTrue___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonTrue___closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_jsonTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonTrue___closed__1_value_aux_1),((lean_object*)&l_Lean_Json_jsonTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 223, 195, 247, 111, 22, 172, 54)}};
static const lean_object* l_Lean_Json_jsonTrue___closed__1 = (const lean_object*)&l_Lean_Json_jsonTrue___closed__1_value;
static const lean_string_object l_Lean_Json_jsonTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Json_jsonTrue___closed__2 = (const lean_object*)&l_Lean_Json_jsonTrue___closed__2_value;
static const lean_ctor_object l_Lean_Json_jsonTrue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Json_jsonTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Json_jsonTrue___closed__3 = (const lean_object*)&l_Lean_Json_jsonTrue___closed__3_value;
static const lean_ctor_object l_Lean_Json_jsonTrue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_jsonTrue___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Json_jsonTrue___closed__3_value)}};
static const lean_object* l_Lean_Json_jsonTrue___closed__4 = (const lean_object*)&l_Lean_Json_jsonTrue___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Json_jsonTrue = (const lean_object*)&l_Lean_Json_jsonTrue___closed__4_value;
static const lean_string_object l_Lean_Json_jsonFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "jsonFalse"};
static const lean_object* l_Lean_Json_jsonFalse___closed__0 = (const lean_object*)&l_Lean_Json_jsonFalse___closed__0_value;
static const lean_ctor_object l_Lean_Json_jsonFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_jsonFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonFalse___closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_jsonFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonFalse___closed__1_value_aux_1),((lean_object*)&l_Lean_Json_jsonFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 28, 34, 242, 49, 61, 87, 232)}};
static const lean_object* l_Lean_Json_jsonFalse___closed__1 = (const lean_object*)&l_Lean_Json_jsonFalse___closed__1_value;
static const lean_string_object l_Lean_Json_jsonFalse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Json_jsonFalse___closed__2 = (const lean_object*)&l_Lean_Json_jsonFalse___closed__2_value;
static const lean_ctor_object l_Lean_Json_jsonFalse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Json_jsonFalse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Json_jsonFalse___closed__3 = (const lean_object*)&l_Lean_Json_jsonFalse___closed__3_value;
static const lean_ctor_object l_Lean_Json_jsonFalse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_jsonFalse___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Json_jsonFalse___closed__3_value)}};
static const lean_object* l_Lean_Json_jsonFalse___closed__4 = (const lean_object*)&l_Lean_Json_jsonFalse___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Json_jsonFalse = (const lean_object*)&l_Lean_Json_jsonFalse___closed__4_value;
static const lean_string_object l_Lean_Json_json___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "json_"};
static const lean_object* l_Lean_Json_json___00__closed__0 = (const lean_object*)&l_Lean_Json_json___00__closed__0_value;
static const lean_ctor_object l_Lean_Json_json___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_json___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_json___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Json_json___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 121, 188, 241, 213, 216, 202, 40)}};
static const lean_object* l_Lean_Json_json___00__closed__1 = (const lean_object*)&l_Lean_Json_json___00__closed__1_value;
static const lean_string_object l_Lean_Json_json___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Json_json___00__closed__2 = (const lean_object*)&l_Lean_Json_json___00__closed__2_value;
static const lean_ctor_object l_Lean_Json_json___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Json_json___00__closed__3 = (const lean_object*)&l_Lean_Json_json___00__closed__3_value;
static const lean_ctor_object l_Lean_Json_json___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_json___00__closed__3_value)}};
static const lean_object* l_Lean_Json_json___00__closed__4 = (const lean_object*)&l_Lean_Json_json___00__closed__4_value;
static const lean_ctor_object l_Lean_Json_json___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_json___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Json_json___00__closed__4_value)}};
static const lean_object* l_Lean_Json_json___00__closed__5 = (const lean_object*)&l_Lean_Json_json___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Json_json__ = (const lean_object*)&l_Lean_Json_json___00__closed__5_value;
static const lean_string_object l_Lean_Json_json_x2d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "json-_"};
static const lean_object* l_Lean_Json_json_x2d___00__closed__0 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__0_value;
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Json_json_x2d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 118, 11, 235, 35, 246, 227, 21)}};
static const lean_object* l_Lean_Json_json_x2d___00__closed__1 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__1_value;
static const lean_string_object l_Lean_Json_json_x2d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Json_json_x2d___00__closed__2 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__2_value;
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_x2d___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Json_json_x2d___00__closed__3 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__3_value;
static const lean_string_object l_Lean_Json_json_x2d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Json_json_x2d___00__closed__4 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__4_value;
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d___00__closed__4_value)}};
static const lean_object* l_Lean_Json_json_x2d___00__closed__5 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__5_value;
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d___00__closed__3_value),((lean_object*)&l_Lean_Json_json_x2d___00__closed__5_value)}};
static const lean_object* l_Lean_Json_json_x2d___00__closed__6 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__6_value;
static const lean_string_object l_Lean_Json_json_x2d___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Json_json_x2d___00__closed__7 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__7_value;
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_x2d___00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Json_json_x2d___00__closed__8 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__8_value;
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d___00__closed__8_value)}};
static const lean_object* l_Lean_Json_json_x2d___00__closed__9 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__9_value;
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_json_x2d___00__closed__6_value),((lean_object*)&l_Lean_Json_json_x2d___00__closed__9_value)}};
static const lean_object* l_Lean_Json_json_x2d___00__closed__10 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__10_value;
static const lean_ctor_object l_Lean_Json_json_x2d___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Json_json_x2d___00__closed__10_value)}};
static const lean_object* l_Lean_Json_json_x2d___00__closed__11 = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Json_json_x2d__ = (const lean_object*)&l_Lean_Json_json_x2d___00__closed__11_value;
static const lean_string_object l_Lean_Json_json_x2d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "json-__1"};
static const lean_object* l_Lean_Json_json_x2d____1___closed__0 = (const lean_object*)&l_Lean_Json_json_x2d____1___closed__0_value;
static const lean_ctor_object l_Lean_Json_json_x2d____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_json_x2d____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d____1___closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_json_x2d____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d____1___closed__1_value_aux_1),((lean_object*)&l_Lean_Json_json_x2d____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 117, 171, 240, 190, 70, 117, 11)}};
static const lean_object* l_Lean_Json_json_x2d____1___closed__1 = (const lean_object*)&l_Lean_Json_json_x2d____1___closed__1_value;
static const lean_string_object l_Lean_Json_json_x2d____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l_Lean_Json_json_x2d____1___closed__2 = (const lean_object*)&l_Lean_Json_json_x2d____1___closed__2_value;
static const lean_ctor_object l_Lean_Json_json_x2d____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_x2d____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l_Lean_Json_json_x2d____1___closed__3 = (const lean_object*)&l_Lean_Json_json_x2d____1___closed__3_value;
static const lean_ctor_object l_Lean_Json_json_x2d____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d____1___closed__3_value)}};
static const lean_object* l_Lean_Json_json_x2d____1___closed__4 = (const lean_object*)&l_Lean_Json_json_x2d____1___closed__4_value;
static const lean_ctor_object l_Lean_Json_json_x2d____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_json_x2d___00__closed__6_value),((lean_object*)&l_Lean_Json_json_x2d____1___closed__4_value)}};
static const lean_object* l_Lean_Json_json_x2d____1___closed__5 = (const lean_object*)&l_Lean_Json_json_x2d____1___closed__5_value;
static const lean_ctor_object l_Lean_Json_json_x2d____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_json_x2d____1___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Json_json_x2d____1___closed__5_value)}};
static const lean_object* l_Lean_Json_json_x2d____1___closed__6 = (const lean_object*)&l_Lean_Json_json_x2d____1___closed__6_value;
LEAN_EXPORT const lean_object* l_Lean_Json_json_x2d____1 = (const lean_object*)&l_Lean_Json_json_x2d____1___closed__6_value;
static const lean_string_object l_Lean_Json_json_x5b___x5d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "json[_]"};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__0 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__0_value;
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__1_value_aux_1),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 228, 226, 42, 58, 91, 155, 101)}};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__1 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__1_value;
static const lean_string_object l_Lean_Json_json_x5b___x5d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__2 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__2_value;
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__3 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__3_value;
static const lean_string_object l_Lean_Json_json_x5b___x5d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__4 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__4_value;
static const lean_string_object l_Lean_Json_json_x5b___x5d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__5 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__5_value;
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__5_value)}};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__6 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__6_value;
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__12_value),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__4_value),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__6_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__7 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__7_value;
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__3_value),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__7_value)}};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__8 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__8_value;
static const lean_string_object l_Lean_Json_json_x5b___x5d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__9 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__9_value;
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__9_value)}};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__10 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__10_value;
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__8_value),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__10_value)}};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__11 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__11_value;
static const lean_ctor_object l_Lean_Json_json_x5b___x5d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__11_value)}};
static const lean_object* l_Lean_Json_json_x5b___x5d___closed__12 = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__12_value;
LEAN_EXPORT const lean_object* l_Lean_Json_json_x5b___x5d = (const lean_object*)&l_Lean_Json_json_x5b___x5d___closed__12_value;
static const lean_string_object l_Lean_Json_jsonIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "jsonIdent"};
static const lean_object* l_Lean_Json_jsonIdent___closed__0 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__0_value;
static const lean_ctor_object l_Lean_Json_jsonIdent___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_jsonIdent___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonIdent___closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_jsonIdent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonIdent___closed__1_value_aux_1),((lean_object*)&l_Lean_Json_jsonIdent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 130, 95, 3, 148, 30, 174, 174)}};
static const lean_object* l_Lean_Json_jsonIdent___closed__1 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__1_value;
static const lean_string_object l_Lean_Json_jsonIdent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_Json_jsonIdent___closed__2 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__2_value;
static const lean_ctor_object l_Lean_Json_jsonIdent___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_jsonIdent___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_Json_jsonIdent___closed__3 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__3_value;
static const lean_string_object l_Lean_Json_jsonIdent___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Json_jsonIdent___closed__4 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__4_value;
static const lean_ctor_object l_Lean_Json_jsonIdent___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_jsonIdent___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Json_jsonIdent___closed__5 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__5_value;
static const lean_ctor_object l_Lean_Json_jsonIdent___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json_jsonIdent___closed__5_value)}};
static const lean_object* l_Lean_Json_jsonIdent___closed__6 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__6_value;
static const lean_ctor_object l_Lean_Json_jsonIdent___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_jsonIdent___closed__3_value),((lean_object*)&l_Lean_Json_jsonIdent___closed__6_value),((lean_object*)&l_Lean_Json_json___00__closed__4_value)}};
static const lean_object* l_Lean_Json_jsonIdent___closed__7 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__7_value;
static const lean_ctor_object l_Lean_Json_jsonIdent___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_Json_jsonIdent___closed__0_value),((lean_object*)&l_Lean_Json_jsonIdent___closed__1_value),((lean_object*)&l_Lean_Json_jsonIdent___closed__7_value)}};
static const lean_object* l_Lean_Json_jsonIdent___closed__8 = (const lean_object*)&l_Lean_Json_jsonIdent___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Json_jsonIdent = (const lean_object*)&l_Lean_Json_jsonIdent___closed__8_value;
static const lean_string_object l_Lean_Json_jsonField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "jsonField"};
static const lean_object* l_Lean_Json_jsonField___closed__0 = (const lean_object*)&l_Lean_Json_jsonField___closed__0_value;
static const lean_ctor_object l_Lean_Json_jsonField___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_jsonField___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonField___closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_jsonField___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_jsonField___closed__1_value_aux_1),((lean_object*)&l_Lean_Json_jsonField___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 231, 71, 34, 65, 247, 44, 17)}};
static const lean_object* l_Lean_Json_jsonField___closed__1 = (const lean_object*)&l_Lean_Json_jsonField___closed__1_value;
static const lean_string_object l_Lean_Json_jsonField___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Json_jsonField___closed__2 = (const lean_object*)&l_Lean_Json_jsonField___closed__2_value;
static const lean_ctor_object l_Lean_Json_jsonField___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_jsonField___closed__2_value)}};
static const lean_object* l_Lean_Json_jsonField___closed__3 = (const lean_object*)&l_Lean_Json_jsonField___closed__3_value;
static const lean_ctor_object l_Lean_Json_jsonField___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_jsonIdent___closed__8_value),((lean_object*)&l_Lean_Json_jsonField___closed__3_value)}};
static const lean_object* l_Lean_Json_jsonField___closed__4 = (const lean_object*)&l_Lean_Json_jsonField___closed__4_value;
static const lean_ctor_object l_Lean_Json_jsonField___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_jsonField___closed__4_value),((lean_object*)&l_Lean_Json_json_quot___closed__12_value)}};
static const lean_object* l_Lean_Json_jsonField___closed__5 = (const lean_object*)&l_Lean_Json_jsonField___closed__5_value;
static const lean_ctor_object l_Lean_Json_jsonField___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lean_Json_jsonField___closed__0_value),((lean_object*)&l_Lean_Json_jsonField___closed__1_value),((lean_object*)&l_Lean_Json_jsonField___closed__5_value)}};
static const lean_object* l_Lean_Json_jsonField___closed__6 = (const lean_object*)&l_Lean_Json_jsonField___closed__6_value;
LEAN_EXPORT const lean_object* l_Lean_Json_jsonField = (const lean_object*)&l_Lean_Json_jsonField___closed__6_value;
static const lean_string_object l_Lean_Json_json_x7b___x7d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "json{_}"};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__0 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__0_value;
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__1_value_aux_1),((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 3, 125, 168, 133, 55, 242, 236)}};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__1 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__1_value;
static const lean_string_object l_Lean_Json_json_x7b___x7d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__2 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__2_value;
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__3 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__3_value;
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_Lean_Json_jsonField___closed__6_value),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__4_value),((lean_object*)&l_Lean_Json_json_x5b___x5d___closed__6_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__4 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__4_value;
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__3_value),((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__4_value)}};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__5 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__5_value;
static const lean_string_object l_Lean_Json_json_x7b___x7d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__6 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__6_value;
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__6_value)}};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__7 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__7_value;
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__5_value),((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__7_value)}};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__8 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__8_value;
static const lean_ctor_object l_Lean_Json_json_x7b___x7d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Json_json_x7b___x7d___closed__8_value)}};
static const lean_object* l_Lean_Json_json_x7b___x7d___closed__9 = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__9_value;
LEAN_EXPORT const lean_object* l_Lean_Json_json_x7b___x7d = (const lean_object*)&l_Lean_Json_json_x7b___x7d___closed__9_value;
static const lean_string_object l_Lean_Json_termJson_x25___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "termJson%_"};
static const lean_object* l_Lean_Json_termJson_x25___00__closed__0 = (const lean_object*)&l_Lean_Json_termJson_x25___00__closed__0_value;
static const lean_ctor_object l_Lean_Json_termJson_x25___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json_termJson_x25___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_termJson_x25___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json_termJson_x25___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json_termJson_x25___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Json_termJson_x25___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 92, 195, 143, 253, 86, 166, 134)}};
static const lean_object* l_Lean_Json_termJson_x25___00__closed__1 = (const lean_object*)&l_Lean_Json_termJson_x25___00__closed__1_value;
static const lean_string_object l_Lean_Json_termJson_x25___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "json% "};
static const lean_object* l_Lean_Json_termJson_x25___00__closed__2 = (const lean_object*)&l_Lean_Json_termJson_x25___00__closed__2_value;
static const lean_ctor_object l_Lean_Json_termJson_x25___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Json_termJson_x25___00__closed__2_value)}};
static const lean_object* l_Lean_Json_termJson_x25___00__closed__3 = (const lean_object*)&l_Lean_Json_termJson_x25___00__closed__3_value;
static const lean_ctor_object l_Lean_Json_termJson_x25___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Json_json_quot___closed__8_value),((lean_object*)&l_Lean_Json_termJson_x25___00__closed__3_value),((lean_object*)&l_Lean_Json_json_quot___closed__12_value)}};
static const lean_object* l_Lean_Json_termJson_x25___00__closed__4 = (const lean_object*)&l_Lean_Json_termJson_x25___00__closed__4_value;
static const lean_ctor_object l_Lean_Json_termJson_x25___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Json_termJson_x25___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Json_termJson_x25___00__closed__4_value)}};
static const lean_object* l_Lean_Json_termJson_x25___00__closed__5 = (const lean_object*)&l_Lean_Json_termJson_x25___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Json_termJson_x25__ = (const lean_object*)&l_Lean_Json_termJson_x25___00__closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__2(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___redArg(uint8_t, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_jsonNull___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2_value_aux_0),((lean_object*)&l_Lean_Json_json_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2_value_aux_1),((lean_object*)&l_Lean_Json_json_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4_value_aux_0),((lean_object*)&l_Lean_Json_json_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4_value_aux_1),((lean_object*)&l_Lean_Json_json_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__11_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__11_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "json%"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__14_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__7(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__0 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__0_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1_value_aux_0),((lean_object*)&l_Lean_Json_json_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1_value_aux_1),((lean_object*)&l_Lean_Json_json_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1_value_aux_2),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.toJson"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__2 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__2_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toJson"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__4 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__4_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5_value_aux_0),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(209, 114, 104, 195, 28, 89, 81, 203)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ToJson"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__6 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__6_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__7_value_aux_0),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(59, 61, 164, 230, 181, 158, 5, 186)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__7_value_aux_1),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(240, 112, 235, 135, 88, 35, 83, 81)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__7 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__7_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__8 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__8_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.Json.arr"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__10 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__10_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__11;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arr"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__12 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__12_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13_value_aux_1),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(231, 213, 164, 217, 10, 137, 183, 122)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__14 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__14_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__15 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__15_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__16 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__16_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__14_value),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__16_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__17 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__17_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__18 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__18_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__19 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__19_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__20 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__20_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Json.mkObj"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__23 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__23_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__24;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkObj"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__25 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__25_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26_value_aux_1),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(249, 119, 229, 103, 93, 90, 238, 17)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__27 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__27_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__28 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__28_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__29 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__29_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__30 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__30_value;
static const lean_array_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__31 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__31_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.Json.num"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__32 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__32_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34_value_aux_1),((lean_object*)&l_Lean_Json_json_x2d___00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(23, 91, 50, 166, 94, 21, 171, 223)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__35 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__35_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__36 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__36_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__37 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__37_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__35_value),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__37_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__38 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__38_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__39 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__39_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40_value_aux_0),((lean_object*)&l_Lean_Json_json_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40_value_aux_1),((lean_object*)&l_Lean_Json_json_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40_value_aux_2),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__39_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__41 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__41_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "term-_"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__42 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__42_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(77, 127, 37, 42, 155, 196, 209, 131)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__43 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__43_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.Json.str"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__44 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__44_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__45;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46_value_aux_1),((lean_object*)&l_Lean_Json_json___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 69, 190, 82, 239, 242, 166, 242)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__47 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__47_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__48 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__48_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__49 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__49_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__47_value),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__49_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__50 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__50_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Json.bool"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__51 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__51_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bool"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__53 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__53_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54_value_aux_1),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__53_value),LEAN_SCALAR_PTR_LITERAL(184, 44, 107, 247, 27, 17, 33, 5)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__55 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__55_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__56 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__56_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__56_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__57 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__57_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__55_value),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__57_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__58 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__58_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Bool.false"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__59 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__59_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__60;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__61 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__61_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__62_value_aux_0),((lean_object*)&l_Lean_Json_jsonFalse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__62 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__62_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__62_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__63 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__63_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__62_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__64 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__64_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__64_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__65 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__65_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__63_value),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__65_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__66 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__66_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Bool.true"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__67 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__67_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__68;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__69_value_aux_0),((lean_object*)&l_Lean_Json_jsonTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__69 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__69_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__69_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__70 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__70_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__69_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__71 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__71_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__71_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__72 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__72_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__70_value),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__72_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__73 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__73_value;
static const lean_string_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Json.null"};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__74 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__74_value;
static lean_once_cell_t l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__75;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Json_json_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76_value_aux_0),((lean_object*)&l_Lean_Json_jsonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 126, 99, 176, 35, 107, 201, 11)}};
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76_value_aux_1),((lean_object*)&l_Lean_Json_jsonNull___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 110, 18, 94, 218, 154, 70, 134)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__77 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__77_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__78 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__78_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__78_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__79 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__79_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__77_value),((lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__79_value)}};
static const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__80 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__80_value;
static const lean_ctor_object l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___boxed__const__1 = (const lean_object*)&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Parser_Category_json(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_box(0);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__2(uint8_t v___x_275_, size_t v_sz_276_, size_t v_i_277_, lean_object* v_bs_278_){
_start:
{
uint8_t v___x_279_; 
v___x_279_ = lean_usize_dec_lt(v_i_277_, v_sz_276_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = l_unsafeCast___redArg(v_bs_278_);
lean_dec_ref(v_bs_278_);
v___x_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
else
{
lean_object* v_v_282_; lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v_v_282_ = lean_array_uget_borrowed(v_bs_278_, v_i_277_);
v___x_283_ = l_unsafeCast___redArg(v_v_282_);
v___x_284_ = ((lean_object*)(l_Lean_Json_jsonField___closed__1));
lean_inc(v___x_283_);
v___x_285_ = l_Lean_Syntax_isOfKind(v___x_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; 
lean_dec(v___x_283_);
lean_dec_ref(v_bs_278_);
v___x_286_ = lean_box(0);
return v___x_286_;
}
else
{
lean_object* v___x_287_; lean_object* v_bs_x27_288_; lean_object* v_ks_289_; 
v___x_287_ = lean_unsigned_to_nat(0u);
v_bs_x27_288_ = lean_array_uset(v_bs_278_, v_i_277_, v___x_287_);
v_ks_289_ = l_Lean_Syntax_getArg(v___x_283_, v___x_287_);
if (v___x_275_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(l_Lean_Json_jsonIdent___closed__1));
lean_inc(v_ks_289_);
v___x_300_ = l_Lean_Syntax_isOfKind(v_ks_289_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; 
lean_dec(v_ks_289_);
lean_dec_ref(v_bs_x27_288_);
lean_dec(v___x_283_);
v___x_301_ = lean_box(0);
return v___x_301_;
}
else
{
goto v___jp_290_;
}
}
else
{
goto v___jp_290_;
}
v___jp_290_:
{
lean_object* v___x_291_; lean_object* v_vs_292_; lean_object* v___x_293_; size_t v___x_294_; size_t v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_291_ = lean_unsigned_to_nat(2u);
v_vs_292_ = l_Lean_Syntax_getArg(v___x_283_, v___x_291_);
lean_dec(v___x_283_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v_ks_289_);
lean_ctor_set(v___x_293_, 1, v_vs_292_);
v___x_294_ = ((size_t)1ULL);
v___x_295_ = lean_usize_add(v_i_277_, v___x_294_);
v___x_296_ = l_unsafeCast___redArg(v___x_293_);
lean_dec_ref_known(v___x_293_, 2);
v___x_297_ = lean_array_uset(v_bs_x27_288_, v_i_277_, v___x_296_);
v_i_277_ = v___x_295_;
v_bs_278_ = v___x_297_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__2___boxed(lean_object* v___x_302_, lean_object* v_sz_303_, lean_object* v_i_304_, lean_object* v_bs_305_){
_start:
{
uint8_t v___x_32727__boxed_306_; size_t v_sz_boxed_307_; size_t v_i_boxed_308_; lean_object* v_res_309_; 
v___x_32727__boxed_306_ = lean_unbox(v___x_302_);
v_sz_boxed_307_ = lean_unbox_usize(v_sz_303_);
lean_dec(v_sz_303_);
v_i_boxed_308_ = lean_unbox_usize(v_i_304_);
lean_dec(v_i_304_);
v_res_309_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__2(v___x_32727__boxed_306_, v_sz_boxed_307_, v_i_boxed_308_, v_bs_305_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___redArg(uint8_t v___x_310_, size_t v_sz_311_, size_t v_i_312_, lean_object* v_bs_313_, lean_object* v___y_314_){
_start:
{
uint8_t v___x_315_; 
v___x_315_ = lean_usize_dec_lt(v_i_312_, v_sz_311_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = l_unsafeCast___redArg(v_bs_313_);
lean_dec_ref(v_bs_313_);
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
lean_ctor_set(v___x_317_, 1, v___y_314_);
return v___x_317_;
}
else
{
lean_object* v_v_318_; lean_object* v___x_319_; lean_object* v_bs_x27_320_; lean_object* v_a_322_; lean_object* v_a_323_; lean_object* v___y_330_; lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; 
v_v_318_ = lean_array_uget(v_bs_313_, v_i_312_);
v___x_319_ = lean_unsigned_to_nat(0u);
v_bs_x27_320_ = lean_array_uset(v_bs_313_, v_i_312_, v___x_319_);
v___x_342_ = l_unsafeCast___redArg(v_v_318_);
lean_dec(v_v_318_);
v___x_343_ = ((lean_object*)(l_Lean_Json_jsonIdent___closed__1));
lean_inc(v___x_342_);
v___x_344_ = l_Lean_Syntax_isOfKind(v___x_342_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec(v___x_342_);
v___x_345_ = l_Lean_Macro_throwUnsupported___redArg(v___y_314_);
v___y_330_ = v___x_345_;
goto v___jp_329_;
}
else
{
lean_object* v_k_346_; 
v_k_346_ = l_Lean_Syntax_getArg(v___x_342_, v___x_319_);
lean_dec(v___x_342_);
if (v___x_310_ == 0)
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = ((lean_object*)(l_Lean_Json_jsonIdent___closed__5));
lean_inc(v_k_346_);
v___x_353_ = l_Lean_Syntax_isOfKind(v_k_346_, v___x_352_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_354_ = ((lean_object*)(l_Lean_Json_json___00__closed__3));
lean_inc(v_k_346_);
v___x_355_ = l_Lean_Syntax_isOfKind(v_k_346_, v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; 
lean_dec(v_k_346_);
v___x_356_ = l_Lean_Macro_throwUnsupported___redArg(v___y_314_);
v___y_330_ = v___x_356_;
goto v___jp_329_;
}
else
{
v_a_322_ = v_k_346_;
v_a_323_ = v___y_314_;
goto v___jp_321_;
}
}
else
{
goto v___jp_347_;
}
}
else
{
goto v___jp_347_;
}
v___jp_347_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_348_ = l_Lean_TSyntax_getId(v_k_346_);
lean_dec(v_k_346_);
v___x_349_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_348_, v___x_344_);
v___x_350_ = lean_box(2);
v___x_351_ = l_Lean_Syntax_mkStrLit(v___x_349_, v___x_350_);
v_a_322_ = v___x_351_;
v_a_323_ = v___y_314_;
goto v___jp_321_;
}
}
v___jp_321_:
{
size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_add(v_i_312_, v___x_324_);
v___x_326_ = l_unsafeCast___redArg(v_a_322_);
lean_dec(v_a_322_);
v___x_327_ = lean_array_uset(v_bs_x27_320_, v_i_312_, v___x_326_);
v_i_312_ = v___x_325_;
v_bs_313_ = v___x_327_;
v___y_314_ = v_a_323_;
goto _start;
}
v___jp_329_:
{
if (lean_obj_tag(v___y_330_) == 0)
{
lean_object* v_a_331_; lean_object* v_a_332_; 
v_a_331_ = lean_ctor_get(v___y_330_, 0);
lean_inc(v_a_331_);
v_a_332_ = lean_ctor_get(v___y_330_, 1);
lean_inc(v_a_332_);
lean_dec_ref_known(v___y_330_, 2);
v_a_322_ = v_a_331_;
v_a_323_ = v_a_332_;
goto v___jp_321_;
}
else
{
lean_object* v_a_333_; lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_341_; 
lean_dec_ref(v_bs_x27_320_);
v_a_333_ = lean_ctor_get(v___y_330_, 0);
v_a_334_ = lean_ctor_get(v___y_330_, 1);
v_isSharedCheck_341_ = !lean_is_exclusive(v___y_330_);
if (v_isSharedCheck_341_ == 0)
{
v___x_336_ = v___y_330_;
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_inc(v_a_333_);
lean_dec(v___y_330_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_333_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v_a_334_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___redArg___boxed(lean_object* v___x_357_, lean_object* v_sz_358_, lean_object* v_i_359_, lean_object* v_bs_360_, lean_object* v___y_361_){
_start:
{
uint8_t v___x_32785__boxed_362_; size_t v_sz_boxed_363_; size_t v_i_boxed_364_; lean_object* v_res_365_; 
v___x_32785__boxed_362_ = lean_unbox(v___x_357_);
v_sz_boxed_363_ = lean_unbox_usize(v_sz_358_);
lean_dec(v_sz_358_);
v_i_boxed_364_ = lean_unbox_usize(v_i_359_);
lean_dec(v_i_359_);
v_res_365_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___redArg(v___x_32785__boxed_362_, v_sz_boxed_363_, v_i_boxed_364_, v_bs_360_, v___y_361_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4(uint8_t v___x_366_, size_t v_sz_367_, size_t v_i_368_, lean_object* v_bs_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
uint8_t v___x_372_; 
v___x_372_ = lean_usize_dec_lt(v_i_368_, v_sz_367_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = l_unsafeCast___redArg(v_bs_369_);
lean_dec_ref(v_bs_369_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
lean_ctor_set(v___x_374_, 1, v___y_371_);
return v___x_374_;
}
else
{
lean_object* v_v_375_; lean_object* v___x_376_; lean_object* v_bs_x27_377_; lean_object* v_a_379_; lean_object* v_a_380_; lean_object* v___y_387_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v_v_375_ = lean_array_uget(v_bs_369_, v_i_368_);
v___x_376_ = lean_unsigned_to_nat(0u);
v_bs_x27_377_ = lean_array_uset(v_bs_369_, v_i_368_, v___x_376_);
v___x_399_ = l_unsafeCast___redArg(v_v_375_);
lean_dec(v_v_375_);
v___x_400_ = ((lean_object*)(l_Lean_Json_jsonIdent___closed__1));
lean_inc(v___x_399_);
v___x_401_ = l_Lean_Syntax_isOfKind(v___x_399_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
lean_dec(v___x_399_);
v___x_402_ = l_Lean_Macro_throwUnsupported___redArg(v___y_371_);
v___y_387_ = v___x_402_;
goto v___jp_386_;
}
else
{
lean_object* v_k_403_; 
v_k_403_ = l_Lean_Syntax_getArg(v___x_399_, v___x_376_);
lean_dec(v___x_399_);
if (v___x_366_ == 0)
{
lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_409_ = ((lean_object*)(l_Lean_Json_jsonIdent___closed__5));
lean_inc(v_k_403_);
v___x_410_ = l_Lean_Syntax_isOfKind(v_k_403_, v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = ((lean_object*)(l_Lean_Json_json___00__closed__3));
lean_inc(v_k_403_);
v___x_412_ = l_Lean_Syntax_isOfKind(v_k_403_, v___x_411_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; 
lean_dec(v_k_403_);
v___x_413_ = l_Lean_Macro_throwUnsupported___redArg(v___y_371_);
v___y_387_ = v___x_413_;
goto v___jp_386_;
}
else
{
v_a_379_ = v_k_403_;
v_a_380_ = v___y_371_;
goto v___jp_378_;
}
}
else
{
goto v___jp_404_;
}
}
else
{
goto v___jp_404_;
}
v___jp_404_:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_405_ = l_Lean_TSyntax_getId(v_k_403_);
lean_dec(v_k_403_);
v___x_406_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_405_, v___x_401_);
v___x_407_ = lean_box(2);
v___x_408_ = l_Lean_Syntax_mkStrLit(v___x_406_, v___x_407_);
v_a_379_ = v___x_408_;
v_a_380_ = v___y_371_;
goto v___jp_378_;
}
}
v___jp_378_:
{
size_t v___x_381_; size_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_381_ = ((size_t)1ULL);
v___x_382_ = lean_usize_add(v_i_368_, v___x_381_);
v___x_383_ = l_unsafeCast___redArg(v_a_379_);
lean_dec(v_a_379_);
v___x_384_ = lean_array_uset(v_bs_x27_377_, v_i_368_, v___x_383_);
v___x_385_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___redArg(v___x_366_, v_sz_367_, v___x_382_, v___x_384_, v_a_380_);
return v___x_385_;
}
v___jp_386_:
{
if (lean_obj_tag(v___y_387_) == 0)
{
lean_object* v_a_388_; lean_object* v_a_389_; 
v_a_388_ = lean_ctor_get(v___y_387_, 0);
lean_inc(v_a_388_);
v_a_389_ = lean_ctor_get(v___y_387_, 1);
lean_inc(v_a_389_);
lean_dec_ref_known(v___y_387_, 2);
v_a_379_ = v_a_388_;
v_a_380_ = v_a_389_;
goto v___jp_378_;
}
else
{
lean_object* v_a_390_; lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
lean_dec_ref(v_bs_x27_377_);
v_a_390_ = lean_ctor_get(v___y_387_, 0);
v_a_391_ = lean_ctor_get(v___y_387_, 1);
v_isSharedCheck_398_ = !lean_is_exclusive(v___y_387_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___y_387_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_inc(v_a_390_);
lean_dec(v___y_387_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_390_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4___boxed(lean_object* v___x_414_, lean_object* v_sz_415_, lean_object* v_i_416_, lean_object* v_bs_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
uint8_t v___x_32887__boxed_420_; size_t v_sz_boxed_421_; size_t v_i_boxed_422_; lean_object* v_res_423_; 
v___x_32887__boxed_420_ = lean_unbox(v___x_414_);
v_sz_boxed_421_ = lean_unbox_usize(v_sz_415_);
lean_dec(v_sz_415_);
v_i_boxed_422_ = lean_unbox_usize(v_i_416_);
lean_dec(v_i_416_);
v_res_423_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4(v___x_32887__boxed_420_, v_sz_boxed_421_, v_i_boxed_422_, v_bs_417_, v___y_418_, v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__3(size_t v_sz_424_, size_t v_i_425_, lean_object* v_bs_426_){
_start:
{
uint8_t v___x_427_; 
v___x_427_ = lean_usize_dec_lt(v_i_425_, v_sz_424_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
v___x_428_ = l_unsafeCast___redArg(v_bs_426_);
lean_dec_ref(v_bs_426_);
return v___x_428_;
}
else
{
lean_object* v_v_429_; lean_object* v___x_430_; lean_object* v_fst_431_; lean_object* v___x_432_; lean_object* v_bs_x27_433_; size_t v___x_434_; size_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v_v_429_ = lean_array_uget_borrowed(v_bs_426_, v_i_425_);
v___x_430_ = l_unsafeCast___redArg(v_v_429_);
v_fst_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_fst_431_);
lean_dec(v___x_430_);
v___x_432_ = lean_unsigned_to_nat(0u);
v_bs_x27_433_ = lean_array_uset(v_bs_426_, v_i_425_, v___x_432_);
v___x_434_ = ((size_t)1ULL);
v___x_435_ = lean_usize_add(v_i_425_, v___x_434_);
v___x_436_ = l_unsafeCast___redArg(v_fst_431_);
lean_dec(v_fst_431_);
v___x_437_ = lean_array_uset(v_bs_x27_433_, v_i_425_, v___x_436_);
v_i_425_ = v___x_435_;
v_bs_426_ = v___x_437_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__3___boxed(lean_object* v_sz_439_, lean_object* v_i_440_, lean_object* v_bs_441_){
_start:
{
size_t v_sz_boxed_442_; size_t v_i_boxed_443_; lean_object* v_res_444_; 
v_sz_boxed_442_ = lean_unbox_usize(v_sz_439_);
lean_dec(v_sz_439_);
v_i_boxed_443_ = lean_unbox_usize(v_i_440_);
lean_dec(v_i_440_);
v_res_444_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__3(v_sz_boxed_442_, v_i_boxed_443_, v_bs_441_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__5(size_t v_sz_445_, size_t v_i_446_, lean_object* v_bs_447_){
_start:
{
uint8_t v___x_448_; 
v___x_448_ = lean_usize_dec_lt(v_i_446_, v_sz_445_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; 
v___x_449_ = l_unsafeCast___redArg(v_bs_447_);
lean_dec_ref(v_bs_447_);
return v___x_449_;
}
else
{
lean_object* v_v_450_; lean_object* v___x_451_; lean_object* v_snd_452_; lean_object* v___x_453_; lean_object* v_bs_x27_454_; size_t v___x_455_; size_t v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_v_450_ = lean_array_uget_borrowed(v_bs_447_, v_i_446_);
v___x_451_ = l_unsafeCast___redArg(v_v_450_);
v_snd_452_ = lean_ctor_get(v___x_451_, 1);
lean_inc(v_snd_452_);
lean_dec(v___x_451_);
v___x_453_ = lean_unsigned_to_nat(0u);
v_bs_x27_454_ = lean_array_uset(v_bs_447_, v_i_446_, v___x_453_);
v___x_455_ = ((size_t)1ULL);
v___x_456_ = lean_usize_add(v_i_446_, v___x_455_);
v___x_457_ = l_unsafeCast___redArg(v_snd_452_);
lean_dec(v_snd_452_);
v___x_458_ = lean_array_uset(v_bs_x27_454_, v_i_446_, v___x_457_);
v_i_446_ = v___x_456_;
v_bs_447_ = v___x_458_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__5___boxed(lean_object* v_sz_460_, lean_object* v_i_461_, lean_object* v_bs_462_){
_start:
{
size_t v_sz_boxed_463_; size_t v_i_boxed_464_; lean_object* v_res_465_; 
v_sz_boxed_463_ = lean_unbox_usize(v_sz_460_);
lean_dec(v_sz_460_);
v_i_boxed_464_ = lean_unbox_usize(v_i_461_);
lean_dec(v_i_461_);
v_res_465_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__5(v_sz_boxed_463_, v_i_boxed_464_, v_bs_462_);
return v_res_465_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__8));
v___x_486_ = l_String_toRawSubstring_x27(v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_box(0);
v___x_488_ = l_unsafeCast___redArg(v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6(lean_object* v___x_498_, lean_object* v___x_499_, lean_object* v___x_500_, size_t v_sz_501_, size_t v_i_502_, lean_object* v_bs_503_){
_start:
{
uint8_t v___x_504_; 
v___x_504_ = lean_usize_dec_lt(v_i_502_, v_sz_501_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_dec(v___x_500_);
lean_dec(v___x_499_);
lean_dec(v___x_498_);
v___x_505_ = l_unsafeCast___redArg(v_bs_503_);
lean_dec_ref(v_bs_503_);
return v___x_505_;
}
else
{
lean_object* v_v_506_; lean_object* v___x_507_; lean_object* v_fst_508_; lean_object* v_snd_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_546_; 
v_v_506_ = lean_array_uget_borrowed(v_bs_503_, v_i_502_);
v___x_507_ = l_unsafeCast___redArg(v_v_506_);
v_fst_508_ = lean_ctor_get(v___x_507_, 0);
v_snd_509_ = lean_ctor_get(v___x_507_, 1);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_546_ == 0)
{
v___x_511_ = v___x_507_;
v_isShared_512_ = v_isSharedCheck_546_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_snd_509_);
lean_inc(v_fst_508_);
lean_dec(v___x_507_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_546_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v_bs_x27_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_513_ = ((lean_object*)(l_Lean_Json_termJson_x25___00__closed__1));
v___x_514_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_515_ = lean_unsigned_to_nat(0u);
v_bs_x27_516_ = lean_array_uset(v_bs_503_, v_i_502_, v___x_515_);
v___x_517_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__2));
v___x_518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4));
v___x_519_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__5));
lean_inc(v___x_498_);
if (v_isShared_512_ == 0)
{
lean_ctor_set_tag(v___x_511_, 2);
lean_ctor_set(v___x_511_, 1, v___x_519_);
lean_ctor_set(v___x_511_, 0, v___x_498_);
v___x_521_ = v___x_511_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_498_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v___x_519_);
v___x_521_ = v_reuseFailAlloc_545_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; size_t v___x_540_; size_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_522_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__7));
v___x_523_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9);
v___x_524_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10);
lean_inc(v___x_500_);
lean_inc(v___x_499_);
v___x_525_ = l_Lean_addMacroScope(v___x_499_, v___x_524_, v___x_500_);
v___x_526_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__13));
lean_inc_n(v___x_498_, 10);
v___x_527_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_527_, 0, v___x_498_);
lean_ctor_set(v___x_527_, 1, v___x_523_);
lean_ctor_set(v___x_527_, 2, v___x_525_);
lean_ctor_set(v___x_527_, 3, v___x_526_);
v___x_528_ = l_Lean_Syntax_node1(v___x_498_, v___x_522_, v___x_527_);
v___x_529_ = l_Lean_Syntax_node2(v___x_498_, v___x_518_, v___x_521_, v___x_528_);
v___x_530_ = ((lean_object*)(l_Lean_Json_json_x5b___x5d___closed__4));
v___x_531_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_498_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__14));
v___x_533_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_498_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = l_Lean_Syntax_node2(v___x_498_, v___x_513_, v___x_533_, v_snd_509_);
v___x_535_ = l_Lean_Syntax_node1(v___x_498_, v___x_514_, v___x_534_);
v___x_536_ = l_Lean_Syntax_node3(v___x_498_, v___x_514_, v_fst_508_, v___x_531_, v___x_535_);
v___x_537_ = ((lean_object*)(l_Lean_Json_json_quot___closed__13));
v___x_538_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_498_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = l_Lean_Syntax_node3(v___x_498_, v___x_517_, v___x_529_, v___x_536_, v___x_538_);
v___x_540_ = ((size_t)1ULL);
v___x_541_ = lean_usize_add(v_i_502_, v___x_540_);
v___x_542_ = l_unsafeCast___redArg(v___x_539_);
lean_dec(v___x_539_);
v___x_543_ = lean_array_uset(v_bs_x27_516_, v_i_502_, v___x_542_);
v_i_502_ = v___x_541_;
v_bs_503_ = v___x_543_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___boxed(lean_object* v___x_547_, lean_object* v___x_548_, lean_object* v___x_549_, lean_object* v_sz_550_, lean_object* v_i_551_, lean_object* v_bs_552_){
_start:
{
size_t v_sz_boxed_553_; size_t v_i_boxed_554_; lean_object* v_res_555_; 
v_sz_boxed_553_ = lean_unbox_usize(v_sz_550_);
lean_dec(v_sz_550_);
v_i_boxed_554_ = lean_unbox_usize(v_i_551_);
lean_dec(v_i_551_);
v_res_555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6(v___x_547_, v___x_548_, v___x_549_, v_sz_boxed_553_, v_i_boxed_554_, v_bs_552_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__0(size_t v_sz_556_, size_t v_i_557_, lean_object* v_bs_558_){
_start:
{
uint8_t v___x_559_; 
v___x_559_ = lean_usize_dec_lt(v_i_557_, v_sz_556_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = l_unsafeCast___redArg(v_bs_558_);
lean_dec_ref(v_bs_558_);
v___x_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
return v___x_561_;
}
else
{
lean_object* v_v_562_; lean_object* v___x_563_; lean_object* v_bs_x27_564_; lean_object* v_xs_565_; size_t v___x_566_; size_t v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v_v_562_ = lean_array_uget(v_bs_558_, v_i_557_);
v___x_563_ = lean_unsigned_to_nat(0u);
v_bs_x27_564_ = lean_array_uset(v_bs_558_, v_i_557_, v___x_563_);
v_xs_565_ = l_unsafeCast___redArg(v_v_562_);
lean_dec(v_v_562_);
v___x_566_ = ((size_t)1ULL);
v___x_567_ = lean_usize_add(v_i_557_, v___x_566_);
v___x_568_ = l_unsafeCast___redArg(v_xs_565_);
lean_dec(v_xs_565_);
v___x_569_ = lean_array_uset(v_bs_x27_564_, v_i_557_, v___x_568_);
v_i_557_ = v___x_567_;
v_bs_558_ = v___x_569_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__0___boxed(lean_object* v_sz_571_, lean_object* v_i_572_, lean_object* v_bs_573_){
_start:
{
size_t v_sz_boxed_574_; size_t v_i_boxed_575_; lean_object* v_res_576_; 
v_sz_boxed_574_ = lean_unbox_usize(v_sz_571_);
lean_dec(v_sz_571_);
v_i_boxed_575_ = lean_unbox_usize(v_i_572_);
lean_dec(v_i_572_);
v_res_576_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__0(v_sz_boxed_574_, v_i_boxed_575_, v_bs_573_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__1(lean_object* v___x_577_, size_t v_sz_578_, size_t v_i_579_, lean_object* v_bs_580_){
_start:
{
uint8_t v___x_581_; 
v___x_581_ = lean_usize_dec_lt(v_i_579_, v_sz_578_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; 
lean_dec(v___x_577_);
v___x_582_ = l_unsafeCast___redArg(v_bs_580_);
lean_dec_ref(v_bs_580_);
return v___x_582_;
}
else
{
lean_object* v___x_583_; lean_object* v_v_584_; lean_object* v___x_585_; lean_object* v_bs_x27_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; size_t v___x_591_; size_t v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_583_ = ((lean_object*)(l_Lean_Json_termJson_x25___00__closed__1));
v_v_584_ = lean_array_uget(v_bs_580_, v_i_579_);
v___x_585_ = lean_unsigned_to_nat(0u);
v_bs_x27_586_ = lean_array_uset(v_bs_580_, v_i_579_, v___x_585_);
v___x_587_ = l_unsafeCast___redArg(v_v_584_);
lean_dec(v_v_584_);
v___x_588_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__14));
lean_inc_n(v___x_577_, 2);
v___x_589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_577_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = l_Lean_Syntax_node2(v___x_577_, v___x_583_, v___x_589_, v___x_587_);
v___x_591_ = ((size_t)1ULL);
v___x_592_ = lean_usize_add(v_i_579_, v___x_591_);
v___x_593_ = l_unsafeCast___redArg(v___x_590_);
lean_dec(v___x_590_);
v___x_594_ = lean_array_uset(v_bs_x27_586_, v_i_579_, v___x_593_);
v_i_579_ = v___x_592_;
v_bs_580_ = v___x_594_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__1___boxed(lean_object* v___x_596_, lean_object* v_sz_597_, lean_object* v_i_598_, lean_object* v_bs_599_){
_start:
{
size_t v_sz_boxed_600_; size_t v_i_boxed_601_; lean_object* v_res_602_; 
v_sz_boxed_600_ = lean_unbox_usize(v_sz_597_);
lean_dec(v_sz_597_);
v_i_boxed_601_ = lean_unbox_usize(v_i_598_);
lean_dec(v_i_598_);
v_res_602_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__1(v___x_596_, v_sz_boxed_600_, v_i_boxed_601_, v_bs_599_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__7(uint8_t v___x_603_, uint8_t v___x_604_, lean_object* v_as_605_, size_t v_i_606_, size_t v_stop_607_, lean_object* v_b_608_){
_start:
{
lean_object* v___y_610_; uint8_t v___x_614_; 
v___x_614_ = lean_usize_dec_eq(v_i_606_, v_stop_607_);
if (v___x_614_ == 0)
{
lean_object* v_fst_615_; uint8_t v___x_616_; 
v_fst_615_ = lean_ctor_get(v_b_608_, 0);
v___x_616_ = lean_unbox(v_fst_615_);
if (v___x_616_ == 0)
{
lean_object* v_snd_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_625_; 
v_snd_617_ = lean_ctor_get(v_b_608_, 1);
v_isSharedCheck_625_ = !lean_is_exclusive(v_b_608_);
if (v_isSharedCheck_625_ == 0)
{
lean_object* v_unused_626_; 
v_unused_626_ = lean_ctor_get(v_b_608_, 0);
lean_dec(v_unused_626_);
v___x_619_ = v_b_608_;
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_snd_617_);
lean_dec(v_b_608_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = lean_box(v___x_603_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_621_);
v___x_623_ = v___x_619_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_snd_617_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
v___y_610_ = v___x_623_;
goto v___jp_609_;
}
}
}
else
{
lean_object* v_snd_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_637_; 
v_snd_627_ = lean_ctor_get(v_b_608_, 1);
v_isSharedCheck_637_ = !lean_is_exclusive(v_b_608_);
if (v_isSharedCheck_637_ == 0)
{
lean_object* v_unused_638_; 
v_unused_638_ = lean_ctor_get(v_b_608_, 0);
lean_dec(v_unused_638_);
v___x_629_ = v_b_608_;
v_isShared_630_ = v_isSharedCheck_637_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_snd_627_);
lean_dec(v_b_608_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_637_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_631_ = lean_array_uget_borrowed(v_as_605_, v_i_606_);
lean_inc(v___x_631_);
v___x_632_ = lean_array_push(v_snd_627_, v___x_631_);
v___x_633_ = lean_box(v___x_604_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 1, v___x_632_);
lean_ctor_set(v___x_629_, 0, v___x_633_);
v___x_635_ = v___x_629_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_633_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v___x_632_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
v___y_610_ = v___x_635_;
goto v___jp_609_;
}
}
}
}
else
{
return v_b_608_;
}
v___jp_609_:
{
size_t v___x_611_; size_t v___x_612_; 
v___x_611_ = ((size_t)1ULL);
v___x_612_ = lean_usize_add(v_i_606_, v___x_611_);
v_i_606_ = v___x_612_;
v_b_608_ = v___y_610_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__7___boxed(lean_object* v___x_639_, lean_object* v___x_640_, lean_object* v_as_641_, lean_object* v_i_642_, lean_object* v_stop_643_, lean_object* v_b_644_){
_start:
{
uint8_t v___x_33278__boxed_645_; uint8_t v___x_33279__boxed_646_; size_t v_i_boxed_647_; size_t v_stop_boxed_648_; lean_object* v_res_649_; 
v___x_33278__boxed_645_ = lean_unbox(v___x_639_);
v___x_33279__boxed_646_ = lean_unbox(v___x_640_);
v_i_boxed_647_ = lean_unbox_usize(v_i_642_);
lean_dec(v_i_642_);
v_stop_boxed_648_ = lean_unbox_usize(v_stop_643_);
lean_dec(v_stop_643_);
v_res_649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__7(v___x_33278__boxed_645_, v___x_33279__boxed_646_, v_as_641_, v_i_boxed_647_, v_stop_boxed_648_, v_b_644_);
lean_dec_ref(v_as_641_);
return v_res_649_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__2));
v___x_658_ = l_String_toRawSubstring_x27(v___x_657_);
return v___x_658_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__11(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__10));
v___x_676_ = l_String_toRawSubstring_x27(v___x_675_);
return v___x_676_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21(void){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Array_mkArray0___redArg();
return v___x_697_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = ((lean_object*)(l_Lean_Json_json_x5b___x5d___closed__4));
v___x_699_ = l_Lean_mkAtom(v___x_698_);
return v___x_699_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__24(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__23));
v___x_702_ = l_String_toRawSubstring_x27(v___x_701_);
return v___x_702_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33(void){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__32));
v___x_721_ = l_String_toRawSubstring_x27(v___x_720_);
return v___x_721_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__45(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__44));
v___x_751_ = l_String_toRawSubstring_x27(v___x_750_);
return v___x_751_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__51));
v___x_769_ = l_String_toRawSubstring_x27(v___x_768_);
return v___x_769_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__60(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__59));
v___x_788_ = l_String_toRawSubstring_x27(v___x_787_);
return v___x_788_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__68(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__67));
v___x_806_ = l_String_toRawSubstring_x27(v___x_805_);
return v___x_806_;
}
}
static lean_object* _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__75(void){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__74));
v___x_823_ = l_String_toRawSubstring_x27(v___x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1(lean_object* v_x_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
lean_object* v___x_844_; uint8_t v___x_845_; 
v___x_844_ = ((lean_object*)(l_Lean_Json_termJson_x25___00__closed__1));
lean_inc(v_x_841_);
v___x_845_ = l_Lean_Syntax_isOfKind(v_x_841_, v___x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v___x_847_; 
lean_dec(v_x_841_);
v___x_846_ = lean_box(1);
v___x_847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v_a_843_);
return v___x_847_;
}
else
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_848_ = lean_unsigned_to_nat(1u);
v___x_849_ = l_Lean_Syntax_getArg(v_x_841_, v___x_848_);
lean_dec(v_x_841_);
v___x_850_ = ((lean_object*)(l_Lean_Json_jsonNull___closed__2));
lean_inc(v___x_849_);
v___x_851_ = l_Lean_Syntax_isOfKind(v___x_849_, v___x_850_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_852_ = ((lean_object*)(l_Lean_Json_jsonTrue___closed__1));
lean_inc(v___x_849_);
v___x_853_ = l_Lean_Syntax_isOfKind(v___x_849_, v___x_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; uint8_t v___x_855_; 
v___x_854_ = ((lean_object*)(l_Lean_Json_jsonFalse___closed__1));
lean_inc(v___x_849_);
v___x_855_ = l_Lean_Syntax_isOfKind(v___x_849_, v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_856_ = lean_unsigned_to_nat(0u);
v___x_857_ = ((lean_object*)(l_Lean_Json_json___00__closed__1));
lean_inc(v___x_849_);
v___x_858_ = l_Lean_Syntax_isOfKind(v___x_849_, v___x_857_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_859_ = ((lean_object*)(l_Lean_Json_json_x2d___00__closed__1));
lean_inc(v___x_849_);
v___x_860_ = l_Lean_Syntax_isOfKind(v___x_849_, v___x_859_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; uint8_t v___x_862_; lean_object* v___y_864_; 
v___x_861_ = ((lean_object*)(l_Lean_Json_json_x2d____1___closed__1));
lean_inc(v___x_849_);
v___x_862_ = l_Lean_Syntax_isOfKind(v___x_849_, v___x_861_);
if (v___x_862_ == 0)
{
lean_object* v___x_917_; uint8_t v___x_918_; lean_object* v___y_920_; 
v___x_917_ = ((lean_object*)(l_Lean_Json_json_x5b___x5d___closed__1));
lean_inc(v___x_849_);
v___x_918_ = l_Lean_Syntax_isOfKind(v___x_849_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1005_ = ((lean_object*)(l_Lean_Json_json_x7b___x7d___closed__1));
lean_inc(v___x_849_);
v___x_1006_ = l_Lean_Syntax_isOfKind(v___x_849_, v___x_1005_);
if (v___x_1006_ == 0)
{
uint8_t v___x_1007_; 
v___x_1007_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_1007_ == 0)
{
lean_object* v___x_1008_; 
lean_dec(v___x_849_);
v___x_1008_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_1008_;
}
else
{
lean_object* v_quotContext_1009_; lean_object* v_currMacroScope_1010_; lean_object* v_ref_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v_quotContext_1009_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1010_ = lean_ctor_get(v_a_842_, 2);
v_ref_1011_ = lean_ctor_get(v_a_842_, 5);
v___x_1012_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_1013_ = l_Lean_SourceInfo_fromRef(v_ref_1011_, v___x_1006_);
v___x_1014_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1015_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_1016_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_1010_);
lean_inc(v_quotContext_1009_);
v___x_1017_ = l_Lean_addMacroScope(v_quotContext_1009_, v___x_1016_, v_currMacroScope_1010_);
v___x_1018_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_1013_, 2);
v___x_1019_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1013_);
lean_ctor_set(v___x_1019_, 1, v___x_1015_);
lean_ctor_set(v___x_1019_, 2, v___x_1017_);
lean_ctor_set(v___x_1019_, 3, v___x_1018_);
v___x_1020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1021_ = l_Lean_Syntax_node1(v___x_1013_, v___x_1020_, v___x_1012_);
v___x_1022_ = l_Lean_Syntax_node2(v___x_1013_, v___x_1014_, v___x_1019_, v___x_1021_);
v___x_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v_a_843_);
return v___x_1023_;
}
}
else
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; uint8_t v___x_1028_; 
v___x_1024_ = l_Lean_Syntax_getArg(v___x_849_, v___x_848_);
v___x_1025_ = l_Lean_Syntax_getArgs(v___x_1024_);
lean_dec(v___x_1024_);
v___x_1026_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__31));
v___x_1027_ = lean_array_get_size(v___x_1025_);
v___x_1028_ = lean_nat_dec_lt(v___x_856_, v___x_1027_);
if (v___x_1028_ == 0)
{
lean_dec_ref(v___x_1025_);
v___y_920_ = v___x_1026_;
goto v___jp_919_;
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; size_t v___x_1031_; size_t v___x_1032_; lean_object* v___x_1033_; lean_object* v_snd_1034_; 
v___x_1029_ = lean_box(v___x_1028_);
v___x_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
lean_ctor_set(v___x_1030_, 1, v___x_1026_);
v___x_1031_ = ((size_t)0ULL);
v___x_1032_ = lean_usize_of_nat(v___x_1027_);
v___x_1033_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__7(v___x_1006_, v___x_918_, v___x_1025_, v___x_1031_, v___x_1032_, v___x_1030_);
lean_dec_ref(v___x_1025_);
v_snd_1034_ = lean_ctor_get(v___x_1033_, 1);
lean_inc(v_snd_1034_);
lean_dec_ref(v___x_1033_);
v___y_920_ = v_snd_1034_;
goto v___jp_919_;
}
}
}
else
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1035_ = l_Lean_Syntax_getArg(v___x_849_, v___x_848_);
v___x_1036_ = l_Lean_Syntax_getArgs(v___x_1035_);
lean_dec(v___x_1035_);
v___x_1037_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__31));
v___x_1038_ = lean_array_get_size(v___x_1036_);
v___x_1039_ = lean_nat_dec_lt(v___x_856_, v___x_1038_);
if (v___x_1039_ == 0)
{
lean_dec_ref(v___x_1036_);
v___y_864_ = v___x_1037_;
goto v___jp_863_;
}
else
{
lean_object* v___x_1040_; lean_object* v___x_1041_; size_t v___x_1042_; size_t v___x_1043_; lean_object* v___x_1044_; lean_object* v_snd_1045_; 
v___x_1040_ = lean_box(v___x_1039_);
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set(v___x_1041_, 1, v___x_1037_);
v___x_1042_ = ((size_t)0ULL);
v___x_1043_ = lean_usize_of_nat(v___x_1038_);
v___x_1044_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__7(v___x_918_, v___x_862_, v___x_1036_, v___x_1042_, v___x_1043_, v___x_1041_);
lean_dec_ref(v___x_1036_);
v_snd_1045_ = lean_ctor_get(v___x_1044_, 1);
lean_inc(v_snd_1045_);
lean_dec_ref(v___x_1044_);
v___y_864_ = v_snd_1045_;
goto v___jp_863_;
}
}
v___jp_919_:
{
size_t v_sz_921_; size_t v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v_sz_921_ = lean_array_size(v___y_920_);
v___x_922_ = ((size_t)0ULL);
v___x_923_ = l_unsafeCast___redArg(v___y_920_);
lean_dec_ref(v___y_920_);
v___x_924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__2(v___x_918_, v_sz_921_, v___x_922_, v___x_923_);
v___x_925_ = l_unsafeCast___redArg(v___x_924_);
lean_dec(v___x_924_);
if (lean_obj_tag(v___x_925_) == 0)
{
uint8_t v___x_926_; 
v___x_926_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; 
lean_dec(v___x_849_);
v___x_927_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_927_;
}
else
{
lean_object* v_quotContext_928_; lean_object* v_currMacroScope_929_; lean_object* v_ref_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v_quotContext_928_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_929_ = lean_ctor_get(v_a_842_, 2);
v_ref_930_ = lean_ctor_get(v_a_842_, 5);
v___x_931_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_932_ = l_Lean_SourceInfo_fromRef(v_ref_930_, v___x_918_);
v___x_933_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_934_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_935_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_929_);
lean_inc(v_quotContext_928_);
v___x_936_ = l_Lean_addMacroScope(v_quotContext_928_, v___x_935_, v_currMacroScope_929_);
v___x_937_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_932_, 2);
v___x_938_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_938_, 0, v___x_932_);
lean_ctor_set(v___x_938_, 1, v___x_934_);
lean_ctor_set(v___x_938_, 2, v___x_936_);
lean_ctor_set(v___x_938_, 3, v___x_937_);
v___x_939_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_940_ = l_Lean_Syntax_node1(v___x_932_, v___x_939_, v___x_931_);
v___x_941_ = l_Lean_Syntax_node2(v___x_932_, v___x_933_, v___x_938_, v___x_940_);
v___x_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
lean_ctor_set(v___x_942_, 1, v_a_843_);
return v___x_942_;
}
}
else
{
lean_object* v_val_943_; size_t v_sz_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_ks_947_; size_t v_sz_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_32652__overap_954_; lean_object* v___x_955_; 
lean_dec(v___x_849_);
v_val_943_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_val_943_);
lean_dec_ref_known(v___x_925_, 1);
v_sz_944_ = lean_array_size(v_val_943_);
v___x_945_ = l_unsafeCast___redArg(v_val_943_);
lean_dec(v_val_943_);
lean_inc(v___x_945_);
v___x_946_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__3(v_sz_944_, v___x_922_, v___x_945_);
v_ks_947_ = l_unsafeCast___redArg(v___x_946_);
lean_dec_ref(v___x_946_);
v_sz_948_ = lean_array_size(v_ks_947_);
v___x_949_ = l_unsafeCast___redArg(v_ks_947_);
lean_dec(v_ks_947_);
v___x_950_ = lean_box(v___x_918_);
v___x_951_ = lean_box_usize(v_sz_948_);
v___x_952_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___boxed__const__1));
v___x_953_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4___boxed), 6, 4);
lean_closure_set(v___x_953_, 0, v___x_950_);
lean_closure_set(v___x_953_, 1, v___x_951_);
lean_closure_set(v___x_953_, 2, v___x_952_);
lean_closure_set(v___x_953_, 3, v___x_949_);
v___x_32652__overap_954_ = l_unsafeCast___redArg(v___x_953_);
lean_dec_ref(v___x_953_);
lean_inc_ref(v_a_842_);
v___x_955_ = lean_apply_2(v___x_32652__overap_954_, v_a_842_, v_a_843_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_995_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_a_957_ = lean_ctor_get(v___x_955_, 1);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_995_ == 0)
{
v___x_959_ = v___x_955_;
v_isShared_960_ = v_isSharedCheck_995_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_995_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v_quotContext_961_; lean_object* v_currMacroScope_962_; lean_object* v_ref_963_; lean_object* v___x_964_; lean_object* v_vs_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; size_t v_sz_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_993_; 
v_quotContext_961_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_962_ = lean_ctor_get(v_a_842_, 2);
v_ref_963_ = lean_ctor_get(v_a_842_, 5);
v___x_964_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__5(v_sz_944_, v___x_922_, v___x_945_);
v_vs_965_ = l_unsafeCast___redArg(v___x_964_);
lean_dec_ref(v___x_964_);
v___x_966_ = l_Lean_SourceInfo_fromRef(v_ref_963_, v___x_918_);
v___x_967_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_968_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__24, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__24_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__24);
v___x_969_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__26));
lean_inc_n(v_currMacroScope_962_, 2);
lean_inc_n(v_quotContext_961_, 2);
v___x_970_ = l_Lean_addMacroScope(v_quotContext_961_, v___x_969_, v_currMacroScope_962_);
v___x_971_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__28));
lean_inc_n(v___x_966_, 7);
v___x_972_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_972_, 0, v___x_966_);
lean_ctor_set(v___x_972_, 1, v___x_968_);
lean_ctor_set(v___x_972_, 2, v___x_970_);
lean_ctor_set(v___x_972_, 3, v___x_971_);
v___x_973_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_974_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__30));
v___x_975_ = ((lean_object*)(l_Lean_Json_json_x5b___x5d___closed__2));
v___x_976_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_966_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21);
v___x_978_ = l_Array_zip___redArg(v_a_956_, v_vs_965_);
lean_dec(v_vs_965_);
lean_dec(v_a_956_);
v_sz_979_ = lean_array_size(v___x_978_);
v___x_980_ = l_unsafeCast___redArg(v___x_978_);
lean_dec_ref(v___x_978_);
v___x_981_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6(v___x_966_, v_quotContext_961_, v_currMacroScope_962_, v_sz_979_, v___x_922_, v___x_980_);
v___x_982_ = l_unsafeCast___redArg(v___x_981_);
lean_dec_ref(v___x_981_);
v___x_983_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22);
v___x_984_ = l_Lean_mkSepArray(v___x_982_, v___x_983_);
lean_dec(v___x_982_);
v___x_985_ = l_Array_append___redArg(v___x_977_, v___x_984_);
lean_dec_ref(v___x_984_);
v___x_986_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_986_, 0, v___x_966_);
lean_ctor_set(v___x_986_, 1, v___x_973_);
lean_ctor_set(v___x_986_, 2, v___x_985_);
v___x_987_ = ((lean_object*)(l_Lean_Json_json_x5b___x5d___closed__9));
v___x_988_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_966_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = l_Lean_Syntax_node3(v___x_966_, v___x_974_, v___x_976_, v___x_986_, v___x_988_);
v___x_990_ = l_Lean_Syntax_node1(v___x_966_, v___x_973_, v___x_989_);
v___x_991_ = l_Lean_Syntax_node2(v___x_966_, v___x_967_, v___x_972_, v___x_990_);
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 0, v___x_991_);
v___x_993_ = v___x_959_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_991_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_a_957_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
else
{
lean_object* v_a_996_; lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
lean_dec(v___x_945_);
v_a_996_ = lean_ctor_get(v___x_955_, 0);
v_a_997_ = lean_ctor_get(v___x_955_, 1);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_955_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_inc(v_a_996_);
lean_dec(v___x_955_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_996_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
}
}
else
{
lean_object* v___x_1046_; uint8_t v___x_1047_; 
v___x_1046_ = l_Lean_Syntax_getArg(v___x_849_, v___x_856_);
lean_inc(v___x_1046_);
v___x_1047_ = l_Lean_Syntax_matchesNull(v___x_1046_, v___x_856_);
if (v___x_1047_ == 0)
{
uint8_t v___x_1048_; 
v___x_1048_ = l_Lean_Syntax_matchesNull(v___x_1046_, v___x_848_);
if (v___x_1048_ == 0)
{
uint8_t v___x_1049_; 
v___x_1049_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; 
lean_dec(v___x_849_);
v___x_1050_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_1050_;
}
else
{
lean_object* v_quotContext_1051_; lean_object* v_currMacroScope_1052_; lean_object* v_ref_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_quotContext_1051_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1052_ = lean_ctor_get(v_a_842_, 2);
v_ref_1053_ = lean_ctor_get(v_a_842_, 5);
v___x_1054_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_1055_ = l_Lean_SourceInfo_fromRef(v_ref_1053_, v___x_1048_);
v___x_1056_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1057_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_1058_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_1052_);
lean_inc(v_quotContext_1051_);
v___x_1059_ = l_Lean_addMacroScope(v_quotContext_1051_, v___x_1058_, v_currMacroScope_1052_);
v___x_1060_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_1055_, 2);
v___x_1061_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1055_);
lean_ctor_set(v___x_1061_, 1, v___x_1057_);
lean_ctor_set(v___x_1061_, 2, v___x_1059_);
lean_ctor_set(v___x_1061_, 3, v___x_1060_);
v___x_1062_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1063_ = l_Lean_Syntax_node1(v___x_1055_, v___x_1062_, v___x_1054_);
v___x_1064_ = l_Lean_Syntax_node2(v___x_1055_, v___x_1056_, v___x_1061_, v___x_1063_);
v___x_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
lean_ctor_set(v___x_1065_, 1, v_a_843_);
return v___x_1065_;
}
}
else
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lean_Syntax_getArg(v___x_849_, v___x_848_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1101_; uint8_t v___x_1102_; 
v___x_1101_ = ((lean_object*)(l_Lean_Json_json_x2d____1___closed__3));
lean_inc(v___x_1066_);
v___x_1102_ = l_Lean_Syntax_isOfKind(v___x_1066_, v___x_1101_);
if (v___x_1102_ == 0)
{
uint8_t v___x_1103_; 
lean_dec(v___x_1066_);
v___x_1103_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_1103_ == 0)
{
lean_object* v___x_1104_; 
lean_dec(v___x_849_);
v___x_1104_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_1104_;
}
else
{
lean_object* v_quotContext_1105_; lean_object* v_currMacroScope_1106_; lean_object* v_ref_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_quotContext_1105_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1106_ = lean_ctor_get(v_a_842_, 2);
v_ref_1107_ = lean_ctor_get(v_a_842_, 5);
v___x_1108_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_1109_ = l_Lean_SourceInfo_fromRef(v_ref_1107_, v___x_1047_);
v___x_1110_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1111_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_1112_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_1106_);
lean_inc(v_quotContext_1105_);
v___x_1113_ = l_Lean_addMacroScope(v_quotContext_1105_, v___x_1112_, v_currMacroScope_1106_);
v___x_1114_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_1109_, 2);
v___x_1115_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1109_);
lean_ctor_set(v___x_1115_, 1, v___x_1111_);
lean_ctor_set(v___x_1115_, 2, v___x_1113_);
lean_ctor_set(v___x_1115_, 3, v___x_1114_);
v___x_1116_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1117_ = l_Lean_Syntax_node1(v___x_1109_, v___x_1116_, v___x_1108_);
v___x_1118_ = l_Lean_Syntax_node2(v___x_1109_, v___x_1110_, v___x_1115_, v___x_1117_);
v___x_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
lean_ctor_set(v___x_1119_, 1, v_a_843_);
return v___x_1119_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1067_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1067_;
}
v___jp_1067_:
{
lean_object* v_quotContext_1068_; lean_object* v_currMacroScope_1069_; lean_object* v_ref_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v_quotContext_1068_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1069_ = lean_ctor_get(v_a_842_, 2);
v_ref_1070_ = lean_ctor_get(v_a_842_, 5);
v___x_1071_ = l_Lean_SourceInfo_fromRef(v_ref_1070_, v___x_1047_);
v___x_1072_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1073_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33);
v___x_1074_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34));
lean_inc_n(v_currMacroScope_1069_, 2);
lean_inc_n(v_quotContext_1068_, 2);
v___x_1075_ = l_Lean_addMacroScope(v_quotContext_1068_, v___x_1074_, v_currMacroScope_1069_);
v___x_1076_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__38));
lean_inc_n(v___x_1071_, 10);
v___x_1077_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1071_);
lean_ctor_set(v___x_1077_, 1, v___x_1073_);
lean_ctor_set(v___x_1077_, 2, v___x_1075_);
lean_ctor_set(v___x_1077_, 3, v___x_1076_);
v___x_1078_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1079_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40));
v___x_1080_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4));
v___x_1081_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__5));
v___x_1082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1071_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__7));
v___x_1084_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9);
v___x_1085_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10);
v___x_1086_ = l_Lean_addMacroScope(v_quotContext_1068_, v___x_1085_, v_currMacroScope_1069_);
v___x_1087_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__41));
v___x_1088_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1071_);
lean_ctor_set(v___x_1088_, 1, v___x_1084_);
lean_ctor_set(v___x_1088_, 2, v___x_1086_);
lean_ctor_set(v___x_1088_, 3, v___x_1087_);
v___x_1089_ = l_Lean_Syntax_node1(v___x_1071_, v___x_1083_, v___x_1088_);
v___x_1090_ = l_Lean_Syntax_node2(v___x_1071_, v___x_1080_, v___x_1082_, v___x_1089_);
v___x_1091_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__43));
v___x_1092_ = ((lean_object*)(l_Lean_Json_json_x2d___00__closed__4));
v___x_1093_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1071_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = l_Lean_Syntax_node2(v___x_1071_, v___x_1091_, v___x_1093_, v___x_1066_);
v___x_1095_ = ((lean_object*)(l_Lean_Json_json_quot___closed__13));
v___x_1096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1071_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = l_Lean_Syntax_node3(v___x_1071_, v___x_1079_, v___x_1090_, v___x_1094_, v___x_1096_);
v___x_1098_ = l_Lean_Syntax_node1(v___x_1071_, v___x_1078_, v___x_1097_);
v___x_1099_ = l_Lean_Syntax_node2(v___x_1071_, v___x_1072_, v___x_1077_, v___x_1098_);
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
lean_ctor_set(v___x_1100_, 1, v_a_843_);
return v___x_1100_;
}
}
}
else
{
lean_object* v___x_1120_; 
lean_dec(v___x_1046_);
v___x_1120_ = l_Lean_Syntax_getArg(v___x_849_, v___x_848_);
if (v___x_860_ == 0)
{
lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1136_ = ((lean_object*)(l_Lean_Json_json_x2d____1___closed__3));
lean_inc(v___x_1120_);
v___x_1137_ = l_Lean_Syntax_isOfKind(v___x_1120_, v___x_1136_);
if (v___x_1137_ == 0)
{
uint8_t v___x_1138_; 
lean_dec(v___x_1120_);
v___x_1138_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; 
lean_dec(v___x_849_);
v___x_1139_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_1139_;
}
else
{
lean_object* v_quotContext_1140_; lean_object* v_currMacroScope_1141_; lean_object* v_ref_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_quotContext_1140_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1141_ = lean_ctor_get(v_a_842_, 2);
v_ref_1142_ = lean_ctor_get(v_a_842_, 5);
v___x_1143_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_1144_ = l_Lean_SourceInfo_fromRef(v_ref_1142_, v___x_860_);
v___x_1145_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1146_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_1147_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_1141_);
lean_inc(v_quotContext_1140_);
v___x_1148_ = l_Lean_addMacroScope(v_quotContext_1140_, v___x_1147_, v_currMacroScope_1141_);
v___x_1149_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_1144_, 2);
v___x_1150_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1144_);
lean_ctor_set(v___x_1150_, 1, v___x_1146_);
lean_ctor_set(v___x_1150_, 2, v___x_1148_);
lean_ctor_set(v___x_1150_, 3, v___x_1149_);
v___x_1151_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1152_ = l_Lean_Syntax_node1(v___x_1144_, v___x_1151_, v___x_1143_);
v___x_1153_ = l_Lean_Syntax_node2(v___x_1144_, v___x_1145_, v___x_1150_, v___x_1152_);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
lean_ctor_set(v___x_1154_, 1, v_a_843_);
return v___x_1154_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1121_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1121_;
}
v___jp_1121_:
{
lean_object* v_quotContext_1122_; lean_object* v_currMacroScope_1123_; lean_object* v_ref_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v_quotContext_1122_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1123_ = lean_ctor_get(v_a_842_, 2);
v_ref_1124_ = lean_ctor_get(v_a_842_, 5);
v___x_1125_ = l_Lean_SourceInfo_fromRef(v_ref_1124_, v___x_860_);
v___x_1126_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1127_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33);
v___x_1128_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34));
lean_inc(v_currMacroScope_1123_);
lean_inc(v_quotContext_1122_);
v___x_1129_ = l_Lean_addMacroScope(v_quotContext_1122_, v___x_1128_, v_currMacroScope_1123_);
v___x_1130_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__38));
lean_inc_n(v___x_1125_, 2);
v___x_1131_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1125_);
lean_ctor_set(v___x_1131_, 1, v___x_1127_);
lean_ctor_set(v___x_1131_, 2, v___x_1129_);
lean_ctor_set(v___x_1131_, 3, v___x_1130_);
v___x_1132_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1133_ = l_Lean_Syntax_node1(v___x_1125_, v___x_1132_, v___x_1120_);
v___x_1134_ = l_Lean_Syntax_node2(v___x_1125_, v___x_1126_, v___x_1131_, v___x_1133_);
v___x_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v_a_843_);
return v___x_1135_;
}
}
}
v___jp_863_:
{
size_t v_sz_865_; size_t v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_sz_865_ = lean_array_size(v___y_864_);
v___x_866_ = ((size_t)0ULL);
v___x_867_ = l_unsafeCast___redArg(v___y_864_);
lean_dec_ref(v___y_864_);
v___x_868_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__0(v_sz_865_, v___x_866_, v___x_867_);
v___x_869_ = l_unsafeCast___redArg(v___x_868_);
lean_dec(v___x_868_);
if (lean_obj_tag(v___x_869_) == 0)
{
uint8_t v___x_870_; 
v___x_870_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; 
lean_dec(v___x_849_);
v___x_871_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_871_;
}
else
{
lean_object* v_quotContext_872_; lean_object* v_currMacroScope_873_; lean_object* v_ref_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v_quotContext_872_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_873_ = lean_ctor_get(v_a_842_, 2);
v_ref_874_ = lean_ctor_get(v_a_842_, 5);
v___x_875_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_876_ = l_Lean_SourceInfo_fromRef(v_ref_874_, v___x_862_);
v___x_877_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_878_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_879_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_873_);
lean_inc(v_quotContext_872_);
v___x_880_ = l_Lean_addMacroScope(v_quotContext_872_, v___x_879_, v_currMacroScope_873_);
v___x_881_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_876_, 2);
v___x_882_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_882_, 0, v___x_876_);
lean_ctor_set(v___x_882_, 1, v___x_878_);
lean_ctor_set(v___x_882_, 2, v___x_880_);
lean_ctor_set(v___x_882_, 3, v___x_881_);
v___x_883_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_884_ = l_Lean_Syntax_node1(v___x_876_, v___x_883_, v___x_875_);
v___x_885_ = l_Lean_Syntax_node2(v___x_876_, v___x_877_, v___x_882_, v___x_884_);
v___x_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
lean_ctor_set(v___x_886_, 1, v_a_843_);
return v___x_886_;
}
}
else
{
lean_object* v_val_887_; lean_object* v_quotContext_888_; lean_object* v_currMacroScope_889_; lean_object* v_ref_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; size_t v_sz_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
lean_dec(v___x_849_);
v_val_887_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_val_887_);
lean_dec_ref_known(v___x_869_, 1);
v_quotContext_888_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_889_ = lean_ctor_get(v_a_842_, 2);
v_ref_890_ = lean_ctor_get(v_a_842_, 5);
v___x_891_ = l_Lean_SourceInfo_fromRef(v_ref_890_, v___x_862_);
v___x_892_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_893_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__11, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__11_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__11);
v___x_894_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__13));
lean_inc(v_currMacroScope_889_);
lean_inc(v_quotContext_888_);
v___x_895_ = l_Lean_addMacroScope(v_quotContext_888_, v___x_894_, v_currMacroScope_889_);
v___x_896_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__17));
lean_inc_n(v___x_891_, 7);
v___x_897_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_897_, 0, v___x_891_);
lean_ctor_set(v___x_897_, 1, v___x_893_);
lean_ctor_set(v___x_897_, 2, v___x_895_);
lean_ctor_set(v___x_897_, 3, v___x_896_);
v___x_898_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_899_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__19));
v___x_900_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__20));
v___x_901_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_891_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__21);
v_sz_903_ = lean_array_size(v_val_887_);
v___x_904_ = l_unsafeCast___redArg(v_val_887_);
lean_dec(v_val_887_);
v___x_905_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__1(v___x_891_, v_sz_903_, v___x_866_, v___x_904_);
v___x_906_ = l_unsafeCast___redArg(v___x_905_);
lean_dec_ref(v___x_905_);
v___x_907_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__22);
v___x_908_ = l_Lean_mkSepArray(v___x_906_, v___x_907_);
lean_dec(v___x_906_);
v___x_909_ = l_Array_append___redArg(v___x_902_, v___x_908_);
lean_dec_ref(v___x_908_);
v___x_910_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_910_, 0, v___x_891_);
lean_ctor_set(v___x_910_, 1, v___x_898_);
lean_ctor_set(v___x_910_, 2, v___x_909_);
v___x_911_ = ((lean_object*)(l_Lean_Json_json_x5b___x5d___closed__9));
v___x_912_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_891_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = l_Lean_Syntax_node3(v___x_891_, v___x_899_, v___x_901_, v___x_910_, v___x_912_);
v___x_914_ = l_Lean_Syntax_node1(v___x_891_, v___x_898_, v___x_913_);
v___x_915_ = l_Lean_Syntax_node2(v___x_891_, v___x_892_, v___x_897_, v___x_914_);
v___x_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
lean_ctor_set(v___x_916_, 1, v_a_843_);
return v___x_916_;
}
}
}
else
{
lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1155_ = l_Lean_Syntax_getArg(v___x_849_, v___x_856_);
lean_inc(v___x_1155_);
v___x_1156_ = l_Lean_Syntax_matchesNull(v___x_1155_, v___x_856_);
if (v___x_1156_ == 0)
{
uint8_t v___x_1157_; 
v___x_1157_ = l_Lean_Syntax_matchesNull(v___x_1155_, v___x_848_);
if (v___x_1157_ == 0)
{
uint8_t v___x_1158_; 
v___x_1158_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; 
lean_dec(v___x_849_);
v___x_1159_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_1159_;
}
else
{
lean_object* v_quotContext_1160_; lean_object* v_currMacroScope_1161_; lean_object* v_ref_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_quotContext_1160_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1161_ = lean_ctor_get(v_a_842_, 2);
v_ref_1162_ = lean_ctor_get(v_a_842_, 5);
v___x_1163_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_1164_ = l_Lean_SourceInfo_fromRef(v_ref_1162_, v___x_1157_);
v___x_1165_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1166_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_1167_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_1161_);
lean_inc(v_quotContext_1160_);
v___x_1168_ = l_Lean_addMacroScope(v_quotContext_1160_, v___x_1167_, v_currMacroScope_1161_);
v___x_1169_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_1164_, 2);
v___x_1170_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1164_);
lean_ctor_set(v___x_1170_, 1, v___x_1166_);
lean_ctor_set(v___x_1170_, 2, v___x_1168_);
lean_ctor_set(v___x_1170_, 3, v___x_1169_);
v___x_1171_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1172_ = l_Lean_Syntax_node1(v___x_1164_, v___x_1171_, v___x_1163_);
v___x_1173_ = l_Lean_Syntax_node2(v___x_1164_, v___x_1165_, v___x_1170_, v___x_1172_);
v___x_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
lean_ctor_set(v___x_1174_, 1, v_a_843_);
return v___x_1174_;
}
}
else
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_Syntax_getArg(v___x_849_, v___x_848_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = ((lean_object*)(l_Lean_Json_json_x2d___00__closed__8));
lean_inc(v___x_1175_);
v___x_1211_ = l_Lean_Syntax_isOfKind(v___x_1175_, v___x_1210_);
if (v___x_1211_ == 0)
{
uint8_t v___x_1212_; 
lean_dec(v___x_1175_);
v___x_1212_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; 
lean_dec(v___x_849_);
v___x_1213_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_1213_;
}
else
{
lean_object* v_quotContext_1214_; lean_object* v_currMacroScope_1215_; lean_object* v_ref_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v_quotContext_1214_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1215_ = lean_ctor_get(v_a_842_, 2);
v_ref_1216_ = lean_ctor_get(v_a_842_, 5);
v___x_1217_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_1218_ = l_Lean_SourceInfo_fromRef(v_ref_1216_, v___x_1156_);
v___x_1219_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1220_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_1221_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_1215_);
lean_inc(v_quotContext_1214_);
v___x_1222_ = l_Lean_addMacroScope(v_quotContext_1214_, v___x_1221_, v_currMacroScope_1215_);
v___x_1223_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_1218_, 2);
v___x_1224_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1218_);
lean_ctor_set(v___x_1224_, 1, v___x_1220_);
lean_ctor_set(v___x_1224_, 2, v___x_1222_);
lean_ctor_set(v___x_1224_, 3, v___x_1223_);
v___x_1225_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1226_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1225_, v___x_1217_);
v___x_1227_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1219_, v___x_1224_, v___x_1226_);
v___x_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
lean_ctor_set(v___x_1228_, 1, v_a_843_);
return v___x_1228_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1176_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1176_;
}
v___jp_1176_:
{
lean_object* v_quotContext_1177_; lean_object* v_currMacroScope_1178_; lean_object* v_ref_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_quotContext_1177_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1178_ = lean_ctor_get(v_a_842_, 2);
v_ref_1179_ = lean_ctor_get(v_a_842_, 5);
v___x_1180_ = l_Lean_SourceInfo_fromRef(v_ref_1179_, v___x_1156_);
v___x_1181_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1182_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33);
v___x_1183_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34));
lean_inc_n(v_currMacroScope_1178_, 2);
lean_inc_n(v_quotContext_1177_, 2);
v___x_1184_ = l_Lean_addMacroScope(v_quotContext_1177_, v___x_1183_, v_currMacroScope_1178_);
v___x_1185_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__38));
lean_inc_n(v___x_1180_, 10);
v___x_1186_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1180_);
lean_ctor_set(v___x_1186_, 1, v___x_1182_);
lean_ctor_set(v___x_1186_, 2, v___x_1184_);
lean_ctor_set(v___x_1186_, 3, v___x_1185_);
v___x_1187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1188_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__40));
v___x_1189_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__4));
v___x_1190_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__5));
v___x_1191_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1180_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__7));
v___x_1193_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__9);
v___x_1194_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__10);
v___x_1195_ = l_Lean_addMacroScope(v_quotContext_1177_, v___x_1194_, v_currMacroScope_1178_);
v___x_1196_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__41));
v___x_1197_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1180_);
lean_ctor_set(v___x_1197_, 1, v___x_1193_);
lean_ctor_set(v___x_1197_, 2, v___x_1195_);
lean_ctor_set(v___x_1197_, 3, v___x_1196_);
v___x_1198_ = l_Lean_Syntax_node1(v___x_1180_, v___x_1192_, v___x_1197_);
v___x_1199_ = l_Lean_Syntax_node2(v___x_1180_, v___x_1189_, v___x_1191_, v___x_1198_);
v___x_1200_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__43));
v___x_1201_ = ((lean_object*)(l_Lean_Json_json_x2d___00__closed__4));
v___x_1202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1180_);
lean_ctor_set(v___x_1202_, 1, v___x_1201_);
v___x_1203_ = l_Lean_Syntax_node2(v___x_1180_, v___x_1200_, v___x_1202_, v___x_1175_);
v___x_1204_ = ((lean_object*)(l_Lean_Json_json_quot___closed__13));
v___x_1205_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1180_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v___x_1206_ = l_Lean_Syntax_node3(v___x_1180_, v___x_1188_, v___x_1199_, v___x_1203_, v___x_1205_);
v___x_1207_ = l_Lean_Syntax_node1(v___x_1180_, v___x_1187_, v___x_1206_);
v___x_1208_ = l_Lean_Syntax_node2(v___x_1180_, v___x_1181_, v___x_1186_, v___x_1207_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
lean_ctor_set(v___x_1209_, 1, v_a_843_);
return v___x_1209_;
}
}
}
else
{
lean_object* v___x_1229_; 
lean_dec(v___x_1155_);
v___x_1229_ = l_Lean_Syntax_getArg(v___x_849_, v___x_848_);
if (v___x_858_ == 0)
{
lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1245_ = ((lean_object*)(l_Lean_Json_json_x2d___00__closed__8));
lean_inc(v___x_1229_);
v___x_1246_ = l_Lean_Syntax_isOfKind(v___x_1229_, v___x_1245_);
if (v___x_1246_ == 0)
{
uint8_t v___x_1247_; 
lean_dec(v___x_1229_);
v___x_1247_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_1247_ == 0)
{
lean_object* v___x_1248_; 
lean_dec(v___x_849_);
v___x_1248_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_1248_;
}
else
{
lean_object* v_quotContext_1249_; lean_object* v_currMacroScope_1250_; lean_object* v_ref_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v_quotContext_1249_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1250_ = lean_ctor_get(v_a_842_, 2);
v_ref_1251_ = lean_ctor_get(v_a_842_, 5);
v___x_1252_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_1253_ = l_Lean_SourceInfo_fromRef(v_ref_1251_, v___x_858_);
v___x_1254_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1255_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_1256_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_1250_);
lean_inc(v_quotContext_1249_);
v___x_1257_ = l_Lean_addMacroScope(v_quotContext_1249_, v___x_1256_, v_currMacroScope_1250_);
v___x_1258_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_1253_, 2);
v___x_1259_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1253_);
lean_ctor_set(v___x_1259_, 1, v___x_1255_);
lean_ctor_set(v___x_1259_, 2, v___x_1257_);
lean_ctor_set(v___x_1259_, 3, v___x_1258_);
v___x_1260_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1261_ = l_Lean_Syntax_node1(v___x_1253_, v___x_1260_, v___x_1252_);
v___x_1262_ = l_Lean_Syntax_node2(v___x_1253_, v___x_1254_, v___x_1259_, v___x_1261_);
v___x_1263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
lean_ctor_set(v___x_1263_, 1, v_a_843_);
return v___x_1263_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1230_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1230_;
}
v___jp_1230_:
{
lean_object* v_quotContext_1231_; lean_object* v_currMacroScope_1232_; lean_object* v_ref_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v_quotContext_1231_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1232_ = lean_ctor_get(v_a_842_, 2);
v_ref_1233_ = lean_ctor_get(v_a_842_, 5);
v___x_1234_ = l_Lean_SourceInfo_fromRef(v_ref_1233_, v___x_858_);
v___x_1235_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1236_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__33);
v___x_1237_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__34));
lean_inc(v_currMacroScope_1232_);
lean_inc(v_quotContext_1231_);
v___x_1238_ = l_Lean_addMacroScope(v_quotContext_1231_, v___x_1237_, v_currMacroScope_1232_);
v___x_1239_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__38));
lean_inc_n(v___x_1234_, 2);
v___x_1240_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1234_);
lean_ctor_set(v___x_1240_, 1, v___x_1236_);
lean_ctor_set(v___x_1240_, 2, v___x_1238_);
lean_ctor_set(v___x_1240_, 3, v___x_1239_);
v___x_1241_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1242_ = l_Lean_Syntax_node1(v___x_1234_, v___x_1241_, v___x_1229_);
v___x_1243_ = l_Lean_Syntax_node2(v___x_1234_, v___x_1235_, v___x_1240_, v___x_1242_);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
lean_ctor_set(v___x_1244_, 1, v_a_843_);
return v___x_1244_;
}
}
}
}
else
{
lean_object* v___x_1264_; 
v___x_1264_ = l_Lean_Syntax_getArg(v___x_849_, v___x_856_);
if (v___x_855_ == 0)
{
lean_object* v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = ((lean_object*)(l_Lean_Json_json___00__closed__3));
lean_inc(v___x_1264_);
v___x_1281_ = l_Lean_Syntax_isOfKind(v___x_1264_, v___x_1280_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; 
lean_dec(v___x_1264_);
v___x_1282_ = l_Lean_Syntax_isAntiquot(v___x_849_);
if (v___x_1282_ == 0)
{
lean_object* v___x_1283_; 
lean_dec(v___x_849_);
v___x_1283_ = l_Lean_Macro_throwUnsupported___redArg(v_a_843_);
return v___x_1283_;
}
else
{
lean_object* v_quotContext_1284_; lean_object* v_currMacroScope_1285_; lean_object* v_ref_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v_quotContext_1284_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1285_ = lean_ctor_get(v_a_842_, 2);
v_ref_1286_ = lean_ctor_get(v_a_842_, 5);
v___x_1287_ = l_Lean_Syntax_getAntiquotTerm(v___x_849_);
lean_dec(v___x_849_);
v___x_1288_ = l_Lean_SourceInfo_fromRef(v_ref_1286_, v___x_855_);
v___x_1289_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1290_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__3);
v___x_1291_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__5));
lean_inc(v_currMacroScope_1285_);
lean_inc(v_quotContext_1284_);
v___x_1292_ = l_Lean_addMacroScope(v_quotContext_1284_, v___x_1291_, v_currMacroScope_1285_);
v___x_1293_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__9));
lean_inc_n(v___x_1288_, 2);
v___x_1294_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1288_);
lean_ctor_set(v___x_1294_, 1, v___x_1290_);
lean_ctor_set(v___x_1294_, 2, v___x_1292_);
lean_ctor_set(v___x_1294_, 3, v___x_1293_);
v___x_1295_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1296_ = l_Lean_Syntax_node1(v___x_1288_, v___x_1295_, v___x_1287_);
v___x_1297_ = l_Lean_Syntax_node2(v___x_1288_, v___x_1289_, v___x_1294_, v___x_1296_);
v___x_1298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
lean_ctor_set(v___x_1298_, 1, v_a_843_);
return v___x_1298_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1265_;
}
}
else
{
lean_dec(v___x_849_);
goto v___jp_1265_;
}
v___jp_1265_:
{
lean_object* v_quotContext_1266_; lean_object* v_currMacroScope_1267_; lean_object* v_ref_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v_quotContext_1266_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1267_ = lean_ctor_get(v_a_842_, 2);
v_ref_1268_ = lean_ctor_get(v_a_842_, 5);
v___x_1269_ = l_Lean_SourceInfo_fromRef(v_ref_1268_, v___x_855_);
v___x_1270_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1271_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__45, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__45_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__45);
v___x_1272_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__46));
lean_inc(v_currMacroScope_1267_);
lean_inc(v_quotContext_1266_);
v___x_1273_ = l_Lean_addMacroScope(v_quotContext_1266_, v___x_1272_, v_currMacroScope_1267_);
v___x_1274_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__50));
lean_inc_n(v___x_1269_, 2);
v___x_1275_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1269_);
lean_ctor_set(v___x_1275_, 1, v___x_1271_);
lean_ctor_set(v___x_1275_, 2, v___x_1273_);
lean_ctor_set(v___x_1275_, 3, v___x_1274_);
v___x_1276_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1277_ = l_Lean_Syntax_node1(v___x_1269_, v___x_1276_, v___x_1264_);
v___x_1278_ = l_Lean_Syntax_node2(v___x_1269_, v___x_1270_, v___x_1275_, v___x_1277_);
v___x_1279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
lean_ctor_set(v___x_1279_, 1, v_a_843_);
return v___x_1279_;
}
}
}
else
{
lean_object* v_quotContext_1299_; lean_object* v_currMacroScope_1300_; lean_object* v_ref_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_dec(v___x_849_);
v_quotContext_1299_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1300_ = lean_ctor_get(v_a_842_, 2);
v_ref_1301_ = lean_ctor_get(v_a_842_, 5);
v___x_1302_ = l_Lean_SourceInfo_fromRef(v_ref_1301_, v___x_853_);
v___x_1303_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1304_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52);
v___x_1305_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54));
lean_inc_n(v_currMacroScope_1300_, 2);
lean_inc_n(v_quotContext_1299_, 2);
v___x_1306_ = l_Lean_addMacroScope(v_quotContext_1299_, v___x_1305_, v_currMacroScope_1300_);
v___x_1307_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__58));
lean_inc_n(v___x_1302_, 3);
v___x_1308_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1302_);
lean_ctor_set(v___x_1308_, 1, v___x_1304_);
lean_ctor_set(v___x_1308_, 2, v___x_1306_);
lean_ctor_set(v___x_1308_, 3, v___x_1307_);
v___x_1309_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1310_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__60, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__60_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__60);
v___x_1311_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__62));
v___x_1312_ = l_Lean_addMacroScope(v_quotContext_1299_, v___x_1311_, v_currMacroScope_1300_);
v___x_1313_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__66));
v___x_1314_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1302_);
lean_ctor_set(v___x_1314_, 1, v___x_1310_);
lean_ctor_set(v___x_1314_, 2, v___x_1312_);
lean_ctor_set(v___x_1314_, 3, v___x_1313_);
v___x_1315_ = l_Lean_Syntax_node1(v___x_1302_, v___x_1309_, v___x_1314_);
v___x_1316_ = l_Lean_Syntax_node2(v___x_1302_, v___x_1303_, v___x_1308_, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set(v___x_1317_, 1, v_a_843_);
return v___x_1317_;
}
}
else
{
lean_object* v_quotContext_1318_; lean_object* v_currMacroScope_1319_; lean_object* v_ref_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
lean_dec(v___x_849_);
v_quotContext_1318_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1319_ = lean_ctor_get(v_a_842_, 2);
v_ref_1320_ = lean_ctor_get(v_a_842_, 5);
v___x_1321_ = l_Lean_SourceInfo_fromRef(v_ref_1320_, v___x_851_);
v___x_1322_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__1));
v___x_1323_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__52);
v___x_1324_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__54));
lean_inc_n(v_currMacroScope_1319_, 2);
lean_inc_n(v_quotContext_1318_, 2);
v___x_1325_ = l_Lean_addMacroScope(v_quotContext_1318_, v___x_1324_, v_currMacroScope_1319_);
v___x_1326_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__58));
lean_inc_n(v___x_1321_, 3);
v___x_1327_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1321_);
lean_ctor_set(v___x_1327_, 1, v___x_1323_);
lean_ctor_set(v___x_1327_, 2, v___x_1325_);
lean_ctor_set(v___x_1327_, 3, v___x_1326_);
v___x_1328_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__6___closed__0));
v___x_1329_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__68, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__68_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__68);
v___x_1330_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__69));
v___x_1331_ = l_Lean_addMacroScope(v_quotContext_1318_, v___x_1330_, v_currMacroScope_1319_);
v___x_1332_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__73));
v___x_1333_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1321_);
lean_ctor_set(v___x_1333_, 1, v___x_1329_);
lean_ctor_set(v___x_1333_, 2, v___x_1331_);
lean_ctor_set(v___x_1333_, 3, v___x_1332_);
v___x_1334_ = l_Lean_Syntax_node1(v___x_1321_, v___x_1328_, v___x_1333_);
v___x_1335_ = l_Lean_Syntax_node2(v___x_1321_, v___x_1322_, v___x_1327_, v___x_1334_);
v___x_1336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
lean_ctor_set(v___x_1336_, 1, v_a_843_);
return v___x_1336_;
}
}
else
{
lean_object* v_quotContext_1337_; lean_object* v_currMacroScope_1338_; lean_object* v_ref_1339_; uint8_t v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
lean_dec(v___x_849_);
v_quotContext_1337_ = lean_ctor_get(v_a_842_, 1);
v_currMacroScope_1338_ = lean_ctor_get(v_a_842_, 2);
v_ref_1339_ = lean_ctor_get(v_a_842_, 5);
v___x_1340_ = 0;
v___x_1341_ = l_Lean_SourceInfo_fromRef(v_ref_1339_, v___x_1340_);
v___x_1342_ = lean_obj_once(&l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__75, &l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__75_once, _init_l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__75);
v___x_1343_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__76));
lean_inc(v_currMacroScope_1338_);
lean_inc(v_quotContext_1337_);
v___x_1344_ = l_Lean_addMacroScope(v_quotContext_1337_, v___x_1343_, v_currMacroScope_1338_);
v___x_1345_ = ((lean_object*)(l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___closed__80));
v___x_1346_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1341_);
lean_ctor_set(v___x_1346_, 1, v___x_1342_);
lean_ctor_set(v___x_1346_, 2, v___x_1344_);
lean_ctor_set(v___x_1346_, 3, v___x_1345_);
v___x_1347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
lean_ctor_set(v___x_1347_, 1, v_a_843_);
return v___x_1347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1___boxed(lean_object* v_x_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v_res_1351_; 
v_res_1351_ = l_Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1(v_x_1348_, v_a_1349_, v_a_1350_);
lean_dec_ref(v_a_1349_);
return v_res_1351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4(uint8_t v___x_1352_, size_t v_sz_1353_, size_t v_i_1354_, lean_object* v_bs_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___redArg(v___x_1352_, v_sz_1353_, v_i_1354_, v_bs_1355_, v___y_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4___boxed(lean_object* v___x_1359_, lean_object* v_sz_1360_, lean_object* v_i_1361_, lean_object* v_bs_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
uint8_t v___x_35362__boxed_1365_; size_t v_sz_boxed_1366_; size_t v_i_boxed_1367_; lean_object* v_res_1368_; 
v___x_35362__boxed_1365_ = lean_unbox(v___x_1359_);
v_sz_boxed_1366_ = lean_unbox_usize(v_sz_1360_);
lean_dec(v_sz_1360_);
v_i_boxed_1367_ = lean_unbox_usize(v_i_1361_);
lean_dec(v_i_1361_);
v_res_1368_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Json___aux__Lean__Data__Json__Elab______macroRules__Lean__Json__termJson_x25____1_spec__4_spec__4(v___x_35362__boxed_1365_, v_sz_boxed_1366_, v_i_boxed_1367_, v_bs_1362_, v___y_1363_, v___y_1364_);
lean_dec_ref(v___y_1363_);
return v_res_1368_;
}
}
lean_object* runtime_initialize_Lean_Data_Json_FromToJson(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Json_Elab(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Json_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Syntax(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Json_Elab(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Category_json = _init_l_Lean_Parser_Category_json();
lean_mark_persistent(l_Lean_Parser_Category_json);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json_FromToJson(uint8_t builtin);
lean_object* initialize_Lean_Syntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Json_Elab(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Json_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Json_Elab(builtin);
}
#ifdef __cplusplus
}
#endif

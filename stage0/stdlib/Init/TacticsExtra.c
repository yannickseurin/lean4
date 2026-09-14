// Lean compiler output
// Module: Init.TacticsExtra
// Imports: public meta import Init.Meta public import Init.Tactics import Init.Data.Array.Basic
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_location;
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_rwRuleSeq;
extern lean_object* l_Lean_Parser_Tactic_optConfig;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_toNat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__2 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__2_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__3 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__3_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__5 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__5_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__8 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__8_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__10 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__10_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__12 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__12_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "withAnnotateState"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__14 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__14_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(27, 100, 151, 108, 10, 177, 75, 150)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "with_annotate_state"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__16 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__16_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__17 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__17_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__17_value),LEAN_SCALAR_PTR_LITERAL(244, 42, 145, 170, 145, 147, 228, 105)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18_value;
static lean_once_cell_t l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__20 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__20_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "case"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__24 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__24_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__24_value),LEAN_SCALAR_PTR_LITERAL(216, 244, 120, 128, 139, 198, 139, 51)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__26 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__26_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__26_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__28 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__28_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__29_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__29 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__29_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__30 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__30_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__31 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__31_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__31_value),LEAN_SCALAR_PTR_LITERAL(138, 85, 70, 0, 206, 11, 146, 59)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32_value;
static const lean_array_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__33 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__33_value;
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__0 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__0_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__1 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__1_value;
static lean_once_cell_t l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__2;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(175, 67, 188, 228, 198, 126, 180, 88)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__3 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__0 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__0_value;
static lean_once_cell_t l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__1;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 129, 35, 203, 24, 252, 22, 100)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__2 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__0 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__0_value;
static const lean_closure_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__1 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__1_value;
static const lean_closure_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__0_value),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__1_value)} };
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__2 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__2_value;
static const lean_closure_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__0_value),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__1_value)} };
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__3 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__3_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__4 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__4_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__4_value),LEAN_SCALAR_PTR_LITERAL(68, 209, 138, 110, 159, 245, 114, 22)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__6 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__6_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "openSimple"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__7 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__7_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__6_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__7_value),LEAN_SCALAR_PTR_LITERAL(171, 238, 134, 92, 162, 110, 43, 67)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__9 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__9_value;
static lean_once_cell_t l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__10;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__9_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__11 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__11_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__11_value)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__12 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__12_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__13 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__13_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__14 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__14_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "refine"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__15 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__15_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16_value_aux_2),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__15_value),LEAN_SCALAR_PTR_LITERAL(49, 130, 130, 160, 131, 48, 178, 245)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16_value;
static const lean_string_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__17 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__17_value;
static const lean_array_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__18 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__18_value;
static const lean_ctor_object l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13_value),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__18_value)}};
static const lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__19 = (const lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__19_value;
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "termDepIfThenElse"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 94, 17, 11, 145, 108, 236, 173)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "tacDepIfThenElse"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 194, 228, 123, 20, 164, 36, 28)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__1;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacIfThenElse"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 110, 54, 113, 164, 84, 110, 206)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tacticIterate____"};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 47, 56, 55, 14, 165, 150, 141)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "iterate"};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__7_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppSpace"};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__8_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(207, 47, 58, 43, 30, 240, 125, 246)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__9 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__9_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__9_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__10 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__10_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__11 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__11_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__11_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__12 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__12_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__12_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__13 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__13_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__10_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__13_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__14 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__14_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__7_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__14_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__15 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__15_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__5_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__15_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__16 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__16_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__16_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__10_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__17 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__17_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(13, 106, 54, 236, 164, 218, 24, 154)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__18 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__18_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__18_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__19 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__19_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__17_value),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__19_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__20 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__20_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticIterate_________00__closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__20_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticIterate_________00__closed__21 = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__21_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_tacticIterate________ = (const lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__21_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "seq1"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 140, 137, 56, 141, 11, 143, 117)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tacticTry_"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 109, 187, 155, 23, 130, 33, 152)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "try"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "tacticRw_mod_cast___"};
static const lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 49, 244, 227, 69, 23, 138, 35)}};
static const lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "rw_mod_cast"};
static const lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__3_value;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_tacticRw__mod__cast______;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rwRuleSeq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(170, 212, 96, 120, 212, 17, 101, 100)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tacticNorm_cast__"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(236, 48, 221, 117, 176, 58, 9, 174)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "norm_cast"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(124, 82, 43, 228, 241, 102, 135, 24)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "at"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "locationWildcard"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(134, 218, 71, 35, 220, 118, 132, 17)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rwSeq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(50, 16, 185, 246, 153, 187, 181, 153)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rw"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__17_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1___boxed__const__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "tacticExact_mod_cast_"};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(112, 115, 207, 153, 244, 77, 215, 161)}};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "exact_mod_cast "};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__6 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__7 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__7_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__8 = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_tacticExact__mod__cast__ = (const lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "modCast"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__3_value_aux_0),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 150, 13, 6, 253, 161, 172, 138)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__3_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mod_cast"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__4_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__5 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__5_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__7 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__7_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__9 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__9_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__10 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__10_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__11 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__11_value;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__14_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__14_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__14 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__14_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__14_value)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__15 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__15_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__16 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__16_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__17 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "tacticApply_mod_cast_"};
static const lean_object* l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(235, 137, 51, 123, 254, 235, 255, 128)}};
static const lean_object* l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "apply_mod_cast "};
static const lean_object* l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticIterate_________00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__3_value),((lean_object*)&l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__6_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__4_value)}};
static const lean_object* l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__5 = (const lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Tactic_tacticApply__mod__cast__ = (const lean_object*)&l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__5_value;
static const lean_string_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1_value_aux_0),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1_value_aux_1),((lean_object*)&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 125, 237, 78, 179, 140, 218, 80)}};
static const lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Array_mkArray0___redArg();
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0(lean_object* v_tk_79_, lean_object* v_holeOrTacticSeq_80_, lean_object* v_mkName_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_84_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4));
lean_inc(v_holeOrTacticSeq_80_);
v___x_85_ = l_Lean_Syntax_isOfKind(v_holeOrTacticSeq_80_, v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6));
lean_inc(v_holeOrTacticSeq_80_);
v___x_87_ = l_Lean_Syntax_isOfKind(v_holeOrTacticSeq_80_, v___x_86_);
if (v___x_87_ == 0)
{
uint8_t v___x_88_; 
v___x_88_ = l_Lean_Syntax_isMissing(v_tk_79_);
if (v___x_88_ == 0)
{
lean_object* v_macroScope_89_; lean_object* v_traceMsgs_90_; lean_object* v_expandedMacroDecls_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_169_; 
v_macroScope_89_ = lean_ctor_get(v___y_83_, 0);
v_traceMsgs_90_ = lean_ctor_get(v___y_83_, 1);
v_expandedMacroDecls_91_ = lean_ctor_get(v___y_83_, 2);
v_isSharedCheck_169_ = !lean_is_exclusive(v___y_83_);
if (v_isSharedCheck_169_ == 0)
{
v___x_93_ = v___y_83_;
v_isShared_94_ = v_isSharedCheck_169_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_expandedMacroDecls_91_);
lean_inc(v_traceMsgs_90_);
lean_inc(v_macroScope_89_);
lean_dec(v___y_83_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_169_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_methods_95_; lean_object* v_quotContext_96_; lean_object* v_currRecDepth_97_; lean_object* v_maxRecDepth_98_; lean_object* v_ref_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_103_; 
v_methods_95_ = lean_ctor_get(v___y_82_, 0);
v_quotContext_96_ = lean_ctor_get(v___y_82_, 1);
v_currRecDepth_97_ = lean_ctor_get(v___y_82_, 3);
v_maxRecDepth_98_ = lean_ctor_get(v___y_82_, 4);
v_ref_99_ = lean_ctor_get(v___y_82_, 5);
v___x_100_ = lean_unsigned_to_nat(1u);
v___x_101_ = lean_nat_add(v_macroScope_89_, v___x_100_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 0, v___x_101_);
v___x_103_ = v___x_93_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_101_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v_traceMsgs_90_);
lean_ctor_set(v_reuseFailAlloc_168_, 2, v_expandedMacroDecls_91_);
v___x_103_ = v_reuseFailAlloc_168_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_inc(v_ref_99_);
lean_inc(v_maxRecDepth_98_);
lean_inc(v_currRecDepth_97_);
lean_inc(v_quotContext_96_);
lean_inc(v_methods_95_);
v___x_104_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_104_, 0, v_methods_95_);
lean_ctor_set(v___x_104_, 1, v_quotContext_96_);
lean_ctor_set(v___x_104_, 2, v_macroScope_89_);
lean_ctor_set(v___x_104_, 3, v_currRecDepth_97_);
lean_ctor_set(v___x_104_, 4, v_maxRecDepth_98_);
lean_ctor_set(v___x_104_, 5, v_ref_99_);
v___x_105_ = lean_apply_2(v_mkName_81_, v___x_104_, v___x_103_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_158_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
v_a_107_ = lean_ctor_get(v___x_105_, 1);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_158_ == 0)
{
v___x_109_ = v___x_105_;
v_isShared_110_ = v_isSharedCheck_158_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_inc(v_a_106_);
lean_dec(v___x_105_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_158_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
uint8_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v_ref_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_111_ = 1;
v___x_112_ = l_Lean_Syntax_getArg(v_a_106_, v___x_100_);
v___x_113_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9));
v___x_114_ = lean_box(0);
v___x_115_ = l_Lean_SourceInfo_fromRef(v___x_114_, v___x_88_);
v___x_116_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11));
v___x_117_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13));
v___x_118_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__15));
v___x_119_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__16));
lean_inc_n(v___x_115_, 10);
v___x_120_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_115_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__17));
v___x_122_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18));
v___x_123_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_115_);
lean_ctor_set(v___x_123_, 1, v___x_121_);
v___x_124_ = l_Lean_Syntax_node1(v___x_115_, v___x_122_, v___x_123_);
lean_inc(v_tk_79_);
v___x_125_ = l_Lean_Syntax_node3(v___x_115_, v___x_118_, v___x_120_, v_tk_79_, v___x_124_);
v___x_126_ = lean_obj_once(&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19, &l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19_once, _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19);
v___x_127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_127_, 0, v___x_115_);
lean_ctor_set(v___x_127_, 1, v___x_117_);
lean_ctor_set(v___x_127_, 2, v___x_126_);
v___x_128_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21));
v___x_129_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22));
v___x_130_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_115_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23));
v___x_132_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_115_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
v___x_133_ = l_Lean_Syntax_node3(v___x_115_, v___x_128_, v___x_130_, v_holeOrTacticSeq_80_, v___x_132_);
v___x_134_ = l_Lean_Syntax_node3(v___x_115_, v___x_117_, v___x_125_, v___x_127_, v___x_133_);
v___x_135_ = l_Lean_Syntax_node1(v___x_115_, v___x_116_, v___x_134_);
v___x_136_ = l_Lean_Syntax_node1(v___x_115_, v___x_113_, v___x_135_);
v_ref_137_ = l_Lean_replaceRef(v_tk_79_, v_ref_99_);
v___x_138_ = l_Lean_SourceInfo_fromRef(v_ref_137_, v___x_88_);
lean_dec(v_ref_137_);
v___x_139_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__24));
v___x_140_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__25));
lean_inc_n(v___x_138_, 5);
v___x_141_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_138_);
lean_ctor_set(v___x_141_, 1, v___x_139_);
v___x_142_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__27));
v___x_143_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__29));
v___x_144_ = l_Lean_Syntax_node1(v___x_138_, v___x_143_, v___x_112_);
v___x_145_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_145_, 0, v___x_138_);
lean_ctor_set(v___x_145_, 1, v___x_117_);
lean_ctor_set(v___x_145_, 2, v___x_126_);
v___x_146_ = l_Lean_Syntax_node2(v___x_138_, v___x_142_, v___x_144_, v___x_145_);
v___x_147_ = l_Lean_Syntax_node1(v___x_138_, v___x_117_, v___x_146_);
v___x_148_ = l_Lean_SourceInfo_fromRef(v_tk_79_, v___x_111_);
lean_dec(v_tk_79_);
v___x_149_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__30));
v___x_150_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = l_Lean_Syntax_node4(v___x_138_, v___x_140_, v___x_141_, v___x_147_, v___x_150_, v___x_136_);
v___x_152_ = lean_mk_empty_array_with_capacity(v___x_100_);
v___x_153_ = lean_array_push(v___x_152_, v___x_151_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_a_106_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v___x_154_);
v___x_156_ = v___x_109_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_a_107_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
else
{
lean_object* v_a_159_; lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_dec(v_holeOrTacticSeq_80_);
lean_dec(v_tk_79_);
v_a_159_ = lean_ctor_get(v___x_105_, 0);
v_a_160_ = lean_ctor_get(v___x_105_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_105_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_inc(v_a_159_);
lean_dec(v___x_105_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_159_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
}
else
{
lean_object* v_ref_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec_ref(v_mkName_81_);
lean_dec(v_holeOrTacticSeq_80_);
lean_dec(v_tk_79_);
v_ref_170_ = lean_ctor_get(v___y_82_, 5);
v___x_171_ = l_Lean_SourceInfo_fromRef(v_ref_170_, v___x_87_);
v___x_172_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__31));
v___x_173_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__32));
lean_inc(v___x_171_);
v___x_174_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_171_);
lean_ctor_set(v___x_174_, 1, v___x_172_);
v___x_175_ = l_Lean_Syntax_node1(v___x_171_, v___x_173_, v___x_174_);
v___x_176_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__33));
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_175_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___y_83_);
return v___x_178_;
}
}
else
{
lean_object* v___x_179_; 
lean_dec(v_holeOrTacticSeq_80_);
lean_dec(v_tk_79_);
lean_inc_ref(v___y_82_);
v___x_179_ = lean_apply_2(v_mkName_81_, v___y_82_, v___y_83_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_190_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
v_a_181_ = lean_ctor_get(v___x_179_, 1);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_190_ == 0)
{
v___x_183_ = v___x_179_;
v_isShared_184_ = v_isSharedCheck_190_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_inc(v_a_180_);
lean_dec(v___x_179_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_190_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_185_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__33));
v___x_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_186_, 0, v_a_180_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 0, v___x_186_);
v___x_188_ = v___x_183_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_186_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_a_181_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
else
{
lean_object* v_a_191_; lean_object* v_a_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_199_; 
v_a_191_ = lean_ctor_get(v___x_179_, 0);
v_a_192_ = lean_ctor_get(v___x_179_, 1);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_199_ == 0)
{
v___x_194_ = v___x_179_;
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_inc(v_a_191_);
lean_dec(v___x_179_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_197_; 
if (v_isShared_195_ == 0)
{
v___x_197_ = v___x_194_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_a_191_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_a_192_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec_ref(v_mkName_81_);
lean_dec(v_tk_79_);
v___x_200_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__33));
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v_holeOrTacticSeq_80_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v___y_83_);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___boxed(lean_object* v_tk_203_, lean_object* v_holeOrTacticSeq_204_, lean_object* v_mkName_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0(v_tk_203_, v_holeOrTacticSeq_204_, v_mkName_205_, v___y_206_, v___y_207_);
lean_dec_ref(v___y_206_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__1(lean_object* v_ctx_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_ref_212_; lean_object* v___x_213_; 
v_ref_212_ = lean_ctor_get(v_ctx_209_, 5);
lean_inc(v_ref_212_);
v___x_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_213_, 0, v_ref_212_);
lean_ctor_set(v___x_213_, 1, v___y_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__1___boxed(lean_object* v_ctx_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__1(v_ctx_214_, v___y_215_, v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec_ref(v_ctx_214_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__2(lean_object* v_____do__lift_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
uint8_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = 0;
v___x_222_ = l_Lean_SourceInfo_fromRef(v_____do__lift_218_, v___x_221_);
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___y_220_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__2___boxed(lean_object* v_____do__lift_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__2(v_____do__lift_224_, v___y_225_, v___y_226_);
lean_dec_ref(v___y_225_);
lean_dec(v_____do__lift_224_);
return v_res_227_;
}
}
static lean_object* _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__2(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__1));
v___x_231_ = l_String_toRawSubstring_x27(v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3(lean_object* v___f_234_, lean_object* v___f_235_, lean_object* v___y_236_, lean_object* v___y_237_){
_start:
{
lean_object* v___x_238_; 
lean_inc_ref_n(v___y_236_, 2);
v___x_238_ = lean_apply_3(v___f_234_, v___y_236_, v___y_236_, v___y_237_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; lean_object* v_a_240_; lean_object* v___x_241_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_a_239_);
v_a_240_ = lean_ctor_get(v___x_238_, 1);
lean_inc(v_a_240_);
lean_dec_ref_known(v___x_238_, 2);
lean_inc_ref(v___y_236_);
v___x_241_ = lean_apply_3(v___f_235_, v_a_239_, v___y_236_, v_a_240_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_261_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
v_a_243_ = lean_ctor_get(v___x_241_, 1);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_261_ == 0)
{
v___x_245_ = v___x_241_;
v_isShared_246_ = v_isSharedCheck_261_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_inc(v_a_242_);
lean_dec(v___x_241_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_261_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v_quotContext_247_; lean_object* v_currMacroScope_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
v_quotContext_247_ = lean_ctor_get(v___y_236_, 1);
v_currMacroScope_248_ = lean_ctor_get(v___y_236_, 2);
v___x_249_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4));
v___x_250_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__0));
lean_inc_n(v_a_242_, 2);
v___x_251_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_251_, 0, v_a_242_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = lean_obj_once(&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__2, &l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__2_once, _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__2);
v___x_253_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__3));
lean_inc(v_currMacroScope_248_);
lean_inc(v_quotContext_247_);
v___x_254_ = l_Lean_addMacroScope(v_quotContext_247_, v___x_253_, v_currMacroScope_248_);
v___x_255_ = lean_box(0);
v___x_256_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_256_, 0, v_a_242_);
lean_ctor_set(v___x_256_, 1, v___x_252_);
lean_ctor_set(v___x_256_, 2, v___x_254_);
lean_ctor_set(v___x_256_, 3, v___x_255_);
v___x_257_ = l_Lean_Syntax_node2(v_a_242_, v___x_249_, v___x_251_, v___x_256_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 0, v___x_257_);
v___x_259_ = v___x_245_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_a_243_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
else
{
lean_object* v_a_262_; lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
v_a_262_ = lean_ctor_get(v___x_241_, 0);
v_a_263_ = lean_ctor_get(v___x_241_, 1);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_241_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_inc(v_a_262_);
lean_dec(v___x_241_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_262_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
else
{
lean_object* v_a_271_; lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
lean_dec_ref(v___f_235_);
v_a_271_ = lean_ctor_get(v___x_238_, 0);
v_a_272_ = lean_ctor_get(v___x_238_, 1);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_238_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_inc(v_a_271_);
lean_dec(v___x_238_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_271_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___boxed(lean_object* v___f_280_, lean_object* v___f_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3(v___f_280_, v___f_281_, v___y_282_, v___y_283_);
lean_dec_ref(v___y_282_);
return v_res_284_;
}
}
static lean_object* _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__1(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__0));
v___x_287_ = l_String_toRawSubstring_x27(v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4(lean_object* v___f_290_, lean_object* v___f_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v___x_294_; 
lean_inc_ref_n(v___y_292_, 2);
v___x_294_ = lean_apply_3(v___f_290_, v___y_292_, v___y_292_, v___y_293_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; lean_object* v_a_296_; lean_object* v___x_297_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_295_);
v_a_296_ = lean_ctor_get(v___x_294_, 1);
lean_inc(v_a_296_);
lean_dec_ref_known(v___x_294_, 2);
lean_inc_ref(v___y_292_);
v___x_297_ = lean_apply_3(v___f_291_, v_a_295_, v___y_292_, v_a_296_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_317_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_a_299_ = lean_ctor_get(v___x_297_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_317_ == 0)
{
v___x_301_ = v___x_297_;
v_isShared_302_ = v_isSharedCheck_317_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_317_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v_quotContext_303_; lean_object* v_currMacroScope_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_315_; 
v_quotContext_303_ = lean_ctor_get(v___y_292_, 1);
v_currMacroScope_304_ = lean_ctor_get(v___y_292_, 2);
v___x_305_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__4));
v___x_306_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__3___closed__0));
lean_inc_n(v_a_298_, 2);
v___x_307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_307_, 0, v_a_298_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = lean_obj_once(&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__1, &l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__1_once, _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__1);
v___x_309_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___closed__2));
lean_inc(v_currMacroScope_304_);
lean_inc(v_quotContext_303_);
v___x_310_ = l_Lean_addMacroScope(v_quotContext_303_, v___x_309_, v_currMacroScope_304_);
v___x_311_ = lean_box(0);
v___x_312_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_312_, 0, v_a_298_);
lean_ctor_set(v___x_312_, 1, v___x_308_);
lean_ctor_set(v___x_312_, 2, v___x_310_);
lean_ctor_set(v___x_312_, 3, v___x_311_);
v___x_313_ = l_Lean_Syntax_node2(v_a_298_, v___x_305_, v___x_307_, v___x_312_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_313_);
v___x_315_ = v___x_301_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v___x_313_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_a_299_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
else
{
lean_object* v_a_318_; lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
v_a_318_ = lean_ctor_get(v___x_297_, 0);
v_a_319_ = lean_ctor_get(v___x_297_, 1);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_297_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_inc(v_a_318_);
lean_dec(v___x_297_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_318_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec_ref(v___f_291_);
v_a_327_ = lean_ctor_get(v___x_294_, 0);
v_a_328_ = lean_ctor_get(v___x_294_, 1);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_294_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_inc(v_a_327_);
lean_dec(v___x_294_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_327_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4___boxed(lean_object* v___f_336_, lean_object* v___f_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__4(v___f_336_, v___f_337_, v___y_338_, v___y_339_);
lean_dec_ref(v___y_338_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse_spec__0(size_t v_sz_341_, size_t v_i_342_, lean_object* v_bs_343_){
_start:
{
uint8_t v___x_344_; 
v___x_344_ = lean_usize_dec_lt(v_i_342_, v_sz_341_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
v___x_345_ = l_unsafeCast___redArg(v_bs_343_);
lean_dec_ref(v_bs_343_);
return v___x_345_;
}
else
{
lean_object* v_v_346_; lean_object* v___x_347_; lean_object* v_bs_x27_348_; lean_object* v___x_349_; size_t v___x_350_; size_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_v_346_ = lean_array_uget(v_bs_343_, v_i_342_);
v___x_347_ = lean_unsigned_to_nat(0u);
v_bs_x27_348_ = lean_array_uset(v_bs_343_, v_i_342_, v___x_347_);
v___x_349_ = l_unsafeCast___redArg(v_v_346_);
lean_dec(v_v_346_);
v___x_350_ = ((size_t)1ULL);
v___x_351_ = lean_usize_add(v_i_342_, v___x_350_);
v___x_352_ = l_unsafeCast___redArg(v___x_349_);
lean_dec(v___x_349_);
v___x_353_ = lean_array_uset(v_bs_x27_348_, v_i_342_, v___x_352_);
v_i_342_ = v___x_351_;
v_bs_343_ = v___x_353_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse_spec__0___boxed(lean_object* v_sz_355_, lean_object* v_i_356_, lean_object* v_bs_357_){
_start:
{
size_t v_sz_boxed_358_; size_t v_i_boxed_359_; lean_object* v_res_360_; 
v_sz_boxed_358_ = lean_unbox_usize(v_sz_355_);
lean_dec(v_sz_355_);
v_i_boxed_359_ = lean_unbox_usize(v_i_356_);
lean_dec(v_i_356_);
v_res_360_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse_spec__0(v_sz_boxed_358_, v_i_boxed_359_, v_bs_357_);
return v_res_360_;
}
}
static lean_object* _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__10(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__9));
v___x_384_ = l_String_toRawSubstring_x27(v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse(lean_object* v_ifTk_406_, lean_object* v_thenTk_407_, lean_object* v_elseTk_408_, lean_object* v_pos_409_, lean_object* v_neg_410_, lean_object* v_mkIf_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v___f_414_; lean_object* v___x_415_; 
v___f_414_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__2));
v___x_415_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0(v_thenTk_407_, v_pos_409_, v___f_414_, v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v_a_417_; lean_object* v_fst_418_; lean_object* v_snd_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_512_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
v_a_417_ = lean_ctor_get(v___x_415_, 1);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_415_, 2);
v_fst_418_ = lean_ctor_get(v_a_416_, 0);
v_snd_419_ = lean_ctor_get(v_a_416_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v_a_416_);
if (v_isSharedCheck_512_ == 0)
{
v___x_421_ = v_a_416_;
v_isShared_422_ = v_isSharedCheck_512_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_snd_419_);
lean_inc(v_fst_418_);
lean_dec(v_a_416_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_512_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___f_423_; lean_object* v___x_424_; 
v___f_423_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__3));
v___x_424_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0(v_elseTk_408_, v_neg_410_, v___f_423_, v_a_412_, v_a_417_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v_a_426_; lean_object* v_fst_427_; lean_object* v_snd_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_502_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
v_a_426_ = lean_ctor_get(v___x_424_, 1);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_424_, 2);
v_fst_427_ = lean_ctor_get(v_a_425_, 0);
v_snd_428_ = lean_ctor_get(v_a_425_, 1);
v_isSharedCheck_502_ = !lean_is_exclusive(v_a_425_);
if (v_isSharedCheck_502_ == 0)
{
v___x_430_ = v_a_425_;
v_isShared_431_ = v_isSharedCheck_502_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_snd_428_);
lean_inc(v_fst_427_);
lean_dec(v_a_425_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_502_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_432_; 
lean_inc_ref(v_a_412_);
v___x_432_ = lean_apply_4(v_mkIf_411_, v_fst_418_, v_fst_427_, v_a_412_, v_a_426_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_501_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
v_a_434_ = lean_ctor_get(v___x_432_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_501_ == 0)
{
v___x_436_ = v___x_432_;
v_isShared_437_ = v_isSharedCheck_501_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_inc(v_a_433_);
lean_dec(v___x_432_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_501_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v_quotContext_438_; lean_object* v_currMacroScope_439_; lean_object* v_ref_440_; uint8_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v_quotContext_438_ = lean_ctor_get(v_a_412_, 1);
v_currMacroScope_439_ = lean_ctor_get(v_a_412_, 2);
v_ref_440_ = lean_ctor_get(v_a_412_, 5);
v___x_441_ = 0;
v___x_442_ = l_Lean_SourceInfo_fromRef(v_ref_440_, v___x_441_);
v___x_443_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21));
v___x_444_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22));
lean_inc(v___x_442_);
if (v_isShared_431_ == 0)
{
lean_ctor_set_tag(v___x_430_, 2);
lean_ctor_set(v___x_430_, 1, v___x_444_);
lean_ctor_set(v___x_430_, 0, v___x_442_);
v___x_446_ = v___x_430_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_442_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v___x_444_);
v___x_446_ = v_reuseFailAlloc_500_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_447_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9));
v___x_448_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11));
v___x_449_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13));
v___x_450_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__4));
v___x_451_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__5));
lean_inc(v___x_442_);
if (v_isShared_422_ == 0)
{
lean_ctor_set_tag(v___x_421_, 2);
lean_ctor_set(v___x_421_, 1, v___x_450_);
lean_ctor_set(v___x_421_, 0, v___x_442_);
v___x_453_ = v___x_421_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_442_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v___x_450_);
v___x_453_ = v_reuseFailAlloc_499_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; size_t v_sz_484_; size_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_497_; 
v___x_454_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__8));
v___x_455_ = lean_obj_once(&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__10, &l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__10_once, _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__10);
v___x_456_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__11));
lean_inc(v_currMacroScope_439_);
lean_inc(v_quotContext_438_);
v___x_457_ = l_Lean_addMacroScope(v_quotContext_438_, v___x_456_, v_currMacroScope_439_);
v___x_458_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__13));
lean_inc_n(v___x_442_, 18);
v___x_459_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_459_, 0, v___x_442_);
lean_ctor_set(v___x_459_, 1, v___x_455_);
lean_ctor_set(v___x_459_, 2, v___x_457_);
lean_ctor_set(v___x_459_, 3, v___x_458_);
v___x_460_ = l_Lean_Syntax_node1(v___x_442_, v___x_449_, v___x_459_);
v___x_461_ = l_Lean_Syntax_node1(v___x_442_, v___x_454_, v___x_460_);
v___x_462_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__14));
v___x_463_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_442_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__15));
v___x_465_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__16));
v___x_466_ = 1;
v___x_467_ = l_Lean_SourceInfo_fromRef(v_ifTk_406_, v___x_466_);
v___x_468_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v___x_464_);
v___x_469_ = l_Lean_Syntax_node2(v___x_442_, v___x_465_, v___x_468_, v_a_433_);
v___x_470_ = l_Lean_Syntax_node1(v___x_442_, v___x_449_, v___x_469_);
v___x_471_ = l_Lean_Syntax_node1(v___x_442_, v___x_448_, v___x_470_);
v___x_472_ = l_Lean_Syntax_node1(v___x_442_, v___x_447_, v___x_471_);
v___x_473_ = l_Lean_Syntax_node4(v___x_442_, v___x_451_, v___x_453_, v___x_461_, v___x_463_, v___x_472_);
v___x_474_ = l_Lean_Syntax_node1(v___x_442_, v___x_449_, v___x_473_);
v___x_475_ = l_Lean_Syntax_node1(v___x_442_, v___x_448_, v___x_474_);
v___x_476_ = l_Lean_Syntax_node1(v___x_442_, v___x_447_, v___x_475_);
v___x_477_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23));
v___x_478_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_442_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
lean_inc_ref(v___x_478_);
lean_inc_ref(v___x_446_);
v___x_479_ = l_Lean_Syntax_node3(v___x_442_, v___x_443_, v___x_446_, v___x_476_, v___x_478_);
v___x_480_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__17));
v___x_481_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_442_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = l_Array_mkArray2___redArg(v___x_479_, v___x_481_);
v___x_483_ = l_Array_append___redArg(v_snd_419_, v_snd_428_);
lean_dec(v_snd_428_);
v_sz_484_ = lean_array_size(v___x_483_);
v___x_485_ = ((size_t)0ULL);
v___x_486_ = l_unsafeCast___redArg(v___x_483_);
lean_dec_ref(v___x_483_);
v___x_487_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse_spec__0(v_sz_484_, v___x_485_, v___x_486_);
v___x_488_ = l_unsafeCast___redArg(v___x_487_);
lean_dec_ref(v___x_487_);
v___x_489_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__19));
v___x_490_ = l_Lean_mkSepArray(v___x_488_, v___x_489_);
lean_dec(v___x_488_);
v___x_491_ = l_Array_append___redArg(v___x_482_, v___x_490_);
lean_dec_ref(v___x_490_);
v___x_492_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_492_, 0, v___x_442_);
lean_ctor_set(v___x_492_, 1, v___x_449_);
lean_ctor_set(v___x_492_, 2, v___x_491_);
v___x_493_ = l_Lean_Syntax_node1(v___x_442_, v___x_448_, v___x_492_);
v___x_494_ = l_Lean_Syntax_node1(v___x_442_, v___x_447_, v___x_493_);
v___x_495_ = l_Lean_Syntax_node3(v___x_442_, v___x_443_, v___x_446_, v___x_494_, v___x_478_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_495_);
v___x_497_ = v___x_436_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___x_495_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_a_434_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
}
else
{
lean_del_object(v___x_430_);
lean_dec(v_snd_428_);
lean_del_object(v___x_421_);
lean_dec(v_snd_419_);
return v___x_432_;
}
}
}
else
{
lean_object* v_a_503_; lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
lean_del_object(v___x_421_);
lean_dec(v_snd_419_);
lean_dec(v_fst_418_);
lean_dec_ref(v_mkIf_411_);
v_a_503_ = lean_ctor_get(v___x_424_, 0);
v_a_504_ = lean_ctor_get(v___x_424_, 1);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_424_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_inc(v_a_503_);
lean_dec(v___x_424_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_503_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
}
else
{
lean_object* v_a_513_; lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec_ref(v_mkIf_411_);
lean_dec(v_neg_410_);
lean_dec(v_elseTk_408_);
v_a_513_ = lean_ctor_get(v___x_415_, 0);
v_a_514_ = lean_ctor_get(v___x_415_, 1);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_415_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_inc(v_a_513_);
lean_dec(v___x_415_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_513_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___boxed(lean_object* v_ifTk_522_, lean_object* v_thenTk_523_, lean_object* v_elseTk_524_, lean_object* v_pos_525_, lean_object* v_neg_526_, lean_object* v_mkIf_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse(v_ifTk_522_, v_thenTk_523_, v_elseTk_524_, v_pos_525_, v_neg_526_, v_mkIf_527_, v_a_528_, v_a_529_);
lean_dec_ref(v_a_528_);
lean_dec(v_ifTk_522_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0(lean_object* v___x_538_, lean_object* v___x_539_, lean_object* v_pos_540_, lean_object* v_neg_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v_ref_544_; uint8_t v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_ref_544_ = lean_ctor_get(v___y_542_, 5);
v___x_545_ = 0;
v___x_546_ = l_Lean_SourceInfo_fromRef(v_ref_544_, v___x_545_);
v___x_547_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__1));
v___x_548_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__2));
lean_inc_n(v___x_546_, 4);
v___x_549_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_546_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__3));
v___x_551_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_546_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
v___x_552_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__4));
v___x_553_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_546_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__5));
v___x_555_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_546_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
v___x_556_ = l_Lean_Syntax_node8(v___x_546_, v___x_547_, v___x_549_, v___x_538_, v___x_551_, v___x_539_, v___x_553_, v_pos_540_, v___x_555_, v_neg_541_);
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
lean_ctor_set(v___x_557_, 1, v___y_543_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___boxed(lean_object* v___x_558_, lean_object* v___x_559_, lean_object* v_pos_560_, lean_object* v_neg_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0(v___x_558_, v___x_559_, v_pos_560_, v_neg_561_, v___y_562_, v___y_563_);
lean_dec_ref(v___y_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1(lean_object* v_x_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_574_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___closed__1));
lean_inc(v_x_571_);
v___x_575_ = l_Lean_Syntax_isOfKind(v_x_571_, v___x_574_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec(v_x_571_);
v___x_576_ = lean_box(1);
v___x_577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
lean_ctor_set(v___x_577_, 1, v_a_573_);
return v___x_577_;
}
else
{
lean_object* v_methods_578_; lean_object* v_quotContext_579_; lean_object* v_currMacroScope_580_; lean_object* v_currRecDepth_581_; lean_object* v_maxRecDepth_582_; lean_object* v_ref_583_; lean_object* v___x_584_; lean_object* v_tk_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___f_590_; lean_object* v___x_591_; lean_object* v_ttk_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v_etk_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v_ref_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v_methods_578_ = lean_ctor_get(v_a_572_, 0);
v_quotContext_579_ = lean_ctor_get(v_a_572_, 1);
v_currMacroScope_580_ = lean_ctor_get(v_a_572_, 2);
v_currRecDepth_581_ = lean_ctor_get(v_a_572_, 3);
v_maxRecDepth_582_ = lean_ctor_get(v_a_572_, 4);
v_ref_583_ = lean_ctor_get(v_a_572_, 5);
v___x_584_ = lean_unsigned_to_nat(0u);
v_tk_585_ = l_Lean_Syntax_getArg(v_x_571_, v___x_584_);
v___x_586_ = lean_unsigned_to_nat(1u);
v___x_587_ = l_Lean_Syntax_getArg(v_x_571_, v___x_586_);
v___x_588_ = lean_unsigned_to_nat(3u);
v___x_589_ = l_Lean_Syntax_getArg(v_x_571_, v___x_588_);
v___f_590_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___boxed), 6, 2);
lean_closure_set(v___f_590_, 0, v___x_587_);
lean_closure_set(v___f_590_, 1, v___x_589_);
v___x_591_ = lean_unsigned_to_nat(4u);
v_ttk_592_ = l_Lean_Syntax_getArg(v_x_571_, v___x_591_);
v___x_593_ = lean_unsigned_to_nat(5u);
v___x_594_ = l_Lean_Syntax_getArg(v_x_571_, v___x_593_);
v___x_595_ = lean_unsigned_to_nat(6u);
v_etk_596_ = l_Lean_Syntax_getArg(v_x_571_, v___x_595_);
v___x_597_ = lean_unsigned_to_nat(7u);
v___x_598_ = l_Lean_Syntax_getArg(v_x_571_, v___x_597_);
lean_dec(v_x_571_);
v_ref_599_ = l_Lean_replaceRef(v_tk_585_, v_ref_583_);
lean_inc(v_maxRecDepth_582_);
lean_inc(v_currRecDepth_581_);
lean_inc(v_currMacroScope_580_);
lean_inc(v_quotContext_579_);
lean_inc(v_methods_578_);
v___x_600_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_600_, 0, v_methods_578_);
lean_ctor_set(v___x_600_, 1, v_quotContext_579_);
lean_ctor_set(v___x_600_, 2, v_currMacroScope_580_);
lean_ctor_set(v___x_600_, 3, v_currRecDepth_581_);
lean_ctor_set(v___x_600_, 4, v_maxRecDepth_582_);
lean_ctor_set(v___x_600_, 5, v_ref_599_);
v___x_601_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse(v_tk_585_, v_ttk_592_, v_etk_596_, v___x_594_, v___x_598_, v___f_590_, v___x_600_, v_a_573_);
lean_dec_ref_known(v___x_600_, 6);
lean_dec(v_tk_585_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
v_a_603_ = lean_ctor_get(v___x_601_, 1);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_601_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_inc(v_a_602_);
lean_dec(v___x_601_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_602_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
else
{
lean_object* v_a_611_; lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
v_a_611_ = lean_ctor_get(v___x_601_, 0);
v_a_612_ = lean_ctor_get(v___x_601_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_601_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_inc(v_a_611_);
lean_dec(v___x_601_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_611_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___boxed(lean_object* v_x_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1(v_x_620_, v_a_621_, v_a_622_);
lean_dec_ref(v_a_621_);
return v_res_623_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__1(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__0));
v___x_626_ = l_String_toRawSubstring_x27(v___x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0(lean_object* v___x_629_, lean_object* v___x_630_, lean_object* v_pos_631_, lean_object* v_neg_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_quotContext_635_; lean_object* v_currMacroScope_636_; lean_object* v_ref_637_; uint8_t v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_quotContext_635_ = lean_ctor_get(v___y_633_, 1);
v_currMacroScope_636_ = lean_ctor_get(v___y_633_, 2);
v_ref_637_ = lean_ctor_get(v___y_633_, 5);
v___x_638_ = 0;
v___x_639_ = l_Lean_SourceInfo_fromRef(v_ref_637_, v___x_638_);
v___x_640_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__1));
v___x_641_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__2));
lean_inc_n(v___x_639_, 6);
v___x_642_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_639_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__28));
v___x_644_ = l_Lean_Name_mkStr2(v___x_629_, v___x_643_);
v___x_645_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__1, &l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__1_once, _init_l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__1);
v___x_646_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___closed__2));
lean_inc(v_currMacroScope_636_);
lean_inc(v_quotContext_635_);
v___x_647_ = l_Lean_addMacroScope(v_quotContext_635_, v___x_646_, v_currMacroScope_636_);
v___x_648_ = lean_box(0);
v___x_649_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_649_, 0, v___x_639_);
lean_ctor_set(v___x_649_, 1, v___x_645_);
lean_ctor_set(v___x_649_, 2, v___x_647_);
lean_ctor_set(v___x_649_, 3, v___x_648_);
v___x_650_ = l_Lean_Syntax_node1(v___x_639_, v___x_644_, v___x_649_);
v___x_651_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__3));
v___x_652_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_639_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___x_653_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__4));
v___x_654_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_639_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__5));
v___x_656_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_639_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = l_Lean_Syntax_node8(v___x_639_, v___x_640_, v___x_642_, v___x_650_, v___x_652_, v___x_630_, v___x_654_, v_pos_631_, v___x_656_, v_neg_632_);
v___x_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___y_634_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___boxed(lean_object* v___x_659_, lean_object* v___x_660_, lean_object* v_pos_661_, lean_object* v_neg_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0(v___x_659_, v___x_660_, v_pos_661_, v_neg_662_, v___y_663_, v___y_664_);
lean_dec_ref(v___y_663_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1(lean_object* v_x_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; uint8_t v___x_677_; 
v___x_675_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__0));
v___x_676_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___closed__1));
lean_inc(v_x_672_);
v___x_677_ = l_Lean_Syntax_isOfKind(v_x_672_, v___x_676_);
if (v___x_677_ == 0)
{
lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec(v_x_672_);
v___x_678_ = lean_box(1);
v___x_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v_a_674_);
return v___x_679_;
}
else
{
lean_object* v_methods_680_; lean_object* v_quotContext_681_; lean_object* v_currMacroScope_682_; lean_object* v_currRecDepth_683_; lean_object* v_maxRecDepth_684_; lean_object* v_ref_685_; lean_object* v___x_686_; lean_object* v_tk_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___f_690_; lean_object* v___x_691_; lean_object* v_ttk_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v_etk_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v_ref_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v_methods_680_ = lean_ctor_get(v_a_673_, 0);
v_quotContext_681_ = lean_ctor_get(v_a_673_, 1);
v_currMacroScope_682_ = lean_ctor_get(v_a_673_, 2);
v_currRecDepth_683_ = lean_ctor_get(v_a_673_, 3);
v_maxRecDepth_684_ = lean_ctor_get(v_a_673_, 4);
v_ref_685_ = lean_ctor_get(v_a_673_, 5);
v___x_686_ = lean_unsigned_to_nat(0u);
v_tk_687_ = l_Lean_Syntax_getArg(v_x_672_, v___x_686_);
v___x_688_ = lean_unsigned_to_nat(1u);
v___x_689_ = l_Lean_Syntax_getArg(v_x_672_, v___x_688_);
v___f_690_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___lam__0___boxed), 6, 2);
lean_closure_set(v___f_690_, 0, v___x_675_);
lean_closure_set(v___f_690_, 1, v___x_689_);
v___x_691_ = lean_unsigned_to_nat(2u);
v_ttk_692_ = l_Lean_Syntax_getArg(v_x_672_, v___x_691_);
v___x_693_ = lean_unsigned_to_nat(3u);
v___x_694_ = l_Lean_Syntax_getArg(v_x_672_, v___x_693_);
v___x_695_ = lean_unsigned_to_nat(4u);
v_etk_696_ = l_Lean_Syntax_getArg(v_x_672_, v___x_695_);
v___x_697_ = lean_unsigned_to_nat(5u);
v___x_698_ = l_Lean_Syntax_getArg(v_x_672_, v___x_697_);
lean_dec(v_x_672_);
v_ref_699_ = l_Lean_replaceRef(v_tk_687_, v_ref_685_);
lean_inc(v_maxRecDepth_684_);
lean_inc(v_currRecDepth_683_);
lean_inc(v_currMacroScope_682_);
lean_inc(v_quotContext_681_);
lean_inc(v_methods_680_);
v___x_700_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_700_, 0, v_methods_680_);
lean_ctor_set(v___x_700_, 1, v_quotContext_681_);
lean_ctor_set(v___x_700_, 2, v_currMacroScope_682_);
lean_ctor_set(v___x_700_, 3, v_currRecDepth_683_);
lean_ctor_set(v___x_700_, 4, v_maxRecDepth_684_);
lean_ctor_set(v___x_700_, 5, v_ref_699_);
v___x_701_ = l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse(v_tk_687_, v_ttk_692_, v_etk_696_, v___x_694_, v___x_698_, v___f_690_, v___x_700_, v_a_674_);
lean_dec_ref_known(v___x_700_, 6);
lean_dec(v_tk_687_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_a_703_ = lean_ctor_get(v___x_701_, 1);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_701_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_702_);
lean_ctor_set(v_reuseFailAlloc_709_, 1, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
else
{
lean_object* v_a_711_; lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
v_a_711_ = lean_ctor_get(v___x_701_, 0);
v_a_712_ = lean_ctor_get(v___x_701_, 1);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_701_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_inc(v_a_711_);
lean_dec(v___x_701_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_711_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1___boxed(lean_object* v_x_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacIfThenElse__1(v_x_720_, v_a_721_, v_a_722_);
lean_dec_ref(v_a_721_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1(lean_object* v_x_791_, lean_object* v_a_792_, lean_object* v_a_793_){
_start:
{
lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_794_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticIterate_________00__closed__1));
lean_inc(v_x_791_);
v___x_795_ = l_Lean_Syntax_isOfKind(v_x_791_, v___x_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec(v_x_791_);
v___x_796_ = lean_box(1);
v___x_797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
lean_ctor_set(v___x_797_, 1, v_a_793_);
return v___x_797_;
}
else
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_798_ = lean_unsigned_to_nat(0u);
v___x_799_ = lean_unsigned_to_nat(1u);
v___x_800_ = l_Lean_Syntax_getArg(v_x_791_, v___x_799_);
lean_inc(v___x_800_);
v___x_801_ = l_Lean_Syntax_matchesNull(v___x_800_, v___x_798_);
if (v___x_801_ == 0)
{
uint8_t v___x_802_; 
lean_inc(v___x_800_);
v___x_802_ = l_Lean_Syntax_matchesNull(v___x_800_, v___x_799_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec(v___x_800_);
lean_dec(v_x_791_);
v___x_803_ = lean_box(1);
v___x_804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
lean_ctor_set(v___x_804_, 1, v_a_793_);
return v___x_804_;
}
else
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_805_ = l_Lean_Syntax_getArg(v___x_800_, v___x_798_);
lean_dec(v___x_800_);
v___x_806_ = lean_unsigned_to_nat(2u);
v___x_807_ = l_Lean_Syntax_getArg(v_x_791_, v___x_806_);
lean_dec(v_x_791_);
if (v___x_801_ == 0)
{
lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_841_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9));
lean_inc(v___x_807_);
v___x_842_ = l_Lean_Syntax_isOfKind(v___x_807_, v___x_841_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; lean_object* v___x_844_; 
lean_dec(v___x_807_);
lean_dec(v___x_805_);
v___x_843_ = lean_box(1);
v___x_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
lean_ctor_set(v___x_844_, 1, v_a_793_);
return v___x_844_;
}
else
{
goto v___jp_808_;
}
}
else
{
goto v___jp_808_;
}
v___jp_808_:
{
lean_object* v___x_809_; uint8_t v_isZero_810_; 
v___x_809_ = l_Lean_Syntax_toNat(v___x_805_);
lean_dec(v___x_805_);
v_isZero_810_ = lean_nat_dec_eq(v___x_809_, v___x_798_);
if (v_isZero_810_ == 1)
{
lean_object* v_ref_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
lean_dec(v___x_809_);
lean_dec(v___x_807_);
v_ref_811_ = lean_ctor_get(v_a_792_, 5);
v___x_812_ = l_Lean_SourceInfo_fromRef(v_ref_811_, v___x_801_);
v___x_813_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__17));
v___x_814_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__18));
lean_inc(v___x_812_);
v___x_815_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_812_);
lean_ctor_set(v___x_815_, 1, v___x_813_);
v___x_816_ = l_Lean_Syntax_node1(v___x_812_, v___x_814_, v___x_815_);
v___x_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
lean_ctor_set(v___x_817_, 1, v_a_793_);
return v___x_817_;
}
else
{
lean_object* v_ref_818_; lean_object* v_n_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v_ref_818_ = lean_ctor_get(v_a_792_, 5);
v_n_819_ = lean_nat_sub(v___x_809_, v___x_799_);
lean_dec(v___x_809_);
v___x_820_ = l_Lean_SourceInfo_fromRef(v_ref_818_, v___x_801_);
v___x_821_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__1));
v___x_822_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13));
v___x_823_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21));
v___x_824_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22));
lean_inc_n(v___x_820_, 8);
v___x_825_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_820_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23));
v___x_827_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_820_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
lean_inc(v___x_807_);
v___x_828_ = l_Lean_Syntax_node3(v___x_820_, v___x_823_, v___x_825_, v___x_807_, v___x_827_);
v___x_829_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__17));
v___x_830_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_820_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticIterate_________00__closed__4));
v___x_832_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_820_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
v___x_833_ = l_Nat_reprFast(v_n_819_);
v___x_834_ = lean_box(2);
v___x_835_ = l_Lean_Syntax_mkNumLit(v___x_833_, v___x_834_);
v___x_836_ = l_Lean_Syntax_node1(v___x_820_, v___x_822_, v___x_835_);
v___x_837_ = l_Lean_Syntax_node3(v___x_820_, v___x_794_, v___x_832_, v___x_836_, v___x_807_);
v___x_838_ = l_Lean_Syntax_node3(v___x_820_, v___x_822_, v___x_828_, v___x_830_, v___x_837_);
v___x_839_ = l_Lean_Syntax_node1(v___x_820_, v___x_821_, v___x_838_);
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
lean_ctor_set(v___x_840_, 1, v_a_793_);
return v___x_840_;
}
}
}
}
else
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; uint8_t v___x_848_; 
lean_dec(v___x_800_);
v___x_845_ = lean_unsigned_to_nat(2u);
v___x_846_ = l_Lean_Syntax_getArg(v_x_791_, v___x_845_);
lean_dec(v_x_791_);
v___x_847_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9));
lean_inc(v___x_846_);
v___x_848_ = l_Lean_Syntax_isOfKind(v___x_846_, v___x_847_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; lean_object* v___x_850_; 
lean_dec(v___x_846_);
v___x_849_ = lean_box(1);
v___x_850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
lean_ctor_set(v___x_850_, 1, v_a_793_);
return v___x_850_;
}
else
{
lean_object* v_ref_851_; uint8_t v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_ref_851_ = lean_ctor_get(v_a_792_, 5);
v___x_852_ = 0;
v___x_853_ = l_Lean_SourceInfo_fromRef(v_ref_851_, v___x_852_);
v___x_854_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__3));
v___x_855_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___closed__4));
lean_inc_n(v___x_853_, 11);
v___x_856_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_853_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11));
v___x_858_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13));
v___x_859_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21));
v___x_860_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22));
v___x_861_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_861_, 0, v___x_853_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
v___x_862_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23));
v___x_863_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_853_);
lean_ctor_set(v___x_863_, 1, v___x_862_);
lean_inc(v___x_846_);
v___x_864_ = l_Lean_Syntax_node3(v___x_853_, v___x_859_, v___x_861_, v___x_846_, v___x_863_);
v___x_865_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__17));
v___x_866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_866_, 0, v___x_853_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
v___x_867_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticIterate_________00__closed__4));
v___x_868_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_853_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = lean_obj_once(&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19, &l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19_once, _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19);
v___x_870_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_870_, 0, v___x_853_);
lean_ctor_set(v___x_870_, 1, v___x_858_);
lean_ctor_set(v___x_870_, 2, v___x_869_);
v___x_871_ = l_Lean_Syntax_node3(v___x_853_, v___x_794_, v___x_868_, v___x_870_, v___x_846_);
v___x_872_ = l_Lean_Syntax_node3(v___x_853_, v___x_858_, v___x_864_, v___x_866_, v___x_871_);
v___x_873_ = l_Lean_Syntax_node1(v___x_853_, v___x_857_, v___x_872_);
v___x_874_ = l_Lean_Syntax_node1(v___x_853_, v___x_847_, v___x_873_);
v___x_875_ = l_Lean_Syntax_node2(v___x_853_, v___x_854_, v___x_856_, v___x_874_);
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v_a_793_);
return v___x_876_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1___boxed(lean_object* v_x_877_, lean_object* v_a_878_, lean_object* v_a_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticIterate__________1(v_x_877_, v_a_878_, v_a_879_);
lean_dec_ref(v_a_878_);
return v_res_880_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__4(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_891_ = l_Lean_Parser_Tactic_optConfig;
v___x_892_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__3));
v___x_893_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticIterate_________00__closed__3));
v___x_894_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
lean_ctor_set(v___x_894_, 1, v___x_892_);
lean_ctor_set(v___x_894_, 2, v___x_891_);
return v___x_894_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__5(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_895_ = l_Lean_Parser_Tactic_rwRuleSeq;
v___x_896_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__4, &l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__4_once, _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__4);
v___x_897_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticIterate_________00__closed__3));
v___x_898_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
lean_ctor_set(v___x_898_, 1, v___x_896_);
lean_ctor_set(v___x_898_, 2, v___x_895_);
return v___x_898_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__6(void){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_899_ = l_Lean_Parser_Tactic_location;
v___x_900_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticIterate_________00__closed__7));
v___x_901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
lean_ctor_set(v___x_901_, 1, v___x_899_);
return v___x_901_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__7(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_902_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__6, &l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__6_once, _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__6);
v___x_903_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__5, &l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__5_once, _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__5);
v___x_904_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticIterate_________00__closed__3));
v___x_905_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
lean_ctor_set(v___x_905_, 1, v___x_903_);
lean_ctor_set(v___x_905_, 2, v___x_902_);
return v___x_905_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__8(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_906_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__7, &l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__7_once, _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__7);
v___x_907_ = lean_unsigned_to_nat(1022u);
v___x_908_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1));
v___x_909_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
lean_ctor_set(v___x_909_, 1, v___x_907_);
lean_ctor_set(v___x_909_, 2, v___x_906_);
return v___x_909_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_tacticRw__mod__cast______(void){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = lean_obj_once(&l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__8, &l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__8_once, _init_l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__8);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0(lean_object* v___x_953_, lean_object* v_loc_954_, size_t v_sz_955_, size_t v_i_956_, lean_object* v_bs_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
uint8_t v___x_960_; 
v___x_960_ = lean_usize_dec_lt(v_i_956_, v_sz_955_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; lean_object* v___x_962_; 
lean_dec(v_loc_954_);
lean_dec(v___x_953_);
v___x_961_ = l_unsafeCast___redArg(v_bs_957_);
lean_dec_ref(v_bs_957_);
v___x_962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
lean_ctor_set(v___x_962_, 1, v___y_959_);
return v___x_962_;
}
else
{
lean_object* v_ref_963_; lean_object* v___x_964_; lean_object* v_v_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v_bs_x27_968_; lean_object* v___x_969_; uint8_t v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___y_1006_; 
v_ref_963_ = lean_ctor_get(v___y_958_, 5);
v___x_964_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1));
v_v_965_ = lean_array_uget(v_bs_957_, v_i_956_);
v___x_966_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3));
v___x_967_ = lean_unsigned_to_nat(0u);
v_bs_x27_968_ = lean_array_uset(v_bs_957_, v_i_956_, v___x_967_);
v___x_969_ = l_unsafeCast___redArg(v_v_965_);
lean_dec(v_v_965_);
v___x_970_ = 0;
v___x_971_ = l_Lean_SourceInfo_fromRef(v_ref_963_, v___x_970_);
v___x_972_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21));
v___x_973_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22));
lean_inc_n(v___x_971_, 16);
v___x_974_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_971_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9));
v___x_976_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11));
v___x_977_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13));
v___x_978_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__5));
v___x_979_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__6));
v___x_980_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_971_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_obj_once(&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19, &l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19_once, _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19);
v___x_982_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_982_, 0, v___x_971_);
lean_ctor_set(v___x_982_, 1, v___x_977_);
lean_ctor_set(v___x_982_, 2, v___x_981_);
v___x_983_ = l_Lean_Syntax_node1(v___x_971_, v___x_964_, v___x_982_);
v___x_984_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__8));
v___x_985_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__9));
v___x_986_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_971_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__11));
v___x_988_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__12));
v___x_989_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_971_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = l_Lean_Syntax_node1(v___x_971_, v___x_987_, v___x_989_);
v___x_991_ = l_Lean_Syntax_node2(v___x_971_, v___x_984_, v___x_986_, v___x_990_);
v___x_992_ = l_Lean_Syntax_node1(v___x_971_, v___x_977_, v___x_991_);
v___x_993_ = l_Lean_Syntax_node3(v___x_971_, v___x_978_, v___x_980_, v___x_983_, v___x_992_);
v___x_994_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__17));
v___x_995_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_971_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__14));
v___x_997_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__15));
v___x_998_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_971_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__16));
v___x_1000_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_971_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = l_Lean_Syntax_node1(v___x_971_, v___x_977_, v___x_969_);
v___x_1002_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__17));
v___x_1003_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_971_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = l_Lean_Syntax_node3(v___x_971_, v___x_966_, v___x_1000_, v___x_1001_, v___x_1003_);
if (lean_obj_tag(v_loc_954_) == 1)
{
lean_object* v_val_1021_; lean_object* v___x_1022_; 
v_val_1021_ = lean_ctor_get(v_loc_954_, 0);
lean_inc(v_val_1021_);
v___x_1022_ = l_Array_mkArray1___redArg(v_val_1021_);
v___y_1006_ = v___x_1022_;
goto v___jp_1005_;
}
else
{
lean_object* v___x_1023_; 
v___x_1023_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__18));
v___y_1006_ = v___x_1023_;
goto v___jp_1005_;
}
v___jp_1005_:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; size_t v___x_1016_; size_t v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1007_ = l_Array_append___redArg(v___x_981_, v___y_1006_);
lean_dec_ref(v___y_1006_);
lean_inc_n(v___x_971_, 6);
v___x_1008_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1008_, 0, v___x_971_);
lean_ctor_set(v___x_1008_, 1, v___x_977_);
lean_ctor_set(v___x_1008_, 2, v___x_1007_);
lean_inc(v___x_953_);
v___x_1009_ = l_Lean_Syntax_node4(v___x_971_, v___x_996_, v___x_998_, v___x_953_, v___x_1004_, v___x_1008_);
v___x_1010_ = l_Lean_Syntax_node3(v___x_971_, v___x_977_, v___x_993_, v___x_995_, v___x_1009_);
v___x_1011_ = l_Lean_Syntax_node1(v___x_971_, v___x_976_, v___x_1010_);
v___x_1012_ = l_Lean_Syntax_node1(v___x_971_, v___x_975_, v___x_1011_);
v___x_1013_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23));
v___x_1014_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_971_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = l_Lean_Syntax_node3(v___x_971_, v___x_972_, v___x_974_, v___x_1012_, v___x_1014_);
v___x_1016_ = ((size_t)1ULL);
v___x_1017_ = lean_usize_add(v_i_956_, v___x_1016_);
v___x_1018_ = l_unsafeCast___redArg(v___x_1015_);
lean_dec(v___x_1015_);
v___x_1019_ = lean_array_uset(v_bs_x27_968_, v_i_956_, v___x_1018_);
v_i_956_ = v___x_1017_;
v_bs_957_ = v___x_1019_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___boxed(lean_object* v___x_1024_, lean_object* v_loc_1025_, lean_object* v_sz_1026_, lean_object* v_i_1027_, lean_object* v_bs_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
size_t v_sz_boxed_1031_; size_t v_i_boxed_1032_; lean_object* v_res_1033_; 
v_sz_boxed_1031_ = lean_unbox_usize(v_sz_1026_);
lean_dec(v_sz_1026_);
v_i_boxed_1032_ = lean_unbox_usize(v_i_1027_);
lean_dec(v_i_1027_);
v_res_1033_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0(v___x_1024_, v_loc_1025_, v_sz_boxed_1031_, v_i_boxed_1032_, v_bs_1028_, v___y_1029_, v___y_1030_);
lean_dec_ref(v___y_1029_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1(lean_object* v_x_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1039_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticRw__mod__cast_______00__closed__1));
lean_inc(v_x_1036_);
v___x_1040_ = l_Lean_Syntax_isOfKind(v_x_1036_, v___x_1039_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
lean_dec(v_x_1036_);
v___x_1041_ = lean_box(1);
v___x_1042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
lean_ctor_set(v___x_1042_, 1, v_a_1038_);
return v___x_1042_;
}
else
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; 
v___x_1043_ = lean_unsigned_to_nat(1u);
v___x_1044_ = l_Lean_Syntax_getArg(v_x_1036_, v___x_1043_);
v___x_1045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__1));
lean_inc(v___x_1044_);
v___x_1046_ = l_Lean_Syntax_isOfKind(v___x_1044_, v___x_1045_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec(v___x_1044_);
lean_dec(v_x_1036_);
v___x_1047_ = lean_box(1);
v___x_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
lean_ctor_set(v___x_1048_, 1, v_a_1038_);
return v___x_1048_;
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v___x_1049_ = lean_unsigned_to_nat(2u);
v___x_1050_ = l_Lean_Syntax_getArg(v_x_1036_, v___x_1049_);
v___x_1051_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___closed__3));
lean_inc(v___x_1050_);
v___x_1052_ = l_Lean_Syntax_isOfKind(v___x_1050_, v___x_1051_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
lean_dec(v___x_1050_);
lean_dec(v___x_1044_);
lean_dec(v_x_1036_);
v___x_1053_ = lean_box(1);
v___x_1054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
lean_ctor_set(v___x_1054_, 1, v_a_1038_);
return v___x_1054_;
}
else
{
lean_object* v___x_1055_; lean_object* v_loc_1057_; lean_object* v___y_1058_; lean_object* v___y_1059_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v___x_1055_ = l_Lean_Syntax_getArg(v___x_1050_, v___x_1043_);
lean_dec(v___x_1050_);
v___x_1111_ = lean_unsigned_to_nat(3u);
v___x_1112_ = l_Lean_Syntax_getArg(v_x_1036_, v___x_1111_);
lean_dec(v_x_1036_);
v___x_1113_ = l_Lean_Syntax_isNone(v___x_1112_);
if (v___x_1113_ == 0)
{
uint8_t v___x_1114_; 
lean_inc(v___x_1112_);
v___x_1114_ = l_Lean_Syntax_matchesNull(v___x_1112_, v___x_1043_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_dec(v___x_1112_);
lean_dec(v___x_1055_);
lean_dec(v___x_1044_);
v___x_1115_ = lean_box(1);
v___x_1116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
lean_ctor_set(v___x_1116_, 1, v_a_1038_);
return v___x_1116_;
}
else
{
lean_object* v___x_1117_; lean_object* v_loc_1118_; lean_object* v___x_1119_; 
v___x_1117_ = lean_unsigned_to_nat(0u);
v_loc_1118_ = l_Lean_Syntax_getArg(v___x_1112_, v___x_1117_);
lean_dec(v___x_1112_);
v___x_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1119_, 0, v_loc_1118_);
v_loc_1057_ = v___x_1119_;
v___y_1058_ = v_a_1037_;
v___y_1059_ = v_a_1038_;
goto v___jp_1056_;
}
}
else
{
lean_object* v___x_1120_; 
lean_dec(v___x_1112_);
v___x_1120_ = lean_box(0);
v_loc_1057_ = v___x_1120_;
v___y_1058_ = v_a_1037_;
v___y_1059_ = v_a_1038_;
goto v___jp_1056_;
}
v___jp_1056_:
{
lean_object* v_rules_1060_; lean_object* v___x_1061_; size_t v_sz_1062_; size_t v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_4868__overap_1068_; lean_object* v___x_1069_; 
v_rules_1060_ = l_Lean_Syntax_getArgs(v___x_1055_);
lean_dec(v___x_1055_);
v___x_1061_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_rules_1060_);
lean_dec_ref(v_rules_1060_);
v_sz_1062_ = lean_array_size(v___x_1061_);
v___x_1063_ = ((size_t)0ULL);
v___x_1064_ = l_unsafeCast___redArg(v___x_1061_);
lean_dec_ref(v___x_1061_);
v___x_1065_ = lean_box_usize(v_sz_1062_);
v___x_1066_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1___boxed__const__1));
v___x_1067_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1_spec__0___boxed), 7, 5);
lean_closure_set(v___x_1067_, 0, v___x_1044_);
lean_closure_set(v___x_1067_, 1, v_loc_1057_);
lean_closure_set(v___x_1067_, 2, v___x_1065_);
lean_closure_set(v___x_1067_, 3, v___x_1066_);
lean_closure_set(v___x_1067_, 4, v___x_1064_);
v___x_4868__overap_1068_ = l_unsafeCast___redArg(v___x_1067_);
lean_dec_ref(v___x_1067_);
lean_inc_ref(v___y_1058_);
v___x_1069_ = lean_apply_2(v___x_4868__overap_1068_, v___y_1058_, v___y_1059_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_a_1070_; lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1101_; 
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
v_a_1071_ = lean_ctor_get(v___x_1069_, 1);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1073_ = v___x_1069_;
v_isShared_1074_ = v_isSharedCheck_1101_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_inc(v_a_1070_);
lean_dec(v___x_1069_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1101_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v_ref_1075_; uint8_t v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; size_t v_sz_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1099_; 
v_ref_1075_ = lean_ctor_get(v___y_1058_, 5);
v___x_1076_ = 0;
v___x_1077_ = l_Lean_SourceInfo_fromRef(v_ref_1075_, v___x_1076_);
v___x_1078_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__21));
v___x_1079_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22));
lean_inc_n(v___x_1077_, 5);
v___x_1080_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1077_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__9));
v___x_1082_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__11));
v___x_1083_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13));
v___x_1084_ = lean_obj_once(&l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19, &l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19_once, _init_l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__19);
v_sz_1085_ = lean_array_size(v_a_1070_);
v___x_1086_ = l_unsafeCast___redArg(v_a_1070_);
lean_dec(v_a_1070_);
v___x_1087_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse_spec__0(v_sz_1085_, v___x_1063_, v___x_1086_);
v___x_1088_ = l_unsafeCast___redArg(v___x_1087_);
lean_dec_ref(v___x_1087_);
v___x_1089_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___closed__19));
v___x_1090_ = l_Lean_mkSepArray(v___x_1088_, v___x_1089_);
lean_dec(v___x_1088_);
v___x_1091_ = l_Array_append___redArg(v___x_1084_, v___x_1090_);
lean_dec_ref(v___x_1090_);
v___x_1092_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1077_);
lean_ctor_set(v___x_1092_, 1, v___x_1083_);
lean_ctor_set(v___x_1092_, 2, v___x_1091_);
v___x_1093_ = l_Lean_Syntax_node1(v___x_1077_, v___x_1082_, v___x_1092_);
v___x_1094_ = l_Lean_Syntax_node1(v___x_1077_, v___x_1081_, v___x_1093_);
v___x_1095_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23));
v___x_1096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1077_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = l_Lean_Syntax_node3(v___x_1077_, v___x_1078_, v___x_1080_, v___x_1094_, v___x_1096_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v___x_1097_);
v___x_1099_ = v___x_1073_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v_a_1071_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1102_ = lean_ctor_get(v___x_1069_, 0);
v_a_1103_ = lean_ctor_get(v___x_1069_, 1);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1069_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_inc(v_a_1102_);
lean_dec(v___x_1069_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1102_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1___boxed(lean_object* v_x_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticRw__mod__cast________1(v_x_1121_, v_a_1122_, v_a_1123_);
lean_dec_ref(v_a_1122_);
return v_res_1124_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__11));
v___x_1178_ = l_String_toRawSubstring_x27(v___x_1177_);
return v___x_1178_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13(void){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_box(0);
v___x_1180_ = l_unsafeCast___redArg(v___x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1(lean_object* v_x_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_){
_start:
{
lean_object* v___x_1194_; uint8_t v___x_1195_; 
v___x_1194_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticExact__mod__cast___00__closed__1));
lean_inc(v_x_1191_);
v___x_1195_ = l_Lean_Syntax_isOfKind(v_x_1191_, v___x_1194_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_dec(v_x_1191_);
v___x_1196_ = lean_box(1);
v___x_1197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
lean_ctor_set(v___x_1197_, 1, v_a_1193_);
return v___x_1197_;
}
else
{
lean_object* v_quotContext_1198_; lean_object* v_currMacroScope_1199_; lean_object* v_ref_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v_quotContext_1198_ = lean_ctor_get(v_a_1192_, 1);
v_currMacroScope_1199_ = lean_ctor_get(v_a_1192_, 2);
v_ref_1200_ = lean_ctor_get(v_a_1192_, 5);
v___x_1201_ = lean_unsigned_to_nat(1u);
v___x_1202_ = l_Lean_Syntax_getArg(v_x_1191_, v___x_1201_);
lean_dec(v_x_1191_);
v___x_1203_ = 0;
v___x_1204_ = l_Lean_SourceInfo_fromRef(v_ref_1200_, v___x_1203_);
v___x_1205_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__0));
v___x_1206_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__1));
lean_inc_n(v___x_1204_, 13);
v___x_1207_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1204_);
lean_ctor_set(v___x_1207_, 1, v___x_1205_);
v___x_1208_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__3));
v___x_1209_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__4));
v___x_1210_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1204_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v___x_1211_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6));
v___x_1212_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8));
v___x_1213_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22));
v___x_1214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1204_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__10));
v___x_1216_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12, &l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12_once, _init_l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12);
v___x_1217_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13, &l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13_once, _init_l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13);
lean_inc(v_currMacroScope_1199_);
lean_inc(v_quotContext_1198_);
v___x_1218_ = l_Lean_addMacroScope(v_quotContext_1198_, v___x_1217_, v_currMacroScope_1199_);
v___x_1219_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__16));
v___x_1220_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1204_);
lean_ctor_set(v___x_1220_, 1, v___x_1216_);
lean_ctor_set(v___x_1220_, 2, v___x_1218_);
lean_ctor_set(v___x_1220_, 3, v___x_1219_);
v___x_1221_ = l_Lean_Syntax_node1(v___x_1204_, v___x_1215_, v___x_1220_);
v___x_1222_ = l_Lean_Syntax_node2(v___x_1204_, v___x_1212_, v___x_1214_, v___x_1221_);
v___x_1223_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__3));
v___x_1224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1204_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
v___x_1225_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13));
v___x_1226_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6));
v___x_1227_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__17));
v___x_1228_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1204_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = l_Lean_Syntax_node1(v___x_1204_, v___x_1226_, v___x_1228_);
v___x_1230_ = l_Lean_Syntax_node1(v___x_1204_, v___x_1225_, v___x_1229_);
v___x_1231_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23));
v___x_1232_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1204_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
v___x_1233_ = l_Lean_Syntax_node5(v___x_1204_, v___x_1211_, v___x_1222_, v___x_1202_, v___x_1224_, v___x_1230_, v___x_1232_);
v___x_1234_ = l_Lean_Syntax_node2(v___x_1204_, v___x_1208_, v___x_1210_, v___x_1233_);
v___x_1235_ = l_Lean_Syntax_node2(v___x_1204_, v___x_1206_, v___x_1207_, v___x_1234_);
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1235_);
lean_ctor_set(v___x_1236_, 1, v_a_1193_);
return v___x_1236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___boxed(lean_object* v_x_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1(v_x_1237_, v_a_1238_, v_a_1239_);
lean_dec_ref(v_a_1238_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1(lean_object* v_x_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v___x_1269_; uint8_t v___x_1270_; 
v___x_1269_ = ((lean_object*)(l_Lean_Parser_Tactic_tacticApply__mod__cast___00__closed__1));
lean_inc(v_x_1266_);
v___x_1270_ = l_Lean_Syntax_isOfKind(v_x_1266_, v___x_1269_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
lean_dec(v_x_1266_);
v___x_1271_ = lean_box(1);
v___x_1272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
lean_ctor_set(v___x_1272_, 1, v_a_1268_);
return v___x_1272_;
}
else
{
lean_object* v_quotContext_1273_; lean_object* v_currMacroScope_1274_; lean_object* v_ref_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v_quotContext_1273_ = lean_ctor_get(v_a_1267_, 1);
v_currMacroScope_1274_ = lean_ctor_get(v_a_1267_, 2);
v_ref_1275_ = lean_ctor_get(v_a_1267_, 5);
v___x_1276_ = lean_unsigned_to_nat(1u);
v___x_1277_ = l_Lean_Syntax_getArg(v_x_1266_, v___x_1276_);
lean_dec(v_x_1266_);
v___x_1278_ = 0;
v___x_1279_ = l_Lean_SourceInfo_fromRef(v_ref_1275_, v___x_1278_);
v___x_1280_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__0));
v___x_1281_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___closed__1));
lean_inc_n(v___x_1279_, 13);
v___x_1282_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1279_);
lean_ctor_set(v___x_1282_, 1, v___x_1280_);
v___x_1283_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__3));
v___x_1284_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__4));
v___x_1285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1279_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
v___x_1286_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__6));
v___x_1287_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__8));
v___x_1288_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__22));
v___x_1289_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1279_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___x_1290_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__10));
v___x_1291_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12, &l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12_once, _init_l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__12);
v___x_1292_ = lean_obj_once(&l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13, &l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13_once, _init_l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__13);
lean_inc(v_currMacroScope_1274_);
lean_inc(v_quotContext_1273_);
v___x_1293_ = l_Lean_addMacroScope(v_quotContext_1273_, v___x_1292_, v_currMacroScope_1274_);
v___x_1294_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__16));
v___x_1295_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1279_);
lean_ctor_set(v___x_1295_, 1, v___x_1291_);
lean_ctor_set(v___x_1295_, 2, v___x_1293_);
lean_ctor_set(v___x_1295_, 3, v___x_1294_);
v___x_1296_ = l_Lean_Syntax_node1(v___x_1279_, v___x_1290_, v___x_1295_);
v___x_1297_ = l_Lean_Syntax_node2(v___x_1279_, v___x_1287_, v___x_1289_, v___x_1296_);
v___x_1298_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacDepIfThenElse__1___lam__0___closed__3));
v___x_1299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1279_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
v___x_1300_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__13));
v___x_1301_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__6));
v___x_1302_ = ((lean_object*)(l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticExact__mod__cast____1___closed__17));
v___x_1303_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1279_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_1304_ = l_Lean_Syntax_node1(v___x_1279_, v___x_1301_, v___x_1303_);
v___x_1305_ = l_Lean_Syntax_node1(v___x_1279_, v___x_1300_, v___x_1304_);
v___x_1306_ = ((lean_object*)(l___private_Init_TacticsExtra_0__Lean_Parser_Tactic_expandIfThenElse___lam__0___closed__23));
v___x_1307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1279_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = l_Lean_Syntax_node5(v___x_1279_, v___x_1286_, v___x_1297_, v___x_1277_, v___x_1299_, v___x_1305_, v___x_1307_);
v___x_1309_ = l_Lean_Syntax_node2(v___x_1279_, v___x_1283_, v___x_1285_, v___x_1308_);
v___x_1310_ = l_Lean_Syntax_node2(v___x_1279_, v___x_1281_, v___x_1282_, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v_a_1268_);
return v___x_1311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1___boxed(lean_object* v_x_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_Parser_Tactic___aux__Init__TacticsExtra______macroRules__Lean__Parser__Tactic__tacticApply__mod__cast____1(v_x_1312_, v_a_1313_, v_a_1314_);
lean_dec_ref(v_a_1313_);
return v_res_1315_;
}
}
lean_object* runtime_initialize_Init_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_TacticsExtra(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Meta(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_TacticsExtra(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_tacticRw__mod__cast______ = _init_l_Lean_Parser_Tactic_tacticRw__mod__cast______();
lean_mark_persistent(l_Lean_Parser_Tactic_tacticRw__mod__cast______);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Meta(uint8_t builtin);
lean_object* initialize_Init_Tactics(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_TacticsExtra(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_TacticsExtra(builtin);
}
#ifdef __cplusplus
}
#endif

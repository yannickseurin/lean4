// Lean compiler output
// Module: Init.Data.List.Basic
// Imports: public import Init.Data.List.Notation public import Init.Data.Zero public import Init.Grind.Tactics public import Init.SimpLemmas import Init.Data.Nat.Basic
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_List_length___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_set_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_set_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_concat_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_concat_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instBEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_instBEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_beq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_beq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isEqv___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isEqv___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isEqv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isEqv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLex___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLex___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLT___redArg();
LEAN_EXPORT lean_object* l_List_instLT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instLT(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLT___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLT___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instLE___redArg();
LEAN_EXPORT lean_object* l_List_instLE___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instLE(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLE___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLE___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_lex___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_List_lex___auto__1___closed__0 = (const lean_object*)&l_List_lex___auto__1___closed__0_value;
static const lean_string_object l_List_lex___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_List_lex___auto__1___closed__1 = (const lean_object*)&l_List_lex___auto__1___closed__1_value;
static const lean_string_object l_List_lex___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_List_lex___auto__1___closed__2 = (const lean_object*)&l_List_lex___auto__1___closed__2_value;
static const lean_string_object l_List_lex___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_List_lex___auto__1___closed__3 = (const lean_object*)&l_List_lex___auto__1___closed__3_value;
static const lean_ctor_object l_List_lex___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__4_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__4_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_lex___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__4_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_List_lex___auto__1___closed__4 = (const lean_object*)&l_List_lex___auto__1___closed__4_value;
static const lean_array_object l_List_lex___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_lex___auto__1___closed__5 = (const lean_object*)&l_List_lex___auto__1___closed__5_value;
static const lean_string_object l_List_lex___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_List_lex___auto__1___closed__6 = (const lean_object*)&l_List_lex___auto__1___closed__6_value;
static const lean_ctor_object l_List_lex___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__7_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__7_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_lex___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__7_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_List_lex___auto__1___closed__7 = (const lean_object*)&l_List_lex___auto__1___closed__7_value;
static const lean_string_object l_List_lex___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_List_lex___auto__1___closed__8 = (const lean_object*)&l_List_lex___auto__1___closed__8_value;
static const lean_ctor_object l_List_lex___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_List_lex___auto__1___closed__9 = (const lean_object*)&l_List_lex___auto__1___closed__9_value;
static const lean_string_object l_List_lex___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_List_lex___auto__1___closed__10 = (const lean_object*)&l_List_lex___auto__1___closed__10_value;
static const lean_ctor_object l_List_lex___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__11_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__11_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_lex___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__11_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_List_lex___auto__1___closed__11 = (const lean_object*)&l_List_lex___auto__1___closed__11_value;
static lean_once_cell_t l_List_lex___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__12;
static lean_once_cell_t l_List_lex___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__13;
static const lean_string_object l_List_lex___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_List_lex___auto__1___closed__14 = (const lean_object*)&l_List_lex___auto__1___closed__14_value;
static const lean_string_object l_List_lex___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_List_lex___auto__1___closed__15 = (const lean_object*)&l_List_lex___auto__1___closed__15_value;
static const lean_ctor_object l_List_lex___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__16_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__16_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_lex___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__16_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_List_lex___auto__1___closed__16 = (const lean_object*)&l_List_lex___auto__1___closed__16_value;
static const lean_string_object l_List_lex___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_List_lex___auto__1___closed__17 = (const lean_object*)&l_List_lex___auto__1___closed__17_value;
static const lean_ctor_object l_List_lex___auto__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__18_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__18_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_lex___auto__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__18_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_List_lex___auto__1___closed__18 = (const lean_object*)&l_List_lex___auto__1___closed__18_value;
static const lean_string_object l_List_lex___auto__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_List_lex___auto__1___closed__19 = (const lean_object*)&l_List_lex___auto__1___closed__19_value;
static lean_once_cell_t l_List_lex___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__20;
static lean_once_cell_t l_List_lex___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__21;
static const lean_string_object l_List_lex___auto__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_List_lex___auto__1___closed__22 = (const lean_object*)&l_List_lex___auto__1___closed__22_value;
static const lean_ctor_object l_List_lex___auto__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_List_lex___auto__1___closed__23 = (const lean_object*)&l_List_lex___auto__1___closed__23_value;
static const lean_string_object l_List_lex___auto__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_List_lex___auto__1___closed__24 = (const lean_object*)&l_List_lex___auto__1___closed__24_value;
static lean_once_cell_t l_List_lex___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__25;
static lean_once_cell_t l_List_lex___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__26;
static lean_once_cell_t l_List_lex___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__27;
static lean_once_cell_t l_List_lex___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__28;
static lean_once_cell_t l_List_lex___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__29;
static lean_once_cell_t l_List_lex___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__30;
static lean_once_cell_t l_List_lex___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__31;
static lean_once_cell_t l_List_lex___auto__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__32;
static lean_once_cell_t l_List_lex___auto__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__33;
static const lean_string_object l_List_lex___auto__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_<_"};
static const lean_object* l_List_lex___auto__1___closed__34 = (const lean_object*)&l_List_lex___auto__1___closed__34_value;
static const lean_ctor_object l_List_lex___auto__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(192, 242, 106, 74, 199, 131, 133, 95)}};
static const lean_object* l_List_lex___auto__1___closed__35 = (const lean_object*)&l_List_lex___auto__1___closed__35_value;
static const lean_string_object l_List_lex___auto__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cdot"};
static const lean_object* l_List_lex___auto__1___closed__36 = (const lean_object*)&l_List_lex___auto__1___closed__36_value;
static const lean_ctor_object l_List_lex___auto__1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_lex___auto__1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__37_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_lex___auto__1___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__37_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_lex___auto__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_lex___auto__1___closed__37_value_aux_2),((lean_object*)&l_List_lex___auto__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(215, 94, 65, 66, 49, 100, 151, 85)}};
static const lean_object* l_List_lex___auto__1___closed__37 = (const lean_object*)&l_List_lex___auto__1___closed__37_value;
static const lean_string_object l_List_lex___auto__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "·"};
static const lean_object* l_List_lex___auto__1___closed__38 = (const lean_object*)&l_List_lex___auto__1___closed__38_value;
static lean_once_cell_t l_List_lex___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__39;
static lean_once_cell_t l_List_lex___auto__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__40;
static lean_once_cell_t l_List_lex___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__41;
static lean_once_cell_t l_List_lex___auto__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__42;
static lean_once_cell_t l_List_lex___auto__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__43;
static const lean_string_object l_List_lex___auto__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l_List_lex___auto__1___closed__44 = (const lean_object*)&l_List_lex___auto__1___closed__44_value;
static lean_once_cell_t l_List_lex___auto__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__45;
static lean_once_cell_t l_List_lex___auto__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__46;
static lean_once_cell_t l_List_lex___auto__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__47;
static lean_once_cell_t l_List_lex___auto__1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__48;
static lean_once_cell_t l_List_lex___auto__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__49;
static const lean_string_object l_List_lex___auto__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_List_lex___auto__1___closed__50 = (const lean_object*)&l_List_lex___auto__1___closed__50_value;
static lean_once_cell_t l_List_lex___auto__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__51;
static lean_once_cell_t l_List_lex___auto__1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__52;
static lean_once_cell_t l_List_lex___auto__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__53;
static lean_once_cell_t l_List_lex___auto__1___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__54;
static lean_once_cell_t l_List_lex___auto__1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__55;
static lean_once_cell_t l_List_lex___auto__1___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__56;
static lean_once_cell_t l_List_lex___auto__1___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__57;
static lean_once_cell_t l_List_lex___auto__1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__58;
static lean_once_cell_t l_List_lex___auto__1___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__59;
static lean_once_cell_t l_List_lex___auto__1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__60;
static lean_once_cell_t l_List_lex___auto__1___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_lex___auto__1___closed__61;
LEAN_EXPORT lean_object* l_List_lex___auto__1;
LEAN_EXPORT uint8_t l_List_lex___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lex___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_lex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_getLast___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_getLast(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLast___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLast_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_getLast_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_getLast_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastD___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastD___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_getLastD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_head___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_head___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_head(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_head___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_head_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_head_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_head_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_head_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headD___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headD___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_headD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tail___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_tail___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_tail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tail___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tail_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_tail_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_tail_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tail_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tailD___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tailD___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tailD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_tailD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverseAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverseAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_reverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_reverseAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_reverseAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_appendTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_append_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_append_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_appendTR, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_List_instAppend___redArg___closed__0 = (const lean_object*)&l_List_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_instAppend___redArg();
LEAN_EXPORT lean_object* l_List_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_List_singleton___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicate___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rightpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rightpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rightpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rightpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_List_instEmptyCollection___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instEmptyCollection(lean_object*);
LEAN_EXPORT uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_contains(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instMembership___redArg();
LEAN_EXPORT lean_object* l_List_instMembership___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instMembership(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_getLast_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_getLast_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableMemOfLawfulBEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableMemOfLawfulBEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableMemOfLawfulBEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableMemOfLawfulBEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableBEx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableBEx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableBEx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableBEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableBAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableBAll___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_decidableBAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_decidableBAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_take___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_take___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_take(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_take___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_drop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_drop___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_drop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_drop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extract___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extract___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extract(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_extract___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_takeWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_takeWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition_loop(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_partition___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_partition___redArg___closed__0 = (const lean_object*)&l_List_partition___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_partition___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_partition(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropLast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_dropLast(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_dropLast_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_dropLast_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instHasSubset___redArg();
LEAN_EXPORT lean_object* l_List_instHasSubset___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_instHasSubset(lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x3c_x2b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_List_term___x3c_x2b___00__closed__0 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__0_value;
static const lean_string_object l_List_term___x3c_x2b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_<+_"};
static const lean_object* l_List_term___x3c_x2b___00__closed__1 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__1_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__2_value_aux_0),((lean_object*)&l_List_term___x3c_x2b___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(105, 196, 185, 53, 62, 139, 215, 69)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__2 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__2_value;
static const lean_string_object l_List_term___x3c_x2b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_List_term___x3c_x2b___00__closed__3 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__3_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__4 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__4_value;
static const lean_string_object l_List_term___x3c_x2b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " <+ "};
static const lean_object* l_List_term___x3c_x2b___00__closed__5 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__5_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__5_value)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__6 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__6_value;
static const lean_string_object l_List_term___x3c_x2b___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_List_term___x3c_x2b___00__closed__7 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__7_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__8 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__8_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__8_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l_List_term___x3c_x2b___00__closed__9 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__9_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__6_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__10 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__10_value;
static const lean_ctor_object l_List_term___x3c_x2b___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__2_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__10_value)}};
static const lean_object* l_List_term___x3c_x2b___00__closed__11 = (const lean_object*)&l_List_term___x3c_x2b___00__closed__11_value;
LEAN_EXPORT const lean_object* l_List_term___x3c_x2b__ = (const lean_object*)&l_List_term___x3c_x2b___00__closed__11_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__0_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_lex___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_0),((lean_object*)&l_List_lex___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_1),((lean_object*)&l_List_lex___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value_aux_2),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Sublist"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 57, 174, 210, 111, 90, 29, 55)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(71, 22, 78, 3, 46, 110, 14, 182)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__6 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__6_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__5_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__8 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__8_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__7_value),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__8_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__9 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__9_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__6_value),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__9_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__10 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__10_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__0_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isSublist___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSublist___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isSublist(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSublist___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x3c_x2b_x3a___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_<+:_"};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__0 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__0_value;
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__1_value_aux_0),((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 46, 199, 175, 86, 17, 90, 157)}};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__1 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__1_value;
static const lean_string_object l_List_term___x3c_x2b_x3a___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " <+: "};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__2 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__2_value;
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__2_value)}};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__3 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__3_value;
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__3_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__4 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__4_value;
static const lean_ctor_object l_List_term___x3c_x2b_x3a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__4_value)}};
static const lean_object* l_List_term___x3c_x2b_x3a___00__closed__5 = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__5_value;
LEAN_EXPORT const lean_object* l_List_term___x3c_x2b_x3a__ = (const lean_object*)&l_List_term___x3c_x2b_x3a___00__closed__5_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "IsPrefix"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 111, 237, 222, 126, 19, 59, 60)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__2_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 46, 95, 235, 1, 49, 30, 153)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__5_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isPrefixOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isPrefixOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_isPrefixOf_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_isPrefixOf_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isSuffixOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isSuffixOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x3c_x3a_x2b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_<:+_"};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__0 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__0_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__1_value_aux_0),((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 113, 2, 132, 68, 188, 186, 46)}};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__1 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__1_value;
static const lean_string_object l_List_term___x3c_x3a_x2b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " <:+ "};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__2 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__2_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__2_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__3 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__3_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__3_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__4 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__4_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__4_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b___00__closed__5 = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__5_value;
LEAN_EXPORT const lean_object* l_List_term___x3c_x3a_x2b__ = (const lean_object*)&l_List_term___x3c_x3a_x2b___00__closed__5_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "IsSuffix"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 165, 175, 201, 24, 12, 223, 31)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__2_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 140, 134, 30, 20, 233, 184, 173)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__5_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x3c_x3a_x2b_x3a___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "term_<:+:_"};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__0 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__0_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value_aux_0),((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 100, 205, 176, 23, 167, 63, 78)}};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__1 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value;
static const lean_string_object l_List_term___x3c_x3a_x2b_x3a___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " <:+: "};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__2 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__2_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__2_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__3 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__3_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__3_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__4 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__4_value;
static const lean_ctor_object l_List_term___x3c_x3a_x2b_x3a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__4_value)}};
static const lean_object* l_List_term___x3c_x3a_x2b_x3a___00__closed__5 = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__5_value;
LEAN_EXPORT const lean_object* l_List_term___x3c_x3a_x2b_x3a__ = (const lean_object*)&l_List_term___x3c_x3a_x2b_x3a___00__closed__5_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "IsInfix"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 240, 110, 175, 10, 19, 61, 151)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__2_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 172, 213, 72, 247, 99, 170, 125)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__5_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isInfixOf__internal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isInfixOf__internal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isInfixOf__internal(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isInfixOf__internal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitAt_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitAt_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitAt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitAt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateLeft___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateLeft___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateLeft(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateLeft___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateRight___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateRight___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateRight(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_rotateRight___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidablePairwise___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidablePairwise___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_instDecidablePairwise(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_instDecidablePairwise___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_nodupDecidable___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_nodupDecidable___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_nodupDecidable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_nodupDecidable___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_nodupDecidable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_nodupDecidable___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyHead___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyHead(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modify___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modify(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insertIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insertIdx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insertIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_insertIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_erase___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_erase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_getLastD_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_getLastD_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSome_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findRev_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSomeRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findSomeRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_idxOf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_idxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_finIdxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_countP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_count___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_count(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_lookup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_term___x7e___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_~_"};
static const lean_object* l_List_term___x7e___00__closed__0 = (const lean_object*)&l_List_term___x7e___00__closed__0_value;
static const lean_ctor_object l_List_term___x7e___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List_term___x7e___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_term___x7e___00__closed__1_value_aux_0),((lean_object*)&l_List_term___x7e___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(136, 66, 91, 28, 235, 133, 125, 244)}};
static const lean_object* l_List_term___x7e___00__closed__1 = (const lean_object*)&l_List_term___x7e___00__closed__1_value;
static const lean_string_object l_List_term___x7e___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ~ "};
static const lean_object* l_List_term___x7e___00__closed__2 = (const lean_object*)&l_List_term___x7e___00__closed__2_value;
static const lean_ctor_object l_List_term___x7e___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_term___x7e___00__closed__2_value)}};
static const lean_object* l_List_term___x7e___00__closed__3 = (const lean_object*)&l_List_term___x7e___00__closed__3_value;
static const lean_ctor_object l_List_term___x7e___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_List_term___x3c_x2b___00__closed__4_value),((lean_object*)&l_List_term___x7e___00__closed__3_value),((lean_object*)&l_List_term___x3c_x2b___00__closed__9_value)}};
static const lean_object* l_List_term___x7e___00__closed__4 = (const lean_object*)&l_List_term___x7e___00__closed__4_value;
static const lean_ctor_object l_List_term___x7e___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_List_term___x7e___00__closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l_List_term___x7e___00__closed__4_value)}};
static const lean_object* l_List_term___x7e___00__closed__5 = (const lean_object*)&l_List_term___x7e___00__closed__5_value;
LEAN_EXPORT const lean_object* l_List_term___x7e__ = (const lean_object*)&l_List_term___x7e___00__closed__5_value;
static const lean_string_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Perm"};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0_value;
static lean_once_cell_t l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 39, 207, 243, 25, 131, 84, 93)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__2 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__2_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_term___x3c_x2b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value_aux_0),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 187, 193, 253, 117, 51, 247, 91)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__4 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__4_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__3_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__6 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__6_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__5_value),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__6_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__7 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__7_value;
static const lean_ctor_object l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__4_value),((lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__7_value)}};
static const lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__8 = (const lean_object*)&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__8_value;
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isPerm___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPerm___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_isPerm(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00List_or_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00List_or_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_or(lean_object*);
LEAN_EXPORT lean_object* l_List_or___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00List_and_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00List_and_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_and(lean_object*);
LEAN_EXPORT lean_object* l_List_and___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_zipWith_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_zipWith_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zip___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zip(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipWithAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_unzip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_unzip(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_prod___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_zipIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_min_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_min_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_min___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_min(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_max_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_max_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_max___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_max(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_intersperse___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_intersperse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDupsBy_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDupsBy_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00List_eraseDupsBy_loop_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00List_eraseDupsBy_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDupsBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_eraseDups___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseRepsBy_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseRepsBy_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseRepsBy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseRepsBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseReps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseReps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitBy_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitBy_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitBy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_splitBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_removeAll___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_removeAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_removeAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_removeAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__instDecidableEqList_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__instDecidableEqList_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_lengthTRAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_lengthTRAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_mapTR_loop_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_mapTR_loop_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicateTR_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicateTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_replicateTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpadTR___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpadTR___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpadTR(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_leftpadTR___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_unzipTR___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_unzipTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27TR_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27TR_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27TR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_range_x27TR___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_intersperseTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_intersperseTR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_intersperseTR_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_intersperseTR_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_set_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_x_2_, lean_object* v_x_3_, lean_object* v_h__1_4_, lean_object* v_h__2_5_, lean_object* v_h__3_6_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_7_; 
lean_dec(v_h__2_5_);
lean_dec(v_h__1_4_);
v___x_7_ = lean_apply_2(v_h__3_6_, v_x_2_, v_x_3_);
return v___x_7_;
}
else
{
lean_object* v_head_8_; lean_object* v_tail_9_; lean_object* v_zero_10_; uint8_t v_isZero_11_; 
lean_dec(v_h__3_6_);
v_head_8_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_head_8_);
v_tail_9_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_tail_9_);
lean_dec_ref_known(v_x_1_, 2);
v_zero_10_ = lean_unsigned_to_nat(0u);
v_isZero_11_ = lean_nat_dec_eq(v_x_2_, v_zero_10_);
if (v_isZero_11_ == 1)
{
lean_object* v___x_12_; 
lean_dec(v_h__2_5_);
lean_dec(v_x_2_);
v___x_12_ = lean_apply_3(v_h__1_4_, v_head_8_, v_tail_9_, v_x_3_);
return v___x_12_;
}
else
{
lean_object* v_one_13_; lean_object* v_n_14_; lean_object* v___x_15_; 
lean_dec(v_h__1_4_);
v_one_13_ = lean_unsigned_to_nat(1u);
v_n_14_ = lean_nat_sub(v_x_2_, v_one_13_);
lean_dec(v_x_2_);
v___x_15_ = lean_apply_4(v_h__2_5_, v_head_8_, v_tail_9_, v_n_14_, v_x_3_);
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_set_match__1_splitter(lean_object* v_00_u03b1_16_, lean_object* v_motive_17_, lean_object* v_x_18_, lean_object* v_x_19_, lean_object* v_x_20_, lean_object* v_h__1_21_, lean_object* v_h__2_22_, lean_object* v_h__3_23_){
_start:
{
if (lean_obj_tag(v_x_18_) == 0)
{
lean_object* v___x_24_; 
lean_dec(v_h__2_22_);
lean_dec(v_h__1_21_);
v___x_24_ = lean_apply_2(v_h__3_23_, v_x_19_, v_x_20_);
return v___x_24_;
}
else
{
lean_object* v_head_25_; lean_object* v_tail_26_; lean_object* v_zero_27_; uint8_t v_isZero_28_; 
lean_dec(v_h__3_23_);
v_head_25_ = lean_ctor_get(v_x_18_, 0);
lean_inc(v_head_25_);
v_tail_26_ = lean_ctor_get(v_x_18_, 1);
lean_inc(v_tail_26_);
lean_dec_ref_known(v_x_18_, 2);
v_zero_27_ = lean_unsigned_to_nat(0u);
v_isZero_28_ = lean_nat_dec_eq(v_x_19_, v_zero_27_);
if (v_isZero_28_ == 1)
{
lean_object* v___x_29_; 
lean_dec(v_h__2_22_);
lean_dec(v_x_19_);
v___x_29_ = lean_apply_3(v_h__1_21_, v_head_25_, v_tail_26_, v_x_20_);
return v___x_29_;
}
else
{
lean_object* v_one_30_; lean_object* v_n_31_; lean_object* v___x_32_; 
lean_dec(v_h__1_21_);
v_one_30_ = lean_unsigned_to_nat(1u);
v_n_31_ = lean_nat_sub(v_x_19_, v_one_30_);
lean_dec(v_x_19_);
v___x_32_ = lean_apply_4(v_h__2_22_, v_head_25_, v_tail_26_, v_n_31_, v_x_20_);
return v___x_32_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_concat_match__1_splitter___redArg(lean_object* v_x_33_, lean_object* v_x_34_, lean_object* v_h__1_35_, lean_object* v_h__2_36_){
_start:
{
if (lean_obj_tag(v_x_33_) == 0)
{
lean_object* v___x_37_; 
lean_dec(v_h__2_36_);
v___x_37_ = lean_apply_1(v_h__1_35_, v_x_34_);
return v___x_37_;
}
else
{
lean_object* v_head_38_; lean_object* v_tail_39_; lean_object* v___x_40_; 
lean_dec(v_h__1_35_);
v_head_38_ = lean_ctor_get(v_x_33_, 0);
lean_inc(v_head_38_);
v_tail_39_ = lean_ctor_get(v_x_33_, 1);
lean_inc(v_tail_39_);
lean_dec_ref_known(v_x_33_, 2);
v___x_40_ = lean_apply_3(v_h__2_36_, v_head_38_, v_tail_39_, v_x_34_);
return v___x_40_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_concat_match__1_splitter(lean_object* v_00_u03b1_41_, lean_object* v_motive_42_, lean_object* v_x_43_, lean_object* v_x_44_, lean_object* v_h__1_45_, lean_object* v_h__2_46_){
_start:
{
if (lean_obj_tag(v_x_43_) == 0)
{
lean_object* v___x_47_; 
lean_dec(v_h__2_46_);
v___x_47_ = lean_apply_1(v_h__1_45_, v_x_44_);
return v___x_47_;
}
else
{
lean_object* v_head_48_; lean_object* v_tail_49_; lean_object* v___x_50_; 
lean_dec(v_h__1_45_);
v_head_48_ = lean_ctor_get(v_x_43_, 0);
lean_inc(v_head_48_);
v_tail_49_ = lean_ctor_get(v_x_43_, 1);
lean_inc(v_tail_49_);
lean_dec_ref_known(v_x_43_, 2);
v___x_50_ = lean_apply_3(v_h__2_46_, v_head_48_, v_tail_49_, v_x_44_);
return v___x_50_;
}
}
}
LEAN_EXPORT lean_object* l_List_instBEq___redArg(lean_object* v_inst_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_alloc_closure((void*)(l_List_beq___boxed), 4, 2);
lean_closure_set(v___x_52_, 0, lean_box(0));
lean_closure_set(v___x_52_, 1, v_inst_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_List_instBEq(lean_object* v_00_u03b1_53_, lean_object* v_inst_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_alloc_closure((void*)(l_List_beq___boxed), 4, 2);
lean_closure_set(v___x_55_, 0, lean_box(0));
lean_closure_set(v___x_55_, 1, v_inst_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_beq_match__1_splitter___redArg(lean_object* v_x_56_, lean_object* v_x_57_, lean_object* v_h__1_58_, lean_object* v_h__2_59_, lean_object* v_h__3_60_, lean_object* v_h__4_61_){
_start:
{
if (lean_obj_tag(v_x_56_) == 0)
{
lean_dec(v_h__4_61_);
lean_dec(v_h__2_59_);
if (lean_obj_tag(v_x_57_) == 0)
{
lean_object* v___x_62_; lean_object* v___x_63_; 
lean_dec(v_h__3_60_);
v___x_62_ = lean_box(0);
v___x_63_ = lean_apply_1(v_h__1_58_, v___x_62_);
return v___x_63_;
}
else
{
lean_object* v_head_64_; lean_object* v_tail_65_; lean_object* v___x_66_; 
lean_dec(v_h__1_58_);
v_head_64_ = lean_ctor_get(v_x_57_, 0);
lean_inc(v_head_64_);
v_tail_65_ = lean_ctor_get(v_x_57_, 1);
lean_inc(v_tail_65_);
lean_dec_ref_known(v_x_57_, 2);
v___x_66_ = lean_apply_2(v_h__3_60_, v_head_64_, v_tail_65_);
return v___x_66_;
}
}
else
{
lean_dec(v_h__3_60_);
lean_dec(v_h__1_58_);
if (lean_obj_tag(v_x_57_) == 0)
{
lean_object* v_head_67_; lean_object* v_tail_68_; lean_object* v___x_69_; 
lean_dec(v_h__4_61_);
v_head_67_ = lean_ctor_get(v_x_56_, 0);
lean_inc(v_head_67_);
v_tail_68_ = lean_ctor_get(v_x_56_, 1);
lean_inc(v_tail_68_);
lean_dec_ref_known(v_x_56_, 2);
v___x_69_ = lean_apply_2(v_h__2_59_, v_head_67_, v_tail_68_);
return v___x_69_;
}
else
{
lean_object* v_head_70_; lean_object* v_tail_71_; lean_object* v_head_72_; lean_object* v_tail_73_; lean_object* v___x_74_; 
lean_dec(v_h__2_59_);
v_head_70_ = lean_ctor_get(v_x_56_, 0);
lean_inc(v_head_70_);
v_tail_71_ = lean_ctor_get(v_x_56_, 1);
lean_inc(v_tail_71_);
lean_dec_ref_known(v_x_56_, 2);
v_head_72_ = lean_ctor_get(v_x_57_, 0);
lean_inc(v_head_72_);
v_tail_73_ = lean_ctor_get(v_x_57_, 1);
lean_inc(v_tail_73_);
lean_dec_ref_known(v_x_57_, 2);
v___x_74_ = lean_apply_4(v_h__4_61_, v_head_70_, v_tail_71_, v_head_72_, v_tail_73_);
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_beq_match__1_splitter(lean_object* v_00_u03b1_75_, lean_object* v_motive_76_, lean_object* v_x_77_, lean_object* v_x_78_, lean_object* v_h__1_79_, lean_object* v_h__2_80_, lean_object* v_h__3_81_, lean_object* v_h__4_82_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
{
lean_dec(v_h__4_82_);
lean_dec(v_h__2_80_);
if (lean_obj_tag(v_x_78_) == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec(v_h__3_81_);
v___x_83_ = lean_box(0);
v___x_84_ = lean_apply_1(v_h__1_79_, v___x_83_);
return v___x_84_;
}
else
{
lean_object* v_head_85_; lean_object* v_tail_86_; lean_object* v___x_87_; 
lean_dec(v_h__1_79_);
v_head_85_ = lean_ctor_get(v_x_78_, 0);
lean_inc(v_head_85_);
v_tail_86_ = lean_ctor_get(v_x_78_, 1);
lean_inc(v_tail_86_);
lean_dec_ref_known(v_x_78_, 2);
v___x_87_ = lean_apply_2(v_h__3_81_, v_head_85_, v_tail_86_);
return v___x_87_;
}
}
else
{
lean_dec(v_h__3_81_);
lean_dec(v_h__1_79_);
if (lean_obj_tag(v_x_78_) == 0)
{
lean_object* v_head_88_; lean_object* v_tail_89_; lean_object* v___x_90_; 
lean_dec(v_h__4_82_);
v_head_88_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_head_88_);
v_tail_89_ = lean_ctor_get(v_x_77_, 1);
lean_inc(v_tail_89_);
lean_dec_ref_known(v_x_77_, 2);
v___x_90_ = lean_apply_2(v_h__2_80_, v_head_88_, v_tail_89_);
return v___x_90_;
}
else
{
lean_object* v_head_91_; lean_object* v_tail_92_; lean_object* v_head_93_; lean_object* v_tail_94_; lean_object* v___x_95_; 
lean_dec(v_h__2_80_);
v_head_91_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_head_91_);
v_tail_92_ = lean_ctor_get(v_x_77_, 1);
lean_inc(v_tail_92_);
lean_dec_ref_known(v_x_77_, 2);
v_head_93_ = lean_ctor_get(v_x_78_, 0);
lean_inc(v_head_93_);
v_tail_94_ = lean_ctor_get(v_x_78_, 1);
lean_inc(v_tail_94_);
lean_dec_ref_known(v_x_78_, 2);
v___x_95_ = lean_apply_4(v_h__4_82_, v_head_91_, v_tail_92_, v_head_93_, v_tail_94_);
return v___x_95_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_isEqv___redArg(lean_object* v_x_96_, lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_dec_ref(v_x_98_);
if (lean_obj_tag(v_x_97_) == 0)
{
uint8_t v___x_99_; 
v___x_99_ = 1;
return v___x_99_;
}
else
{
uint8_t v___x_100_; 
lean_dec_ref_known(v_x_97_, 2);
v___x_100_ = 0;
return v___x_100_;
}
}
else
{
if (lean_obj_tag(v_x_97_) == 0)
{
uint8_t v___x_101_; 
lean_dec_ref_known(v_x_96_, 2);
lean_dec_ref(v_x_98_);
v___x_101_ = 0;
return v___x_101_;
}
else
{
lean_object* v_head_102_; lean_object* v_tail_103_; lean_object* v_head_104_; lean_object* v_tail_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_head_102_ = lean_ctor_get(v_x_96_, 0);
lean_inc(v_head_102_);
v_tail_103_ = lean_ctor_get(v_x_96_, 1);
lean_inc(v_tail_103_);
lean_dec_ref_known(v_x_96_, 2);
v_head_104_ = lean_ctor_get(v_x_97_, 0);
lean_inc(v_head_104_);
v_tail_105_ = lean_ctor_get(v_x_97_, 1);
lean_inc(v_tail_105_);
lean_dec_ref_known(v_x_97_, 2);
lean_inc_ref(v_x_98_);
v___x_106_ = lean_apply_2(v_x_98_, v_head_102_, v_head_104_);
v___x_107_ = lean_unbox(v___x_106_);
if (v___x_107_ == 0)
{
uint8_t v___x_108_; 
lean_dec(v_tail_105_);
lean_dec(v_tail_103_);
lean_dec_ref(v_x_98_);
v___x_108_ = lean_unbox(v___x_106_);
return v___x_108_;
}
else
{
v_x_96_ = v_tail_103_;
v_x_97_ = v_tail_105_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isEqv___redArg___boxed(lean_object* v_x_110_, lean_object* v_x_111_, lean_object* v_x_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_List_isEqv___redArg(v_x_110_, v_x_111_, v_x_112_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT uint8_t l_List_isEqv(lean_object* v_00_u03b1_115_, lean_object* v_x_116_, lean_object* v_x_117_, lean_object* v_x_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = l_List_isEqv___redArg(v_x_116_, v_x_117_, v_x_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_List_isEqv___boxed(lean_object* v_00_u03b1_120_, lean_object* v_x_121_, lean_object* v_x_122_, lean_object* v_x_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = l_List_isEqv(v_00_u03b1_120_, v_x_121_, v_x_122_, v_x_123_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLex___redArg(lean_object* v_inst_126_, lean_object* v_h_127_, lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
if (lean_obj_tag(v_x_128_) == 0)
{
lean_dec_ref(v_h_127_);
lean_dec_ref(v_inst_126_);
if (lean_obj_tag(v_x_129_) == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
else
{
uint8_t v___x_131_; 
lean_dec_ref_known(v_x_129_, 2);
v___x_131_ = 1;
return v___x_131_;
}
}
else
{
if (lean_obj_tag(v_x_129_) == 0)
{
uint8_t v___x_132_; 
lean_dec_ref_known(v_x_128_, 2);
lean_dec_ref(v_h_127_);
lean_dec_ref(v_inst_126_);
v___x_132_ = 0;
return v___x_132_;
}
else
{
lean_object* v_head_133_; lean_object* v_tail_134_; lean_object* v_head_135_; lean_object* v_tail_136_; lean_object* v_decide_137_; uint8_t v___x_138_; 
v_head_133_ = lean_ctor_get(v_x_128_, 0);
lean_inc_n(v_head_133_, 2);
v_tail_134_ = lean_ctor_get(v_x_128_, 1);
lean_inc(v_tail_134_);
lean_dec_ref_known(v_x_128_, 2);
v_head_135_ = lean_ctor_get(v_x_129_, 0);
lean_inc_n(v_head_135_, 2);
v_tail_136_ = lean_ctor_get(v_x_129_, 1);
lean_inc(v_tail_136_);
lean_dec_ref_known(v_x_129_, 2);
lean_inc_ref(v_h_127_);
v_decide_137_ = lean_apply_2(v_h_127_, v_head_133_, v_head_135_);
v___x_138_ = lean_unbox(v_decide_137_);
if (v___x_138_ == 0)
{
lean_object* v___x_139_; uint8_t v___x_140_; 
lean_inc_ref(v_inst_126_);
v___x_139_ = lean_apply_2(v_inst_126_, v_head_133_, v_head_135_);
v___x_140_ = lean_unbox(v___x_139_);
if (v___x_140_ == 0)
{
uint8_t v___x_141_; 
lean_dec(v_tail_136_);
lean_dec(v_tail_134_);
lean_dec_ref(v_h_127_);
lean_dec_ref(v_inst_126_);
v___x_141_ = lean_unbox(v___x_139_);
return v___x_141_;
}
else
{
uint8_t v_decide_142_; 
v_decide_142_ = l_List_decidableLex___redArg(v_inst_126_, v_h_127_, v_tail_134_, v_tail_136_);
if (v_decide_142_ == 0)
{
return v_decide_142_;
}
else
{
uint8_t v___x_143_; 
v___x_143_ = lean_unbox(v___x_139_);
return v___x_143_;
}
}
}
else
{
uint8_t v___x_144_; 
lean_dec(v_tail_136_);
lean_dec(v_head_135_);
lean_dec(v_tail_134_);
lean_dec(v_head_133_);
lean_dec_ref(v_h_127_);
lean_dec_ref(v_inst_126_);
v___x_144_ = lean_unbox(v_decide_137_);
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_decidableLex___redArg___boxed(lean_object* v_inst_145_, lean_object* v_h_146_, lean_object* v_x_147_, lean_object* v_x_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_List_decidableLex___redArg(v_inst_145_, v_h_146_, v_x_147_, v_x_148_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLex(lean_object* v_00_u03b1_151_, lean_object* v_inst_152_, lean_object* v_r_153_, lean_object* v_h_154_, lean_object* v_x_155_, lean_object* v_x_156_){
_start:
{
uint8_t v___x_157_; 
v___x_157_ = l_List_decidableLex___redArg(v_inst_152_, v_h_154_, v_x_155_, v_x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_List_decidableLex___boxed(lean_object* v_00_u03b1_158_, lean_object* v_inst_159_, lean_object* v_r_160_, lean_object* v_h_161_, lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
uint8_t v_res_164_; lean_object* v_r_165_; 
v_res_164_ = l_List_decidableLex(v_00_u03b1_158_, v_inst_159_, v_r_160_, v_h_161_, v_x_162_, v_x_163_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT lean_object* l_List_instLT___redArg(){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_box(0);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_List_instLT___redArg___boxed(lean_object* v___dummy_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_List_instLT___redArg();
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_List_instLT(lean_object* v_00_u03b1_170_, lean_object* v_inst_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_box(0);
return v___x_172_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLT___redArg(lean_object* v_inst_173_, lean_object* v_inst_174_, lean_object* v_l_u2081_175_, lean_object* v_l_u2082_176_){
_start:
{
uint8_t v___x_177_; 
v___x_177_ = l_List_decidableLex___redArg(v_inst_173_, v_inst_174_, v_l_u2081_175_, v_l_u2082_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_List_decidableLT___redArg___boxed(lean_object* v_inst_178_, lean_object* v_inst_179_, lean_object* v_l_u2081_180_, lean_object* v_l_u2082_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_List_decidableLT___redArg(v_inst_178_, v_inst_179_, v_l_u2081_180_, v_l_u2082_181_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLT(lean_object* v_00_u03b1_184_, lean_object* v_inst_185_, lean_object* v_inst_186_, lean_object* v_inst_187_, lean_object* v_l_u2081_188_, lean_object* v_l_u2082_189_){
_start:
{
uint8_t v___x_190_; 
v___x_190_ = l_List_decidableLex___redArg(v_inst_185_, v_inst_187_, v_l_u2081_188_, v_l_u2082_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_List_decidableLT___boxed(lean_object* v_00_u03b1_191_, lean_object* v_inst_192_, lean_object* v_inst_193_, lean_object* v_inst_194_, lean_object* v_l_u2081_195_, lean_object* v_l_u2082_196_){
_start:
{
uint8_t v_res_197_; lean_object* v_r_198_; 
v_res_197_ = l_List_decidableLT(v_00_u03b1_191_, v_inst_192_, v_inst_193_, v_inst_194_, v_l_u2081_195_, v_l_u2082_196_);
v_r_198_ = lean_box(v_res_197_);
return v_r_198_;
}
}
LEAN_EXPORT lean_object* l_List_instLE___redArg(){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_box(0);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_List_instLE___redArg___boxed(lean_object* v___dummy_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_List_instLE___redArg();
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_List_instLE(lean_object* v_00_u03b1_203_, lean_object* v_inst_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_box(0);
return v___x_205_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLE___redArg(lean_object* v_inst_206_, lean_object* v_inst_207_, lean_object* v_l_u2081_208_, lean_object* v_l_u2082_209_){
_start:
{
uint8_t v___x_210_; 
v___x_210_ = l_List_decidableLex___redArg(v_inst_206_, v_inst_207_, v_l_u2082_209_, v_l_u2081_208_);
if (v___x_210_ == 0)
{
uint8_t v___x_211_; 
v___x_211_ = 1;
return v___x_211_;
}
else
{
uint8_t v___x_212_; 
v___x_212_ = 0;
return v___x_212_;
}
}
}
LEAN_EXPORT lean_object* l_List_decidableLE___redArg___boxed(lean_object* v_inst_213_, lean_object* v_inst_214_, lean_object* v_l_u2081_215_, lean_object* v_l_u2082_216_){
_start:
{
uint8_t v_res_217_; lean_object* v_r_218_; 
v_res_217_ = l_List_decidableLE___redArg(v_inst_213_, v_inst_214_, v_l_u2081_215_, v_l_u2082_216_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
LEAN_EXPORT uint8_t l_List_decidableLE(lean_object* v_00_u03b1_219_, lean_object* v_inst_220_, lean_object* v_inst_221_, lean_object* v_inst_222_, lean_object* v_l_u2081_223_, lean_object* v_l_u2082_224_){
_start:
{
uint8_t v___x_225_; 
v___x_225_ = l_List_decidableLE___redArg(v_inst_220_, v_inst_222_, v_l_u2081_223_, v_l_u2082_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_List_decidableLE___boxed(lean_object* v_00_u03b1_226_, lean_object* v_inst_227_, lean_object* v_inst_228_, lean_object* v_inst_229_, lean_object* v_l_u2081_230_, lean_object* v_l_u2082_231_){
_start:
{
uint8_t v_res_232_; lean_object* v_r_233_; 
v_res_232_ = l_List_decidableLE(v_00_u03b1_226_, v_inst_227_, v_inst_228_, v_inst_229_, v_l_u2081_230_, v_l_u2082_231_);
v_r_233_ = lean_box(v_res_232_);
return v_r_233_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__12(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = ((lean_object*)(l_List_lex___auto__1___closed__10));
v___x_261_ = l_Lean_mkAtom(v___x_260_);
return v___x_261_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__13(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_262_ = lean_obj_once(&l_List_lex___auto__1___closed__12, &l_List_lex___auto__1___closed__12_once, _init_l_List_lex___auto__1___closed__12);
v___x_263_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_264_ = lean_array_push(v___x_263_, v___x_262_);
return v___x_264_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__20(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = ((lean_object*)(l_List_lex___auto__1___closed__19));
v___x_280_ = l_Lean_mkAtom(v___x_279_);
return v___x_280_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__21(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = lean_obj_once(&l_List_lex___auto__1___closed__20, &l_List_lex___auto__1___closed__20_once, _init_l_List_lex___auto__1___closed__20);
v___x_282_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_283_ = lean_array_push(v___x_282_, v___x_281_);
return v___x_283_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__25(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = ((lean_object*)(l_List_lex___auto__1___closed__24));
v___x_289_ = lean_string_utf8_byte_size(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__26(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_290_ = lean_obj_once(&l_List_lex___auto__1___closed__25, &l_List_lex___auto__1___closed__25_once, _init_l_List_lex___auto__1___closed__25);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = ((lean_object*)(l_List_lex___auto__1___closed__24));
v___x_293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_291_);
lean_ctor_set(v___x_293_, 2, v___x_290_);
return v___x_293_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__27(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_box(0);
v___x_295_ = l_unsafeCast___redArg(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__28(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_296_ = lean_box(0);
v___x_297_ = lean_obj_once(&l_List_lex___auto__1___closed__27, &l_List_lex___auto__1___closed__27_once, _init_l_List_lex___auto__1___closed__27);
v___x_298_ = lean_obj_once(&l_List_lex___auto__1___closed__26, &l_List_lex___auto__1___closed__26_once, _init_l_List_lex___auto__1___closed__26);
v___x_299_ = lean_box(2);
v___x_300_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_298_);
lean_ctor_set(v___x_300_, 2, v___x_297_);
lean_ctor_set(v___x_300_, 3, v___x_296_);
return v___x_300_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__29(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = lean_obj_once(&l_List_lex___auto__1___closed__28, &l_List_lex___auto__1___closed__28_once, _init_l_List_lex___auto__1___closed__28);
v___x_302_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_303_ = lean_array_push(v___x_302_, v___x_301_);
return v___x_303_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__30(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_304_ = lean_obj_once(&l_List_lex___auto__1___closed__29, &l_List_lex___auto__1___closed__29_once, _init_l_List_lex___auto__1___closed__29);
v___x_305_ = ((lean_object*)(l_List_lex___auto__1___closed__23));
v___x_306_ = lean_box(2);
v___x_307_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_305_);
lean_ctor_set(v___x_307_, 2, v___x_304_);
return v___x_307_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__31(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_308_ = lean_obj_once(&l_List_lex___auto__1___closed__30, &l_List_lex___auto__1___closed__30_once, _init_l_List_lex___auto__1___closed__30);
v___x_309_ = lean_obj_once(&l_List_lex___auto__1___closed__21, &l_List_lex___auto__1___closed__21_once, _init_l_List_lex___auto__1___closed__21);
v___x_310_ = lean_array_push(v___x_309_, v___x_308_);
return v___x_310_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__32(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_311_ = lean_obj_once(&l_List_lex___auto__1___closed__31, &l_List_lex___auto__1___closed__31_once, _init_l_List_lex___auto__1___closed__31);
v___x_312_ = ((lean_object*)(l_List_lex___auto__1___closed__18));
v___x_313_ = lean_box(2);
v___x_314_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
lean_ctor_set(v___x_314_, 1, v___x_312_);
lean_ctor_set(v___x_314_, 2, v___x_311_);
return v___x_314_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__33(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_315_ = lean_obj_once(&l_List_lex___auto__1___closed__32, &l_List_lex___auto__1___closed__32_once, _init_l_List_lex___auto__1___closed__32);
v___x_316_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_317_ = lean_array_push(v___x_316_, v___x_315_);
return v___x_317_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__39(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = ((lean_object*)(l_List_lex___auto__1___closed__38));
v___x_329_ = l_Lean_mkAtom(v___x_328_);
return v___x_329_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__40(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_330_ = lean_obj_once(&l_List_lex___auto__1___closed__39, &l_List_lex___auto__1___closed__39_once, _init_l_List_lex___auto__1___closed__39);
v___x_331_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_332_ = lean_array_push(v___x_331_, v___x_330_);
return v___x_332_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__41(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_333_ = lean_obj_once(&l_List_lex___auto__1___closed__30, &l_List_lex___auto__1___closed__30_once, _init_l_List_lex___auto__1___closed__30);
v___x_334_ = lean_obj_once(&l_List_lex___auto__1___closed__40, &l_List_lex___auto__1___closed__40_once, _init_l_List_lex___auto__1___closed__40);
v___x_335_ = lean_array_push(v___x_334_, v___x_333_);
return v___x_335_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__42(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_336_ = lean_obj_once(&l_List_lex___auto__1___closed__41, &l_List_lex___auto__1___closed__41_once, _init_l_List_lex___auto__1___closed__41);
v___x_337_ = ((lean_object*)(l_List_lex___auto__1___closed__37));
v___x_338_ = lean_box(2);
v___x_339_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_337_);
lean_ctor_set(v___x_339_, 2, v___x_336_);
return v___x_339_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__43(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_obj_once(&l_List_lex___auto__1___closed__42, &l_List_lex___auto__1___closed__42_once, _init_l_List_lex___auto__1___closed__42);
v___x_341_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_342_ = lean_array_push(v___x_341_, v___x_340_);
return v___x_342_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__45(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l_List_lex___auto__1___closed__44));
v___x_345_ = l_Lean_mkAtom(v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__46(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_obj_once(&l_List_lex___auto__1___closed__45, &l_List_lex___auto__1___closed__45_once, _init_l_List_lex___auto__1___closed__45);
v___x_347_ = lean_obj_once(&l_List_lex___auto__1___closed__43, &l_List_lex___auto__1___closed__43_once, _init_l_List_lex___auto__1___closed__43);
v___x_348_ = lean_array_push(v___x_347_, v___x_346_);
return v___x_348_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__47(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_obj_once(&l_List_lex___auto__1___closed__42, &l_List_lex___auto__1___closed__42_once, _init_l_List_lex___auto__1___closed__42);
v___x_350_ = lean_obj_once(&l_List_lex___auto__1___closed__46, &l_List_lex___auto__1___closed__46_once, _init_l_List_lex___auto__1___closed__46);
v___x_351_ = lean_array_push(v___x_350_, v___x_349_);
return v___x_351_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__48(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_352_ = lean_obj_once(&l_List_lex___auto__1___closed__47, &l_List_lex___auto__1___closed__47_once, _init_l_List_lex___auto__1___closed__47);
v___x_353_ = ((lean_object*)(l_List_lex___auto__1___closed__35));
v___x_354_ = lean_box(2);
v___x_355_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v___x_353_);
lean_ctor_set(v___x_355_, 2, v___x_352_);
return v___x_355_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__49(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = lean_obj_once(&l_List_lex___auto__1___closed__48, &l_List_lex___auto__1___closed__48_once, _init_l_List_lex___auto__1___closed__48);
v___x_357_ = lean_obj_once(&l_List_lex___auto__1___closed__33, &l_List_lex___auto__1___closed__33_once, _init_l_List_lex___auto__1___closed__33);
v___x_358_ = lean_array_push(v___x_357_, v___x_356_);
return v___x_358_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__51(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = ((lean_object*)(l_List_lex___auto__1___closed__50));
v___x_361_ = l_Lean_mkAtom(v___x_360_);
return v___x_361_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__52(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = lean_obj_once(&l_List_lex___auto__1___closed__51, &l_List_lex___auto__1___closed__51_once, _init_l_List_lex___auto__1___closed__51);
v___x_363_ = lean_obj_once(&l_List_lex___auto__1___closed__49, &l_List_lex___auto__1___closed__49_once, _init_l_List_lex___auto__1___closed__49);
v___x_364_ = lean_array_push(v___x_363_, v___x_362_);
return v___x_364_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__53(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_365_ = lean_obj_once(&l_List_lex___auto__1___closed__52, &l_List_lex___auto__1___closed__52_once, _init_l_List_lex___auto__1___closed__52);
v___x_366_ = ((lean_object*)(l_List_lex___auto__1___closed__16));
v___x_367_ = lean_box(2);
v___x_368_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
lean_ctor_set(v___x_368_, 2, v___x_365_);
return v___x_368_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__54(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lean_obj_once(&l_List_lex___auto__1___closed__53, &l_List_lex___auto__1___closed__53_once, _init_l_List_lex___auto__1___closed__53);
v___x_370_ = lean_obj_once(&l_List_lex___auto__1___closed__13, &l_List_lex___auto__1___closed__13_once, _init_l_List_lex___auto__1___closed__13);
v___x_371_ = lean_array_push(v___x_370_, v___x_369_);
return v___x_371_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__55(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_372_ = lean_obj_once(&l_List_lex___auto__1___closed__54, &l_List_lex___auto__1___closed__54_once, _init_l_List_lex___auto__1___closed__54);
v___x_373_ = ((lean_object*)(l_List_lex___auto__1___closed__11));
v___x_374_ = lean_box(2);
v___x_375_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v___x_373_);
lean_ctor_set(v___x_375_, 2, v___x_372_);
return v___x_375_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__56(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = lean_obj_once(&l_List_lex___auto__1___closed__55, &l_List_lex___auto__1___closed__55_once, _init_l_List_lex___auto__1___closed__55);
v___x_377_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_378_ = lean_array_push(v___x_377_, v___x_376_);
return v___x_378_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__57(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_379_ = lean_obj_once(&l_List_lex___auto__1___closed__56, &l_List_lex___auto__1___closed__56_once, _init_l_List_lex___auto__1___closed__56);
v___x_380_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_381_ = lean_box(2);
v___x_382_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___x_380_);
lean_ctor_set(v___x_382_, 2, v___x_379_);
return v___x_382_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__58(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_383_ = lean_obj_once(&l_List_lex___auto__1___closed__57, &l_List_lex___auto__1___closed__57_once, _init_l_List_lex___auto__1___closed__57);
v___x_384_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_385_ = lean_array_push(v___x_384_, v___x_383_);
return v___x_385_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__59(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_386_ = lean_obj_once(&l_List_lex___auto__1___closed__58, &l_List_lex___auto__1___closed__58_once, _init_l_List_lex___auto__1___closed__58);
v___x_387_ = ((lean_object*)(l_List_lex___auto__1___closed__7));
v___x_388_ = lean_box(2);
v___x_389_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set(v___x_389_, 1, v___x_387_);
lean_ctor_set(v___x_389_, 2, v___x_386_);
return v___x_389_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__60(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = lean_obj_once(&l_List_lex___auto__1___closed__59, &l_List_lex___auto__1___closed__59_once, _init_l_List_lex___auto__1___closed__59);
v___x_391_ = ((lean_object*)(l_List_lex___auto__1___closed__5));
v___x_392_ = lean_array_push(v___x_391_, v___x_390_);
return v___x_392_;
}
}
static lean_object* _init_l_List_lex___auto__1___closed__61(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_393_ = lean_obj_once(&l_List_lex___auto__1___closed__60, &l_List_lex___auto__1___closed__60_once, _init_l_List_lex___auto__1___closed__60);
v___x_394_ = ((lean_object*)(l_List_lex___auto__1___closed__4));
v___x_395_ = lean_box(2);
v___x_396_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set(v___x_396_, 1, v___x_394_);
lean_ctor_set(v___x_396_, 2, v___x_393_);
return v___x_396_;
}
}
static lean_object* _init_l_List_lex___auto__1(void){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = lean_obj_once(&l_List_lex___auto__1___closed__61, &l_List_lex___auto__1___closed__61_once, _init_l_List_lex___auto__1___closed__61);
return v___x_397_;
}
}
LEAN_EXPORT uint8_t l_List_lex___redArg(lean_object* v_inst_398_, lean_object* v_l_u2081_399_, lean_object* v_l_u2082_400_, lean_object* v_lt_401_){
_start:
{
if (lean_obj_tag(v_l_u2081_399_) == 0)
{
lean_dec_ref(v_lt_401_);
lean_dec_ref(v_inst_398_);
if (lean_obj_tag(v_l_u2082_400_) == 0)
{
uint8_t v___x_402_; 
v___x_402_ = 0;
return v___x_402_;
}
else
{
uint8_t v___x_403_; 
lean_dec_ref_known(v_l_u2082_400_, 2);
v___x_403_ = 1;
return v___x_403_;
}
}
else
{
if (lean_obj_tag(v_l_u2082_400_) == 0)
{
uint8_t v___x_404_; 
lean_dec_ref_known(v_l_u2081_399_, 2);
lean_dec_ref(v_lt_401_);
lean_dec_ref(v_inst_398_);
v___x_404_ = 0;
return v___x_404_;
}
else
{
lean_object* v_head_405_; lean_object* v_tail_406_; lean_object* v_head_407_; lean_object* v_tail_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v_head_405_ = lean_ctor_get(v_l_u2081_399_, 0);
lean_inc_n(v_head_405_, 2);
v_tail_406_ = lean_ctor_get(v_l_u2081_399_, 1);
lean_inc(v_tail_406_);
lean_dec_ref_known(v_l_u2081_399_, 2);
v_head_407_ = lean_ctor_get(v_l_u2082_400_, 0);
lean_inc_n(v_head_407_, 2);
v_tail_408_ = lean_ctor_get(v_l_u2082_400_, 1);
lean_inc(v_tail_408_);
lean_dec_ref_known(v_l_u2082_400_, 2);
lean_inc_ref(v_lt_401_);
v___x_409_ = lean_apply_2(v_lt_401_, v_head_405_, v_head_407_);
v___x_410_ = lean_unbox(v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; uint8_t v___x_412_; 
lean_inc_ref(v_inst_398_);
v___x_411_ = lean_apply_2(v_inst_398_, v_head_405_, v_head_407_);
v___x_412_ = lean_unbox(v___x_411_);
if (v___x_412_ == 0)
{
uint8_t v___x_413_; 
lean_dec(v_tail_408_);
lean_dec(v_tail_406_);
lean_dec_ref(v_lt_401_);
lean_dec_ref(v_inst_398_);
v___x_413_ = lean_unbox(v___x_411_);
return v___x_413_;
}
else
{
v_l_u2081_399_ = v_tail_406_;
v_l_u2082_400_ = v_tail_408_;
goto _start;
}
}
else
{
uint8_t v___x_415_; 
lean_dec(v_tail_408_);
lean_dec(v_head_407_);
lean_dec(v_tail_406_);
lean_dec(v_head_405_);
lean_dec_ref(v_lt_401_);
lean_dec_ref(v_inst_398_);
v___x_415_ = lean_unbox(v___x_409_);
return v___x_415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_lex___redArg___boxed(lean_object* v_inst_416_, lean_object* v_l_u2081_417_, lean_object* v_l_u2082_418_, lean_object* v_lt_419_){
_start:
{
uint8_t v_res_420_; lean_object* v_r_421_; 
v_res_420_ = l_List_lex___redArg(v_inst_416_, v_l_u2081_417_, v_l_u2082_418_, v_lt_419_);
v_r_421_ = lean_box(v_res_420_);
return v_r_421_;
}
}
LEAN_EXPORT uint8_t l_List_lex(lean_object* v_00_u03b1_422_, lean_object* v_inst_423_, lean_object* v_l_u2081_424_, lean_object* v_l_u2082_425_, lean_object* v_lt_426_){
_start:
{
uint8_t v___x_427_; 
v___x_427_ = l_List_lex___redArg(v_inst_423_, v_l_u2081_424_, v_l_u2082_425_, v_lt_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_List_lex___boxed(lean_object* v_00_u03b1_428_, lean_object* v_inst_429_, lean_object* v_l_u2081_430_, lean_object* v_l_u2082_431_, lean_object* v_lt_432_){
_start:
{
uint8_t v_res_433_; lean_object* v_r_434_; 
v_res_433_ = l_List_lex(v_00_u03b1_428_, v_inst_429_, v_l_u2081_430_, v_l_u2082_431_, v_lt_432_);
v_r_434_ = lean_box(v_res_433_);
return v_r_434_;
}
}
LEAN_EXPORT lean_object* l_List_getLast___redArg(lean_object* v_x_435_){
_start:
{
lean_object* v_tail_436_; 
v_tail_436_ = lean_ctor_get(v_x_435_, 1);
if (lean_obj_tag(v_tail_436_) == 0)
{
lean_object* v_head_437_; 
v_head_437_ = lean_ctor_get(v_x_435_, 0);
lean_inc(v_head_437_);
return v_head_437_;
}
else
{
v_x_435_ = v_tail_436_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_getLast___redArg___boxed(lean_object* v_x_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_List_getLast___redArg(v_x_439_);
lean_dec(v_x_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_List_getLast(lean_object* v_00_u03b1_441_, lean_object* v_x_442_, lean_object* v_x_443_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_List_getLast___redArg(v_x_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_List_getLast___boxed(lean_object* v_00_u03b1_445_, lean_object* v_x_446_, lean_object* v_x_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_List_getLast(v_00_u03b1_445_, v_x_446_, v_x_447_);
lean_dec(v_x_446_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_List_getLast_x3f___redArg(lean_object* v_x_449_){
_start:
{
if (lean_obj_tag(v_x_449_) == 0)
{
lean_object* v___x_450_; 
v___x_450_ = lean_box(0);
return v___x_450_;
}
else
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = l_List_getLast___redArg(v_x_449_);
v___x_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
}
LEAN_EXPORT lean_object* l_List_getLast_x3f___redArg___boxed(lean_object* v_x_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_List_getLast_x3f___redArg(v_x_453_);
lean_dec(v_x_453_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_List_getLast_x3f(lean_object* v_00_u03b1_455_, lean_object* v_x_456_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_List_getLast_x3f___redArg(v_x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_List_getLast_x3f___boxed(lean_object* v_00_u03b1_458_, lean_object* v_x_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_List_getLast_x3f(v_00_u03b1_458_, v_x_459_);
lean_dec(v_x_459_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_List_getLastD___redArg(lean_object* v_x_461_, lean_object* v_x_462_){
_start:
{
if (lean_obj_tag(v_x_461_) == 0)
{
lean_inc(v_x_462_);
return v_x_462_;
}
else
{
lean_object* v___x_463_; 
v___x_463_ = l_List_getLast___redArg(v_x_461_);
return v___x_463_;
}
}
}
LEAN_EXPORT lean_object* l_List_getLastD___redArg___boxed(lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_List_getLastD___redArg(v_x_464_, v_x_465_);
lean_dec(v_x_465_);
lean_dec(v_x_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_List_getLastD(lean_object* v_00_u03b1_467_, lean_object* v_x_468_, lean_object* v_x_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_List_getLastD___redArg(v_x_468_, v_x_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_List_getLastD___boxed(lean_object* v_00_u03b1_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_List_getLastD(v_00_u03b1_471_, v_x_472_, v_x_473_);
lean_dec(v_x_473_);
lean_dec(v_x_472_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_List_head___redArg(lean_object* v_x_475_){
_start:
{
lean_object* v_head_476_; 
v_head_476_ = lean_ctor_get(v_x_475_, 0);
lean_inc(v_head_476_);
return v_head_476_;
}
}
LEAN_EXPORT lean_object* l_List_head___redArg___boxed(lean_object* v_x_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_List_head___redArg(v_x_477_);
lean_dec(v_x_477_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_List_head(lean_object* v_00_u03b1_479_, lean_object* v_x_480_, lean_object* v_x_481_){
_start:
{
lean_object* v_head_482_; 
v_head_482_ = lean_ctor_get(v_x_480_, 0);
lean_inc(v_head_482_);
return v_head_482_;
}
}
LEAN_EXPORT lean_object* l_List_head___boxed(lean_object* v_00_u03b1_483_, lean_object* v_x_484_, lean_object* v_x_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_List_head(v_00_u03b1_483_, v_x_484_, v_x_485_);
lean_dec(v_x_484_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_List_head_x3f___redArg(lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
lean_object* v___x_488_; 
v___x_488_ = lean_box(0);
return v___x_488_;
}
else
{
lean_object* v_head_489_; lean_object* v___x_490_; 
v_head_489_ = lean_ctor_get(v_x_487_, 0);
lean_inc(v_head_489_);
v___x_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_490_, 0, v_head_489_);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l_List_head_x3f___redArg___boxed(lean_object* v_x_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_List_head_x3f___redArg(v_x_491_);
lean_dec(v_x_491_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_List_head_x3f(lean_object* v_00_u03b1_493_, lean_object* v_x_494_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_List_head_x3f___redArg(v_x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_List_head_x3f___boxed(lean_object* v_00_u03b1_496_, lean_object* v_x_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_List_head_x3f(v_00_u03b1_496_, v_x_497_);
lean_dec(v_x_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_List_headD___redArg(lean_object* v_x_499_, lean_object* v_x_500_){
_start:
{
if (lean_obj_tag(v_x_499_) == 0)
{
lean_inc(v_x_500_);
return v_x_500_;
}
else
{
lean_object* v_head_501_; 
v_head_501_ = lean_ctor_get(v_x_499_, 0);
lean_inc(v_head_501_);
return v_head_501_;
}
}
}
LEAN_EXPORT lean_object* l_List_headD___redArg___boxed(lean_object* v_x_502_, lean_object* v_x_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_List_headD___redArg(v_x_502_, v_x_503_);
lean_dec(v_x_503_);
lean_dec(v_x_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_List_headD(lean_object* v_00_u03b1_505_, lean_object* v_x_506_, lean_object* v_x_507_){
_start:
{
if (lean_obj_tag(v_x_506_) == 0)
{
lean_inc(v_x_507_);
return v_x_507_;
}
else
{
lean_object* v_head_508_; 
v_head_508_ = lean_ctor_get(v_x_506_, 0);
lean_inc(v_head_508_);
return v_head_508_;
}
}
}
LEAN_EXPORT lean_object* l_List_headD___boxed(lean_object* v_00_u03b1_509_, lean_object* v_x_510_, lean_object* v_x_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_List_headD(v_00_u03b1_509_, v_x_510_, v_x_511_);
lean_dec(v_x_511_);
lean_dec(v_x_510_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_List_tail___redArg(lean_object* v_x_513_){
_start:
{
if (lean_obj_tag(v_x_513_) == 0)
{
return v_x_513_;
}
else
{
lean_object* v_tail_514_; 
v_tail_514_ = lean_ctor_get(v_x_513_, 1);
lean_inc(v_tail_514_);
return v_tail_514_;
}
}
}
LEAN_EXPORT lean_object* l_List_tail___redArg___boxed(lean_object* v_x_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_List_tail___redArg(v_x_515_);
lean_dec(v_x_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_List_tail(lean_object* v_00_u03b1_517_, lean_object* v_x_518_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
return v_x_518_;
}
else
{
lean_object* v_tail_519_; 
v_tail_519_ = lean_ctor_get(v_x_518_, 1);
lean_inc(v_tail_519_);
return v_tail_519_;
}
}
}
LEAN_EXPORT lean_object* l_List_tail___boxed(lean_object* v_00_u03b1_520_, lean_object* v_x_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_List_tail(v_00_u03b1_520_, v_x_521_);
lean_dec(v_x_521_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_List_tail_x3f___redArg(lean_object* v_x_523_){
_start:
{
if (lean_obj_tag(v_x_523_) == 0)
{
lean_object* v___x_524_; 
v___x_524_ = lean_box(0);
return v___x_524_;
}
else
{
lean_object* v_tail_525_; lean_object* v___x_526_; 
v_tail_525_ = lean_ctor_get(v_x_523_, 1);
lean_inc(v_tail_525_);
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v_tail_525_);
return v___x_526_;
}
}
}
LEAN_EXPORT lean_object* l_List_tail_x3f___redArg___boxed(lean_object* v_x_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_List_tail_x3f___redArg(v_x_527_);
lean_dec(v_x_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_List_tail_x3f(lean_object* v_00_u03b1_529_, lean_object* v_x_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_List_tail_x3f___redArg(v_x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_List_tail_x3f___boxed(lean_object* v_00_u03b1_532_, lean_object* v_x_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_List_tail_x3f(v_00_u03b1_532_, v_x_533_);
lean_dec(v_x_533_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_List_tailD___redArg(lean_object* v_l_535_, lean_object* v_fallback_536_){
_start:
{
if (lean_obj_tag(v_l_535_) == 0)
{
lean_inc(v_fallback_536_);
return v_fallback_536_;
}
else
{
lean_object* v_tail_537_; 
v_tail_537_ = lean_ctor_get(v_l_535_, 1);
lean_inc(v_tail_537_);
return v_tail_537_;
}
}
}
LEAN_EXPORT lean_object* l_List_tailD___redArg___boxed(lean_object* v_l_538_, lean_object* v_fallback_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_List_tailD___redArg(v_l_538_, v_fallback_539_);
lean_dec(v_fallback_539_);
lean_dec(v_l_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_List_tailD(lean_object* v_00_u03b1_541_, lean_object* v_l_542_, lean_object* v_fallback_543_){
_start:
{
if (lean_obj_tag(v_l_542_) == 0)
{
lean_inc(v_fallback_543_);
return v_fallback_543_;
}
else
{
lean_object* v_tail_544_; 
v_tail_544_ = lean_ctor_get(v_l_542_, 1);
lean_inc(v_tail_544_);
return v_tail_544_;
}
}
}
LEAN_EXPORT lean_object* l_List_tailD___boxed(lean_object* v_00_u03b1_545_, lean_object* v_l_546_, lean_object* v_fallback_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_List_tailD(v_00_u03b1_545_, v_l_546_, v_fallback_547_);
lean_dec(v_fallback_547_);
lean_dec(v_l_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_List_filter___redArg(lean_object* v_p_549_, lean_object* v_x_550_){
_start:
{
if (lean_obj_tag(v_x_550_) == 0)
{
lean_dec_ref(v_p_549_);
return v_x_550_;
}
else
{
lean_object* v_head_551_; lean_object* v_tail_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_563_; 
v_head_551_ = lean_ctor_get(v_x_550_, 0);
v_tail_552_ = lean_ctor_get(v_x_550_, 1);
v_isSharedCheck_563_ = !lean_is_exclusive(v_x_550_);
if (v_isSharedCheck_563_ == 0)
{
v___x_554_ = v_x_550_;
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_tail_552_);
lean_inc(v_head_551_);
lean_dec(v_x_550_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; uint8_t v___x_557_; 
lean_inc_ref(v_p_549_);
lean_inc(v_head_551_);
v___x_556_ = lean_apply_1(v_p_549_, v_head_551_);
v___x_557_ = lean_unbox(v___x_556_);
if (v___x_557_ == 0)
{
lean_del_object(v___x_554_);
lean_dec(v_head_551_);
v_x_550_ = v_tail_552_;
goto _start;
}
else
{
lean_object* v___x_559_; lean_object* v___x_561_; 
v___x_559_ = l_List_filter___redArg(v_p_549_, v_tail_552_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v___x_559_);
v___x_561_ = v___x_554_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_head_551_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v___x_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filter(lean_object* v_00_u03b1_564_, lean_object* v_p_565_, lean_object* v_x_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l_List_filter___redArg(v_p_565_, v_x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___redArg(lean_object* v_f_568_, lean_object* v_init_569_, lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_dec(v_f_568_);
lean_inc(v_init_569_);
return v_init_569_;
}
else
{
lean_object* v_head_571_; lean_object* v_tail_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v_head_571_ = lean_ctor_get(v_x_570_, 0);
lean_inc(v_head_571_);
v_tail_572_ = lean_ctor_get(v_x_570_, 1);
lean_inc(v_tail_572_);
lean_dec_ref_known(v_x_570_, 2);
lean_inc(v_f_568_);
v___x_573_ = l_List_foldr___redArg(v_f_568_, v_init_569_, v_tail_572_);
v___x_574_ = lean_apply_2(v_f_568_, v_head_571_, v___x_573_);
return v___x_574_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___redArg___boxed(lean_object* v_f_575_, lean_object* v_init_576_, lean_object* v_x_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_List_foldr___redArg(v_f_575_, v_init_576_, v_x_577_);
lean_dec(v_init_576_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_List_foldr(lean_object* v_00_u03b1_579_, lean_object* v_00_u03b2_580_, lean_object* v_f_581_, lean_object* v_init_582_, lean_object* v_x_583_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l_List_foldr___redArg(v_f_581_, v_init_582_, v_x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___boxed(lean_object* v_00_u03b1_585_, lean_object* v_00_u03b2_586_, lean_object* v_f_587_, lean_object* v_init_588_, lean_object* v_x_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_List_foldr(v_00_u03b1_585_, v_00_u03b2_586_, v_f_587_, v_init_588_, v_x_589_);
lean_dec(v_init_588_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_List_reverseAux___redArg(lean_object* v_x_591_, lean_object* v_x_592_){
_start:
{
if (lean_obj_tag(v_x_591_) == 0)
{
return v_x_592_;
}
else
{
lean_object* v_head_593_; lean_object* v_tail_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_602_; 
v_head_593_ = lean_ctor_get(v_x_591_, 0);
v_tail_594_ = lean_ctor_get(v_x_591_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_x_591_);
if (v_isSharedCheck_602_ == 0)
{
v___x_596_ = v_x_591_;
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_tail_594_);
lean_inc(v_head_593_);
lean_dec(v_x_591_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v_x_592_);
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_head_593_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_x_592_);
v___x_599_ = v_reuseFailAlloc_601_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
v_x_591_ = v_tail_594_;
v_x_592_ = v___x_599_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_reverseAux(lean_object* v_00_u03b1_603_, lean_object* v_x_604_, lean_object* v_x_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_List_reverseAux___redArg(v_x_604_, v_x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_List_reverse___redArg(lean_object* v_as_607_){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = lean_box(0);
v___x_609_ = l_List_reverseAux___redArg(v_as_607_, v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_List_reverse(lean_object* v_00_u03b1_610_, lean_object* v_as_611_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_List_reverse___redArg(v_as_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_reverseAux_match__1_splitter___redArg(lean_object* v_x_613_, lean_object* v_x_614_, lean_object* v_h__1_615_, lean_object* v_h__2_616_){
_start:
{
if (lean_obj_tag(v_x_613_) == 0)
{
lean_object* v___x_617_; 
lean_dec(v_h__2_616_);
v___x_617_ = lean_apply_1(v_h__1_615_, v_x_614_);
return v___x_617_;
}
else
{
lean_object* v_head_618_; lean_object* v_tail_619_; lean_object* v___x_620_; 
lean_dec(v_h__1_615_);
v_head_618_ = lean_ctor_get(v_x_613_, 0);
lean_inc(v_head_618_);
v_tail_619_ = lean_ctor_get(v_x_613_, 1);
lean_inc(v_tail_619_);
lean_dec_ref_known(v_x_613_, 2);
v___x_620_ = lean_apply_3(v_h__2_616_, v_head_618_, v_tail_619_, v_x_614_);
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_reverseAux_match__1_splitter(lean_object* v_00_u03b1_621_, lean_object* v_motive_622_, lean_object* v_x_623_, lean_object* v_x_624_, lean_object* v_h__1_625_, lean_object* v_h__2_626_){
_start:
{
if (lean_obj_tag(v_x_623_) == 0)
{
lean_object* v___x_627_; 
lean_dec(v_h__2_626_);
v___x_627_ = lean_apply_1(v_h__1_625_, v_x_624_);
return v___x_627_;
}
else
{
lean_object* v_head_628_; lean_object* v_tail_629_; lean_object* v___x_630_; 
lean_dec(v_h__1_625_);
v_head_628_ = lean_ctor_get(v_x_623_, 0);
lean_inc(v_head_628_);
v_tail_629_ = lean_ctor_get(v_x_623_, 1);
lean_inc(v_tail_629_);
lean_dec_ref_known(v_x_623_, 2);
v___x_630_ = lean_apply_3(v_h__2_626_, v_head_628_, v_tail_629_, v_x_624_);
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* l_List_appendTR___redArg(lean_object* v_as_631_, lean_object* v_bs_632_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = l_List_reverse___redArg(v_as_631_);
v___x_634_ = l_List_reverseAux___redArg(v___x_633_, v_bs_632_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_List_appendTR(lean_object* v_00_u03b1_635_, lean_object* v_as_636_, lean_object* v_bs_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_List_appendTR___redArg(v_as_636_, v_bs_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_append_match__1_splitter___redArg(lean_object* v_x_639_, lean_object* v_x_640_, lean_object* v_h__1_641_, lean_object* v_h__2_642_){
_start:
{
if (lean_obj_tag(v_x_639_) == 0)
{
lean_object* v___x_643_; 
lean_dec(v_h__2_642_);
v___x_643_ = lean_apply_1(v_h__1_641_, v_x_640_);
return v___x_643_;
}
else
{
lean_object* v_head_644_; lean_object* v_tail_645_; lean_object* v___x_646_; 
lean_dec(v_h__1_641_);
v_head_644_ = lean_ctor_get(v_x_639_, 0);
lean_inc(v_head_644_);
v_tail_645_ = lean_ctor_get(v_x_639_, 1);
lean_inc(v_tail_645_);
lean_dec_ref_known(v_x_639_, 2);
v___x_646_ = lean_apply_3(v_h__2_642_, v_head_644_, v_tail_645_, v_x_640_);
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_append_match__1_splitter(lean_object* v_00_u03b1_647_, lean_object* v_motive_648_, lean_object* v_x_649_, lean_object* v_x_650_, lean_object* v_h__1_651_, lean_object* v_h__2_652_){
_start:
{
if (lean_obj_tag(v_x_649_) == 0)
{
lean_object* v___x_653_; 
lean_dec(v_h__2_652_);
v___x_653_ = lean_apply_1(v_h__1_651_, v_x_650_);
return v___x_653_;
}
else
{
lean_object* v_head_654_; lean_object* v_tail_655_; lean_object* v___x_656_; 
lean_dec(v_h__1_651_);
v_head_654_ = lean_ctor_get(v_x_649_, 0);
lean_inc(v_head_654_);
v_tail_655_ = lean_ctor_get(v_x_649_, 1);
lean_inc(v_tail_655_);
lean_dec_ref_known(v_x_649_, 2);
v___x_656_ = lean_apply_3(v_h__2_652_, v_head_654_, v_tail_655_, v_x_650_);
return v___x_656_;
}
}
}
LEAN_EXPORT lean_object* l_List_instAppend___redArg(){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = ((lean_object*)(l_List_instAppend___redArg___closed__0));
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_List_instAppend___redArg___boxed(lean_object* v___dummy_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_List_instAppend___redArg();
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_List_instAppend(lean_object* v_00_u03b1_662_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = ((lean_object*)(l_List_instAppend___redArg___closed__0));
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_List_singleton___redArg(lean_object* v_a_664_){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_box(0);
v___x_666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_666_, 0, v_a_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_List_singleton(lean_object* v_00_u03b1_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = lean_box(0);
v___x_670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_670_, 0, v_a_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_List_replicate___redArg(lean_object* v_x_671_, lean_object* v_x_672_){
_start:
{
lean_object* v_zero_673_; uint8_t v_isZero_674_; 
v_zero_673_ = lean_unsigned_to_nat(0u);
v_isZero_674_ = lean_nat_dec_eq(v_x_671_, v_zero_673_);
if (v_isZero_674_ == 1)
{
lean_object* v___x_675_; 
lean_dec(v_x_672_);
v___x_675_ = lean_box(0);
return v___x_675_;
}
else
{
lean_object* v_one_676_; lean_object* v_n_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v_one_676_ = lean_unsigned_to_nat(1u);
v_n_677_ = lean_nat_sub(v_x_671_, v_one_676_);
lean_inc(v_x_672_);
v___x_678_ = l_List_replicate___redArg(v_n_677_, v_x_672_);
lean_dec(v_n_677_);
v___x_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_679_, 0, v_x_672_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
return v___x_679_;
}
}
}
LEAN_EXPORT lean_object* l_List_replicate___redArg___boxed(lean_object* v_x_680_, lean_object* v_x_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_List_replicate___redArg(v_x_680_, v_x_681_);
lean_dec(v_x_680_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_List_replicate(lean_object* v_00_u03b1_683_, lean_object* v_x_684_, lean_object* v_x_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_List_replicate___redArg(v_x_684_, v_x_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_List_replicate___boxed(lean_object* v_00_u03b1_687_, lean_object* v_x_688_, lean_object* v_x_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_List_replicate(v_00_u03b1_687_, v_x_688_, v_x_689_);
lean_dec(v_x_688_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_List_leftpad___redArg(lean_object* v_n_691_, lean_object* v_a_692_, lean_object* v_l_693_){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_694_ = l_List_length___redArg(v_l_693_);
v___x_695_ = lean_nat_sub(v_n_691_, v___x_694_);
lean_dec(v___x_694_);
v___x_696_ = l_List_replicate___redArg(v___x_695_, v_a_692_);
lean_dec(v___x_695_);
v___x_697_ = l_List_appendTR___redArg(v___x_696_, v_l_693_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_List_leftpad___redArg___boxed(lean_object* v_n_698_, lean_object* v_a_699_, lean_object* v_l_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_List_leftpad___redArg(v_n_698_, v_a_699_, v_l_700_);
lean_dec(v_n_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_List_leftpad(lean_object* v_00_u03b1_702_, lean_object* v_n_703_, lean_object* v_a_704_, lean_object* v_l_705_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l_List_leftpad___redArg(v_n_703_, v_a_704_, v_l_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_List_leftpad___boxed(lean_object* v_00_u03b1_707_, lean_object* v_n_708_, lean_object* v_a_709_, lean_object* v_l_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_List_leftpad(v_00_u03b1_707_, v_n_708_, v_a_709_, v_l_710_);
lean_dec(v_n_708_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_List_rightpad___redArg(lean_object* v_n_712_, lean_object* v_a_713_, lean_object* v_l_714_){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_715_ = l_List_length___redArg(v_l_714_);
v___x_716_ = lean_nat_sub(v_n_712_, v___x_715_);
lean_dec(v___x_715_);
v___x_717_ = l_List_replicate___redArg(v___x_716_, v_a_713_);
lean_dec(v___x_716_);
v___x_718_ = l_List_appendTR___redArg(v_l_714_, v___x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_List_rightpad___redArg___boxed(lean_object* v_n_719_, lean_object* v_a_720_, lean_object* v_l_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_List_rightpad___redArg(v_n_719_, v_a_720_, v_l_721_);
lean_dec(v_n_719_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_List_rightpad(lean_object* v_00_u03b1_723_, lean_object* v_n_724_, lean_object* v_a_725_, lean_object* v_l_726_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_List_rightpad___redArg(v_n_724_, v_a_725_, v_l_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_List_rightpad___boxed(lean_object* v_00_u03b1_728_, lean_object* v_n_729_, lean_object* v_a_730_, lean_object* v_l_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_List_rightpad(v_00_u03b1_728_, v_n_729_, v_a_730_, v_l_731_);
lean_dec(v_n_729_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_List_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = lean_box(0);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_List_instEmptyCollection___redArg___boxed(lean_object* v___dummy_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_List_instEmptyCollection___redArg();
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_List_instEmptyCollection(lean_object* v_00_u03b1_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lean_box(0);
return v___x_738_;
}
}
LEAN_EXPORT uint8_t l_List_isEmpty___redArg(lean_object* v_x_739_){
_start:
{
if (lean_obj_tag(v_x_739_) == 0)
{
uint8_t v___x_740_; 
v___x_740_ = 1;
return v___x_740_;
}
else
{
uint8_t v___x_741_; 
v___x_741_ = 0;
return v___x_741_;
}
}
}
LEAN_EXPORT lean_object* l_List_isEmpty___redArg___boxed(lean_object* v_x_742_){
_start:
{
uint8_t v_res_743_; lean_object* v_r_744_; 
v_res_743_ = l_List_isEmpty___redArg(v_x_742_);
lean_dec(v_x_742_);
v_r_744_ = lean_box(v_res_743_);
return v_r_744_;
}
}
LEAN_EXPORT uint8_t l_List_isEmpty(lean_object* v_00_u03b1_745_, lean_object* v_x_746_){
_start:
{
uint8_t v___x_747_; 
v___x_747_ = l_List_isEmpty___redArg(v_x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_List_isEmpty___boxed(lean_object* v_00_u03b1_748_, lean_object* v_x_749_){
_start:
{
uint8_t v_res_750_; lean_object* v_r_751_; 
v_res_750_ = l_List_isEmpty(v_00_u03b1_748_, v_x_749_);
lean_dec(v_x_749_);
v_r_751_ = lean_box(v_res_750_);
return v_r_751_;
}
}
LEAN_EXPORT uint8_t l_List_elem___redArg(lean_object* v_inst_752_, lean_object* v_a_753_, lean_object* v_x_754_){
_start:
{
if (lean_obj_tag(v_x_754_) == 0)
{
uint8_t v___x_755_; 
lean_dec(v_a_753_);
lean_dec_ref(v_inst_752_);
v___x_755_ = 0;
return v___x_755_;
}
else
{
lean_object* v_head_756_; lean_object* v_tail_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v_head_756_ = lean_ctor_get(v_x_754_, 0);
lean_inc(v_head_756_);
v_tail_757_ = lean_ctor_get(v_x_754_, 1);
lean_inc(v_tail_757_);
lean_dec_ref_known(v_x_754_, 2);
lean_inc_ref(v_inst_752_);
lean_inc(v_a_753_);
v___x_758_ = lean_apply_2(v_inst_752_, v_a_753_, v_head_756_);
v___x_759_ = lean_unbox(v___x_758_);
if (v___x_759_ == 0)
{
v_x_754_ = v_tail_757_;
goto _start;
}
else
{
uint8_t v___x_761_; 
lean_dec(v_tail_757_);
lean_dec(v_a_753_);
lean_dec_ref(v_inst_752_);
v___x_761_ = lean_unbox(v___x_758_);
return v___x_761_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___redArg___boxed(lean_object* v_inst_762_, lean_object* v_a_763_, lean_object* v_x_764_){
_start:
{
uint8_t v_res_765_; lean_object* v_r_766_; 
v_res_765_ = l_List_elem___redArg(v_inst_762_, v_a_763_, v_x_764_);
v_r_766_ = lean_box(v_res_765_);
return v_r_766_;
}
}
LEAN_EXPORT uint8_t l_List_elem(lean_object* v_00_u03b1_767_, lean_object* v_inst_768_, lean_object* v_a_769_, lean_object* v_x_770_){
_start:
{
uint8_t v___x_771_; 
v___x_771_ = l_List_elem___redArg(v_inst_768_, v_a_769_, v_x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_List_elem___boxed(lean_object* v_00_u03b1_772_, lean_object* v_inst_773_, lean_object* v_a_774_, lean_object* v_x_775_){
_start:
{
uint8_t v_res_776_; lean_object* v_r_777_; 
v_res_776_ = l_List_elem(v_00_u03b1_772_, v_inst_773_, v_a_774_, v_x_775_);
v_r_777_ = lean_box(v_res_776_);
return v_r_777_;
}
}
LEAN_EXPORT uint8_t l_List_contains___redArg(lean_object* v_inst_778_, lean_object* v_as_779_, lean_object* v_a_780_){
_start:
{
uint8_t v___x_781_; 
v___x_781_ = l_List_elem___redArg(v_inst_778_, v_a_780_, v_as_779_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_List_contains___redArg___boxed(lean_object* v_inst_782_, lean_object* v_as_783_, lean_object* v_a_784_){
_start:
{
uint8_t v_res_785_; lean_object* v_r_786_; 
v_res_785_ = l_List_contains___redArg(v_inst_782_, v_as_783_, v_a_784_);
v_r_786_ = lean_box(v_res_785_);
return v_r_786_;
}
}
LEAN_EXPORT uint8_t l_List_contains(lean_object* v_00_u03b1_787_, lean_object* v_inst_788_, lean_object* v_as_789_, lean_object* v_a_790_){
_start:
{
uint8_t v___x_791_; 
v___x_791_ = l_List_elem___redArg(v_inst_788_, v_a_790_, v_as_789_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_List_contains___boxed(lean_object* v_00_u03b1_792_, lean_object* v_inst_793_, lean_object* v_as_794_, lean_object* v_a_795_){
_start:
{
uint8_t v_res_796_; lean_object* v_r_797_; 
v_res_796_ = l_List_contains(v_00_u03b1_792_, v_inst_793_, v_as_794_, v_a_795_);
v_r_797_ = lean_box(v_res_796_);
return v_r_797_;
}
}
LEAN_EXPORT lean_object* l_List_instMembership___redArg(){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = lean_box(0);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_List_instMembership___redArg___boxed(lean_object* v___dummy_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_List_instMembership___redArg();
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_List_instMembership(lean_object* v_00_u03b1_802_){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = lean_box(0);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_getLast_x3f_match__1_splitter___redArg(lean_object* v_x_804_, lean_object* v_h__1_805_, lean_object* v_h__2_806_){
_start:
{
if (lean_obj_tag(v_x_804_) == 0)
{
lean_object* v___x_807_; lean_object* v___x_808_; 
lean_dec(v_h__2_806_);
v___x_807_ = lean_box(0);
v___x_808_ = lean_apply_1(v_h__1_805_, v___x_807_);
return v___x_808_;
}
else
{
lean_object* v_head_809_; lean_object* v_tail_810_; lean_object* v___x_811_; 
lean_dec(v_h__1_805_);
v_head_809_ = lean_ctor_get(v_x_804_, 0);
lean_inc(v_head_809_);
v_tail_810_ = lean_ctor_get(v_x_804_, 1);
lean_inc(v_tail_810_);
lean_dec_ref_known(v_x_804_, 2);
v___x_811_ = lean_apply_2(v_h__2_806_, v_head_809_, v_tail_810_);
return v___x_811_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_getLast_x3f_match__1_splitter(lean_object* v_00_u03b1_812_, lean_object* v_motive_813_, lean_object* v_x_814_, lean_object* v_h__1_815_, lean_object* v_h__2_816_){
_start:
{
if (lean_obj_tag(v_x_814_) == 0)
{
lean_object* v___x_817_; lean_object* v___x_818_; 
lean_dec(v_h__2_816_);
v___x_817_ = lean_box(0);
v___x_818_ = lean_apply_1(v_h__1_815_, v___x_817_);
return v___x_818_;
}
else
{
lean_object* v_head_819_; lean_object* v_tail_820_; lean_object* v___x_821_; 
lean_dec(v_h__1_815_);
v_head_819_ = lean_ctor_get(v_x_814_, 0);
lean_inc(v_head_819_);
v_tail_820_ = lean_ctor_get(v_x_814_, 1);
lean_inc(v_tail_820_);
lean_dec_ref_known(v_x_814_, 2);
v___x_821_ = lean_apply_2(v_h__2_816_, v_head_819_, v_tail_820_);
return v___x_821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg(uint8_t v_x_822_, lean_object* v_h__1_823_, lean_object* v_h__2_824_){
_start:
{
if (v_x_822_ == 0)
{
lean_object* v___x_825_; lean_object* v___x_826_; 
lean_dec(v_h__1_823_);
v___x_825_ = lean_box(0);
v___x_826_ = lean_apply_1(v_h__2_824_, v___x_825_);
return v___x_826_;
}
else
{
lean_object* v___x_827_; lean_object* v___x_828_; 
lean_dec(v_h__2_824_);
v___x_827_ = lean_box(0);
v___x_828_ = lean_apply_1(v_h__1_823_, v___x_827_);
return v___x_828_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg___boxed(lean_object* v_x_829_, lean_object* v_h__1_830_, lean_object* v_h__2_831_){
_start:
{
uint8_t v_x_24__boxed_832_; lean_object* v_res_833_; 
v_x_24__boxed_832_ = lean_unbox(v_x_829_);
v_res_833_ = l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___redArg(v_x_24__boxed_832_, v_h__1_830_, v_h__2_831_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter(lean_object* v_motive_834_, uint8_t v_x_835_, lean_object* v_h__1_836_, lean_object* v_h__2_837_){
_start:
{
if (v_x_835_ == 0)
{
lean_object* v___x_838_; lean_object* v___x_839_; 
lean_dec(v_h__1_836_);
v___x_838_ = lean_box(0);
v___x_839_ = lean_apply_1(v_h__2_837_, v___x_838_);
return v___x_839_;
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; 
lean_dec(v_h__2_837_);
v___x_840_ = lean_box(0);
v___x_841_ = lean_apply_1(v_h__1_836_, v___x_840_);
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter___boxed(lean_object* v_motive_842_, lean_object* v_x_843_, lean_object* v_h__1_844_, lean_object* v_h__2_845_){
_start:
{
uint8_t v_x_35__boxed_846_; lean_object* v_res_847_; 
v_x_35__boxed_846_ = lean_unbox(v_x_843_);
v_res_847_ = l___private_Init_Data_List_Basic_0__List_filter_match__1_splitter(v_motive_842_, v_x_35__boxed_846_, v_h__1_844_, v_h__2_845_);
return v_res_847_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableMemOfLawfulBEq___redArg(lean_object* v_inst_848_, lean_object* v_a_849_, lean_object* v_as_850_){
_start:
{
uint8_t v___x_851_; 
v___x_851_ = l_List_elem___redArg(v_inst_848_, v_a_849_, v_as_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableMemOfLawfulBEq___redArg___boxed(lean_object* v_inst_852_, lean_object* v_a_853_, lean_object* v_as_854_){
_start:
{
uint8_t v_res_855_; lean_object* v_r_856_; 
v_res_855_ = l_List_instDecidableMemOfLawfulBEq___redArg(v_inst_852_, v_a_853_, v_as_854_);
v_r_856_ = lean_box(v_res_855_);
return v_r_856_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableMemOfLawfulBEq(lean_object* v_00_u03b1_857_, lean_object* v_inst_858_, lean_object* v_inst_859_, lean_object* v_a_860_, lean_object* v_as_861_){
_start:
{
uint8_t v___x_862_; 
v___x_862_ = l_List_elem___redArg(v_inst_858_, v_a_860_, v_as_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableMemOfLawfulBEq___boxed(lean_object* v_00_u03b1_863_, lean_object* v_inst_864_, lean_object* v_inst_865_, lean_object* v_a_866_, lean_object* v_as_867_){
_start:
{
uint8_t v_res_868_; lean_object* v_r_869_; 
v_res_868_ = l_List_instDecidableMemOfLawfulBEq(v_00_u03b1_863_, v_inst_864_, v_inst_865_, v_a_866_, v_as_867_);
v_r_869_ = lean_box(v_res_868_);
return v_r_869_;
}
}
LEAN_EXPORT uint8_t l_List_decidableBEx___redArg(lean_object* v_inst_870_, lean_object* v_x_871_){
_start:
{
if (lean_obj_tag(v_x_871_) == 0)
{
uint8_t v___x_872_; 
lean_dec_ref(v_inst_870_);
v___x_872_ = 0;
return v___x_872_;
}
else
{
lean_object* v_head_873_; lean_object* v_tail_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v_head_873_ = lean_ctor_get(v_x_871_, 0);
lean_inc(v_head_873_);
v_tail_874_ = lean_ctor_get(v_x_871_, 1);
lean_inc(v_tail_874_);
lean_dec_ref_known(v_x_871_, 2);
lean_inc_ref(v_inst_870_);
v___x_875_ = lean_apply_1(v_inst_870_, v_head_873_);
v___x_876_ = lean_unbox(v___x_875_);
if (v___x_876_ == 0)
{
uint8_t v_decide_877_; 
v_decide_877_ = l_List_decidableBEx___redArg(v_inst_870_, v_tail_874_);
if (v_decide_877_ == 0)
{
uint8_t v___x_878_; 
v___x_878_ = lean_unbox(v___x_875_);
return v___x_878_;
}
else
{
return v_decide_877_;
}
}
else
{
uint8_t v___x_879_; 
lean_dec(v_tail_874_);
lean_dec_ref(v_inst_870_);
v___x_879_ = lean_unbox(v___x_875_);
return v___x_879_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_decidableBEx___redArg___boxed(lean_object* v_inst_880_, lean_object* v_x_881_){
_start:
{
uint8_t v_res_882_; lean_object* v_r_883_; 
v_res_882_ = l_List_decidableBEx___redArg(v_inst_880_, v_x_881_);
v_r_883_ = lean_box(v_res_882_);
return v_r_883_;
}
}
LEAN_EXPORT uint8_t l_List_decidableBEx(lean_object* v_00_u03b1_884_, lean_object* v_p_885_, lean_object* v_inst_886_, lean_object* v_x_887_){
_start:
{
uint8_t v___x_888_; 
v___x_888_ = l_List_decidableBEx___redArg(v_inst_886_, v_x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_List_decidableBEx___boxed(lean_object* v_00_u03b1_889_, lean_object* v_p_890_, lean_object* v_inst_891_, lean_object* v_x_892_){
_start:
{
uint8_t v_res_893_; lean_object* v_r_894_; 
v_res_893_ = l_List_decidableBEx(v_00_u03b1_889_, v_p_890_, v_inst_891_, v_x_892_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
LEAN_EXPORT uint8_t l_List_decidableBAll___redArg(lean_object* v_inst_895_, lean_object* v_x_896_){
_start:
{
if (lean_obj_tag(v_x_896_) == 0)
{
uint8_t v___x_897_; 
lean_dec_ref(v_inst_895_);
v___x_897_ = 1;
return v___x_897_;
}
else
{
lean_object* v_head_898_; lean_object* v_tail_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v_head_898_ = lean_ctor_get(v_x_896_, 0);
lean_inc(v_head_898_);
v_tail_899_ = lean_ctor_get(v_x_896_, 1);
lean_inc(v_tail_899_);
lean_dec_ref_known(v_x_896_, 2);
lean_inc_ref(v_inst_895_);
v___x_900_ = lean_apply_1(v_inst_895_, v_head_898_);
v___x_901_ = lean_unbox(v___x_900_);
if (v___x_901_ == 0)
{
uint8_t v___x_902_; 
lean_dec(v_tail_899_);
lean_dec_ref(v_inst_895_);
v___x_902_ = lean_unbox(v___x_900_);
return v___x_902_;
}
else
{
uint8_t v_decide_903_; 
v_decide_903_ = l_List_decidableBAll___redArg(v_inst_895_, v_tail_899_);
if (v_decide_903_ == 0)
{
return v_decide_903_;
}
else
{
uint8_t v___x_904_; 
v___x_904_ = lean_unbox(v___x_900_);
return v___x_904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_decidableBAll___redArg___boxed(lean_object* v_inst_905_, lean_object* v_x_906_){
_start:
{
uint8_t v_res_907_; lean_object* v_r_908_; 
v_res_907_ = l_List_decidableBAll___redArg(v_inst_905_, v_x_906_);
v_r_908_ = lean_box(v_res_907_);
return v_r_908_;
}
}
LEAN_EXPORT uint8_t l_List_decidableBAll(lean_object* v_00_u03b1_909_, lean_object* v_p_910_, lean_object* v_inst_911_, lean_object* v_x_912_){
_start:
{
uint8_t v___x_913_; 
v___x_913_ = l_List_decidableBAll___redArg(v_inst_911_, v_x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_List_decidableBAll___boxed(lean_object* v_00_u03b1_914_, lean_object* v_p_915_, lean_object* v_inst_916_, lean_object* v_x_917_){
_start:
{
uint8_t v_res_918_; lean_object* v_r_919_; 
v_res_918_ = l_List_decidableBAll(v_00_u03b1_914_, v_p_915_, v_inst_916_, v_x_917_);
v_r_919_ = lean_box(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT lean_object* l_List_take___redArg(lean_object* v_x_920_, lean_object* v_x_921_){
_start:
{
lean_object* v_zero_922_; uint8_t v_isZero_923_; 
v_zero_922_ = lean_unsigned_to_nat(0u);
v_isZero_923_ = lean_nat_dec_eq(v_x_920_, v_zero_922_);
if (v_isZero_923_ == 1)
{
lean_object* v___x_924_; 
lean_dec(v_x_921_);
v___x_924_ = lean_box(0);
return v___x_924_;
}
else
{
if (lean_obj_tag(v_x_921_) == 0)
{
return v_x_921_;
}
else
{
lean_object* v_head_925_; lean_object* v_tail_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_936_; 
v_head_925_ = lean_ctor_get(v_x_921_, 0);
v_tail_926_ = lean_ctor_get(v_x_921_, 1);
v_isSharedCheck_936_ = !lean_is_exclusive(v_x_921_);
if (v_isSharedCheck_936_ == 0)
{
v___x_928_ = v_x_921_;
v_isShared_929_ = v_isSharedCheck_936_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_tail_926_);
lean_inc(v_head_925_);
lean_dec(v_x_921_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_936_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v_one_930_; lean_object* v_n_931_; lean_object* v___x_932_; lean_object* v___x_934_; 
v_one_930_ = lean_unsigned_to_nat(1u);
v_n_931_ = lean_nat_sub(v_x_920_, v_one_930_);
v___x_932_ = l_List_take___redArg(v_n_931_, v_tail_926_);
lean_dec(v_n_931_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 1, v___x_932_);
v___x_934_ = v___x_928_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_head_925_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v___x_932_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_take___redArg___boxed(lean_object* v_x_937_, lean_object* v_x_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_List_take___redArg(v_x_937_, v_x_938_);
lean_dec(v_x_937_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_List_take(lean_object* v_00_u03b1_940_, lean_object* v_x_941_, lean_object* v_x_942_){
_start:
{
lean_object* v___x_943_; 
v___x_943_ = l_List_take___redArg(v_x_941_, v_x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_List_take___boxed(lean_object* v_00_u03b1_944_, lean_object* v_x_945_, lean_object* v_x_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_List_take(v_00_u03b1_944_, v_x_945_, v_x_946_);
lean_dec(v_x_945_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_List_drop___redArg(lean_object* v_x_948_, lean_object* v_x_949_){
_start:
{
lean_object* v_zero_950_; uint8_t v_isZero_951_; 
v_zero_950_ = lean_unsigned_to_nat(0u);
v_isZero_951_ = lean_nat_dec_eq(v_x_948_, v_zero_950_);
if (v_isZero_951_ == 1)
{
lean_dec(v_x_948_);
lean_inc(v_x_949_);
return v_x_949_;
}
else
{
if (lean_obj_tag(v_x_949_) == 0)
{
lean_dec(v_x_948_);
return v_x_949_;
}
else
{
lean_object* v_tail_952_; lean_object* v_one_953_; lean_object* v_n_954_; 
v_tail_952_ = lean_ctor_get(v_x_949_, 1);
v_one_953_ = lean_unsigned_to_nat(1u);
v_n_954_ = lean_nat_sub(v_x_948_, v_one_953_);
lean_dec(v_x_948_);
v_x_948_ = v_n_954_;
v_x_949_ = v_tail_952_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_drop___redArg___boxed(lean_object* v_x_956_, lean_object* v_x_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_List_drop___redArg(v_x_956_, v_x_957_);
lean_dec(v_x_957_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_List_drop(lean_object* v_00_u03b1_959_, lean_object* v_x_960_, lean_object* v_x_961_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_List_drop___redArg(v_x_960_, v_x_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_List_drop___boxed(lean_object* v_00_u03b1_963_, lean_object* v_x_964_, lean_object* v_x_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_List_drop(v_00_u03b1_963_, v_x_964_, v_x_965_);
lean_dec(v_x_965_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_List_extract___redArg(lean_object* v_l_967_, lean_object* v_start_968_, lean_object* v_stop_969_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_970_ = lean_nat_sub(v_stop_969_, v_start_968_);
v___x_971_ = l_List_drop___redArg(v_start_968_, v_l_967_);
v___x_972_ = l_List_take___redArg(v___x_970_, v___x_971_);
lean_dec(v___x_970_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_List_extract___redArg___boxed(lean_object* v_l_973_, lean_object* v_start_974_, lean_object* v_stop_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_List_extract___redArg(v_l_973_, v_start_974_, v_stop_975_);
lean_dec(v_stop_975_);
lean_dec(v_l_973_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_List_extract(lean_object* v_00_u03b1_977_, lean_object* v_l_978_, lean_object* v_start_979_, lean_object* v_stop_980_){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_981_ = lean_nat_sub(v_stop_980_, v_start_979_);
v___x_982_ = l_List_drop___redArg(v_start_979_, v_l_978_);
v___x_983_ = l_List_take___redArg(v___x_981_, v___x_982_);
lean_dec(v___x_981_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_List_extract___boxed(lean_object* v_00_u03b1_984_, lean_object* v_l_985_, lean_object* v_start_986_, lean_object* v_stop_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_List_extract(v_00_u03b1_984_, v_l_985_, v_start_986_, v_stop_987_);
lean_dec(v_stop_987_);
lean_dec(v_l_985_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_List_takeWhile___redArg(lean_object* v_p_989_, lean_object* v_x_990_){
_start:
{
if (lean_obj_tag(v_x_990_) == 0)
{
lean_dec_ref(v_p_989_);
return v_x_990_;
}
else
{
lean_object* v_head_991_; lean_object* v_tail_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1003_; 
v_head_991_ = lean_ctor_get(v_x_990_, 0);
v_tail_992_ = lean_ctor_get(v_x_990_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_x_990_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_994_ = v_x_990_;
v_isShared_995_ = v_isSharedCheck_1003_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_tail_992_);
lean_inc(v_head_991_);
lean_dec(v_x_990_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1003_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; uint8_t v___x_997_; 
lean_inc_ref(v_p_989_);
lean_inc(v_head_991_);
v___x_996_ = lean_apply_1(v_p_989_, v_head_991_);
v___x_997_ = lean_unbox(v___x_996_);
if (v___x_997_ == 0)
{
lean_object* v___x_998_; 
lean_del_object(v___x_994_);
lean_dec(v_tail_992_);
lean_dec(v_head_991_);
lean_dec_ref(v_p_989_);
v___x_998_ = lean_box(0);
return v___x_998_;
}
else
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
v___x_999_ = l_List_takeWhile___redArg(v_p_989_, v_tail_992_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 1, v___x_999_);
v___x_1001_ = v___x_994_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_head_991_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v___x_999_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_takeWhile(lean_object* v_00_u03b1_1004_, lean_object* v_p_1005_, lean_object* v_x_1006_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l_List_takeWhile___redArg(v_p_1005_, v_x_1006_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___redArg(lean_object* v_p_1008_, lean_object* v_x_1009_){
_start:
{
if (lean_obj_tag(v_x_1009_) == 0)
{
lean_dec_ref(v_p_1008_);
return v_x_1009_;
}
else
{
lean_object* v_head_1010_; lean_object* v_tail_1011_; lean_object* v___x_1012_; uint8_t v___x_1013_; 
v_head_1010_ = lean_ctor_get(v_x_1009_, 0);
v_tail_1011_ = lean_ctor_get(v_x_1009_, 1);
lean_inc_ref(v_p_1008_);
lean_inc(v_head_1010_);
v___x_1012_ = lean_apply_1(v_p_1008_, v_head_1010_);
v___x_1013_ = lean_unbox(v___x_1012_);
if (v___x_1013_ == 0)
{
lean_dec_ref(v_p_1008_);
return v_x_1009_;
}
else
{
lean_inc(v_tail_1011_);
lean_dec_ref_known(v_x_1009_, 2);
v_x_1009_ = v_tail_1011_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile(lean_object* v_00_u03b1_1015_, lean_object* v_p_1016_, lean_object* v_x_1017_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_List_dropWhile___redArg(v_p_1016_, v_x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___redArg(lean_object* v_p_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_){
_start:
{
if (lean_obj_tag(v_a_1020_) == 0)
{
lean_object* v_fst_1022_; lean_object* v_snd_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1032_; 
lean_dec_ref(v_p_1019_);
v_fst_1022_ = lean_ctor_get(v_a_1021_, 0);
v_snd_1023_ = lean_ctor_get(v_a_1021_, 1);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_a_1021_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1025_ = v_a_1021_;
v_isShared_1026_ = v_isSharedCheck_1032_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_snd_1023_);
lean_inc(v_fst_1022_);
lean_dec(v_a_1021_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1032_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1030_; 
v___x_1027_ = l_List_reverse___redArg(v_fst_1022_);
v___x_1028_ = l_List_reverse___redArg(v_snd_1023_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 1, v___x_1028_);
lean_ctor_set(v___x_1025_, 0, v___x_1027_);
v___x_1030_ = v___x_1025_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1027_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v___x_1028_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
else
{
lean_object* v_head_1033_; lean_object* v_tail_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1060_; 
v_head_1033_ = lean_ctor_get(v_a_1020_, 0);
v_tail_1034_ = lean_ctor_get(v_a_1020_, 1);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_a_1020_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1036_ = v_a_1020_;
v_isShared_1037_ = v_isSharedCheck_1060_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_tail_1034_);
lean_inc(v_head_1033_);
lean_dec(v_a_1020_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1060_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v_fst_1038_; lean_object* v_snd_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1059_; 
v_fst_1038_ = lean_ctor_get(v_a_1021_, 0);
v_snd_1039_ = lean_ctor_get(v_a_1021_, 1);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_a_1021_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1041_ = v_a_1021_;
v_isShared_1042_ = v_isSharedCheck_1059_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_snd_1039_);
lean_inc(v_fst_1038_);
lean_dec(v_a_1021_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1059_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1043_; uint8_t v___x_1044_; 
lean_inc_ref(v_p_1019_);
lean_inc(v_head_1033_);
v___x_1043_ = lean_apply_1(v_p_1019_, v_head_1033_);
v___x_1044_ = lean_unbox(v___x_1043_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1046_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 1, v_snd_1039_);
v___x_1046_ = v___x_1036_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_head_1033_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_snd_1039_);
v___x_1046_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v___x_1048_; 
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 1, v___x_1046_);
v___x_1048_ = v___x_1041_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_fst_1038_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v___x_1046_);
v___x_1048_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
v_a_1020_ = v_tail_1034_;
v_a_1021_ = v___x_1048_;
goto _start;
}
}
}
else
{
lean_object* v___x_1053_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 1, v_fst_1038_);
v___x_1053_ = v___x_1036_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_head_1033_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_fst_1038_);
v___x_1053_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
lean_object* v___x_1055_; 
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 0, v___x_1053_);
v___x_1055_ = v___x_1041_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1057_, 1, v_snd_1039_);
v___x_1055_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
v_a_1020_ = v_tail_1034_;
v_a_1021_ = v___x_1055_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_partition_loop(lean_object* v_00_u03b1_1061_, lean_object* v_p_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_List_partition_loop___redArg(v_p_1062_, v_a_1063_, v_a_1064_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_List_partition___redArg(lean_object* v_p_1068_, lean_object* v_as_1069_){
_start:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = ((lean_object*)(l_List_partition___redArg___closed__0));
v___x_1071_ = l_List_partition_loop___redArg(v_p_1068_, v_as_1069_, v___x_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_List_partition(lean_object* v_00_u03b1_1072_, lean_object* v_p_1073_, lean_object* v_as_1074_){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l_List_partition___redArg___closed__0));
v___x_1076_ = l_List_partition_loop___redArg(v_p_1073_, v_as_1074_, v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_List_dropLast___redArg(lean_object* v_x_1077_){
_start:
{
if (lean_obj_tag(v_x_1077_) == 0)
{
return v_x_1077_;
}
else
{
lean_object* v_tail_1078_; 
v_tail_1078_ = lean_ctor_get(v_x_1077_, 1);
lean_inc(v_tail_1078_);
if (lean_obj_tag(v_tail_1078_) == 0)
{
lean_dec_ref_known(v_x_1077_, 2);
return v_tail_1078_;
}
else
{
lean_object* v_head_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1087_; 
v_head_1079_ = lean_ctor_get(v_x_1077_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_x_1077_);
if (v_isSharedCheck_1087_ == 0)
{
lean_object* v_unused_1088_; 
v_unused_1088_ = lean_ctor_get(v_x_1077_, 1);
lean_dec(v_unused_1088_);
v___x_1081_ = v_x_1077_;
v_isShared_1082_ = v_isSharedCheck_1087_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_head_1079_);
lean_dec(v_x_1077_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1087_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; lean_object* v___x_1085_; 
v___x_1083_ = l_List_dropLast___redArg(v_tail_1078_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v___x_1083_);
v___x_1085_ = v___x_1081_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_head_1079_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropLast(lean_object* v_00_u03b1_1089_, lean_object* v_x_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_List_dropLast___redArg(v_x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_dropLast_match__1_splitter___redArg(lean_object* v_x_1092_, lean_object* v_h__1_1093_, lean_object* v_h__2_1094_, lean_object* v_h__3_1095_){
_start:
{
if (lean_obj_tag(v_x_1092_) == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_dec(v_h__3_1095_);
lean_dec(v_h__2_1094_);
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_apply_1(v_h__1_1093_, v___x_1096_);
return v___x_1097_;
}
else
{
lean_object* v_tail_1098_; 
lean_dec(v_h__1_1093_);
v_tail_1098_ = lean_ctor_get(v_x_1092_, 1);
if (lean_obj_tag(v_tail_1098_) == 0)
{
lean_object* v_head_1099_; lean_object* v___x_1100_; 
lean_dec(v_h__3_1095_);
v_head_1099_ = lean_ctor_get(v_x_1092_, 0);
lean_inc(v_head_1099_);
lean_dec_ref_known(v_x_1092_, 2);
v___x_1100_ = lean_apply_1(v_h__2_1094_, v_head_1099_);
return v___x_1100_;
}
else
{
lean_object* v_head_1101_; lean_object* v___x_1102_; 
lean_inc_ref(v_tail_1098_);
lean_dec(v_h__2_1094_);
v_head_1101_ = lean_ctor_get(v_x_1092_, 0);
lean_inc(v_head_1101_);
lean_dec_ref_known(v_x_1092_, 2);
v___x_1102_ = lean_apply_3(v_h__3_1095_, v_head_1101_, v_tail_1098_, lean_box(0));
return v___x_1102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_dropLast_match__1_splitter(lean_object* v_00_u03b1_1103_, lean_object* v_motive_1104_, lean_object* v_x_1105_, lean_object* v_h__1_1106_, lean_object* v_h__2_1107_, lean_object* v_h__3_1108_){
_start:
{
if (lean_obj_tag(v_x_1105_) == 0)
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
lean_dec(v_h__3_1108_);
lean_dec(v_h__2_1107_);
v___x_1109_ = lean_box(0);
v___x_1110_ = lean_apply_1(v_h__1_1106_, v___x_1109_);
return v___x_1110_;
}
else
{
lean_object* v_tail_1111_; 
lean_dec(v_h__1_1106_);
v_tail_1111_ = lean_ctor_get(v_x_1105_, 1);
if (lean_obj_tag(v_tail_1111_) == 0)
{
lean_object* v_head_1112_; lean_object* v___x_1113_; 
lean_dec(v_h__3_1108_);
v_head_1112_ = lean_ctor_get(v_x_1105_, 0);
lean_inc(v_head_1112_);
lean_dec_ref_known(v_x_1105_, 2);
v___x_1113_ = lean_apply_1(v_h__2_1107_, v_head_1112_);
return v___x_1113_;
}
else
{
lean_object* v_head_1114_; lean_object* v___x_1115_; 
lean_inc_ref(v_tail_1111_);
lean_dec(v_h__2_1107_);
v_head_1114_ = lean_ctor_get(v_x_1105_, 0);
lean_inc(v_head_1114_);
lean_dec_ref_known(v_x_1105_, 2);
v___x_1115_ = lean_apply_3(v_h__3_1108_, v_head_1114_, v_tail_1111_, lean_box(0));
return v___x_1115_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_instHasSubset___redArg(){
_start:
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_box(0);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_List_instHasSubset___redArg___boxed(lean_object* v___dummy_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_List_instHasSubset___redArg();
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_List_instHasSubset(lean_object* v_00_u03b1_1120_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_box(0);
return v___x_1121_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0(lean_object* v___f_1122_, lean_object* v_x_1123_, lean_object* v_a_1124_){
_start:
{
uint8_t v___x_1125_; 
v___x_1125_ = l_List_elem___redArg(v___f_1122_, v_a_1124_, v_x_1123_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0___boxed(lean_object* v___f_1126_, lean_object* v_x_1127_, lean_object* v_a_1128_){
_start:
{
uint8_t v_res_1129_; lean_object* v_r_1130_; 
v_res_1129_ = l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0(v___f_1126_, v_x_1127_, v_a_1128_);
v_r_1130_ = lean_box(v_res_1129_);
return v_r_1130_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq___redArg(lean_object* v_inst_1131_, lean_object* v_x_1132_, lean_object* v_x_1133_){
_start:
{
lean_object* v___f_1134_; lean_object* v___f_1135_; uint8_t v___x_1136_; 
v___f_1134_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1134_, 0, v_inst_1131_);
v___f_1135_ = lean_alloc_closure((void*)(l_List_instDecidableRelSubsetOfDecidableEq___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1135_, 0, v___f_1134_);
lean_closure_set(v___f_1135_, 1, v_x_1133_);
v___x_1136_ = l_List_decidableBAll___redArg(v___f_1135_, v_x_1132_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___redArg___boxed(lean_object* v_inst_1137_, lean_object* v_x_1138_, lean_object* v_x_1139_){
_start:
{
uint8_t v_res_1140_; lean_object* v_r_1141_; 
v_res_1140_ = l_List_instDecidableRelSubsetOfDecidableEq___redArg(v_inst_1137_, v_x_1138_, v_x_1139_);
v_r_1141_ = lean_box(v_res_1140_);
return v_r_1141_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidableRelSubsetOfDecidableEq(lean_object* v_00_u03b1_1142_, lean_object* v_inst_1143_, lean_object* v_x_1144_, lean_object* v_x_1145_){
_start:
{
uint8_t v___x_1146_; 
v___x_1146_ = l_List_instDecidableRelSubsetOfDecidableEq___redArg(v_inst_1143_, v_x_1144_, v_x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidableRelSubsetOfDecidableEq___boxed(lean_object* v_00_u03b1_1147_, lean_object* v_inst_1148_, lean_object* v_x_1149_, lean_object* v_x_1150_){
_start:
{
uint8_t v_res_1151_; lean_object* v_r_1152_; 
v_res_1151_ = l_List_instDecidableRelSubsetOfDecidableEq(v_00_u03b1_1147_, v_inst_1148_, v_x_1149_, v_x_1150_);
v_r_1152_ = lean_box(v_res_1151_);
return v_r_1152_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3(void){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__2));
v___x_1187_ = l_String_toRawSubstring_x27(v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1(lean_object* v_x_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_){
_start:
{
lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = ((lean_object*)(l_List_term___x3c_x2b___00__closed__2));
lean_inc(v_x_1207_);
v___x_1211_ = l_Lean_Syntax_isOfKind(v_x_1207_, v___x_1210_);
if (v___x_1211_ == 0)
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
lean_dec(v_x_1207_);
v___x_1212_ = lean_box(1);
v___x_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v_a_1209_);
return v___x_1213_;
}
else
{
lean_object* v_quotContext_1214_; lean_object* v_currMacroScope_1215_; lean_object* v_ref_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v_quotContext_1214_ = lean_ctor_get(v_a_1208_, 1);
v_currMacroScope_1215_ = lean_ctor_get(v_a_1208_, 2);
v_ref_1216_ = lean_ctor_get(v_a_1208_, 5);
v___x_1217_ = lean_unsigned_to_nat(0u);
v___x_1218_ = l_Lean_Syntax_getArg(v_x_1207_, v___x_1217_);
v___x_1219_ = lean_unsigned_to_nat(2u);
v___x_1220_ = l_Lean_Syntax_getArg(v_x_1207_, v___x_1219_);
lean_dec(v_x_1207_);
v___x_1221_ = 0;
v___x_1222_ = l_Lean_SourceInfo_fromRef(v_ref_1216_, v___x_1221_);
v___x_1223_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_1224_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__3);
v___x_1225_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__4));
lean_inc(v_currMacroScope_1215_);
lean_inc(v_quotContext_1214_);
v___x_1226_ = l_Lean_addMacroScope(v_quotContext_1214_, v___x_1225_, v_currMacroScope_1215_);
v___x_1227_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__10));
lean_inc_n(v___x_1222_, 2);
v___x_1228_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1222_);
lean_ctor_set(v___x_1228_, 1, v___x_1224_);
lean_ctor_set(v___x_1228_, 2, v___x_1226_);
lean_ctor_set(v___x_1228_, 3, v___x_1227_);
v___x_1229_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_1230_ = l_Lean_Syntax_node2(v___x_1222_, v___x_1229_, v___x_1218_, v___x_1220_);
v___x_1231_ = l_Lean_Syntax_node2(v___x_1222_, v___x_1223_, v___x_1228_, v___x_1230_);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
lean_ctor_set(v___x_1232_, 1, v_a_1209_);
return v___x_1232_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___boxed(lean_object* v_x_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1(v_x_1233_, v_a_1234_, v_a_1235_);
lean_dec_ref(v_a_1234_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1(lean_object* v_x_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_){
_start:
{
lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_1240_);
v___x_1244_ = l_Lean_Syntax_isOfKind(v_x_1240_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
lean_dec(v_x_1240_);
v___x_1245_ = lean_box(0);
v___x_1246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
lean_ctor_set(v___x_1246_, 1, v_a_1242_);
return v___x_1246_;
}
else
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1247_ = lean_unsigned_to_nat(0u);
v___x_1248_ = l_Lean_Syntax_getArg(v_x_1240_, v___x_1247_);
v___x_1249_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_1248_);
v___x_1250_ = l_Lean_Syntax_isOfKind(v___x_1248_, v___x_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
lean_dec(v___x_1248_);
lean_dec(v_x_1240_);
v___x_1251_ = lean_box(0);
v___x_1252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
lean_ctor_set(v___x_1252_, 1, v_a_1242_);
return v___x_1252_;
}
else
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v___x_1253_ = lean_unsigned_to_nat(1u);
v___x_1254_ = l_Lean_Syntax_getArg(v_x_1240_, v___x_1253_);
lean_dec(v_x_1240_);
v___x_1255_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1254_);
v___x_1256_ = l_Lean_Syntax_matchesNull(v___x_1254_, v___x_1255_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
lean_dec(v___x_1254_);
lean_dec(v___x_1248_);
v___x_1257_ = lean_box(0);
v___x_1258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v_a_1242_);
return v___x_1258_;
}
else
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v_ref_1261_; uint8_t v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1259_ = l_Lean_Syntax_getArg(v___x_1254_, v___x_1247_);
v___x_1260_ = l_Lean_Syntax_getArg(v___x_1254_, v___x_1253_);
lean_dec(v___x_1254_);
v_ref_1261_ = l_Lean_replaceRef(v___x_1248_, v_a_1241_);
lean_dec(v___x_1248_);
v___x_1262_ = 0;
v___x_1263_ = l_Lean_SourceInfo_fromRef(v_ref_1261_, v___x_1262_);
lean_dec(v_ref_1261_);
v___x_1264_ = ((lean_object*)(l_List_term___x3c_x2b___00__closed__2));
v___x_1265_ = ((lean_object*)(l_List_term___x3c_x2b___00__closed__5));
lean_inc(v___x_1263_);
v___x_1266_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1263_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
v___x_1267_ = l_Lean_Syntax_node3(v___x_1263_, v___x_1264_, v___x_1259_, v___x_1266_, v___x_1260_);
v___x_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
lean_ctor_set(v___x_1268_, 1, v_a_1242_);
return v___x_1268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___boxed(lean_object* v_x_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1(v_x_1269_, v_a_1270_, v_a_1271_);
lean_dec(v_a_1270_);
return v_res_1272_;
}
}
LEAN_EXPORT uint8_t l_List_isSublist___redArg(lean_object* v_inst_1273_, lean_object* v_x_1274_, lean_object* v_x_1275_){
_start:
{
if (lean_obj_tag(v_x_1274_) == 0)
{
uint8_t v___x_1276_; 
lean_dec(v_x_1275_);
lean_dec_ref(v_inst_1273_);
v___x_1276_ = 1;
return v___x_1276_;
}
else
{
if (lean_obj_tag(v_x_1275_) == 0)
{
uint8_t v___x_1277_; 
lean_dec_ref_known(v_x_1274_, 2);
lean_dec_ref(v_inst_1273_);
v___x_1277_ = 0;
return v___x_1277_;
}
else
{
lean_object* v_head_1278_; lean_object* v_tail_1279_; lean_object* v_head_1280_; lean_object* v_tail_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v_head_1278_ = lean_ctor_get(v_x_1274_, 0);
v_tail_1279_ = lean_ctor_get(v_x_1274_, 1);
v_head_1280_ = lean_ctor_get(v_x_1275_, 0);
lean_inc(v_head_1280_);
v_tail_1281_ = lean_ctor_get(v_x_1275_, 1);
lean_inc(v_tail_1281_);
lean_dec_ref_known(v_x_1275_, 2);
lean_inc_ref(v_inst_1273_);
lean_inc(v_head_1278_);
v___x_1282_ = lean_apply_2(v_inst_1273_, v_head_1278_, v_head_1280_);
v___x_1283_ = lean_unbox(v___x_1282_);
if (v___x_1283_ == 0)
{
v_x_1275_ = v_tail_1281_;
goto _start;
}
else
{
lean_inc(v_tail_1279_);
lean_dec_ref_known(v_x_1274_, 2);
v_x_1274_ = v_tail_1279_;
v_x_1275_ = v_tail_1281_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isSublist___redArg___boxed(lean_object* v_inst_1286_, lean_object* v_x_1287_, lean_object* v_x_1288_){
_start:
{
uint8_t v_res_1289_; lean_object* v_r_1290_; 
v_res_1289_ = l_List_isSublist___redArg(v_inst_1286_, v_x_1287_, v_x_1288_);
v_r_1290_ = lean_box(v_res_1289_);
return v_r_1290_;
}
}
LEAN_EXPORT uint8_t l_List_isSublist(lean_object* v_00_u03b1_1291_, lean_object* v_inst_1292_, lean_object* v_x_1293_, lean_object* v_x_1294_){
_start:
{
uint8_t v___x_1295_; 
v___x_1295_ = l_List_isSublist___redArg(v_inst_1292_, v_x_1293_, v_x_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_List_isSublist___boxed(lean_object* v_00_u03b1_1296_, lean_object* v_inst_1297_, lean_object* v_x_1298_, lean_object* v_x_1299_){
_start:
{
uint8_t v_res_1300_; lean_object* v_r_1301_; 
v_res_1300_ = l_List_isSublist(v_00_u03b1_1296_, v_inst_1297_, v_x_1298_, v_x_1299_);
v_r_1301_ = lean_box(v_res_1300_);
return v_r_1301_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__0));
v___x_1320_ = l_String_toRawSubstring_x27(v___x_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1(lean_object* v_x_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1335_ = ((lean_object*)(l_List_term___x3c_x2b_x3a___00__closed__1));
lean_inc(v_x_1332_);
v___x_1336_ = l_Lean_Syntax_isOfKind(v_x_1332_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; lean_object* v___x_1338_; 
lean_dec(v_x_1332_);
v___x_1337_ = lean_box(1);
v___x_1338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
lean_ctor_set(v___x_1338_, 1, v_a_1334_);
return v___x_1338_;
}
else
{
lean_object* v_quotContext_1339_; lean_object* v_currMacroScope_1340_; lean_object* v_ref_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v_quotContext_1339_ = lean_ctor_get(v_a_1333_, 1);
v_currMacroScope_1340_ = lean_ctor_get(v_a_1333_, 2);
v_ref_1341_ = lean_ctor_get(v_a_1333_, 5);
v___x_1342_ = lean_unsigned_to_nat(0u);
v___x_1343_ = l_Lean_Syntax_getArg(v_x_1332_, v___x_1342_);
v___x_1344_ = lean_unsigned_to_nat(2u);
v___x_1345_ = l_Lean_Syntax_getArg(v_x_1332_, v___x_1344_);
lean_dec(v_x_1332_);
v___x_1346_ = 0;
v___x_1347_ = l_Lean_SourceInfo_fromRef(v_ref_1341_, v___x_1346_);
v___x_1348_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_1349_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__1);
v___x_1350_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__2));
lean_inc(v_currMacroScope_1340_);
lean_inc(v_quotContext_1339_);
v___x_1351_ = l_Lean_addMacroScope(v_quotContext_1339_, v___x_1350_, v_currMacroScope_1340_);
v___x_1352_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___closed__5));
lean_inc_n(v___x_1347_, 2);
v___x_1353_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1347_);
lean_ctor_set(v___x_1353_, 1, v___x_1349_);
lean_ctor_set(v___x_1353_, 2, v___x_1351_);
lean_ctor_set(v___x_1353_, 3, v___x_1352_);
v___x_1354_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_1355_ = l_Lean_Syntax_node2(v___x_1347_, v___x_1354_, v___x_1343_, v___x_1345_);
v___x_1356_ = l_Lean_Syntax_node2(v___x_1347_, v___x_1348_, v___x_1353_, v___x_1355_);
v___x_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
lean_ctor_set(v___x_1357_, 1, v_a_1334_);
return v___x_1357_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1___boxed(lean_object* v_x_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b_x3a____1(v_x_1358_, v_a_1359_, v_a_1360_);
lean_dec_ref(v_a_1359_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1(lean_object* v_x_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_){
_start:
{
lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_1362_);
v___x_1366_ = l_Lean_Syntax_isOfKind(v_x_1362_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
lean_dec(v_x_1362_);
v___x_1367_ = lean_box(0);
v___x_1368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
lean_ctor_set(v___x_1368_, 1, v_a_1364_);
return v___x_1368_;
}
else
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; 
v___x_1369_ = lean_unsigned_to_nat(0u);
v___x_1370_ = l_Lean_Syntax_getArg(v_x_1362_, v___x_1369_);
v___x_1371_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_1370_);
v___x_1372_ = l_Lean_Syntax_isOfKind(v___x_1370_, v___x_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
lean_dec(v___x_1370_);
lean_dec(v_x_1362_);
v___x_1373_ = lean_box(0);
v___x_1374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v_a_1364_);
return v___x_1374_;
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1375_ = lean_unsigned_to_nat(1u);
v___x_1376_ = l_Lean_Syntax_getArg(v_x_1362_, v___x_1375_);
lean_dec(v_x_1362_);
v___x_1377_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1376_);
v___x_1378_ = l_Lean_Syntax_matchesNull(v___x_1376_, v___x_1377_);
if (v___x_1378_ == 0)
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_dec(v___x_1376_);
lean_dec(v___x_1370_);
v___x_1379_ = lean_box(0);
v___x_1380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set(v___x_1380_, 1, v_a_1364_);
return v___x_1380_;
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v_ref_1383_; uint8_t v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1381_ = l_Lean_Syntax_getArg(v___x_1376_, v___x_1369_);
v___x_1382_ = l_Lean_Syntax_getArg(v___x_1376_, v___x_1375_);
lean_dec(v___x_1376_);
v_ref_1383_ = l_Lean_replaceRef(v___x_1370_, v_a_1363_);
lean_dec(v___x_1370_);
v___x_1384_ = 0;
v___x_1385_ = l_Lean_SourceInfo_fromRef(v_ref_1383_, v___x_1384_);
lean_dec(v_ref_1383_);
v___x_1386_ = ((lean_object*)(l_List_term___x3c_x2b_x3a___00__closed__1));
v___x_1387_ = ((lean_object*)(l_List_term___x3c_x2b_x3a___00__closed__2));
lean_inc(v___x_1385_);
v___x_1388_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1385_);
lean_ctor_set(v___x_1388_, 1, v___x_1387_);
v___x_1389_ = l_Lean_Syntax_node3(v___x_1385_, v___x_1386_, v___x_1381_, v___x_1388_, v___x_1382_);
v___x_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
lean_ctor_set(v___x_1390_, 1, v_a_1364_);
return v___x_1390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1___boxed(lean_object* v_x_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_List___aux__Init__Data__List__Basic______unexpand__List__IsPrefix__1(v_x_1391_, v_a_1392_, v_a_1393_);
lean_dec(v_a_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT uint8_t l_List_isPrefixOf___redArg(lean_object* v_inst_1395_, lean_object* v_x_1396_, lean_object* v_x_1397_){
_start:
{
if (lean_obj_tag(v_x_1396_) == 0)
{
uint8_t v___x_1398_; 
lean_dec(v_x_1397_);
lean_dec_ref(v_inst_1395_);
v___x_1398_ = 1;
return v___x_1398_;
}
else
{
if (lean_obj_tag(v_x_1397_) == 0)
{
uint8_t v___x_1399_; 
lean_dec_ref_known(v_x_1396_, 2);
lean_dec_ref(v_inst_1395_);
v___x_1399_ = 0;
return v___x_1399_;
}
else
{
lean_object* v_head_1400_; lean_object* v_tail_1401_; lean_object* v_head_1402_; lean_object* v_tail_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; 
v_head_1400_ = lean_ctor_get(v_x_1396_, 0);
lean_inc(v_head_1400_);
v_tail_1401_ = lean_ctor_get(v_x_1396_, 1);
lean_inc(v_tail_1401_);
lean_dec_ref_known(v_x_1396_, 2);
v_head_1402_ = lean_ctor_get(v_x_1397_, 0);
lean_inc(v_head_1402_);
v_tail_1403_ = lean_ctor_get(v_x_1397_, 1);
lean_inc(v_tail_1403_);
lean_dec_ref_known(v_x_1397_, 2);
lean_inc_ref(v_inst_1395_);
v___x_1404_ = lean_apply_2(v_inst_1395_, v_head_1400_, v_head_1402_);
v___x_1405_ = lean_unbox(v___x_1404_);
if (v___x_1405_ == 0)
{
uint8_t v___x_1406_; 
lean_dec(v_tail_1403_);
lean_dec(v_tail_1401_);
lean_dec_ref(v_inst_1395_);
v___x_1406_ = lean_unbox(v___x_1404_);
return v___x_1406_;
}
else
{
v_x_1396_ = v_tail_1401_;
v_x_1397_ = v_tail_1403_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf___redArg___boxed(lean_object* v_inst_1408_, lean_object* v_x_1409_, lean_object* v_x_1410_){
_start:
{
uint8_t v_res_1411_; lean_object* v_r_1412_; 
v_res_1411_ = l_List_isPrefixOf___redArg(v_inst_1408_, v_x_1409_, v_x_1410_);
v_r_1412_ = lean_box(v_res_1411_);
return v_r_1412_;
}
}
LEAN_EXPORT uint8_t l_List_isPrefixOf(lean_object* v_00_u03b1_1413_, lean_object* v_inst_1414_, lean_object* v_x_1415_, lean_object* v_x_1416_){
_start:
{
uint8_t v___x_1417_; 
v___x_1417_ = l_List_isPrefixOf___redArg(v_inst_1414_, v_x_1415_, v_x_1416_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf___boxed(lean_object* v_00_u03b1_1418_, lean_object* v_inst_1419_, lean_object* v_x_1420_, lean_object* v_x_1421_){
_start:
{
uint8_t v_res_1422_; lean_object* v_r_1423_; 
v_res_1422_ = l_List_isPrefixOf(v_00_u03b1_1418_, v_inst_1419_, v_x_1420_, v_x_1421_);
v_r_1423_ = lean_box(v_res_1422_);
return v_r_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_isPrefixOf_match__1_splitter___redArg(lean_object* v_x_1424_, lean_object* v_x_1425_, lean_object* v_h__1_1426_, lean_object* v_h__2_1427_, lean_object* v_h__3_1428_){
_start:
{
if (lean_obj_tag(v_x_1424_) == 0)
{
lean_object* v___x_1429_; 
lean_dec(v_h__3_1428_);
lean_dec(v_h__2_1427_);
v___x_1429_ = lean_apply_1(v_h__1_1426_, v_x_1425_);
return v___x_1429_;
}
else
{
lean_dec(v_h__1_1426_);
if (lean_obj_tag(v_x_1425_) == 0)
{
lean_object* v___x_1430_; 
lean_dec(v_h__3_1428_);
v___x_1430_ = lean_apply_2(v_h__2_1427_, v_x_1424_, lean_box(0));
return v___x_1430_;
}
else
{
lean_object* v_head_1431_; lean_object* v_tail_1432_; lean_object* v_head_1433_; lean_object* v_tail_1434_; lean_object* v___x_1435_; 
lean_dec(v_h__2_1427_);
v_head_1431_ = lean_ctor_get(v_x_1424_, 0);
lean_inc(v_head_1431_);
v_tail_1432_ = lean_ctor_get(v_x_1424_, 1);
lean_inc(v_tail_1432_);
lean_dec_ref_known(v_x_1424_, 2);
v_head_1433_ = lean_ctor_get(v_x_1425_, 0);
lean_inc(v_head_1433_);
v_tail_1434_ = lean_ctor_get(v_x_1425_, 1);
lean_inc(v_tail_1434_);
lean_dec_ref_known(v_x_1425_, 2);
v___x_1435_ = lean_apply_4(v_h__3_1428_, v_head_1431_, v_tail_1432_, v_head_1433_, v_tail_1434_);
return v___x_1435_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_isPrefixOf_match__1_splitter(lean_object* v_00_u03b1_1436_, lean_object* v_motive_1437_, lean_object* v_x_1438_, lean_object* v_x_1439_, lean_object* v_h__1_1440_, lean_object* v_h__2_1441_, lean_object* v_h__3_1442_){
_start:
{
if (lean_obj_tag(v_x_1438_) == 0)
{
lean_object* v___x_1443_; 
lean_dec(v_h__3_1442_);
lean_dec(v_h__2_1441_);
v___x_1443_ = lean_apply_1(v_h__1_1440_, v_x_1439_);
return v___x_1443_;
}
else
{
lean_dec(v_h__1_1440_);
if (lean_obj_tag(v_x_1439_) == 0)
{
lean_object* v___x_1444_; 
lean_dec(v_h__3_1442_);
v___x_1444_ = lean_apply_2(v_h__2_1441_, v_x_1438_, lean_box(0));
return v___x_1444_;
}
else
{
lean_object* v_head_1445_; lean_object* v_tail_1446_; lean_object* v_head_1447_; lean_object* v_tail_1448_; lean_object* v___x_1449_; 
lean_dec(v_h__2_1441_);
v_head_1445_ = lean_ctor_get(v_x_1438_, 0);
lean_inc(v_head_1445_);
v_tail_1446_ = lean_ctor_get(v_x_1438_, 1);
lean_inc(v_tail_1446_);
lean_dec_ref_known(v_x_1438_, 2);
v_head_1447_ = lean_ctor_get(v_x_1439_, 0);
lean_inc(v_head_1447_);
v_tail_1448_ = lean_ctor_get(v_x_1439_, 1);
lean_inc(v_tail_1448_);
lean_dec_ref_known(v_x_1439_, 2);
v___x_1449_ = lean_apply_4(v_h__3_1442_, v_head_1445_, v_tail_1446_, v_head_1447_, v_tail_1448_);
return v___x_1449_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___redArg(lean_object* v_inst_1450_, lean_object* v_x_1451_, lean_object* v_x_1452_){
_start:
{
if (lean_obj_tag(v_x_1451_) == 0)
{
lean_object* v___x_1453_; 
lean_dec_ref(v_inst_1450_);
v___x_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1453_, 0, v_x_1452_);
return v___x_1453_;
}
else
{
if (lean_obj_tag(v_x_1452_) == 0)
{
lean_object* v___x_1454_; 
lean_dec_ref_known(v_x_1451_, 2);
lean_dec_ref(v_inst_1450_);
v___x_1454_ = lean_box(0);
return v___x_1454_;
}
else
{
lean_object* v_head_1455_; lean_object* v_tail_1456_; lean_object* v_head_1457_; lean_object* v_tail_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; 
v_head_1455_ = lean_ctor_get(v_x_1451_, 0);
lean_inc(v_head_1455_);
v_tail_1456_ = lean_ctor_get(v_x_1451_, 1);
lean_inc(v_tail_1456_);
lean_dec_ref_known(v_x_1451_, 2);
v_head_1457_ = lean_ctor_get(v_x_1452_, 0);
lean_inc(v_head_1457_);
v_tail_1458_ = lean_ctor_get(v_x_1452_, 1);
lean_inc(v_tail_1458_);
lean_dec_ref_known(v_x_1452_, 2);
lean_inc_ref(v_inst_1450_);
v___x_1459_ = lean_apply_2(v_inst_1450_, v_head_1455_, v_head_1457_);
v___x_1460_ = lean_unbox(v___x_1459_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1461_; 
lean_dec(v_tail_1458_);
lean_dec(v_tail_1456_);
lean_dec_ref(v_inst_1450_);
v___x_1461_ = lean_box(0);
return v___x_1461_;
}
else
{
v_x_1451_ = v_tail_1456_;
v_x_1452_ = v_tail_1458_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f(lean_object* v_00_u03b1_1463_, lean_object* v_inst_1464_, lean_object* v_x_1465_, lean_object* v_x_1466_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l_List_isPrefixOf_x3f___redArg(v_inst_1464_, v_x_1465_, v_x_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT uint8_t l_List_isSuffixOf___redArg(lean_object* v_inst_1468_, lean_object* v_l_u2081_1469_, lean_object* v_l_u2082_1470_){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; uint8_t v___x_1473_; 
v___x_1471_ = l_List_reverse___redArg(v_l_u2081_1469_);
v___x_1472_ = l_List_reverse___redArg(v_l_u2082_1470_);
v___x_1473_ = l_List_isPrefixOf___redArg(v_inst_1468_, v___x_1471_, v___x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf___redArg___boxed(lean_object* v_inst_1474_, lean_object* v_l_u2081_1475_, lean_object* v_l_u2082_1476_){
_start:
{
uint8_t v_res_1477_; lean_object* v_r_1478_; 
v_res_1477_ = l_List_isSuffixOf___redArg(v_inst_1474_, v_l_u2081_1475_, v_l_u2082_1476_);
v_r_1478_ = lean_box(v_res_1477_);
return v_r_1478_;
}
}
LEAN_EXPORT uint8_t l_List_isSuffixOf(lean_object* v_00_u03b1_1479_, lean_object* v_inst_1480_, lean_object* v_l_u2081_1481_, lean_object* v_l_u2082_1482_){
_start:
{
uint8_t v___x_1483_; 
v___x_1483_ = l_List_isSuffixOf___redArg(v_inst_1480_, v_l_u2081_1481_, v_l_u2082_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf___boxed(lean_object* v_00_u03b1_1484_, lean_object* v_inst_1485_, lean_object* v_l_u2081_1486_, lean_object* v_l_u2082_1487_){
_start:
{
uint8_t v_res_1488_; lean_object* v_r_1489_; 
v_res_1488_ = l_List_isSuffixOf(v_00_u03b1_1484_, v_inst_1485_, v_l_u2081_1486_, v_l_u2082_1487_);
v_r_1489_ = lean_box(v_res_1488_);
return v_r_1489_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___redArg(lean_object* v_inst_1490_, lean_object* v_l_u2081_1491_, lean_object* v_l_u2082_1492_){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1493_ = l_List_reverse___redArg(v_l_u2081_1491_);
v___x_1494_ = l_List_reverse___redArg(v_l_u2082_1492_);
v___x_1495_ = l_List_isPrefixOf_x3f___redArg(v_inst_1490_, v___x_1493_, v___x_1494_);
if (lean_obj_tag(v___x_1495_) == 0)
{
return v___x_1495_;
}
else
{
lean_object* v_val_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1504_; 
v_val_1496_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1498_ = v___x_1495_;
v_isShared_1499_ = v_isSharedCheck_1504_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_val_1496_);
lean_dec(v___x_1495_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1504_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___x_1500_ = l_List_reverse___redArg(v_val_1496_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v___x_1500_);
v___x_1502_ = v___x_1498_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f(lean_object* v_00_u03b1_1505_, lean_object* v_inst_1506_, lean_object* v_l_u2081_1507_, lean_object* v_l_u2082_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_List_isSuffixOf_x3f___redArg(v_inst_1506_, v_l_u2081_1507_, v_l_u2082_1508_);
return v___x_1509_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1(void){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__0));
v___x_1528_ = l_String_toRawSubstring_x27(v___x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1(lean_object* v_x_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_){
_start:
{
lean_object* v___x_1543_; uint8_t v___x_1544_; 
v___x_1543_ = ((lean_object*)(l_List_term___x3c_x3a_x2b___00__closed__1));
lean_inc(v_x_1540_);
v___x_1544_ = l_Lean_Syntax_isOfKind(v_x_1540_, v___x_1543_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1545_; lean_object* v___x_1546_; 
lean_dec(v_x_1540_);
v___x_1545_ = lean_box(1);
v___x_1546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1545_);
lean_ctor_set(v___x_1546_, 1, v_a_1542_);
return v___x_1546_;
}
else
{
lean_object* v_quotContext_1547_; lean_object* v_currMacroScope_1548_; lean_object* v_ref_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v_quotContext_1547_ = lean_ctor_get(v_a_1541_, 1);
v_currMacroScope_1548_ = lean_ctor_get(v_a_1541_, 2);
v_ref_1549_ = lean_ctor_get(v_a_1541_, 5);
v___x_1550_ = lean_unsigned_to_nat(0u);
v___x_1551_ = l_Lean_Syntax_getArg(v_x_1540_, v___x_1550_);
v___x_1552_ = lean_unsigned_to_nat(2u);
v___x_1553_ = l_Lean_Syntax_getArg(v_x_1540_, v___x_1552_);
lean_dec(v_x_1540_);
v___x_1554_ = 0;
v___x_1555_ = l_Lean_SourceInfo_fromRef(v_ref_1549_, v___x_1554_);
v___x_1556_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_1557_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__1);
v___x_1558_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__2));
lean_inc(v_currMacroScope_1548_);
lean_inc(v_quotContext_1547_);
v___x_1559_ = l_Lean_addMacroScope(v_quotContext_1547_, v___x_1558_, v_currMacroScope_1548_);
v___x_1560_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___closed__5));
lean_inc_n(v___x_1555_, 2);
v___x_1561_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1555_);
lean_ctor_set(v___x_1561_, 1, v___x_1557_);
lean_ctor_set(v___x_1561_, 2, v___x_1559_);
lean_ctor_set(v___x_1561_, 3, v___x_1560_);
v___x_1562_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_1563_ = l_Lean_Syntax_node2(v___x_1555_, v___x_1562_, v___x_1551_, v___x_1553_);
v___x_1564_ = l_Lean_Syntax_node2(v___x_1555_, v___x_1556_, v___x_1561_, v___x_1563_);
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1564_);
lean_ctor_set(v___x_1565_, 1, v_a_1542_);
return v___x_1565_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1___boxed(lean_object* v_x_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b____1(v_x_1566_, v_a_1567_, v_a_1568_);
lean_dec_ref(v_a_1567_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1(lean_object* v_x_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
lean_object* v___x_1573_; uint8_t v___x_1574_; 
v___x_1573_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_1570_);
v___x_1574_ = l_Lean_Syntax_isOfKind(v_x_1570_, v___x_1573_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
lean_dec(v_x_1570_);
v___x_1575_ = lean_box(0);
v___x_1576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
lean_ctor_set(v___x_1576_, 1, v_a_1572_);
return v___x_1576_;
}
else
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; uint8_t v___x_1580_; 
v___x_1577_ = lean_unsigned_to_nat(0u);
v___x_1578_ = l_Lean_Syntax_getArg(v_x_1570_, v___x_1577_);
v___x_1579_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_1578_);
v___x_1580_ = l_Lean_Syntax_isOfKind(v___x_1578_, v___x_1579_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; lean_object* v___x_1582_; 
lean_dec(v___x_1578_);
lean_dec(v_x_1570_);
v___x_1581_ = lean_box(0);
v___x_1582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
lean_ctor_set(v___x_1582_, 1, v_a_1572_);
return v___x_1582_;
}
else
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1583_ = lean_unsigned_to_nat(1u);
v___x_1584_ = l_Lean_Syntax_getArg(v_x_1570_, v___x_1583_);
lean_dec(v_x_1570_);
v___x_1585_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1584_);
v___x_1586_ = l_Lean_Syntax_matchesNull(v___x_1584_, v___x_1585_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
lean_dec(v___x_1584_);
lean_dec(v___x_1578_);
v___x_1587_ = lean_box(0);
v___x_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
lean_ctor_set(v___x_1588_, 1, v_a_1572_);
return v___x_1588_;
}
else
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v_ref_1591_; uint8_t v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1589_ = l_Lean_Syntax_getArg(v___x_1584_, v___x_1577_);
v___x_1590_ = l_Lean_Syntax_getArg(v___x_1584_, v___x_1583_);
lean_dec(v___x_1584_);
v_ref_1591_ = l_Lean_replaceRef(v___x_1578_, v_a_1571_);
lean_dec(v___x_1578_);
v___x_1592_ = 0;
v___x_1593_ = l_Lean_SourceInfo_fromRef(v_ref_1591_, v___x_1592_);
lean_dec(v_ref_1591_);
v___x_1594_ = ((lean_object*)(l_List_term___x3c_x3a_x2b___00__closed__1));
v___x_1595_ = ((lean_object*)(l_List_term___x3c_x3a_x2b___00__closed__2));
lean_inc(v___x_1593_);
v___x_1596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1593_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = l_Lean_Syntax_node3(v___x_1593_, v___x_1594_, v___x_1589_, v___x_1596_, v___x_1590_);
v___x_1598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
lean_ctor_set(v___x_1598_, 1, v_a_1572_);
return v___x_1598_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1___boxed(lean_object* v_x_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l_List___aux__Init__Data__List__Basic______unexpand__List__IsSuffix__1(v_x_1599_, v_a_1600_, v_a_1601_);
lean_dec(v_a_1600_);
return v_res_1602_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1(void){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__0));
v___x_1621_ = l_String_toRawSubstring_x27(v___x_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1(lean_object* v_x_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_){
_start:
{
lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1636_ = ((lean_object*)(l_List_term___x3c_x3a_x2b_x3a___00__closed__1));
lean_inc(v_x_1633_);
v___x_1637_ = l_Lean_Syntax_isOfKind(v_x_1633_, v___x_1636_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec(v_x_1633_);
v___x_1638_ = lean_box(1);
v___x_1639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1638_);
lean_ctor_set(v___x_1639_, 1, v_a_1635_);
return v___x_1639_;
}
else
{
lean_object* v_quotContext_1640_; lean_object* v_currMacroScope_1641_; lean_object* v_ref_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; uint8_t v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_quotContext_1640_ = lean_ctor_get(v_a_1634_, 1);
v_currMacroScope_1641_ = lean_ctor_get(v_a_1634_, 2);
v_ref_1642_ = lean_ctor_get(v_a_1634_, 5);
v___x_1643_ = lean_unsigned_to_nat(0u);
v___x_1644_ = l_Lean_Syntax_getArg(v_x_1633_, v___x_1643_);
v___x_1645_ = lean_unsigned_to_nat(2u);
v___x_1646_ = l_Lean_Syntax_getArg(v_x_1633_, v___x_1645_);
lean_dec(v_x_1633_);
v___x_1647_ = 0;
v___x_1648_ = l_Lean_SourceInfo_fromRef(v_ref_1642_, v___x_1647_);
v___x_1649_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_1650_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__1);
v___x_1651_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__2));
lean_inc(v_currMacroScope_1641_);
lean_inc(v_quotContext_1640_);
v___x_1652_ = l_Lean_addMacroScope(v_quotContext_1640_, v___x_1651_, v_currMacroScope_1641_);
v___x_1653_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___closed__5));
lean_inc_n(v___x_1648_, 2);
v___x_1654_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1648_);
lean_ctor_set(v___x_1654_, 1, v___x_1650_);
lean_ctor_set(v___x_1654_, 2, v___x_1652_);
lean_ctor_set(v___x_1654_, 3, v___x_1653_);
v___x_1655_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_1656_ = l_Lean_Syntax_node2(v___x_1648_, v___x_1655_, v___x_1644_, v___x_1646_);
v___x_1657_ = l_Lean_Syntax_node2(v___x_1648_, v___x_1649_, v___x_1654_, v___x_1656_);
v___x_1658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
lean_ctor_set(v___x_1658_, 1, v_a_1635_);
return v___x_1658_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1___boxed(lean_object* v_x_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x3a_x2b_x3a____1(v_x_1659_, v_a_1660_, v_a_1661_);
lean_dec_ref(v_a_1660_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1(lean_object* v_x_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_){
_start:
{
lean_object* v___x_1666_; uint8_t v___x_1667_; 
v___x_1666_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_1663_);
v___x_1667_ = l_Lean_Syntax_isOfKind(v_x_1663_, v___x_1666_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
lean_dec(v_x_1663_);
v___x_1668_ = lean_box(0);
v___x_1669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1668_);
lean_ctor_set(v___x_1669_, 1, v_a_1665_);
return v___x_1669_;
}
else
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v___x_1670_ = lean_unsigned_to_nat(0u);
v___x_1671_ = l_Lean_Syntax_getArg(v_x_1663_, v___x_1670_);
v___x_1672_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_1671_);
v___x_1673_ = l_Lean_Syntax_isOfKind(v___x_1671_, v___x_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
lean_dec(v___x_1671_);
lean_dec(v_x_1663_);
v___x_1674_ = lean_box(0);
v___x_1675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
lean_ctor_set(v___x_1675_, 1, v_a_1665_);
return v___x_1675_;
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; uint8_t v___x_1679_; 
v___x_1676_ = lean_unsigned_to_nat(1u);
v___x_1677_ = l_Lean_Syntax_getArg(v_x_1663_, v___x_1676_);
lean_dec(v_x_1663_);
v___x_1678_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1677_);
v___x_1679_ = l_Lean_Syntax_matchesNull(v___x_1677_, v___x_1678_);
if (v___x_1679_ == 0)
{
lean_object* v___x_1680_; lean_object* v___x_1681_; 
lean_dec(v___x_1677_);
lean_dec(v___x_1671_);
v___x_1680_ = lean_box(0);
v___x_1681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
lean_ctor_set(v___x_1681_, 1, v_a_1665_);
return v___x_1681_;
}
else
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v_ref_1684_; uint8_t v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1682_ = l_Lean_Syntax_getArg(v___x_1677_, v___x_1670_);
v___x_1683_ = l_Lean_Syntax_getArg(v___x_1677_, v___x_1676_);
lean_dec(v___x_1677_);
v_ref_1684_ = l_Lean_replaceRef(v___x_1671_, v_a_1664_);
lean_dec(v___x_1671_);
v___x_1685_ = 0;
v___x_1686_ = l_Lean_SourceInfo_fromRef(v_ref_1684_, v___x_1685_);
lean_dec(v_ref_1684_);
v___x_1687_ = ((lean_object*)(l_List_term___x3c_x3a_x2b_x3a___00__closed__1));
v___x_1688_ = ((lean_object*)(l_List_term___x3c_x3a_x2b_x3a___00__closed__2));
lean_inc(v___x_1686_);
v___x_1689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1686_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = l_Lean_Syntax_node3(v___x_1686_, v___x_1687_, v___x_1682_, v___x_1689_, v___x_1683_);
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
lean_ctor_set(v___x_1691_, 1, v_a_1665_);
return v___x_1691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1___boxed(lean_object* v_x_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_List___aux__Init__Data__List__Basic______unexpand__List__IsInfix__1(v_x_1692_, v_a_1693_, v_a_1694_);
lean_dec(v_a_1693_);
return v_res_1695_;
}
}
LEAN_EXPORT uint8_t l_List_isInfixOf__internal___redArg(lean_object* v_inst_1696_, lean_object* v_l_u2081_1697_, lean_object* v_l_u2082_1698_){
_start:
{
uint8_t v___x_1699_; 
lean_inc(v_l_u2082_1698_);
lean_inc(v_l_u2081_1697_);
lean_inc_ref(v_inst_1696_);
v___x_1699_ = l_List_isPrefixOf___redArg(v_inst_1696_, v_l_u2081_1697_, v_l_u2082_1698_);
if (v___x_1699_ == 0)
{
if (lean_obj_tag(v_l_u2082_1698_) == 0)
{
lean_dec(v_l_u2081_1697_);
lean_dec_ref(v_inst_1696_);
return v___x_1699_;
}
else
{
lean_object* v_tail_1700_; 
v_tail_1700_ = lean_ctor_get(v_l_u2082_1698_, 1);
lean_inc(v_tail_1700_);
lean_dec_ref_known(v_l_u2082_1698_, 2);
v_l_u2082_1698_ = v_tail_1700_;
goto _start;
}
}
else
{
lean_dec(v_l_u2082_1698_);
lean_dec(v_l_u2081_1697_);
lean_dec_ref(v_inst_1696_);
return v___x_1699_;
}
}
}
LEAN_EXPORT lean_object* l_List_isInfixOf__internal___redArg___boxed(lean_object* v_inst_1702_, lean_object* v_l_u2081_1703_, lean_object* v_l_u2082_1704_){
_start:
{
uint8_t v_res_1705_; lean_object* v_r_1706_; 
v_res_1705_ = l_List_isInfixOf__internal___redArg(v_inst_1702_, v_l_u2081_1703_, v_l_u2082_1704_);
v_r_1706_ = lean_box(v_res_1705_);
return v_r_1706_;
}
}
LEAN_EXPORT uint8_t l_List_isInfixOf__internal(lean_object* v_00_u03b1_1707_, lean_object* v_inst_1708_, lean_object* v_l_u2081_1709_, lean_object* v_l_u2082_1710_){
_start:
{
uint8_t v___x_1711_; 
v___x_1711_ = l_List_isInfixOf__internal___redArg(v_inst_1708_, v_l_u2081_1709_, v_l_u2082_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_List_isInfixOf__internal___boxed(lean_object* v_00_u03b1_1712_, lean_object* v_inst_1713_, lean_object* v_l_u2081_1714_, lean_object* v_l_u2082_1715_){
_start:
{
uint8_t v_res_1716_; lean_object* v_r_1717_; 
v_res_1716_ = l_List_isInfixOf__internal(v_00_u03b1_1712_, v_inst_1713_, v_l_u2081_1714_, v_l_u2082_1715_);
v_r_1717_ = lean_box(v_res_1716_);
return v_r_1717_;
}
}
LEAN_EXPORT lean_object* l_List_splitAt_go___redArg(lean_object* v_l_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_){
_start:
{
if (lean_obj_tag(v_a_1719_) == 0)
{
lean_object* v___x_1722_; 
lean_dec(v_a_1721_);
lean_dec(v_a_1720_);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_l_1718_);
lean_ctor_set(v___x_1722_, 1, v_a_1719_);
return v___x_1722_;
}
else
{
lean_object* v_head_1723_; lean_object* v_tail_1724_; lean_object* v_zero_1725_; uint8_t v_isZero_1726_; 
v_head_1723_ = lean_ctor_get(v_a_1719_, 0);
v_tail_1724_ = lean_ctor_get(v_a_1719_, 1);
v_zero_1725_ = lean_unsigned_to_nat(0u);
v_isZero_1726_ = lean_nat_dec_eq(v_a_1720_, v_zero_1725_);
if (v_isZero_1726_ == 1)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
lean_dec(v_a_1720_);
lean_dec(v_l_1718_);
v___x_1727_ = l_List_reverse___redArg(v_a_1721_);
v___x_1728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1727_);
lean_ctor_set(v___x_1728_, 1, v_a_1719_);
return v___x_1728_;
}
else
{
lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1738_; 
lean_inc(v_tail_1724_);
lean_inc(v_head_1723_);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_a_1719_);
if (v_isSharedCheck_1738_ == 0)
{
lean_object* v_unused_1739_; lean_object* v_unused_1740_; 
v_unused_1739_ = lean_ctor_get(v_a_1719_, 1);
lean_dec(v_unused_1739_);
v_unused_1740_ = lean_ctor_get(v_a_1719_, 0);
lean_dec(v_unused_1740_);
v___x_1730_ = v_a_1719_;
v_isShared_1731_ = v_isSharedCheck_1738_;
goto v_resetjp_1729_;
}
else
{
lean_dec(v_a_1719_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1738_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v_one_1732_; lean_object* v_n_1733_; lean_object* v___x_1735_; 
v_one_1732_ = lean_unsigned_to_nat(1u);
v_n_1733_ = lean_nat_sub(v_a_1720_, v_one_1732_);
lean_dec(v_a_1720_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 1, v_a_1721_);
v___x_1735_ = v___x_1730_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_head_1723_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v_a_1721_);
v___x_1735_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
v_a_1719_ = v_tail_1724_;
v_a_1720_ = v_n_1733_;
v_a_1721_ = v___x_1735_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_splitAt_go(lean_object* v_00_u03b1_1741_, lean_object* v_l_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = l_List_splitAt_go___redArg(v_l_1742_, v_a_1743_, v_a_1744_, v_a_1745_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_List_splitAt___redArg(lean_object* v_n_1747_, lean_object* v_l_1748_){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1749_ = lean_box(0);
lean_inc(v_l_1748_);
v___x_1750_ = l_List_splitAt_go___redArg(v_l_1748_, v_l_1748_, v_n_1747_, v___x_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_List_splitAt(lean_object* v_00_u03b1_1751_, lean_object* v_n_1752_, lean_object* v_l_1753_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_List_splitAt___redArg(v_n_1752_, v_l_1753_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_List_rotateLeft___redArg(lean_object* v_xs_1755_, lean_object* v_i_1756_){
_start:
{
lean_object* v_len_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v_len_1757_ = l_List_length___redArg(v_xs_1755_);
v___x_1758_ = lean_unsigned_to_nat(1u);
v___x_1759_ = lean_nat_dec_le(v_len_1757_, v___x_1758_);
if (v___x_1759_ == 0)
{
lean_object* v_i_1760_; lean_object* v_ys_1761_; lean_object* v_zs_1762_; lean_object* v___x_1763_; 
v_i_1760_ = lean_nat_mod(v_i_1756_, v_len_1757_);
lean_dec(v_len_1757_);
lean_inc(v_xs_1755_);
v_ys_1761_ = l_List_take___redArg(v_i_1760_, v_xs_1755_);
v_zs_1762_ = l_List_drop___redArg(v_i_1760_, v_xs_1755_);
lean_dec(v_xs_1755_);
v___x_1763_ = l_List_appendTR___redArg(v_zs_1762_, v_ys_1761_);
return v___x_1763_;
}
else
{
lean_dec(v_len_1757_);
return v_xs_1755_;
}
}
}
LEAN_EXPORT lean_object* l_List_rotateLeft___redArg___boxed(lean_object* v_xs_1764_, lean_object* v_i_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_List_rotateLeft___redArg(v_xs_1764_, v_i_1765_);
lean_dec(v_i_1765_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_List_rotateLeft(lean_object* v_00_u03b1_1767_, lean_object* v_xs_1768_, lean_object* v_i_1769_){
_start:
{
lean_object* v___x_1770_; 
v___x_1770_ = l_List_rotateLeft___redArg(v_xs_1768_, v_i_1769_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_List_rotateLeft___boxed(lean_object* v_00_u03b1_1771_, lean_object* v_xs_1772_, lean_object* v_i_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l_List_rotateLeft(v_00_u03b1_1771_, v_xs_1772_, v_i_1773_);
lean_dec(v_i_1773_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_List_rotateRight___redArg(lean_object* v_xs_1775_, lean_object* v_i_1776_){
_start:
{
lean_object* v_len_1777_; lean_object* v___x_1778_; uint8_t v___x_1779_; 
v_len_1777_ = l_List_length___redArg(v_xs_1775_);
v___x_1778_ = lean_unsigned_to_nat(1u);
v___x_1779_ = lean_nat_dec_le(v_len_1777_, v___x_1778_);
if (v___x_1779_ == 0)
{
lean_object* v___x_1780_; lean_object* v_i_1781_; lean_object* v_ys_1782_; lean_object* v_zs_1783_; lean_object* v___x_1784_; 
v___x_1780_ = lean_nat_mod(v_i_1776_, v_len_1777_);
v_i_1781_ = lean_nat_sub(v_len_1777_, v___x_1780_);
lean_dec(v___x_1780_);
lean_dec(v_len_1777_);
lean_inc(v_xs_1775_);
v_ys_1782_ = l_List_take___redArg(v_i_1781_, v_xs_1775_);
v_zs_1783_ = l_List_drop___redArg(v_i_1781_, v_xs_1775_);
lean_dec(v_xs_1775_);
v___x_1784_ = l_List_appendTR___redArg(v_zs_1783_, v_ys_1782_);
return v___x_1784_;
}
else
{
lean_dec(v_len_1777_);
return v_xs_1775_;
}
}
}
LEAN_EXPORT lean_object* l_List_rotateRight___redArg___boxed(lean_object* v_xs_1785_, lean_object* v_i_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_List_rotateRight___redArg(v_xs_1785_, v_i_1786_);
lean_dec(v_i_1786_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_List_rotateRight(lean_object* v_00_u03b1_1788_, lean_object* v_xs_1789_, lean_object* v_i_1790_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l_List_rotateRight___redArg(v_xs_1789_, v_i_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_List_rotateRight___boxed(lean_object* v_00_u03b1_1792_, lean_object* v_xs_1793_, lean_object* v_i_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l_List_rotateRight(v_00_u03b1_1792_, v_xs_1793_, v_i_1794_);
lean_dec(v_i_1794_);
return v_res_1795_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidablePairwise___redArg(lean_object* v_inst_1796_, lean_object* v_x_1797_){
_start:
{
if (lean_obj_tag(v_x_1797_) == 0)
{
uint8_t v___x_1798_; 
lean_dec_ref(v_inst_1796_);
v___x_1798_ = 1;
return v___x_1798_;
}
else
{
lean_object* v_head_1799_; lean_object* v_tail_1800_; uint8_t v_decide_1801_; 
v_head_1799_ = lean_ctor_get(v_x_1797_, 0);
lean_inc(v_head_1799_);
v_tail_1800_ = lean_ctor_get(v_x_1797_, 1);
lean_inc_n(v_tail_1800_, 2);
lean_dec_ref_known(v_x_1797_, 2);
lean_inc_ref(v_inst_1796_);
v_decide_1801_ = l_List_instDecidablePairwise___redArg(v_inst_1796_, v_tail_1800_);
if (v_decide_1801_ == 0)
{
lean_dec(v_tail_1800_);
lean_dec(v_head_1799_);
lean_dec_ref(v_inst_1796_);
return v_decide_1801_;
}
else
{
lean_object* v___x_1802_; uint8_t v_decide_1803_; 
v___x_1802_ = lean_apply_1(v_inst_1796_, v_head_1799_);
v_decide_1803_ = l_List_decidableBAll___redArg(v___x_1802_, v_tail_1800_);
return v_decide_1803_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_instDecidablePairwise___redArg___boxed(lean_object* v_inst_1804_, lean_object* v_x_1805_){
_start:
{
uint8_t v_res_1806_; lean_object* v_r_1807_; 
v_res_1806_ = l_List_instDecidablePairwise___redArg(v_inst_1804_, v_x_1805_);
v_r_1807_ = lean_box(v_res_1806_);
return v_r_1807_;
}
}
LEAN_EXPORT uint8_t l_List_instDecidablePairwise(lean_object* v_00_u03b1_1808_, lean_object* v_R_1809_, lean_object* v_inst_1810_, lean_object* v_x_1811_){
_start:
{
uint8_t v___x_1812_; 
v___x_1812_ = l_List_instDecidablePairwise___redArg(v_inst_1810_, v_x_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_List_instDecidablePairwise___boxed(lean_object* v_00_u03b1_1813_, lean_object* v_R_1814_, lean_object* v_inst_1815_, lean_object* v_x_1816_){
_start:
{
uint8_t v_res_1817_; lean_object* v_r_1818_; 
v_res_1817_ = l_List_instDecidablePairwise(v_00_u03b1_1813_, v_R_1814_, v_inst_1815_, v_x_1816_);
v_r_1818_ = lean_box(v_res_1817_);
return v_r_1818_;
}
}
LEAN_EXPORT uint8_t l_List_nodupDecidable___redArg___lam__0(lean_object* v_inst_1819_, lean_object* v_a_1820_, lean_object* v_b_1821_){
_start:
{
lean_object* v___x_1822_; uint8_t v___x_1823_; 
v___x_1822_ = lean_apply_2(v_inst_1819_, v_a_1820_, v_b_1821_);
v___x_1823_ = lean_unbox(v___x_1822_);
if (v___x_1823_ == 0)
{
uint8_t v___x_1824_; 
v___x_1824_ = 1;
return v___x_1824_;
}
else
{
uint8_t v___x_1825_; 
v___x_1825_ = 0;
return v___x_1825_;
}
}
}
LEAN_EXPORT lean_object* l_List_nodupDecidable___redArg___lam__0___boxed(lean_object* v_inst_1826_, lean_object* v_a_1827_, lean_object* v_b_1828_){
_start:
{
uint8_t v_res_1829_; lean_object* v_r_1830_; 
v_res_1829_ = l_List_nodupDecidable___redArg___lam__0(v_inst_1826_, v_a_1827_, v_b_1828_);
v_r_1830_ = lean_box(v_res_1829_);
return v_r_1830_;
}
}
LEAN_EXPORT uint8_t l_List_nodupDecidable___redArg(lean_object* v_inst_1831_, lean_object* v_l_1832_){
_start:
{
lean_object* v___f_1833_; uint8_t v___x_1834_; 
v___f_1833_ = lean_alloc_closure((void*)(l_List_nodupDecidable___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1833_, 0, v_inst_1831_);
v___x_1834_ = l_List_instDecidablePairwise___redArg(v___f_1833_, v_l_1832_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_List_nodupDecidable___redArg___boxed(lean_object* v_inst_1835_, lean_object* v_l_1836_){
_start:
{
uint8_t v_res_1837_; lean_object* v_r_1838_; 
v_res_1837_ = l_List_nodupDecidable___redArg(v_inst_1835_, v_l_1836_);
v_r_1838_ = lean_box(v_res_1837_);
return v_r_1838_;
}
}
LEAN_EXPORT uint8_t l_List_nodupDecidable(lean_object* v_00_u03b1_1839_, lean_object* v_inst_1840_, lean_object* v_l_1841_){
_start:
{
uint8_t v___x_1842_; 
v___x_1842_ = l_List_nodupDecidable___redArg(v_inst_1840_, v_l_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_List_nodupDecidable___boxed(lean_object* v_00_u03b1_1843_, lean_object* v_inst_1844_, lean_object* v_l_1845_){
_start:
{
uint8_t v_res_1846_; lean_object* v_r_1847_; 
v_res_1846_ = l_List_nodupDecidable(v_00_u03b1_1843_, v_inst_1844_, v_l_1845_);
v_r_1847_ = lean_box(v_res_1846_);
return v_r_1847_;
}
}
LEAN_EXPORT lean_object* l_List_replace___redArg(lean_object* v_inst_1848_, lean_object* v_x_1849_, lean_object* v_x_1850_, lean_object* v_x_1851_){
_start:
{
if (lean_obj_tag(v_x_1849_) == 0)
{
lean_dec(v_x_1851_);
lean_dec(v_x_1850_);
lean_dec_ref(v_inst_1848_);
return v_x_1849_;
}
else
{
lean_object* v_head_1852_; lean_object* v_tail_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1866_; 
v_head_1852_ = lean_ctor_get(v_x_1849_, 0);
v_tail_1853_ = lean_ctor_get(v_x_1849_, 1);
v_isSharedCheck_1866_ = !lean_is_exclusive(v_x_1849_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1855_ = v_x_1849_;
v_isShared_1856_ = v_isSharedCheck_1866_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_tail_1853_);
lean_inc(v_head_1852_);
lean_dec(v_x_1849_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1866_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; uint8_t v___x_1858_; 
lean_inc_ref(v_inst_1848_);
lean_inc(v_head_1852_);
lean_inc(v_x_1850_);
v___x_1857_ = lean_apply_2(v_inst_1848_, v_x_1850_, v_head_1852_);
v___x_1858_ = lean_unbox(v___x_1857_);
if (v___x_1858_ == 0)
{
lean_object* v___x_1859_; lean_object* v___x_1861_; 
v___x_1859_ = l_List_replace___redArg(v_inst_1848_, v_tail_1853_, v_x_1850_, v_x_1851_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 1, v___x_1859_);
v___x_1861_ = v___x_1855_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_head_1852_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
else
{
lean_object* v___x_1864_; 
lean_dec(v_head_1852_);
lean_dec(v_x_1850_);
lean_dec_ref(v_inst_1848_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v_x_1851_);
v___x_1864_ = v___x_1855_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_x_1851_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v_tail_1853_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_replace(lean_object* v_00_u03b1_1867_, lean_object* v_inst_1868_, lean_object* v_x_1869_, lean_object* v_x_1870_, lean_object* v_x_1871_){
_start:
{
lean_object* v___x_1872_; 
v___x_1872_ = l_List_replace___redArg(v_inst_1868_, v_x_1869_, v_x_1870_, v_x_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___redArg(lean_object* v_f_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v_zero_1876_; uint8_t v_isZero_1877_; 
v_zero_1876_ = lean_unsigned_to_nat(0u);
v_isZero_1877_ = lean_nat_dec_eq(v_a_1874_, v_zero_1876_);
if (v_isZero_1877_ == 1)
{
lean_object* v___x_1878_; 
v___x_1878_ = lean_apply_1(v_f_1873_, v_a_1875_);
return v___x_1878_;
}
else
{
if (lean_obj_tag(v_a_1875_) == 0)
{
lean_dec_ref(v_f_1873_);
return v_a_1875_;
}
else
{
lean_object* v_head_1879_; lean_object* v_tail_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1890_; 
v_head_1879_ = lean_ctor_get(v_a_1875_, 0);
v_tail_1880_ = lean_ctor_get(v_a_1875_, 1);
v_isSharedCheck_1890_ = !lean_is_exclusive(v_a_1875_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1882_ = v_a_1875_;
v_isShared_1883_ = v_isSharedCheck_1890_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_tail_1880_);
lean_inc(v_head_1879_);
lean_dec(v_a_1875_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1890_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v_one_1884_; lean_object* v_n_1885_; lean_object* v___x_1886_; lean_object* v___x_1888_; 
v_one_1884_ = lean_unsigned_to_nat(1u);
v_n_1885_ = lean_nat_sub(v_a_1874_, v_one_1884_);
v___x_1886_ = l_List_modifyTailIdx_go___redArg(v_f_1873_, v_n_1885_, v_tail_1880_);
lean_dec(v_n_1885_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 1, v___x_1886_);
v___x_1888_ = v___x_1882_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_head_1879_);
lean_ctor_set(v_reuseFailAlloc_1889_, 1, v___x_1886_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___redArg___boxed(lean_object* v_f_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_List_modifyTailIdx_go___redArg(v_f_1891_, v_a_1892_, v_a_1893_);
lean_dec(v_a_1892_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go(lean_object* v_00_u03b1_1895_, lean_object* v_f_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = l_List_modifyTailIdx_go___redArg(v_f_1896_, v_a_1897_, v_a_1898_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___boxed(lean_object* v_00_u03b1_1900_, lean_object* v_f_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_List_modifyTailIdx_go(v_00_u03b1_1900_, v_f_1901_, v_a_1902_, v_a_1903_);
lean_dec(v_a_1902_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx___redArg(lean_object* v_l_1905_, lean_object* v_i_1906_, lean_object* v_f_1907_){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_List_modifyTailIdx_go___redArg(v_f_1907_, v_i_1906_, v_l_1905_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx___redArg___boxed(lean_object* v_l_1909_, lean_object* v_i_1910_, lean_object* v_f_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_List_modifyTailIdx___redArg(v_l_1909_, v_i_1910_, v_f_1911_);
lean_dec(v_i_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx(lean_object* v_00_u03b1_1913_, lean_object* v_l_1914_, lean_object* v_i_1915_, lean_object* v_f_1916_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l_List_modifyTailIdx_go___redArg(v_f_1916_, v_i_1915_, v_l_1914_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx___boxed(lean_object* v_00_u03b1_1918_, lean_object* v_l_1919_, lean_object* v_i_1920_, lean_object* v_f_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_List_modifyTailIdx(v_00_u03b1_1918_, v_l_1919_, v_i_1920_, v_f_1921_);
lean_dec(v_i_1920_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_List_modifyHead___redArg(lean_object* v_f_1923_, lean_object* v_x_1924_){
_start:
{
if (lean_obj_tag(v_x_1924_) == 0)
{
lean_dec(v_f_1923_);
return v_x_1924_;
}
else
{
lean_object* v_head_1925_; lean_object* v_tail_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1934_; 
v_head_1925_ = lean_ctor_get(v_x_1924_, 0);
v_tail_1926_ = lean_ctor_get(v_x_1924_, 1);
v_isSharedCheck_1934_ = !lean_is_exclusive(v_x_1924_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1928_ = v_x_1924_;
v_isShared_1929_ = v_isSharedCheck_1934_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_tail_1926_);
lean_inc(v_head_1925_);
lean_dec(v_x_1924_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1934_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1930_; lean_object* v___x_1932_; 
v___x_1930_ = lean_apply_1(v_f_1923_, v_head_1925_);
if (v_isShared_1929_ == 0)
{
lean_ctor_set(v___x_1928_, 0, v___x_1930_);
v___x_1932_ = v___x_1928_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_tail_1926_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_modifyHead(lean_object* v_00_u03b1_1935_, lean_object* v_f_1936_, lean_object* v_x_1937_){
_start:
{
if (lean_obj_tag(v_x_1937_) == 0)
{
lean_dec(v_f_1936_);
return v_x_1937_;
}
else
{
lean_object* v_head_1938_; lean_object* v_tail_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1947_; 
v_head_1938_ = lean_ctor_get(v_x_1937_, 0);
v_tail_1939_ = lean_ctor_get(v_x_1937_, 1);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_x_1937_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1941_ = v_x_1937_;
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_tail_1939_);
lean_inc(v_head_1938_);
lean_dec(v_x_1937_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1943_ = lean_apply_1(v_f_1936_, v_head_1938_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 0, v___x_1943_);
v___x_1945_ = v___x_1941_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1943_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v_tail_1939_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_modify___redArg(lean_object* v_l_1948_, lean_object* v_i_1949_, lean_object* v_f_1950_){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = lean_alloc_closure((void*)(l_List_modifyHead), 3, 2);
lean_closure_set(v___x_1951_, 0, lean_box(0));
lean_closure_set(v___x_1951_, 1, v_f_1950_);
v___x_1952_ = l_List_modifyTailIdx_go___redArg(v___x_1951_, v_i_1949_, v_l_1948_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_List_modify___redArg___boxed(lean_object* v_l_1953_, lean_object* v_i_1954_, lean_object* v_f_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_List_modify___redArg(v_l_1953_, v_i_1954_, v_f_1955_);
lean_dec(v_i_1954_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_List_modify(lean_object* v_00_u03b1_1957_, lean_object* v_l_1958_, lean_object* v_i_1959_, lean_object* v_f_1960_){
_start:
{
lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1961_ = lean_alloc_closure((void*)(l_List_modifyHead), 3, 2);
lean_closure_set(v___x_1961_, 0, lean_box(0));
lean_closure_set(v___x_1961_, 1, v_f_1960_);
v___x_1962_ = l_List_modifyTailIdx_go___redArg(v___x_1961_, v_i_1959_, v_l_1958_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_List_modify___boxed(lean_object* v_00_u03b1_1963_, lean_object* v_l_1964_, lean_object* v_i_1965_, lean_object* v_f_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_List_modify(v_00_u03b1_1963_, v_l_1964_, v_i_1965_, v_f_1966_);
lean_dec(v_i_1965_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_List_insert___redArg(lean_object* v_inst_1968_, lean_object* v_a_1969_, lean_object* v_l_1970_){
_start:
{
uint8_t v___x_1971_; 
lean_inc(v_l_1970_);
lean_inc(v_a_1969_);
v___x_1971_ = l_List_elem___redArg(v_inst_1968_, v_a_1969_, v_l_1970_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1972_, 0, v_a_1969_);
lean_ctor_set(v___x_1972_, 1, v_l_1970_);
return v___x_1972_;
}
else
{
lean_dec(v_a_1969_);
return v_l_1970_;
}
}
}
LEAN_EXPORT lean_object* l_List_insert(lean_object* v_00_u03b1_1973_, lean_object* v_inst_1974_, lean_object* v_a_1975_, lean_object* v_l_1976_){
_start:
{
uint8_t v___x_1977_; 
lean_inc(v_l_1976_);
lean_inc(v_a_1975_);
v___x_1977_ = l_List_elem___redArg(v_inst_1974_, v_a_1975_, v_l_1976_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_a_1975_);
lean_ctor_set(v___x_1978_, 1, v_l_1976_);
return v___x_1978_;
}
else
{
lean_dec(v_a_1975_);
return v_l_1976_;
}
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_){
_start:
{
lean_object* v_zero_1982_; uint8_t v_isZero_1983_; 
v_zero_1982_ = lean_unsigned_to_nat(0u);
v_isZero_1983_ = lean_nat_dec_eq(v_a_1980_, v_zero_1982_);
if (v_isZero_1983_ == 1)
{
lean_object* v___x_1984_; 
v___x_1984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1984_, 0, v_a_1979_);
lean_ctor_set(v___x_1984_, 1, v_a_1981_);
return v___x_1984_;
}
else
{
if (lean_obj_tag(v_a_1981_) == 0)
{
lean_dec(v_a_1979_);
return v_a_1981_;
}
else
{
lean_object* v_head_1985_; lean_object* v_tail_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1996_; 
v_head_1985_ = lean_ctor_get(v_a_1981_, 0);
v_tail_1986_ = lean_ctor_get(v_a_1981_, 1);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_a_1981_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1988_ = v_a_1981_;
v_isShared_1989_ = v_isSharedCheck_1996_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_tail_1986_);
lean_inc(v_head_1985_);
lean_dec(v_a_1981_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1996_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v_one_1990_; lean_object* v_n_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
v_one_1990_ = lean_unsigned_to_nat(1u);
v_n_1991_ = lean_nat_sub(v_a_1980_, v_one_1990_);
v___x_1992_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_1979_, v_n_1991_, v_tail_1986_);
lean_dec(v_n_1991_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 1, v___x_1992_);
v___x_1994_ = v___x_1988_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_head_1985_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg___boxed(lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_1997_, v_a_1998_, v_a_1999_);
lean_dec(v_a_1998_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_List_insertIdx___redArg(lean_object* v_xs_2001_, lean_object* v_i_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v___x_2004_; 
v___x_2004_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_2003_, v_i_2002_, v_xs_2001_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_List_insertIdx___redArg___boxed(lean_object* v_xs_2005_, lean_object* v_i_2006_, lean_object* v_a_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_List_insertIdx___redArg(v_xs_2005_, v_i_2006_, v_a_2007_);
lean_dec(v_i_2006_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_List_insertIdx(lean_object* v_00_u03b1_2009_, lean_object* v_xs_2010_, lean_object* v_i_2011_, lean_object* v_a_2012_){
_start:
{
lean_object* v___x_2013_; 
v___x_2013_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_2012_, v_i_2011_, v_xs_2010_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_List_insertIdx___boxed(lean_object* v_00_u03b1_2014_, lean_object* v_xs_2015_, lean_object* v_i_2016_, lean_object* v_a_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l_List_insertIdx(v_00_u03b1_2014_, v_xs_2015_, v_i_2016_, v_a_2017_);
lean_dec(v_i_2016_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0(lean_object* v_00_u03b1_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___redArg(v_a_2020_, v_a_2021_, v_a_2022_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0___boxed(lean_object* v_00_u03b1_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_List_modifyTailIdx_go___at___00List_insertIdx_spec__0(v_00_u03b1_2024_, v_a_2025_, v_a_2026_, v_a_2027_);
lean_dec(v_a_2026_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_List_erase___redArg(lean_object* v_inst_2029_, lean_object* v_x_2030_, lean_object* v_x_2031_){
_start:
{
if (lean_obj_tag(v_x_2030_) == 0)
{
lean_dec(v_x_2031_);
lean_dec_ref(v_inst_2029_);
return v_x_2030_;
}
else
{
lean_object* v_head_2032_; lean_object* v_tail_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2043_; 
v_head_2032_ = lean_ctor_get(v_x_2030_, 0);
v_tail_2033_ = lean_ctor_get(v_x_2030_, 1);
v_isSharedCheck_2043_ = !lean_is_exclusive(v_x_2030_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2035_ = v_x_2030_;
v_isShared_2036_ = v_isSharedCheck_2043_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_tail_2033_);
lean_inc(v_head_2032_);
lean_dec(v_x_2030_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2043_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; uint8_t v___x_2038_; 
lean_inc_ref(v_inst_2029_);
lean_inc(v_x_2031_);
lean_inc(v_head_2032_);
v___x_2037_ = lean_apply_2(v_inst_2029_, v_head_2032_, v_x_2031_);
v___x_2038_ = lean_unbox(v___x_2037_);
if (v___x_2038_ == 0)
{
lean_object* v___x_2039_; lean_object* v___x_2041_; 
v___x_2039_ = l_List_erase___redArg(v_inst_2029_, v_tail_2033_, v_x_2031_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 1, v___x_2039_);
v___x_2041_ = v___x_2035_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_head_2032_);
lean_ctor_set(v_reuseFailAlloc_2042_, 1, v___x_2039_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
else
{
lean_del_object(v___x_2035_);
lean_dec(v_head_2032_);
lean_dec(v_x_2031_);
lean_dec_ref(v_inst_2029_);
return v_tail_2033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_erase(lean_object* v_00_u03b1_2044_, lean_object* v_inst_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_List_erase___redArg(v_inst_2045_, v_x_2046_, v_x_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_getLastD_match__1_splitter___redArg(lean_object* v_x_2049_, lean_object* v_x_2050_, lean_object* v_h__1_2051_, lean_object* v_h__2_2052_){
_start:
{
if (lean_obj_tag(v_x_2049_) == 0)
{
lean_object* v___x_2053_; 
lean_dec(v_h__2_2052_);
v___x_2053_ = lean_apply_1(v_h__1_2051_, v_x_2050_);
return v___x_2053_;
}
else
{
lean_object* v_head_2054_; lean_object* v_tail_2055_; lean_object* v___x_2056_; 
lean_dec(v_h__1_2051_);
v_head_2054_ = lean_ctor_get(v_x_2049_, 0);
lean_inc(v_head_2054_);
v_tail_2055_ = lean_ctor_get(v_x_2049_, 1);
lean_inc(v_tail_2055_);
lean_dec_ref_known(v_x_2049_, 2);
v___x_2056_ = lean_apply_3(v_h__2_2052_, v_head_2054_, v_tail_2055_, v_x_2050_);
return v___x_2056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_getLastD_match__1_splitter(lean_object* v_00_u03b1_2057_, lean_object* v_motive_2058_, lean_object* v_x_2059_, lean_object* v_x_2060_, lean_object* v_h__1_2061_, lean_object* v_h__2_2062_){
_start:
{
if (lean_obj_tag(v_x_2059_) == 0)
{
lean_object* v___x_2063_; 
lean_dec(v_h__2_2062_);
v___x_2063_ = lean_apply_1(v_h__1_2061_, v_x_2060_);
return v___x_2063_;
}
else
{
lean_object* v_head_2064_; lean_object* v_tail_2065_; lean_object* v___x_2066_; 
lean_dec(v_h__1_2061_);
v_head_2064_ = lean_ctor_get(v_x_2059_, 0);
lean_inc(v_head_2064_);
v_tail_2065_ = lean_ctor_get(v_x_2059_, 1);
lean_inc(v_tail_2065_);
lean_dec_ref_known(v_x_2059_, 2);
v___x_2066_ = lean_apply_3(v_h__2_2062_, v_head_2064_, v_tail_2065_, v_x_2060_);
return v___x_2066_;
}
}
}
LEAN_EXPORT lean_object* l_List_eraseP___redArg(lean_object* v_p_2067_, lean_object* v_x_2068_){
_start:
{
if (lean_obj_tag(v_x_2068_) == 0)
{
lean_dec_ref(v_p_2067_);
return v_x_2068_;
}
else
{
lean_object* v_head_2069_; lean_object* v_tail_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2080_; 
v_head_2069_ = lean_ctor_get(v_x_2068_, 0);
v_tail_2070_ = lean_ctor_get(v_x_2068_, 1);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_x_2068_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2072_ = v_x_2068_;
v_isShared_2073_ = v_isSharedCheck_2080_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_tail_2070_);
lean_inc(v_head_2069_);
lean_dec(v_x_2068_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2080_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2074_; uint8_t v___x_2075_; 
lean_inc_ref(v_p_2067_);
lean_inc(v_head_2069_);
v___x_2074_ = lean_apply_1(v_p_2067_, v_head_2069_);
v___x_2075_ = lean_unbox(v___x_2074_);
if (v___x_2075_ == 0)
{
lean_object* v___x_2076_; lean_object* v___x_2078_; 
v___x_2076_ = l_List_eraseP___redArg(v_p_2067_, v_tail_2070_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 1, v___x_2076_);
v___x_2078_ = v___x_2072_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_head_2069_);
lean_ctor_set(v_reuseFailAlloc_2079_, 1, v___x_2076_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
else
{
lean_del_object(v___x_2072_);
lean_dec(v_head_2069_);
lean_dec_ref(v_p_2067_);
return v_tail_2070_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseP(lean_object* v_00_u03b1_2081_, lean_object* v_p_2082_, lean_object* v_x_2083_){
_start:
{
lean_object* v___x_2084_; 
v___x_2084_ = l_List_eraseP___redArg(v_p_2082_, v_x_2083_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_List_eraseIdx___redArg(lean_object* v_x_2085_, lean_object* v_x_2086_){
_start:
{
if (lean_obj_tag(v_x_2085_) == 0)
{
return v_x_2085_;
}
else
{
lean_object* v_head_2087_; lean_object* v_tail_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2100_; 
v_head_2087_ = lean_ctor_get(v_x_2085_, 0);
v_tail_2088_ = lean_ctor_get(v_x_2085_, 1);
v_isSharedCheck_2100_ = !lean_is_exclusive(v_x_2085_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2090_ = v_x_2085_;
v_isShared_2091_ = v_isSharedCheck_2100_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_tail_2088_);
lean_inc(v_head_2087_);
lean_dec(v_x_2085_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2100_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v_zero_2092_; uint8_t v_isZero_2093_; 
v_zero_2092_ = lean_unsigned_to_nat(0u);
v_isZero_2093_ = lean_nat_dec_eq(v_x_2086_, v_zero_2092_);
if (v_isZero_2093_ == 1)
{
lean_del_object(v___x_2090_);
lean_dec(v_head_2087_);
return v_tail_2088_;
}
else
{
lean_object* v_one_2094_; lean_object* v_n_2095_; lean_object* v___x_2096_; lean_object* v___x_2098_; 
v_one_2094_ = lean_unsigned_to_nat(1u);
v_n_2095_ = lean_nat_sub(v_x_2086_, v_one_2094_);
v___x_2096_ = l_List_eraseIdx___redArg(v_tail_2088_, v_n_2095_);
lean_dec(v_n_2095_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 1, v___x_2096_);
v___x_2098_ = v___x_2090_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_head_2087_);
lean_ctor_set(v_reuseFailAlloc_2099_, 1, v___x_2096_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseIdx___redArg___boxed(lean_object* v_x_2101_, lean_object* v_x_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_List_eraseIdx___redArg(v_x_2101_, v_x_2102_);
lean_dec(v_x_2102_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_List_eraseIdx(lean_object* v_00_u03b1_2104_, lean_object* v_x_2105_, lean_object* v_x_2106_){
_start:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_List_eraseIdx___redArg(v_x_2105_, v_x_2106_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_List_eraseIdx___boxed(lean_object* v_00_u03b1_2108_, lean_object* v_x_2109_, lean_object* v_x_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_List_eraseIdx(v_00_u03b1_2108_, v_x_2109_, v_x_2110_);
lean_dec(v_x_2110_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___redArg(lean_object* v_p_2112_, lean_object* v_x_2113_){
_start:
{
if (lean_obj_tag(v_x_2113_) == 0)
{
lean_object* v___x_2114_; 
lean_dec_ref(v_p_2112_);
v___x_2114_ = lean_box(0);
return v___x_2114_;
}
else
{
lean_object* v_head_2115_; lean_object* v_tail_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; 
v_head_2115_ = lean_ctor_get(v_x_2113_, 0);
lean_inc_n(v_head_2115_, 2);
v_tail_2116_ = lean_ctor_get(v_x_2113_, 1);
lean_inc(v_tail_2116_);
lean_dec_ref_known(v_x_2113_, 2);
lean_inc_ref(v_p_2112_);
v___x_2117_ = lean_apply_1(v_p_2112_, v_head_2115_);
v___x_2118_ = lean_unbox(v___x_2117_);
if (v___x_2118_ == 0)
{
lean_dec(v_head_2115_);
v_x_2113_ = v_tail_2116_;
goto _start;
}
else
{
lean_object* v___x_2120_; 
lean_dec(v_tail_2116_);
lean_dec_ref(v_p_2112_);
v___x_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2120_, 0, v_head_2115_);
return v___x_2120_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f(lean_object* v_00_u03b1_2121_, lean_object* v_p_2122_, lean_object* v_x_2123_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l_List_find_x3f___redArg(v_p_2122_, v_x_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_List_findSome_x3f___redArg(lean_object* v_f_2125_, lean_object* v_x_2126_){
_start:
{
if (lean_obj_tag(v_x_2126_) == 0)
{
lean_object* v___x_2127_; 
lean_dec_ref(v_f_2125_);
v___x_2127_ = lean_box(0);
return v___x_2127_;
}
else
{
lean_object* v_head_2128_; lean_object* v_tail_2129_; lean_object* v___x_2130_; 
v_head_2128_ = lean_ctor_get(v_x_2126_, 0);
lean_inc(v_head_2128_);
v_tail_2129_ = lean_ctor_get(v_x_2126_, 1);
lean_inc(v_tail_2129_);
lean_dec_ref_known(v_x_2126_, 2);
lean_inc_ref(v_f_2125_);
v___x_2130_ = lean_apply_1(v_f_2125_, v_head_2128_);
if (lean_obj_tag(v___x_2130_) == 0)
{
v_x_2126_ = v_tail_2129_;
goto _start;
}
else
{
lean_dec(v_tail_2129_);
lean_dec_ref(v_f_2125_);
return v___x_2130_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findSome_x3f(lean_object* v_00_u03b1_2132_, lean_object* v_00_u03b2_2133_, lean_object* v_f_2134_, lean_object* v_x_2135_){
_start:
{
lean_object* v___x_2136_; 
v___x_2136_ = l_List_findSome_x3f___redArg(v_f_2134_, v_x_2135_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l_List_findRev_x3f___redArg(lean_object* v_p_2137_, lean_object* v_x_2138_){
_start:
{
if (lean_obj_tag(v_x_2138_) == 0)
{
lean_object* v___x_2139_; 
lean_dec_ref(v_p_2137_);
v___x_2139_ = lean_box(0);
return v___x_2139_;
}
else
{
lean_object* v_head_2140_; lean_object* v_tail_2141_; lean_object* v___x_2142_; 
v_head_2140_ = lean_ctor_get(v_x_2138_, 0);
lean_inc(v_head_2140_);
v_tail_2141_ = lean_ctor_get(v_x_2138_, 1);
lean_inc(v_tail_2141_);
lean_dec_ref_known(v_x_2138_, 2);
lean_inc_ref(v_p_2137_);
v___x_2142_ = l_List_findRev_x3f___redArg(v_p_2137_, v_tail_2141_);
if (lean_obj_tag(v___x_2142_) == 0)
{
lean_object* v___x_2143_; uint8_t v___x_2144_; 
lean_inc(v_head_2140_);
v___x_2143_ = lean_apply_1(v_p_2137_, v_head_2140_);
v___x_2144_ = lean_unbox(v___x_2143_);
if (v___x_2144_ == 0)
{
lean_dec(v_head_2140_);
return v___x_2142_;
}
else
{
lean_object* v___x_2145_; 
v___x_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2145_, 0, v_head_2140_);
return v___x_2145_;
}
}
else
{
lean_dec(v_head_2140_);
lean_dec_ref(v_p_2137_);
return v___x_2142_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findRev_x3f(lean_object* v_00_u03b1_2146_, lean_object* v_p_2147_, lean_object* v_x_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l_List_findRev_x3f___redArg(v_p_2147_, v_x_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_List_findSomeRev_x3f___redArg(lean_object* v_f_2150_, lean_object* v_x_2151_){
_start:
{
if (lean_obj_tag(v_x_2151_) == 0)
{
lean_object* v___x_2152_; 
lean_dec_ref(v_f_2150_);
v___x_2152_ = lean_box(0);
return v___x_2152_;
}
else
{
lean_object* v_head_2153_; lean_object* v_tail_2154_; lean_object* v___x_2155_; 
v_head_2153_ = lean_ctor_get(v_x_2151_, 0);
lean_inc(v_head_2153_);
v_tail_2154_ = lean_ctor_get(v_x_2151_, 1);
lean_inc(v_tail_2154_);
lean_dec_ref_known(v_x_2151_, 2);
lean_inc_ref(v_f_2150_);
v___x_2155_ = l_List_findSomeRev_x3f___redArg(v_f_2150_, v_tail_2154_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v___x_2156_; 
v___x_2156_ = lean_apply_1(v_f_2150_, v_head_2153_);
return v___x_2156_;
}
else
{
lean_dec(v_head_2153_);
lean_dec_ref(v_f_2150_);
return v___x_2155_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findSomeRev_x3f(lean_object* v_00_u03b1_2157_, lean_object* v_00_u03b2_2158_, lean_object* v_f_2159_, lean_object* v_x_2160_){
_start:
{
lean_object* v___x_2161_; 
v___x_2161_ = l_List_findSomeRev_x3f___redArg(v_f_2159_, v_x_2160_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go___redArg(lean_object* v_p_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_){
_start:
{
if (lean_obj_tag(v_a_2163_) == 0)
{
lean_dec_ref(v_p_2162_);
return v_a_2164_;
}
else
{
lean_object* v_head_2165_; lean_object* v_tail_2166_; lean_object* v___x_2167_; uint8_t v___x_2168_; 
v_head_2165_ = lean_ctor_get(v_a_2163_, 0);
lean_inc(v_head_2165_);
v_tail_2166_ = lean_ctor_get(v_a_2163_, 1);
lean_inc(v_tail_2166_);
lean_dec_ref_known(v_a_2163_, 2);
lean_inc_ref(v_p_2162_);
v___x_2167_ = lean_apply_1(v_p_2162_, v_head_2165_);
v___x_2168_ = lean_unbox(v___x_2167_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2169_ = lean_unsigned_to_nat(1u);
v___x_2170_ = lean_nat_add(v_a_2164_, v___x_2169_);
lean_dec(v_a_2164_);
v_a_2163_ = v_tail_2166_;
v_a_2164_ = v___x_2170_;
goto _start;
}
else
{
lean_dec(v_tail_2166_);
lean_dec_ref(v_p_2162_);
return v_a_2164_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_go(lean_object* v_00_u03b1_2172_, lean_object* v_p_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_){
_start:
{
lean_object* v___x_2176_; 
v___x_2176_ = l_List_findIdx_go___redArg(v_p_2173_, v_a_2174_, v_a_2175_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx___redArg(lean_object* v_p_2177_, lean_object* v_l_2178_){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = lean_unsigned_to_nat(0u);
v___x_2180_ = l_List_findIdx_go___redArg(v_p_2177_, v_l_2178_, v___x_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx(lean_object* v_00_u03b1_2181_, lean_object* v_p_2182_, lean_object* v_l_2183_){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2184_ = lean_unsigned_to_nat(0u);
v___x_2185_ = l_List_findIdx_go___redArg(v_p_2182_, v_l_2183_, v___x_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT uint8_t l_List_idxOf___redArg___lam__0(lean_object* v_inst_2186_, lean_object* v_a_2187_, lean_object* v_x_2188_){
_start:
{
lean_object* v___x_2189_; uint8_t v___x_2190_; 
v___x_2189_ = lean_apply_2(v_inst_2186_, v_x_2188_, v_a_2187_);
v___x_2190_ = lean_unbox(v___x_2189_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___redArg___lam__0___boxed(lean_object* v_inst_2191_, lean_object* v_a_2192_, lean_object* v_x_2193_){
_start:
{
uint8_t v_res_2194_; lean_object* v_r_2195_; 
v_res_2194_ = l_List_idxOf___redArg___lam__0(v_inst_2191_, v_a_2192_, v_x_2193_);
v_r_2195_ = lean_box(v_res_2194_);
return v_r_2195_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf___redArg(lean_object* v_inst_2196_, lean_object* v_a_2197_, lean_object* v_l_2198_){
_start:
{
lean_object* v___f_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___f_2199_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2199_, 0, v_inst_2196_);
lean_closure_set(v___f_2199_, 1, v_a_2197_);
v___x_2200_ = lean_unsigned_to_nat(0u);
v___x_2201_ = l_List_findIdx_go___redArg(v___f_2199_, v_l_2198_, v___x_2200_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf(lean_object* v_00_u03b1_2202_, lean_object* v_inst_2203_, lean_object* v_a_2204_, lean_object* v_l_2205_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = l_List_idxOf___redArg(v_inst_2203_, v_a_2204_, v_l_2205_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___redArg(lean_object* v_p_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_){
_start:
{
if (lean_obj_tag(v_a_2208_) == 0)
{
lean_object* v___x_2210_; 
lean_dec(v_a_2209_);
lean_dec_ref(v_p_2207_);
v___x_2210_ = lean_box(0);
return v___x_2210_;
}
else
{
lean_object* v_head_2211_; lean_object* v_tail_2212_; lean_object* v___x_2213_; uint8_t v___x_2214_; 
v_head_2211_ = lean_ctor_get(v_a_2208_, 0);
lean_inc(v_head_2211_);
v_tail_2212_ = lean_ctor_get(v_a_2208_, 1);
lean_inc(v_tail_2212_);
lean_dec_ref_known(v_a_2208_, 2);
lean_inc_ref(v_p_2207_);
v___x_2213_ = lean_apply_1(v_p_2207_, v_head_2211_);
v___x_2214_ = lean_unbox(v___x_2213_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = lean_unsigned_to_nat(1u);
v___x_2216_ = lean_nat_add(v_a_2209_, v___x_2215_);
lean_dec(v_a_2209_);
v_a_2208_ = v_tail_2212_;
v_a_2209_ = v___x_2216_;
goto _start;
}
else
{
lean_object* v___x_2218_; 
lean_dec(v_tail_2212_);
lean_dec_ref(v_p_2207_);
v___x_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2218_, 0, v_a_2209_);
return v___x_2218_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go(lean_object* v_00_u03b1_2219_, lean_object* v_p_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_){
_start:
{
lean_object* v___x_2223_; 
v___x_2223_ = l_List_findIdx_x3f_go___redArg(v_p_2220_, v_a_2221_, v_a_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f___redArg(lean_object* v_p_2224_, lean_object* v_l_2225_){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_unsigned_to_nat(0u);
v___x_2227_ = l_List_findIdx_x3f_go___redArg(v_p_2224_, v_l_2225_, v___x_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f(lean_object* v_00_u03b1_2228_, lean_object* v_p_2229_, lean_object* v_l_2230_){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2231_ = lean_unsigned_to_nat(0u);
v___x_2232_ = l_List_findIdx_x3f_go___redArg(v_p_2229_, v_l_2230_, v___x_2231_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf_x3f___redArg(lean_object* v_inst_2233_, lean_object* v_a_2234_, lean_object* v_l_2235_){
_start:
{
lean_object* v___f_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___f_2236_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2236_, 0, v_inst_2233_);
lean_closure_set(v___f_2236_, 1, v_a_2234_);
v___x_2237_ = lean_unsigned_to_nat(0u);
v___x_2238_ = l_List_findIdx_x3f_go___redArg(v___f_2236_, v_l_2235_, v___x_2237_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l_List_idxOf_x3f(lean_object* v_00_u03b1_2239_, lean_object* v_inst_2240_, lean_object* v_a_2241_, lean_object* v_l_2242_){
_start:
{
lean_object* v___f_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___f_2243_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2243_, 0, v_inst_2240_);
lean_closure_set(v___f_2243_, 1, v_a_2241_);
v___x_2244_ = lean_unsigned_to_nat(0u);
v___x_2245_ = l_List_findIdx_x3f_go___redArg(v___f_2243_, v_l_2242_, v___x_2244_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go___redArg(lean_object* v_p_2246_, lean_object* v_l_x27_2247_, lean_object* v_i_2248_){
_start:
{
if (lean_obj_tag(v_l_x27_2247_) == 0)
{
lean_object* v___x_2249_; 
lean_dec(v_i_2248_);
lean_dec_ref(v_p_2246_);
v___x_2249_ = lean_box(0);
return v___x_2249_;
}
else
{
lean_object* v_head_2250_; lean_object* v_tail_2251_; lean_object* v___x_2252_; uint8_t v___x_2253_; 
v_head_2250_ = lean_ctor_get(v_l_x27_2247_, 0);
lean_inc(v_head_2250_);
v_tail_2251_ = lean_ctor_get(v_l_x27_2247_, 1);
lean_inc(v_tail_2251_);
lean_dec_ref_known(v_l_x27_2247_, 2);
lean_inc_ref(v_p_2246_);
v___x_2252_ = lean_apply_1(v_p_2246_, v_head_2250_);
v___x_2253_ = lean_unbox(v___x_2252_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2254_ = lean_unsigned_to_nat(1u);
v___x_2255_ = lean_nat_add(v_i_2248_, v___x_2254_);
lean_dec(v_i_2248_);
v_l_x27_2247_ = v_tail_2251_;
v_i_2248_ = v___x_2255_;
goto _start;
}
else
{
lean_object* v___x_2257_; 
lean_dec(v_tail_2251_);
lean_dec_ref(v_p_2246_);
v___x_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2257_, 0, v_i_2248_);
return v___x_2257_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go(lean_object* v_00_u03b1_2258_, lean_object* v_p_2259_, lean_object* v_l_2260_, lean_object* v_l_x27_2261_, lean_object* v_i_2262_, lean_object* v_h_2263_){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = l_List_findFinIdx_x3f_go___redArg(v_p_2259_, v_l_x27_2261_, v_i_2262_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f_go___boxed(lean_object* v_00_u03b1_2265_, lean_object* v_p_2266_, lean_object* v_l_2267_, lean_object* v_l_x27_2268_, lean_object* v_i_2269_, lean_object* v_h_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_List_findFinIdx_x3f_go(v_00_u03b1_2265_, v_p_2266_, v_l_2267_, v_l_x27_2268_, v_i_2269_, v_h_2270_);
lean_dec(v_l_2267_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f___redArg(lean_object* v_p_2272_, lean_object* v_l_2273_){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2274_ = lean_unsigned_to_nat(0u);
v___x_2275_ = l_List_findFinIdx_x3f_go___redArg(v_p_2272_, v_l_2273_, v___x_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_List_findFinIdx_x3f(lean_object* v_00_u03b1_2276_, lean_object* v_p_2277_, lean_object* v_l_2278_){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2279_ = lean_unsigned_to_nat(0u);
v___x_2280_ = l_List_findFinIdx_x3f_go___redArg(v_p_2277_, v_l_2278_, v___x_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_List_finIdxOf_x3f___redArg(lean_object* v_inst_2281_, lean_object* v_a_2282_, lean_object* v_l_2283_){
_start:
{
lean_object* v___f_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___f_2284_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2284_, 0, v_inst_2281_);
lean_closure_set(v___f_2284_, 1, v_a_2282_);
v___x_2285_ = lean_unsigned_to_nat(0u);
v___x_2286_ = l_List_findFinIdx_x3f_go___redArg(v___f_2284_, v_l_2283_, v___x_2285_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_List_finIdxOf_x3f(lean_object* v_00_u03b1_2287_, lean_object* v_inst_2288_, lean_object* v_a_2289_, lean_object* v_l_2290_){
_start:
{
lean_object* v___f_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___f_2291_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2291_, 0, v_inst_2288_);
lean_closure_set(v___f_2291_, 1, v_a_2289_);
v___x_2292_ = lean_unsigned_to_nat(0u);
v___x_2293_ = l_List_findFinIdx_x3f_go___redArg(v___f_2291_, v_l_2290_, v___x_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_List_countP_go___redArg(lean_object* v_p_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_){
_start:
{
if (lean_obj_tag(v_a_2295_) == 0)
{
lean_dec_ref(v_p_2294_);
return v_a_2296_;
}
else
{
lean_object* v_head_2297_; lean_object* v_tail_2298_; lean_object* v___x_2299_; uint8_t v___x_2300_; 
v_head_2297_ = lean_ctor_get(v_a_2295_, 0);
lean_inc(v_head_2297_);
v_tail_2298_ = lean_ctor_get(v_a_2295_, 1);
lean_inc(v_tail_2298_);
lean_dec_ref_known(v_a_2295_, 2);
lean_inc_ref(v_p_2294_);
v___x_2299_ = lean_apply_1(v_p_2294_, v_head_2297_);
v___x_2300_ = lean_unbox(v___x_2299_);
if (v___x_2300_ == 0)
{
v_a_2295_ = v_tail_2298_;
goto _start;
}
else
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2302_ = lean_unsigned_to_nat(1u);
v___x_2303_ = lean_nat_add(v_a_2296_, v___x_2302_);
lean_dec(v_a_2296_);
v_a_2295_ = v_tail_2298_;
v_a_2296_ = v___x_2303_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_countP_go(lean_object* v_00_u03b1_2305_, lean_object* v_p_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v___x_2309_; 
v___x_2309_ = l_List_countP_go___redArg(v_p_2306_, v_a_2307_, v_a_2308_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_List_countP___redArg(lean_object* v_p_2310_, lean_object* v_l_2311_){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = lean_unsigned_to_nat(0u);
v___x_2313_ = l_List_countP_go___redArg(v_p_2310_, v_l_2311_, v___x_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_List_countP(lean_object* v_00_u03b1_2314_, lean_object* v_p_2315_, lean_object* v_l_2316_){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = lean_unsigned_to_nat(0u);
v___x_2318_ = l_List_countP_go___redArg(v_p_2315_, v_l_2316_, v___x_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_List_count___redArg(lean_object* v_inst_2319_, lean_object* v_a_2320_, lean_object* v_l_2321_){
_start:
{
lean_object* v___f_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___f_2322_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2322_, 0, v_inst_2319_);
lean_closure_set(v___f_2322_, 1, v_a_2320_);
v___x_2323_ = lean_unsigned_to_nat(0u);
v___x_2324_ = l_List_countP_go___redArg(v___f_2322_, v_l_2321_, v___x_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_List_count(lean_object* v_00_u03b1_2325_, lean_object* v_inst_2326_, lean_object* v_a_2327_, lean_object* v_l_2328_){
_start:
{
lean_object* v___f_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___f_2329_ = lean_alloc_closure((void*)(l_List_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2329_, 0, v_inst_2326_);
lean_closure_set(v___f_2329_, 1, v_a_2327_);
v___x_2330_ = lean_unsigned_to_nat(0u);
v___x_2331_ = l_List_countP_go___redArg(v___f_2329_, v_l_2328_, v___x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_List_lookup___redArg(lean_object* v_inst_2332_, lean_object* v_x_2333_, lean_object* v_x_2334_){
_start:
{
if (lean_obj_tag(v_x_2334_) == 0)
{
lean_object* v___x_2335_; 
lean_dec(v_x_2333_);
lean_dec_ref(v_inst_2332_);
v___x_2335_ = lean_box(0);
return v___x_2335_;
}
else
{
lean_object* v_head_2336_; lean_object* v_tail_2337_; lean_object* v_fst_2338_; lean_object* v_snd_2339_; lean_object* v___x_2340_; uint8_t v___x_2341_; 
v_head_2336_ = lean_ctor_get(v_x_2334_, 0);
lean_inc(v_head_2336_);
v_tail_2337_ = lean_ctor_get(v_x_2334_, 1);
lean_inc(v_tail_2337_);
lean_dec_ref_known(v_x_2334_, 2);
v_fst_2338_ = lean_ctor_get(v_head_2336_, 0);
lean_inc(v_fst_2338_);
v_snd_2339_ = lean_ctor_get(v_head_2336_, 1);
lean_inc(v_snd_2339_);
lean_dec(v_head_2336_);
lean_inc_ref(v_inst_2332_);
lean_inc(v_x_2333_);
v___x_2340_ = lean_apply_2(v_inst_2332_, v_x_2333_, v_fst_2338_);
v___x_2341_ = lean_unbox(v___x_2340_);
if (v___x_2341_ == 0)
{
lean_dec(v_snd_2339_);
v_x_2334_ = v_tail_2337_;
goto _start;
}
else
{
lean_object* v___x_2343_; 
lean_dec(v_tail_2337_);
lean_dec(v_x_2333_);
lean_dec_ref(v_inst_2332_);
v___x_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2343_, 0, v_snd_2339_);
return v___x_2343_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_lookup(lean_object* v_00_u03b1_2344_, lean_object* v_00_u03b2_2345_, lean_object* v_inst_2346_, lean_object* v_x_2347_, lean_object* v_x_2348_){
_start:
{
lean_object* v___x_2349_; 
v___x_2349_ = l_List_lookup___redArg(v_inst_2346_, v_x_2347_, v_x_2348_);
return v___x_2349_;
}
}
static lean_object* _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1(void){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2367_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__0));
v___x_2368_ = l_String_toRawSubstring_x27(v___x_2367_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1(lean_object* v_x_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_){
_start:
{
lean_object* v___x_2391_; uint8_t v___x_2392_; 
v___x_2391_ = ((lean_object*)(l_List_term___x7e___00__closed__1));
lean_inc(v_x_2388_);
v___x_2392_ = l_Lean_Syntax_isOfKind(v_x_2388_, v___x_2391_);
if (v___x_2392_ == 0)
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
lean_dec(v_x_2388_);
v___x_2393_ = lean_box(1);
v___x_2394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2393_);
lean_ctor_set(v___x_2394_, 1, v_a_2390_);
return v___x_2394_;
}
else
{
lean_object* v_quotContext_2395_; lean_object* v_currMacroScope_2396_; lean_object* v_ref_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; uint8_t v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
v_quotContext_2395_ = lean_ctor_get(v_a_2389_, 1);
v_currMacroScope_2396_ = lean_ctor_get(v_a_2389_, 2);
v_ref_2397_ = lean_ctor_get(v_a_2389_, 5);
v___x_2398_ = lean_unsigned_to_nat(0u);
v___x_2399_ = l_Lean_Syntax_getArg(v_x_2388_, v___x_2398_);
v___x_2400_ = lean_unsigned_to_nat(2u);
v___x_2401_ = l_Lean_Syntax_getArg(v_x_2388_, v___x_2400_);
lean_dec(v_x_2388_);
v___x_2402_ = 0;
v___x_2403_ = l_Lean_SourceInfo_fromRef(v_ref_2397_, v___x_2402_);
v___x_2404_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
v___x_2405_ = lean_obj_once(&l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1, &l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1_once, _init_l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__1);
v___x_2406_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__2));
lean_inc(v_currMacroScope_2396_);
lean_inc(v_quotContext_2395_);
v___x_2407_ = l_Lean_addMacroScope(v_quotContext_2395_, v___x_2406_, v_currMacroScope_2396_);
v___x_2408_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___closed__8));
lean_inc_n(v___x_2403_, 2);
v___x_2409_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2403_);
lean_ctor_set(v___x_2409_, 1, v___x_2405_);
lean_ctor_set(v___x_2409_, 2, v___x_2407_);
lean_ctor_set(v___x_2409_, 3, v___x_2408_);
v___x_2410_ = ((lean_object*)(l_List_lex___auto__1___closed__9));
v___x_2411_ = l_Lean_Syntax_node2(v___x_2403_, v___x_2410_, v___x_2399_, v___x_2401_);
v___x_2412_ = l_Lean_Syntax_node2(v___x_2403_, v___x_2404_, v___x_2409_, v___x_2411_);
v___x_2413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2412_);
lean_ctor_set(v___x_2413_, 1, v_a_2390_);
return v___x_2413_;
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1___boxed(lean_object* v_x_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l_List___aux__Init__Data__List__Basic______macroRules__List__term___x7e____1(v_x_2414_, v_a_2415_, v_a_2416_);
lean_dec_ref(v_a_2415_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1(lean_object* v_x_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_){
_start:
{
lean_object* v___x_2421_; uint8_t v___x_2422_; 
v___x_2421_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______macroRules__List__term___x3c_x2b____1___closed__1));
lean_inc(v_x_2418_);
v___x_2422_ = l_Lean_Syntax_isOfKind(v_x_2418_, v___x_2421_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
lean_dec(v_x_2418_);
v___x_2423_ = lean_box(0);
v___x_2424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2423_);
lean_ctor_set(v___x_2424_, 1, v_a_2420_);
return v___x_2424_;
}
else
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v___x_2425_ = lean_unsigned_to_nat(0u);
v___x_2426_ = l_Lean_Syntax_getArg(v_x_2418_, v___x_2425_);
v___x_2427_ = ((lean_object*)(l_List___aux__Init__Data__List__Basic______unexpand__List__Sublist__1___closed__1));
lean_inc(v___x_2426_);
v___x_2428_ = l_Lean_Syntax_isOfKind(v___x_2426_, v___x_2427_);
if (v___x_2428_ == 0)
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
lean_dec(v___x_2426_);
lean_dec(v_x_2418_);
v___x_2429_ = lean_box(0);
v___x_2430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2429_);
lean_ctor_set(v___x_2430_, 1, v_a_2420_);
return v___x_2430_;
}
else
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; 
v___x_2431_ = lean_unsigned_to_nat(1u);
v___x_2432_ = l_Lean_Syntax_getArg(v_x_2418_, v___x_2431_);
lean_dec(v_x_2418_);
v___x_2433_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2432_);
v___x_2434_ = l_Lean_Syntax_matchesNull(v___x_2432_, v___x_2433_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
lean_dec(v___x_2432_);
lean_dec(v___x_2426_);
v___x_2435_ = lean_box(0);
v___x_2436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
lean_ctor_set(v___x_2436_, 1, v_a_2420_);
return v___x_2436_;
}
else
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v_ref_2439_; uint8_t v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2437_ = l_Lean_Syntax_getArg(v___x_2432_, v___x_2425_);
v___x_2438_ = l_Lean_Syntax_getArg(v___x_2432_, v___x_2431_);
lean_dec(v___x_2432_);
v_ref_2439_ = l_Lean_replaceRef(v___x_2426_, v_a_2419_);
lean_dec(v___x_2426_);
v___x_2440_ = 0;
v___x_2441_ = l_Lean_SourceInfo_fromRef(v_ref_2439_, v___x_2440_);
lean_dec(v_ref_2439_);
v___x_2442_ = ((lean_object*)(l_List_term___x7e___00__closed__1));
v___x_2443_ = ((lean_object*)(l_List_term___x7e___00__closed__2));
lean_inc(v___x_2441_);
v___x_2444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2441_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = l_Lean_Syntax_node3(v___x_2441_, v___x_2442_, v___x_2437_, v___x_2444_, v___x_2438_);
v___x_2446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2445_);
lean_ctor_set(v___x_2446_, 1, v_a_2420_);
return v___x_2446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1___boxed(lean_object* v_x_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_List___aux__Init__Data__List__Basic______unexpand__List__Perm__1(v_x_2447_, v_a_2448_, v_a_2449_);
lean_dec(v_a_2448_);
return v_res_2450_;
}
}
LEAN_EXPORT uint8_t l_List_isPerm___redArg(lean_object* v_inst_2451_, lean_object* v_x_2452_, lean_object* v_x_2453_){
_start:
{
if (lean_obj_tag(v_x_2452_) == 0)
{
uint8_t v___x_2454_; 
lean_dec_ref(v_inst_2451_);
v___x_2454_ = l_List_isEmpty___redArg(v_x_2453_);
lean_dec(v_x_2453_);
return v___x_2454_;
}
else
{
lean_object* v_head_2455_; lean_object* v_tail_2456_; uint8_t v___x_2457_; 
v_head_2455_ = lean_ctor_get(v_x_2452_, 0);
lean_inc_n(v_head_2455_, 2);
v_tail_2456_ = lean_ctor_get(v_x_2452_, 1);
lean_inc(v_tail_2456_);
lean_dec_ref_known(v_x_2452_, 2);
lean_inc(v_x_2453_);
lean_inc_ref(v_inst_2451_);
v___x_2457_ = l_List_elem___redArg(v_inst_2451_, v_head_2455_, v_x_2453_);
if (v___x_2457_ == 0)
{
lean_dec(v_tail_2456_);
lean_dec(v_head_2455_);
lean_dec(v_x_2453_);
lean_dec_ref(v_inst_2451_);
return v___x_2457_;
}
else
{
lean_object* v___x_2458_; 
lean_inc_ref(v_inst_2451_);
v___x_2458_ = l_List_erase___redArg(v_inst_2451_, v_x_2453_, v_head_2455_);
v_x_2452_ = v_tail_2456_;
v_x_2453_ = v___x_2458_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPerm___redArg___boxed(lean_object* v_inst_2460_, lean_object* v_x_2461_, lean_object* v_x_2462_){
_start:
{
uint8_t v_res_2463_; lean_object* v_r_2464_; 
v_res_2463_ = l_List_isPerm___redArg(v_inst_2460_, v_x_2461_, v_x_2462_);
v_r_2464_ = lean_box(v_res_2463_);
return v_r_2464_;
}
}
LEAN_EXPORT uint8_t l_List_isPerm(lean_object* v_00_u03b1_2465_, lean_object* v_inst_2466_, lean_object* v_x_2467_, lean_object* v_x_2468_){
_start:
{
uint8_t v___x_2469_; 
v___x_2469_ = l_List_isPerm___redArg(v_inst_2466_, v_x_2467_, v_x_2468_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_List_isPerm___boxed(lean_object* v_00_u03b1_2470_, lean_object* v_inst_2471_, lean_object* v_x_2472_, lean_object* v_x_2473_){
_start:
{
uint8_t v_res_2474_; lean_object* v_r_2475_; 
v_res_2474_ = l_List_isPerm(v_00_u03b1_2470_, v_inst_2471_, v_x_2472_, v_x_2473_);
v_r_2475_ = lean_box(v_res_2474_);
return v_r_2475_;
}
}
LEAN_EXPORT uint8_t l_List_any___redArg(lean_object* v_x_2476_, lean_object* v_x_2477_){
_start:
{
if (lean_obj_tag(v_x_2476_) == 0)
{
uint8_t v___x_2478_; 
lean_dec_ref(v_x_2477_);
v___x_2478_ = 0;
return v___x_2478_;
}
else
{
lean_object* v_head_2479_; lean_object* v_tail_2480_; lean_object* v___x_2481_; uint8_t v___x_2482_; 
v_head_2479_ = lean_ctor_get(v_x_2476_, 0);
lean_inc(v_head_2479_);
v_tail_2480_ = lean_ctor_get(v_x_2476_, 1);
lean_inc(v_tail_2480_);
lean_dec_ref_known(v_x_2476_, 2);
lean_inc_ref(v_x_2477_);
v___x_2481_ = lean_apply_1(v_x_2477_, v_head_2479_);
v___x_2482_ = lean_unbox(v___x_2481_);
if (v___x_2482_ == 0)
{
v_x_2476_ = v_tail_2480_;
goto _start;
}
else
{
uint8_t v___x_2484_; 
lean_dec(v_tail_2480_);
lean_dec_ref(v_x_2477_);
v___x_2484_ = lean_unbox(v___x_2481_);
return v___x_2484_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___redArg___boxed(lean_object* v_x_2485_, lean_object* v_x_2486_){
_start:
{
uint8_t v_res_2487_; lean_object* v_r_2488_; 
v_res_2487_ = l_List_any___redArg(v_x_2485_, v_x_2486_);
v_r_2488_ = lean_box(v_res_2487_);
return v_r_2488_;
}
}
LEAN_EXPORT uint8_t l_List_any(lean_object* v_00_u03b1_2489_, lean_object* v_x_2490_, lean_object* v_x_2491_){
_start:
{
uint8_t v___x_2492_; 
v___x_2492_ = l_List_any___redArg(v_x_2490_, v_x_2491_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_List_any___boxed(lean_object* v_00_u03b1_2493_, lean_object* v_x_2494_, lean_object* v_x_2495_){
_start:
{
uint8_t v_res_2496_; lean_object* v_r_2497_; 
v_res_2496_ = l_List_any(v_00_u03b1_2493_, v_x_2494_, v_x_2495_);
v_r_2497_ = lean_box(v_res_2496_);
return v_r_2497_;
}
}
LEAN_EXPORT uint8_t l_List_all___redArg(lean_object* v_x_2498_, lean_object* v_x_2499_){
_start:
{
if (lean_obj_tag(v_x_2498_) == 0)
{
uint8_t v___x_2500_; 
lean_dec_ref(v_x_2499_);
v___x_2500_ = 1;
return v___x_2500_;
}
else
{
lean_object* v_head_2501_; lean_object* v_tail_2502_; lean_object* v___x_2503_; uint8_t v___x_2504_; 
v_head_2501_ = lean_ctor_get(v_x_2498_, 0);
lean_inc(v_head_2501_);
v_tail_2502_ = lean_ctor_get(v_x_2498_, 1);
lean_inc(v_tail_2502_);
lean_dec_ref_known(v_x_2498_, 2);
lean_inc_ref(v_x_2499_);
v___x_2503_ = lean_apply_1(v_x_2499_, v_head_2501_);
v___x_2504_ = lean_unbox(v___x_2503_);
if (v___x_2504_ == 0)
{
uint8_t v___x_2505_; 
lean_dec(v_tail_2502_);
lean_dec_ref(v_x_2499_);
v___x_2505_ = lean_unbox(v___x_2503_);
return v___x_2505_;
}
else
{
v_x_2498_ = v_tail_2502_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___redArg___boxed(lean_object* v_x_2507_, lean_object* v_x_2508_){
_start:
{
uint8_t v_res_2509_; lean_object* v_r_2510_; 
v_res_2509_ = l_List_all___redArg(v_x_2507_, v_x_2508_);
v_r_2510_ = lean_box(v_res_2509_);
return v_r_2510_;
}
}
LEAN_EXPORT uint8_t l_List_all(lean_object* v_00_u03b1_2511_, lean_object* v_x_2512_, lean_object* v_x_2513_){
_start:
{
uint8_t v___x_2514_; 
v___x_2514_ = l_List_all___redArg(v_x_2512_, v_x_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_List_all___boxed(lean_object* v_00_u03b1_2515_, lean_object* v_x_2516_, lean_object* v_x_2517_){
_start:
{
uint8_t v_res_2518_; lean_object* v_r_2519_; 
v_res_2518_ = l_List_all(v_00_u03b1_2515_, v_x_2516_, v_x_2517_);
v_r_2519_ = lean_box(v_res_2518_);
return v_r_2519_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00List_or_spec__0(lean_object* v_x_2520_){
_start:
{
if (lean_obj_tag(v_x_2520_) == 0)
{
uint8_t v___x_2521_; 
v___x_2521_ = 0;
return v___x_2521_;
}
else
{
lean_object* v_head_2522_; uint8_t v___x_2523_; 
v_head_2522_ = lean_ctor_get(v_x_2520_, 0);
v___x_2523_ = lean_unbox(v_head_2522_);
if (v___x_2523_ == 0)
{
lean_object* v_tail_2524_; 
v_tail_2524_ = lean_ctor_get(v_x_2520_, 1);
v_x_2520_ = v_tail_2524_;
goto _start;
}
else
{
uint8_t v___x_2526_; 
v___x_2526_ = lean_unbox(v_head_2522_);
return v___x_2526_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00List_or_spec__0___boxed(lean_object* v_x_2527_){
_start:
{
uint8_t v_res_2528_; lean_object* v_r_2529_; 
v_res_2528_ = l_List_any___at___00List_or_spec__0(v_x_2527_);
lean_dec(v_x_2527_);
v_r_2529_ = lean_box(v_res_2528_);
return v_r_2529_;
}
}
LEAN_EXPORT uint8_t l_List_or(lean_object* v_bs_2530_){
_start:
{
uint8_t v___x_2531_; 
v___x_2531_ = l_List_any___at___00List_or_spec__0(v_bs_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_List_or___boxed(lean_object* v_bs_2532_){
_start:
{
uint8_t v_res_2533_; lean_object* v_r_2534_; 
v_res_2533_ = l_List_or(v_bs_2532_);
lean_dec(v_bs_2532_);
v_r_2534_ = lean_box(v_res_2533_);
return v_r_2534_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00List_and_spec__0(lean_object* v_x_2535_){
_start:
{
if (lean_obj_tag(v_x_2535_) == 0)
{
uint8_t v___x_2536_; 
v___x_2536_ = 1;
return v___x_2536_;
}
else
{
lean_object* v_head_2537_; uint8_t v___x_2538_; 
v_head_2537_ = lean_ctor_get(v_x_2535_, 0);
v___x_2538_ = lean_unbox(v_head_2537_);
if (v___x_2538_ == 0)
{
uint8_t v___x_2539_; 
v___x_2539_ = lean_unbox(v_head_2537_);
return v___x_2539_;
}
else
{
lean_object* v_tail_2540_; 
v_tail_2540_ = lean_ctor_get(v_x_2535_, 1);
v_x_2535_ = v_tail_2540_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00List_and_spec__0___boxed(lean_object* v_x_2542_){
_start:
{
uint8_t v_res_2543_; lean_object* v_r_2544_; 
v_res_2543_ = l_List_all___at___00List_and_spec__0(v_x_2542_);
lean_dec(v_x_2542_);
v_r_2544_ = lean_box(v_res_2543_);
return v_r_2544_;
}
}
LEAN_EXPORT uint8_t l_List_and(lean_object* v_bs_2545_){
_start:
{
uint8_t v___x_2546_; 
v___x_2546_ = l_List_all___at___00List_and_spec__0(v_bs_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_List_and___boxed(lean_object* v_bs_2547_){
_start:
{
uint8_t v_res_2548_; lean_object* v_r_2549_; 
v_res_2548_ = l_List_and(v_bs_2547_);
lean_dec(v_bs_2547_);
v_r_2549_ = lean_box(v_res_2548_);
return v_r_2549_;
}
}
LEAN_EXPORT lean_object* l_List_zipWith___redArg(lean_object* v_f_2550_, lean_object* v_x_2551_, lean_object* v_x_2552_){
_start:
{
if (lean_obj_tag(v_x_2551_) == 0)
{
lean_object* v___x_2553_; 
lean_dec(v_x_2552_);
lean_dec(v_f_2550_);
v___x_2553_ = lean_box(0);
return v___x_2553_;
}
else
{
if (lean_obj_tag(v_x_2552_) == 0)
{
lean_object* v___x_2554_; 
lean_dec_ref_known(v_x_2551_, 2);
lean_dec(v_f_2550_);
v___x_2554_ = lean_box(0);
return v___x_2554_;
}
else
{
lean_object* v_head_2555_; lean_object* v_tail_2556_; lean_object* v_head_2557_; lean_object* v_tail_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2567_; 
v_head_2555_ = lean_ctor_get(v_x_2551_, 0);
lean_inc(v_head_2555_);
v_tail_2556_ = lean_ctor_get(v_x_2551_, 1);
lean_inc(v_tail_2556_);
lean_dec_ref_known(v_x_2551_, 2);
v_head_2557_ = lean_ctor_get(v_x_2552_, 0);
v_tail_2558_ = lean_ctor_get(v_x_2552_, 1);
v_isSharedCheck_2567_ = !lean_is_exclusive(v_x_2552_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2560_ = v_x_2552_;
v_isShared_2561_ = v_isSharedCheck_2567_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_tail_2558_);
lean_inc(v_head_2557_);
lean_dec(v_x_2552_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2567_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2565_; 
lean_inc(v_f_2550_);
v___x_2562_ = lean_apply_2(v_f_2550_, v_head_2555_, v_head_2557_);
v___x_2563_ = l_List_zipWith___redArg(v_f_2550_, v_tail_2556_, v_tail_2558_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 1, v___x_2563_);
lean_ctor_set(v___x_2560_, 0, v___x_2562_);
v___x_2565_ = v___x_2560_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v___x_2562_);
lean_ctor_set(v_reuseFailAlloc_2566_, 1, v___x_2563_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWith(lean_object* v_00_u03b1_2568_, lean_object* v_00_u03b2_2569_, lean_object* v_00_u03b3_2570_, lean_object* v_f_2571_, lean_object* v_x_2572_, lean_object* v_x_2573_){
_start:
{
lean_object* v___x_2574_; 
v___x_2574_ = l_List_zipWith___redArg(v_f_2571_, v_x_2572_, v_x_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_zipWith_match__1_splitter___redArg(lean_object* v_x_2575_, lean_object* v_x_2576_, lean_object* v_h__1_2577_, lean_object* v_h__2_2578_){
_start:
{
if (lean_obj_tag(v_x_2575_) == 0)
{
lean_object* v___x_2579_; 
lean_dec(v_h__1_2577_);
v___x_2579_ = lean_apply_3(v_h__2_2578_, v_x_2575_, v_x_2576_, lean_box(0));
return v___x_2579_;
}
else
{
if (lean_obj_tag(v_x_2576_) == 0)
{
lean_object* v___x_2580_; 
lean_dec(v_h__1_2577_);
v___x_2580_ = lean_apply_3(v_h__2_2578_, v_x_2575_, v_x_2576_, lean_box(0));
return v___x_2580_;
}
else
{
lean_object* v_head_2581_; lean_object* v_tail_2582_; lean_object* v_head_2583_; lean_object* v_tail_2584_; lean_object* v___x_2585_; 
lean_dec(v_h__2_2578_);
v_head_2581_ = lean_ctor_get(v_x_2575_, 0);
lean_inc(v_head_2581_);
v_tail_2582_ = lean_ctor_get(v_x_2575_, 1);
lean_inc(v_tail_2582_);
lean_dec_ref_known(v_x_2575_, 2);
v_head_2583_ = lean_ctor_get(v_x_2576_, 0);
lean_inc(v_head_2583_);
v_tail_2584_ = lean_ctor_get(v_x_2576_, 1);
lean_inc(v_tail_2584_);
lean_dec_ref_known(v_x_2576_, 2);
v___x_2585_ = lean_apply_4(v_h__1_2577_, v_head_2581_, v_tail_2582_, v_head_2583_, v_tail_2584_);
return v___x_2585_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_zipWith_match__1_splitter(lean_object* v_00_u03b1_2586_, lean_object* v_00_u03b2_2587_, lean_object* v_motive_2588_, lean_object* v_x_2589_, lean_object* v_x_2590_, lean_object* v_h__1_2591_, lean_object* v_h__2_2592_){
_start:
{
if (lean_obj_tag(v_x_2589_) == 0)
{
lean_object* v___x_2593_; 
lean_dec(v_h__1_2591_);
v___x_2593_ = lean_apply_3(v_h__2_2592_, v_x_2589_, v_x_2590_, lean_box(0));
return v___x_2593_;
}
else
{
if (lean_obj_tag(v_x_2590_) == 0)
{
lean_object* v___x_2594_; 
lean_dec(v_h__1_2591_);
v___x_2594_ = lean_apply_3(v_h__2_2592_, v_x_2589_, v_x_2590_, lean_box(0));
return v___x_2594_;
}
else
{
lean_object* v_head_2595_; lean_object* v_tail_2596_; lean_object* v_head_2597_; lean_object* v_tail_2598_; lean_object* v___x_2599_; 
lean_dec(v_h__2_2592_);
v_head_2595_ = lean_ctor_get(v_x_2589_, 0);
lean_inc(v_head_2595_);
v_tail_2596_ = lean_ctor_get(v_x_2589_, 1);
lean_inc(v_tail_2596_);
lean_dec_ref_known(v_x_2589_, 2);
v_head_2597_ = lean_ctor_get(v_x_2590_, 0);
lean_inc(v_head_2597_);
v_tail_2598_ = lean_ctor_get(v_x_2590_, 1);
lean_inc(v_tail_2598_);
lean_dec_ref_known(v_x_2590_, 2);
v___x_2599_ = lean_apply_4(v_h__1_2591_, v_head_2595_, v_tail_2596_, v_head_2597_, v_tail_2598_);
return v___x_2599_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object* v_x_2600_, lean_object* v_x_2601_){
_start:
{
if (lean_obj_tag(v_x_2600_) == 0)
{
lean_object* v___x_2602_; 
lean_dec(v_x_2601_);
v___x_2602_ = lean_box(0);
return v___x_2602_;
}
else
{
if (lean_obj_tag(v_x_2601_) == 0)
{
lean_object* v___x_2603_; 
lean_dec_ref_known(v_x_2600_, 2);
v___x_2603_ = lean_box(0);
return v___x_2603_;
}
else
{
lean_object* v_head_2604_; lean_object* v_tail_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2622_; 
v_head_2604_ = lean_ctor_get(v_x_2600_, 0);
v_tail_2605_ = lean_ctor_get(v_x_2600_, 1);
v_isSharedCheck_2622_ = !lean_is_exclusive(v_x_2600_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2607_ = v_x_2600_;
v_isShared_2608_ = v_isSharedCheck_2622_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_tail_2605_);
lean_inc(v_head_2604_);
lean_dec(v_x_2600_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2622_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v_head_2609_; lean_object* v_tail_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2621_; 
v_head_2609_ = lean_ctor_get(v_x_2601_, 0);
v_tail_2610_ = lean_ctor_get(v_x_2601_, 1);
v_isSharedCheck_2621_ = !lean_is_exclusive(v_x_2601_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2612_ = v_x_2601_;
v_isShared_2613_ = v_isSharedCheck_2621_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_tail_2610_);
lean_inc(v_head_2609_);
lean_dec(v_x_2601_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2621_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v___x_2615_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 0);
lean_ctor_set(v___x_2607_, 1, v_head_2609_);
v___x_2615_ = v___x_2607_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_head_2604_);
lean_ctor_set(v_reuseFailAlloc_2620_, 1, v_head_2609_);
v___x_2615_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
lean_object* v___x_2616_; lean_object* v___x_2618_; 
v___x_2616_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_tail_2605_, v_tail_2610_);
if (v_isShared_2613_ == 0)
{
lean_ctor_set(v___x_2612_, 1, v___x_2616_);
lean_ctor_set(v___x_2612_, 0, v___x_2615_);
v___x_2618_ = v___x_2612_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v___x_2615_);
lean_ctor_set(v_reuseFailAlloc_2619_, 1, v___x_2616_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zip___redArg(lean_object* v_xs_2623_, lean_object* v_ys_2624_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_xs_2623_, v_ys_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_List_zip(lean_object* v_00_u03b1_2626_, lean_object* v_00_u03b2_2627_, lean_object* v_xs_2628_, lean_object* v_ys_2629_){
_start:
{
lean_object* v___x_2630_; 
v___x_2630_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_xs_2628_, v_ys_2629_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object* v_00_u03b1_2631_, lean_object* v_00_u03b2_2632_, lean_object* v_x_2633_, lean_object* v_x_2634_){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_x_2633_, v_x_2634_);
return v___x_2635_;
}
}
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg___lam__0(lean_object* v_f_2636_, lean_object* v_b_2637_){
_start:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2638_ = lean_box(0);
v___x_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2639_, 0, v_b_2637_);
v___x_2640_ = lean_apply_2(v_f_2636_, v___x_2638_, v___x_2639_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg___lam__1(lean_object* v_f_2641_, lean_object* v_a_2642_){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2643_, 0, v_a_2642_);
v___x_2644_ = lean_box(0);
v___x_2645_ = lean_apply_2(v_f_2641_, v___x_2643_, v___x_2644_);
return v___x_2645_;
}
}
LEAN_EXPORT lean_object* l_List_zipWithAll___redArg(lean_object* v_f_2646_, lean_object* v_x_2647_, lean_object* v_x_2648_){
_start:
{
if (lean_obj_tag(v_x_2647_) == 0)
{
lean_object* v___f_2649_; lean_object* v___x_2650_; 
v___f_2649_ = lean_alloc_closure((void*)(l_List_zipWithAll___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2649_, 0, v_f_2646_);
v___x_2650_ = l_List_map___redArg(v___f_2649_, v_x_2648_);
return v___x_2650_;
}
else
{
if (lean_obj_tag(v_x_2648_) == 0)
{
lean_object* v___f_2651_; lean_object* v___x_2652_; 
v___f_2651_ = lean_alloc_closure((void*)(l_List_zipWithAll___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2651_, 0, v_f_2646_);
v___x_2652_ = l_List_map___redArg(v___f_2651_, v_x_2647_);
return v___x_2652_;
}
else
{
lean_object* v_head_2653_; lean_object* v_tail_2654_; lean_object* v_head_2655_; lean_object* v_tail_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2667_; 
v_head_2653_ = lean_ctor_get(v_x_2647_, 0);
lean_inc(v_head_2653_);
v_tail_2654_ = lean_ctor_get(v_x_2647_, 1);
lean_inc(v_tail_2654_);
lean_dec_ref_known(v_x_2647_, 2);
v_head_2655_ = lean_ctor_get(v_x_2648_, 0);
v_tail_2656_ = lean_ctor_get(v_x_2648_, 1);
v_isSharedCheck_2667_ = !lean_is_exclusive(v_x_2648_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2658_ = v_x_2648_;
v_isShared_2659_ = v_isSharedCheck_2667_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_tail_2656_);
lean_inc(v_head_2655_);
lean_dec(v_x_2648_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2667_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2665_; 
v___x_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2660_, 0, v_head_2653_);
v___x_2661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2661_, 0, v_head_2655_);
lean_inc(v_f_2646_);
v___x_2662_ = lean_apply_2(v_f_2646_, v___x_2660_, v___x_2661_);
v___x_2663_ = l_List_zipWithAll___redArg(v_f_2646_, v_tail_2654_, v_tail_2656_);
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 1, v___x_2663_);
lean_ctor_set(v___x_2658_, 0, v___x_2662_);
v___x_2665_ = v___x_2658_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2662_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v___x_2663_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipWithAll(lean_object* v_00_u03b1_2668_, lean_object* v_00_u03b2_2669_, lean_object* v_00_u03b3_2670_, lean_object* v_f_2671_, lean_object* v_x_2672_, lean_object* v_x_2673_){
_start:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_List_zipWithAll___redArg(v_f_2671_, v_x_2672_, v_x_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_List_unzip___redArg(lean_object* v_x_2675_){
_start:
{
if (lean_obj_tag(v_x_2675_) == 0)
{
lean_object* v___x_2676_; 
v___x_2676_ = ((lean_object*)(l_List_partition___redArg___closed__0));
return v___x_2676_;
}
else
{
lean_object* v_head_2677_; lean_object* v_tail_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2704_; 
v_head_2677_ = lean_ctor_get(v_x_2675_, 0);
v_tail_2678_ = lean_ctor_get(v_x_2675_, 1);
v_isSharedCheck_2704_ = !lean_is_exclusive(v_x_2675_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2680_ = v_x_2675_;
v_isShared_2681_ = v_isSharedCheck_2704_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_tail_2678_);
lean_inc(v_head_2677_);
lean_dec(v_x_2675_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2704_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v_fst_2682_; lean_object* v_snd_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2703_; 
v_fst_2682_ = lean_ctor_get(v_head_2677_, 0);
v_snd_2683_ = lean_ctor_get(v_head_2677_, 1);
v_isSharedCheck_2703_ = !lean_is_exclusive(v_head_2677_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2685_ = v_head_2677_;
v_isShared_2686_ = v_isSharedCheck_2703_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_snd_2683_);
lean_inc(v_fst_2682_);
lean_dec(v_head_2677_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2703_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2687_; lean_object* v_fst_2688_; lean_object* v_snd_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2702_; 
v___x_2687_ = l_List_unzip___redArg(v_tail_2678_);
v_fst_2688_ = lean_ctor_get(v___x_2687_, 0);
v_snd_2689_ = lean_ctor_get(v___x_2687_, 1);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2691_ = v___x_2687_;
v_isShared_2692_ = v_isSharedCheck_2702_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_snd_2689_);
lean_inc(v_fst_2688_);
lean_dec(v___x_2687_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2702_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2681_ == 0)
{
lean_ctor_set(v___x_2680_, 1, v_fst_2688_);
lean_ctor_set(v___x_2680_, 0, v_fst_2682_);
v___x_2694_ = v___x_2680_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_fst_2682_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v_fst_2688_);
v___x_2694_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
lean_object* v___x_2696_; 
if (v_isShared_2686_ == 0)
{
lean_ctor_set_tag(v___x_2685_, 1);
lean_ctor_set(v___x_2685_, 1, v_snd_2689_);
lean_ctor_set(v___x_2685_, 0, v_snd_2683_);
v___x_2696_ = v___x_2685_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_snd_2683_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v_snd_2689_);
v___x_2696_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
lean_object* v___x_2698_; 
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 1, v___x_2696_);
lean_ctor_set(v___x_2691_, 0, v___x_2694_);
v___x_2698_ = v___x_2691_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2694_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v___x_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_unzip(lean_object* v_00_u03b1_2705_, lean_object* v_00_u03b2_2706_, lean_object* v_x_2707_){
_start:
{
lean_object* v___x_2708_; 
v___x_2708_ = l_List_unzip___redArg(v_x_2707_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_List_sum___redArg___lam__0(lean_object* v_inst_2709_, lean_object* v_x1_2710_, lean_object* v_x2_2711_){
_start:
{
lean_object* v___x_2712_; 
v___x_2712_ = lean_apply_2(v_inst_2709_, v_x1_2710_, v_x2_2711_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_List_sum___redArg(lean_object* v_inst_2713_, lean_object* v_inst_2714_, lean_object* v_l_2715_){
_start:
{
lean_object* v___f_2716_; lean_object* v___x_2717_; 
v___f_2716_ = lean_alloc_closure((void*)(l_List_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2716_, 0, v_inst_2713_);
v___x_2717_ = l_List_foldr___redArg(v___f_2716_, v_inst_2714_, v_l_2715_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_List_sum___redArg___boxed(lean_object* v_inst_2718_, lean_object* v_inst_2719_, lean_object* v_l_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_List_sum___redArg(v_inst_2718_, v_inst_2719_, v_l_2720_);
lean_dec(v_inst_2719_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l_List_sum(lean_object* v_00_u03b1_2722_, lean_object* v_inst_2723_, lean_object* v_inst_2724_, lean_object* v_l_2725_){
_start:
{
lean_object* v___x_2726_; 
v___x_2726_ = l_List_sum___redArg(v_inst_2723_, v_inst_2724_, v_l_2725_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_List_sum___boxed(lean_object* v_00_u03b1_2727_, lean_object* v_inst_2728_, lean_object* v_inst_2729_, lean_object* v_l_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_List_sum(v_00_u03b1_2727_, v_inst_2728_, v_inst_2729_, v_l_2730_);
lean_dec(v_inst_2729_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_List_prod___redArg(lean_object* v_inst_2732_, lean_object* v_inst_2733_, lean_object* v_l_2734_){
_start:
{
lean_object* v___f_2735_; lean_object* v___x_2736_; 
v___f_2735_ = lean_alloc_closure((void*)(l_List_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2735_, 0, v_inst_2732_);
v___x_2736_ = l_List_foldr___redArg(v___f_2735_, v_inst_2733_, v_l_2734_);
return v___x_2736_;
}
}
LEAN_EXPORT lean_object* l_List_prod___redArg___boxed(lean_object* v_inst_2737_, lean_object* v_inst_2738_, lean_object* v_l_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_List_prod___redArg(v_inst_2737_, v_inst_2738_, v_l_2739_);
lean_dec(v_inst_2738_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_List_prod(lean_object* v_00_u03b1_2741_, lean_object* v_inst_2742_, lean_object* v_inst_2743_, lean_object* v_l_2744_){
_start:
{
lean_object* v___x_2745_; 
v___x_2745_ = l_List_prod___redArg(v_inst_2742_, v_inst_2743_, v_l_2744_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l_List_prod___boxed(lean_object* v_00_u03b1_2746_, lean_object* v_inst_2747_, lean_object* v_inst_2748_, lean_object* v_l_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_List_prod(v_00_u03b1_2746_, v_inst_2747_, v_inst_2748_, v_l_2749_);
lean_dec(v_inst_2748_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_List_range_loop(lean_object* v_a_2751_, lean_object* v_a_2752_){
_start:
{
lean_object* v_zero_2753_; uint8_t v_isZero_2754_; 
v_zero_2753_ = lean_unsigned_to_nat(0u);
v_isZero_2754_ = lean_nat_dec_eq(v_a_2751_, v_zero_2753_);
if (v_isZero_2754_ == 1)
{
lean_dec(v_a_2751_);
return v_a_2752_;
}
else
{
lean_object* v_one_2755_; lean_object* v_n_2756_; lean_object* v___x_2757_; 
v_one_2755_ = lean_unsigned_to_nat(1u);
v_n_2756_ = lean_nat_sub(v_a_2751_, v_one_2755_);
lean_dec(v_a_2751_);
lean_inc(v_n_2756_);
v___x_2757_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2757_, 0, v_n_2756_);
lean_ctor_set(v___x_2757_, 1, v_a_2752_);
v_a_2751_ = v_n_2756_;
v_a_2752_ = v___x_2757_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_range(lean_object* v_n_2759_){
_start:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = lean_box(0);
v___x_2761_ = l_List_range_loop(v_n_2759_, v___x_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_List_range_x27(lean_object* v_x_2762_, lean_object* v_x_2763_, lean_object* v_x_2764_){
_start:
{
lean_object* v_zero_2765_; uint8_t v_isZero_2766_; 
v_zero_2765_ = lean_unsigned_to_nat(0u);
v_isZero_2766_ = lean_nat_dec_eq(v_x_2763_, v_zero_2765_);
if (v_isZero_2766_ == 1)
{
lean_object* v___x_2767_; 
lean_dec(v_x_2762_);
v___x_2767_ = lean_box(0);
return v___x_2767_;
}
else
{
lean_object* v_one_2768_; lean_object* v_n_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v_one_2768_ = lean_unsigned_to_nat(1u);
v_n_2769_ = lean_nat_sub(v_x_2763_, v_one_2768_);
v___x_2770_ = lean_nat_add(v_x_2762_, v_x_2764_);
v___x_2771_ = l_List_range_x27(v___x_2770_, v_n_2769_, v_x_2764_);
lean_dec(v_n_2769_);
v___x_2772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2772_, 0, v_x_2762_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
return v___x_2772_;
}
}
}
LEAN_EXPORT lean_object* l_List_range_x27___boxed(lean_object* v_x_2773_, lean_object* v_x_2774_, lean_object* v_x_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_List_range_x27(v_x_2773_, v_x_2774_, v_x_2775_);
lean_dec(v_x_2775_);
lean_dec(v_x_2774_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_List_zipIdx___redArg(lean_object* v_x_2777_, lean_object* v_x_2778_){
_start:
{
if (lean_obj_tag(v_x_2777_) == 0)
{
lean_object* v___x_2779_; 
lean_dec(v_x_2778_);
v___x_2779_ = lean_box(0);
return v___x_2779_;
}
else
{
lean_object* v_head_2780_; lean_object* v_tail_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2792_; 
v_head_2780_ = lean_ctor_get(v_x_2777_, 0);
v_tail_2781_ = lean_ctor_get(v_x_2777_, 1);
v_isSharedCheck_2792_ = !lean_is_exclusive(v_x_2777_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2783_ = v_x_2777_;
v_isShared_2784_ = v_isSharedCheck_2792_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_tail_2781_);
lean_inc(v_head_2780_);
lean_dec(v_x_2777_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2792_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2790_; 
lean_inc(v_x_2778_);
v___x_2785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2785_, 0, v_head_2780_);
lean_ctor_set(v___x_2785_, 1, v_x_2778_);
v___x_2786_ = lean_unsigned_to_nat(1u);
v___x_2787_ = lean_nat_add(v_x_2778_, v___x_2786_);
lean_dec(v_x_2778_);
v___x_2788_ = l_List_zipIdx___redArg(v_tail_2781_, v___x_2787_);
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 1, v___x_2788_);
lean_ctor_set(v___x_2783_, 0, v___x_2785_);
v___x_2790_ = v___x_2783_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2785_);
lean_ctor_set(v_reuseFailAlloc_2791_, 1, v___x_2788_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_zipIdx(lean_object* v_00_u03b1_2793_, lean_object* v_x_2794_, lean_object* v_x_2795_){
_start:
{
lean_object* v___x_2796_; 
v___x_2796_ = l_List_zipIdx___redArg(v_x_2794_, v_x_2795_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_List_min_x3f___redArg(lean_object* v_inst_2797_, lean_object* v_x_2798_){
_start:
{
if (lean_obj_tag(v_x_2798_) == 0)
{
lean_object* v___x_2799_; 
lean_dec(v_inst_2797_);
v___x_2799_ = lean_box(0);
return v___x_2799_;
}
else
{
lean_object* v_head_2800_; lean_object* v_tail_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v_head_2800_ = lean_ctor_get(v_x_2798_, 0);
lean_inc(v_head_2800_);
v_tail_2801_ = lean_ctor_get(v_x_2798_, 1);
lean_inc(v_tail_2801_);
lean_dec_ref_known(v_x_2798_, 2);
v___x_2802_ = l_List_foldl___redArg(v_inst_2797_, v_head_2800_, v_tail_2801_);
v___x_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2802_);
return v___x_2803_;
}
}
}
LEAN_EXPORT lean_object* l_List_min_x3f(lean_object* v_00_u03b1_2804_, lean_object* v_inst_2805_, lean_object* v_x_2806_){
_start:
{
lean_object* v___x_2807_; 
v___x_2807_ = l_List_min_x3f___redArg(v_inst_2805_, v_x_2806_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_List_min___redArg(lean_object* v_inst_2808_, lean_object* v_x_2809_){
_start:
{
lean_object* v_head_2810_; lean_object* v_tail_2811_; lean_object* v___x_2812_; 
v_head_2810_ = lean_ctor_get(v_x_2809_, 0);
lean_inc(v_head_2810_);
v_tail_2811_ = lean_ctor_get(v_x_2809_, 1);
lean_inc(v_tail_2811_);
lean_dec(v_x_2809_);
v___x_2812_ = l_List_foldl___redArg(v_inst_2808_, v_head_2810_, v_tail_2811_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l_List_min(lean_object* v_00_u03b1_2813_, lean_object* v_inst_2814_, lean_object* v_x_2815_, lean_object* v_x_2816_){
_start:
{
lean_object* v___x_2817_; 
v___x_2817_ = l_List_min___redArg(v_inst_2814_, v_x_2815_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l_List_max_x3f___redArg(lean_object* v_inst_2818_, lean_object* v_x_2819_){
_start:
{
if (lean_obj_tag(v_x_2819_) == 0)
{
lean_object* v___x_2820_; 
lean_dec(v_inst_2818_);
v___x_2820_ = lean_box(0);
return v___x_2820_;
}
else
{
lean_object* v_head_2821_; lean_object* v_tail_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v_head_2821_ = lean_ctor_get(v_x_2819_, 0);
lean_inc(v_head_2821_);
v_tail_2822_ = lean_ctor_get(v_x_2819_, 1);
lean_inc(v_tail_2822_);
lean_dec_ref_known(v_x_2819_, 2);
v___x_2823_ = l_List_foldl___redArg(v_inst_2818_, v_head_2821_, v_tail_2822_);
v___x_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2823_);
return v___x_2824_;
}
}
}
LEAN_EXPORT lean_object* l_List_max_x3f(lean_object* v_00_u03b1_2825_, lean_object* v_inst_2826_, lean_object* v_x_2827_){
_start:
{
lean_object* v___x_2828_; 
v___x_2828_ = l_List_max_x3f___redArg(v_inst_2826_, v_x_2827_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_List_max___redArg(lean_object* v_inst_2829_, lean_object* v_x_2830_){
_start:
{
lean_object* v_head_2831_; lean_object* v_tail_2832_; lean_object* v___x_2833_; 
v_head_2831_ = lean_ctor_get(v_x_2830_, 0);
lean_inc(v_head_2831_);
v_tail_2832_ = lean_ctor_get(v_x_2830_, 1);
lean_inc(v_tail_2832_);
lean_dec(v_x_2830_);
v___x_2833_ = l_List_foldl___redArg(v_inst_2829_, v_head_2831_, v_tail_2832_);
return v___x_2833_;
}
}
LEAN_EXPORT lean_object* l_List_max(lean_object* v_00_u03b1_2834_, lean_object* v_inst_2835_, lean_object* v_x_2836_, lean_object* v_x_2837_){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = l_List_max___redArg(v_inst_2835_, v_x_2836_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_List_intersperse___redArg(lean_object* v_sep_2839_, lean_object* v_x_2840_){
_start:
{
if (lean_obj_tag(v_x_2840_) == 0)
{
lean_dec(v_sep_2839_);
return v_x_2840_;
}
else
{
lean_object* v_tail_2841_; 
v_tail_2841_ = lean_ctor_get(v_x_2840_, 1);
if (lean_obj_tag(v_tail_2841_) == 0)
{
lean_dec(v_sep_2839_);
return v_x_2840_;
}
else
{
lean_object* v_head_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2851_; 
lean_inc_ref(v_tail_2841_);
v_head_2842_ = lean_ctor_get(v_x_2840_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v_x_2840_);
if (v_isSharedCheck_2851_ == 0)
{
lean_object* v_unused_2852_; 
v_unused_2852_ = lean_ctor_get(v_x_2840_, 1);
lean_dec(v_unused_2852_);
v___x_2844_ = v_x_2840_;
v_isShared_2845_ = v_isSharedCheck_2851_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_head_2842_);
lean_dec(v_x_2840_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2851_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2846_; lean_object* v___x_2848_; 
lean_inc(v_sep_2839_);
v___x_2846_ = l_List_intersperse___redArg(v_sep_2839_, v_tail_2841_);
if (v_isShared_2845_ == 0)
{
lean_ctor_set(v___x_2844_, 1, v___x_2846_);
lean_ctor_set(v___x_2844_, 0, v_sep_2839_);
v___x_2848_ = v___x_2844_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_sep_2839_);
lean_ctor_set(v_reuseFailAlloc_2850_, 1, v___x_2846_);
v___x_2848_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2849_, 0, v_head_2842_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
return v___x_2849_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_intersperse(lean_object* v_00_u03b1_2853_, lean_object* v_sep_2854_, lean_object* v_x_2855_){
_start:
{
lean_object* v___x_2856_; 
v___x_2856_ = l_List_intersperse___redArg(v_sep_2854_, v_x_2855_);
return v___x_2856_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(lean_object* v___x_2857_, lean_object* v_x_2858_){
_start:
{
if (lean_obj_tag(v_x_2858_) == 0)
{
uint8_t v___x_2859_; 
lean_dec_ref(v___x_2857_);
v___x_2859_ = 0;
return v___x_2859_;
}
else
{
lean_object* v_head_2860_; lean_object* v_tail_2861_; lean_object* v___x_2862_; uint8_t v___x_2863_; 
v_head_2860_ = lean_ctor_get(v_x_2858_, 0);
lean_inc(v_head_2860_);
v_tail_2861_ = lean_ctor_get(v_x_2858_, 1);
lean_inc(v_tail_2861_);
lean_dec_ref_known(v_x_2858_, 2);
lean_inc_ref(v___x_2857_);
v___x_2862_ = lean_apply_1(v___x_2857_, v_head_2860_);
v___x_2863_ = lean_unbox(v___x_2862_);
if (v___x_2863_ == 0)
{
v_x_2858_ = v_tail_2861_;
goto _start;
}
else
{
uint8_t v___x_2865_; 
lean_dec(v_tail_2861_);
lean_dec_ref(v___x_2857_);
v___x_2865_ = lean_unbox(v___x_2862_);
return v___x_2865_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg___boxed(lean_object* v___x_2866_, lean_object* v_x_2867_){
_start:
{
uint8_t v_res_2868_; lean_object* v_r_2869_; 
v_res_2868_ = l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(v___x_2866_, v_x_2867_);
v_r_2869_ = lean_box(v_res_2868_);
return v_r_2869_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDupsBy_loop___redArg(lean_object* v_r_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_){
_start:
{
if (lean_obj_tag(v_a_2871_) == 0)
{
lean_object* v___x_2873_; 
lean_dec_ref(v_r_2870_);
v___x_2873_ = l_List_reverse___redArg(v_a_2872_);
return v___x_2873_;
}
else
{
lean_object* v_head_2874_; lean_object* v_tail_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2886_; 
v_head_2874_ = lean_ctor_get(v_a_2871_, 0);
v_tail_2875_ = lean_ctor_get(v_a_2871_, 1);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_a_2871_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2877_ = v_a_2871_;
v_isShared_2878_ = v_isSharedCheck_2886_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_tail_2875_);
lean_inc(v_head_2874_);
lean_dec(v_a_2871_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2886_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2879_; uint8_t v___x_2880_; 
lean_inc_ref(v_r_2870_);
lean_inc(v_head_2874_);
v___x_2879_ = lean_apply_1(v_r_2870_, v_head_2874_);
lean_inc(v_a_2872_);
v___x_2880_ = l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(v___x_2879_, v_a_2872_);
if (v___x_2880_ == 0)
{
lean_object* v___x_2882_; 
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 1, v_a_2872_);
v___x_2882_ = v___x_2877_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_head_2874_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_a_2872_);
v___x_2882_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
v_a_2871_ = v_tail_2875_;
v_a_2872_ = v___x_2882_;
goto _start;
}
}
else
{
lean_del_object(v___x_2877_);
lean_dec(v_head_2874_);
v_a_2871_ = v_tail_2875_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseDupsBy_loop(lean_object* v_00_u03b1_2887_, lean_object* v_r_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_){
_start:
{
lean_object* v___x_2891_; 
v___x_2891_ = l_List_eraseDupsBy_loop___redArg(v_r_2888_, v_a_2889_, v_a_2890_);
return v___x_2891_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00List_eraseDupsBy_loop_spec__0(lean_object* v_00_u03b1_2892_, lean_object* v___x_2893_, lean_object* v_x_2894_){
_start:
{
uint8_t v___x_2895_; 
v___x_2895_ = l_List_any___at___00List_eraseDupsBy_loop_spec__0___redArg(v___x_2893_, v_x_2894_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_List_any___at___00List_eraseDupsBy_loop_spec__0___boxed(lean_object* v_00_u03b1_2896_, lean_object* v___x_2897_, lean_object* v_x_2898_){
_start:
{
uint8_t v_res_2899_; lean_object* v_r_2900_; 
v_res_2899_ = l_List_any___at___00List_eraseDupsBy_loop_spec__0(v_00_u03b1_2896_, v___x_2897_, v_x_2898_);
v_r_2900_ = lean_box(v_res_2899_);
return v_r_2900_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDupsBy___redArg(lean_object* v_r_2901_, lean_object* v_as_2902_){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2903_ = lean_box(0);
v___x_2904_ = l_List_eraseDupsBy_loop___redArg(v_r_2901_, v_as_2902_, v___x_2903_);
return v___x_2904_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDupsBy(lean_object* v_00_u03b1_2905_, lean_object* v_r_2906_, lean_object* v_as_2907_){
_start:
{
lean_object* v___x_2908_; 
v___x_2908_ = l_List_eraseDupsBy___redArg(v_r_2906_, v_as_2907_);
return v___x_2908_;
}
}
LEAN_EXPORT uint8_t l_List_eraseDups___redArg___lam__0(lean_object* v_inst_2909_, lean_object* v_x1_2910_, lean_object* v_x2_2911_){
_start:
{
lean_object* v___x_2912_; uint8_t v___x_2913_; 
v___x_2912_ = lean_apply_2(v_inst_2909_, v_x1_2910_, v_x2_2911_);
v___x_2913_ = lean_unbox(v___x_2912_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___redArg___lam__0___boxed(lean_object* v_inst_2914_, lean_object* v_x1_2915_, lean_object* v_x2_2916_){
_start:
{
uint8_t v_res_2917_; lean_object* v_r_2918_; 
v_res_2917_ = l_List_eraseDups___redArg___lam__0(v_inst_2914_, v_x1_2915_, v_x2_2916_);
v_r_2918_ = lean_box(v_res_2917_);
return v_r_2918_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___redArg(lean_object* v_inst_2919_, lean_object* v_as_2920_){
_start:
{
lean_object* v___f_2921_; lean_object* v___x_2922_; 
v___f_2921_ = lean_alloc_closure((void*)(l_List_eraseDups___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2921_, 0, v_inst_2919_);
v___x_2922_ = l_List_eraseDupsBy___redArg(v___f_2921_, v_as_2920_);
return v___x_2922_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups(lean_object* v_00_u03b1_2923_, lean_object* v_inst_2924_, lean_object* v_as_2925_){
_start:
{
lean_object* v___x_2926_; 
v___x_2926_ = l_List_eraseDups___redArg(v_inst_2924_, v_as_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_List_eraseRepsBy_loop___redArg(lean_object* v_r_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_){
_start:
{
if (lean_obj_tag(v_a_2929_) == 0)
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
lean_dec_ref(v_r_2927_);
v___x_2931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2931_, 0, v_a_2928_);
lean_ctor_set(v___x_2931_, 1, v_a_2930_);
v___x_2932_ = l_List_reverse___redArg(v___x_2931_);
return v___x_2932_;
}
else
{
lean_object* v_head_2933_; lean_object* v_tail_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2945_; 
v_head_2933_ = lean_ctor_get(v_a_2929_, 0);
v_tail_2934_ = lean_ctor_get(v_a_2929_, 1);
v_isSharedCheck_2945_ = !lean_is_exclusive(v_a_2929_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2936_ = v_a_2929_;
v_isShared_2937_ = v_isSharedCheck_2945_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_tail_2934_);
lean_inc(v_head_2933_);
lean_dec(v_a_2929_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2945_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2938_; uint8_t v___x_2939_; 
lean_inc_ref(v_r_2927_);
lean_inc(v_head_2933_);
lean_inc(v_a_2928_);
v___x_2938_ = lean_apply_2(v_r_2927_, v_a_2928_, v_head_2933_);
v___x_2939_ = lean_unbox(v___x_2938_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2941_; 
if (v_isShared_2937_ == 0)
{
lean_ctor_set(v___x_2936_, 1, v_a_2930_);
lean_ctor_set(v___x_2936_, 0, v_a_2928_);
v___x_2941_ = v___x_2936_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2928_);
lean_ctor_set(v_reuseFailAlloc_2943_, 1, v_a_2930_);
v___x_2941_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
v_a_2928_ = v_head_2933_;
v_a_2929_ = v_tail_2934_;
v_a_2930_ = v___x_2941_;
goto _start;
}
}
else
{
lean_del_object(v___x_2936_);
lean_dec(v_head_2933_);
v_a_2929_ = v_tail_2934_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseRepsBy_loop(lean_object* v_00_u03b1_2946_, lean_object* v_r_2947_, lean_object* v_a_2948_, lean_object* v_a_2949_, lean_object* v_a_2950_){
_start:
{
lean_object* v___x_2951_; 
v___x_2951_ = l_List_eraseRepsBy_loop___redArg(v_r_2947_, v_a_2948_, v_a_2949_, v_a_2950_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_List_eraseRepsBy___redArg(lean_object* v_r_2952_, lean_object* v_x_2953_){
_start:
{
if (lean_obj_tag(v_x_2953_) == 0)
{
lean_dec_ref(v_r_2952_);
return v_x_2953_;
}
else
{
lean_object* v_head_2954_; lean_object* v_tail_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v_head_2954_ = lean_ctor_get(v_x_2953_, 0);
lean_inc(v_head_2954_);
v_tail_2955_ = lean_ctor_get(v_x_2953_, 1);
lean_inc(v_tail_2955_);
lean_dec_ref_known(v_x_2953_, 2);
v___x_2956_ = lean_box(0);
v___x_2957_ = l_List_eraseRepsBy_loop___redArg(v_r_2952_, v_head_2954_, v_tail_2955_, v___x_2956_);
return v___x_2957_;
}
}
}
LEAN_EXPORT lean_object* l_List_eraseRepsBy(lean_object* v_00_u03b1_2958_, lean_object* v_r_2959_, lean_object* v_x_2960_){
_start:
{
lean_object* v___x_2961_; 
v___x_2961_ = l_List_eraseRepsBy___redArg(v_r_2959_, v_x_2960_);
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l_List_eraseReps___redArg(lean_object* v_inst_2962_, lean_object* v_as_2963_){
_start:
{
lean_object* v___f_2964_; lean_object* v___x_2965_; 
v___f_2964_ = lean_alloc_closure((void*)(l_List_eraseDups___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2964_, 0, v_inst_2962_);
v___x_2965_ = l_List_eraseRepsBy___redArg(v___f_2964_, v_as_2963_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_List_eraseReps(lean_object* v_00_u03b1_2966_, lean_object* v_inst_2967_, lean_object* v_as_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_List_eraseReps___redArg(v_inst_2967_, v_as_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_List_span_loop___redArg(lean_object* v_p_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_){
_start:
{
if (lean_obj_tag(v_a_2971_) == 0)
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
lean_dec_ref(v_p_2970_);
v___x_2973_ = l_List_reverse___redArg(v_a_2972_);
v___x_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
lean_ctor_set(v___x_2974_, 1, v_a_2971_);
return v___x_2974_;
}
else
{
lean_object* v_head_2975_; lean_object* v_tail_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; 
v_head_2975_ = lean_ctor_get(v_a_2971_, 0);
v_tail_2976_ = lean_ctor_get(v_a_2971_, 1);
lean_inc_ref(v_p_2970_);
lean_inc(v_head_2975_);
v___x_2977_ = lean_apply_1(v_p_2970_, v_head_2975_);
v___x_2978_ = lean_unbox(v___x_2977_);
if (v___x_2978_ == 0)
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
lean_dec_ref(v_p_2970_);
v___x_2979_ = l_List_reverse___redArg(v_a_2972_);
v___x_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
lean_ctor_set(v___x_2980_, 1, v_a_2971_);
return v___x_2980_;
}
else
{
lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2988_; 
lean_inc(v_tail_2976_);
lean_inc(v_head_2975_);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_a_2971_);
if (v_isSharedCheck_2988_ == 0)
{
lean_object* v_unused_2989_; lean_object* v_unused_2990_; 
v_unused_2989_ = lean_ctor_get(v_a_2971_, 1);
lean_dec(v_unused_2989_);
v_unused_2990_ = lean_ctor_get(v_a_2971_, 0);
lean_dec(v_unused_2990_);
v___x_2982_ = v_a_2971_;
v_isShared_2983_ = v_isSharedCheck_2988_;
goto v_resetjp_2981_;
}
else
{
lean_dec(v_a_2971_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2988_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2985_; 
if (v_isShared_2983_ == 0)
{
lean_ctor_set(v___x_2982_, 1, v_a_2972_);
v___x_2985_ = v___x_2982_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_head_2975_);
lean_ctor_set(v_reuseFailAlloc_2987_, 1, v_a_2972_);
v___x_2985_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
v_a_2971_ = v_tail_2976_;
v_a_2972_ = v___x_2985_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_span_loop(lean_object* v_00_u03b1_2991_, lean_object* v_p_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_){
_start:
{
lean_object* v___x_2995_; 
v___x_2995_ = l_List_span_loop___redArg(v_p_2992_, v_a_2993_, v_a_2994_);
return v___x_2995_;
}
}
LEAN_EXPORT lean_object* l_List_span___redArg(lean_object* v_p_2996_, lean_object* v_as_2997_){
_start:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = lean_box(0);
v___x_2999_ = l_List_span_loop___redArg(v_p_2996_, v_as_2997_, v___x_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_List_span(lean_object* v_00_u03b1_3000_, lean_object* v_p_3001_, lean_object* v_as_3002_){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3003_ = lean_box(0);
v___x_3004_ = l_List_span_loop___redArg(v_p_3001_, v_as_3002_, v___x_3003_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l_List_splitBy_loop___redArg(lean_object* v_R_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_){
_start:
{
if (lean_obj_tag(v_a_3006_) == 0)
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
lean_dec_ref(v_R_3005_);
v___x_3010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3010_, 0, v_a_3007_);
lean_ctor_set(v___x_3010_, 1, v_a_3008_);
v___x_3011_ = l_List_reverse___redArg(v___x_3010_);
v___x_3012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3011_);
lean_ctor_set(v___x_3012_, 1, v_a_3009_);
v___x_3013_ = l_List_reverse___redArg(v___x_3012_);
return v___x_3013_;
}
else
{
lean_object* v_head_3014_; lean_object* v_tail_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3032_; 
v_head_3014_ = lean_ctor_get(v_a_3006_, 0);
v_tail_3015_ = lean_ctor_get(v_a_3006_, 1);
v_isSharedCheck_3032_ = !lean_is_exclusive(v_a_3006_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3017_ = v_a_3006_;
v_isShared_3018_ = v_isSharedCheck_3032_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_tail_3015_);
lean_inc(v_head_3014_);
lean_dec(v_a_3006_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3032_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3019_; uint8_t v___x_3020_; 
lean_inc_ref(v_R_3005_);
lean_inc(v_head_3014_);
lean_inc(v_a_3007_);
v___x_3019_ = lean_apply_2(v_R_3005_, v_a_3007_, v_head_3014_);
v___x_3020_ = lean_unbox(v___x_3019_);
if (v___x_3020_ == 0)
{
lean_object* v___x_3021_; lean_object* v___x_3023_; 
v___x_3021_ = lean_box(0);
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 1, v_a_3008_);
lean_ctor_set(v___x_3017_, 0, v_a_3007_);
v___x_3023_ = v___x_3017_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3007_);
lean_ctor_set(v_reuseFailAlloc_3027_, 1, v_a_3008_);
v___x_3023_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = l_List_reverse___redArg(v___x_3023_);
v___x_3025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
lean_ctor_set(v___x_3025_, 1, v_a_3009_);
v_a_3006_ = v_tail_3015_;
v_a_3007_ = v_head_3014_;
v_a_3008_ = v___x_3021_;
v_a_3009_ = v___x_3025_;
goto _start;
}
}
else
{
lean_object* v___x_3029_; 
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 1, v_a_3008_);
lean_ctor_set(v___x_3017_, 0, v_a_3007_);
v___x_3029_ = v___x_3017_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3007_);
lean_ctor_set(v_reuseFailAlloc_3031_, 1, v_a_3008_);
v___x_3029_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
v_a_3006_ = v_tail_3015_;
v_a_3007_ = v_head_3014_;
v_a_3008_ = v___x_3029_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_splitBy_loop(lean_object* v_00_u03b1_3033_, lean_object* v_R_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_){
_start:
{
lean_object* v___x_3039_; 
v___x_3039_ = l_List_splitBy_loop___redArg(v_R_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_List_splitBy___redArg(lean_object* v_R_3040_, lean_object* v_x_3041_){
_start:
{
if (lean_obj_tag(v_x_3041_) == 0)
{
lean_object* v___x_3042_; 
lean_dec_ref(v_R_3040_);
v___x_3042_ = lean_box(0);
return v___x_3042_;
}
else
{
lean_object* v_head_3043_; lean_object* v_tail_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v_head_3043_ = lean_ctor_get(v_x_3041_, 0);
lean_inc(v_head_3043_);
v_tail_3044_ = lean_ctor_get(v_x_3041_, 1);
lean_inc(v_tail_3044_);
lean_dec_ref_known(v_x_3041_, 2);
v___x_3045_ = lean_box(0);
v___x_3046_ = l_List_splitBy_loop___redArg(v_R_3040_, v_tail_3044_, v_head_3043_, v___x_3045_, v___x_3045_);
return v___x_3046_;
}
}
}
LEAN_EXPORT lean_object* l_List_splitBy(lean_object* v_00_u03b1_3047_, lean_object* v_R_3048_, lean_object* v_x_3049_){
_start:
{
lean_object* v___x_3050_; 
v___x_3050_ = l_List_splitBy___redArg(v_R_3048_, v_x_3049_);
return v___x_3050_;
}
}
LEAN_EXPORT uint8_t l_List_removeAll___redArg___lam__0(lean_object* v_inst_3051_, lean_object* v_ys_3052_, lean_object* v_x_3053_){
_start:
{
uint8_t v___x_3054_; 
v___x_3054_ = l_List_elem___redArg(v_inst_3051_, v_x_3053_, v_ys_3052_);
if (v___x_3054_ == 0)
{
uint8_t v___x_3055_; 
v___x_3055_ = 1;
return v___x_3055_;
}
else
{
uint8_t v___x_3056_; 
v___x_3056_ = 0;
return v___x_3056_;
}
}
}
LEAN_EXPORT lean_object* l_List_removeAll___redArg___lam__0___boxed(lean_object* v_inst_3057_, lean_object* v_ys_3058_, lean_object* v_x_3059_){
_start:
{
uint8_t v_res_3060_; lean_object* v_r_3061_; 
v_res_3060_ = l_List_removeAll___redArg___lam__0(v_inst_3057_, v_ys_3058_, v_x_3059_);
v_r_3061_ = lean_box(v_res_3060_);
return v_r_3061_;
}
}
LEAN_EXPORT lean_object* l_List_removeAll___redArg(lean_object* v_inst_3062_, lean_object* v_xs_3063_, lean_object* v_ys_3064_){
_start:
{
lean_object* v___f_3065_; lean_object* v___x_3066_; 
v___f_3065_ = lean_alloc_closure((void*)(l_List_removeAll___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3065_, 0, v_inst_3062_);
lean_closure_set(v___f_3065_, 1, v_ys_3064_);
v___x_3066_ = l_List_filter___redArg(v___f_3065_, v_xs_3063_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l_List_removeAll(lean_object* v_00_u03b1_3067_, lean_object* v_inst_3068_, lean_object* v_xs_3069_, lean_object* v_ys_3070_){
_start:
{
lean_object* v___x_3071_; 
v___x_3071_ = l_List_removeAll___redArg(v_inst_3068_, v_xs_3069_, v_ys_3070_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__instDecidableEqList_match__1_splitter___redArg(lean_object* v_ys_3072_, lean_object* v_h__1_3073_, lean_object* v_h__2_3074_){
_start:
{
if (lean_obj_tag(v_ys_3072_) == 0)
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
lean_dec(v_h__2_3074_);
v___x_3075_ = lean_box(0);
v___x_3076_ = lean_apply_1(v_h__1_3073_, v___x_3075_);
return v___x_3076_;
}
else
{
lean_object* v_head_3077_; lean_object* v_tail_3078_; lean_object* v___x_3079_; 
lean_dec(v_h__1_3073_);
v_head_3077_ = lean_ctor_get(v_ys_3072_, 0);
lean_inc(v_head_3077_);
v_tail_3078_ = lean_ctor_get(v_ys_3072_, 1);
lean_inc(v_tail_3078_);
lean_dec_ref_known(v_ys_3072_, 2);
v___x_3079_ = lean_apply_2(v_h__2_3074_, v_head_3077_, v_tail_3078_);
return v___x_3079_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__instDecidableEqList_match__1_splitter(lean_object* v_00_u03b1_3080_, lean_object* v_motive_3081_, lean_object* v_ys_3082_, lean_object* v_h__1_3083_, lean_object* v_h__2_3084_){
_start:
{
if (lean_obj_tag(v_ys_3082_) == 0)
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
lean_dec(v_h__2_3084_);
v___x_3085_ = lean_box(0);
v___x_3086_ = lean_apply_1(v_h__1_3083_, v___x_3085_);
return v___x_3086_;
}
else
{
lean_object* v_head_3087_; lean_object* v_tail_3088_; lean_object* v___x_3089_; 
lean_dec(v_h__1_3083_);
v_head_3087_ = lean_ctor_get(v_ys_3082_, 0);
lean_inc(v_head_3087_);
v_tail_3088_ = lean_ctor_get(v_ys_3082_, 1);
lean_inc(v_tail_3088_);
lean_dec_ref_known(v_ys_3082_, 2);
v___x_3089_ = lean_apply_2(v_h__2_3084_, v_head_3087_, v_tail_3088_);
return v___x_3089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_lengthTRAux_match__1_splitter___redArg(lean_object* v_x_3090_, lean_object* v_x_3091_, lean_object* v_h__1_3092_, lean_object* v_h__2_3093_){
_start:
{
if (lean_obj_tag(v_x_3090_) == 0)
{
lean_object* v___x_3094_; 
lean_dec(v_h__2_3093_);
v___x_3094_ = lean_apply_1(v_h__1_3092_, v_x_3091_);
return v___x_3094_;
}
else
{
lean_object* v_head_3095_; lean_object* v_tail_3096_; lean_object* v___x_3097_; 
lean_dec(v_h__1_3092_);
v_head_3095_ = lean_ctor_get(v_x_3090_, 0);
lean_inc(v_head_3095_);
v_tail_3096_ = lean_ctor_get(v_x_3090_, 1);
lean_inc(v_tail_3096_);
lean_dec_ref_known(v_x_3090_, 2);
v___x_3097_ = lean_apply_3(v_h__2_3093_, v_head_3095_, v_tail_3096_, v_x_3091_);
return v___x_3097_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_lengthTRAux_match__1_splitter(lean_object* v_00_u03b1_3098_, lean_object* v_motive_3099_, lean_object* v_x_3100_, lean_object* v_x_3101_, lean_object* v_h__1_3102_, lean_object* v_h__2_3103_){
_start:
{
if (lean_obj_tag(v_x_3100_) == 0)
{
lean_object* v___x_3104_; 
lean_dec(v_h__2_3103_);
v___x_3104_ = lean_apply_1(v_h__1_3102_, v_x_3101_);
return v___x_3104_;
}
else
{
lean_object* v_head_3105_; lean_object* v_tail_3106_; lean_object* v___x_3107_; 
lean_dec(v_h__1_3102_);
v_head_3105_ = lean_ctor_get(v_x_3100_, 0);
lean_inc(v_head_3105_);
v_tail_3106_ = lean_ctor_get(v_x_3100_, 1);
lean_inc(v_tail_3106_);
lean_dec_ref_known(v_x_3100_, 2);
v___x_3107_ = lean_apply_3(v_h__2_3103_, v_head_3105_, v_tail_3106_, v_x_3101_);
return v___x_3107_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___redArg(lean_object* v_f_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_){
_start:
{
if (lean_obj_tag(v_a_3109_) == 0)
{
lean_object* v___x_3111_; 
lean_dec(v_f_3108_);
v___x_3111_ = l_List_reverse___redArg(v_a_3110_);
return v___x_3111_;
}
else
{
lean_object* v_head_3112_; lean_object* v_tail_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3122_; 
v_head_3112_ = lean_ctor_get(v_a_3109_, 0);
v_tail_3113_ = lean_ctor_get(v_a_3109_, 1);
v_isSharedCheck_3122_ = !lean_is_exclusive(v_a_3109_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3115_ = v_a_3109_;
v_isShared_3116_ = v_isSharedCheck_3122_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_tail_3113_);
lean_inc(v_head_3112_);
lean_dec(v_a_3109_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3122_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3117_; lean_object* v___x_3119_; 
lean_inc(v_f_3108_);
v___x_3117_ = lean_apply_1(v_f_3108_, v_head_3112_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 1, v_a_3110_);
lean_ctor_set(v___x_3115_, 0, v___x_3117_);
v___x_3119_ = v___x_3115_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v___x_3117_);
lean_ctor_set(v_reuseFailAlloc_3121_, 1, v_a_3110_);
v___x_3119_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
v_a_3109_ = v_tail_3113_;
v_a_3110_ = v___x_3119_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop(lean_object* v_00_u03b1_3123_, lean_object* v_00_u03b2_3124_, lean_object* v_f_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_){
_start:
{
lean_object* v___x_3128_; 
v___x_3128_ = l_List_mapTR_loop___redArg(v_f_3125_, v_a_3126_, v_a_3127_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR___redArg(lean_object* v_f_3129_, lean_object* v_as_3130_){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = lean_box(0);
v___x_3132_ = l_List_mapTR_loop___redArg(v_f_3129_, v_as_3130_, v___x_3131_);
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR(lean_object* v_00_u03b1_3133_, lean_object* v_00_u03b2_3134_, lean_object* v_f_3135_, lean_object* v_as_3136_){
_start:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3137_ = lean_box(0);
v___x_3138_ = l_List_mapTR_loop___redArg(v_f_3135_, v_as_3136_, v___x_3137_);
return v___x_3138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_mapTR_loop_match__1_splitter___redArg(lean_object* v_x_3139_, lean_object* v_x_3140_, lean_object* v_h__1_3141_, lean_object* v_h__2_3142_){
_start:
{
if (lean_obj_tag(v_x_3139_) == 0)
{
lean_object* v___x_3143_; 
lean_dec(v_h__2_3142_);
v___x_3143_ = lean_apply_1(v_h__1_3141_, v_x_3140_);
return v___x_3143_;
}
else
{
lean_object* v_head_3144_; lean_object* v_tail_3145_; lean_object* v___x_3146_; 
lean_dec(v_h__1_3141_);
v_head_3144_ = lean_ctor_get(v_x_3139_, 0);
lean_inc(v_head_3144_);
v_tail_3145_ = lean_ctor_get(v_x_3139_, 1);
lean_inc(v_tail_3145_);
lean_dec_ref_known(v_x_3139_, 2);
v___x_3146_ = lean_apply_3(v_h__2_3142_, v_head_3144_, v_tail_3145_, v_x_3140_);
return v___x_3146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_mapTR_loop_match__1_splitter(lean_object* v_00_u03b1_3147_, lean_object* v_00_u03b2_3148_, lean_object* v_motive_3149_, lean_object* v_x_3150_, lean_object* v_x_3151_, lean_object* v_h__1_3152_, lean_object* v_h__2_3153_){
_start:
{
if (lean_obj_tag(v_x_3150_) == 0)
{
lean_object* v___x_3154_; 
lean_dec(v_h__2_3153_);
v___x_3154_ = lean_apply_1(v_h__1_3152_, v_x_3151_);
return v___x_3154_;
}
else
{
lean_object* v_head_3155_; lean_object* v_tail_3156_; lean_object* v___x_3157_; 
lean_dec(v_h__1_3152_);
v_head_3155_ = lean_ctor_get(v_x_3150_, 0);
lean_inc(v_head_3155_);
v_tail_3156_ = lean_ctor_get(v_x_3150_, 1);
lean_inc(v_tail_3156_);
lean_dec_ref_known(v_x_3150_, 2);
v___x_3157_ = lean_apply_3(v_h__2_3153_, v_head_3155_, v_tail_3156_, v_x_3151_);
return v___x_3157_;
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___redArg(lean_object* v_p_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_){
_start:
{
if (lean_obj_tag(v_a_3159_) == 0)
{
lean_object* v___x_3161_; 
lean_dec_ref(v_p_3158_);
v___x_3161_ = l_List_reverse___redArg(v_a_3160_);
return v___x_3161_;
}
else
{
lean_object* v_head_3162_; lean_object* v_tail_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3174_; 
v_head_3162_ = lean_ctor_get(v_a_3159_, 0);
v_tail_3163_ = lean_ctor_get(v_a_3159_, 1);
v_isSharedCheck_3174_ = !lean_is_exclusive(v_a_3159_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3165_ = v_a_3159_;
v_isShared_3166_ = v_isSharedCheck_3174_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_tail_3163_);
lean_inc(v_head_3162_);
lean_dec(v_a_3159_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3174_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3167_; uint8_t v___x_3168_; 
lean_inc_ref(v_p_3158_);
lean_inc(v_head_3162_);
v___x_3167_ = lean_apply_1(v_p_3158_, v_head_3162_);
v___x_3168_ = lean_unbox(v___x_3167_);
if (v___x_3168_ == 0)
{
lean_del_object(v___x_3165_);
lean_dec(v_head_3162_);
v_a_3159_ = v_tail_3163_;
goto _start;
}
else
{
lean_object* v___x_3171_; 
if (v_isShared_3166_ == 0)
{
lean_ctor_set(v___x_3165_, 1, v_a_3160_);
v___x_3171_ = v___x_3165_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_head_3162_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v_a_3160_);
v___x_3171_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
v_a_3159_ = v_tail_3163_;
v_a_3160_ = v___x_3171_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop(lean_object* v_00_u03b1_3175_, lean_object* v_p_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l_List_filterTR_loop___redArg(v_p_3176_, v_a_3177_, v_a_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR___redArg(lean_object* v_p_3180_, lean_object* v_as_3181_){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3182_ = lean_box(0);
v___x_3183_ = l_List_filterTR_loop___redArg(v_p_3180_, v_as_3181_, v___x_3182_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR(lean_object* v_00_u03b1_3184_, lean_object* v_p_3185_, lean_object* v_as_3186_){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3187_ = lean_box(0);
v___x_3188_ = l_List_filterTR_loop___redArg(v_p_3185_, v_as_3186_, v___x_3187_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l_List_replicateTR_loop___redArg(lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_){
_start:
{
lean_object* v_zero_3192_; uint8_t v_isZero_3193_; 
v_zero_3192_ = lean_unsigned_to_nat(0u);
v_isZero_3193_ = lean_nat_dec_eq(v_a_3190_, v_zero_3192_);
if (v_isZero_3193_ == 1)
{
lean_dec(v_a_3190_);
lean_dec(v_a_3189_);
return v_a_3191_;
}
else
{
lean_object* v_one_3194_; lean_object* v_n_3195_; lean_object* v___x_3196_; 
v_one_3194_ = lean_unsigned_to_nat(1u);
v_n_3195_ = lean_nat_sub(v_a_3190_, v_one_3194_);
lean_dec(v_a_3190_);
lean_inc(v_a_3189_);
v___x_3196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3196_, 0, v_a_3189_);
lean_ctor_set(v___x_3196_, 1, v_a_3191_);
v_a_3190_ = v_n_3195_;
v_a_3191_ = v___x_3196_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_replicateTR_loop(lean_object* v_00_u03b1_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_){
_start:
{
lean_object* v___x_3202_; 
v___x_3202_ = l_List_replicateTR_loop___redArg(v_a_3199_, v_a_3200_, v_a_3201_);
return v___x_3202_;
}
}
LEAN_EXPORT lean_object* l_List_replicateTR___redArg(lean_object* v_n_3203_, lean_object* v_a_3204_){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = lean_box(0);
v___x_3206_ = l_List_replicateTR_loop___redArg(v_a_3204_, v_n_3203_, v___x_3205_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l_List_replicateTR(lean_object* v_00_u03b1_3207_, lean_object* v_n_3208_, lean_object* v_a_3209_){
_start:
{
lean_object* v___x_3210_; 
v___x_3210_ = l_List_replicateTR___redArg(v_n_3208_, v_a_3209_);
return v___x_3210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter___redArg(lean_object* v_x_3211_, lean_object* v_x_3212_, lean_object* v_h__1_3213_, lean_object* v_h__2_3214_){
_start:
{
lean_object* v_zero_3215_; uint8_t v_isZero_3216_; 
v_zero_3215_ = lean_unsigned_to_nat(0u);
v_isZero_3216_ = lean_nat_dec_eq(v_x_3211_, v_zero_3215_);
if (v_isZero_3216_ == 1)
{
lean_object* v___x_3217_; 
lean_dec(v_h__2_3214_);
v___x_3217_ = lean_apply_1(v_h__1_3213_, v_x_3212_);
return v___x_3217_;
}
else
{
lean_object* v_one_3218_; lean_object* v_n_3219_; lean_object* v___x_3220_; 
lean_dec(v_h__1_3213_);
v_one_3218_ = lean_unsigned_to_nat(1u);
v_n_3219_ = lean_nat_sub(v_x_3211_, v_one_3218_);
v___x_3220_ = lean_apply_2(v_h__2_3214_, v_n_3219_, v_x_3212_);
return v___x_3220_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter___redArg___boxed(lean_object* v_x_3221_, lean_object* v_x_3222_, lean_object* v_h__1_3223_, lean_object* v_h__2_3224_){
_start:
{
lean_object* v_res_3225_; 
v_res_3225_ = l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter___redArg(v_x_3221_, v_x_3222_, v_h__1_3223_, v_h__2_3224_);
lean_dec(v_x_3221_);
return v_res_3225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter(lean_object* v_00_u03b1_3226_, lean_object* v_motive_3227_, lean_object* v_x_3228_, lean_object* v_x_3229_, lean_object* v_h__1_3230_, lean_object* v_h__2_3231_){
_start:
{
lean_object* v_zero_3232_; uint8_t v_isZero_3233_; 
v_zero_3232_ = lean_unsigned_to_nat(0u);
v_isZero_3233_ = lean_nat_dec_eq(v_x_3228_, v_zero_3232_);
if (v_isZero_3233_ == 1)
{
lean_object* v___x_3234_; 
lean_dec(v_h__2_3231_);
v___x_3234_ = lean_apply_1(v_h__1_3230_, v_x_3229_);
return v___x_3234_;
}
else
{
lean_object* v_one_3235_; lean_object* v_n_3236_; lean_object* v___x_3237_; 
lean_dec(v_h__1_3230_);
v_one_3235_ = lean_unsigned_to_nat(1u);
v_n_3236_ = lean_nat_sub(v_x_3228_, v_one_3235_);
v___x_3237_ = lean_apply_2(v_h__2_3231_, v_n_3236_, v_x_3229_);
return v___x_3237_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter___boxed(lean_object* v_00_u03b1_3238_, lean_object* v_motive_3239_, lean_object* v_x_3240_, lean_object* v_x_3241_, lean_object* v_h__1_3242_, lean_object* v_h__2_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l___private_Init_Data_List_Basic_0__List_replicateTR_loop_match__1_splitter(v_00_u03b1_3238_, v_motive_3239_, v_x_3240_, v_x_3241_, v_h__1_3242_, v_h__2_3243_);
lean_dec(v_x_3240_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter___redArg(lean_object* v_x_3245_, lean_object* v_x_3246_, lean_object* v_h__1_3247_, lean_object* v_h__2_3248_){
_start:
{
lean_object* v_zero_3249_; uint8_t v_isZero_3250_; 
v_zero_3249_ = lean_unsigned_to_nat(0u);
v_isZero_3250_ = lean_nat_dec_eq(v_x_3245_, v_zero_3249_);
if (v_isZero_3250_ == 1)
{
lean_object* v___x_3251_; 
lean_dec(v_h__2_3248_);
v___x_3251_ = lean_apply_1(v_h__1_3247_, v_x_3246_);
return v___x_3251_;
}
else
{
lean_object* v_one_3252_; lean_object* v_n_3253_; lean_object* v___x_3254_; 
lean_dec(v_h__1_3247_);
v_one_3252_ = lean_unsigned_to_nat(1u);
v_n_3253_ = lean_nat_sub(v_x_3245_, v_one_3252_);
v___x_3254_ = lean_apply_2(v_h__2_3248_, v_n_3253_, v_x_3246_);
return v___x_3254_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter___redArg___boxed(lean_object* v_x_3255_, lean_object* v_x_3256_, lean_object* v_h__1_3257_, lean_object* v_h__2_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter___redArg(v_x_3255_, v_x_3256_, v_h__1_3257_, v_h__2_3258_);
lean_dec(v_x_3255_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter(lean_object* v_00_u03b1_3260_, lean_object* v_motive_3261_, lean_object* v_x_3262_, lean_object* v_x_3263_, lean_object* v_h__1_3264_, lean_object* v_h__2_3265_){
_start:
{
lean_object* v_zero_3266_; uint8_t v_isZero_3267_; 
v_zero_3266_ = lean_unsigned_to_nat(0u);
v_isZero_3267_ = lean_nat_dec_eq(v_x_3262_, v_zero_3266_);
if (v_isZero_3267_ == 1)
{
lean_object* v___x_3268_; 
lean_dec(v_h__2_3265_);
v___x_3268_ = lean_apply_1(v_h__1_3264_, v_x_3263_);
return v___x_3268_;
}
else
{
lean_object* v_one_3269_; lean_object* v_n_3270_; lean_object* v___x_3271_; 
lean_dec(v_h__1_3264_);
v_one_3269_ = lean_unsigned_to_nat(1u);
v_n_3270_ = lean_nat_sub(v_x_3262_, v_one_3269_);
v___x_3271_ = lean_apply_2(v_h__2_3265_, v_n_3270_, v_x_3263_);
return v___x_3271_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter___boxed(lean_object* v_00_u03b1_3272_, lean_object* v_motive_3273_, lean_object* v_x_3274_, lean_object* v_x_3275_, lean_object* v_h__1_3276_, lean_object* v_h__2_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l___private_Init_Data_List_Basic_0__List_replicate_match__1_splitter(v_00_u03b1_3272_, v_motive_3273_, v_x_3274_, v_x_3275_, v_h__1_3276_, v_h__2_3277_);
lean_dec(v_x_3274_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l_List_leftpadTR___redArg(lean_object* v_n_3279_, lean_object* v_a_3280_, lean_object* v_l_3281_){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3282_ = l_List_lengthTR___redArg(v_l_3281_);
v___x_3283_ = lean_nat_sub(v_n_3279_, v___x_3282_);
lean_dec(v___x_3282_);
v___x_3284_ = l_List_replicateTR_loop___redArg(v_a_3280_, v___x_3283_, v_l_3281_);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* l_List_leftpadTR___redArg___boxed(lean_object* v_n_3285_, lean_object* v_a_3286_, lean_object* v_l_3287_){
_start:
{
lean_object* v_res_3288_; 
v_res_3288_ = l_List_leftpadTR___redArg(v_n_3285_, v_a_3286_, v_l_3287_);
lean_dec(v_n_3285_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l_List_leftpadTR(lean_object* v_00_u03b1_3289_, lean_object* v_n_3290_, lean_object* v_a_3291_, lean_object* v_l_3292_){
_start:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3293_ = l_List_lengthTR___redArg(v_l_3292_);
v___x_3294_ = lean_nat_sub(v_n_3290_, v___x_3293_);
lean_dec(v___x_3293_);
v___x_3295_ = l_List_replicateTR_loop___redArg(v_a_3291_, v___x_3294_, v_l_3292_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_List_leftpadTR___boxed(lean_object* v_00_u03b1_3296_, lean_object* v_n_3297_, lean_object* v_a_3298_, lean_object* v_l_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_List_leftpadTR(v_00_u03b1_3296_, v_n_3297_, v_a_3298_, v_l_3299_);
lean_dec(v_n_3297_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___redArg(lean_object* v_init_3301_, lean_object* v_x_3302_){
_start:
{
if (lean_obj_tag(v_x_3302_) == 0)
{
lean_inc_ref(v_init_3301_);
return v_init_3301_;
}
else
{
lean_object* v_head_3303_; lean_object* v_tail_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3330_; 
v_head_3303_ = lean_ctor_get(v_x_3302_, 0);
v_tail_3304_ = lean_ctor_get(v_x_3302_, 1);
v_isSharedCheck_3330_ = !lean_is_exclusive(v_x_3302_);
if (v_isSharedCheck_3330_ == 0)
{
v___x_3306_ = v_x_3302_;
v_isShared_3307_ = v_isSharedCheck_3330_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_tail_3304_);
lean_inc(v_head_3303_);
lean_dec(v_x_3302_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3330_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v_fst_3308_; lean_object* v_snd_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3329_; 
v_fst_3308_ = lean_ctor_get(v_head_3303_, 0);
v_snd_3309_ = lean_ctor_get(v_head_3303_, 1);
v_isSharedCheck_3329_ = !lean_is_exclusive(v_head_3303_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3311_ = v_head_3303_;
v_isShared_3312_ = v_isSharedCheck_3329_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_snd_3309_);
lean_inc(v_fst_3308_);
lean_dec(v_head_3303_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3329_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; lean_object* v_fst_3314_; lean_object* v_snd_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3328_; 
v___x_3313_ = l_List_foldr___at___00List_unzipTR_spec__0___redArg(v_init_3301_, v_tail_3304_);
v_fst_3314_ = lean_ctor_get(v___x_3313_, 0);
v_snd_3315_ = lean_ctor_get(v___x_3313_, 1);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3317_ = v___x_3313_;
v_isShared_3318_ = v_isSharedCheck_3328_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_snd_3315_);
lean_inc(v_fst_3314_);
lean_dec(v___x_3313_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3328_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3320_; 
if (v_isShared_3307_ == 0)
{
lean_ctor_set(v___x_3306_, 1, v_fst_3314_);
lean_ctor_set(v___x_3306_, 0, v_fst_3308_);
v___x_3320_ = v___x_3306_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_fst_3308_);
lean_ctor_set(v_reuseFailAlloc_3327_, 1, v_fst_3314_);
v___x_3320_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
lean_object* v___x_3322_; 
if (v_isShared_3312_ == 0)
{
lean_ctor_set_tag(v___x_3311_, 1);
lean_ctor_set(v___x_3311_, 1, v_snd_3315_);
lean_ctor_set(v___x_3311_, 0, v_snd_3309_);
v___x_3322_ = v___x_3311_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_snd_3309_);
lean_ctor_set(v_reuseFailAlloc_3326_, 1, v_snd_3315_);
v___x_3322_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
lean_object* v___x_3324_; 
if (v_isShared_3318_ == 0)
{
lean_ctor_set(v___x_3317_, 1, v___x_3322_);
lean_ctor_set(v___x_3317_, 0, v___x_3320_);
v___x_3324_ = v___x_3317_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v___x_3320_);
lean_ctor_set(v_reuseFailAlloc_3325_, 1, v___x_3322_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___redArg___boxed(lean_object* v_init_3331_, lean_object* v_x_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_List_foldr___at___00List_unzipTR_spec__0___redArg(v_init_3331_, v_x_3332_);
lean_dec_ref(v_init_3331_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_List_unzipTR___redArg(lean_object* v_l_3334_){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3335_ = ((lean_object*)(l_List_partition___redArg___closed__0));
v___x_3336_ = l_List_foldr___at___00List_unzipTR_spec__0___redArg(v___x_3335_, v_l_3334_);
return v___x_3336_;
}
}
LEAN_EXPORT lean_object* l_List_unzipTR(lean_object* v_00_u03b1_3337_, lean_object* v_00_u03b2_3338_, lean_object* v_l_3339_){
_start:
{
lean_object* v___x_3340_; 
v___x_3340_ = l_List_unzipTR___redArg(v_l_3339_);
return v___x_3340_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0(lean_object* v_00_u03b1_3341_, lean_object* v_00_u03b2_3342_, lean_object* v_init_3343_, lean_object* v_x_3344_){
_start:
{
lean_object* v___x_3345_; 
v___x_3345_ = l_List_foldr___at___00List_unzipTR_spec__0___redArg(v_init_3343_, v_x_3344_);
return v___x_3345_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_unzipTR_spec__0___boxed(lean_object* v_00_u03b1_3346_, lean_object* v_00_u03b2_3347_, lean_object* v_init_3348_, lean_object* v_x_3349_){
_start:
{
lean_object* v_res_3350_; 
v_res_3350_ = l_List_foldr___at___00List_unzipTR_spec__0(v_00_u03b1_3346_, v_00_u03b2_3347_, v_init_3348_, v_x_3349_);
lean_dec_ref(v_init_3348_);
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l_List_range_x27TR_go(lean_object* v_step_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_){
_start:
{
lean_object* v_zero_3355_; uint8_t v_isZero_3356_; 
v_zero_3355_ = lean_unsigned_to_nat(0u);
v_isZero_3356_ = lean_nat_dec_eq(v_a_3352_, v_zero_3355_);
if (v_isZero_3356_ == 1)
{
lean_dec(v_a_3353_);
lean_dec(v_a_3352_);
return v_a_3354_;
}
else
{
lean_object* v_one_3357_; lean_object* v_n_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v_one_3357_ = lean_unsigned_to_nat(1u);
v_n_3358_ = lean_nat_sub(v_a_3352_, v_one_3357_);
lean_dec(v_a_3352_);
v___x_3359_ = lean_nat_sub(v_a_3353_, v_step_3351_);
lean_dec(v_a_3353_);
lean_inc(v___x_3359_);
v___x_3360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
lean_ctor_set(v___x_3360_, 1, v_a_3354_);
v_a_3352_ = v_n_3358_;
v_a_3353_ = v___x_3359_;
v_a_3354_ = v___x_3360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_range_x27TR_go___boxed(lean_object* v_step_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l_List_range_x27TR_go(v_step_3362_, v_a_3363_, v_a_3364_, v_a_3365_);
lean_dec(v_step_3362_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_List_range_x27TR(lean_object* v_s_3367_, lean_object* v_n_3368_, lean_object* v_step_3369_){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3370_ = lean_nat_mul(v_step_3369_, v_n_3368_);
v___x_3371_ = lean_nat_add(v_s_3367_, v___x_3370_);
lean_dec(v___x_3370_);
v___x_3372_ = lean_box(0);
v___x_3373_ = l_List_range_x27TR_go(v_step_3369_, v_n_3368_, v___x_3371_, v___x_3372_);
return v___x_3373_;
}
}
LEAN_EXPORT lean_object* l_List_range_x27TR___boxed(lean_object* v_s_3374_, lean_object* v_n_3375_, lean_object* v_step_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_List_range_x27TR(v_s_3374_, v_n_3375_, v_step_3376_);
lean_dec(v_step_3376_);
lean_dec(v_s_3374_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter___redArg(lean_object* v_x_3378_, lean_object* v_x_3379_, lean_object* v_x_3380_, lean_object* v_h__1_3381_, lean_object* v_h__2_3382_){
_start:
{
lean_object* v_zero_3383_; uint8_t v_isZero_3384_; 
v_zero_3383_ = lean_unsigned_to_nat(0u);
v_isZero_3384_ = lean_nat_dec_eq(v_x_3378_, v_zero_3383_);
if (v_isZero_3384_ == 1)
{
lean_object* v___x_3385_; 
lean_dec(v_h__2_3382_);
v___x_3385_ = lean_apply_2(v_h__1_3381_, v_x_3379_, v_x_3380_);
return v___x_3385_;
}
else
{
lean_object* v_one_3386_; lean_object* v_n_3387_; lean_object* v___x_3388_; 
lean_dec(v_h__1_3381_);
v_one_3386_ = lean_unsigned_to_nat(1u);
v_n_3387_ = lean_nat_sub(v_x_3378_, v_one_3386_);
v___x_3388_ = lean_apply_3(v_h__2_3382_, v_n_3387_, v_x_3379_, v_x_3380_);
return v___x_3388_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter___redArg___boxed(lean_object* v_x_3389_, lean_object* v_x_3390_, lean_object* v_x_3391_, lean_object* v_h__1_3392_, lean_object* v_h__2_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter___redArg(v_x_3389_, v_x_3390_, v_x_3391_, v_h__1_3392_, v_h__2_3393_);
lean_dec(v_x_3389_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter(lean_object* v_motive_3395_, lean_object* v_x_3396_, lean_object* v_x_3397_, lean_object* v_x_3398_, lean_object* v_h__1_3399_, lean_object* v_h__2_3400_){
_start:
{
lean_object* v_zero_3401_; uint8_t v_isZero_3402_; 
v_zero_3401_ = lean_unsigned_to_nat(0u);
v_isZero_3402_ = lean_nat_dec_eq(v_x_3396_, v_zero_3401_);
if (v_isZero_3402_ == 1)
{
lean_object* v___x_3403_; 
lean_dec(v_h__2_3400_);
v___x_3403_ = lean_apply_2(v_h__1_3399_, v_x_3397_, v_x_3398_);
return v___x_3403_;
}
else
{
lean_object* v_one_3404_; lean_object* v_n_3405_; lean_object* v___x_3406_; 
lean_dec(v_h__1_3399_);
v_one_3404_ = lean_unsigned_to_nat(1u);
v_n_3405_ = lean_nat_sub(v_x_3396_, v_one_3404_);
v___x_3406_ = lean_apply_3(v_h__2_3400_, v_n_3405_, v_x_3397_, v_x_3398_);
return v___x_3406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter___boxed(lean_object* v_motive_3407_, lean_object* v_x_3408_, lean_object* v_x_3409_, lean_object* v_x_3410_, lean_object* v_h__1_3411_, lean_object* v_h__2_3412_){
_start:
{
lean_object* v_res_3413_; 
v_res_3413_ = l___private_Init_Data_List_Basic_0__List_range_x27TR_go_match__1_splitter(v_motive_3407_, v_x_3408_, v_x_3409_, v_x_3410_, v_h__1_3411_, v_h__2_3412_);
lean_dec(v_x_3408_);
return v_res_3413_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___redArg(lean_object* v_sep_3414_, lean_object* v_init_3415_, lean_object* v_x_3416_){
_start:
{
if (lean_obj_tag(v_x_3416_) == 0)
{
lean_dec(v_sep_3414_);
lean_inc(v_init_3415_);
return v_init_3415_;
}
else
{
lean_object* v_head_3417_; lean_object* v_tail_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3427_; 
v_head_3417_ = lean_ctor_get(v_x_3416_, 0);
v_tail_3418_ = lean_ctor_get(v_x_3416_, 1);
v_isSharedCheck_3427_ = !lean_is_exclusive(v_x_3416_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3420_ = v_x_3416_;
v_isShared_3421_ = v_isSharedCheck_3427_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_tail_3418_);
lean_inc(v_head_3417_);
lean_dec(v_x_3416_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3427_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3422_; lean_object* v___x_3424_; 
lean_inc(v_sep_3414_);
v___x_3422_ = l_List_foldr___at___00List_intersperseTR_spec__0___redArg(v_sep_3414_, v_init_3415_, v_tail_3418_);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 1, v___x_3422_);
v___x_3424_ = v___x_3420_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_head_3417_);
lean_ctor_set(v_reuseFailAlloc_3426_, 1, v___x_3422_);
v___x_3424_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
lean_object* v___x_3425_; 
v___x_3425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3425_, 0, v_sep_3414_);
lean_ctor_set(v___x_3425_, 1, v___x_3424_);
return v___x_3425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___redArg___boxed(lean_object* v_sep_3428_, lean_object* v_init_3429_, lean_object* v_x_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_List_foldr___at___00List_intersperseTR_spec__0___redArg(v_sep_3428_, v_init_3429_, v_x_3430_);
lean_dec(v_init_3429_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_List_intersperseTR___redArg(lean_object* v_sep_3432_, lean_object* v_x_3433_){
_start:
{
if (lean_obj_tag(v_x_3433_) == 0)
{
lean_dec(v_sep_3432_);
return v_x_3433_;
}
else
{
lean_object* v_tail_3434_; 
v_tail_3434_ = lean_ctor_get(v_x_3433_, 1);
lean_inc(v_tail_3434_);
if (lean_obj_tag(v_tail_3434_) == 0)
{
lean_dec(v_sep_3432_);
return v_x_3433_;
}
else
{
lean_object* v_head_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3454_; 
v_head_3435_ = lean_ctor_get(v_x_3433_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v_x_3433_);
if (v_isSharedCheck_3454_ == 0)
{
lean_object* v_unused_3455_; 
v_unused_3455_ = lean_ctor_get(v_x_3433_, 1);
lean_dec(v_unused_3455_);
v___x_3437_ = v_x_3433_;
v_isShared_3438_ = v_isSharedCheck_3454_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_head_3435_);
lean_dec(v_x_3433_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3454_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v_head_3439_; lean_object* v_tail_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3453_; 
v_head_3439_ = lean_ctor_get(v_tail_3434_, 0);
v_tail_3440_ = lean_ctor_get(v_tail_3434_, 1);
v_isSharedCheck_3453_ = !lean_is_exclusive(v_tail_3434_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3442_ = v_tail_3434_;
v_isShared_3443_ = v_isSharedCheck_3453_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_tail_3440_);
lean_inc(v_head_3439_);
lean_dec(v_tail_3434_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3453_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3447_; 
v___x_3444_ = lean_box(0);
lean_inc(v_sep_3432_);
v___x_3445_ = l_List_foldr___at___00List_intersperseTR_spec__0___redArg(v_sep_3432_, v___x_3444_, v_tail_3440_);
if (v_isShared_3443_ == 0)
{
lean_ctor_set(v___x_3442_, 1, v___x_3445_);
v___x_3447_ = v___x_3442_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_head_3439_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v___x_3445_);
v___x_3447_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
lean_object* v___x_3449_; 
if (v_isShared_3438_ == 0)
{
lean_ctor_set(v___x_3437_, 1, v___x_3447_);
lean_ctor_set(v___x_3437_, 0, v_sep_3432_);
v___x_3449_ = v___x_3437_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_sep_3432_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v___x_3447_);
v___x_3449_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
lean_object* v___x_3450_; 
v___x_3450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3450_, 0, v_head_3435_);
lean_ctor_set(v___x_3450_, 1, v___x_3449_);
return v___x_3450_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_intersperseTR(lean_object* v_00_u03b1_3456_, lean_object* v_sep_3457_, lean_object* v_x_3458_){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = l_List_intersperseTR___redArg(v_sep_3457_, v_x_3458_);
return v___x_3459_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0(lean_object* v_00_u03b1_3460_, lean_object* v_sep_3461_, lean_object* v_init_3462_, lean_object* v_x_3463_){
_start:
{
lean_object* v___x_3464_; 
v___x_3464_ = l_List_foldr___at___00List_intersperseTR_spec__0___redArg(v_sep_3461_, v_init_3462_, v_x_3463_);
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00List_intersperseTR_spec__0___boxed(lean_object* v_00_u03b1_3465_, lean_object* v_sep_3466_, lean_object* v_init_3467_, lean_object* v_x_3468_){
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = l_List_foldr___at___00List_intersperseTR_spec__0(v_00_u03b1_3465_, v_sep_3466_, v_init_3467_, v_x_3468_);
lean_dec(v_init_3467_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_intersperseTR_match__1_splitter___redArg(lean_object* v_x_3470_, lean_object* v_h__1_3471_, lean_object* v_h__2_3472_, lean_object* v_h__3_3473_){
_start:
{
if (lean_obj_tag(v_x_3470_) == 0)
{
lean_object* v___x_3474_; lean_object* v___x_3475_; 
lean_dec(v_h__3_3473_);
lean_dec(v_h__2_3472_);
v___x_3474_ = lean_box(0);
v___x_3475_ = lean_apply_1(v_h__1_3471_, v___x_3474_);
return v___x_3475_;
}
else
{
lean_object* v_tail_3476_; 
lean_dec(v_h__1_3471_);
v_tail_3476_ = lean_ctor_get(v_x_3470_, 1);
if (lean_obj_tag(v_tail_3476_) == 0)
{
lean_object* v_head_3477_; lean_object* v___x_3478_; 
lean_dec(v_h__3_3473_);
v_head_3477_ = lean_ctor_get(v_x_3470_, 0);
lean_inc(v_head_3477_);
lean_dec_ref_known(v_x_3470_, 2);
v___x_3478_ = lean_apply_1(v_h__2_3472_, v_head_3477_);
return v___x_3478_;
}
else
{
lean_object* v_head_3479_; lean_object* v_head_3480_; lean_object* v_tail_3481_; lean_object* v___x_3482_; 
lean_inc_ref(v_tail_3476_);
lean_dec(v_h__2_3472_);
v_head_3479_ = lean_ctor_get(v_x_3470_, 0);
lean_inc(v_head_3479_);
lean_dec_ref_known(v_x_3470_, 2);
v_head_3480_ = lean_ctor_get(v_tail_3476_, 0);
lean_inc(v_head_3480_);
v_tail_3481_ = lean_ctor_get(v_tail_3476_, 1);
lean_inc(v_tail_3481_);
lean_dec_ref_known(v_tail_3476_, 2);
v___x_3482_ = lean_apply_3(v_h__3_3473_, v_head_3479_, v_head_3480_, v_tail_3481_);
return v___x_3482_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Basic_0__List_intersperseTR_match__1_splitter(lean_object* v_00_u03b1_3483_, lean_object* v_motive_3484_, lean_object* v_x_3485_, lean_object* v_h__1_3486_, lean_object* v_h__2_3487_, lean_object* v_h__3_3488_){
_start:
{
if (lean_obj_tag(v_x_3485_) == 0)
{
lean_object* v___x_3489_; lean_object* v___x_3490_; 
lean_dec(v_h__3_3488_);
lean_dec(v_h__2_3487_);
v___x_3489_ = lean_box(0);
v___x_3490_ = lean_apply_1(v_h__1_3486_, v___x_3489_);
return v___x_3490_;
}
else
{
lean_object* v_tail_3491_; 
lean_dec(v_h__1_3486_);
v_tail_3491_ = lean_ctor_get(v_x_3485_, 1);
if (lean_obj_tag(v_tail_3491_) == 0)
{
lean_object* v_head_3492_; lean_object* v___x_3493_; 
lean_dec(v_h__3_3488_);
v_head_3492_ = lean_ctor_get(v_x_3485_, 0);
lean_inc(v_head_3492_);
lean_dec_ref_known(v_x_3485_, 2);
v___x_3493_ = lean_apply_1(v_h__2_3487_, v_head_3492_);
return v___x_3493_;
}
else
{
lean_object* v_head_3494_; lean_object* v_head_3495_; lean_object* v_tail_3496_; lean_object* v___x_3497_; 
lean_inc_ref(v_tail_3491_);
lean_dec(v_h__2_3487_);
v_head_3494_ = lean_ctor_get(v_x_3485_, 0);
lean_inc(v_head_3494_);
lean_dec_ref_known(v_x_3485_, 2);
v_head_3495_ = lean_ctor_get(v_tail_3491_, 0);
lean_inc(v_head_3495_);
v_tail_3496_ = lean_ctor_get(v_tail_3491_, 1);
lean_inc(v_tail_3496_);
lean_dec_ref_known(v_tail_3491_, 2);
v___x_3497_ = lean_apply_3(v_h__3_3488_, v_head_3494_, v_head_3495_, v_tail_3496_);
return v___x_3497_;
}
}
}
}
lean_object* runtime_initialize_Init_Data_List_Notation(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Zero(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_SimpLemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_List_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_List_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Zero(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_SimpLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_List_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_List_lex___auto__1 = _init_l_List_lex___auto__1();
lean_mark_persistent(l_List_lex___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_List_Notation(uint8_t builtin);
lean_object* initialize_Init_Data_Zero(uint8_t builtin);
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_SimpLemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_List_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Zero(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_SimpLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_List_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

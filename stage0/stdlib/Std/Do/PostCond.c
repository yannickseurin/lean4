// Lean compiler output
// Module: Std.Do.PostCond
// Imports: public import Std.Do.SPred
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
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Do_SPred_pure___redArg(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Do_SPred_and(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Do_SVal_curry___redArg(lean_object*, lean_object*);
lean_object* l_Std_Do_SPred_imp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_pure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_pure_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_arg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_arg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_except_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_except_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_args(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_args___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_const___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_const___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_const___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_const(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_true(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_false(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedExceptConds(lean_object*);
static const lean_string_object l_Std_Do_term___u22a2_u2091___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__0 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value;
static const lean_string_object l_Std_Do_term___u22a2_u2091___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__1 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u22a2_u2091___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "term_⊢ₑ_"};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__2 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__3_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__3_value_aux_1),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(47, 206, 144, 176, 166, 201, 195, 83)}};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__3 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__3_value;
static const lean_string_object l_Std_Do_term___u22a2_u2091___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__4 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__5 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value;
static const lean_string_object l_Std_Do_term___u22a2_u2091___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " ⊢ₑ "};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__6 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__6_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__6_value)}};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__7 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__7_value;
static const lean_string_object l_Std_Do_term___u22a2_u2091___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__8 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__8_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__9 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__9_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__9_value),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__10 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__10_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__7_value),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__10_value)}};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__11 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__11_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u2091___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__3_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__11_value)}};
static const lean_object* l_Std_Do_term___u22a2_u2091___00__closed__12 = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__12_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u22a2_u2091__ = (const lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__12_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ExceptConds.entails"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__5_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__6;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ExceptConds"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__8_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(139, 147, 12, 12, 50, 62, 178, 236)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__9_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(163, 170, 0, 37, 49, 213, 239, 188)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__9_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(72, 205, 41, 157, 129, 142, 231, 99)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__11_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__10_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__12_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__13 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__13_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__11_value),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__13_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__14_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__15 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__15_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__0_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Do_PostCond_0__Std_Do_ExceptConds_entails_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Do_PostCond_0__Std_Do_ExceptConds_entails_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Do_PostCond_0__Std_Do_PostShape_args_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Do_PostCond_0__Std_Do_PostShape_args_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_and___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_and___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_and(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term___u2227_u2091___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "term_∧ₑ_"};
static const lean_object* l_Std_Do_term___u2227_u2091___00__closed__0 = (const lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u2227_u2091___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u2227_u2091___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u2227_u2091___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 243, 110, 99, 134, 58, 50, 162)}};
static const lean_object* l_Std_Do_term___u2227_u2091___00__closed__1 = (const lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u2227_u2091___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " ∧ₑ "};
static const lean_object* l_Std_Do_term___u2227_u2091___00__closed__2 = (const lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u2227_u2091___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u2227_u2091___00__closed__3 = (const lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u2227_u2091___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__9_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l_Std_Do_term___u2227_u2091___00__closed__4 = (const lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u2227_u2091___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__3_value),((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u2227_u2091___00__closed__5 = (const lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__5_value;
static const lean_ctor_object l_Std_Do_term___u2227_u2091___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__1_value),((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__5_value)}};
static const lean_object* l_Std_Do_term___u2227_u2091___00__closed__6 = (const lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u2227_u2091__ = (const lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__6_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ExceptConds.and"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__1;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(139, 147, 12, 12, 50, 62, 178, 236)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(37, 171, 244, 94, 98, 193, 51, 0)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(198, 204, 155, 110, 221, 209, 121, 119)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__and__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__and__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_imp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_imp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_imp(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term___u2192_u2091___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "term_→ₑ_"};
static const lean_object* l_Std_Do_term___u2192_u2091___00__closed__0 = (const lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u2192_u2091___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u2192_u2091___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u2192_u2091___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 210, 122, 78, 230, 243, 132, 61)}};
static const lean_object* l_Std_Do_term___u2192_u2091___00__closed__1 = (const lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u2192_u2091___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " →ₑ "};
static const lean_object* l_Std_Do_term___u2192_u2091___00__closed__2 = (const lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u2192_u2091___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u2192_u2091___00__closed__3 = (const lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u2192_u2091___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__10_value)}};
static const lean_object* l_Std_Do_term___u2192_u2091___00__closed__4 = (const lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u2192_u2091___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u2192_u2091___00__closed__5 = (const lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u2192_u2091__ = (const lean_object*)&l_Std_Do_term___u2192_u2091___00__closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ExceptConds.imp"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__1;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "imp"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(139, 147, 12, 12, 50, 62, 178, 236)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(219, 146, 133, 30, 156, 110, 110, 59)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 202, 249, 243, 130, 82, 177, 96)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__imp__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__imp__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 13, .m_data = "termPost⟨_,,⟩"};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__0 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__0_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1_value_aux_1),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 45, 176, 130, 225, 239, 187, 245)}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1_value;
static const lean_string_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "post⟨"};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__2 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__2_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__2_value)}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__3 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__3_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__4 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__4_value;
static const lean_string_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__5 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__5_value;
static const lean_string_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__6 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__6_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__6_value)}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__7 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__7_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__4_value),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__5_value),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__7_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__8 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__8_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__3_value),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__8_value)}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__9 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__9_value;
static const lean_string_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__10 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__10_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__10_value)}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__11 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__11_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__9_value),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__11_value)}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__12 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__12_value;
static const lean_ctor_object l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__12_value)}};
static const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__13 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__13_value;
LEAN_EXPORT const lean_object* l_Std_Do_termPost_u27e8___x2c_x2c_u27e9 = (const lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__13_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__0_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__2_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__3_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__6_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__8_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__12_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "PUnit.unit"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__14_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__15;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__16_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__17 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__17_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__18_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(146, 91, 82, 196, 249, 72, 203, 194)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__18 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__18_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__19 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__19_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__18_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__20 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__20_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__21 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__21_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__19_value),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__21_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__22 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__22_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_noThrow___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_noThrow(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 10, .m_data = "term_⇓_=>_"};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__0 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 118, 219, 9, 44, 173, 117, 117)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__1 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__2 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__3 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__3_value;
static const lean_string_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ppAllowUngrouped"};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__4 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(254, 56, 209, 55, 154, 125, 240, 2)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__5 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__5_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__5_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__6 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__6_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__3_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__6_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__7 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__7_value;
static const lean_string_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⇓"};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__8 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__8_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__8_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__9 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__9_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__7_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__9_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__10 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__10_value;
static const lean_string_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__11 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__11_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__11_value),LEAN_SCALAR_PTR_LITERAL(55, 136, 52, 6, 12, 19, 78, 239)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__12 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__12_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__9_value),((lean_object*)(((size_t)(1024) << 1) | 1))}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__13 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__13_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__12_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__13_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__14 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__14_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__10_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__14_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__15 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__15_value;
static const lean_string_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__16 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__16_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__16_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__17 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__17_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__15_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__17_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__18 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__18_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__18_value),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__4_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__19 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__19_value;
static const lean_ctor_object l_Std_Do_term___u21d3___x3d_x3e___00__closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__19_value)}};
static const lean_object* l_Std_Do_term___u21d3___x3d_x3e___00__closed__20 = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__20_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u21d3___x3d_x3e__ = (const lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__20_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "PostCond.noThrow"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__1;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PostCond"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "noThrow"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(3, 150, 138, 197, 137, 5, 150, 182)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(219, 88, 117, 139, 154, 102, 4, 51)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(16, 55, 64, 24, 30, 138, 86, 160)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__6_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__7_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__8_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__12_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__13 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__13_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__14_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__15 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__15_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__18_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__18 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__18_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__18_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__19 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__19_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__20 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__20_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__21 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__21_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__23 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__23_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__25 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__25_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "termSpred(_)"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__26 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__26_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(76, 240, 91, 148, 237, 191, 255, 193)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "spred("};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__28 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__28_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__29 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__29_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_mayThrow___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_mayThrow(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 11, .m_data = "term_⇓\?_=>_"};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__0 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 52, 46, 60, 233, 87, 205, 70)}};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⇓\?"};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__2 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__3 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__7_value),((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__3_value)}};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__4 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__4_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__14_value)}};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__5 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__5_value;
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3___x3d_x3e___00__closed__17_value)}};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__6 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__6_value;
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__6_value),((lean_object*)&l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__4_value)}};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__7 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__7_value;
static const lean_ctor_object l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__7_value)}};
static const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__8 = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__8_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u21d3_x3f___x3d_x3e__ = (const lean_object*)&l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__8_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "PostCond.mayThrow"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__1;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mayThrow"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(3, 150, 138, 197, 137, 5, 150, 182)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 252, 207, 107, 212, 83, 11, 103)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 136, 136, 54, 72, 103, 208, 40)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond(lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term___u22a2_u209a___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "term_⊢ₚ_"};
static const lean_object* l_Std_Do_term___u22a2_u209a___00__closed__0 = (const lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209a___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u22a2_u209a___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u22a2_u209a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 141, 203, 215, 39, 237, 75, 8)}};
static const lean_object* l_Std_Do_term___u22a2_u209a___00__closed__1 = (const lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u22a2_u209a___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " ⊢ₚ "};
static const lean_object* l_Std_Do_term___u22a2_u209a___00__closed__2 = (const lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209a___00__closed__3 = (const lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209a___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__10_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209a___00__closed__4 = (const lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209a___00__closed__5 = (const lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u22a2_u209a__ = (const lean_object*)&l_Std_Do_term___u22a2_u209a___00__closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "PostCond.entails"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__1;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(3, 150, 138, 197, 137, 5, 150, 182)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__2_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(203, 216, 242, 84, 80, 15, 12, 233)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(32, 111, 255, 27, 103, 9, 244, 9)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__entails__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__entails__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_and___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_and___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_and___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_and(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term___u2227_u209a___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "term_∧ₚ_"};
static const lean_object* l_Std_Do_term___u2227_u209a___00__closed__0 = (const lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u2227_u209a___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u2227_u209a___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u2227_u209a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 60, 122, 170, 196, 154, 227, 219)}};
static const lean_object* l_Std_Do_term___u2227_u209a___00__closed__1 = (const lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u2227_u209a___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " ∧ₚ "};
static const lean_object* l_Std_Do_term___u2227_u209a___00__closed__2 = (const lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u2227_u209a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u2227_u209a___00__closed__3 = (const lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u2227_u209a___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__3_value),((lean_object*)&l_Std_Do_term___u2227_u2091___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u2227_u209a___00__closed__4 = (const lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u2227_u209a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__1_value),((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u2227_u209a___00__closed__5 = (const lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u2227_u209a__ = (const lean_object*)&l_Std_Do_term___u2227_u209a___00__closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PostCond.and"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__1;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(3, 150, 138, 197, 137, 5, 150, 182)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__2_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 217, 234, 155, 212, 82, 211, 216)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(158, 14, 254, 237, 73, 234, 208, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__and__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__and__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_imp___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_imp___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_imp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostCond_imp(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term___u2192_u209a___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "term_→ₚ_"};
static const lean_object* l_Std_Do_term___u2192_u209a___00__closed__0 = (const lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u2192_u209a___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u2192_u209a___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u2192_u209a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 152, 37, 89, 170, 148, 214, 40)}};
static const lean_object* l_Std_Do_term___u2192_u209a___00__closed__1 = (const lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u2192_u209a___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " →ₚ "};
static const lean_object* l_Std_Do_term___u2192_u209a___00__closed__2 = (const lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u2192_u209a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u2192_u209a___00__closed__3 = (const lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u2192_u209a___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__5_value),((lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__10_value)}};
static const lean_object* l_Std_Do_term___u2192_u209a___00__closed__4 = (const lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u2192_u209a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u2192_u209a___00__closed__5 = (const lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u2192_u209a__ = (const lean_object*)&l_Std_Do_term___u2192_u209a___00__closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PostCond.imp"};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__1;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(3, 150, 138, 197, 137, 5, 150, 182)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__2_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 188, 154, 150, 86, 220, 24, 91)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do_term___u22a2_u2091___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 224, 179, 90, 89, 14, 202, 155)}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__imp__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__imp__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Std_Do_PostShape_ctorIdx(v_x_5_);
lean_dec(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 0)
{
return v_k_8_;
}
else
{
lean_object* v_a_9_; lean_object* v___x_10_; 
v_a_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_a_9_);
lean_dec(v_t_7_);
v___x_10_ = lean_apply_2(v_k_8_, lean_box(0), v_a_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Std_Do_PostShape_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Std_Do_PostShape_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_pure_elim___redArg(lean_object* v_t_23_, lean_object* v_pure_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Std_Do_PostShape_ctorElim___redArg(v_t_23_, v_pure_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_pure_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_pure_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Std_Do_PostShape_ctorElim___redArg(v_t_27_, v_pure_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_arg_elim___redArg(lean_object* v_t_31_, lean_object* v_arg_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Std_Do_PostShape_ctorElim___redArg(v_t_31_, v_arg_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_arg_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_arg_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Std_Do_PostShape_ctorElim___redArg(v_t_35_, v_arg_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_except_elim___redArg(lean_object* v_t_39_, lean_object* v_except_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Std_Do_PostShape_ctorElim___redArg(v_t_39_, v_except_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_except_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_except_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Std_Do_PostShape_ctorElim___redArg(v_t_43_, v_except_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_args(lean_object* v_x_47_){
_start:
{
switch(lean_obj_tag(v_x_47_))
{
case 0:
{
lean_object* v___x_48_; 
v___x_48_ = lean_box(0);
return v___x_48_;
}
case 1:
{
lean_object* v_a_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_a_49_ = lean_ctor_get(v_x_47_, 0);
v___x_50_ = l_Std_Do_PostShape_args(v_a_49_);
v___x_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_51_, 0, lean_box(0));
lean_ctor_set(v___x_51_, 1, v___x_50_);
return v___x_51_;
}
default: 
{
lean_object* v_a_52_; 
v_a_52_ = lean_ctor_get(v_x_47_, 0);
v_x_47_ = v_a_52_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostShape_args___boxed(lean_object* v_x_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Std_Do_PostShape_args(v_x_54_);
lean_dec(v_x_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_const___redArg___lam__0(lean_object* v_a_56_, lean_object* v_00___u03b5_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = l_Std_Do_PostShape_args(v_a_56_);
v___x_59_ = l_Std_Do_SPred_pure___redArg(v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_const___redArg___lam__0___boxed(lean_object* v_a_60_, lean_object* v_00___u03b5_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Std_Do_ExceptConds_const___redArg___lam__0(v_a_60_, v_00___u03b5_61_);
lean_dec(v_00___u03b5_61_);
lean_dec(v_a_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_const___redArg(lean_object* v_ps_63_){
_start:
{
switch(lean_obj_tag(v_ps_63_))
{
case 0:
{
lean_object* v___x_64_; 
v___x_64_ = lean_box(0);
return v___x_64_;
}
case 1:
{
lean_object* v_a_65_; 
v_a_65_ = lean_ctor_get(v_ps_63_, 0);
lean_inc(v_a_65_);
lean_dec_ref_known(v_ps_63_, 1);
v_ps_63_ = v_a_65_;
goto _start;
}
default: 
{
lean_object* v_a_67_; lean_object* v___f_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v_a_67_ = lean_ctor_get(v_ps_63_, 0);
lean_inc_n(v_a_67_, 2);
lean_dec_ref_known(v_ps_63_, 1);
v___f_68_ = lean_alloc_closure((void*)(l_Std_Do_ExceptConds_const___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_68_, 0, v_a_67_);
v___x_69_ = l_Std_Do_ExceptConds_const___redArg(v_a_67_);
v___x_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_70_, 0, v___f_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_const(lean_object* v_ps_71_, lean_object* v_p_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Std_Do_ExceptConds_const___redArg(v_ps_71_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_true(lean_object* v_ps_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Std_Do_ExceptConds_const___redArg(v_ps_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_false(lean_object* v_ps_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Std_Do_ExceptConds_const___redArg(v_ps_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedExceptConds(lean_object* v_ps_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Std_Do_ExceptConds_const___redArg(v_ps_78_);
return v___x_79_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__6(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__5));
v___x_120_ = l_String_toRawSubstring_x27(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1(lean_object* v_x_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_148_ = ((lean_object*)(l_Std_Do_term___u22a2_u2091___00__closed__3));
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
lean_object* v_quotContext_152_; lean_object* v_currMacroScope_153_; lean_object* v_ref_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
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
v___x_161_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
v___x_162_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__6, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__6_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__6);
v___x_163_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__9));
lean_inc(v_currMacroScope_153_);
lean_inc(v_quotContext_152_);
v___x_164_ = l_Lean_addMacroScope(v_quotContext_152_, v___x_163_, v_currMacroScope_153_);
v___x_165_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__14));
lean_inc_n(v___x_160_, 2);
v___x_166_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_166_, 0, v___x_160_);
lean_ctor_set(v___x_166_, 1, v___x_162_);
lean_ctor_set(v___x_166_, 2, v___x_164_);
lean_ctor_set(v___x_166_, 3, v___x_165_);
v___x_167_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_168_ = l_Lean_Syntax_node2(v___x_160_, v___x_167_, v___x_156_, v___x_158_);
v___x_169_ = l_Lean_Syntax_node2(v___x_160_, v___x_161_, v___x_166_, v___x_168_);
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v_a_147_);
return v___x_170_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___boxed(lean_object* v_x_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1(v_x_171_, v_a_172_, v_a_173_);
lean_dec_ref(v_a_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1(lean_object* v_x_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
lean_inc(v_x_178_);
v___x_182_ = l_Lean_Syntax_isOfKind(v_x_178_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; 
lean_dec(v_x_178_);
v___x_183_ = lean_box(0);
v___x_184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v_a_180_);
return v___x_184_;
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = l_Lean_Syntax_getArg(v_x_178_, v___x_185_);
v___x_187_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1));
lean_inc(v___x_186_);
v___x_188_ = l_Lean_Syntax_isOfKind(v___x_186_, v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; lean_object* v___x_190_; 
lean_dec(v___x_186_);
lean_dec(v_x_178_);
v___x_189_ = lean_box(0);
v___x_190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v_a_180_);
return v___x_190_;
}
else
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = l_Lean_Syntax_getArg(v_x_178_, v___x_191_);
lean_dec(v_x_178_);
v___x_193_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_192_);
v___x_194_ = l_Lean_Syntax_matchesNull(v___x_192_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; lean_object* v___x_196_; 
lean_dec(v___x_192_);
lean_dec(v___x_186_);
v___x_195_ = lean_box(0);
v___x_196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v_a_180_);
return v___x_196_;
}
else
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v_ref_199_; uint8_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_197_ = l_Lean_Syntax_getArg(v___x_192_, v___x_185_);
v___x_198_ = l_Lean_Syntax_getArg(v___x_192_, v___x_191_);
lean_dec(v___x_192_);
v_ref_199_ = l_Lean_replaceRef(v___x_186_, v_a_179_);
lean_dec(v___x_186_);
v___x_200_ = 0;
v___x_201_ = l_Lean_SourceInfo_fromRef(v_ref_199_, v___x_200_);
lean_dec(v_ref_199_);
v___x_202_ = ((lean_object*)(l_Std_Do_term___u22a2_u2091___00__closed__3));
v___x_203_ = ((lean_object*)(l_Std_Do_term___u22a2_u2091___00__closed__6));
lean_inc(v___x_201_);
v___x_204_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_201_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
v___x_205_ = l_Lean_Syntax_node3(v___x_201_, v___x_202_, v___x_197_, v___x_204_, v___x_198_);
v___x_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v_a_180_);
return v___x_206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___boxed(lean_object* v_x_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1(v_x_207_, v_a_208_, v_a_209_);
lean_dec(v_a_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Do_PostCond_0__Std_Do_ExceptConds_entails_match__1_splitter___redArg(lean_object* v_ps_211_, lean_object* v_x_212_, lean_object* v_y_213_, lean_object* v_h__1_214_, lean_object* v_h__2_215_, lean_object* v_h__3_216_){
_start:
{
switch(lean_obj_tag(v_ps_211_))
{
case 0:
{
lean_object* v___x_217_; 
lean_dec(v_h__3_216_);
lean_dec(v_h__2_215_);
v___x_217_ = lean_apply_2(v_h__1_214_, v_x_212_, v_y_213_);
return v___x_217_;
}
case 1:
{
lean_object* v_a_218_; lean_object* v___x_219_; 
lean_dec(v_h__3_216_);
lean_dec(v_h__1_214_);
v_a_218_ = lean_ctor_get(v_ps_211_, 0);
lean_inc(v_a_218_);
lean_dec_ref_known(v_ps_211_, 1);
v___x_219_ = lean_apply_4(v_h__2_215_, lean_box(0), v_a_218_, v_x_212_, v_y_213_);
return v___x_219_;
}
default: 
{
lean_object* v_a_220_; lean_object* v___x_221_; 
lean_dec(v_h__2_215_);
lean_dec(v_h__1_214_);
v_a_220_ = lean_ctor_get(v_ps_211_, 0);
lean_inc(v_a_220_);
lean_dec_ref_known(v_ps_211_, 1);
v___x_221_ = lean_apply_4(v_h__3_216_, lean_box(0), v_a_220_, v_x_212_, v_y_213_);
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Do_PostCond_0__Std_Do_ExceptConds_entails_match__1_splitter(lean_object* v_motive_222_, lean_object* v_ps_223_, lean_object* v_x_224_, lean_object* v_y_225_, lean_object* v_h__1_226_, lean_object* v_h__2_227_, lean_object* v_h__3_228_){
_start:
{
switch(lean_obj_tag(v_ps_223_))
{
case 0:
{
lean_object* v___x_229_; 
lean_dec(v_h__3_228_);
lean_dec(v_h__2_227_);
v___x_229_ = lean_apply_2(v_h__1_226_, v_x_224_, v_y_225_);
return v___x_229_;
}
case 1:
{
lean_object* v_a_230_; lean_object* v___x_231_; 
lean_dec(v_h__3_228_);
lean_dec(v_h__1_226_);
v_a_230_ = lean_ctor_get(v_ps_223_, 0);
lean_inc(v_a_230_);
lean_dec_ref_known(v_ps_223_, 1);
v___x_231_ = lean_apply_4(v_h__2_227_, lean_box(0), v_a_230_, v_x_224_, v_y_225_);
return v___x_231_;
}
default: 
{
lean_object* v_a_232_; lean_object* v___x_233_; 
lean_dec(v_h__2_227_);
lean_dec(v_h__1_226_);
v_a_232_ = lean_ctor_get(v_ps_223_, 0);
lean_inc(v_a_232_);
lean_dec_ref_known(v_ps_223_, 1);
v___x_233_ = lean_apply_4(v_h__3_228_, lean_box(0), v_a_232_, v_x_224_, v_y_225_);
return v___x_233_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Do_PostCond_0__Std_Do_PostShape_args_match__1_splitter___redArg(lean_object* v_x_234_, lean_object* v_h__1_235_, lean_object* v_h__2_236_, lean_object* v_h__3_237_){
_start:
{
switch(lean_obj_tag(v_x_234_))
{
case 0:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec(v_h__3_237_);
lean_dec(v_h__2_236_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_apply_1(v_h__1_235_, v___x_238_);
return v___x_239_;
}
case 1:
{
lean_object* v_a_240_; lean_object* v___x_241_; 
lean_dec(v_h__3_237_);
lean_dec(v_h__1_235_);
v_a_240_ = lean_ctor_get(v_x_234_, 0);
lean_inc(v_a_240_);
lean_dec_ref_known(v_x_234_, 1);
v___x_241_ = lean_apply_2(v_h__2_236_, lean_box(0), v_a_240_);
return v___x_241_;
}
default: 
{
lean_object* v_a_242_; lean_object* v___x_243_; 
lean_dec(v_h__2_236_);
lean_dec(v_h__1_235_);
v_a_242_ = lean_ctor_get(v_x_234_, 0);
lean_inc(v_a_242_);
lean_dec_ref_known(v_x_234_, 1);
v___x_243_ = lean_apply_2(v_h__3_237_, lean_box(0), v_a_242_);
return v___x_243_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Do_PostCond_0__Std_Do_PostShape_args_match__1_splitter(lean_object* v_motive_244_, lean_object* v_x_245_, lean_object* v_h__1_246_, lean_object* v_h__2_247_, lean_object* v_h__3_248_){
_start:
{
switch(lean_obj_tag(v_x_245_))
{
case 0:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec(v_h__3_248_);
lean_dec(v_h__2_247_);
v___x_249_ = lean_box(0);
v___x_250_ = lean_apply_1(v_h__1_246_, v___x_249_);
return v___x_250_;
}
case 1:
{
lean_object* v_a_251_; lean_object* v___x_252_; 
lean_dec(v_h__3_248_);
lean_dec(v_h__1_246_);
v_a_251_ = lean_ctor_get(v_x_245_, 0);
lean_inc(v_a_251_);
lean_dec_ref_known(v_x_245_, 1);
v___x_252_ = lean_apply_2(v_h__2_247_, lean_box(0), v_a_251_);
return v___x_252_;
}
default: 
{
lean_object* v_a_253_; lean_object* v___x_254_; 
lean_dec(v_h__2_247_);
lean_dec(v_h__1_246_);
v_a_253_ = lean_ctor_get(v_x_245_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v_x_245_, 1);
v___x_254_ = lean_apply_2(v_h__3_248_, lean_box(0), v_a_253_);
return v___x_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_and___lam__0(lean_object* v_a_255_, lean_object* v_fst_256_, lean_object* v_fst_257_, lean_object* v_e_258_){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_259_ = l_Std_Do_PostShape_args(v_a_255_);
lean_inc(v_e_258_);
v___x_260_ = lean_apply_1(v_fst_256_, v_e_258_);
v___x_261_ = lean_apply_1(v_fst_257_, v_e_258_);
v___x_262_ = l_Std_Do_SPred_and(v___x_259_, v___x_260_, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_and___lam__0___boxed(lean_object* v_a_263_, lean_object* v_fst_264_, lean_object* v_fst_265_, lean_object* v_e_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Std_Do_ExceptConds_and___lam__0(v_a_263_, v_fst_264_, v_fst_265_, v_e_266_);
lean_dec(v_a_263_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_and(lean_object* v_ps_268_, lean_object* v_x_269_, lean_object* v_y_270_){
_start:
{
switch(lean_obj_tag(v_ps_268_))
{
case 0:
{
lean_object* v___x_271_; 
lean_dec(v_y_270_);
lean_dec(v_x_269_);
v___x_271_ = lean_box(0);
return v___x_271_;
}
case 1:
{
lean_object* v_a_272_; 
v_a_272_ = lean_ctor_get(v_ps_268_, 0);
lean_inc(v_a_272_);
lean_dec_ref_known(v_ps_268_, 1);
v_ps_268_ = v_a_272_;
goto _start;
}
default: 
{
lean_object* v_a_274_; lean_object* v_fst_275_; lean_object* v_snd_276_; lean_object* v_fst_277_; lean_object* v_snd_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_287_; 
v_a_274_ = lean_ctor_get(v_ps_268_, 0);
lean_inc(v_a_274_);
lean_dec_ref_known(v_ps_268_, 1);
v_fst_275_ = lean_ctor_get(v_x_269_, 0);
lean_inc(v_fst_275_);
v_snd_276_ = lean_ctor_get(v_x_269_, 1);
lean_inc(v_snd_276_);
lean_dec(v_x_269_);
v_fst_277_ = lean_ctor_get(v_y_270_, 0);
v_snd_278_ = lean_ctor_get(v_y_270_, 1);
v_isSharedCheck_287_ = !lean_is_exclusive(v_y_270_);
if (v_isSharedCheck_287_ == 0)
{
v___x_280_ = v_y_270_;
v_isShared_281_ = v_isSharedCheck_287_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_snd_278_);
lean_inc(v_fst_277_);
lean_dec(v_y_270_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_287_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___f_282_; lean_object* v___x_283_; lean_object* v___x_285_; 
lean_inc(v_a_274_);
v___f_282_ = lean_alloc_closure((void*)(l_Std_Do_ExceptConds_and___lam__0___boxed), 4, 3);
lean_closure_set(v___f_282_, 0, v_a_274_);
lean_closure_set(v___f_282_, 1, v_fst_275_);
lean_closure_set(v___f_282_, 2, v_fst_277_);
v___x_283_ = l_Std_Do_ExceptConds_and(v_a_274_, v_snd_276_, v_snd_278_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 1, v___x_283_);
lean_ctor_set(v___x_280_, 0, v___f_282_);
v___x_285_ = v___x_280_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___f_282_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__1(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__0));
v___x_311_ = l_String_toRawSubstring_x27(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1(lean_object* v_x_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_330_ = ((lean_object*)(l_Std_Do_term___u2227_u2091___00__closed__1));
lean_inc(v_x_327_);
v___x_331_ = l_Lean_Syntax_isOfKind(v_x_327_, v___x_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec(v_x_327_);
v___x_332_ = lean_box(1);
v___x_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v_a_329_);
return v___x_333_;
}
else
{
lean_object* v_quotContext_334_; lean_object* v_currMacroScope_335_; lean_object* v_ref_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_quotContext_334_ = lean_ctor_get(v_a_328_, 1);
v_currMacroScope_335_ = lean_ctor_get(v_a_328_, 2);
v_ref_336_ = lean_ctor_get(v_a_328_, 5);
v___x_337_ = lean_unsigned_to_nat(0u);
v___x_338_ = l_Lean_Syntax_getArg(v_x_327_, v___x_337_);
v___x_339_ = lean_unsigned_to_nat(2u);
v___x_340_ = l_Lean_Syntax_getArg(v_x_327_, v___x_339_);
lean_dec(v_x_327_);
v___x_341_ = 0;
v___x_342_ = l_Lean_SourceInfo_fromRef(v_ref_336_, v___x_341_);
v___x_343_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
v___x_344_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__1, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__1);
v___x_345_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__3));
lean_inc(v_currMacroScope_335_);
lean_inc(v_quotContext_334_);
v___x_346_ = l_Lean_addMacroScope(v_quotContext_334_, v___x_345_, v_currMacroScope_335_);
v___x_347_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___closed__6));
lean_inc_n(v___x_342_, 2);
v___x_348_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_348_, 0, v___x_342_);
lean_ctor_set(v___x_348_, 1, v___x_344_);
lean_ctor_set(v___x_348_, 2, v___x_346_);
lean_ctor_set(v___x_348_, 3, v___x_347_);
v___x_349_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_350_ = l_Lean_Syntax_node2(v___x_342_, v___x_349_, v___x_338_, v___x_340_);
v___x_351_ = l_Lean_Syntax_node2(v___x_342_, v___x_343_, v___x_348_, v___x_350_);
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
lean_ctor_set(v___x_352_, 1, v_a_329_);
return v___x_352_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1___boxed(lean_object* v_x_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u2091____1(v_x_353_, v_a_354_, v_a_355_);
lean_dec_ref(v_a_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__and__1(lean_object* v_x_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_360_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
lean_inc(v_x_357_);
v___x_361_ = l_Lean_Syntax_isOfKind(v_x_357_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec(v_x_357_);
v___x_362_ = lean_box(0);
v___x_363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
lean_ctor_set(v___x_363_, 1, v_a_359_);
return v___x_363_;
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = l_Lean_Syntax_getArg(v_x_357_, v___x_364_);
v___x_366_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1));
lean_inc(v___x_365_);
v___x_367_ = l_Lean_Syntax_isOfKind(v___x_365_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; lean_object* v___x_369_; 
lean_dec(v___x_365_);
lean_dec(v_x_357_);
v___x_368_ = lean_box(0);
v___x_369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v_a_359_);
return v___x_369_;
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = l_Lean_Syntax_getArg(v_x_357_, v___x_370_);
lean_dec(v_x_357_);
v___x_372_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_371_);
v___x_373_ = l_Lean_Syntax_matchesNull(v___x_371_, v___x_372_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; lean_object* v___x_375_; 
lean_dec(v___x_371_);
lean_dec(v___x_365_);
v___x_374_ = lean_box(0);
v___x_375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
lean_ctor_set(v___x_375_, 1, v_a_359_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_ref_378_; uint8_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_376_ = l_Lean_Syntax_getArg(v___x_371_, v___x_364_);
v___x_377_ = l_Lean_Syntax_getArg(v___x_371_, v___x_370_);
lean_dec(v___x_371_);
v_ref_378_ = l_Lean_replaceRef(v___x_365_, v_a_358_);
lean_dec(v___x_365_);
v___x_379_ = 0;
v___x_380_ = l_Lean_SourceInfo_fromRef(v_ref_378_, v___x_379_);
lean_dec(v_ref_378_);
v___x_381_ = ((lean_object*)(l_Std_Do_term___u2227_u2091___00__closed__1));
v___x_382_ = ((lean_object*)(l_Std_Do_term___u2227_u2091___00__closed__2));
lean_inc(v___x_380_);
v___x_383_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_380_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
v___x_384_ = l_Lean_Syntax_node3(v___x_380_, v___x_381_, v___x_376_, v___x_383_, v___x_377_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v_a_359_);
return v___x_385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__and__1___boxed(lean_object* v_x_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__and__1(v_x_386_, v_a_387_, v_a_388_);
lean_dec(v_a_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_imp___lam__0(lean_object* v_a_390_, lean_object* v_fst_391_, lean_object* v_fst_392_, lean_object* v_e_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_394_ = l_Std_Do_PostShape_args(v_a_390_);
lean_inc(v_e_393_);
v___x_395_ = lean_apply_1(v_fst_391_, v_e_393_);
v___x_396_ = lean_apply_1(v_fst_392_, v_e_393_);
v___x_397_ = l_Std_Do_SPred_imp(v___x_394_, v___x_395_, v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_imp___lam__0___boxed(lean_object* v_a_398_, lean_object* v_fst_399_, lean_object* v_fst_400_, lean_object* v_e_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Std_Do_ExceptConds_imp___lam__0(v_a_398_, v_fst_399_, v_fst_400_, v_e_401_);
lean_dec(v_a_398_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptConds_imp(lean_object* v_ps_403_, lean_object* v_x_404_, lean_object* v_y_405_){
_start:
{
switch(lean_obj_tag(v_ps_403_))
{
case 0:
{
lean_object* v___x_406_; 
lean_dec(v_y_405_);
lean_dec(v_x_404_);
v___x_406_ = lean_box(0);
return v___x_406_;
}
case 1:
{
lean_object* v_a_407_; 
v_a_407_ = lean_ctor_get(v_ps_403_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v_ps_403_, 1);
v_ps_403_ = v_a_407_;
goto _start;
}
default: 
{
lean_object* v_a_409_; lean_object* v_fst_410_; lean_object* v_snd_411_; lean_object* v_fst_412_; lean_object* v_snd_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_422_; 
v_a_409_ = lean_ctor_get(v_ps_403_, 0);
lean_inc(v_a_409_);
lean_dec_ref_known(v_ps_403_, 1);
v_fst_410_ = lean_ctor_get(v_x_404_, 0);
lean_inc(v_fst_410_);
v_snd_411_ = lean_ctor_get(v_x_404_, 1);
lean_inc(v_snd_411_);
lean_dec(v_x_404_);
v_fst_412_ = lean_ctor_get(v_y_405_, 0);
v_snd_413_ = lean_ctor_get(v_y_405_, 1);
v_isSharedCheck_422_ = !lean_is_exclusive(v_y_405_);
if (v_isSharedCheck_422_ == 0)
{
v___x_415_ = v_y_405_;
v_isShared_416_ = v_isSharedCheck_422_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_snd_413_);
lean_inc(v_fst_412_);
lean_dec(v_y_405_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_422_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___f_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
lean_inc(v_a_409_);
v___f_417_ = lean_alloc_closure((void*)(l_Std_Do_ExceptConds_imp___lam__0___boxed), 4, 3);
lean_closure_set(v___f_417_, 0, v_a_409_);
lean_closure_set(v___f_417_, 1, v_fst_410_);
lean_closure_set(v___f_417_, 2, v_fst_412_);
v___x_418_ = l_Std_Do_ExceptConds_imp(v_a_409_, v_snd_411_, v_snd_413_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 1, v___x_418_);
lean_ctor_set(v___x_415_, 0, v___f_417_);
v___x_420_ = v___x_415_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___f_417_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v___x_418_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__1(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__0));
v___x_443_ = l_String_toRawSubstring_x27(v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1(lean_object* v_x_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_462_ = ((lean_object*)(l_Std_Do_term___u2192_u2091___00__closed__1));
lean_inc(v_x_459_);
v___x_463_ = l_Lean_Syntax_isOfKind(v_x_459_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec(v_x_459_);
v___x_464_ = lean_box(1);
v___x_465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v_a_461_);
return v___x_465_;
}
else
{
lean_object* v_quotContext_466_; lean_object* v_currMacroScope_467_; lean_object* v_ref_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_quotContext_466_ = lean_ctor_get(v_a_460_, 1);
v_currMacroScope_467_ = lean_ctor_get(v_a_460_, 2);
v_ref_468_ = lean_ctor_get(v_a_460_, 5);
v___x_469_ = lean_unsigned_to_nat(0u);
v___x_470_ = l_Lean_Syntax_getArg(v_x_459_, v___x_469_);
v___x_471_ = lean_unsigned_to_nat(2u);
v___x_472_ = l_Lean_Syntax_getArg(v_x_459_, v___x_471_);
lean_dec(v_x_459_);
v___x_473_ = 0;
v___x_474_ = l_Lean_SourceInfo_fromRef(v_ref_468_, v___x_473_);
v___x_475_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
v___x_476_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__1, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__1);
v___x_477_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__3));
lean_inc(v_currMacroScope_467_);
lean_inc(v_quotContext_466_);
v___x_478_ = l_Lean_addMacroScope(v_quotContext_466_, v___x_477_, v_currMacroScope_467_);
v___x_479_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___closed__6));
lean_inc_n(v___x_474_, 2);
v___x_480_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_480_, 0, v___x_474_);
lean_ctor_set(v___x_480_, 1, v___x_476_);
lean_ctor_set(v___x_480_, 2, v___x_478_);
lean_ctor_set(v___x_480_, 3, v___x_479_);
v___x_481_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_482_ = l_Lean_Syntax_node2(v___x_474_, v___x_481_, v___x_470_, v___x_472_);
v___x_483_ = l_Lean_Syntax_node2(v___x_474_, v___x_475_, v___x_480_, v___x_482_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v_a_461_);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1___boxed(lean_object* v_x_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u2091____1(v_x_485_, v_a_486_, v_a_487_);
lean_dec_ref(v_a_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__imp__1(lean_object* v_x_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_492_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
lean_inc(v_x_489_);
v___x_493_ = l_Lean_Syntax_isOfKind(v_x_489_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; lean_object* v___x_495_; 
lean_dec(v_x_489_);
v___x_494_ = lean_box(0);
v___x_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v_a_491_);
return v___x_495_;
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_496_ = lean_unsigned_to_nat(0u);
v___x_497_ = l_Lean_Syntax_getArg(v_x_489_, v___x_496_);
v___x_498_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1));
lean_inc(v___x_497_);
v___x_499_ = l_Lean_Syntax_isOfKind(v___x_497_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
lean_dec(v___x_497_);
lean_dec(v_x_489_);
v___x_500_ = lean_box(0);
v___x_501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v_a_491_);
return v___x_501_;
}
else
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_502_ = lean_unsigned_to_nat(1u);
v___x_503_ = l_Lean_Syntax_getArg(v_x_489_, v___x_502_);
lean_dec(v_x_489_);
v___x_504_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_503_);
v___x_505_ = l_Lean_Syntax_matchesNull(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; lean_object* v___x_507_; 
lean_dec(v___x_503_);
lean_dec(v___x_497_);
v___x_506_ = lean_box(0);
v___x_507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_507_, 0, v___x_506_);
lean_ctor_set(v___x_507_, 1, v_a_491_);
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v_ref_510_; uint8_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_508_ = l_Lean_Syntax_getArg(v___x_503_, v___x_496_);
v___x_509_ = l_Lean_Syntax_getArg(v___x_503_, v___x_502_);
lean_dec(v___x_503_);
v_ref_510_ = l_Lean_replaceRef(v___x_497_, v_a_490_);
lean_dec(v___x_497_);
v___x_511_ = 0;
v___x_512_ = l_Lean_SourceInfo_fromRef(v_ref_510_, v___x_511_);
lean_dec(v_ref_510_);
v___x_513_ = ((lean_object*)(l_Std_Do_term___u2192_u2091___00__closed__1));
v___x_514_ = ((lean_object*)(l_Std_Do_term___u2192_u2091___00__closed__2));
lean_inc(v___x_512_);
v___x_515_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_512_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = l_Lean_Syntax_node3(v___x_512_, v___x_513_, v___x_508_, v___x_515_, v___x_509_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v_a_491_);
return v___x_517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__imp__1___boxed(lean_object* v_x_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__imp__1(v_x_518_, v_a_519_, v_a_520_);
lean_dec(v_a_519_);
return v_res_521_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13(void){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Array_mkArray0___redArg();
return v___x_591_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__15(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__14));
v___x_594_ = l_String_toRawSubstring_x27(v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1(lean_object* v_x_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_614_ = ((lean_object*)(l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__1));
lean_inc(v_x_611_);
v___x_615_ = l_Lean_Syntax_isOfKind(v_x_611_, v___x_614_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; lean_object* v___x_617_; 
lean_dec(v_x_611_);
v___x_616_ = lean_box(1);
v___x_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v_a_613_);
return v___x_617_;
}
else
{
lean_object* v_quotContext_618_; lean_object* v_currMacroScope_619_; lean_object* v_ref_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_quotContext_618_ = lean_ctor_get(v_a_612_, 1);
v_currMacroScope_619_ = lean_ctor_get(v_a_612_, 2);
v_ref_620_ = lean_ctor_get(v_a_612_, 5);
v___x_621_ = lean_unsigned_to_nat(1u);
v___x_622_ = l_Lean_Syntax_getArg(v_x_611_, v___x_621_);
lean_dec(v_x_611_);
v___x_623_ = ((lean_object*)(l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__5));
v___x_624_ = l_Lean_Syntax_getArgs(v___x_622_);
lean_dec(v___x_622_);
v___x_625_ = 0;
v___x_626_ = l_Lean_SourceInfo_fromRef(v_ref_620_, v___x_625_);
v___x_627_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1));
v___x_628_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__2));
lean_inc_n(v___x_626_, 12);
v___x_629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_626_);
lean_ctor_set(v___x_629_, 1, v___x_628_);
v___x_630_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5));
v___x_631_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7));
v___x_632_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_633_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__8));
v___x_634_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9));
v___x_635_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_626_);
lean_ctor_set(v___x_635_, 1, v___x_633_);
v___x_636_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__11));
v___x_637_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__12));
v___x_638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_626_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13);
v___x_640_ = l_Array_append___redArg(v___x_639_, v___x_624_);
lean_dec_ref(v___x_624_);
v___x_641_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_626_);
lean_ctor_set(v___x_641_, 1, v___x_623_);
v___x_642_ = lean_array_push(v___x_640_, v___x_641_);
v___x_643_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__15, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__15_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__15);
v___x_644_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__18));
lean_inc(v_currMacroScope_619_);
lean_inc(v_quotContext_618_);
v___x_645_ = l_Lean_addMacroScope(v_quotContext_618_, v___x_644_, v_currMacroScope_619_);
v___x_646_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__22));
v___x_647_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_647_, 0, v___x_626_);
lean_ctor_set(v___x_647_, 1, v___x_643_);
lean_ctor_set(v___x_647_, 2, v___x_645_);
lean_ctor_set(v___x_647_, 3, v___x_646_);
v___x_648_ = lean_array_push(v___x_642_, v___x_647_);
v___x_649_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_649_, 0, v___x_626_);
lean_ctor_set(v___x_649_, 1, v___x_632_);
lean_ctor_set(v___x_649_, 2, v___x_648_);
v___x_650_ = ((lean_object*)(l_Std_Do_termPost_u27e8___x2c_x2c_u27e9___closed__10));
v___x_651_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_626_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = l_Lean_Syntax_node3(v___x_626_, v___x_636_, v___x_638_, v___x_649_, v___x_651_);
v___x_653_ = l_Lean_Syntax_node2(v___x_626_, v___x_634_, v___x_635_, v___x_652_);
v___x_654_ = l_Lean_Syntax_node1(v___x_626_, v___x_632_, v___x_653_);
v___x_655_ = l_Lean_Syntax_node1(v___x_626_, v___x_631_, v___x_654_);
v___x_656_ = l_Lean_Syntax_node1(v___x_626_, v___x_630_, v___x_655_);
v___x_657_ = l_Lean_Syntax_node2(v___x_626_, v___x_627_, v___x_629_, v___x_656_);
v___x_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v_a_613_);
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___boxed(lean_object* v_x_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1(v_x_659_, v_a_660_, v_a_661_);
lean_dec_ref(v_a_660_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_noThrow___redArg(lean_object* v_ps_663_, lean_object* v_p_664_){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = l_Std_Do_ExceptConds_const___redArg(v_ps_663_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v_p_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_noThrow(lean_object* v_00_u03b1_667_, lean_object* v_ps_668_, lean_object* v_p_669_){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = l_Std_Do_ExceptConds_const___redArg(v_ps_668_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_p_669_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1_spec__0(size_t v_sz_724_, size_t v_i_725_, lean_object* v_bs_726_){
_start:
{
uint8_t v___x_727_; 
v___x_727_ = lean_usize_dec_lt(v_i_725_, v_sz_724_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; 
v___x_728_ = l_unsafeCast___redArg(v_bs_726_);
lean_dec_ref(v_bs_726_);
return v___x_728_;
}
else
{
lean_object* v_v_729_; lean_object* v___x_730_; lean_object* v_bs_x27_731_; lean_object* v___x_732_; size_t v___x_733_; size_t v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v_v_729_ = lean_array_uget(v_bs_726_, v_i_725_);
v___x_730_ = lean_unsigned_to_nat(0u);
v_bs_x27_731_ = lean_array_uset(v_bs_726_, v_i_725_, v___x_730_);
v___x_732_ = l_unsafeCast___redArg(v_v_729_);
lean_dec(v_v_729_);
v___x_733_ = ((size_t)1ULL);
v___x_734_ = lean_usize_add(v_i_725_, v___x_733_);
v___x_735_ = l_unsafeCast___redArg(v___x_732_);
lean_dec(v___x_732_);
v___x_736_ = lean_array_uset(v_bs_x27_731_, v_i_725_, v___x_735_);
v_i_725_ = v___x_734_;
v_bs_726_ = v___x_736_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1_spec__0___boxed(lean_object* v_sz_738_, lean_object* v_i_739_, lean_object* v_bs_740_){
_start:
{
size_t v_sz_boxed_741_; size_t v_i_boxed_742_; lean_object* v_res_743_; 
v_sz_boxed_741_ = lean_unbox_usize(v_sz_738_);
lean_dec(v_sz_738_);
v_i_boxed_742_ = lean_unbox_usize(v_i_739_);
lean_dec(v_i_739_);
v_res_743_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1_spec__0(v_sz_boxed_741_, v_i_boxed_742_, v_bs_740_);
return v_res_743_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__1(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__0));
v___x_746_ = l_String_toRawSubstring_x27(v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__15));
v___x_781_ = l_String_toRawSubstring_x27(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_box(0);
v___x_783_ = l_unsafeCast___redArg(v___x_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1(lean_object* v_x_812_, lean_object* v_a_813_, lean_object* v_a_814_){
_start:
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = ((lean_object*)(l_Std_Do_term___u21d3___x3d_x3e___00__closed__1));
lean_inc(v_x_812_);
v___x_816_ = l_Lean_Syntax_isOfKind(v_x_812_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; lean_object* v___x_818_; 
lean_dec(v_x_812_);
v___x_817_ = lean_box(1);
v___x_818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
lean_ctor_set(v___x_818_, 1, v_a_814_);
return v___x_818_;
}
else
{
lean_object* v_quotContext_819_; lean_object* v_currMacroScope_820_; lean_object* v_ref_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v_xs_827_; uint8_t v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; size_t v_sz_862_; size_t v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_quotContext_819_ = lean_ctor_get(v_a_813_, 1);
v_currMacroScope_820_ = lean_ctor_get(v_a_813_, 2);
v_ref_821_ = lean_ctor_get(v_a_813_, 5);
v___x_822_ = lean_unsigned_to_nat(2u);
v___x_823_ = l_Lean_Syntax_getArg(v_x_812_, v___x_822_);
v___x_824_ = lean_unsigned_to_nat(4u);
v___x_825_ = l_Lean_Syntax_getArg(v_x_812_, v___x_824_);
lean_dec(v_x_812_);
v___x_826_ = l_Lean_Syntax_getArgs(v___x_823_);
lean_dec(v___x_823_);
v_xs_827_ = l_unsafeCast___redArg(v___x_826_);
lean_dec_ref(v___x_826_);
v___x_828_ = 0;
v___x_829_ = l_Lean_SourceInfo_fromRef(v_ref_821_, v___x_828_);
v___x_830_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
v___x_831_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__1, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__1);
v___x_832_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__4));
lean_inc_n(v_currMacroScope_820_, 2);
lean_inc_n(v_quotContext_819_, 2);
v___x_833_ = l_Lean_addMacroScope(v_quotContext_819_, v___x_832_, v_currMacroScope_820_);
v___x_834_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__7));
lean_inc_n(v___x_829_, 23);
v___x_835_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_835_, 0, v___x_829_);
lean_ctor_set(v___x_835_, 1, v___x_831_);
lean_ctor_set(v___x_835_, 2, v___x_833_);
lean_ctor_set(v___x_835_, 3, v___x_834_);
v___x_836_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_837_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9));
v___x_838_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11));
v___x_839_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__12));
v___x_840_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_829_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
v___x_841_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__14));
v___x_842_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16);
v___x_843_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17);
v___x_844_ = l_Lean_addMacroScope(v_quotContext_819_, v___x_843_, v_currMacroScope_820_);
v___x_845_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__20));
v___x_846_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_846_, 0, v___x_829_);
lean_ctor_set(v___x_846_, 1, v___x_842_);
lean_ctor_set(v___x_846_, 2, v___x_844_);
lean_ctor_set(v___x_846_, 3, v___x_845_);
v___x_847_ = l_Lean_Syntax_node1(v___x_829_, v___x_841_, v___x_846_);
v___x_848_ = l_Lean_Syntax_node2(v___x_829_, v___x_838_, v___x_840_, v___x_847_);
v___x_849_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1));
v___x_850_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__2));
v___x_851_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_829_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
v___x_852_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5));
v___x_853_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7));
v___x_854_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__8));
v___x_855_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9));
v___x_856_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_829_);
lean_ctor_set(v___x_856_, 1, v___x_854_);
v___x_857_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__21));
v___x_858_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22));
v___x_859_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_829_);
lean_ctor_set(v___x_859_, 1, v___x_857_);
v___x_860_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24));
v___x_861_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13);
v_sz_862_ = lean_array_size(v_xs_827_);
v___x_863_ = ((size_t)0ULL);
v___x_864_ = l_unsafeCast___redArg(v_xs_827_);
lean_dec(v_xs_827_);
v___x_865_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1_spec__0(v_sz_862_, v___x_863_, v___x_864_);
v___x_866_ = l_unsafeCast___redArg(v___x_865_);
lean_dec_ref(v___x_865_);
v___x_867_ = l_unsafeCast___redArg(v___x_866_);
lean_dec(v___x_866_);
v___x_868_ = l_Array_append___redArg(v___x_861_, v___x_867_);
lean_dec(v___x_867_);
v___x_869_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_869_, 0, v___x_829_);
lean_ctor_set(v___x_869_, 1, v___x_836_);
lean_ctor_set(v___x_869_, 2, v___x_868_);
v___x_870_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_870_, 0, v___x_829_);
lean_ctor_set(v___x_870_, 1, v___x_836_);
lean_ctor_set(v___x_870_, 2, v___x_861_);
v___x_871_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__25));
v___x_872_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_872_, 0, v___x_829_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
v___x_873_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27));
v___x_874_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__28));
v___x_875_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_829_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__29));
v___x_877_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_829_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
lean_inc_ref(v___x_877_);
v___x_878_ = l_Lean_Syntax_node3(v___x_829_, v___x_873_, v___x_875_, v___x_825_, v___x_877_);
v___x_879_ = l_Lean_Syntax_node4(v___x_829_, v___x_860_, v___x_869_, v___x_870_, v___x_872_, v___x_878_);
v___x_880_ = l_Lean_Syntax_node2(v___x_829_, v___x_858_, v___x_859_, v___x_879_);
v___x_881_ = l_Lean_Syntax_node2(v___x_829_, v___x_855_, v___x_856_, v___x_880_);
v___x_882_ = l_Lean_Syntax_node1(v___x_829_, v___x_836_, v___x_881_);
v___x_883_ = l_Lean_Syntax_node1(v___x_829_, v___x_853_, v___x_882_);
v___x_884_ = l_Lean_Syntax_node1(v___x_829_, v___x_852_, v___x_883_);
v___x_885_ = l_Lean_Syntax_node2(v___x_829_, v___x_849_, v___x_851_, v___x_884_);
v___x_886_ = l_Lean_Syntax_node3(v___x_829_, v___x_837_, v___x_848_, v___x_885_, v___x_877_);
v___x_887_ = l_Lean_Syntax_node1(v___x_829_, v___x_836_, v___x_886_);
v___x_888_ = l_Lean_Syntax_node2(v___x_829_, v___x_830_, v___x_835_, v___x_887_);
v___x_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
lean_ctor_set(v___x_889_, 1, v_a_814_);
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___boxed(lean_object* v_x_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1(v_x_890_, v_a_891_, v_a_892_);
lean_dec_ref(v_a_891_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_mayThrow___redArg(lean_object* v_ps_894_, lean_object* v_p_895_){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = l_Std_Do_ExceptConds_const___redArg(v_ps_894_);
v___x_897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_897_, 0, v_p_895_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_mayThrow(lean_object* v_00_u03b1_898_, lean_object* v_ps_899_, lean_object* v_p_900_){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = l_Std_Do_ExceptConds_const___redArg(v_ps_899_);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v_p_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
return v___x_902_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__1(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__0));
v___x_934_ = l_String_toRawSubstring_x27(v___x_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1(lean_object* v_x_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v___x_953_; uint8_t v___x_954_; 
v___x_953_ = ((lean_object*)(l_Std_Do_term___u21d3_x3f___x3d_x3e___00__closed__1));
lean_inc(v_x_950_);
v___x_954_ = l_Lean_Syntax_isOfKind(v_x_950_, v___x_953_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; lean_object* v___x_956_; 
lean_dec(v_x_950_);
v___x_955_ = lean_box(1);
v___x_956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
lean_ctor_set(v___x_956_, 1, v_a_952_);
return v___x_956_;
}
else
{
lean_object* v_quotContext_957_; lean_object* v_currMacroScope_958_; lean_object* v_ref_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_xs_965_; uint8_t v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; size_t v_sz_1000_; size_t v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v_quotContext_957_ = lean_ctor_get(v_a_951_, 1);
v_currMacroScope_958_ = lean_ctor_get(v_a_951_, 2);
v_ref_959_ = lean_ctor_get(v_a_951_, 5);
v___x_960_ = lean_unsigned_to_nat(2u);
v___x_961_ = l_Lean_Syntax_getArg(v_x_950_, v___x_960_);
v___x_962_ = lean_unsigned_to_nat(4u);
v___x_963_ = l_Lean_Syntax_getArg(v_x_950_, v___x_962_);
lean_dec(v_x_950_);
v___x_964_ = l_Lean_Syntax_getArgs(v___x_961_);
lean_dec(v___x_961_);
v_xs_965_ = l_unsafeCast___redArg(v___x_964_);
lean_dec_ref(v___x_964_);
v___x_966_ = 0;
v___x_967_ = l_Lean_SourceInfo_fromRef(v_ref_959_, v___x_966_);
v___x_968_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
v___x_969_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__1, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__1);
v___x_970_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__3));
lean_inc_n(v_currMacroScope_958_, 2);
lean_inc_n(v_quotContext_957_, 2);
v___x_971_ = l_Lean_addMacroScope(v_quotContext_957_, v___x_970_, v_currMacroScope_958_);
v___x_972_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___closed__6));
lean_inc_n(v___x_967_, 23);
v___x_973_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_973_, 0, v___x_967_);
lean_ctor_set(v___x_973_, 1, v___x_969_);
lean_ctor_set(v___x_973_, 2, v___x_971_);
lean_ctor_set(v___x_973_, 3, v___x_972_);
v___x_974_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_975_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__9));
v___x_976_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__11));
v___x_977_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__12));
v___x_978_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_967_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__14));
v___x_980_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__16);
v___x_981_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__17);
v___x_982_ = l_Lean_addMacroScope(v_quotContext_957_, v___x_981_, v_currMacroScope_958_);
v___x_983_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__20));
v___x_984_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_984_, 0, v___x_967_);
lean_ctor_set(v___x_984_, 1, v___x_980_);
lean_ctor_set(v___x_984_, 2, v___x_982_);
lean_ctor_set(v___x_984_, 3, v___x_983_);
v___x_985_ = l_Lean_Syntax_node1(v___x_967_, v___x_979_, v___x_984_);
v___x_986_ = l_Lean_Syntax_node2(v___x_967_, v___x_976_, v___x_978_, v___x_985_);
v___x_987_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__1));
v___x_988_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__2));
v___x_989_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_967_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__5));
v___x_991_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__7));
v___x_992_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__8));
v___x_993_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__9));
v___x_994_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_967_);
lean_ctor_set(v___x_994_, 1, v___x_992_);
v___x_995_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__21));
v___x_996_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__22));
v___x_997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_967_);
lean_ctor_set(v___x_997_, 1, v___x_995_);
v___x_998_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__24));
v___x_999_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__termPost_u27e8___x2c_x2c_u27e9__1___closed__13);
v_sz_1000_ = lean_array_size(v_xs_965_);
v___x_1001_ = ((size_t)0ULL);
v___x_1002_ = l_unsafeCast___redArg(v_xs_965_);
lean_dec(v_xs_965_);
v___x_1003_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1_spec__0(v_sz_1000_, v___x_1001_, v___x_1002_);
v___x_1004_ = l_unsafeCast___redArg(v___x_1003_);
lean_dec_ref(v___x_1003_);
v___x_1005_ = l_unsafeCast___redArg(v___x_1004_);
lean_dec(v___x_1004_);
v___x_1006_ = l_Array_append___redArg(v___x_999_, v___x_1005_);
lean_dec(v___x_1005_);
v___x_1007_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1007_, 0, v___x_967_);
lean_ctor_set(v___x_1007_, 1, v___x_974_);
lean_ctor_set(v___x_1007_, 2, v___x_1006_);
v___x_1008_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1008_, 0, v___x_967_);
lean_ctor_set(v___x_1008_, 1, v___x_974_);
lean_ctor_set(v___x_1008_, 2, v___x_999_);
v___x_1009_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__25));
v___x_1010_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_967_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__27));
v___x_1012_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__28));
v___x_1013_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_967_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3___x3d_x3e____1___closed__29));
v___x_1015_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_967_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
lean_inc_ref(v___x_1015_);
v___x_1016_ = l_Lean_Syntax_node3(v___x_967_, v___x_1011_, v___x_1013_, v___x_963_, v___x_1015_);
v___x_1017_ = l_Lean_Syntax_node4(v___x_967_, v___x_998_, v___x_1007_, v___x_1008_, v___x_1010_, v___x_1016_);
v___x_1018_ = l_Lean_Syntax_node2(v___x_967_, v___x_996_, v___x_997_, v___x_1017_);
v___x_1019_ = l_Lean_Syntax_node2(v___x_967_, v___x_993_, v___x_994_, v___x_1018_);
v___x_1020_ = l_Lean_Syntax_node1(v___x_967_, v___x_974_, v___x_1019_);
v___x_1021_ = l_Lean_Syntax_node1(v___x_967_, v___x_991_, v___x_1020_);
v___x_1022_ = l_Lean_Syntax_node1(v___x_967_, v___x_990_, v___x_1021_);
v___x_1023_ = l_Lean_Syntax_node2(v___x_967_, v___x_987_, v___x_989_, v___x_1022_);
v___x_1024_ = l_Lean_Syntax_node3(v___x_967_, v___x_975_, v___x_986_, v___x_1023_, v___x_1015_);
v___x_1025_ = l_Lean_Syntax_node1(v___x_967_, v___x_974_, v___x_1024_);
v___x_1026_ = l_Lean_Syntax_node2(v___x_967_, v___x_968_, v___x_973_, v___x_1025_);
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_ctor_set(v___x_1027_, 1, v_a_952_);
return v___x_1027_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1___boxed(lean_object* v_x_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u21d3_x3f___x3d_x3e____1(v_x_1028_, v_a_1029_, v_a_1030_);
lean_dec_ref(v_a_1029_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg___lam__0(lean_object* v_x_1032_){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_box(0);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg___lam__0___boxed(lean_object* v_x_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Std_Do_instInhabitedPostCond___redArg___lam__0(v_x_1034_);
lean_dec(v_x_1034_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg___lam__1(lean_object* v_ps_1036_, lean_object* v___f_1037_, lean_object* v_x_1038_){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = l_Std_Do_PostShape_args(v_ps_1036_);
v___x_1040_ = l_Std_Do_SVal_curry___redArg(v___x_1039_, lean_box(0));
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg___lam__1___boxed(lean_object* v_ps_1041_, lean_object* v___f_1042_, lean_object* v_x_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Std_Do_instInhabitedPostCond___redArg___lam__1(v_ps_1041_, v___f_1042_, v_x_1043_);
lean_dec(v_x_1043_);
lean_dec(v_ps_1041_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond___redArg(lean_object* v_ps_1045_){
_start:
{
lean_object* v___f_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_inc(v_ps_1045_);
v___f_1046_ = lean_alloc_closure((void*)(l_Std_Do_instInhabitedPostCond___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_1046_, 0, v_ps_1045_);
lean_closure_set(v___f_1046_, 1, lean_box(0));
v___x_1047_ = l_Std_Do_ExceptConds_const___redArg(v_ps_1045_);
v___x_1048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___f_1046_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_instInhabitedPostCond(lean_object* v_ps_1049_, lean_object* v_00_u03b1_1050_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Std_Do_instInhabitedPostCond___redArg(v_ps_1049_);
return v___x_1051_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__1(void){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__0));
v___x_1072_ = l_String_toRawSubstring_x27(v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1(lean_object* v_x_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_){
_start:
{
lean_object* v___x_1090_; uint8_t v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Std_Do_term___u22a2_u209a___00__closed__1));
lean_inc(v_x_1087_);
v___x_1091_ = l_Lean_Syntax_isOfKind(v_x_1087_, v___x_1090_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
lean_dec(v_x_1087_);
v___x_1092_ = lean_box(1);
v___x_1093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
lean_ctor_set(v___x_1093_, 1, v_a_1089_);
return v___x_1093_;
}
else
{
lean_object* v_quotContext_1094_; lean_object* v_currMacroScope_1095_; lean_object* v_ref_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; uint8_t v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_quotContext_1094_ = lean_ctor_get(v_a_1088_, 1);
v_currMacroScope_1095_ = lean_ctor_get(v_a_1088_, 2);
v_ref_1096_ = lean_ctor_get(v_a_1088_, 5);
v___x_1097_ = lean_unsigned_to_nat(0u);
v___x_1098_ = l_Lean_Syntax_getArg(v_x_1087_, v___x_1097_);
v___x_1099_ = lean_unsigned_to_nat(2u);
v___x_1100_ = l_Lean_Syntax_getArg(v_x_1087_, v___x_1099_);
lean_dec(v_x_1087_);
v___x_1101_ = 0;
v___x_1102_ = l_Lean_SourceInfo_fromRef(v_ref_1096_, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
v___x_1104_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__1, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__1);
v___x_1105_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__2));
lean_inc(v_currMacroScope_1095_);
lean_inc(v_quotContext_1094_);
v___x_1106_ = l_Lean_addMacroScope(v_quotContext_1094_, v___x_1105_, v_currMacroScope_1095_);
v___x_1107_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___closed__5));
lean_inc_n(v___x_1102_, 2);
v___x_1108_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1102_);
lean_ctor_set(v___x_1108_, 1, v___x_1104_);
lean_ctor_set(v___x_1108_, 2, v___x_1106_);
lean_ctor_set(v___x_1108_, 3, v___x_1107_);
v___x_1109_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_1110_ = l_Lean_Syntax_node2(v___x_1102_, v___x_1109_, v___x_1098_, v___x_1100_);
v___x_1111_ = l_Lean_Syntax_node2(v___x_1102_, v___x_1103_, v___x_1108_, v___x_1110_);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
lean_ctor_set(v___x_1112_, 1, v_a_1089_);
return v___x_1112_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1___boxed(lean_object* v_x_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u209a____1(v_x_1113_, v_a_1114_, v_a_1115_);
lean_dec_ref(v_a_1114_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__entails__1(lean_object* v_x_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1120_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
lean_inc(v_x_1117_);
v___x_1121_ = l_Lean_Syntax_isOfKind(v_x_1117_, v___x_1120_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
lean_dec(v_x_1117_);
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
lean_ctor_set(v___x_1123_, 1, v_a_1119_);
return v___x_1123_;
}
else
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; uint8_t v___x_1127_; 
v___x_1124_ = lean_unsigned_to_nat(0u);
v___x_1125_ = l_Lean_Syntax_getArg(v_x_1117_, v___x_1124_);
v___x_1126_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1));
lean_inc(v___x_1125_);
v___x_1127_ = l_Lean_Syntax_isOfKind(v___x_1125_, v___x_1126_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_dec(v___x_1125_);
lean_dec(v_x_1117_);
v___x_1128_ = lean_box(0);
v___x_1129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
lean_ctor_set(v___x_1129_, 1, v_a_1119_);
return v___x_1129_;
}
else
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; uint8_t v___x_1133_; 
v___x_1130_ = lean_unsigned_to_nat(1u);
v___x_1131_ = l_Lean_Syntax_getArg(v_x_1117_, v___x_1130_);
lean_dec(v_x_1117_);
v___x_1132_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1131_);
v___x_1133_ = l_Lean_Syntax_matchesNull(v___x_1131_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_dec(v___x_1131_);
lean_dec(v___x_1125_);
v___x_1134_ = lean_box(0);
v___x_1135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v_a_1119_);
return v___x_1135_;
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v_ref_1138_; uint8_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1136_ = l_Lean_Syntax_getArg(v___x_1131_, v___x_1124_);
v___x_1137_ = l_Lean_Syntax_getArg(v___x_1131_, v___x_1130_);
lean_dec(v___x_1131_);
v_ref_1138_ = l_Lean_replaceRef(v___x_1125_, v_a_1118_);
lean_dec(v___x_1125_);
v___x_1139_ = 0;
v___x_1140_ = l_Lean_SourceInfo_fromRef(v_ref_1138_, v___x_1139_);
lean_dec(v_ref_1138_);
v___x_1141_ = ((lean_object*)(l_Std_Do_term___u22a2_u209a___00__closed__1));
v___x_1142_ = ((lean_object*)(l_Std_Do_term___u22a2_u209a___00__closed__2));
lean_inc(v___x_1140_);
v___x_1143_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1140_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = l_Lean_Syntax_node3(v___x_1140_, v___x_1141_, v___x_1136_, v___x_1143_, v___x_1137_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
lean_ctor_set(v___x_1145_, 1, v_a_1119_);
return v___x_1145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__entails__1___boxed(lean_object* v_x_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__entails__1(v_x_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1147_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_and___redArg___lam__0(lean_object* v_ps_1150_, lean_object* v_fst_1151_, lean_object* v_fst_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1154_ = l_Std_Do_PostShape_args(v_ps_1150_);
lean_inc(v_a_1153_);
v___x_1155_ = lean_apply_1(v_fst_1151_, v_a_1153_);
v___x_1156_ = lean_apply_1(v_fst_1152_, v_a_1153_);
v___x_1157_ = l_Std_Do_SPred_and(v___x_1154_, v___x_1155_, v___x_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_and___redArg___lam__0___boxed(lean_object* v_ps_1158_, lean_object* v_fst_1159_, lean_object* v_fst_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Std_Do_PostCond_and___redArg___lam__0(v_ps_1158_, v_fst_1159_, v_fst_1160_, v_a_1161_);
lean_dec(v_ps_1158_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_and___redArg(lean_object* v_ps_1163_, lean_object* v_p_1164_, lean_object* v_q_1165_){
_start:
{
lean_object* v_fst_1166_; lean_object* v_snd_1167_; lean_object* v_fst_1168_; lean_object* v_snd_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1178_; 
v_fst_1166_ = lean_ctor_get(v_p_1164_, 0);
lean_inc(v_fst_1166_);
v_snd_1167_ = lean_ctor_get(v_p_1164_, 1);
lean_inc(v_snd_1167_);
lean_dec_ref(v_p_1164_);
v_fst_1168_ = lean_ctor_get(v_q_1165_, 0);
v_snd_1169_ = lean_ctor_get(v_q_1165_, 1);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_q_1165_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1171_ = v_q_1165_;
v_isShared_1172_ = v_isSharedCheck_1178_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_snd_1169_);
lean_inc(v_fst_1168_);
lean_dec(v_q_1165_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1178_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___f_1173_; lean_object* v___x_1174_; lean_object* v___x_1176_; 
lean_inc(v_ps_1163_);
v___f_1173_ = lean_alloc_closure((void*)(l_Std_Do_PostCond_and___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1173_, 0, v_ps_1163_);
lean_closure_set(v___f_1173_, 1, v_fst_1166_);
lean_closure_set(v___f_1173_, 2, v_fst_1168_);
v___x_1174_ = l_Std_Do_ExceptConds_and(v_ps_1163_, v_snd_1167_, v_snd_1169_);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 1, v___x_1174_);
lean_ctor_set(v___x_1171_, 0, v___f_1173_);
v___x_1176_ = v___x_1171_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___f_1173_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v___x_1174_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_and(lean_object* v_00_u03b1_1179_, lean_object* v_ps_1180_, lean_object* v_p_1181_, lean_object* v_q_1182_){
_start:
{
lean_object* v_fst_1183_; lean_object* v_snd_1184_; lean_object* v_fst_1185_; lean_object* v_snd_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1195_; 
v_fst_1183_ = lean_ctor_get(v_p_1181_, 0);
lean_inc(v_fst_1183_);
v_snd_1184_ = lean_ctor_get(v_p_1181_, 1);
lean_inc(v_snd_1184_);
lean_dec_ref(v_p_1181_);
v_fst_1185_ = lean_ctor_get(v_q_1182_, 0);
v_snd_1186_ = lean_ctor_get(v_q_1182_, 1);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_q_1182_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1188_ = v_q_1182_;
v_isShared_1189_ = v_isSharedCheck_1195_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_snd_1186_);
lean_inc(v_fst_1185_);
lean_dec(v_q_1182_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1195_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___f_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
lean_inc(v_ps_1180_);
v___f_1190_ = lean_alloc_closure((void*)(l_Std_Do_PostCond_and___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1190_, 0, v_ps_1180_);
lean_closure_set(v___f_1190_, 1, v_fst_1183_);
lean_closure_set(v___f_1190_, 2, v_fst_1185_);
v___x_1191_ = l_Std_Do_ExceptConds_and(v_ps_1180_, v_snd_1184_, v_snd_1186_);
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 1, v___x_1191_);
lean_ctor_set(v___x_1188_, 0, v___f_1190_);
v___x_1193_ = v___x_1188_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___f_1190_);
lean_ctor_set(v_reuseFailAlloc_1194_, 1, v___x_1191_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__1(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__0));
v___x_1216_ = l_String_toRawSubstring_x27(v___x_1215_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1(lean_object* v_x_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1234_ = ((lean_object*)(l_Std_Do_term___u2227_u209a___00__closed__1));
lean_inc(v_x_1231_);
v___x_1235_ = l_Lean_Syntax_isOfKind(v_x_1231_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
lean_dec(v_x_1231_);
v___x_1236_ = lean_box(1);
v___x_1237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
lean_ctor_set(v___x_1237_, 1, v_a_1233_);
return v___x_1237_;
}
else
{
lean_object* v_quotContext_1238_; lean_object* v_currMacroScope_1239_; lean_object* v_ref_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v_quotContext_1238_ = lean_ctor_get(v_a_1232_, 1);
v_currMacroScope_1239_ = lean_ctor_get(v_a_1232_, 2);
v_ref_1240_ = lean_ctor_get(v_a_1232_, 5);
v___x_1241_ = lean_unsigned_to_nat(0u);
v___x_1242_ = l_Lean_Syntax_getArg(v_x_1231_, v___x_1241_);
v___x_1243_ = lean_unsigned_to_nat(2u);
v___x_1244_ = l_Lean_Syntax_getArg(v_x_1231_, v___x_1243_);
lean_dec(v_x_1231_);
v___x_1245_ = 0;
v___x_1246_ = l_Lean_SourceInfo_fromRef(v_ref_1240_, v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
v___x_1248_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__1, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__1);
v___x_1249_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__2));
lean_inc(v_currMacroScope_1239_);
lean_inc(v_quotContext_1238_);
v___x_1250_ = l_Lean_addMacroScope(v_quotContext_1238_, v___x_1249_, v_currMacroScope_1239_);
v___x_1251_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___closed__5));
lean_inc_n(v___x_1246_, 2);
v___x_1252_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1246_);
lean_ctor_set(v___x_1252_, 1, v___x_1248_);
lean_ctor_set(v___x_1252_, 2, v___x_1250_);
lean_ctor_set(v___x_1252_, 3, v___x_1251_);
v___x_1253_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_1254_ = l_Lean_Syntax_node2(v___x_1246_, v___x_1253_, v___x_1242_, v___x_1244_);
v___x_1255_ = l_Lean_Syntax_node2(v___x_1246_, v___x_1247_, v___x_1252_, v___x_1254_);
v___x_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set(v___x_1256_, 1, v_a_1233_);
return v___x_1256_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1___boxed(lean_object* v_x_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2227_u209a____1(v_x_1257_, v_a_1258_, v_a_1259_);
lean_dec_ref(v_a_1258_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__and__1(lean_object* v_x_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_){
_start:
{
lean_object* v___x_1264_; uint8_t v___x_1265_; 
v___x_1264_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
lean_inc(v_x_1261_);
v___x_1265_ = l_Lean_Syntax_isOfKind(v_x_1261_, v___x_1264_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
lean_dec(v_x_1261_);
v___x_1266_ = lean_box(0);
v___x_1267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
lean_ctor_set(v___x_1267_, 1, v_a_1263_);
return v___x_1267_;
}
else
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1268_ = lean_unsigned_to_nat(0u);
v___x_1269_ = l_Lean_Syntax_getArg(v_x_1261_, v___x_1268_);
v___x_1270_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1));
lean_inc(v___x_1269_);
v___x_1271_ = l_Lean_Syntax_isOfKind(v___x_1269_, v___x_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
lean_dec(v___x_1269_);
lean_dec(v_x_1261_);
v___x_1272_ = lean_box(0);
v___x_1273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v_a_1263_);
return v___x_1273_;
}
else
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1274_ = lean_unsigned_to_nat(1u);
v___x_1275_ = l_Lean_Syntax_getArg(v_x_1261_, v___x_1274_);
lean_dec(v_x_1261_);
v___x_1276_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1275_);
v___x_1277_ = l_Lean_Syntax_matchesNull(v___x_1275_, v___x_1276_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_dec(v___x_1275_);
lean_dec(v___x_1269_);
v___x_1278_ = lean_box(0);
v___x_1279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
lean_ctor_set(v___x_1279_, 1, v_a_1263_);
return v___x_1279_;
}
else
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v_ref_1282_; uint8_t v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1280_ = l_Lean_Syntax_getArg(v___x_1275_, v___x_1268_);
v___x_1281_ = l_Lean_Syntax_getArg(v___x_1275_, v___x_1274_);
lean_dec(v___x_1275_);
v_ref_1282_ = l_Lean_replaceRef(v___x_1269_, v_a_1262_);
lean_dec(v___x_1269_);
v___x_1283_ = 0;
v___x_1284_ = l_Lean_SourceInfo_fromRef(v_ref_1282_, v___x_1283_);
lean_dec(v_ref_1282_);
v___x_1285_ = ((lean_object*)(l_Std_Do_term___u2227_u209a___00__closed__1));
v___x_1286_ = ((lean_object*)(l_Std_Do_term___u2227_u209a___00__closed__2));
lean_inc(v___x_1284_);
v___x_1287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1284_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = l_Lean_Syntax_node3(v___x_1284_, v___x_1285_, v___x_1280_, v___x_1287_, v___x_1281_);
v___x_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v_a_1263_);
return v___x_1289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__and__1___boxed(lean_object* v_x_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__and__1(v_x_1290_, v_a_1291_, v_a_1292_);
lean_dec(v_a_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_imp___redArg___lam__0(lean_object* v_ps_1294_, lean_object* v_fst_1295_, lean_object* v_fst_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1298_ = l_Std_Do_PostShape_args(v_ps_1294_);
lean_inc(v_a_1297_);
v___x_1299_ = lean_apply_1(v_fst_1295_, v_a_1297_);
v___x_1300_ = lean_apply_1(v_fst_1296_, v_a_1297_);
v___x_1301_ = l_Std_Do_SPred_imp(v___x_1298_, v___x_1299_, v___x_1300_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_imp___redArg___lam__0___boxed(lean_object* v_ps_1302_, lean_object* v_fst_1303_, lean_object* v_fst_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Std_Do_PostCond_imp___redArg___lam__0(v_ps_1302_, v_fst_1303_, v_fst_1304_, v_a_1305_);
lean_dec(v_ps_1302_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_imp___redArg(lean_object* v_ps_1307_, lean_object* v_p_1308_, lean_object* v_q_1309_){
_start:
{
lean_object* v_fst_1310_; lean_object* v_snd_1311_; lean_object* v_fst_1312_; lean_object* v_snd_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1322_; 
v_fst_1310_ = lean_ctor_get(v_p_1308_, 0);
lean_inc(v_fst_1310_);
v_snd_1311_ = lean_ctor_get(v_p_1308_, 1);
lean_inc(v_snd_1311_);
lean_dec_ref(v_p_1308_);
v_fst_1312_ = lean_ctor_get(v_q_1309_, 0);
v_snd_1313_ = lean_ctor_get(v_q_1309_, 1);
v_isSharedCheck_1322_ = !lean_is_exclusive(v_q_1309_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1315_ = v_q_1309_;
v_isShared_1316_ = v_isSharedCheck_1322_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_snd_1313_);
lean_inc(v_fst_1312_);
lean_dec(v_q_1309_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1322_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___f_1317_; lean_object* v___x_1318_; lean_object* v___x_1320_; 
lean_inc(v_ps_1307_);
v___f_1317_ = lean_alloc_closure((void*)(l_Std_Do_PostCond_imp___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1317_, 0, v_ps_1307_);
lean_closure_set(v___f_1317_, 1, v_fst_1310_);
lean_closure_set(v___f_1317_, 2, v_fst_1312_);
v___x_1318_ = l_Std_Do_ExceptConds_imp(v_ps_1307_, v_snd_1311_, v_snd_1313_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 1, v___x_1318_);
lean_ctor_set(v___x_1315_, 0, v___f_1317_);
v___x_1320_ = v___x_1315_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___f_1317_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_PostCond_imp(lean_object* v_00_u03b1_1323_, lean_object* v_ps_1324_, lean_object* v_p_1325_, lean_object* v_q_1326_){
_start:
{
lean_object* v_fst_1327_; lean_object* v_snd_1328_; lean_object* v_fst_1329_; lean_object* v_snd_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1339_; 
v_fst_1327_ = lean_ctor_get(v_p_1325_, 0);
lean_inc(v_fst_1327_);
v_snd_1328_ = lean_ctor_get(v_p_1325_, 1);
lean_inc(v_snd_1328_);
lean_dec_ref(v_p_1325_);
v_fst_1329_ = lean_ctor_get(v_q_1326_, 0);
v_snd_1330_ = lean_ctor_get(v_q_1326_, 1);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_q_1326_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1332_ = v_q_1326_;
v_isShared_1333_ = v_isSharedCheck_1339_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_snd_1330_);
lean_inc(v_fst_1329_);
lean_dec(v_q_1326_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1339_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___f_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; 
lean_inc(v_ps_1324_);
v___f_1334_ = lean_alloc_closure((void*)(l_Std_Do_PostCond_imp___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1334_, 0, v_ps_1324_);
lean_closure_set(v___f_1334_, 1, v_fst_1327_);
lean_closure_set(v___f_1334_, 2, v_fst_1329_);
v___x_1335_ = l_Std_Do_ExceptConds_imp(v_ps_1324_, v_snd_1328_, v_snd_1330_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 1, v___x_1335_);
lean_ctor_set(v___x_1332_, 0, v___f_1334_);
v___x_1337_ = v___x_1332_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___f_1334_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__1(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__0));
v___x_1360_ = l_String_toRawSubstring_x27(v___x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1(lean_object* v_x_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1378_ = ((lean_object*)(l_Std_Do_term___u2192_u209a___00__closed__1));
lean_inc(v_x_1375_);
v___x_1379_ = l_Lean_Syntax_isOfKind(v_x_1375_, v___x_1378_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
lean_dec(v_x_1375_);
v___x_1380_ = lean_box(1);
v___x_1381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
lean_ctor_set(v___x_1381_, 1, v_a_1377_);
return v___x_1381_;
}
else
{
lean_object* v_quotContext_1382_; lean_object* v_currMacroScope_1383_; lean_object* v_ref_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; uint8_t v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v_quotContext_1382_ = lean_ctor_get(v_a_1376_, 1);
v_currMacroScope_1383_ = lean_ctor_get(v_a_1376_, 2);
v_ref_1384_ = lean_ctor_get(v_a_1376_, 5);
v___x_1385_ = lean_unsigned_to_nat(0u);
v___x_1386_ = l_Lean_Syntax_getArg(v_x_1375_, v___x_1385_);
v___x_1387_ = lean_unsigned_to_nat(2u);
v___x_1388_ = l_Lean_Syntax_getArg(v_x_1375_, v___x_1387_);
lean_dec(v_x_1375_);
v___x_1389_ = 0;
v___x_1390_ = l_Lean_SourceInfo_fromRef(v_ref_1384_, v___x_1389_);
v___x_1391_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
v___x_1392_ = lean_obj_once(&l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__1, &l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__1);
v___x_1393_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__2));
lean_inc(v_currMacroScope_1383_);
lean_inc(v_quotContext_1382_);
v___x_1394_ = l_Lean_addMacroScope(v_quotContext_1382_, v___x_1393_, v_currMacroScope_1383_);
v___x_1395_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___closed__5));
lean_inc_n(v___x_1390_, 2);
v___x_1396_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1390_);
lean_ctor_set(v___x_1396_, 1, v___x_1392_);
lean_ctor_set(v___x_1396_, 2, v___x_1394_);
lean_ctor_set(v___x_1396_, 3, v___x_1395_);
v___x_1397_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__16));
v___x_1398_ = l_Lean_Syntax_node2(v___x_1390_, v___x_1397_, v___x_1386_, v___x_1388_);
v___x_1399_ = l_Lean_Syntax_node2(v___x_1390_, v___x_1391_, v___x_1396_, v___x_1398_);
v___x_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
lean_ctor_set(v___x_1400_, 1, v_a_1377_);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1___boxed(lean_object* v_x_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u2192_u209a____1(v_x_1401_, v_a_1402_, v_a_1403_);
lean_dec_ref(v_a_1402_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__imp__1(lean_object* v_x_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_){
_start:
{
lean_object* v___x_1408_; uint8_t v___x_1409_; 
v___x_1408_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______macroRules__Std__Do__term___u22a2_u2091____1___closed__4));
lean_inc(v_x_1405_);
v___x_1409_ = l_Lean_Syntax_isOfKind(v_x_1405_, v___x_1408_);
if (v___x_1409_ == 0)
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_dec(v_x_1405_);
v___x_1410_ = lean_box(0);
v___x_1411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
lean_ctor_set(v___x_1411_, 1, v_a_1407_);
return v___x_1411_;
}
else
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; uint8_t v___x_1415_; 
v___x_1412_ = lean_unsigned_to_nat(0u);
v___x_1413_ = l_Lean_Syntax_getArg(v_x_1405_, v___x_1412_);
v___x_1414_ = ((lean_object*)(l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__ExceptConds__entails__1___closed__1));
lean_inc(v___x_1413_);
v___x_1415_ = l_Lean_Syntax_isOfKind(v___x_1413_, v___x_1414_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
lean_dec(v___x_1413_);
lean_dec(v_x_1405_);
v___x_1416_ = lean_box(0);
v___x_1417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
lean_ctor_set(v___x_1417_, 1, v_a_1407_);
return v___x_1417_;
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; uint8_t v___x_1421_; 
v___x_1418_ = lean_unsigned_to_nat(1u);
v___x_1419_ = l_Lean_Syntax_getArg(v_x_1405_, v___x_1418_);
lean_dec(v_x_1405_);
v___x_1420_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1419_);
v___x_1421_ = l_Lean_Syntax_matchesNull(v___x_1419_, v___x_1420_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
lean_dec(v___x_1419_);
lean_dec(v___x_1413_);
v___x_1422_ = lean_box(0);
v___x_1423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
lean_ctor_set(v___x_1423_, 1, v_a_1407_);
return v___x_1423_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v_ref_1426_; uint8_t v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1424_ = l_Lean_Syntax_getArg(v___x_1419_, v___x_1412_);
v___x_1425_ = l_Lean_Syntax_getArg(v___x_1419_, v___x_1418_);
lean_dec(v___x_1419_);
v_ref_1426_ = l_Lean_replaceRef(v___x_1413_, v_a_1406_);
lean_dec(v___x_1413_);
v___x_1427_ = 0;
v___x_1428_ = l_Lean_SourceInfo_fromRef(v_ref_1426_, v___x_1427_);
lean_dec(v_ref_1426_);
v___x_1429_ = ((lean_object*)(l_Std_Do_term___u2192_u209a___00__closed__1));
v___x_1430_ = ((lean_object*)(l_Std_Do_term___u2192_u209a___00__closed__2));
lean_inc(v___x_1428_);
v___x_1431_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1428_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = l_Lean_Syntax_node3(v___x_1428_, v___x_1429_, v___x_1424_, v___x_1431_, v___x_1425_);
v___x_1433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
lean_ctor_set(v___x_1433_, 1, v_a_1407_);
return v___x_1433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__imp__1___boxed(lean_object* v_x_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Std_Do___aux__Std__Do__PostCond______unexpand__Std__Do__PostCond__imp__1(v_x_1434_, v_a_1435_, v_a_1436_);
lean_dec(v_a_1435_);
return v_res_1437_;
}
}
lean_object* runtime_initialize_Std_Do_SPred(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Do_PostCond(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_SPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Do_PostCond(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_SPred(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Do_PostCond(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_SPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_PostCond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Do_PostCond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Do_PostCond(builtin);
}
#ifdef __cplusplus
}
#endif

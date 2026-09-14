// Lean compiler output
// Module: Std.Do.WP.Basic
// Imports: public import Std.Do.PredTrans
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
lean_object* l_Std_Do_PredTrans_pure___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_pushExcept___redArg___lam__1(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Std_Do_PredTrans_pure___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_bind___redArg___lam__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_pushArg___redArg___lam__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Do_PredTrans_pushOption___redArg___lam__1(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 11, .m_data = "termWp⟦_:_⟧"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__2 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__2_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value_aux_0),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value_aux_1),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 96, 4, 176, 128, 111, 85, 188)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__4 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__4_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "wp⟦"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__7 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__7_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__8 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__8_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9_value),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__10 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__10_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__7_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__10_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__11 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__11_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__12 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__12_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__12_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__13 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__13_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__15 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__15_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__16 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__16_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__15_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__16_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__17 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__17_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__13_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__17_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__18 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__18_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__11_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__18_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__19 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__19_value;
static const lean_string_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟧"};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__21 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__21_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__5_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__19_value),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__21_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__22 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__22_value;
static const lean_ctor_object l_Std_Do_termWp_u27e6___x3a___u27e7___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__22_value)}};
static const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7___closed__23 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__23_value;
LEAN_EXPORT const lean_object* l_Std_Do_termWp_u27e6___x3a___u27e7 = (const lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__23_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__7_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__12_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13;
static lean_once_cell_t l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15_value_aux_0),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__15_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "WP.wp"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WP"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wp"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(46, 215, 163, 54, 140, 34, 198, 104)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(252, 184, 149, 68, 51, 92, 194, 92)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value_aux_0),((lean_object*)&l_Std_Do_termWp_u27e6___x3a___u27e7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(209, 91, 166, 6, 71, 210, 197, 93)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(111, 2, 24, 48, 222, 174, 4, 243)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33_value;
static const lean_string_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35;
static const lean_ctor_object l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(171, 239, 198, 100, 229, 128, 136, 1)}};
static const lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__36 = (const lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__36_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Do_unexpandWP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(13, 5, 49, 23, 162, 70, 143, 74)}};
static const lean_object* l_Std_Do_unexpandWP___closed__0 = (const lean_object*)&l_Std_Do_unexpandWP___closed__0_value;
static lean_once_cell_t l_Std_Do_unexpandWP___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_unexpandWP___closed__1;
LEAN_EXPORT lean_object* l_Std_Do_unexpandWP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_unexpandWP___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Id_instWP___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_Id_instWP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_Id_instWP___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_Id_instWP___closed__0 = (const lean_object*)&l_Std_Do_Id_instWP___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Do_Id_instWP = (const lean_object*)&l_Std_Do_Id_instWP___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_EStateM_instWP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_EStateM_instWP___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_EStateM_instWP___redArg___closed__0 = (const lean_object*)&l_Std_Do_EStateM_instWP___redArg___closed__0_value;
static const lean_closure_object l_Std_Do_EStateM_instWP___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_EStateM_instWP___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Do_EStateM_instWP___redArg___closed__0_value)} };
static const lean_object* l_Std_Do_EStateM_instWP___redArg___closed__1 = (const lean_object*)&l_Std_Do_EStateM_instWP___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg();
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Do_EStateM_instWP___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_EStateM_instWP___closed__0;
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_State_instWP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_State_instWP___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_State_instWP___redArg___closed__0 = (const lean_object*)&l_Std_Do_State_instWP___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg();
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_State_instWP(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_Reader_instWP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_Reader_instWP___redArg___lam__0, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Do_Reader_instWP___redArg___closed__0 = (const lean_object*)&l_Std_Do_Reader_instWP___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg();
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Do_Reader_instWP___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_Reader_instWP___closed__0;
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___aux__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_Except_instWP___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_Except_instWP___aux__1, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Do_Except_instWP___redArg___closed__0 = (const lean_object*)&l_Std_Do_Except_instWP___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg();
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Option_instWP___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_Option_instWP___aux__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Do_Option_instWP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Do_Option_instWP___aux__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Do_Option_instWP___closed__0 = (const lean_object*)&l_Std_Do_Option_instWP___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Do_Option_instWP = (const lean_object*)&l_Std_Do_Option_instWP___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Do_WP_Basic_0__Std_Do_EStateM_instWP_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Do_WP_Basic_0__Std_Do_EStateM_instWP_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__12));
v___x_83_ = l_String_toRawSubstring_x27(v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_box(0);
v___x_85_ = l_unsafeCast___redArg(v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__20));
v___x_102_ = l_String_toRawSubstring_x27(v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__34));
v___x_132_ = l_String_toRawSubstring_x27(v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1(lean_object* v_x_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_138_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
lean_inc(v_x_135_);
v___x_139_ = l_Lean_Syntax_isOfKind(v_x_135_, v___x_138_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; 
lean_dec(v_x_135_);
v___x_140_ = lean_box(1);
v___x_141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v_a_137_);
return v___x_141_;
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_unsigned_to_nat(1u);
v___x_144_ = l_Lean_Syntax_getArg(v_x_135_, v___x_143_);
v___x_145_ = lean_unsigned_to_nat(2u);
v___x_146_ = l_Lean_Syntax_getArg(v_x_135_, v___x_145_);
lean_dec(v_x_135_);
lean_inc(v___x_146_);
v___x_147_ = l_Lean_Syntax_matchesNull(v___x_146_, v___x_142_);
if (v___x_147_ == 0)
{
uint8_t v___x_148_; 
lean_inc(v___x_146_);
v___x_148_ = l_Lean_Syntax_matchesNull(v___x_146_, v___x_145_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; 
lean_dec(v___x_146_);
lean_dec(v___x_144_);
v___x_149_ = lean_box(1);
v___x_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v_a_137_);
return v___x_150_;
}
else
{
lean_object* v_quotContext_151_; lean_object* v_currMacroScope_152_; lean_object* v_ref_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_quotContext_151_ = lean_ctor_get(v_a_136_, 1);
v_currMacroScope_152_ = lean_ctor_get(v_a_136_, 2);
v_ref_153_ = lean_ctor_get(v_a_136_, 5);
v___x_154_ = l_Lean_Syntax_getArg(v___x_146_, v___x_143_);
lean_dec(v___x_146_);
v___x_155_ = l_Lean_SourceInfo_fromRef(v_ref_153_, v___x_147_);
v___x_156_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4));
v___x_157_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6));
v___x_158_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8));
v___x_159_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9));
lean_inc_n(v___x_155_, 14);
v___x_160_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_155_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11));
v___x_162_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13);
v___x_163_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14);
lean_inc_n(v_currMacroScope_152_, 3);
lean_inc_n(v_quotContext_151_, 3);
v___x_164_ = l_Lean_addMacroScope(v_quotContext_151_, v___x_163_, v_currMacroScope_152_);
v___x_165_ = lean_box(0);
v___x_166_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17));
v___x_167_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_167_, 0, v___x_155_);
lean_ctor_set(v___x_167_, 1, v___x_162_);
lean_ctor_set(v___x_167_, 2, v___x_164_);
lean_ctor_set(v___x_167_, 3, v___x_166_);
v___x_168_ = l_Lean_Syntax_node1(v___x_155_, v___x_161_, v___x_167_);
v___x_169_ = l_Lean_Syntax_node2(v___x_155_, v___x_158_, v___x_160_, v___x_168_);
v___x_170_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19));
v___x_171_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21);
v___x_172_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24));
v___x_173_ = l_Lean_addMacroScope(v_quotContext_151_, v___x_172_, v_currMacroScope_152_);
v___x_174_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27));
v___x_175_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_175_, 0, v___x_155_);
lean_ctor_set(v___x_175_, 1, v___x_171_);
lean_ctor_set(v___x_175_, 2, v___x_173_);
lean_ctor_set(v___x_175_, 3, v___x_174_);
v___x_176_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29));
v___x_177_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31));
v___x_178_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14));
v___x_179_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_155_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = l_Lean_Syntax_node1(v___x_155_, v___x_176_, v___x_154_);
v___x_181_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32));
v___x_182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_155_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
lean_inc_ref(v___x_182_);
lean_inc(v___x_169_);
v___x_183_ = l_Lean_Syntax_node5(v___x_155_, v___x_177_, v___x_169_, v___x_144_, v___x_179_, v___x_180_, v___x_182_);
v___x_184_ = l_Lean_Syntax_node1(v___x_155_, v___x_176_, v___x_183_);
v___x_185_ = l_Lean_Syntax_node2(v___x_155_, v___x_170_, v___x_175_, v___x_184_);
v___x_186_ = l_Lean_Syntax_node3(v___x_155_, v___x_157_, v___x_169_, v___x_185_, v___x_182_);
v___x_187_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33));
v___x_188_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_155_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35);
v___x_190_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__36));
v___x_191_ = l_Lean_addMacroScope(v_quotContext_151_, v___x_190_, v_currMacroScope_152_);
v___x_192_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_192_, 0, v___x_155_);
lean_ctor_set(v___x_192_, 1, v___x_189_);
lean_ctor_set(v___x_192_, 2, v___x_191_);
lean_ctor_set(v___x_192_, 3, v___x_165_);
v___x_193_ = l_Lean_Syntax_node3(v___x_155_, v___x_156_, v___x_186_, v___x_188_, v___x_192_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set(v___x_194_, 1, v_a_137_);
return v___x_194_;
}
}
else
{
lean_object* v_quotContext_195_; lean_object* v_currMacroScope_196_; lean_object* v_ref_197_; uint8_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
lean_dec(v___x_146_);
v_quotContext_195_ = lean_ctor_get(v_a_136_, 1);
v_currMacroScope_196_ = lean_ctor_get(v_a_136_, 2);
v_ref_197_ = lean_ctor_get(v_a_136_, 5);
v___x_198_ = 0;
v___x_199_ = l_Lean_SourceInfo_fromRef(v_ref_197_, v___x_198_);
v___x_200_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__4));
v___x_201_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__6));
v___x_202_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8));
v___x_203_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__9));
lean_inc_n(v___x_199_, 11);
v___x_204_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_199_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
v___x_205_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11));
v___x_206_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__13);
v___x_207_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14);
lean_inc_n(v_currMacroScope_196_, 3);
lean_inc_n(v_quotContext_195_, 3);
v___x_208_ = l_Lean_addMacroScope(v_quotContext_195_, v___x_207_, v_currMacroScope_196_);
v___x_209_ = lean_box(0);
v___x_210_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__17));
v___x_211_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_211_, 0, v___x_199_);
lean_ctor_set(v___x_211_, 1, v___x_206_);
lean_ctor_set(v___x_211_, 2, v___x_208_);
lean_ctor_set(v___x_211_, 3, v___x_210_);
v___x_212_ = l_Lean_Syntax_node1(v___x_199_, v___x_205_, v___x_211_);
v___x_213_ = l_Lean_Syntax_node2(v___x_199_, v___x_202_, v___x_204_, v___x_212_);
v___x_214_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19));
v___x_215_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__21);
v___x_216_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__24));
v___x_217_ = l_Lean_addMacroScope(v_quotContext_195_, v___x_216_, v_currMacroScope_196_);
v___x_218_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__27));
v___x_219_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_219_, 0, v___x_199_);
lean_ctor_set(v___x_219_, 1, v___x_215_);
lean_ctor_set(v___x_219_, 2, v___x_217_);
lean_ctor_set(v___x_219_, 3, v___x_218_);
v___x_220_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29));
v___x_221_ = l_Lean_Syntax_node1(v___x_199_, v___x_220_, v___x_144_);
v___x_222_ = l_Lean_Syntax_node2(v___x_199_, v___x_214_, v___x_219_, v___x_221_);
v___x_223_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__32));
v___x_224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_199_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = l_Lean_Syntax_node3(v___x_199_, v___x_201_, v___x_213_, v___x_222_, v___x_224_);
v___x_226_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__33));
v___x_227_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_199_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__35);
v___x_229_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__36));
v___x_230_ = l_Lean_addMacroScope(v_quotContext_195_, v___x_229_, v_currMacroScope_196_);
v___x_231_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_231_, 0, v___x_199_);
lean_ctor_set(v___x_231_, 1, v___x_228_);
lean_ctor_set(v___x_231_, 2, v___x_230_);
lean_ctor_set(v___x_231_, 3, v___x_209_);
v___x_232_ = l_Lean_Syntax_node3(v___x_199_, v___x_200_, v___x_225_, v___x_227_, v___x_231_);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v_a_137_);
return v___x_233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___boxed(lean_object* v_x_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1(v_x_234_, v_a_235_, v_a_236_);
lean_dec_ref(v_a_235_);
return v_res_237_;
}
}
static lean_object* _init_l_Std_Do_unexpandWP___closed__1(void){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Array_mkArray0___redArg();
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_unexpandWP(lean_object* v_x_241_, lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__19));
lean_inc(v_x_241_);
v___x_245_ = l_Lean_Syntax_isOfKind(v_x_241_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v_x_241_);
v___x_246_ = lean_box(0);
v___x_247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v_a_243_);
return v___x_247_;
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_248_ = lean_unsigned_to_nat(1u);
v___x_249_ = l_Lean_Syntax_getArg(v_x_241_, v___x_248_);
lean_dec(v_x_241_);
lean_inc(v___x_249_);
v___x_250_ = l_Lean_Syntax_matchesNull(v___x_249_, v___x_248_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; lean_object* v___x_252_; 
lean_dec(v___x_249_);
v___x_251_ = lean_box(0);
v___x_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v_a_243_);
return v___x_252_;
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = l_Lean_Syntax_getArg(v___x_249_, v___x_253_);
lean_dec(v___x_249_);
lean_inc(v___x_254_);
v___x_255_ = l_Lean_Syntax_isOfKind(v___x_254_, v___x_244_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec(v___x_254_);
v___x_256_ = lean_box(0);
v___x_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v_a_243_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_258_ = l_Lean_Syntax_getArg(v___x_254_, v___x_253_);
v___x_259_ = ((lean_object*)(l_Std_Do_unexpandWP___closed__0));
v___x_260_ = l_Lean_Syntax_matchesIdent(v___x_258_, v___x_259_);
lean_dec(v___x_258_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec(v___x_254_);
v___x_261_ = lean_box(0);
v___x_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v_a_243_);
return v___x_262_;
}
else
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = l_Lean_Syntax_getArg(v___x_254_, v___x_248_);
lean_dec(v___x_254_);
lean_inc(v___x_263_);
v___x_264_ = l_Lean_Syntax_matchesNull(v___x_263_, v___x_248_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; lean_object* v___x_266_; 
lean_dec(v___x_263_);
v___x_265_ = lean_box(0);
v___x_266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set(v___x_266_, 1, v_a_243_);
return v___x_266_;
}
else
{
lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_267_ = l_Lean_Syntax_getArg(v___x_263_, v___x_253_);
lean_dec(v___x_263_);
v___x_268_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__31));
lean_inc(v___x_267_);
v___x_269_ = l_Lean_Syntax_isOfKind(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_270_ = l_Lean_SourceInfo_fromRef(v_a_242_, v___x_269_);
v___x_271_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_272_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_270_, 3);
v___x_273_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_270_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
v___x_274_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29));
v___x_275_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_276_, 0, v___x_270_);
lean_ctor_set(v___x_276_, 1, v___x_274_);
lean_ctor_set(v___x_276_, 2, v___x_275_);
v___x_277_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_270_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = l_Lean_Syntax_node4(v___x_270_, v___x_271_, v___x_273_, v___x_267_, v___x_276_, v___x_278_);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v_a_243_);
return v___x_280_;
}
else
{
lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_281_ = l_Lean_Syntax_getArg(v___x_267_, v___x_253_);
v___x_282_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__8));
lean_inc(v___x_281_);
v___x_283_ = l_Lean_Syntax_isOfKind(v___x_281_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec(v___x_281_);
v___x_284_ = l_Lean_SourceInfo_fromRef(v_a_242_, v___x_283_);
v___x_285_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_286_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_284_, 3);
v___x_287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_284_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29));
v___x_289_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_290_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_290_, 0, v___x_284_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
lean_ctor_set(v___x_290_, 2, v___x_289_);
v___x_291_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_284_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = l_Lean_Syntax_node4(v___x_284_, v___x_285_, v___x_287_, v___x_267_, v___x_290_, v___x_292_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v_a_243_);
return v___x_294_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = l_Lean_Syntax_getArg(v___x_281_, v___x_248_);
lean_dec(v___x_281_);
v___x_296_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__11));
lean_inc(v___x_295_);
v___x_297_ = l_Lean_Syntax_isOfKind(v___x_295_, v___x_296_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec(v___x_295_);
v___x_298_ = l_Lean_SourceInfo_fromRef(v_a_242_, v___x_297_);
v___x_299_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_300_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_298_, 3);
v___x_301_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_298_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29));
v___x_303_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_304_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_304_, 0, v___x_298_);
lean_ctor_set(v___x_304_, 1, v___x_302_);
lean_ctor_set(v___x_304_, 2, v___x_303_);
v___x_305_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_306_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_298_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
v___x_307_ = l_Lean_Syntax_node4(v___x_298_, v___x_299_, v___x_301_, v___x_267_, v___x_304_, v___x_306_);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v_a_243_);
return v___x_308_;
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_309_ = l_Lean_Syntax_getArg(v___x_295_, v___x_253_);
lean_dec(v___x_295_);
v___x_310_ = lean_obj_once(&l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14, &l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14_once, _init_l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__14);
v___x_311_ = l_Lean_Syntax_matchesIdent(v___x_309_, v___x_310_);
lean_dec(v___x_309_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_312_ = l_Lean_SourceInfo_fromRef(v_a_242_, v___x_311_);
v___x_313_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_314_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_312_, 3);
v___x_315_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_312_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29));
v___x_317_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_318_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_318_, 0, v___x_312_);
lean_ctor_set(v___x_318_, 1, v___x_316_);
lean_ctor_set(v___x_318_, 2, v___x_317_);
v___x_319_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_320_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_312_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = l_Lean_Syntax_node4(v___x_312_, v___x_313_, v___x_315_, v___x_267_, v___x_318_, v___x_320_);
v___x_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v_a_243_);
return v___x_322_;
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_323_ = lean_unsigned_to_nat(3u);
v___x_324_ = l_Lean_Syntax_getArg(v___x_267_, v___x_323_);
lean_inc(v___x_324_);
v___x_325_ = l_Lean_Syntax_matchesNull(v___x_324_, v___x_248_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
lean_dec(v___x_324_);
v___x_326_ = l_Lean_SourceInfo_fromRef(v_a_242_, v___x_325_);
v___x_327_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_328_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_326_, 3);
v___x_329_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_329_, 0, v___x_326_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
v___x_330_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29));
v___x_331_ = lean_obj_once(&l_Std_Do_unexpandWP___closed__1, &l_Std_Do_unexpandWP___closed__1_once, _init_l_Std_Do_unexpandWP___closed__1);
v___x_332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_332_, 0, v___x_326_);
lean_ctor_set(v___x_332_, 1, v___x_330_);
lean_ctor_set(v___x_332_, 2, v___x_331_);
v___x_333_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_326_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = l_Lean_Syntax_node4(v___x_326_, v___x_327_, v___x_329_, v___x_267_, v___x_332_, v___x_334_);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v_a_243_);
return v___x_336_;
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_337_ = l_Lean_Syntax_getArg(v___x_267_, v___x_248_);
lean_dec(v___x_267_);
v___x_338_ = l_Lean_Syntax_getArg(v___x_324_, v___x_253_);
lean_dec(v___x_324_);
v___x_339_ = 0;
v___x_340_ = l_Lean_SourceInfo_fromRef(v_a_242_, v___x_339_);
v___x_341_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__3));
v___x_342_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__6));
lean_inc_n(v___x_340_, 4);
v___x_343_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_340_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = ((lean_object*)(l_Std_Do___aux__Std__Do__WP__Basic______macroRules__Std__Do__termWp_u27e6___x3a___u27e7__1___closed__29));
v___x_345_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__14));
v___x_346_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_340_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = l_Lean_Syntax_node2(v___x_340_, v___x_344_, v___x_346_, v___x_338_);
v___x_348_ = ((lean_object*)(l_Std_Do_termWp_u27e6___x3a___u27e7___closed__20));
v___x_349_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_340_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
v___x_350_ = l_Lean_Syntax_node4(v___x_340_, v___x_341_, v___x_343_, v___x_337_, v___x_347_, v___x_349_);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v_a_243_);
return v___x_351_;
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
LEAN_EXPORT lean_object* l_Std_Do_unexpandWP___boxed(lean_object* v_x_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Std_Do_unexpandWP(v_x_352_, v_a_353_, v_a_354_);
lean_dec(v_a_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Id_instWP___lam__0(lean_object* v_00_u03b1_356_, lean_object* v_x_357_, lean_object* v___y_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Std_Do_PredTrans_pure___redArg___lam__0(v_x_357_, v___y_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg___lam__0(lean_object* v_x_362_, lean_object* v_inst_363_, lean_object* v_s_364_, lean_object* v___y_365_){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = lean_apply_1(v_x_362_, v_s_364_);
v___x_367_ = lean_apply_3(v_inst_363_, lean_box(0), v___x_366_, v___y_365_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg___lam__1(lean_object* v_inst_368_, lean_object* v_00_u03b1_369_, lean_object* v_x_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___f_372_; lean_object* v___x_373_; 
v___f_372_ = lean_alloc_closure((void*)(l_Std_Do_StateT_instWP___redArg___lam__0), 4, 2);
lean_closure_set(v___f_372_, 0, v_x_370_);
lean_closure_set(v___f_372_, 1, v_inst_368_);
v___x_373_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushArg___redArg___lam__1), 3, 2);
lean_closure_set(v___x_373_, 0, v___f_372_);
lean_closure_set(v___x_373_, 1, v___y_371_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___redArg(lean_object* v_inst_374_){
_start:
{
lean_object* v___f_375_; 
v___f_375_ = lean_alloc_closure((void*)(l_Std_Do_StateT_instWP___redArg___lam__1), 4, 1);
lean_closure_set(v___f_375_, 0, v_inst_374_);
return v___f_375_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP(lean_object* v_m_376_, lean_object* v_ps_377_, lean_object* v_00_u03c3_378_, lean_object* v_inst_379_){
_start:
{
lean_object* v___f_380_; 
v___f_380_ = lean_alloc_closure((void*)(l_Std_Do_StateT_instWP___redArg___lam__1), 4, 1);
lean_closure_set(v___f_380_, 0, v_inst_379_);
return v___f_380_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_StateT_instWP___boxed(lean_object* v_m_381_, lean_object* v_ps_382_, lean_object* v_00_u03c3_383_, lean_object* v_inst_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Std_Do_StateT_instWP(v_m_381_, v_ps_382_, v_00_u03c3_383_, v_inst_384_);
lean_dec(v_ps_382_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__0(lean_object* v_s_386_, lean_object* v_x_387_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v_x_387_);
lean_ctor_set(v___x_388_, 1, v_s_386_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__1(lean_object* v_x_389_, lean_object* v_inst_390_, lean_object* v_ps_391_, lean_object* v_s_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___f_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
lean_inc(v_s_392_);
v___f_394_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__0), 2, 1);
lean_closure_set(v___f_394_, 0, v_s_392_);
v___x_395_ = lean_apply_1(v_x_389_, v_s_392_);
v___x_396_ = lean_apply_2(v_inst_390_, lean_box(0), v___x_395_);
v___x_397_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___boxed), 3, 2);
lean_closure_set(v___x_397_, 0, v_ps_391_);
lean_closure_set(v___x_397_, 1, lean_box(0));
v___x_398_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_398_, 0, lean_box(0));
lean_closure_set(v___x_398_, 1, lean_box(0));
lean_closure_set(v___x_398_, 2, lean_box(0));
lean_closure_set(v___x_398_, 3, v___x_397_);
lean_closure_set(v___x_398_, 4, v___f_394_);
v___x_399_ = l_Std_Do_PredTrans_bind___redArg___lam__1(v___x_398_, v___x_396_, v___y_393_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg___lam__2(lean_object* v_inst_400_, lean_object* v_ps_401_, lean_object* v_00_u03b1_402_, lean_object* v_x_403_, lean_object* v___y_404_){
_start:
{
lean_object* v___f_405_; lean_object* v___x_406_; 
v___f_405_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__1), 5, 3);
lean_closure_set(v___f_405_, 0, v_x_403_);
lean_closure_set(v___f_405_, 1, v_inst_400_);
lean_closure_set(v___f_405_, 2, v_ps_401_);
v___x_406_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushArg___redArg___lam__1), 3, 2);
lean_closure_set(v___x_406_, 0, v___f_405_);
lean_closure_set(v___x_406_, 1, v___y_404_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP___redArg(lean_object* v_ps_407_, lean_object* v_inst_408_){
_start:
{
lean_object* v___f_409_; 
v___f_409_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__2), 5, 2);
lean_closure_set(v___f_409_, 0, v_inst_408_);
lean_closure_set(v___f_409_, 1, v_ps_407_);
return v___f_409_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ReaderT_instWP(lean_object* v_m_410_, lean_object* v_ps_411_, lean_object* v_00_u03c1_412_, lean_object* v_inst_413_){
_start:
{
lean_object* v___f_414_; 
v___f_414_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__2), 5, 2);
lean_closure_set(v___f_414_, 0, v_inst_413_);
lean_closure_set(v___f_414_, 1, v_ps_411_);
return v___f_414_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___redArg___lam__0(lean_object* v_inst_415_, lean_object* v_00_u03b1_416_, lean_object* v_x_417_, lean_object* v___y_418_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_apply_2(v_inst_415_, lean_box(0), v_x_417_);
v___x_420_ = l_Std_Do_PredTrans_pushExcept___redArg___lam__1(v___x_419_, v___y_418_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___redArg(lean_object* v_inst_421_){
_start:
{
lean_object* v___f_422_; 
v___f_422_ = lean_alloc_closure((void*)(l_Std_Do_ExceptT_instWP___redArg___lam__0), 4, 1);
lean_closure_set(v___f_422_, 0, v_inst_421_);
return v___f_422_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP(lean_object* v_m_423_, lean_object* v_ps_424_, lean_object* v_00_u03b5_425_, lean_object* v_inst_426_){
_start:
{
lean_object* v___f_427_; 
v___f_427_ = lean_alloc_closure((void*)(l_Std_Do_ExceptT_instWP___redArg___lam__0), 4, 1);
lean_closure_set(v___f_427_, 0, v_inst_426_);
return v___f_427_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_ExceptT_instWP___boxed(lean_object* v_m_428_, lean_object* v_ps_429_, lean_object* v_00_u03b5_430_, lean_object* v_inst_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Std_Do_ExceptT_instWP(v_m_428_, v_ps_429_, v_00_u03b5_430_, v_inst_431_);
lean_dec(v_ps_429_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___redArg___lam__0(lean_object* v_inst_433_, lean_object* v_00_u03b1_434_, lean_object* v_x_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_apply_2(v_inst_433_, lean_box(0), v_x_435_);
v___x_438_ = l_Std_Do_PredTrans_pushOption___redArg___lam__1(v___x_437_, v___y_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___redArg(lean_object* v_inst_439_){
_start:
{
lean_object* v___f_440_; 
v___f_440_ = lean_alloc_closure((void*)(l_Std_Do_OptionT_instWP___redArg___lam__0), 4, 1);
lean_closure_set(v___f_440_, 0, v_inst_439_);
return v___f_440_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP(lean_object* v_m_441_, lean_object* v_ps_442_, lean_object* v_inst_443_){
_start:
{
lean_object* v___f_444_; 
v___f_444_ = lean_alloc_closure((void*)(l_Std_Do_OptionT_instWP___redArg___lam__0), 4, 1);
lean_closure_set(v___f_444_, 0, v_inst_443_);
return v___f_444_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_OptionT_instWP___boxed(lean_object* v_m_445_, lean_object* v_ps_446_, lean_object* v_inst_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Std_Do_OptionT_instWP(v_m_445_, v_ps_446_, v_inst_447_);
lean_dec(v_ps_446_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__0(lean_object* v___y_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = lean_box(0);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__0___boxed(lean_object* v___y_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Std_Do_EStateM_instWP___redArg___lam__0(v___y_451_);
lean_dec(v___y_451_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__1(lean_object* v___f_453_, lean_object* v_00_u03b1_454_, lean_object* v_x_455_, lean_object* v___y_456_){
_start:
{
lean_inc_ref(v___f_453_);
return v___f_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___lam__1___boxed(lean_object* v___f_457_, lean_object* v_00_u03b1_458_, lean_object* v_x_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Std_Do_EStateM_instWP___redArg___lam__1(v___f_457_, v_00_u03b1_458_, v_x_459_, v___y_460_);
lean_dec_ref(v___y_460_);
lean_dec_ref(v_x_459_);
lean_dec_ref(v___f_457_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg(){
_start:
{
lean_object* v___f_466_; 
v___f_466_ = ((lean_object*)(l_Std_Do_EStateM_instWP___redArg___closed__1));
return v___f_466_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP___redArg___boxed(lean_object* v___dummy_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Std_Do_EStateM_instWP___redArg();
return v_res_468_;
}
}
static lean_object* _init_l_Std_Do_EStateM_instWP___closed__0(void){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Std_Do_EStateM_instWP___redArg();
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_EStateM_instWP(lean_object* v_00_u03b5_470_, lean_object* v_00_u03c3_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lean_obj_once(&l_Std_Do_EStateM_instWP___closed__0, &l_Std_Do_EStateM_instWP___closed__0_once, _init_l_Std_Do_EStateM_instWP___closed__0);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___lam__0(lean_object* v_x_473_, lean_object* v_s_474_, lean_object* v___y_475_){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_apply_1(v_x_473_, v_s_474_);
v___x_477_ = l_Std_Do_PredTrans_pure___redArg___lam__0(v___x_476_, v___y_475_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___lam__1(lean_object* v_00_u03b1_478_, lean_object* v_x_479_, lean_object* v___y_480_){
_start:
{
lean_object* v___f_481_; lean_object* v___x_482_; 
v___f_481_ = lean_alloc_closure((void*)(l_Std_Do_State_instWP___redArg___lam__0), 3, 1);
lean_closure_set(v___f_481_, 0, v_x_479_);
v___x_482_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushArg___redArg___lam__1), 3, 2);
lean_closure_set(v___x_482_, 0, v___f_481_);
lean_closure_set(v___x_482_, 1, v___y_480_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg(){
_start:
{
lean_object* v___f_485_; 
v___f_485_ = ((lean_object*)(l_Std_Do_State_instWP___redArg___closed__0));
return v___f_485_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP___redArg___boxed(lean_object* v___dummy_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Std_Do_State_instWP___redArg();
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_State_instWP(lean_object* v_00_u03c3_488_){
_start:
{
lean_object* v___f_489_; 
v___f_489_ = ((lean_object*)(l_Std_Do_State_instWP___redArg___closed__0));
return v___f_489_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___lam__1(lean_object* v_x_490_, lean_object* v___x_491_, lean_object* v_s_492_, lean_object* v___y_493_){
_start:
{
lean_object* v___f_494_; lean_object* v___x_495_; lean_object* v___f_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
lean_inc(v_s_492_);
v___f_494_ = lean_alloc_closure((void*)(l_Std_Do_ReaderT_instWP___redArg___lam__0), 2, 1);
lean_closure_set(v___f_494_, 0, v_s_492_);
v___x_495_ = lean_apply_1(v_x_490_, v_s_492_);
v___f_496_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___redArg___lam__0), 2, 1);
lean_closure_set(v___f_496_, 0, v___x_495_);
v___x_497_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___boxed), 3, 2);
lean_closure_set(v___x_497_, 0, v___x_491_);
lean_closure_set(v___x_497_, 1, lean_box(0));
v___x_498_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_498_, 0, lean_box(0));
lean_closure_set(v___x_498_, 1, lean_box(0));
lean_closure_set(v___x_498_, 2, lean_box(0));
lean_closure_set(v___x_498_, 3, v___x_497_);
lean_closure_set(v___x_498_, 4, v___f_494_);
v___x_499_ = l_Std_Do_PredTrans_bind___redArg___lam__1(v___x_498_, v___f_496_, v___y_493_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___lam__0(lean_object* v___x_500_, lean_object* v_00_u03b1_501_, lean_object* v_x_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___f_504_; lean_object* v___x_505_; 
v___f_504_ = lean_alloc_closure((void*)(l_Std_Do_Reader_instWP___redArg___lam__1), 4, 2);
lean_closure_set(v___f_504_, 0, v_x_502_);
lean_closure_set(v___f_504_, 1, v___x_500_);
v___x_505_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushArg___redArg___lam__1), 3, 2);
lean_closure_set(v___x_505_, 0, v___f_504_);
lean_closure_set(v___x_505_, 1, v___y_503_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg(){
_start:
{
lean_object* v___f_509_; 
v___f_509_ = ((lean_object*)(l_Std_Do_Reader_instWP___redArg___closed__0));
return v___f_509_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP___redArg___boxed(lean_object* v___dummy_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Std_Do_Reader_instWP___redArg();
return v_res_511_;
}
}
static lean_object* _init_l_Std_Do_Reader_instWP___closed__0(void){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Std_Do_Reader_instWP___redArg();
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Reader_instWP(lean_object* v_00_u03c1_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = lean_obj_once(&l_Std_Do_Reader_instWP___closed__0, &l_Std_Do_Reader_instWP___closed__0_once, _init_l_Std_Do_Reader_instWP___closed__0);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___aux__1___redArg(lean_object* v_x_515_){
_start:
{
lean_object* v___f_516_; lean_object* v___f_517_; 
v___f_516_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___redArg___lam__0), 2, 1);
lean_closure_set(v___f_516_, 0, v_x_515_);
v___f_517_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushExcept___redArg___lam__1), 2, 1);
lean_closure_set(v___f_517_, 0, v___f_516_);
return v___f_517_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___aux__1(lean_object* v_00_u03b5_518_, lean_object* v_00_u03b1_519_, lean_object* v_x_520_){
_start:
{
lean_object* v___f_521_; lean_object* v___f_522_; 
v___f_521_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___redArg___lam__0), 2, 1);
lean_closure_set(v___f_521_, 0, v_x_520_);
v___f_522_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushExcept___redArg___lam__1), 2, 1);
lean_closure_set(v___f_522_, 0, v___f_521_);
return v___f_522_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg(){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = ((lean_object*)(l_Std_Do_Except_instWP___redArg___closed__0));
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP___redArg___boxed(lean_object* v___dummy_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Std_Do_Except_instWP___redArg();
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Except_instWP(lean_object* v_00_u03b5_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = ((lean_object*)(l_Std_Do_Except_instWP___redArg___closed__0));
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Option_instWP___aux__1___redArg(lean_object* v_x_530_){
_start:
{
lean_object* v___f_531_; lean_object* v___f_532_; 
v___f_531_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___redArg___lam__0), 2, 1);
lean_closure_set(v___f_531_, 0, v_x_530_);
v___f_532_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushOption___redArg___lam__1), 2, 1);
lean_closure_set(v___f_532_, 0, v___f_531_);
return v___f_532_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_Option_instWP___aux__1(lean_object* v_00_u03b1_533_, lean_object* v_x_534_){
_start:
{
lean_object* v___f_535_; lean_object* v___f_536_; 
v___f_535_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pure___redArg___lam__0), 2, 1);
lean_closure_set(v___f_535_, 0, v_x_534_);
v___f_536_ = lean_alloc_closure((void*)(l_Std_Do_PredTrans_pushOption___redArg___lam__1), 2, 1);
lean_closure_set(v___f_536_, 0, v___f_535_);
return v___f_536_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Do_WP_Basic_0__Std_Do_EStateM_instWP_match__1_splitter___redArg(lean_object* v_x_539_, lean_object* v_h__1_540_, lean_object* v_h__2_541_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
lean_object* v_a_542_; lean_object* v_a_543_; lean_object* v___x_544_; 
lean_dec(v_h__2_541_);
v_a_542_ = lean_ctor_get(v_x_539_, 0);
lean_inc(v_a_542_);
v_a_543_ = lean_ctor_get(v_x_539_, 1);
lean_inc(v_a_543_);
lean_dec_ref_known(v_x_539_, 2);
v___x_544_ = lean_apply_2(v_h__1_540_, v_a_542_, v_a_543_);
return v___x_544_;
}
else
{
lean_object* v_a_545_; lean_object* v_a_546_; lean_object* v___x_547_; 
lean_dec(v_h__1_540_);
v_a_545_ = lean_ctor_get(v_x_539_, 0);
lean_inc(v_a_545_);
v_a_546_ = lean_ctor_get(v_x_539_, 1);
lean_inc(v_a_546_);
lean_dec_ref_known(v_x_539_, 2);
v___x_547_ = lean_apply_2(v_h__2_541_, v_a_545_, v_a_546_);
return v___x_547_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Do_WP_Basic_0__Std_Do_EStateM_instWP_match__1_splitter(lean_object* v_00_u03b5_548_, lean_object* v_00_u03c3_549_, lean_object* v_00_u03b1_550_, lean_object* v_motive_551_, lean_object* v_x_552_, lean_object* v_h__1_553_, lean_object* v_h__2_554_){
_start:
{
if (lean_obj_tag(v_x_552_) == 0)
{
lean_object* v_a_555_; lean_object* v_a_556_; lean_object* v___x_557_; 
lean_dec(v_h__2_554_);
v_a_555_ = lean_ctor_get(v_x_552_, 0);
lean_inc(v_a_555_);
v_a_556_ = lean_ctor_get(v_x_552_, 1);
lean_inc(v_a_556_);
lean_dec_ref_known(v_x_552_, 2);
v___x_557_ = lean_apply_2(v_h__1_553_, v_a_555_, v_a_556_);
return v___x_557_;
}
else
{
lean_object* v_a_558_; lean_object* v_a_559_; lean_object* v___x_560_; 
lean_dec(v_h__1_553_);
v_a_558_ = lean_ctor_get(v_x_552_, 0);
lean_inc(v_a_558_);
v_a_559_ = lean_ctor_get(v_x_552_, 1);
lean_inc(v_a_559_);
lean_dec_ref_known(v_x_552_, 2);
v___x_560_ = lean_apply_2(v_h__2_554_, v_a_558_, v_a_559_);
return v___x_560_;
}
}
}
lean_object* runtime_initialize_Std_Do_PredTrans(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Do_WP_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_PredTrans(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Do_WP_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_PredTrans(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Do_WP_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_PredTrans(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_WP_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Do_WP_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Do_WP_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

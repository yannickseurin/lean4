// Lean compiler output
// Module: Init.Data.Array.Basic
// Imports: public import Init.Control.Do public import Init.GetElem public import Init.Data.List.ToArrayImpl import all Init.Data.List.ToArrayImpl public import Init.Data.Array.Set import all Init.Data.Array.Set public import Init.WF meta import Init.MetaTypes import Init.WFTactics
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_appendCore___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_repr(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__0 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__0_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__1 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__1_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__2 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__2_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__3 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__4 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__5 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__5_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__6 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__6_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__6_value),LEAN_SCALAR_PTR_LITERAL(69, 6, 27, 142, 141, 165, 41, 16)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__7 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__7_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__8 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__8_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__9 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__9_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__10 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__10_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__11 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__12 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__12_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__12_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__13 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__13_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__10_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__13_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__14 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__14_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__7_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__14_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__15 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__15_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__5_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__15_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__16 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__16_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__17 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__18 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__18_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__16_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__18_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__19 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__19_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__19_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__20 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__20_value;
LEAN_EXPORT const lean_object* l_term_x23_x5b___x2c_x5d = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__20_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "List.toArray"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5_value;
static lean_once_cell_t l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16_value;
static lean_once_cell_t l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17;
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__List_toArrayAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__List_toArrayAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instMembership___redArg();
LEAN_EXPORT lean_object* l_Array_instMembership___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instMembership(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Array_usize___boxed(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_uget___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_ugetBorrowed___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_uset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
LEAN_EXPORT lean_object* l_Array_pop___boxed(lean_object*, lean_object*);
lean_object* lean_array_mark_linear(lean_object*);
LEAN_EXPORT lean_object* l_Array_markLinear___boxed(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_propagateMark___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replicate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_swap___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Array_swap___auto__1___closed__0 = (const lean_object*)&l_Array_swap___auto__1___closed__0_value;
static const lean_string_object l_Array_swap___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Array_swap___auto__1___closed__1 = (const lean_object*)&l_Array_swap___auto__1___closed__1_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_1),((lean_object*)&l_Array_swap___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_2),((lean_object*)&l_Array_swap___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Array_swap___auto__1___closed__2 = (const lean_object*)&l_Array_swap___auto__1___closed__2_value;
static const lean_array_object l_Array_swap___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_swap___auto__1___closed__3 = (const lean_object*)&l_Array_swap___auto__1___closed__3_value;
static const lean_string_object l_Array_swap___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Array_swap___auto__1___closed__4 = (const lean_object*)&l_Array_swap___auto__1___closed__4_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_1),((lean_object*)&l_Array_swap___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_2),((lean_object*)&l_Array_swap___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Array_swap___auto__1___closed__5 = (const lean_object*)&l_Array_swap___auto__1___closed__5_value;
static const lean_string_object l_Array_swap___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "tacticGet_elem_tactic"};
static const lean_object* l_Array_swap___auto__1___closed__6 = (const lean_object*)&l_Array_swap___auto__1___closed__6_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_swap___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 31, 109, 153, 11, 229, 201, 51)}};
static const lean_object* l_Array_swap___auto__1___closed__7 = (const lean_object*)&l_Array_swap___auto__1___closed__7_value;
static const lean_string_object l_Array_swap___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "get_elem_tactic"};
static const lean_object* l_Array_swap___auto__1___closed__8 = (const lean_object*)&l_Array_swap___auto__1___closed__8_value;
static lean_once_cell_t l_Array_swap___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__9;
static lean_once_cell_t l_Array_swap___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__10;
static lean_once_cell_t l_Array_swap___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__11;
static lean_once_cell_t l_Array_swap___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__12;
static lean_once_cell_t l_Array_swap___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__13;
static lean_once_cell_t l_Array_swap___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__14;
static lean_once_cell_t l_Array_swap___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__15;
static lean_once_cell_t l_Array_swap___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__16;
static lean_once_cell_t l_Array_swap___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__17;
LEAN_EXPORT lean_object* l_Array_swap___auto__1;
LEAN_EXPORT lean_object* l_Array_swap___auto__3;
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0 = (const lean_object*)&l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg();
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize(lean_object*);
static const lean_array_object l_Array_instEmptyCollection___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_instEmptyCollection___redArg___closed__0 = (const lean_object*)&l_Array_instEmptyCollection___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg___boxed(lean_object*);
static lean_once_cell_t l_Array_instEmptyCollection___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_instEmptyCollection___closed__0;
LEAN_EXPORT lean_object* l_Array_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Array_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Array_instInhabited(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqv___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqv___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_instBEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Array_range___lam__0___boxed(lean_object*);
static const lean_closure_object l_Array_range___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_range___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_range___closed__0 = (const lean_object*)&l_Array_range___closed__0_value;
LEAN_EXPORT lean_object* l_Array_range(lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_singleton___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back___auto__1;
LEAN_EXPORT lean_object* l_Array_back___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_back___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_back(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___auto__1;
LEAN_EXPORT lean_object* l_Array_swapAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_swapAt_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Init.Data.Array.Basic"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__0 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__0_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Array.swapAt!"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__1 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__1_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "index "};
static const lean_object* l_Array_swapAt_x21___redArg___closed__2 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__2_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " out of bounds"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__3 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Array_swapAt_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_modifyMUnsafe___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_modifyMUnsafe___redArg___closed__0;
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(lean_object*, size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_firstM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_firstM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l_Array_findSomeM_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Array_findSomeM_x3f___redArg___closed__0 = (const lean_object*)&l_Array_findSomeM_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l_Array_findIdxM_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Array_findIdxM_x3f___redArg___closed__0 = (const lean_object*)&l_Array_findIdxM_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Array_anyM_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__0 = (const lean_object*)&l_Array_foldl___redArg___closed__0_value;
static const lean_closure_object l_Array_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__1 = (const lean_object*)&l_Array_foldl___redArg___closed__1_value;
static const lean_closure_object l_Array_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__2 = (const lean_object*)&l_Array_foldl___redArg___closed__2_value;
static const lean_closure_object l_Array_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__3 = (const lean_object*)&l_Array_foldl___redArg___closed__3_value;
static const lean_closure_object l_Array_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__4 = (const lean_object*)&l_Array_foldl___redArg___closed__4_value;
static const lean_closure_object l_Array_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__5 = (const lean_object*)&l_Array_foldl___redArg___closed__5_value;
static const lean_closure_object l_Array_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__6 = (const lean_object*)&l_Array_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__0_value),((lean_object*)&l_Array_foldl___redArg___closed__1_value)}};
static const lean_object* l_Array_foldl___redArg___closed__7 = (const lean_object*)&l_Array_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__7_value),((lean_object*)&l_Array_foldl___redArg___closed__2_value),((lean_object*)&l_Array_foldl___redArg___closed__3_value),((lean_object*)&l_Array_foldl___redArg___closed__4_value),((lean_object*)&l_Array_foldl___redArg___closed__5_value)}};
static const lean_object* l_Array_foldl___redArg___closed__8 = (const lean_object*)&l_Array_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__8_value),((lean_object*)&l_Array_foldl___redArg___closed__6_value)}};
static const lean_object* l_Array_foldl___redArg___closed__9 = (const lean_object*)&l_Array_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Array_foldl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_prod___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_prod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instFunctor___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instFunctor___closed__0 = (const lean_object*)&l_Array_instFunctor___closed__0_value;
static const lean_closure_object l_Array_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_map___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instFunctor___closed__1 = (const lean_object*)&l_Array_instFunctor___closed__1_value;
static const lean_ctor_object l_Array_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_instFunctor___closed__1_value),((lean_object*)&l_Array_instFunctor___closed__0_value)}};
static const lean_object* l_Array_instFunctor___closed__2 = (const lean_object*)&l_Array_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Array_instFunctor = (const lean_object*)&l_Array_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_findSome_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Array.findSome!"};
static const lean_object* l_Array_findSome_x21___redArg___closed__0 = (const lean_object*)&l_Array_findSome_x21___redArg___closed__0_value;
static const lean_string_object l_Array_findSome_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "failed to find element"};
static const lean_object* l_Array_findSome_x21___redArg___closed__1 = (const lean_object*)&l_Array_findSome_x21___redArg___closed__1_value;
static lean_once_cell_t l_Array_findSome_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_findSome_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_idxOf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_elem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_elem___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_elem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_elem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_array_to_list_impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Array_toListAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_toListAppend___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_toListAppend___redArg___closed__0 = (const lean_object*)&l_Array_toListAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListAppend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_instAppend___redArg___closed__0 = (const lean_object*)&l_Array_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instAppend___redArg();
LEAN_EXPORT lean_object* l_Array_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_appendList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_appendList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instHAppendList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_appendList, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_instHAppendList___redArg___closed__0 = (const lean_object*)&l_Array_instHAppendList___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg();
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instHAppendList(lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_flatten___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_flatten___redArg___closed__0 = (const lean_object*)&l_Array_flatten___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_flatten___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_flatten(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filter___redArg___closed__0 = (const lean_object*)&l_Array_filter___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_filterRevM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_reverse, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_filterRevM___redArg___closed__0 = (const lean_object*)&l_Array_filterRevM___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_partition___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Array_partition___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_filter___redArg___closed__0_value),((lean_object*)&l_Array_filter___redArg___closed__0_value)}};
static const lean_object* l_Array_partition___redArg___closed__0 = (const lean_object*)&l_Array_partition___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_partition___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_partition(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_popWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_popWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx___auto__1;
LEAN_EXPORT lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_eraseIdx_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Array.eraseIdx!"};
static const lean_object* l_Array_eraseIdx_x21___redArg___closed__0 = (const lean_object*)&l_Array_eraseIdx_x21___redArg___closed__0_value;
static const lean_string_object l_Array_eraseIdx_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid index"};
static const lean_object* l_Array_eraseIdx_x21___redArg___closed__1 = (const lean_object*)&l_Array_eraseIdx_x21___redArg___closed__1_value;
static lean_once_cell_t l_Array_eraseIdx_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_eraseIdx_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_erase___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_erase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___auto__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_insertIdx_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Array.insertIdx!"};
static const lean_object* l_Array_insertIdx_x21___redArg___closed__0 = (const lean_object*)&l_Array_insertIdx_x21___redArg___closed__0_value;
static lean_once_cell_t l_Array_insertIdx_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertIdx_x21___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_zip___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_zip___redArg___closed__0 = (const lean_object*)&l_Array_zip___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instLT___redArg();
LEAN_EXPORT lean_object* l_Array_instLT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instLE___redArg();
LEAN_EXPORT lean_object* l_Array_instLE___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Array_reduceOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_reduceOption___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_reduceOption___redArg___closed__0 = (const lean_object*)&l_Array_reduceOption___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems(lean_object*, lean_object*);
static const lean_ctor_object l_Array_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value)}};
static const lean_object* l_Array_repr___redArg___closed__0 = (const lean_object*)&l_Array_repr___redArg___closed__0_value;
static const lean_ctor_object l_Array_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___redArg___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___redArg___closed__1 = (const lean_object*)&l_Array_repr___redArg___closed__1_value;
static lean_once_cell_t l_Array_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___redArg___closed__2;
static lean_once_cell_t l_Array_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___redArg___closed__3;
static const lean_ctor_object l_Array_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value)}};
static const lean_object* l_Array_repr___redArg___closed__4 = (const lean_object*)&l_Array_repr___redArg___closed__4_value;
static const lean_ctor_object l_Array_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value)}};
static const lean_object* l_Array_repr___redArg___closed__5 = (const lean_object*)&l_Array_repr___redArg___closed__5_value;
static const lean_string_object l_Array_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___redArg___closed__6 = (const lean_object*)&l_Array_repr___redArg___closed__6_value;
static const lean_ctor_object l_Array_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___redArg___closed__6_value)}};
static const lean_object* l_Array_repr___redArg___closed__7 = (const lean_object*)&l_Array_repr___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr(lean_object*, lean_object*);
static lean_object* _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5));
v___x_58_ = l_String_toRawSubstring_x27(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Array_mkArray0___redArg();
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(lean_object* v_x_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_81_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__1));
lean_inc(v_x_78_);
v___x_82_ = l_Lean_Syntax_isOfKind(v_x_78_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec(v_x_78_);
v___x_83_ = lean_box(1);
v___x_84_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v_a_80_);
return v___x_84_;
}
else
{
lean_object* v_quotContext_85_; lean_object* v_currMacroScope_86_; lean_object* v_ref_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_quotContext_85_ = lean_ctor_get(v_a_79_, 1);
v_currMacroScope_86_ = lean_ctor_get(v_a_79_, 2);
v_ref_87_ = lean_ctor_get(v_a_79_, 5);
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = l_Lean_Syntax_getArg(v_x_78_, v___x_88_);
lean_dec(v_x_78_);
v___x_90_ = l_Lean_Syntax_getArgs(v___x_89_);
lean_dec(v___x_89_);
v___x_91_ = 0;
v___x_92_ = l_Lean_SourceInfo_fromRef(v_ref_87_, v___x_91_);
v___x_93_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4));
v___x_94_ = lean_obj_once(&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6, &l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6_once, _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6);
v___x_95_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9));
lean_inc(v_currMacroScope_86_);
lean_inc(v_quotContext_85_);
v___x_96_ = l_Lean_addMacroScope(v_quotContext_85_, v___x_95_, v_currMacroScope_86_);
v___x_97_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11));
lean_inc_n(v___x_92_, 6);
v___x_98_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_98_, 0, v___x_92_);
lean_ctor_set(v___x_98_, 1, v___x_94_);
lean_ctor_set(v___x_98_, 2, v___x_96_);
lean_ctor_set(v___x_98_, 3, v___x_97_);
v___x_99_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13));
v___x_100_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15));
v___x_101_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16));
v___x_102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_92_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_obj_once(&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17, &l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17_once, _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17);
v___x_104_ = l_Array_appendCore___redArg(v___x_103_, v___x_90_);
lean_dec_ref(v___x_90_);
v___x_105_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_105_, 0, v___x_92_);
lean_ctor_set(v___x_105_, 1, v___x_99_);
lean_ctor_set(v___x_105_, 2, v___x_104_);
v___x_106_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__17));
v___x_107_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_92_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_108_ = l_Lean_Syntax_node3(v___x_92_, v___x_100_, v___x_102_, v___x_105_, v___x_107_);
v___x_109_ = l_Lean_Syntax_node1(v___x_92_, v___x_99_, v___x_108_);
v___x_110_ = l_Lean_Syntax_node2(v___x_92_, v___x_93_, v___x_98_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_80_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___boxed(lean_object* v_x_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(v_x_112_, v_a_113_, v_a_114_);
lean_dec_ref(v_a_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__List_toArrayAux_match__1_splitter___redArg(lean_object* v_x_116_, lean_object* v_x_117_, lean_object* v_h__1_118_, lean_object* v_h__2_119_){
_start:
{
if (lean_obj_tag(v_x_116_) == 0)
{
lean_object* v___x_120_; 
lean_dec(v_h__2_119_);
v___x_120_ = lean_apply_1(v_h__1_118_, v_x_117_);
return v___x_120_;
}
else
{
lean_object* v_head_121_; lean_object* v_tail_122_; lean_object* v___x_123_; 
lean_dec(v_h__1_118_);
v_head_121_ = lean_ctor_get(v_x_116_, 0);
lean_inc(v_head_121_);
v_tail_122_ = lean_ctor_get(v_x_116_, 1);
lean_inc(v_tail_122_);
lean_dec_ref_known(v_x_116_, 2);
v___x_123_ = lean_apply_3(v_h__2_119_, v_head_121_, v_tail_122_, v_x_117_);
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__List_toArrayAux_match__1_splitter(lean_object* v_00_u03b1_124_, lean_object* v_motive_125_, lean_object* v_x_126_, lean_object* v_x_127_, lean_object* v_h__1_128_, lean_object* v_h__2_129_){
_start:
{
if (lean_obj_tag(v_x_126_) == 0)
{
lean_object* v___x_130_; 
lean_dec(v_h__2_129_);
v___x_130_ = lean_apply_1(v_h__1_128_, v_x_127_);
return v___x_130_;
}
else
{
lean_object* v_head_131_; lean_object* v_tail_132_; lean_object* v___x_133_; 
lean_dec(v_h__1_128_);
v_head_131_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_head_131_);
v_tail_132_ = lean_ctor_get(v_x_126_, 1);
lean_inc(v_tail_132_);
lean_dec_ref_known(v_x_126_, 2);
v___x_133_ = lean_apply_3(v_h__2_129_, v_head_131_, v_tail_132_, v_x_127_);
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Array_instMembership___redArg(){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_box(0);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Array_instMembership___redArg___boxed(lean_object* v___dummy_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Array_instMembership___redArg();
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Array_instMembership(lean_object* v_00_u03b1_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_box(0);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter___redArg(lean_object* v_x_140_, lean_object* v_h__1_141_, lean_object* v_h__2_142_){
_start:
{
if (lean_obj_tag(v_x_140_) == 0)
{
lean_object* v___x_143_; lean_object* v___x_144_; 
lean_dec(v_h__1_141_);
v___x_143_ = lean_box(0);
v___x_144_ = lean_apply_1(v_h__2_142_, v___x_143_);
return v___x_144_;
}
else
{
lean_object* v_val_145_; lean_object* v___x_146_; 
lean_dec(v_h__2_142_);
v_val_145_ = lean_ctor_get(v_x_140_, 0);
lean_inc(v_val_145_);
lean_dec_ref_known(v_x_140_, 1);
v___x_146_ = lean_apply_1(v_h__1_141_, v_val_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter(lean_object* v_elem_147_, lean_object* v_motive_148_, lean_object* v_x_149_, lean_object* v_h__1_150_, lean_object* v_h__2_151_){
_start:
{
if (lean_obj_tag(v_x_149_) == 0)
{
lean_object* v___x_152_; lean_object* v___x_153_; 
lean_dec(v_h__1_150_);
v___x_152_ = lean_box(0);
v___x_153_ = lean_apply_1(v_h__2_151_, v___x_152_);
return v___x_153_;
}
else
{
lean_object* v_val_154_; lean_object* v___x_155_; 
lean_dec(v_h__2_151_);
v_val_154_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_val_154_);
lean_dec_ref_known(v_x_149_, 1);
v___x_155_ = lean_apply_1(v_h__1_150_, v_val_154_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l_Array_usize___boxed(lean_object* v_00_u03b1_158_, lean_object* v_xs_159_){
_start:
{
size_t v_res_160_; lean_object* v_r_161_; 
v_res_160_ = lean_array_size(v_xs_159_);
lean_dec_ref(v_xs_159_);
v_r_161_ = lean_box_usize(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT lean_object* l_Array_uget___boxed(lean_object* v_00_u03b1_166_, lean_object* v_xs_167_, lean_object* v_i_168_, lean_object* v_h_169_){
_start:
{
size_t v_i_boxed_170_; lean_object* v_res_171_; 
v_i_boxed_170_ = lean_unbox_usize(v_i_168_);
lean_dec(v_i_168_);
v_res_171_ = lean_array_uget(v_xs_167_, v_i_boxed_170_);
lean_dec_ref(v_xs_167_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Array_ugetBorrowed___boxed(lean_object* v_00_u03b1_176_, lean_object* v_xs_177_, lean_object* v_i_178_, lean_object* v_h_179_){
_start:
{
size_t v_i_boxed_180_; lean_object* v_res_181_; 
v_i_boxed_180_ = lean_unbox_usize(v_i_178_);
lean_dec(v_i_178_);
v_res_181_ = lean_array_uget_borrowed(v_xs_177_, v_i_boxed_180_);
lean_dec_ref(v_xs_177_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Array_uset___boxed(lean_object* v_00_u03b1_187_, lean_object* v_xs_188_, lean_object* v_i_189_, lean_object* v_v_190_, lean_object* v_h_191_){
_start:
{
size_t v_i_boxed_192_; lean_object* v_res_193_; 
v_i_boxed_192_ = lean_unbox_usize(v_i_189_);
lean_dec(v_i_189_);
v_res_193_ = lean_array_uset(v_xs_188_, v_i_boxed_192_, v_v_190_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Array_pop___boxed(lean_object* v_00_u03b1_196_, lean_object* v_xs_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = lean_array_pop(v_xs_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Array_markLinear___boxed(lean_object* v_00_u03b1_201_, lean_object* v_xs_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = lean_array_mark_linear(v_xs_202_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Array_propagateMark___boxed(lean_object* v_00_u03b1_208_, lean_object* v_00_u03b2_209_, lean_object* v_xs_210_, lean_object* v_ys_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = lean_array_propagate_mark(v_xs_210_, v_ys_211_);
lean_dec_ref(v_xs_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Array_replicate___boxed(lean_object* v_00_u03b1_216_, lean_object* v_n_217_, lean_object* v_v_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = lean_mk_array(v_n_217_, v_v_218_);
return v_res_219_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__9(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = ((lean_object*)(l_Array_swap___auto__1___closed__8));
v___x_240_ = l_Lean_mkAtom(v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__10(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = lean_obj_once(&l_Array_swap___auto__1___closed__9, &l_Array_swap___auto__1___closed__9_once, _init_l_Array_swap___auto__1___closed__9);
v___x_242_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_243_ = lean_array_push(v___x_242_, v___x_241_);
return v___x_243_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__11(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_244_ = lean_obj_once(&l_Array_swap___auto__1___closed__10, &l_Array_swap___auto__1___closed__10_once, _init_l_Array_swap___auto__1___closed__10);
v___x_245_ = ((lean_object*)(l_Array_swap___auto__1___closed__7));
v___x_246_ = lean_box(2);
v___x_247_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___x_245_);
lean_ctor_set(v___x_247_, 2, v___x_244_);
return v___x_247_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__12(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = lean_obj_once(&l_Array_swap___auto__1___closed__11, &l_Array_swap___auto__1___closed__11_once, _init_l_Array_swap___auto__1___closed__11);
v___x_249_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_250_ = lean_array_push(v___x_249_, v___x_248_);
return v___x_250_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__13(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_251_ = lean_obj_once(&l_Array_swap___auto__1___closed__12, &l_Array_swap___auto__1___closed__12_once, _init_l_Array_swap___auto__1___closed__12);
v___x_252_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13));
v___x_253_ = lean_box(2);
v___x_254_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___x_252_);
lean_ctor_set(v___x_254_, 2, v___x_251_);
return v___x_254_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__14(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = lean_obj_once(&l_Array_swap___auto__1___closed__13, &l_Array_swap___auto__1___closed__13_once, _init_l_Array_swap___auto__1___closed__13);
v___x_256_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_257_ = lean_array_push(v___x_256_, v___x_255_);
return v___x_257_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__15(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_258_ = lean_obj_once(&l_Array_swap___auto__1___closed__14, &l_Array_swap___auto__1___closed__14_once, _init_l_Array_swap___auto__1___closed__14);
v___x_259_ = ((lean_object*)(l_Array_swap___auto__1___closed__5));
v___x_260_ = lean_box(2);
v___x_261_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___x_259_);
lean_ctor_set(v___x_261_, 2, v___x_258_);
return v___x_261_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__16(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_262_ = lean_obj_once(&l_Array_swap___auto__1___closed__15, &l_Array_swap___auto__1___closed__15_once, _init_l_Array_swap___auto__1___closed__15);
v___x_263_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_264_ = lean_array_push(v___x_263_, v___x_262_);
return v___x_264_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__17(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_265_ = lean_obj_once(&l_Array_swap___auto__1___closed__16, &l_Array_swap___auto__1___closed__16_once, _init_l_Array_swap___auto__1___closed__16);
v___x_266_ = ((lean_object*)(l_Array_swap___auto__1___closed__2));
v___x_267_ = lean_box(2);
v___x_268_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v___x_266_);
lean_ctor_set(v___x_268_, 2, v___x_265_);
return v___x_268_;
}
}
static lean_object* _init_l_Array_swap___auto__1(void){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_269_;
}
}
static lean_object* _init_l_Array_swap___auto__3(void){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Array_swap___boxed(lean_object* v_00_u03b1_277_, lean_object* v_xs_278_, lean_object* v_i_279_, lean_object* v_j_280_, lean_object* v_hi_281_, lean_object* v_hj_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = lean_array_fswap(v_xs_278_, v_i_279_, v_j_280_);
lean_dec(v_j_280_);
lean_dec(v_i_279_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Array_swapIfInBounds___boxed(lean_object* v_00_u03b1_288_, lean_object* v_xs_289_, lean_object* v_i_290_, lean_object* v_j_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = lean_array_swap(v_xs_289_, v_i_290_, v_j_291_);
lean_dec(v_j_291_);
lean_dec(v_i_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(lean_object* v_xs_293_, size_t v_i_294_, lean_object* v_h_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_array_uget_borrowed(v_xs_293_, v_i_294_);
lean_inc(v___x_296_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed(lean_object* v_xs_297_, lean_object* v_i_298_, lean_object* v_h_299_){
_start:
{
size_t v_i_boxed_300_; lean_object* v_res_301_; 
v_i_boxed_300_ = lean_unbox_usize(v_i_298_);
lean_dec(v_i_298_);
v_res_301_ = l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(v_xs_297_, v_i_boxed_300_, v_h_299_);
lean_dec_ref(v_xs_297_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg(){
_start:
{
lean_object* v___f_304_; 
v___f_304_ = ((lean_object*)(l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0));
return v___f_304_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___boxed(lean_object* v___dummy_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Array_instGetElemUSizeLtNatToNatSize___redArg();
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize(lean_object* v_00_u03b1_307_){
_start:
{
lean_object* v___f_308_; 
v___f_308_ = ((lean_object*)(l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0));
return v___f_308_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg___boxed(lean_object* v___dummy_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Array_instEmptyCollection___redArg();
return v_res_314_;
}
}
static lean_object* _init_l_Array_instEmptyCollection___closed__0(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Array_instEmptyCollection___redArg();
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection(lean_object* v_00_u03b1_316_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Array_instEmptyCollection___closed__0, &l_Array_instEmptyCollection___closed__0_once, _init_l_Array_instEmptyCollection___closed__0);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg(){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg___boxed(lean_object* v___dummy_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Array_instInhabited___redArg();
return v_res_321_;
}
}
static lean_object* _init_l_Array_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Array_instInhabited___redArg();
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited(lean_object* v_00_u03b1_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l_Array_instInhabited___closed__0, &l_Array_instInhabited___closed__0_once, _init_l_Array_instInhabited___closed__0);
return v___x_324_;
}
}
LEAN_EXPORT uint8_t l_Array_isEmpty___redArg(lean_object* v_xs_325_){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_326_ = lean_array_get_size(v_xs_325_);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_nat_dec_eq(v___x_326_, v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Array_isEmpty___redArg___boxed(lean_object* v_xs_329_){
_start:
{
uint8_t v_res_330_; lean_object* v_r_331_; 
v_res_330_ = l_Array_isEmpty___redArg(v_xs_329_);
lean_dec_ref(v_xs_329_);
v_r_331_ = lean_box(v_res_330_);
return v_r_331_;
}
}
LEAN_EXPORT uint8_t l_Array_isEmpty(lean_object* v_00_u03b1_332_, lean_object* v_xs_333_){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_334_ = lean_array_get_size(v_xs_333_);
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = lean_nat_dec_eq(v___x_334_, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Array_isEmpty___boxed(lean_object* v_00_u03b1_337_, lean_object* v_xs_338_){
_start:
{
uint8_t v_res_339_; lean_object* v_r_340_; 
v_res_339_ = l_Array_isEmpty(v_00_u03b1_337_, v_xs_338_);
lean_dec_ref(v_xs_338_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___redArg(lean_object* v_xs_341_, lean_object* v_ys_342_, lean_object* v_p_343_, lean_object* v_x_344_){
_start:
{
lean_object* v_zero_345_; uint8_t v_isZero_346_; 
v_zero_345_ = lean_unsigned_to_nat(0u);
v_isZero_346_ = lean_nat_dec_eq(v_x_344_, v_zero_345_);
if (v_isZero_346_ == 1)
{
lean_dec(v_x_344_);
lean_dec_ref(v_p_343_);
return v_isZero_346_;
}
else
{
lean_object* v_one_347_; lean_object* v_n_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v_one_347_ = lean_unsigned_to_nat(1u);
v_n_348_ = lean_nat_sub(v_x_344_, v_one_347_);
lean_dec(v_x_344_);
v___x_349_ = lean_array_fget_borrowed(v_xs_341_, v_n_348_);
v___x_350_ = lean_array_fget_borrowed(v_ys_342_, v_n_348_);
lean_inc_ref(v_p_343_);
lean_inc(v___x_350_);
lean_inc(v___x_349_);
v___x_351_ = lean_apply_2(v_p_343_, v___x_349_, v___x_350_);
v___x_352_ = lean_unbox(v___x_351_);
if (v___x_352_ == 0)
{
uint8_t v___x_353_; 
lean_dec(v_n_348_);
lean_dec_ref(v_p_343_);
v___x_353_ = lean_unbox(v___x_351_);
return v___x_353_;
}
else
{
v_x_344_ = v_n_348_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___redArg___boxed(lean_object* v_xs_355_, lean_object* v_ys_356_, lean_object* v_p_357_, lean_object* v_x_358_){
_start:
{
uint8_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = l_Array_isEqvAux___redArg(v_xs_355_, v_ys_356_, v_p_357_, v_x_358_);
lean_dec_ref(v_ys_356_);
lean_dec_ref(v_xs_355_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux(lean_object* v_00_u03b1_361_, lean_object* v_xs_362_, lean_object* v_ys_363_, lean_object* v_hsz_364_, lean_object* v_p_365_, lean_object* v_x_366_, lean_object* v_x_367_){
_start:
{
uint8_t v___x_368_; 
v___x_368_ = l_Array_isEqvAux___redArg(v_xs_362_, v_ys_363_, v_p_365_, v_x_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___boxed(lean_object* v_00_u03b1_369_, lean_object* v_xs_370_, lean_object* v_ys_371_, lean_object* v_hsz_372_, lean_object* v_p_373_, lean_object* v_x_374_, lean_object* v_x_375_){
_start:
{
uint8_t v_res_376_; lean_object* v_r_377_; 
v_res_376_ = l_Array_isEqvAux(v_00_u03b1_369_, v_xs_370_, v_ys_371_, v_hsz_372_, v_p_373_, v_x_374_, v_x_375_);
lean_dec_ref(v_ys_371_);
lean_dec_ref(v_xs_370_);
v_r_377_ = lean_box(v_res_376_);
return v_r_377_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqv___redArg(lean_object* v_xs_378_, lean_object* v_ys_379_, lean_object* v_p_380_){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_381_ = lean_array_get_size(v_xs_378_);
v___x_382_ = lean_array_get_size(v_ys_379_);
v___x_383_ = lean_nat_dec_eq(v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec_ref(v_p_380_);
return v___x_383_;
}
else
{
uint8_t v___x_384_; 
v___x_384_ = l_Array_isEqvAux___redArg(v_xs_378_, v_ys_379_, v_p_380_, v___x_381_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqv___redArg___boxed(lean_object* v_xs_385_, lean_object* v_ys_386_, lean_object* v_p_387_){
_start:
{
uint8_t v_res_388_; lean_object* v_r_389_; 
v_res_388_ = l_Array_isEqv___redArg(v_xs_385_, v_ys_386_, v_p_387_);
lean_dec_ref(v_ys_386_);
lean_dec_ref(v_xs_385_);
v_r_389_ = lean_box(v_res_388_);
return v_r_389_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqv(lean_object* v_00_u03b1_390_, lean_object* v_xs_391_, lean_object* v_ys_392_, lean_object* v_p_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_394_ = lean_array_get_size(v_xs_391_);
v___x_395_ = lean_array_get_size(v_ys_392_);
v___x_396_ = lean_nat_dec_eq(v___x_394_, v___x_395_);
if (v___x_396_ == 0)
{
lean_dec_ref(v_p_393_);
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = l_Array_isEqvAux___redArg(v_xs_391_, v_ys_392_, v_p_393_, v___x_394_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqv___boxed(lean_object* v_00_u03b1_398_, lean_object* v_xs_399_, lean_object* v_ys_400_, lean_object* v_p_401_){
_start:
{
uint8_t v_res_402_; lean_object* v_r_403_; 
v_res_402_ = l_Array_isEqv(v_00_u03b1_398_, v_xs_399_, v_ys_400_, v_p_401_);
lean_dec_ref(v_ys_400_);
lean_dec_ref(v_xs_399_);
v_r_403_ = lean_box(v_res_402_);
return v_r_403_;
}
}
LEAN_EXPORT uint8_t l_Array_instBEq___redArg___lam__0(lean_object* v_inst_404_, lean_object* v_xs_405_, lean_object* v_ys_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_407_ = lean_array_get_size(v_xs_405_);
v___x_408_ = lean_array_get_size(v_ys_406_);
v___x_409_ = lean_nat_dec_eq(v___x_407_, v___x_408_);
if (v___x_409_ == 0)
{
lean_dec_ref(v_inst_404_);
return v___x_409_;
}
else
{
uint8_t v___x_410_; 
v___x_410_ = l_Array_isEqvAux___redArg(v_xs_405_, v_ys_406_, v_inst_404_, v___x_407_);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* l_Array_instBEq___redArg___lam__0___boxed(lean_object* v_inst_411_, lean_object* v_xs_412_, lean_object* v_ys_413_){
_start:
{
uint8_t v_res_414_; lean_object* v_r_415_; 
v_res_414_ = l_Array_instBEq___redArg___lam__0(v_inst_411_, v_xs_412_, v_ys_413_);
lean_dec_ref(v_ys_413_);
lean_dec_ref(v_xs_412_);
v_r_415_ = lean_box(v_res_414_);
return v_r_415_;
}
}
LEAN_EXPORT lean_object* l_Array_instBEq___redArg(lean_object* v_inst_416_){
_start:
{
lean_object* v___f_417_; 
v___f_417_ = lean_alloc_closure((void*)(l_Array_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_417_, 0, v_inst_416_);
return v___f_417_;
}
}
LEAN_EXPORT lean_object* l_Array_instBEq(lean_object* v_00_u03b1_418_, lean_object* v_inst_419_){
_start:
{
lean_object* v___f_420_; 
v___f_420_ = lean_alloc_closure((void*)(l_Array_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_420_, 0, v_inst_419_);
return v___f_420_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg(lean_object* v_n_421_, lean_object* v_f_422_, lean_object* v_acc_423_, lean_object* v_i_424_){
_start:
{
lean_object* v_zero_425_; uint8_t v_isZero_426_; 
v_zero_425_ = lean_unsigned_to_nat(0u);
v_isZero_426_ = lean_nat_dec_eq(v_i_424_, v_zero_425_);
if (v_isZero_426_ == 1)
{
lean_dec(v_i_424_);
lean_dec(v_f_422_);
return v_acc_423_;
}
else
{
lean_object* v_one_427_; lean_object* v_n_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v_one_427_ = lean_unsigned_to_nat(1u);
v_n_428_ = lean_nat_sub(v_i_424_, v_one_427_);
lean_dec(v_i_424_);
v___x_429_ = lean_nat_sub(v_n_421_, v_n_428_);
v___x_430_ = lean_nat_sub(v___x_429_, v_one_427_);
lean_dec(v___x_429_);
lean_inc(v_f_422_);
v___x_431_ = lean_apply_1(v_f_422_, v___x_430_);
v___x_432_ = lean_array_push(v_acc_423_, v___x_431_);
v_acc_423_ = v___x_432_;
v_i_424_ = v_n_428_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg___boxed(lean_object* v_n_434_, lean_object* v_f_435_, lean_object* v_acc_436_, lean_object* v_i_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Array_ofFn_go___redArg(v_n_434_, v_f_435_, v_acc_436_, v_i_437_);
lean_dec(v_n_434_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go(lean_object* v_00_u03b1_439_, lean_object* v_n_440_, lean_object* v_f_441_, lean_object* v_acc_442_, lean_object* v_i_443_, lean_object* v_a_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Array_ofFn_go___redArg(v_n_440_, v_f_441_, v_acc_442_, v_i_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___boxed(lean_object* v_00_u03b1_446_, lean_object* v_n_447_, lean_object* v_f_448_, lean_object* v_acc_449_, lean_object* v_i_450_, lean_object* v_a_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Array_ofFn_go(v_00_u03b1_446_, v_n_447_, v_f_448_, v_acc_449_, v_i_450_, v_a_451_);
lean_dec(v_n_447_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn___redArg(lean_object* v_n_453_, lean_object* v_f_454_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = lean_mk_empty_array_with_capacity(v_n_453_);
lean_inc(v_n_453_);
v___x_456_ = l_Array_ofFn_go___redArg(v_n_453_, v_f_454_, v___x_455_, v_n_453_);
lean_dec(v_n_453_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn(lean_object* v_00_u03b1_457_, lean_object* v_n_458_, lean_object* v_f_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Array_ofFn___redArg(v_n_458_, v_f_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Array_range___lam__0(lean_object* v_i_461_){
_start:
{
lean_inc(v_i_461_);
return v_i_461_;
}
}
LEAN_EXPORT lean_object* l_Array_range___lam__0___boxed(lean_object* v_i_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Array_range___lam__0(v_i_462_);
lean_dec(v_i_462_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Array_range(lean_object* v_n_465_){
_start:
{
lean_object* v___f_466_; lean_object* v___x_467_; 
v___f_466_ = ((lean_object*)(l_Array_range___closed__0));
v___x_467_ = l_Array_ofFn___redArg(v_n_465_, v___f_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0(lean_object* v_step_468_, lean_object* v_start_469_, lean_object* v_i_470_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_nat_mul(v_step_468_, v_i_470_);
v___x_472_ = lean_nat_add(v_start_469_, v___x_471_);
lean_dec(v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0___boxed(lean_object* v_step_473_, lean_object* v_start_474_, lean_object* v_i_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Array_range_x27___lam__0(v_step_473_, v_start_474_, v_i_475_);
lean_dec(v_i_475_);
lean_dec(v_start_474_);
lean_dec(v_step_473_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27(lean_object* v_start_477_, lean_object* v_size_478_, lean_object* v_step_479_){
_start:
{
lean_object* v___f_480_; lean_object* v___x_481_; 
v___f_480_ = lean_alloc_closure((void*)(l_Array_range_x27___lam__0___boxed), 3, 2);
lean_closure_set(v___f_480_, 0, v_step_479_);
lean_closure_set(v___f_480_, 1, v_start_477_);
v___x_481_ = l_Array_ofFn___redArg(v_size_478_, v___f_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Array_singleton___redArg(lean_object* v_v_482_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_unsigned_to_nat(1u);
v___x_484_ = lean_mk_empty_array_with_capacity(v___x_483_);
v___x_485_ = lean_array_push(v___x_484_, v_v_482_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Array_singleton(lean_object* v_00_u03b1_486_, lean_object* v_v_487_){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = lean_mk_empty_array_with_capacity(v___x_488_);
v___x_490_ = lean_array_push(v___x_489_, v_v_487_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___redArg(lean_object* v_inst_491_, lean_object* v_xs_492_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_493_ = lean_array_get_size(v_xs_492_);
v___x_494_ = lean_unsigned_to_nat(1u);
v___x_495_ = lean_nat_sub(v___x_493_, v___x_494_);
v___x_496_ = lean_array_get_borrowed(v_inst_491_, v_xs_492_, v___x_495_);
lean_dec(v___x_495_);
lean_inc(v___x_496_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___redArg___boxed(lean_object* v_inst_497_, lean_object* v_xs_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Array_back_x21___redArg(v_inst_497_, v_xs_498_);
lean_dec_ref(v_xs_498_);
lean_dec(v_inst_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21(lean_object* v_00_u03b1_500_, lean_object* v_inst_501_, lean_object* v_xs_502_){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_503_ = lean_array_get_size(v_xs_502_);
v___x_504_ = lean_unsigned_to_nat(1u);
v___x_505_ = lean_nat_sub(v___x_503_, v___x_504_);
v___x_506_ = lean_array_get_borrowed(v_inst_501_, v_xs_502_, v___x_505_);
lean_dec(v___x_505_);
lean_inc(v___x_506_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___boxed(lean_object* v_00_u03b1_507_, lean_object* v_inst_508_, lean_object* v_xs_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Array_back_x21(v_00_u03b1_507_, v_inst_508_, v_xs_509_);
lean_dec_ref(v_xs_509_);
lean_dec(v_inst_508_);
return v_res_510_;
}
}
static lean_object* _init_l_Array_back___auto__1(void){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Array_back___redArg(lean_object* v_xs_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_513_ = lean_array_get_size(v_xs_512_);
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = lean_nat_sub(v___x_513_, v___x_514_);
v___x_516_ = lean_array_fget_borrowed(v_xs_512_, v___x_515_);
lean_dec(v___x_515_);
lean_inc(v___x_516_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Array_back___redArg___boxed(lean_object* v_xs_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Array_back___redArg(v_xs_517_);
lean_dec_ref(v_xs_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Array_back(lean_object* v_00_u03b1_519_, lean_object* v_xs_520_, lean_object* v_h_521_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_522_ = lean_array_get_size(v_xs_520_);
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = lean_nat_sub(v___x_522_, v___x_523_);
v___x_525_ = lean_array_fget_borrowed(v_xs_520_, v___x_524_);
lean_dec(v___x_524_);
lean_inc(v___x_525_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Array_back___boxed(lean_object* v_00_u03b1_526_, lean_object* v_xs_527_, lean_object* v_h_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Array_back(v_00_u03b1_526_, v_xs_527_, v_h_528_);
lean_dec_ref(v_xs_527_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg(lean_object* v_xs_530_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_531_ = lean_array_get_size(v_xs_530_);
v___x_532_ = lean_unsigned_to_nat(1u);
v___x_533_ = lean_nat_sub(v___x_531_, v___x_532_);
v___x_534_ = lean_nat_dec_lt(v___x_533_, v___x_531_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
lean_dec(v___x_533_);
v___x_535_ = lean_box(0);
return v___x_535_;
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_array_fget_borrowed(v_xs_530_, v___x_533_);
lean_dec(v___x_533_);
lean_inc(v___x_536_);
v___x_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg___boxed(lean_object* v_xs_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Array_back_x3f___redArg(v_xs_538_);
lean_dec_ref(v_xs_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f(lean_object* v_00_u03b1_540_, lean_object* v_xs_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_542_ = lean_array_get_size(v_xs_541_);
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = lean_nat_sub(v___x_542_, v___x_543_);
v___x_545_ = lean_nat_dec_lt(v___x_544_, v___x_542_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
lean_dec(v___x_544_);
v___x_546_ = lean_box(0);
return v___x_546_;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_array_fget_borrowed(v_xs_541_, v___x_544_);
lean_dec(v___x_544_);
lean_inc(v___x_547_);
v___x_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___boxed(lean_object* v_00_u03b1_549_, lean_object* v_xs_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Array_back_x3f(v_00_u03b1_549_, v_xs_550_);
lean_dec_ref(v_xs_550_);
return v_res_551_;
}
}
static lean_object* _init_l_Array_swapAt___auto__1(void){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___redArg(lean_object* v_xs_553_, lean_object* v_i_554_, lean_object* v_v_555_){
_start:
{
lean_object* v_e_556_; lean_object* v_xs_x27_557_; lean_object* v___x_558_; 
v_e_556_ = lean_array_fget(v_xs_553_, v_i_554_);
v_xs_x27_557_ = lean_array_fset(v_xs_553_, v_i_554_, v_v_555_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v_e_556_);
lean_ctor_set(v___x_558_, 1, v_xs_x27_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___redArg___boxed(lean_object* v_xs_559_, lean_object* v_i_560_, lean_object* v_v_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Array_swapAt___redArg(v_xs_559_, v_i_560_, v_v_561_);
lean_dec(v_i_560_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt(lean_object* v_00_u03b1_563_, lean_object* v_xs_564_, lean_object* v_i_565_, lean_object* v_v_566_, lean_object* v_hi_567_){
_start:
{
lean_object* v_e_568_; lean_object* v_xs_x27_569_; lean_object* v___x_570_; 
v_e_568_ = lean_array_fget(v_xs_564_, v_i_565_);
v_xs_x27_569_ = lean_array_fset(v_xs_564_, v_i_565_, v_v_566_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v_e_568_);
lean_ctor_set(v___x_570_, 1, v_xs_x27_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___boxed(lean_object* v_00_u03b1_571_, lean_object* v_xs_572_, lean_object* v_i_573_, lean_object* v_v_574_, lean_object* v_hi_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Array_swapAt(v_00_u03b1_571_, v_xs_572_, v_i_573_, v_v_574_, v_hi_575_);
lean_dec(v_i_573_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt_x21___redArg(lean_object* v_xs_581_, lean_object* v_i_582_, lean_object* v_v_583_){
_start:
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = lean_array_get_size(v_xs_581_);
v___x_585_ = lean_nat_dec_lt(v_i_582_, v___x_584_);
if (v___x_585_ == 0)
{
lean_object* v_this_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_this_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_this_586_, 0, v_v_583_);
lean_ctor_set(v_this_586_, 1, v_xs_581_);
v___x_587_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_588_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__1));
v___x_589_ = lean_unsigned_to_nat(463u);
v___x_590_ = lean_unsigned_to_nat(4u);
v___x_591_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__2));
v___x_592_ = l_Nat_reprFast(v_i_582_);
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
lean_dec_ref(v___x_592_);
v___x_594_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__3));
v___x_595_ = lean_string_append(v___x_593_, v___x_594_);
v___x_596_ = l_mkPanicMessageWithDecl(v___x_587_, v___x_588_, v___x_589_, v___x_590_, v___x_595_);
lean_dec_ref(v___x_595_);
v___x_597_ = l_panic___redArg(v_this_586_, v___x_596_);
lean_dec_ref_known(v_this_586_, 2);
return v___x_597_;
}
else
{
lean_object* v_e_598_; lean_object* v_xs_x27_599_; lean_object* v___x_600_; 
v_e_598_ = lean_array_fget(v_xs_581_, v_i_582_);
v_xs_x27_599_ = lean_array_fset(v_xs_581_, v_i_582_, v_v_583_);
lean_dec(v_i_582_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v_e_598_);
lean_ctor_set(v___x_600_, 1, v_xs_x27_599_);
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_Array_swapAt_x21(lean_object* v_00_u03b1_601_, lean_object* v_xs_602_, lean_object* v_i_603_, lean_object* v_v_604_){
_start:
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = lean_array_get_size(v_xs_602_);
v___x_606_ = lean_nat_dec_lt(v_i_603_, v___x_605_);
if (v___x_606_ == 0)
{
lean_object* v_this_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_this_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_this_607_, 0, v_v_604_);
lean_ctor_set(v_this_607_, 1, v_xs_602_);
v___x_608_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_609_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__1));
v___x_610_ = lean_unsigned_to_nat(463u);
v___x_611_ = lean_unsigned_to_nat(4u);
v___x_612_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__2));
v___x_613_ = l_Nat_reprFast(v_i_603_);
v___x_614_ = lean_string_append(v___x_612_, v___x_613_);
lean_dec_ref(v___x_613_);
v___x_615_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__3));
v___x_616_ = lean_string_append(v___x_614_, v___x_615_);
v___x_617_ = l_mkPanicMessageWithDecl(v___x_608_, v___x_609_, v___x_610_, v___x_611_, v___x_616_);
lean_dec_ref(v___x_616_);
v___x_618_ = l_panic___redArg(v_this_607_, v___x_617_);
lean_dec_ref_known(v_this_607_, 2);
return v___x_618_;
}
else
{
lean_object* v_e_619_; lean_object* v_xs_x27_620_; lean_object* v___x_621_; 
v_e_619_ = lean_array_fget(v_xs_602_, v_i_603_);
v_xs_x27_620_ = lean_array_fset(v_xs_602_, v_i_603_, v_v_604_);
lean_dec(v_i_603_);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v_e_619_);
lean_ctor_set(v___x_621_, 1, v_xs_x27_620_);
return v___x_621_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(lean_object* v_x_622_, lean_object* v_x_623_){
_start:
{
lean_object* v_zero_624_; uint8_t v_isZero_625_; 
v_zero_624_ = lean_unsigned_to_nat(0u);
v_isZero_625_ = lean_nat_dec_eq(v_x_622_, v_zero_624_);
if (v_isZero_625_ == 1)
{
lean_dec(v_x_622_);
return v_x_623_;
}
else
{
lean_object* v_one_626_; lean_object* v_n_627_; lean_object* v___x_628_; 
v_one_626_ = lean_unsigned_to_nat(1u);
v_n_627_ = lean_nat_sub(v_x_622_, v_one_626_);
lean_dec(v_x_622_);
v___x_628_ = lean_array_pop(v_x_623_);
v_x_622_ = v_n_627_;
v_x_623_ = v___x_628_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop(lean_object* v_00_u03b1_630_, lean_object* v_x_631_, lean_object* v_x_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(v_x_631_, v_x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___redArg(lean_object* v_xs_634_, lean_object* v_n_635_){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = lean_array_get_size(v_xs_634_);
v___x_637_ = lean_nat_sub(v___x_636_, v_n_635_);
v___x_638_ = l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(v___x_637_, v_xs_634_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___redArg___boxed(lean_object* v_xs_639_, lean_object* v_n_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Array_shrink___redArg(v_xs_639_, v_n_640_);
lean_dec(v_n_640_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink(lean_object* v_00_u03b1_642_, lean_object* v_xs_643_, lean_object* v_n_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Array_shrink___redArg(v_xs_643_, v_n_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___boxed(lean_object* v_00_u03b1_646_, lean_object* v_xs_647_, lean_object* v_n_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Array_shrink(v_00_u03b1_646_, v_xs_647_, v_n_648_);
lean_dec(v_n_648_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Array_take___redArg(lean_object* v_xs_650_, lean_object* v_i_651_){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_unsigned_to_nat(0u);
v___x_653_ = l_Array_extract___redArg(v_xs_650_, v___x_652_, v_i_651_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Array_take___redArg___boxed(lean_object* v_xs_654_, lean_object* v_i_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Array_take___redArg(v_xs_654_, v_i_655_);
lean_dec_ref(v_xs_654_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Array_take(lean_object* v_00_u03b1_657_, lean_object* v_xs_658_, lean_object* v_i_659_){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_unsigned_to_nat(0u);
v___x_661_ = l_Array_extract___redArg(v_xs_658_, v___x_660_, v_i_659_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Array_take___boxed(lean_object* v_00_u03b1_662_, lean_object* v_xs_663_, lean_object* v_i_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Array_take(v_00_u03b1_662_, v_xs_663_, v_i_664_);
lean_dec_ref(v_xs_663_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___redArg(lean_object* v_xs_666_, lean_object* v_i_667_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_array_get_size(v_xs_666_);
v___x_669_ = l_Array_extract___redArg(v_xs_666_, v_i_667_, v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___redArg___boxed(lean_object* v_xs_670_, lean_object* v_i_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Array_drop___redArg(v_xs_670_, v_i_671_);
lean_dec_ref(v_xs_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Array_drop(lean_object* v_00_u03b1_673_, lean_object* v_xs_674_, lean_object* v_i_675_){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = lean_array_get_size(v_xs_674_);
v___x_677_ = l_Array_extract___redArg(v_xs_674_, v_i_675_, v___x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___boxed(lean_object* v_00_u03b1_678_, lean_object* v_xs_679_, lean_object* v_i_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Array_drop(v_00_u03b1_678_, v_xs_679_, v_i_680_);
lean_dec_ref(v_xs_679_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0(lean_object* v_xs_x27_682_, lean_object* v_i_683_, lean_object* v_toPure_684_, lean_object* v_v_685_){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_array_fset(v_xs_x27_682_, v_i_683_, v_v_685_);
v___x_687_ = lean_apply_2(v_toPure_684_, lean_box(0), v___x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0___boxed(lean_object* v_xs_x27_688_, lean_object* v_i_689_, lean_object* v_toPure_690_, lean_object* v_v_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Array_modifyMUnsafe___redArg___lam__0(v_xs_x27_688_, v_i_689_, v_toPure_690_, v_v_691_);
lean_dec(v_i_689_);
return v_res_692_;
}
}
static lean_object* _init_l_Array_modifyMUnsafe___redArg___closed__0(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_box(0);
v___x_694_ = l_unsafeCast___redArg(v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg(lean_object* v_inst_695_, lean_object* v_xs_696_, lean_object* v_i_697_, lean_object* v_f_698_){
_start:
{
lean_object* v_toApplicative_699_; lean_object* v_toBind_700_; lean_object* v_toPure_701_; lean_object* v___x_702_; uint8_t v___x_703_; 
v_toApplicative_699_ = lean_ctor_get(v_inst_695_, 0);
lean_inc_ref(v_toApplicative_699_);
v_toBind_700_ = lean_ctor_get(v_inst_695_, 1);
lean_inc(v_toBind_700_);
lean_dec_ref(v_inst_695_);
v_toPure_701_ = lean_ctor_get(v_toApplicative_699_, 1);
lean_inc(v_toPure_701_);
lean_dec_ref(v_toApplicative_699_);
v___x_702_ = lean_array_get_size(v_xs_696_);
v___x_703_ = lean_nat_dec_lt(v_i_697_, v___x_702_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; 
lean_dec(v_toBind_700_);
lean_dec(v_f_698_);
lean_dec(v_i_697_);
v___x_704_ = lean_apply_2(v_toPure_701_, lean_box(0), v_xs_696_);
return v___x_704_;
}
else
{
lean_object* v_v_705_; lean_object* v___x_706_; lean_object* v_xs_x27_707_; lean_object* v___f_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v_v_705_ = lean_array_fget(v_xs_696_, v_i_697_);
v___x_706_ = lean_obj_once(&l_Array_modifyMUnsafe___redArg___closed__0, &l_Array_modifyMUnsafe___redArg___closed__0_once, _init_l_Array_modifyMUnsafe___redArg___closed__0);
v_xs_x27_707_ = lean_array_fset(v_xs_696_, v_i_697_, v___x_706_);
v___f_708_ = lean_alloc_closure((void*)(l_Array_modifyMUnsafe___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_708_, 0, v_xs_x27_707_);
lean_closure_set(v___f_708_, 1, v_i_697_);
lean_closure_set(v___f_708_, 2, v_toPure_701_);
v___x_709_ = lean_apply_1(v_f_698_, v_v_705_);
v___x_710_ = lean_apply_4(v_toBind_700_, lean_box(0), lean_box(0), v___x_709_, v___f_708_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe(lean_object* v_00_u03b1_711_, lean_object* v_m_712_, lean_object* v_inst_713_, lean_object* v_xs_714_, lean_object* v_i_715_, lean_object* v_f_716_){
_start:
{
lean_object* v_toApplicative_717_; lean_object* v_toBind_718_; lean_object* v_toPure_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v_toApplicative_717_ = lean_ctor_get(v_inst_713_, 0);
lean_inc_ref(v_toApplicative_717_);
v_toBind_718_ = lean_ctor_get(v_inst_713_, 1);
lean_inc(v_toBind_718_);
lean_dec_ref(v_inst_713_);
v_toPure_719_ = lean_ctor_get(v_toApplicative_717_, 1);
lean_inc(v_toPure_719_);
lean_dec_ref(v_toApplicative_717_);
v___x_720_ = lean_array_get_size(v_xs_714_);
v___x_721_ = lean_nat_dec_lt(v_i_715_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
lean_dec(v_toBind_718_);
lean_dec(v_f_716_);
lean_dec(v_i_715_);
v___x_722_ = lean_apply_2(v_toPure_719_, lean_box(0), v_xs_714_);
return v___x_722_;
}
else
{
lean_object* v_v_723_; lean_object* v___x_724_; lean_object* v_xs_x27_725_; lean_object* v___f_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v_v_723_ = lean_array_fget(v_xs_714_, v_i_715_);
v___x_724_ = lean_obj_once(&l_Array_modifyMUnsafe___redArg___closed__0, &l_Array_modifyMUnsafe___redArg___closed__0_once, _init_l_Array_modifyMUnsafe___redArg___closed__0);
v_xs_x27_725_ = lean_array_fset(v_xs_714_, v_i_715_, v___x_724_);
v___f_726_ = lean_alloc_closure((void*)(l_Array_modifyMUnsafe___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_726_, 0, v_xs_x27_725_);
lean_closure_set(v___f_726_, 1, v_i_715_);
lean_closure_set(v___f_726_, 2, v_toPure_719_);
v___x_727_ = lean_apply_1(v_f_716_, v_v_723_);
v___x_728_ = lean_apply_4(v_toBind_718_, lean_box(0), lean_box(0), v___x_727_, v___f_726_);
return v___x_728_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___redArg(lean_object* v_xs_729_, lean_object* v_i_730_, lean_object* v_f_731_){
_start:
{
lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_732_ = lean_array_get_size(v_xs_729_);
v___x_733_ = lean_nat_dec_lt(v_i_730_, v___x_732_);
if (v___x_733_ == 0)
{
lean_dec(v_f_731_);
return v_xs_729_;
}
else
{
lean_object* v_v_734_; lean_object* v___x_735_; lean_object* v_xs_x27_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v_v_734_ = lean_array_fget(v_xs_729_, v_i_730_);
v___x_735_ = lean_obj_once(&l_Array_modifyMUnsafe___redArg___closed__0, &l_Array_modifyMUnsafe___redArg___closed__0_once, _init_l_Array_modifyMUnsafe___redArg___closed__0);
v_xs_x27_736_ = lean_array_fset(v_xs_729_, v_i_730_, v___x_735_);
v___x_737_ = lean_apply_1(v_f_731_, v_v_734_);
v___x_738_ = lean_array_fset(v_xs_x27_736_, v_i_730_, v___x_737_);
return v___x_738_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___redArg___boxed(lean_object* v_xs_739_, lean_object* v_i_740_, lean_object* v_f_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Array_modify___redArg(v_xs_739_, v_i_740_, v_f_741_);
lean_dec(v_i_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Array_modify(lean_object* v_00_u03b1_743_, lean_object* v_xs_744_, lean_object* v_i_745_, lean_object* v_f_746_){
_start:
{
lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_747_ = lean_array_get_size(v_xs_744_);
v___x_748_ = lean_nat_dec_lt(v_i_745_, v___x_747_);
if (v___x_748_ == 0)
{
lean_dec(v_f_746_);
return v_xs_744_;
}
else
{
lean_object* v_v_749_; lean_object* v___x_750_; lean_object* v_xs_x27_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v_v_749_ = lean_array_fget(v_xs_744_, v_i_745_);
v___x_750_ = lean_obj_once(&l_Array_modifyMUnsafe___redArg___closed__0, &l_Array_modifyMUnsafe___redArg___closed__0_once, _init_l_Array_modifyMUnsafe___redArg___closed__0);
v_xs_x27_751_ = lean_array_fset(v_xs_744_, v_i_745_, v___x_750_);
v___x_752_ = lean_apply_1(v_f_746_, v_v_749_);
v___x_753_ = lean_array_fset(v_xs_x27_751_, v_i_745_, v___x_752_);
return v___x_753_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___boxed(lean_object* v_00_u03b1_754_, lean_object* v_xs_755_, lean_object* v_i_756_, lean_object* v_f_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Array_modify(v_00_u03b1_754_, v_xs_755_, v_i_756_, v_f_757_);
lean_dec(v_i_756_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg(lean_object* v_xs_759_, lean_object* v_idx_760_, lean_object* v_f_761_){
_start:
{
lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_762_ = lean_array_get_size(v_xs_759_);
v___x_763_ = lean_nat_dec_lt(v_idx_760_, v___x_762_);
if (v___x_763_ == 0)
{
lean_dec(v_f_761_);
return v_xs_759_;
}
else
{
lean_object* v_v_764_; lean_object* v___x_765_; lean_object* v_xs_x27_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_v_764_ = lean_array_fget(v_xs_759_, v_idx_760_);
v___x_765_ = lean_obj_once(&l_Array_modifyMUnsafe___redArg___closed__0, &l_Array_modifyMUnsafe___redArg___closed__0_once, _init_l_Array_modifyMUnsafe___redArg___closed__0);
v_xs_x27_766_ = lean_array_fset(v_xs_759_, v_idx_760_, v___x_765_);
v___x_767_ = lean_apply_1(v_f_761_, v_v_764_);
v___x_768_ = lean_array_fset(v_xs_x27_766_, v_idx_760_, v___x_767_);
return v___x_768_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg___boxed(lean_object* v_xs_769_, lean_object* v_idx_770_, lean_object* v_f_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Array_modifyOp___redArg(v_xs_769_, v_idx_770_, v_f_771_);
lean_dec(v_idx_770_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp(lean_object* v_00_u03b1_773_, lean_object* v_xs_774_, lean_object* v_idx_775_, lean_object* v_f_776_){
_start:
{
lean_object* v___x_777_; uint8_t v___x_778_; 
v___x_777_ = lean_array_get_size(v_xs_774_);
v___x_778_ = lean_nat_dec_lt(v_idx_775_, v___x_777_);
if (v___x_778_ == 0)
{
lean_dec(v_f_776_);
return v_xs_774_;
}
else
{
lean_object* v_v_779_; lean_object* v___x_780_; lean_object* v_xs_x27_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v_v_779_ = lean_array_fget(v_xs_774_, v_idx_775_);
v___x_780_ = lean_obj_once(&l_Array_modifyMUnsafe___redArg___closed__0, &l_Array_modifyMUnsafe___redArg___closed__0_once, _init_l_Array_modifyMUnsafe___redArg___closed__0);
v_xs_x27_781_ = lean_array_fset(v_xs_774_, v_idx_775_, v___x_780_);
v___x_782_ = lean_apply_1(v_f_776_, v_v_779_);
v___x_783_ = lean_array_fset(v_xs_x27_781_, v_idx_775_, v___x_782_);
return v___x_783_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___boxed(lean_object* v_00_u03b1_784_, lean_object* v_xs_785_, lean_object* v_idx_786_, lean_object* v_f_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Array_modifyOp(v_00_u03b1_784_, v_xs_785_, v_idx_786_, v_f_787_);
lean_dec(v_idx_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed(lean_object* v_toPure_789_, lean_object* v_i_790_, lean_object* v_inst_791_, lean_object* v_as_792_, lean_object* v_f_793_, lean_object* v_sz_794_, lean_object* v_____do__lift_795_){
_start:
{
size_t v_i_boxed_796_; size_t v_sz_boxed_797_; lean_object* v_res_798_; 
v_i_boxed_796_ = lean_unbox_usize(v_i_790_);
lean_dec(v_i_790_);
v_sz_boxed_797_ = lean_unbox_usize(v_sz_794_);
lean_dec(v_sz_794_);
v_res_798_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(v_toPure_789_, v_i_boxed_796_, v_inst_791_, v_as_792_, v_f_793_, v_sz_boxed_797_, v_____do__lift_795_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(lean_object* v_inst_799_, lean_object* v_as_800_, lean_object* v_f_801_, size_t v_sz_802_, size_t v_i_803_, lean_object* v_b_804_){
_start:
{
lean_object* v_toApplicative_805_; lean_object* v_toBind_806_; lean_object* v_toPure_807_; uint8_t v___x_808_; 
v_toApplicative_805_ = lean_ctor_get(v_inst_799_, 0);
v_toBind_806_ = lean_ctor_get(v_inst_799_, 1);
lean_inc(v_toBind_806_);
v_toPure_807_ = lean_ctor_get(v_toApplicative_805_, 1);
lean_inc(v_toPure_807_);
v___x_808_ = lean_usize_dec_lt(v_i_803_, v_sz_802_);
if (v___x_808_ == 0)
{
lean_object* v___x_809_; 
lean_dec(v_toBind_806_);
lean_dec(v_f_801_);
lean_dec_ref(v_as_800_);
lean_dec_ref(v_inst_799_);
v___x_809_ = lean_apply_2(v_toPure_807_, lean_box(0), v_b_804_);
return v___x_809_;
}
else
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___f_812_; lean_object* v_a_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_810_ = lean_box_usize(v_i_803_);
v___x_811_ = lean_box_usize(v_sz_802_);
lean_inc(v_f_801_);
lean_inc_ref(v_as_800_);
v___f_812_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_812_, 0, v_toPure_807_);
lean_closure_set(v___f_812_, 1, v___x_810_);
lean_closure_set(v___f_812_, 2, v_inst_799_);
lean_closure_set(v___f_812_, 3, v_as_800_);
lean_closure_set(v___f_812_, 4, v_f_801_);
lean_closure_set(v___f_812_, 5, v___x_811_);
v_a_813_ = lean_array_uget(v_as_800_, v_i_803_);
lean_dec_ref(v_as_800_);
v___x_814_ = lean_apply_3(v_f_801_, v_a_813_, lean_box(0), v_b_804_);
v___x_815_ = lean_apply_4(v_toBind_806_, lean_box(0), lean_box(0), v___x_814_, v___f_812_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(lean_object* v_toPure_816_, size_t v_i_817_, lean_object* v_inst_818_, lean_object* v_as_819_, lean_object* v_f_820_, size_t v_sz_821_, lean_object* v_____do__lift_822_){
_start:
{
if (lean_obj_tag(v_____do__lift_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; 
lean_dec(v_f_820_);
lean_dec_ref(v_as_819_);
lean_dec_ref(v_inst_818_);
v_a_823_ = lean_ctor_get(v_____do__lift_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v_____do__lift_822_, 1);
v___x_824_ = lean_apply_2(v_toPure_816_, lean_box(0), v_a_823_);
return v___x_824_;
}
else
{
lean_object* v_a_825_; size_t v___x_826_; size_t v___x_827_; lean_object* v___x_828_; 
lean_dec(v_toPure_816_);
v_a_825_ = lean_ctor_get(v_____do__lift_822_, 0);
lean_inc(v_a_825_);
lean_dec_ref_known(v_____do__lift_822_, 1);
v___x_826_ = ((size_t)1ULL);
v___x_827_ = lean_usize_add(v_i_817_, v___x_826_);
v___x_828_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_818_, v_as_819_, v_f_820_, v_sz_821_, v___x_827_, v_a_825_);
return v___x_828_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___boxed(lean_object* v_inst_829_, lean_object* v_as_830_, lean_object* v_f_831_, lean_object* v_sz_832_, lean_object* v_i_833_, lean_object* v_b_834_){
_start:
{
size_t v_sz_boxed_835_; size_t v_i_boxed_836_; lean_object* v_res_837_; 
v_sz_boxed_835_ = lean_unbox_usize(v_sz_832_);
lean_dec(v_sz_832_);
v_i_boxed_836_ = lean_unbox_usize(v_i_833_);
lean_dec(v_i_833_);
v_res_837_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_829_, v_as_830_, v_f_831_, v_sz_boxed_835_, v_i_boxed_836_, v_b_834_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object* v_00_u03b1_838_, lean_object* v_00_u03b2_839_, lean_object* v_m_840_, lean_object* v_inst_841_, lean_object* v_as_842_, lean_object* v_f_843_, size_t v_sz_844_, size_t v_i_845_, lean_object* v_b_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_841_, v_as_842_, v_f_843_, v_sz_844_, v_i_845_, v_b_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___boxed(lean_object* v_00_u03b1_848_, lean_object* v_00_u03b2_849_, lean_object* v_m_850_, lean_object* v_inst_851_, lean_object* v_as_852_, lean_object* v_f_853_, lean_object* v_sz_854_, lean_object* v_i_855_, lean_object* v_b_856_){
_start:
{
size_t v_sz_boxed_857_; size_t v_i_boxed_858_; lean_object* v_res_859_; 
v_sz_boxed_857_ = lean_unbox_usize(v_sz_854_);
lean_dec(v_sz_854_);
v_i_boxed_858_ = lean_unbox_usize(v_i_855_);
lean_dec(v_i_855_);
v_res_859_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(v_00_u03b1_848_, v_00_u03b2_849_, v_m_850_, v_inst_851_, v_as_852_, v_f_853_, v_sz_boxed_857_, v_i_boxed_858_, v_b_856_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe___redArg(lean_object* v_inst_860_, lean_object* v_as_861_, lean_object* v_b_862_, lean_object* v_f_863_){
_start:
{
size_t v_sz_864_; size_t v___x_865_; lean_object* v___x_866_; 
v_sz_864_ = lean_array_size(v_as_861_);
v___x_865_ = ((size_t)0ULL);
v___x_866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_860_, v_as_861_, v_f_863_, v_sz_864_, v___x_865_, v_b_862_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe(lean_object* v_00_u03b1_867_, lean_object* v_00_u03b2_868_, lean_object* v_m_869_, lean_object* v_inst_870_, lean_object* v_as_871_, lean_object* v_b_872_, lean_object* v_f_873_){
_start:
{
size_t v_sz_874_; size_t v___x_875_; lean_object* v___x_876_; 
v_sz_874_ = lean_array_size(v_as_871_);
v___x_875_ = ((size_t)0ULL);
v___x_876_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_870_, v_as_871_, v_f_873_, v_sz_874_, v___x_875_, v_b_872_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0___boxed(lean_object* v_toPure_877_, lean_object* v_inst_878_, lean_object* v_as_879_, lean_object* v_f_880_, lean_object* v_n_881_, lean_object* v_____do__lift_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Array_forIn_x27_loop___redArg___lam__0(v_toPure_877_, v_inst_878_, v_as_879_, v_f_880_, v_n_881_, v_____do__lift_882_);
lean_dec(v_n_881_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg(lean_object* v_inst_884_, lean_object* v_as_885_, lean_object* v_f_886_, lean_object* v_i_887_, lean_object* v_b_888_){
_start:
{
lean_object* v_toApplicative_889_; lean_object* v_toBind_890_; lean_object* v_toPure_891_; lean_object* v_zero_892_; uint8_t v_isZero_893_; 
v_toApplicative_889_ = lean_ctor_get(v_inst_884_, 0);
v_toBind_890_ = lean_ctor_get(v_inst_884_, 1);
lean_inc(v_toBind_890_);
v_toPure_891_ = lean_ctor_get(v_toApplicative_889_, 1);
lean_inc(v_toPure_891_);
v_zero_892_ = lean_unsigned_to_nat(0u);
v_isZero_893_ = lean_nat_dec_eq(v_i_887_, v_zero_892_);
if (v_isZero_893_ == 1)
{
lean_object* v___x_894_; 
lean_dec(v_toBind_890_);
lean_dec(v_f_886_);
lean_dec_ref(v_as_885_);
lean_dec_ref(v_inst_884_);
v___x_894_ = lean_apply_2(v_toPure_891_, lean_box(0), v_b_888_);
return v___x_894_;
}
else
{
lean_object* v_one_895_; lean_object* v_n_896_; lean_object* v___f_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_one_895_ = lean_unsigned_to_nat(1u);
v_n_896_ = lean_nat_sub(v_i_887_, v_one_895_);
lean_inc(v_n_896_);
lean_inc(v_f_886_);
lean_inc_ref(v_as_885_);
v___f_897_ = lean_alloc_closure((void*)(l_Array_forIn_x27_loop___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_897_, 0, v_toPure_891_);
lean_closure_set(v___f_897_, 1, v_inst_884_);
lean_closure_set(v___f_897_, 2, v_as_885_);
lean_closure_set(v___f_897_, 3, v_f_886_);
lean_closure_set(v___f_897_, 4, v_n_896_);
v___x_898_ = lean_array_get_size(v_as_885_);
v___x_899_ = lean_nat_sub(v___x_898_, v_one_895_);
v___x_900_ = lean_nat_sub(v___x_899_, v_n_896_);
lean_dec(v_n_896_);
lean_dec(v___x_899_);
v___x_901_ = lean_array_fget(v_as_885_, v___x_900_);
lean_dec(v___x_900_);
lean_dec_ref(v_as_885_);
v___x_902_ = lean_apply_3(v_f_886_, v___x_901_, lean_box(0), v_b_888_);
v___x_903_ = lean_apply_4(v_toBind_890_, lean_box(0), lean_box(0), v___x_902_, v___f_897_);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0(lean_object* v_toPure_904_, lean_object* v_inst_905_, lean_object* v_as_906_, lean_object* v_f_907_, lean_object* v_n_908_, lean_object* v_____do__lift_909_){
_start:
{
if (lean_obj_tag(v_____do__lift_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_911_; 
lean_dec(v_f_907_);
lean_dec_ref(v_as_906_);
lean_dec_ref(v_inst_905_);
v_a_910_ = lean_ctor_get(v_____do__lift_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v_____do__lift_909_, 1);
v___x_911_ = lean_apply_2(v_toPure_904_, lean_box(0), v_a_910_);
return v___x_911_;
}
else
{
lean_object* v_a_912_; lean_object* v___x_913_; 
lean_dec(v_toPure_904_);
v_a_912_ = lean_ctor_get(v_____do__lift_909_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v_____do__lift_909_, 1);
v___x_913_ = l_Array_forIn_x27_loop___redArg(v_inst_905_, v_as_906_, v_f_907_, v_n_908_, v_a_912_);
return v___x_913_;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___boxed(lean_object* v_inst_914_, lean_object* v_as_915_, lean_object* v_f_916_, lean_object* v_i_917_, lean_object* v_b_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Array_forIn_x27_loop___redArg(v_inst_914_, v_as_915_, v_f_916_, v_i_917_, v_b_918_);
lean_dec(v_i_917_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop(lean_object* v_00_u03b1_920_, lean_object* v_00_u03b2_921_, lean_object* v_m_922_, lean_object* v_inst_923_, lean_object* v_as_924_, lean_object* v_f_925_, lean_object* v_i_926_, lean_object* v_h_927_, lean_object* v_b_928_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = l_Array_forIn_x27_loop___redArg(v_inst_923_, v_as_924_, v_f_925_, v_i_926_, v_b_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___boxed(lean_object* v_00_u03b1_930_, lean_object* v_00_u03b2_931_, lean_object* v_m_932_, lean_object* v_inst_933_, lean_object* v_as_934_, lean_object* v_f_935_, lean_object* v_i_936_, lean_object* v_h_937_, lean_object* v_b_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Array_forIn_x27_loop(v_00_u03b1_930_, v_00_u03b2_931_, v_m_932_, v_inst_933_, v_as_934_, v_f_935_, v_i_936_, v_h_937_, v_b_938_);
lean_dec(v_i_936_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object* v_inst_940_, lean_object* v_00_u03b2_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
size_t v_sz_945_; size_t v___x_946_; lean_object* v___x_947_; 
v_sz_945_ = lean_array_size(v___y_942_);
v___x_946_ = ((size_t)0ULL);
v___x_947_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_940_, v___y_942_, v___y_944_, v_sz_945_, v___x_946_, v___y_943_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg(lean_object* v_inst_948_){
_start:
{
lean_object* v___f_949_; 
v___f_949_ = lean_alloc_closure((void*)(l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_949_, 0, v_inst_948_);
return v___f_949_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad(lean_object* v_00_u03b1_950_, lean_object* v_m_951_, lean_object* v_inst_952_){
_start:
{
lean_object* v___f_953_; 
v___f_953_ = lean_alloc_closure((void*)(l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_953_, 0, v_inst_952_);
return v___f_953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed(lean_object* v_i_954_, lean_object* v_inst_955_, lean_object* v_f_956_, lean_object* v_as_957_, lean_object* v_stop_958_, lean_object* v_____do__lift_959_){
_start:
{
size_t v_i_boxed_960_; size_t v_stop_boxed_961_; lean_object* v_res_962_; 
v_i_boxed_960_ = lean_unbox_usize(v_i_954_);
lean_dec(v_i_954_);
v_stop_boxed_961_ = lean_unbox_usize(v_stop_958_);
lean_dec(v_stop_958_);
v_res_962_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(v_i_boxed_960_, v_inst_955_, v_f_956_, v_as_957_, v_stop_boxed_961_, v_____do__lift_959_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(lean_object* v_inst_963_, lean_object* v_f_964_, lean_object* v_as_965_, size_t v_i_966_, size_t v_stop_967_, lean_object* v_b_968_){
_start:
{
lean_object* v_toApplicative_969_; lean_object* v_toBind_970_; lean_object* v_toPure_971_; uint8_t v___x_972_; 
v_toApplicative_969_ = lean_ctor_get(v_inst_963_, 0);
v_toBind_970_ = lean_ctor_get(v_inst_963_, 1);
lean_inc(v_toBind_970_);
v_toPure_971_ = lean_ctor_get(v_toApplicative_969_, 1);
v___x_972_ = lean_usize_dec_eq(v_i_966_, v_stop_967_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___f_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_973_ = lean_box_usize(v_i_966_);
v___x_974_ = lean_box_usize(v_stop_967_);
lean_inc_ref(v_as_965_);
lean_inc(v_f_964_);
v___f_975_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_975_, 0, v___x_973_);
lean_closure_set(v___f_975_, 1, v_inst_963_);
lean_closure_set(v___f_975_, 2, v_f_964_);
lean_closure_set(v___f_975_, 3, v_as_965_);
lean_closure_set(v___f_975_, 4, v___x_974_);
v___x_976_ = lean_array_uget(v_as_965_, v_i_966_);
lean_dec_ref(v_as_965_);
v___x_977_ = lean_apply_2(v_f_964_, v_b_968_, v___x_976_);
v___x_978_ = lean_apply_4(v_toBind_970_, lean_box(0), lean_box(0), v___x_977_, v___f_975_);
return v___x_978_;
}
else
{
lean_object* v___x_979_; 
lean_inc(v_toPure_971_);
lean_dec(v_toBind_970_);
lean_dec_ref(v_as_965_);
lean_dec(v_f_964_);
lean_dec_ref(v_inst_963_);
v___x_979_ = lean_apply_2(v_toPure_971_, lean_box(0), v_b_968_);
return v___x_979_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(size_t v_i_980_, lean_object* v_inst_981_, lean_object* v_f_982_, lean_object* v_as_983_, size_t v_stop_984_, lean_object* v_____do__lift_985_){
_start:
{
size_t v___x_986_; size_t v___x_987_; lean_object* v___x_988_; 
v___x_986_ = ((size_t)1ULL);
v___x_987_ = lean_usize_add(v_i_980_, v___x_986_);
v___x_988_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_981_, v_f_982_, v_as_983_, v___x_987_, v_stop_984_, v_____do__lift_985_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___boxed(lean_object* v_inst_989_, lean_object* v_f_990_, lean_object* v_as_991_, lean_object* v_i_992_, lean_object* v_stop_993_, lean_object* v_b_994_){
_start:
{
size_t v_i_boxed_995_; size_t v_stop_boxed_996_; lean_object* v_res_997_; 
v_i_boxed_995_ = lean_unbox_usize(v_i_992_);
lean_dec(v_i_992_);
v_stop_boxed_996_ = lean_unbox_usize(v_stop_993_);
lean_dec(v_stop_993_);
v_res_997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_989_, v_f_990_, v_as_991_, v_i_boxed_995_, v_stop_boxed_996_, v_b_994_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object* v_00_u03b1_998_, lean_object* v_00_u03b2_999_, lean_object* v_m_1000_, lean_object* v_inst_1001_, lean_object* v_f_1002_, lean_object* v_as_1003_, size_t v_i_1004_, size_t v_stop_1005_, lean_object* v_b_1006_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1001_, v_f_1002_, v_as_1003_, v_i_1004_, v_stop_1005_, v_b_1006_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___boxed(lean_object* v_00_u03b1_1008_, lean_object* v_00_u03b2_1009_, lean_object* v_m_1010_, lean_object* v_inst_1011_, lean_object* v_f_1012_, lean_object* v_as_1013_, lean_object* v_i_1014_, lean_object* v_stop_1015_, lean_object* v_b_1016_){
_start:
{
size_t v_i_boxed_1017_; size_t v_stop_boxed_1018_; lean_object* v_res_1019_; 
v_i_boxed_1017_ = lean_unbox_usize(v_i_1014_);
lean_dec(v_i_1014_);
v_stop_boxed_1018_ = lean_unbox_usize(v_stop_1015_);
lean_dec(v_stop_1015_);
v_res_1019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(v_00_u03b1_1008_, v_00_u03b2_1009_, v_m_1010_, v_inst_1011_, v_f_1012_, v_as_1013_, v_i_boxed_1017_, v_stop_boxed_1018_, v_b_1016_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg(lean_object* v_inst_1020_, lean_object* v_f_1021_, lean_object* v_init_1022_, lean_object* v_as_1023_, lean_object* v_start_1024_, lean_object* v_stop_1025_){
_start:
{
lean_object* v_toApplicative_1026_; lean_object* v_toPure_1027_; uint8_t v___x_1028_; 
v_toApplicative_1026_ = lean_ctor_get(v_inst_1020_, 0);
v_toPure_1027_ = lean_ctor_get(v_toApplicative_1026_, 1);
v___x_1028_ = lean_nat_dec_lt(v_start_1024_, v_stop_1025_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; 
lean_inc(v_toPure_1027_);
lean_dec_ref(v_as_1023_);
lean_dec(v_f_1021_);
lean_dec_ref(v_inst_1020_);
v___x_1029_ = lean_apply_2(v_toPure_1027_, lean_box(0), v_init_1022_);
return v___x_1029_;
}
else
{
lean_object* v___x_1030_; uint8_t v___x_1031_; 
v___x_1030_ = lean_array_get_size(v_as_1023_);
v___x_1031_ = lean_nat_dec_le(v_stop_1025_, v___x_1030_);
if (v___x_1031_ == 0)
{
uint8_t v___x_1032_; 
v___x_1032_ = lean_nat_dec_lt(v_start_1024_, v___x_1030_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; 
lean_inc(v_toPure_1027_);
lean_dec_ref(v_as_1023_);
lean_dec(v_f_1021_);
lean_dec_ref(v_inst_1020_);
v___x_1033_ = lean_apply_2(v_toPure_1027_, lean_box(0), v_init_1022_);
return v___x_1033_;
}
else
{
size_t v___x_1034_; size_t v___x_1035_; lean_object* v___x_1036_; 
v___x_1034_ = lean_usize_of_nat(v_start_1024_);
v___x_1035_ = lean_usize_of_nat(v___x_1030_);
v___x_1036_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1020_, v_f_1021_, v_as_1023_, v___x_1034_, v___x_1035_, v_init_1022_);
return v___x_1036_;
}
}
else
{
size_t v___x_1037_; size_t v___x_1038_; lean_object* v___x_1039_; 
v___x_1037_ = lean_usize_of_nat(v_start_1024_);
v___x_1038_ = lean_usize_of_nat(v_stop_1025_);
v___x_1039_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1020_, v_f_1021_, v_as_1023_, v___x_1037_, v___x_1038_, v_init_1022_);
return v___x_1039_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg___boxed(lean_object* v_inst_1040_, lean_object* v_f_1041_, lean_object* v_init_1042_, lean_object* v_as_1043_, lean_object* v_start_1044_, lean_object* v_stop_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Array_foldlMUnsafe___redArg(v_inst_1040_, v_f_1041_, v_init_1042_, v_as_1043_, v_start_1044_, v_stop_1045_);
lean_dec(v_stop_1045_);
lean_dec(v_start_1044_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe(lean_object* v_00_u03b1_1047_, lean_object* v_00_u03b2_1048_, lean_object* v_m_1049_, lean_object* v_inst_1050_, lean_object* v_f_1051_, lean_object* v_init_1052_, lean_object* v_as_1053_, lean_object* v_start_1054_, lean_object* v_stop_1055_){
_start:
{
lean_object* v_toApplicative_1056_; lean_object* v_toPure_1057_; uint8_t v___x_1058_; 
v_toApplicative_1056_ = lean_ctor_get(v_inst_1050_, 0);
v_toPure_1057_ = lean_ctor_get(v_toApplicative_1056_, 1);
v___x_1058_ = lean_nat_dec_lt(v_start_1054_, v_stop_1055_);
if (v___x_1058_ == 0)
{
lean_object* v___x_1059_; 
lean_inc(v_toPure_1057_);
lean_dec_ref(v_as_1053_);
lean_dec(v_f_1051_);
lean_dec_ref(v_inst_1050_);
v___x_1059_ = lean_apply_2(v_toPure_1057_, lean_box(0), v_init_1052_);
return v___x_1059_;
}
else
{
lean_object* v___x_1060_; uint8_t v___x_1061_; 
v___x_1060_ = lean_array_get_size(v_as_1053_);
v___x_1061_ = lean_nat_dec_le(v_stop_1055_, v___x_1060_);
if (v___x_1061_ == 0)
{
uint8_t v___x_1062_; 
v___x_1062_ = lean_nat_dec_lt(v_start_1054_, v___x_1060_);
if (v___x_1062_ == 0)
{
lean_object* v___x_1063_; 
lean_inc(v_toPure_1057_);
lean_dec_ref(v_as_1053_);
lean_dec(v_f_1051_);
lean_dec_ref(v_inst_1050_);
v___x_1063_ = lean_apply_2(v_toPure_1057_, lean_box(0), v_init_1052_);
return v___x_1063_;
}
else
{
size_t v___x_1064_; size_t v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = lean_usize_of_nat(v_start_1054_);
v___x_1065_ = lean_usize_of_nat(v___x_1060_);
v___x_1066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1050_, v_f_1051_, v_as_1053_, v___x_1064_, v___x_1065_, v_init_1052_);
return v___x_1066_;
}
}
else
{
size_t v___x_1067_; size_t v___x_1068_; lean_object* v___x_1069_; 
v___x_1067_ = lean_usize_of_nat(v_start_1054_);
v___x_1068_ = lean_usize_of_nat(v_stop_1055_);
v___x_1069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1050_, v_f_1051_, v_as_1053_, v___x_1067_, v___x_1068_, v_init_1052_);
return v___x_1069_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___boxed(lean_object* v_00_u03b1_1070_, lean_object* v_00_u03b2_1071_, lean_object* v_m_1072_, lean_object* v_inst_1073_, lean_object* v_f_1074_, lean_object* v_init_1075_, lean_object* v_as_1076_, lean_object* v_start_1077_, lean_object* v_stop_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Array_foldlMUnsafe(v_00_u03b1_1070_, v_00_u03b2_1071_, v_m_1072_, v_inst_1073_, v_f_1074_, v_init_1075_, v_as_1076_, v_start_1077_, v_stop_1078_);
lean_dec(v_stop_1078_);
lean_dec(v_start_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0___boxed(lean_object* v_j_1080_, lean_object* v_inst_1081_, lean_object* v_f_1082_, lean_object* v_as_1083_, lean_object* v_stop_1084_, lean_object* v_n_1085_, lean_object* v_____do__lift_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Array_foldlM_loop___redArg___lam__0(v_j_1080_, v_inst_1081_, v_f_1082_, v_as_1083_, v_stop_1084_, v_n_1085_, v_____do__lift_1086_);
lean_dec(v_n_1085_);
lean_dec(v_j_1080_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg(lean_object* v_inst_1088_, lean_object* v_f_1089_, lean_object* v_as_1090_, lean_object* v_stop_1091_, lean_object* v_i_1092_, lean_object* v_j_1093_, lean_object* v_b_1094_){
_start:
{
lean_object* v_toApplicative_1095_; lean_object* v_toBind_1096_; lean_object* v_toPure_1097_; uint8_t v___x_1098_; 
v_toApplicative_1095_ = lean_ctor_get(v_inst_1088_, 0);
v_toBind_1096_ = lean_ctor_get(v_inst_1088_, 1);
lean_inc(v_toBind_1096_);
v_toPure_1097_ = lean_ctor_get(v_toApplicative_1095_, 1);
v___x_1098_ = lean_nat_dec_lt(v_j_1093_, v_stop_1091_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1099_; 
lean_inc(v_toPure_1097_);
lean_dec(v_toBind_1096_);
lean_dec(v_j_1093_);
lean_dec(v_stop_1091_);
lean_dec_ref(v_as_1090_);
lean_dec(v_f_1089_);
lean_dec_ref(v_inst_1088_);
v___x_1099_ = lean_apply_2(v_toPure_1097_, lean_box(0), v_b_1094_);
return v___x_1099_;
}
else
{
lean_object* v_zero_1100_; uint8_t v_isZero_1101_; 
v_zero_1100_ = lean_unsigned_to_nat(0u);
v_isZero_1101_ = lean_nat_dec_eq(v_i_1092_, v_zero_1100_);
if (v_isZero_1101_ == 1)
{
lean_object* v___x_1102_; 
lean_inc(v_toPure_1097_);
lean_dec(v_toBind_1096_);
lean_dec(v_j_1093_);
lean_dec(v_stop_1091_);
lean_dec_ref(v_as_1090_);
lean_dec(v_f_1089_);
lean_dec_ref(v_inst_1088_);
v___x_1102_ = lean_apply_2(v_toPure_1097_, lean_box(0), v_b_1094_);
return v___x_1102_;
}
else
{
lean_object* v_one_1103_; lean_object* v_n_1104_; lean_object* v___f_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v_one_1103_ = lean_unsigned_to_nat(1u);
v_n_1104_ = lean_nat_sub(v_i_1092_, v_one_1103_);
lean_inc_ref(v_as_1090_);
lean_inc(v_f_1089_);
lean_inc(v_j_1093_);
v___f_1105_ = lean_alloc_closure((void*)(l_Array_foldlM_loop___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1105_, 0, v_j_1093_);
lean_closure_set(v___f_1105_, 1, v_inst_1088_);
lean_closure_set(v___f_1105_, 2, v_f_1089_);
lean_closure_set(v___f_1105_, 3, v_as_1090_);
lean_closure_set(v___f_1105_, 4, v_stop_1091_);
lean_closure_set(v___f_1105_, 5, v_n_1104_);
v___x_1106_ = lean_array_fget(v_as_1090_, v_j_1093_);
lean_dec(v_j_1093_);
lean_dec_ref(v_as_1090_);
v___x_1107_ = lean_apply_2(v_f_1089_, v_b_1094_, v___x_1106_);
v___x_1108_ = lean_apply_4(v_toBind_1096_, lean_box(0), lean_box(0), v___x_1107_, v___f_1105_);
return v___x_1108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0(lean_object* v_j_1109_, lean_object* v_inst_1110_, lean_object* v_f_1111_, lean_object* v_as_1112_, lean_object* v_stop_1113_, lean_object* v_n_1114_, lean_object* v_____do__lift_1115_){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = lean_unsigned_to_nat(1u);
v___x_1117_ = lean_nat_add(v_j_1109_, v___x_1116_);
v___x_1118_ = l_Array_foldlM_loop___redArg(v_inst_1110_, v_f_1111_, v_as_1112_, v_stop_1113_, v_n_1114_, v___x_1117_, v_____do__lift_1115_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___boxed(lean_object* v_inst_1119_, lean_object* v_f_1120_, lean_object* v_as_1121_, lean_object* v_stop_1122_, lean_object* v_i_1123_, lean_object* v_j_1124_, lean_object* v_b_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Array_foldlM_loop___redArg(v_inst_1119_, v_f_1120_, v_as_1121_, v_stop_1122_, v_i_1123_, v_j_1124_, v_b_1125_);
lean_dec(v_i_1123_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop(lean_object* v_00_u03b1_1127_, lean_object* v_00_u03b2_1128_, lean_object* v_m_1129_, lean_object* v_inst_1130_, lean_object* v_f_1131_, lean_object* v_as_1132_, lean_object* v_stop_1133_, lean_object* v_h_1134_, lean_object* v_i_1135_, lean_object* v_j_1136_, lean_object* v_b_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Array_foldlM_loop___redArg(v_inst_1130_, v_f_1131_, v_as_1132_, v_stop_1133_, v_i_1135_, v_j_1136_, v_b_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___boxed(lean_object* v_00_u03b1_1139_, lean_object* v_00_u03b2_1140_, lean_object* v_m_1141_, lean_object* v_inst_1142_, lean_object* v_f_1143_, lean_object* v_as_1144_, lean_object* v_stop_1145_, lean_object* v_h_1146_, lean_object* v_i_1147_, lean_object* v_j_1148_, lean_object* v_b_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Array_foldlM_loop(v_00_u03b1_1139_, v_00_u03b2_1140_, v_m_1141_, v_inst_1142_, v_f_1143_, v_as_1144_, v_stop_1145_, v_h_1146_, v_i_1147_, v_j_1148_, v_b_1149_);
lean_dec(v_i_1147_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed(lean_object* v_inst_1151_, lean_object* v_f_1152_, lean_object* v_as_1153_, lean_object* v___x_1154_, lean_object* v_stop_1155_, lean_object* v_____do__lift_1156_){
_start:
{
size_t v___x_63__boxed_1157_; size_t v_stop_boxed_1158_; lean_object* v_res_1159_; 
v___x_63__boxed_1157_ = lean_unbox_usize(v___x_1154_);
lean_dec(v___x_1154_);
v_stop_boxed_1158_ = lean_unbox_usize(v_stop_1155_);
lean_dec(v_stop_1155_);
v_res_1159_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(v_inst_1151_, v_f_1152_, v_as_1153_, v___x_63__boxed_1157_, v_stop_boxed_1158_, v_____do__lift_1156_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(lean_object* v_inst_1160_, lean_object* v_f_1161_, lean_object* v_as_1162_, size_t v_i_1163_, size_t v_stop_1164_, lean_object* v_b_1165_){
_start:
{
lean_object* v_toApplicative_1166_; lean_object* v_toBind_1167_; lean_object* v_toPure_1168_; uint8_t v___x_1169_; 
v_toApplicative_1166_ = lean_ctor_get(v_inst_1160_, 0);
v_toBind_1167_ = lean_ctor_get(v_inst_1160_, 1);
lean_inc(v_toBind_1167_);
v_toPure_1168_ = lean_ctor_get(v_toApplicative_1166_, 1);
v___x_1169_ = lean_usize_dec_eq(v_i_1163_, v_stop_1164_);
if (v___x_1169_ == 0)
{
size_t v___x_1170_; size_t v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___f_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1170_ = ((size_t)1ULL);
v___x_1171_ = lean_usize_sub(v_i_1163_, v___x_1170_);
v___x_1172_ = lean_box_usize(v___x_1171_);
v___x_1173_ = lean_box_usize(v_stop_1164_);
lean_inc_ref(v_as_1162_);
lean_inc(v_f_1161_);
v___f_1174_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1174_, 0, v_inst_1160_);
lean_closure_set(v___f_1174_, 1, v_f_1161_);
lean_closure_set(v___f_1174_, 2, v_as_1162_);
lean_closure_set(v___f_1174_, 3, v___x_1172_);
lean_closure_set(v___f_1174_, 4, v___x_1173_);
v___x_1175_ = lean_array_uget(v_as_1162_, v___x_1171_);
lean_dec_ref(v_as_1162_);
v___x_1176_ = lean_apply_2(v_f_1161_, v___x_1175_, v_b_1165_);
v___x_1177_ = lean_apply_4(v_toBind_1167_, lean_box(0), lean_box(0), v___x_1176_, v___f_1174_);
return v___x_1177_;
}
else
{
lean_object* v___x_1178_; 
lean_inc(v_toPure_1168_);
lean_dec(v_toBind_1167_);
lean_dec_ref(v_as_1162_);
lean_dec(v_f_1161_);
lean_dec_ref(v_inst_1160_);
v___x_1178_ = lean_apply_2(v_toPure_1168_, lean_box(0), v_b_1165_);
return v___x_1178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(lean_object* v_inst_1179_, lean_object* v_f_1180_, lean_object* v_as_1181_, size_t v___x_1182_, size_t v_stop_1183_, lean_object* v_____do__lift_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1179_, v_f_1180_, v_as_1181_, v___x_1182_, v_stop_1183_, v_____do__lift_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___boxed(lean_object* v_inst_1186_, lean_object* v_f_1187_, lean_object* v_as_1188_, lean_object* v_i_1189_, lean_object* v_stop_1190_, lean_object* v_b_1191_){
_start:
{
size_t v_i_boxed_1192_; size_t v_stop_boxed_1193_; lean_object* v_res_1194_; 
v_i_boxed_1192_ = lean_unbox_usize(v_i_1189_);
lean_dec(v_i_1189_);
v_stop_boxed_1193_ = lean_unbox_usize(v_stop_1190_);
lean_dec(v_stop_1190_);
v_res_1194_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1186_, v_f_1187_, v_as_1188_, v_i_boxed_1192_, v_stop_boxed_1193_, v_b_1191_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object* v_00_u03b1_1195_, lean_object* v_00_u03b2_1196_, lean_object* v_m_1197_, lean_object* v_inst_1198_, lean_object* v_f_1199_, lean_object* v_as_1200_, size_t v_i_1201_, size_t v_stop_1202_, lean_object* v_b_1203_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1198_, v_f_1199_, v_as_1200_, v_i_1201_, v_stop_1202_, v_b_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___boxed(lean_object* v_00_u03b1_1205_, lean_object* v_00_u03b2_1206_, lean_object* v_m_1207_, lean_object* v_inst_1208_, lean_object* v_f_1209_, lean_object* v_as_1210_, lean_object* v_i_1211_, lean_object* v_stop_1212_, lean_object* v_b_1213_){
_start:
{
size_t v_i_boxed_1214_; size_t v_stop_boxed_1215_; lean_object* v_res_1216_; 
v_i_boxed_1214_ = lean_unbox_usize(v_i_1211_);
lean_dec(v_i_1211_);
v_stop_boxed_1215_ = lean_unbox_usize(v_stop_1212_);
lean_dec(v_stop_1212_);
v_res_1216_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(v_00_u03b1_1205_, v_00_u03b2_1206_, v_m_1207_, v_inst_1208_, v_f_1209_, v_as_1210_, v_i_boxed_1214_, v_stop_boxed_1215_, v_b_1213_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg(lean_object* v_inst_1217_, lean_object* v_f_1218_, lean_object* v_init_1219_, lean_object* v_as_1220_, lean_object* v_start_1221_, lean_object* v_stop_1222_){
_start:
{
lean_object* v_toApplicative_1223_; lean_object* v_toPure_1224_; lean_object* v___x_1225_; uint8_t v___x_1226_; 
v_toApplicative_1223_ = lean_ctor_get(v_inst_1217_, 0);
v_toPure_1224_ = lean_ctor_get(v_toApplicative_1223_, 1);
v___x_1225_ = lean_array_get_size(v_as_1220_);
v___x_1226_ = lean_nat_dec_le(v_start_1221_, v___x_1225_);
if (v___x_1226_ == 0)
{
uint8_t v___x_1227_; 
v___x_1227_ = lean_nat_dec_lt(v_stop_1222_, v___x_1225_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; 
lean_inc(v_toPure_1224_);
lean_dec_ref(v_as_1220_);
lean_dec(v_f_1218_);
lean_dec_ref(v_inst_1217_);
v___x_1228_ = lean_apply_2(v_toPure_1224_, lean_box(0), v_init_1219_);
return v___x_1228_;
}
else
{
size_t v___x_1229_; size_t v___x_1230_; lean_object* v___x_1231_; 
v___x_1229_ = lean_usize_of_nat(v___x_1225_);
v___x_1230_ = lean_usize_of_nat(v_stop_1222_);
v___x_1231_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1217_, v_f_1218_, v_as_1220_, v___x_1229_, v___x_1230_, v_init_1219_);
return v___x_1231_;
}
}
else
{
uint8_t v___x_1232_; 
v___x_1232_ = lean_nat_dec_lt(v_stop_1222_, v_start_1221_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; 
lean_inc(v_toPure_1224_);
lean_dec_ref(v_as_1220_);
lean_dec(v_f_1218_);
lean_dec_ref(v_inst_1217_);
v___x_1233_ = lean_apply_2(v_toPure_1224_, lean_box(0), v_init_1219_);
return v___x_1233_;
}
else
{
size_t v___x_1234_; size_t v___x_1235_; lean_object* v___x_1236_; 
v___x_1234_ = lean_usize_of_nat(v_start_1221_);
v___x_1235_ = lean_usize_of_nat(v_stop_1222_);
v___x_1236_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1217_, v_f_1218_, v_as_1220_, v___x_1234_, v___x_1235_, v_init_1219_);
return v___x_1236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg___boxed(lean_object* v_inst_1237_, lean_object* v_f_1238_, lean_object* v_init_1239_, lean_object* v_as_1240_, lean_object* v_start_1241_, lean_object* v_stop_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = l_Array_foldrMUnsafe___redArg(v_inst_1237_, v_f_1238_, v_init_1239_, v_as_1240_, v_start_1241_, v_stop_1242_);
lean_dec(v_stop_1242_);
lean_dec(v_start_1241_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe(lean_object* v_00_u03b1_1244_, lean_object* v_00_u03b2_1245_, lean_object* v_m_1246_, lean_object* v_inst_1247_, lean_object* v_f_1248_, lean_object* v_init_1249_, lean_object* v_as_1250_, lean_object* v_start_1251_, lean_object* v_stop_1252_){
_start:
{
lean_object* v_toApplicative_1253_; lean_object* v_toPure_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v_toApplicative_1253_ = lean_ctor_get(v_inst_1247_, 0);
v_toPure_1254_ = lean_ctor_get(v_toApplicative_1253_, 1);
v___x_1255_ = lean_array_get_size(v_as_1250_);
v___x_1256_ = lean_nat_dec_le(v_start_1251_, v___x_1255_);
if (v___x_1256_ == 0)
{
uint8_t v___x_1257_; 
v___x_1257_ = lean_nat_dec_lt(v_stop_1252_, v___x_1255_);
if (v___x_1257_ == 0)
{
lean_object* v___x_1258_; 
lean_inc(v_toPure_1254_);
lean_dec_ref(v_as_1250_);
lean_dec(v_f_1248_);
lean_dec_ref(v_inst_1247_);
v___x_1258_ = lean_apply_2(v_toPure_1254_, lean_box(0), v_init_1249_);
return v___x_1258_;
}
else
{
size_t v___x_1259_; size_t v___x_1260_; lean_object* v___x_1261_; 
v___x_1259_ = lean_usize_of_nat(v___x_1255_);
v___x_1260_ = lean_usize_of_nat(v_stop_1252_);
v___x_1261_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1247_, v_f_1248_, v_as_1250_, v___x_1259_, v___x_1260_, v_init_1249_);
return v___x_1261_;
}
}
else
{
uint8_t v___x_1262_; 
v___x_1262_ = lean_nat_dec_lt(v_stop_1252_, v_start_1251_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
lean_inc(v_toPure_1254_);
lean_dec_ref(v_as_1250_);
lean_dec(v_f_1248_);
lean_dec_ref(v_inst_1247_);
v___x_1263_ = lean_apply_2(v_toPure_1254_, lean_box(0), v_init_1249_);
return v___x_1263_;
}
else
{
size_t v___x_1264_; size_t v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = lean_usize_of_nat(v_start_1251_);
v___x_1265_ = lean_usize_of_nat(v_stop_1252_);
v___x_1266_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1247_, v_f_1248_, v_as_1250_, v___x_1264_, v___x_1265_, v_init_1249_);
return v___x_1266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___boxed(lean_object* v_00_u03b1_1267_, lean_object* v_00_u03b2_1268_, lean_object* v_m_1269_, lean_object* v_inst_1270_, lean_object* v_f_1271_, lean_object* v_init_1272_, lean_object* v_as_1273_, lean_object* v_start_1274_, lean_object* v_stop_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Array_foldrMUnsafe(v_00_u03b1_1267_, v_00_u03b2_1268_, v_m_1269_, v_inst_1270_, v_f_1271_, v_init_1272_, v_as_1273_, v_start_1274_, v_stop_1275_);
lean_dec(v_stop_1275_);
lean_dec(v_start_1274_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0___boxed(lean_object* v_inst_1277_, lean_object* v_f_1278_, lean_object* v_as_1279_, lean_object* v_stop_1280_, lean_object* v_n_1281_, lean_object* v_____do__lift_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Array_foldrM_fold___redArg___lam__0(v_inst_1277_, v_f_1278_, v_as_1279_, v_stop_1280_, v_n_1281_, v_____do__lift_1282_);
lean_dec(v_n_1281_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg(lean_object* v_inst_1284_, lean_object* v_f_1285_, lean_object* v_as_1286_, lean_object* v_stop_1287_, lean_object* v_i_1288_, lean_object* v_b_1289_){
_start:
{
lean_object* v_toApplicative_1290_; lean_object* v_toBind_1291_; lean_object* v_toPure_1292_; uint8_t v___x_1293_; 
v_toApplicative_1290_ = lean_ctor_get(v_inst_1284_, 0);
v_toBind_1291_ = lean_ctor_get(v_inst_1284_, 1);
lean_inc(v_toBind_1291_);
v_toPure_1292_ = lean_ctor_get(v_toApplicative_1290_, 1);
v___x_1293_ = lean_nat_dec_eq(v_i_1288_, v_stop_1287_);
if (v___x_1293_ == 0)
{
lean_object* v_zero_1294_; uint8_t v_isZero_1295_; 
v_zero_1294_ = lean_unsigned_to_nat(0u);
v_isZero_1295_ = lean_nat_dec_eq(v_i_1288_, v_zero_1294_);
if (v_isZero_1295_ == 1)
{
lean_object* v___x_1296_; 
lean_inc(v_toPure_1292_);
lean_dec(v_toBind_1291_);
lean_dec(v_stop_1287_);
lean_dec_ref(v_as_1286_);
lean_dec(v_f_1285_);
lean_dec_ref(v_inst_1284_);
v___x_1296_ = lean_apply_2(v_toPure_1292_, lean_box(0), v_b_1289_);
return v___x_1296_;
}
else
{
lean_object* v_one_1297_; lean_object* v_n_1298_; lean_object* v___f_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v_one_1297_ = lean_unsigned_to_nat(1u);
v_n_1298_ = lean_nat_sub(v_i_1288_, v_one_1297_);
lean_inc(v_n_1298_);
lean_inc_ref(v_as_1286_);
lean_inc(v_f_1285_);
v___f_1299_ = lean_alloc_closure((void*)(l_Array_foldrM_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1299_, 0, v_inst_1284_);
lean_closure_set(v___f_1299_, 1, v_f_1285_);
lean_closure_set(v___f_1299_, 2, v_as_1286_);
lean_closure_set(v___f_1299_, 3, v_stop_1287_);
lean_closure_set(v___f_1299_, 4, v_n_1298_);
v___x_1300_ = lean_array_fget(v_as_1286_, v_n_1298_);
lean_dec(v_n_1298_);
lean_dec_ref(v_as_1286_);
v___x_1301_ = lean_apply_2(v_f_1285_, v___x_1300_, v_b_1289_);
v___x_1302_ = lean_apply_4(v_toBind_1291_, lean_box(0), lean_box(0), v___x_1301_, v___f_1299_);
return v___x_1302_;
}
}
else
{
lean_object* v___x_1303_; 
lean_inc(v_toPure_1292_);
lean_dec(v_toBind_1291_);
lean_dec(v_stop_1287_);
lean_dec_ref(v_as_1286_);
lean_dec(v_f_1285_);
lean_dec_ref(v_inst_1284_);
v___x_1303_ = lean_apply_2(v_toPure_1292_, lean_box(0), v_b_1289_);
return v___x_1303_;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0(lean_object* v_inst_1304_, lean_object* v_f_1305_, lean_object* v_as_1306_, lean_object* v_stop_1307_, lean_object* v_n_1308_, lean_object* v_____do__lift_1309_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = l_Array_foldrM_fold___redArg(v_inst_1304_, v_f_1305_, v_as_1306_, v_stop_1307_, v_n_1308_, v_____do__lift_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___boxed(lean_object* v_inst_1311_, lean_object* v_f_1312_, lean_object* v_as_1313_, lean_object* v_stop_1314_, lean_object* v_i_1315_, lean_object* v_b_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Array_foldrM_fold___redArg(v_inst_1311_, v_f_1312_, v_as_1313_, v_stop_1314_, v_i_1315_, v_b_1316_);
lean_dec(v_i_1315_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold(lean_object* v_00_u03b1_1318_, lean_object* v_00_u03b2_1319_, lean_object* v_m_1320_, lean_object* v_inst_1321_, lean_object* v_f_1322_, lean_object* v_as_1323_, lean_object* v_stop_1324_, lean_object* v_i_1325_, lean_object* v_h_1326_, lean_object* v_b_1327_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Array_foldrM_fold___redArg(v_inst_1321_, v_f_1322_, v_as_1323_, v_stop_1324_, v_i_1325_, v_b_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___boxed(lean_object* v_00_u03b1_1329_, lean_object* v_00_u03b2_1330_, lean_object* v_m_1331_, lean_object* v_inst_1332_, lean_object* v_f_1333_, lean_object* v_as_1334_, lean_object* v_stop_1335_, lean_object* v_i_1336_, lean_object* v_h_1337_, lean_object* v_b_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Array_foldrM_fold(v_00_u03b1_1329_, v_00_u03b2_1330_, v_m_1331_, v_inst_1332_, v_f_1333_, v_as_1334_, v_stop_1335_, v_i_1336_, v_h_1337_, v_b_1338_);
lean_dec(v_i_1336_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed(lean_object* v_i_1340_, lean_object* v_bs_x27_1341_, lean_object* v_inst_1342_, lean_object* v_f_1343_, lean_object* v_sz_1344_, lean_object* v_vNew_1345_){
_start:
{
size_t v_i_boxed_1346_; size_t v_sz_boxed_1347_; lean_object* v_res_1348_; 
v_i_boxed_1346_ = lean_unbox_usize(v_i_1340_);
lean_dec(v_i_1340_);
v_sz_boxed_1347_ = lean_unbox_usize(v_sz_1344_);
lean_dec(v_sz_1344_);
v_res_1348_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(v_i_boxed_1346_, v_bs_x27_1341_, v_inst_1342_, v_f_1343_, v_sz_boxed_1347_, v_vNew_1345_);
lean_dec(v_vNew_1345_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object* v_inst_1349_, lean_object* v_f_1350_, size_t v_sz_1351_, size_t v_i_1352_, lean_object* v_bs_1353_){
_start:
{
lean_object* v_toApplicative_1354_; lean_object* v_toBind_1355_; lean_object* v_toPure_1356_; uint8_t v___x_1357_; 
v_toApplicative_1354_ = lean_ctor_get(v_inst_1349_, 0);
v_toBind_1355_ = lean_ctor_get(v_inst_1349_, 1);
lean_inc(v_toBind_1355_);
v_toPure_1356_ = lean_ctor_get(v_toApplicative_1354_, 1);
v___x_1357_ = lean_usize_dec_lt(v_i_1352_, v_sz_1351_);
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_inc(v_toPure_1356_);
lean_dec(v_toBind_1355_);
lean_dec(v_f_1350_);
lean_dec_ref(v_inst_1349_);
v___x_1358_ = l_unsafeCast___redArg(v_bs_1353_);
lean_dec_ref(v_bs_1353_);
v___x_1359_ = lean_apply_2(v_toPure_1356_, lean_box(0), v___x_1358_);
return v___x_1359_;
}
else
{
lean_object* v_v_1360_; lean_object* v___x_1361_; lean_object* v_bs_x27_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___f_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v_v_1360_ = lean_array_uget(v_bs_1353_, v_i_1352_);
v___x_1361_ = lean_unsigned_to_nat(0u);
v_bs_x27_1362_ = lean_array_uset(v_bs_1353_, v_i_1352_, v___x_1361_);
v___x_1363_ = lean_box_usize(v_i_1352_);
v___x_1364_ = lean_box_usize(v_sz_1351_);
lean_inc(v_f_1350_);
v___f_1365_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1365_, 0, v___x_1363_);
lean_closure_set(v___f_1365_, 1, v_bs_x27_1362_);
lean_closure_set(v___f_1365_, 2, v_inst_1349_);
lean_closure_set(v___f_1365_, 3, v_f_1350_);
lean_closure_set(v___f_1365_, 4, v___x_1364_);
v___x_1366_ = l_unsafeCast___redArg(v_v_1360_);
lean_dec(v_v_1360_);
v___x_1367_ = lean_apply_1(v_f_1350_, v___x_1366_);
v___x_1368_ = lean_apply_4(v_toBind_1355_, lean_box(0), lean_box(0), v___x_1367_, v___f_1365_);
return v___x_1368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(size_t v_i_1369_, lean_object* v_bs_x27_1370_, lean_object* v_inst_1371_, lean_object* v_f_1372_, size_t v_sz_1373_, lean_object* v_vNew_1374_){
_start:
{
size_t v___x_1375_; size_t v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1375_ = ((size_t)1ULL);
v___x_1376_ = lean_usize_add(v_i_1369_, v___x_1375_);
v___x_1377_ = l_unsafeCast___redArg(v_vNew_1374_);
v___x_1378_ = lean_array_uset(v_bs_x27_1370_, v_i_1369_, v___x_1377_);
v___x_1379_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1371_, v_f_1372_, v_sz_1373_, v___x_1376_, v___x_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___boxed(lean_object* v_inst_1380_, lean_object* v_f_1381_, lean_object* v_sz_1382_, lean_object* v_i_1383_, lean_object* v_bs_1384_){
_start:
{
size_t v_sz_boxed_1385_; size_t v_i_boxed_1386_; lean_object* v_res_1387_; 
v_sz_boxed_1385_ = lean_unbox_usize(v_sz_1382_);
lean_dec(v_sz_1382_);
v_i_boxed_1386_ = lean_unbox_usize(v_i_1383_);
lean_dec(v_i_1383_);
v_res_1387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1380_, v_f_1381_, v_sz_boxed_1385_, v_i_boxed_1386_, v_bs_1384_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object* v_00_u03b1_1388_, lean_object* v_00_u03b2_1389_, lean_object* v_m_1390_, lean_object* v_inst_1391_, lean_object* v_f_1392_, size_t v_sz_1393_, size_t v_i_1394_, lean_object* v_bs_1395_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1391_, v_f_1392_, v_sz_1393_, v_i_1394_, v_bs_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___boxed(lean_object* v_00_u03b1_1397_, lean_object* v_00_u03b2_1398_, lean_object* v_m_1399_, lean_object* v_inst_1400_, lean_object* v_f_1401_, lean_object* v_sz_1402_, lean_object* v_i_1403_, lean_object* v_bs_1404_){
_start:
{
size_t v_sz_boxed_1405_; size_t v_i_boxed_1406_; lean_object* v_res_1407_; 
v_sz_boxed_1405_ = lean_unbox_usize(v_sz_1402_);
lean_dec(v_sz_1402_);
v_i_boxed_1406_ = lean_unbox_usize(v_i_1403_);
lean_dec(v_i_1403_);
v_res_1407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(v_00_u03b1_1397_, v_00_u03b2_1398_, v_m_1399_, v_inst_1400_, v_f_1401_, v_sz_boxed_1405_, v_i_boxed_1406_, v_bs_1404_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___redArg(lean_object* v_inst_1408_, lean_object* v_f_1409_, lean_object* v_as_1410_){
_start:
{
size_t v_sz_1411_; size_t v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v_sz_1411_ = lean_array_size(v_as_1410_);
v___x_1412_ = ((size_t)0ULL);
v___x_1413_ = l_unsafeCast___redArg(v_as_1410_);
v___x_1414_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1408_, v_f_1409_, v_sz_1411_, v___x_1412_, v___x_1413_);
v___x_1415_ = l_unsafeCast___redArg(v___x_1414_);
lean_dec(v___x_1414_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___redArg___boxed(lean_object* v_inst_1416_, lean_object* v_f_1417_, lean_object* v_as_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_Array_mapMUnsafe___redArg(v_inst_1416_, v_f_1417_, v_as_1418_);
lean_dec_ref(v_as_1418_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe(lean_object* v_00_u03b1_1420_, lean_object* v_00_u03b2_1421_, lean_object* v_m_1422_, lean_object* v_inst_1423_, lean_object* v_f_1424_, lean_object* v_as_1425_){
_start:
{
size_t v_sz_1426_; size_t v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v_sz_1426_ = lean_array_size(v_as_1425_);
v___x_1427_ = ((size_t)0ULL);
v___x_1428_ = l_unsafeCast___redArg(v_as_1425_);
v___x_1429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1423_, v_f_1424_, v_sz_1426_, v___x_1427_, v___x_1428_);
v___x_1430_ = l_unsafeCast___redArg(v___x_1429_);
lean_dec(v___x_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___boxed(lean_object* v_00_u03b1_1431_, lean_object* v_00_u03b2_1432_, lean_object* v_m_1433_, lean_object* v_inst_1434_, lean_object* v_f_1435_, lean_object* v_as_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Array_mapMUnsafe(v_00_u03b1_1431_, v_00_u03b2_1432_, v_m_1433_, v_inst_1434_, v_f_1435_, v_as_1436_);
lean_dec_ref(v_as_1436_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0___boxed(lean_object* v_i_1438_, lean_object* v_bs_1439_, lean_object* v_inst_1440_, lean_object* v_f_1441_, lean_object* v_as_1442_, lean_object* v_____do__lift_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Array_mapM_map___redArg___lam__0(v_i_1438_, v_bs_1439_, v_inst_1440_, v_f_1441_, v_as_1442_, v_____do__lift_1443_);
lean_dec(v_i_1438_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg(lean_object* v_inst_1445_, lean_object* v_f_1446_, lean_object* v_as_1447_, lean_object* v_i_1448_, lean_object* v_bs_1449_){
_start:
{
lean_object* v_toApplicative_1450_; lean_object* v_toBind_1451_; lean_object* v_toPure_1452_; lean_object* v___x_1453_; uint8_t v___x_1454_; 
v_toApplicative_1450_ = lean_ctor_get(v_inst_1445_, 0);
v_toBind_1451_ = lean_ctor_get(v_inst_1445_, 1);
lean_inc(v_toBind_1451_);
v_toPure_1452_ = lean_ctor_get(v_toApplicative_1450_, 1);
v___x_1453_ = lean_array_get_size(v_as_1447_);
v___x_1454_ = lean_nat_dec_lt(v_i_1448_, v___x_1453_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; 
lean_inc(v_toPure_1452_);
lean_dec(v_toBind_1451_);
lean_dec(v_i_1448_);
lean_dec_ref(v_as_1447_);
lean_dec(v_f_1446_);
lean_dec_ref(v_inst_1445_);
v___x_1455_ = lean_apply_2(v_toPure_1452_, lean_box(0), v_bs_1449_);
return v___x_1455_;
}
else
{
lean_object* v___f_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
lean_inc_ref(v_as_1447_);
lean_inc(v_f_1446_);
lean_inc(v_i_1448_);
v___f_1456_ = lean_alloc_closure((void*)(l_Array_mapM_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1456_, 0, v_i_1448_);
lean_closure_set(v___f_1456_, 1, v_bs_1449_);
lean_closure_set(v___f_1456_, 2, v_inst_1445_);
lean_closure_set(v___f_1456_, 3, v_f_1446_);
lean_closure_set(v___f_1456_, 4, v_as_1447_);
v___x_1457_ = lean_array_fget(v_as_1447_, v_i_1448_);
lean_dec(v_i_1448_);
lean_dec_ref(v_as_1447_);
v___x_1458_ = lean_apply_1(v_f_1446_, v___x_1457_);
v___x_1459_ = lean_apply_4(v_toBind_1451_, lean_box(0), lean_box(0), v___x_1458_, v___f_1456_);
return v___x_1459_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0(lean_object* v_i_1460_, lean_object* v_bs_1461_, lean_object* v_inst_1462_, lean_object* v_f_1463_, lean_object* v_as_1464_, lean_object* v_____do__lift_1465_){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1466_ = lean_unsigned_to_nat(1u);
v___x_1467_ = lean_nat_add(v_i_1460_, v___x_1466_);
v___x_1468_ = lean_array_push(v_bs_1461_, v_____do__lift_1465_);
v___x_1469_ = l_Array_mapM_map___redArg(v_inst_1462_, v_f_1463_, v_as_1464_, v___x_1467_, v___x_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map(lean_object* v_00_u03b1_1470_, lean_object* v_00_u03b2_1471_, lean_object* v_m_1472_, lean_object* v_inst_1473_, lean_object* v_f_1474_, lean_object* v_as_1475_, lean_object* v_i_1476_, lean_object* v_bs_1477_){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = l_Array_mapM_map___redArg(v_inst_1473_, v_f_1474_, v_as_1475_, v_i_1476_, v_bs_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed(lean_object* v_i_1479_, lean_object* v_bs_x27_1480_, lean_object* v_inst_1481_, lean_object* v_f_1482_, lean_object* v_sz_1483_, lean_object* v_vNew_1484_){
_start:
{
size_t v_i_boxed_1485_; size_t v_sz_boxed_1486_; lean_object* v_res_1487_; 
v_i_boxed_1485_ = lean_unbox_usize(v_i_1479_);
lean_dec(v_i_1479_);
v_sz_boxed_1486_ = lean_unbox_usize(v_sz_1483_);
lean_dec(v_sz_1483_);
v_res_1487_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(v_i_boxed_1485_, v_bs_x27_1480_, v_inst_1481_, v_f_1482_, v_sz_boxed_1486_, v_vNew_1484_);
lean_dec(v_vNew_1484_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(lean_object* v_inst_1488_, lean_object* v_f_1489_, size_t v_sz_1490_, size_t v_i_1491_, lean_object* v_bs_1492_){
_start:
{
lean_object* v_toApplicative_1493_; lean_object* v_toBind_1494_; lean_object* v_toPure_1495_; uint8_t v___x_1496_; 
v_toApplicative_1493_ = lean_ctor_get(v_inst_1488_, 0);
v_toBind_1494_ = lean_ctor_get(v_inst_1488_, 1);
lean_inc(v_toBind_1494_);
v_toPure_1495_ = lean_ctor_get(v_toApplicative_1493_, 1);
v___x_1496_ = lean_usize_dec_lt(v_i_1491_, v_sz_1490_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
lean_inc(v_toPure_1495_);
lean_dec(v_toBind_1494_);
lean_dec(v_f_1489_);
lean_dec_ref(v_inst_1488_);
v___x_1497_ = l_unsafeCast___redArg(v_bs_1492_);
lean_dec_ref(v_bs_1492_);
v___x_1498_ = lean_apply_2(v_toPure_1495_, lean_box(0), v___x_1497_);
return v___x_1498_;
}
else
{
lean_object* v_v_1499_; lean_object* v___x_1500_; lean_object* v_bs_x27_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___f_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v_v_1499_ = lean_array_uget(v_bs_1492_, v_i_1491_);
v___x_1500_ = lean_unsigned_to_nat(0u);
v_bs_x27_1501_ = lean_array_uset(v_bs_1492_, v_i_1491_, v___x_1500_);
v___x_1502_ = lean_box_usize(v_i_1491_);
v___x_1503_ = lean_box_usize(v_sz_1490_);
lean_inc(v_f_1489_);
v___f_1504_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1504_, 0, v___x_1502_);
lean_closure_set(v___f_1504_, 1, v_bs_x27_1501_);
lean_closure_set(v___f_1504_, 2, v_inst_1488_);
lean_closure_set(v___f_1504_, 3, v_f_1489_);
lean_closure_set(v___f_1504_, 4, v___x_1503_);
v___x_1505_ = lean_usize_to_nat(v_i_1491_);
v___x_1506_ = l_unsafeCast___redArg(v_v_1499_);
lean_dec(v_v_1499_);
v___x_1507_ = lean_apply_3(v_f_1489_, v___x_1505_, v___x_1506_, lean_box(0));
v___x_1508_ = lean_apply_4(v_toBind_1494_, lean_box(0), lean_box(0), v___x_1507_, v___f_1504_);
return v___x_1508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(size_t v_i_1509_, lean_object* v_bs_x27_1510_, lean_object* v_inst_1511_, lean_object* v_f_1512_, size_t v_sz_1513_, lean_object* v_vNew_1514_){
_start:
{
size_t v___x_1515_; size_t v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1515_ = ((size_t)1ULL);
v___x_1516_ = lean_usize_add(v_i_1509_, v___x_1515_);
v___x_1517_ = l_unsafeCast___redArg(v_vNew_1514_);
v___x_1518_ = lean_array_uset(v_bs_x27_1510_, v_i_1509_, v___x_1517_);
v___x_1519_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1511_, v_f_1512_, v_sz_1513_, v___x_1516_, v___x_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___boxed(lean_object* v_inst_1520_, lean_object* v_f_1521_, lean_object* v_sz_1522_, lean_object* v_i_1523_, lean_object* v_bs_1524_){
_start:
{
size_t v_sz_boxed_1525_; size_t v_i_boxed_1526_; lean_object* v_res_1527_; 
v_sz_boxed_1525_ = lean_unbox_usize(v_sz_1522_);
lean_dec(v_sz_1522_);
v_i_boxed_1526_ = lean_unbox_usize(v_i_1523_);
lean_dec(v_i_1523_);
v_res_1527_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1520_, v_f_1521_, v_sz_boxed_1525_, v_i_boxed_1526_, v_bs_1524_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object* v_00_u03b1_1528_, lean_object* v_00_u03b2_1529_, lean_object* v_m_1530_, lean_object* v_inst_1531_, lean_object* v_as_1532_, lean_object* v_f_1533_, size_t v_sz_1534_, size_t v_i_1535_, lean_object* v_bs_1536_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1531_, v_f_1533_, v_sz_1534_, v_i_1535_, v_bs_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___boxed(lean_object* v_00_u03b1_1538_, lean_object* v_00_u03b2_1539_, lean_object* v_m_1540_, lean_object* v_inst_1541_, lean_object* v_as_1542_, lean_object* v_f_1543_, lean_object* v_sz_1544_, lean_object* v_i_1545_, lean_object* v_bs_1546_){
_start:
{
size_t v_sz_boxed_1547_; size_t v_i_boxed_1548_; lean_object* v_res_1549_; 
v_sz_boxed_1547_ = lean_unbox_usize(v_sz_1544_);
lean_dec(v_sz_1544_);
v_i_boxed_1548_ = lean_unbox_usize(v_i_1545_);
lean_dec(v_i_1545_);
v_res_1549_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(v_00_u03b1_1538_, v_00_u03b2_1539_, v_m_1540_, v_inst_1541_, v_as_1542_, v_f_1543_, v_sz_boxed_1547_, v_i_boxed_1548_, v_bs_1546_);
lean_dec_ref(v_as_1542_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___redArg(lean_object* v_inst_1550_, lean_object* v_as_1551_, lean_object* v_f_1552_){
_start:
{
size_t v_sz_1553_; size_t v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_sz_1553_ = lean_array_size(v_as_1551_);
v___x_1554_ = ((size_t)0ULL);
v___x_1555_ = l_unsafeCast___redArg(v_as_1551_);
v___x_1556_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1550_, v_f_1552_, v_sz_1553_, v___x_1554_, v___x_1555_);
v___x_1557_ = l_unsafeCast___redArg(v___x_1556_);
lean_dec(v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___redArg___boxed(lean_object* v_inst_1558_, lean_object* v_as_1559_, lean_object* v_f_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Array_mapFinIdxMUnsafe___redArg(v_inst_1558_, v_as_1559_, v_f_1560_);
lean_dec_ref(v_as_1559_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe(lean_object* v_00_u03b1_1562_, lean_object* v_00_u03b2_1563_, lean_object* v_m_1564_, lean_object* v_inst_1565_, lean_object* v_as_1566_, lean_object* v_f_1567_){
_start:
{
size_t v_sz_1568_; size_t v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v_sz_1568_ = lean_array_size(v_as_1566_);
v___x_1569_ = ((size_t)0ULL);
v___x_1570_ = l_unsafeCast___redArg(v_as_1566_);
v___x_1571_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1565_, v_f_1567_, v_sz_1568_, v___x_1569_, v___x_1570_);
v___x_1572_ = l_unsafeCast___redArg(v___x_1571_);
lean_dec(v___x_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___boxed(lean_object* v_00_u03b1_1573_, lean_object* v_00_u03b2_1574_, lean_object* v_m_1575_, lean_object* v_inst_1576_, lean_object* v_as_1577_, lean_object* v_f_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l_Array_mapFinIdxMUnsafe(v_00_u03b1_1573_, v_00_u03b2_1574_, v_m_1575_, v_inst_1576_, v_as_1577_, v_f_1578_);
lean_dec_ref(v_as_1577_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0___boxed(lean_object* v_j_1580_, lean_object* v_bs_1581_, lean_object* v_inst_1582_, lean_object* v_as_1583_, lean_object* v_f_1584_, lean_object* v_n_1585_, lean_object* v_____do__lift_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l_Array_mapFinIdxM_map___redArg___lam__0(v_j_1580_, v_bs_1581_, v_inst_1582_, v_as_1583_, v_f_1584_, v_n_1585_, v_____do__lift_1586_);
lean_dec(v_n_1585_);
lean_dec(v_j_1580_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg(lean_object* v_inst_1588_, lean_object* v_as_1589_, lean_object* v_f_1590_, lean_object* v_i_1591_, lean_object* v_j_1592_, lean_object* v_bs_1593_){
_start:
{
lean_object* v_toApplicative_1594_; lean_object* v_toBind_1595_; lean_object* v_toPure_1596_; lean_object* v_zero_1597_; uint8_t v_isZero_1598_; 
v_toApplicative_1594_ = lean_ctor_get(v_inst_1588_, 0);
v_toBind_1595_ = lean_ctor_get(v_inst_1588_, 1);
lean_inc(v_toBind_1595_);
v_toPure_1596_ = lean_ctor_get(v_toApplicative_1594_, 1);
v_zero_1597_ = lean_unsigned_to_nat(0u);
v_isZero_1598_ = lean_nat_dec_eq(v_i_1591_, v_zero_1597_);
if (v_isZero_1598_ == 1)
{
lean_object* v___x_1599_; 
lean_inc(v_toPure_1596_);
lean_dec(v_toBind_1595_);
lean_dec(v_j_1592_);
lean_dec(v_f_1590_);
lean_dec_ref(v_as_1589_);
lean_dec_ref(v_inst_1588_);
v___x_1599_ = lean_apply_2(v_toPure_1596_, lean_box(0), v_bs_1593_);
return v___x_1599_;
}
else
{
lean_object* v_one_1600_; lean_object* v_n_1601_; lean_object* v___f_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v_one_1600_ = lean_unsigned_to_nat(1u);
v_n_1601_ = lean_nat_sub(v_i_1591_, v_one_1600_);
lean_inc(v_f_1590_);
lean_inc_ref(v_as_1589_);
lean_inc(v_j_1592_);
v___f_1602_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1602_, 0, v_j_1592_);
lean_closure_set(v___f_1602_, 1, v_bs_1593_);
lean_closure_set(v___f_1602_, 2, v_inst_1588_);
lean_closure_set(v___f_1602_, 3, v_as_1589_);
lean_closure_set(v___f_1602_, 4, v_f_1590_);
lean_closure_set(v___f_1602_, 5, v_n_1601_);
v___x_1603_ = lean_array_fget(v_as_1589_, v_j_1592_);
lean_dec_ref(v_as_1589_);
v___x_1604_ = lean_apply_3(v_f_1590_, v_j_1592_, v___x_1603_, lean_box(0));
v___x_1605_ = lean_apply_4(v_toBind_1595_, lean_box(0), lean_box(0), v___x_1604_, v___f_1602_);
return v___x_1605_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0(lean_object* v_j_1606_, lean_object* v_bs_1607_, lean_object* v_inst_1608_, lean_object* v_as_1609_, lean_object* v_f_1610_, lean_object* v_n_1611_, lean_object* v_____do__lift_1612_){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1613_ = lean_unsigned_to_nat(1u);
v___x_1614_ = lean_nat_add(v_j_1606_, v___x_1613_);
v___x_1615_ = lean_array_push(v_bs_1607_, v_____do__lift_1612_);
v___x_1616_ = l_Array_mapFinIdxM_map___redArg(v_inst_1608_, v_as_1609_, v_f_1610_, v_n_1611_, v___x_1614_, v___x_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___boxed(lean_object* v_inst_1617_, lean_object* v_as_1618_, lean_object* v_f_1619_, lean_object* v_i_1620_, lean_object* v_j_1621_, lean_object* v_bs_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l_Array_mapFinIdxM_map___redArg(v_inst_1617_, v_as_1618_, v_f_1619_, v_i_1620_, v_j_1621_, v_bs_1622_);
lean_dec(v_i_1620_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map(lean_object* v_00_u03b1_1624_, lean_object* v_00_u03b2_1625_, lean_object* v_m_1626_, lean_object* v_inst_1627_, lean_object* v_as_1628_, lean_object* v_f_1629_, lean_object* v_i_1630_, lean_object* v_j_1631_, lean_object* v_inv_1632_, lean_object* v_bs_1633_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Array_mapFinIdxM_map___redArg(v_inst_1627_, v_as_1628_, v_f_1629_, v_i_1630_, v_j_1631_, v_bs_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___boxed(lean_object* v_00_u03b1_1635_, lean_object* v_00_u03b2_1636_, lean_object* v_m_1637_, lean_object* v_inst_1638_, lean_object* v_as_1639_, lean_object* v_f_1640_, lean_object* v_i_1641_, lean_object* v_j_1642_, lean_object* v_inv_1643_, lean_object* v_bs_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l_Array_mapFinIdxM_map(v_00_u03b1_1635_, v_00_u03b2_1636_, v_m_1637_, v_inst_1638_, v_as_1639_, v_f_1640_, v_i_1641_, v_j_1642_, v_inv_1643_, v_bs_1644_);
lean_dec(v_i_1641_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg___lam__0(lean_object* v_f_1646_, lean_object* v_i_1647_, lean_object* v_a_1648_, lean_object* v_x_1649_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = lean_apply_2(v_f_1646_, v_i_1647_, v_a_1648_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg(lean_object* v_inst_1651_, lean_object* v_f_1652_, lean_object* v_as_1653_){
_start:
{
lean_object* v___f_1654_; size_t v_sz_1655_; size_t v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___f_1654_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1654_, 0, v_f_1652_);
v_sz_1655_ = lean_array_size(v_as_1653_);
v___x_1656_ = ((size_t)0ULL);
v___x_1657_ = l_unsafeCast___redArg(v_as_1653_);
v___x_1658_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1651_, v___f_1654_, v_sz_1655_, v___x_1656_, v___x_1657_);
v___x_1659_ = l_unsafeCast___redArg(v___x_1658_);
lean_dec(v___x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg___boxed(lean_object* v_inst_1660_, lean_object* v_f_1661_, lean_object* v_as_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l_Array_mapIdxM___redArg(v_inst_1660_, v_f_1661_, v_as_1662_);
lean_dec_ref(v_as_1662_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM(lean_object* v_00_u03b1_1664_, lean_object* v_00_u03b2_1665_, lean_object* v_m_1666_, lean_object* v_inst_1667_, lean_object* v_f_1668_, lean_object* v_as_1669_){
_start:
{
lean_object* v___f_1670_; size_t v_sz_1671_; size_t v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___f_1670_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1670_, 0, v_f_1668_);
v_sz_1671_ = lean_array_size(v_as_1669_);
v___x_1672_ = ((size_t)0ULL);
v___x_1673_ = l_unsafeCast___redArg(v_as_1669_);
v___x_1674_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1667_, v___f_1670_, v_sz_1671_, v___x_1672_, v___x_1673_);
v___x_1675_ = l_unsafeCast___redArg(v___x_1674_);
lean_dec(v___x_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM___boxed(lean_object* v_00_u03b1_1676_, lean_object* v_00_u03b2_1677_, lean_object* v_m_1678_, lean_object* v_inst_1679_, lean_object* v_f_1680_, lean_object* v_as_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l_Array_mapIdxM(v_00_u03b1_1676_, v_00_u03b2_1677_, v_m_1678_, v_inst_1679_, v_f_1680_, v_as_1681_);
lean_dec_ref(v_as_1681_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed(lean_object* v_i_1683_, lean_object* v_inst_1684_, lean_object* v_f_1685_, lean_object* v_as_1686_, lean_object* v_x_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(v_i_1683_, v_inst_1684_, v_f_1685_, v_as_1686_, v_x_1687_);
lean_dec(v_i_1683_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(lean_object* v_inst_1689_, lean_object* v_f_1690_, lean_object* v_as_1691_, lean_object* v_i_1692_){
_start:
{
lean_object* v___x_1693_; uint8_t v___x_1694_; 
v___x_1693_ = lean_array_get_size(v_as_1691_);
v___x_1694_ = lean_nat_dec_lt(v_i_1692_, v___x_1693_);
if (v___x_1694_ == 0)
{
lean_object* v_failure_1695_; lean_object* v___x_1696_; 
lean_dec(v_i_1692_);
lean_dec_ref(v_as_1691_);
lean_dec(v_f_1690_);
v_failure_1695_ = lean_ctor_get(v_inst_1689_, 1);
lean_inc(v_failure_1695_);
lean_dec_ref(v_inst_1689_);
v___x_1696_ = lean_apply_1(v_failure_1695_, lean_box(0));
return v___x_1696_;
}
else
{
lean_object* v_orElse_1697_; lean_object* v___f_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v_orElse_1697_ = lean_ctor_get(v_inst_1689_, 2);
lean_inc(v_orElse_1697_);
lean_inc_ref(v_as_1691_);
lean_inc(v_f_1690_);
lean_inc(v_i_1692_);
v___f_1698_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1698_, 0, v_i_1692_);
lean_closure_set(v___f_1698_, 1, v_inst_1689_);
lean_closure_set(v___f_1698_, 2, v_f_1690_);
lean_closure_set(v___f_1698_, 3, v_as_1691_);
v___x_1699_ = lean_array_fget(v_as_1691_, v_i_1692_);
lean_dec(v_i_1692_);
lean_dec_ref(v_as_1691_);
v___x_1700_ = lean_apply_1(v_f_1690_, v___x_1699_);
v___x_1701_ = lean_apply_3(v_orElse_1697_, lean_box(0), v___x_1700_, v___f_1698_);
return v___x_1701_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(lean_object* v_i_1702_, lean_object* v_inst_1703_, lean_object* v_f_1704_, lean_object* v_as_1705_, lean_object* v_x_1706_){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = lean_unsigned_to_nat(1u);
v___x_1708_ = lean_nat_add(v_i_1702_, v___x_1707_);
v___x_1709_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1703_, v_f_1704_, v_as_1705_, v___x_1708_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object* v_00_u03b2_1710_, lean_object* v_00_u03b1_1711_, lean_object* v_m_1712_, lean_object* v_inst_1713_, lean_object* v_f_1714_, lean_object* v_as_1715_, lean_object* v_i_1716_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1713_, v_f_1714_, v_as_1715_, v_i_1716_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Array_firstM___redArg(lean_object* v_inst_1718_, lean_object* v_f_1719_, lean_object* v_as_1720_){
_start:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = lean_unsigned_to_nat(0u);
v___x_1722_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1718_, v_f_1719_, v_as_1720_, v___x_1721_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_Array_firstM(lean_object* v_00_u03b2_1723_, lean_object* v_00_u03b1_1724_, lean_object* v_m_1725_, lean_object* v_inst_1726_, lean_object* v_f_1727_, lean_object* v_as_1728_){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = lean_unsigned_to_nat(0u);
v___x_1730_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1726_, v_f_1727_, v_as_1728_, v___x_1729_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__0(lean_object* v___x_1731_, lean_object* v_toPure_1732_, lean_object* v___x_1733_, lean_object* v_____do__lift_1734_){
_start:
{
if (lean_obj_tag(v_____do__lift_1734_) == 1)
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
lean_dec_ref(v___x_1733_);
v___x_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_____do__lift_1734_);
v___x_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
lean_ctor_set(v___x_1736_, 1, v___x_1731_);
v___x_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
v___x_1738_ = lean_apply_2(v_toPure_1732_, lean_box(0), v___x_1737_);
return v___x_1738_;
}
else
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
lean_dec(v_____do__lift_1734_);
v___x_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1733_);
v___x_1740_ = lean_apply_2(v_toPure_1732_, lean_box(0), v___x_1739_);
return v___x_1740_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1(lean_object* v_f_1741_, lean_object* v_toBind_1742_, lean_object* v___f_1743_, lean_object* v_a_1744_, lean_object* v_x_1745_, lean_object* v___y_1746_){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1747_ = lean_apply_1(v_f_1741_, v_a_1744_);
v___x_1748_ = lean_apply_4(v_toBind_1742_, lean_box(0), lean_box(0), v___x_1747_, v___f_1743_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1___boxed(lean_object* v_f_1749_, lean_object* v_toBind_1750_, lean_object* v___f_1751_, lean_object* v_a_1752_, lean_object* v_x_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Array_findSomeM_x3f___redArg___lam__1(v_f_1749_, v_toBind_1750_, v___f_1751_, v_a_1752_, v_x_1753_, v___y_1754_);
lean_dec_ref(v___y_1754_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__2(lean_object* v_toPure_1756_, lean_object* v_____s_1757_){
_start:
{
lean_object* v_fst_1758_; 
v_fst_1758_ = lean_ctor_get(v_____s_1757_, 0);
lean_inc(v_fst_1758_);
lean_dec_ref(v_____s_1757_);
if (lean_obj_tag(v_fst_1758_) == 0)
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1759_ = lean_box(0);
v___x_1760_ = lean_apply_2(v_toPure_1756_, lean_box(0), v___x_1759_);
return v___x_1760_;
}
else
{
lean_object* v_val_1761_; lean_object* v___x_1762_; 
v_val_1761_ = lean_ctor_get(v_fst_1758_, 0);
lean_inc(v_val_1761_);
lean_dec_ref_known(v_fst_1758_, 1);
v___x_1762_ = lean_apply_2(v_toPure_1756_, lean_box(0), v_val_1761_);
return v___x_1762_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg(lean_object* v_inst_1766_, lean_object* v_f_1767_, lean_object* v_as_1768_){
_start:
{
lean_object* v_toApplicative_1769_; lean_object* v_toBind_1770_; lean_object* v_toPure_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___f_1774_; lean_object* v___f_1775_; lean_object* v___f_1776_; size_t v_sz_1777_; size_t v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v_toApplicative_1769_ = lean_ctor_get(v_inst_1766_, 0);
v_toBind_1770_ = lean_ctor_get(v_inst_1766_, 1);
lean_inc_n(v_toBind_1770_, 2);
v_toPure_1771_ = lean_ctor_get(v_toApplicative_1769_, 1);
v___x_1772_ = lean_box(0);
v___x_1773_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1771_, 2);
v___f_1774_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1774_, 0, v___x_1772_);
lean_closure_set(v___f_1774_, 1, v_toPure_1771_);
lean_closure_set(v___f_1774_, 2, v___x_1773_);
v___f_1775_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1775_, 0, v_f_1767_);
lean_closure_set(v___f_1775_, 1, v_toBind_1770_);
lean_closure_set(v___f_1775_, 2, v___f_1774_);
v___f_1776_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1776_, 0, v_toPure_1771_);
v_sz_1777_ = lean_array_size(v_as_1768_);
v___x_1778_ = ((size_t)0ULL);
v___x_1779_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1766_, v_as_1768_, v___f_1775_, v_sz_1777_, v___x_1778_, v___x_1773_);
v___x_1780_ = lean_apply_4(v_toBind_1770_, lean_box(0), lean_box(0), v___x_1779_, v___f_1776_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f(lean_object* v_00_u03b1_1781_, lean_object* v_00_u03b2_1782_, lean_object* v_m_1783_, lean_object* v_inst_1784_, lean_object* v_f_1785_, lean_object* v_as_1786_){
_start:
{
lean_object* v_toApplicative_1787_; lean_object* v_toBind_1788_; lean_object* v_toPure_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___f_1792_; lean_object* v___f_1793_; lean_object* v___f_1794_; size_t v_sz_1795_; size_t v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v_toApplicative_1787_ = lean_ctor_get(v_inst_1784_, 0);
v_toBind_1788_ = lean_ctor_get(v_inst_1784_, 1);
lean_inc_n(v_toBind_1788_, 2);
v_toPure_1789_ = lean_ctor_get(v_toApplicative_1787_, 1);
v___x_1790_ = lean_box(0);
v___x_1791_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1789_, 2);
v___f_1792_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1792_, 0, v___x_1790_);
lean_closure_set(v___f_1792_, 1, v_toPure_1789_);
lean_closure_set(v___f_1792_, 2, v___x_1791_);
v___f_1793_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1793_, 0, v_f_1785_);
lean_closure_set(v___f_1793_, 1, v_toBind_1788_);
lean_closure_set(v___f_1793_, 2, v___f_1792_);
v___f_1794_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1794_, 0, v_toPure_1789_);
v_sz_1795_ = lean_array_size(v_as_1786_);
v___x_1796_ = ((size_t)0ULL);
v___x_1797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1784_, v_as_1786_, v___f_1793_, v_sz_1795_, v___x_1796_, v___x_1791_);
v___x_1798_ = lean_apply_4(v_toBind_1788_, lean_box(0), lean_box(0), v___x_1797_, v___f_1794_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0(lean_object* v___x_1799_, lean_object* v_toPure_1800_, lean_object* v_a_1801_, lean_object* v___x_1802_, uint8_t v_____do__lift_1803_){
_start:
{
if (v_____do__lift_1803_ == 0)
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
lean_dec(v_a_1801_);
v___x_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1799_);
v___x_1805_ = lean_apply_2(v_toPure_1800_, lean_box(0), v___x_1804_);
return v___x_1805_;
}
else
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
lean_dec_ref(v___x_1799_);
v___x_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1806_, 0, v_a_1801_);
v___x_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
v___x_1808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
lean_ctor_set(v___x_1808_, 1, v___x_1802_);
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
v___x_1810_ = lean_apply_2(v_toPure_1800_, lean_box(0), v___x_1809_);
return v___x_1810_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0___boxed(lean_object* v___x_1811_, lean_object* v_toPure_1812_, lean_object* v_a_1813_, lean_object* v___x_1814_, lean_object* v_____do__lift_1815_){
_start:
{
uint8_t v_____do__lift_185__boxed_1816_; lean_object* v_res_1817_; 
v_____do__lift_185__boxed_1816_ = lean_unbox(v_____do__lift_1815_);
v_res_1817_ = l_Array_findM_x3f___redArg___lam__0(v___x_1811_, v_toPure_1812_, v_a_1813_, v___x_1814_, v_____do__lift_185__boxed_1816_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1(lean_object* v___x_1818_, lean_object* v_toPure_1819_, lean_object* v___x_1820_, lean_object* v_p_1821_, lean_object* v_toBind_1822_, lean_object* v_a_1823_, lean_object* v_x_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v___f_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_inc(v_a_1823_);
v___f_1826_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1826_, 0, v___x_1818_);
lean_closure_set(v___f_1826_, 1, v_toPure_1819_);
lean_closure_set(v___f_1826_, 2, v_a_1823_);
lean_closure_set(v___f_1826_, 3, v___x_1820_);
v___x_1827_ = lean_apply_1(v_p_1821_, v_a_1823_);
v___x_1828_ = lean_apply_4(v_toBind_1822_, lean_box(0), lean_box(0), v___x_1827_, v___f_1826_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1___boxed(lean_object* v___x_1829_, lean_object* v_toPure_1830_, lean_object* v___x_1831_, lean_object* v_p_1832_, lean_object* v_toBind_1833_, lean_object* v_a_1834_, lean_object* v_x_1835_, lean_object* v___y_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l_Array_findM_x3f___redArg___lam__1(v___x_1829_, v_toPure_1830_, v___x_1831_, v_p_1832_, v_toBind_1833_, v_a_1834_, v_x_1835_, v___y_1836_);
lean_dec_ref(v___y_1836_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg(lean_object* v_inst_1838_, lean_object* v_p_1839_, lean_object* v_as_1840_){
_start:
{
lean_object* v_toApplicative_1841_; lean_object* v_toBind_1842_; lean_object* v_toPure_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___f_1846_; lean_object* v___f_1847_; size_t v_sz_1848_; size_t v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v_toApplicative_1841_ = lean_ctor_get(v_inst_1838_, 0);
v_toBind_1842_ = lean_ctor_get(v_inst_1838_, 1);
lean_inc_n(v_toBind_1842_, 2);
v_toPure_1843_ = lean_ctor_get(v_toApplicative_1841_, 1);
v___x_1844_ = lean_box(0);
v___x_1845_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1843_, 2);
v___f_1846_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1846_, 0, v___x_1845_);
lean_closure_set(v___f_1846_, 1, v_toPure_1843_);
lean_closure_set(v___f_1846_, 2, v___x_1844_);
lean_closure_set(v___f_1846_, 3, v_p_1839_);
lean_closure_set(v___f_1846_, 4, v_toBind_1842_);
v___f_1847_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1847_, 0, v_toPure_1843_);
v_sz_1848_ = lean_array_size(v_as_1840_);
v___x_1849_ = ((size_t)0ULL);
v___x_1850_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1838_, v_as_1840_, v___f_1846_, v_sz_1848_, v___x_1849_, v___x_1845_);
v___x_1851_ = lean_apply_4(v_toBind_1842_, lean_box(0), lean_box(0), v___x_1850_, v___f_1847_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f(lean_object* v_m_1852_, lean_object* v_00_u03b1_1853_, lean_object* v_inst_1854_, lean_object* v_p_1855_, lean_object* v_as_1856_){
_start:
{
lean_object* v_toApplicative_1857_; lean_object* v_toBind_1858_; lean_object* v_toPure_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___f_1862_; lean_object* v___f_1863_; size_t v_sz_1864_; size_t v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v_toApplicative_1857_ = lean_ctor_get(v_inst_1854_, 0);
v_toBind_1858_ = lean_ctor_get(v_inst_1854_, 1);
lean_inc_n(v_toBind_1858_, 2);
v_toPure_1859_ = lean_ctor_get(v_toApplicative_1857_, 1);
v___x_1860_ = lean_box(0);
v___x_1861_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1859_, 2);
v___f_1862_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1862_, 0, v___x_1861_);
lean_closure_set(v___f_1862_, 1, v_toPure_1859_);
lean_closure_set(v___f_1862_, 2, v___x_1860_);
lean_closure_set(v___f_1862_, 3, v_p_1855_);
lean_closure_set(v___f_1862_, 4, v_toBind_1858_);
v___f_1863_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1863_, 0, v_toPure_1859_);
v_sz_1864_ = lean_array_size(v_as_1856_);
v___x_1865_ = ((size_t)0ULL);
v___x_1866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1854_, v_as_1856_, v___f_1862_, v_sz_1864_, v___x_1865_, v___x_1861_);
v___x_1867_ = lean_apply_4(v_toBind_1858_, lean_box(0), lean_box(0), v___x_1866_, v___f_1863_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0(lean_object* v_snd_1868_, lean_object* v___x_1869_, lean_object* v_toPure_1870_, uint8_t v_____do__lift_1871_){
_start:
{
if (v_____do__lift_1871_ == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1872_ = lean_unsigned_to_nat(1u);
v___x_1873_ = lean_nat_add(v_snd_1868_, v___x_1872_);
lean_dec(v_snd_1868_);
v___x_1874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1869_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
v___x_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
v___x_1876_ = lean_apply_2(v_toPure_1870_, lean_box(0), v___x_1875_);
return v___x_1876_;
}
else
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
lean_dec(v___x_1869_);
lean_inc(v_snd_1868_);
v___x_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1877_, 0, v_snd_1868_);
v___x_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
v___x_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1878_);
lean_ctor_set(v___x_1879_, 1, v_snd_1868_);
v___x_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
v___x_1881_ = lean_apply_2(v_toPure_1870_, lean_box(0), v___x_1880_);
return v___x_1881_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0___boxed(lean_object* v_snd_1882_, lean_object* v___x_1883_, lean_object* v_toPure_1884_, lean_object* v_____do__lift_1885_){
_start:
{
uint8_t v_____do__lift_214__boxed_1886_; lean_object* v_res_1887_; 
v_____do__lift_214__boxed_1886_ = lean_unbox(v_____do__lift_1885_);
v_res_1887_ = l_Array_findIdxM_x3f___redArg___lam__0(v_snd_1882_, v___x_1883_, v_toPure_1884_, v_____do__lift_214__boxed_1886_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__1(lean_object* v___x_1888_, lean_object* v_toPure_1889_, lean_object* v_p_1890_, lean_object* v_toBind_1891_, lean_object* v_a_1892_, lean_object* v_x_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v_snd_1895_; lean_object* v___f_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v_snd_1895_ = lean_ctor_get(v___y_1894_, 1);
lean_inc(v_snd_1895_);
lean_dec_ref(v___y_1894_);
v___f_1896_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1896_, 0, v_snd_1895_);
lean_closure_set(v___f_1896_, 1, v___x_1888_);
lean_closure_set(v___f_1896_, 2, v_toPure_1889_);
v___x_1897_ = lean_apply_1(v_p_1890_, v_a_1892_);
v___x_1898_ = lean_apply_4(v_toBind_1891_, lean_box(0), lean_box(0), v___x_1897_, v___f_1896_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__2(lean_object* v_toPure_1899_, lean_object* v_____s_1900_){
_start:
{
lean_object* v_fst_1901_; 
v_fst_1901_ = lean_ctor_get(v_____s_1900_, 0);
lean_inc(v_fst_1901_);
lean_dec_ref(v_____s_1900_);
if (lean_obj_tag(v_fst_1901_) == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = lean_box(0);
v___x_1903_ = lean_apply_2(v_toPure_1899_, lean_box(0), v___x_1902_);
return v___x_1903_;
}
else
{
lean_object* v_val_1904_; lean_object* v___x_1905_; 
v_val_1904_ = lean_ctor_get(v_fst_1901_, 0);
lean_inc(v_val_1904_);
lean_dec_ref_known(v_fst_1901_, 1);
v___x_1905_ = lean_apply_2(v_toPure_1899_, lean_box(0), v_val_1904_);
return v___x_1905_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg(lean_object* v_inst_1909_, lean_object* v_p_1910_, lean_object* v_as_1911_){
_start:
{
lean_object* v_toApplicative_1912_; lean_object* v_toBind_1913_; lean_object* v_toPure_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___f_1917_; lean_object* v___f_1918_; size_t v_sz_1919_; size_t v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v_toApplicative_1912_ = lean_ctor_get(v_inst_1909_, 0);
v_toBind_1913_ = lean_ctor_get(v_inst_1909_, 1);
lean_inc_n(v_toBind_1913_, 2);
v_toPure_1914_ = lean_ctor_get(v_toApplicative_1912_, 1);
v___x_1915_ = lean_box(0);
v___x_1916_ = ((lean_object*)(l_Array_findIdxM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1914_, 2);
v___f_1917_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__1), 7, 4);
lean_closure_set(v___f_1917_, 0, v___x_1915_);
lean_closure_set(v___f_1917_, 1, v_toPure_1914_);
lean_closure_set(v___f_1917_, 2, v_p_1910_);
lean_closure_set(v___f_1917_, 3, v_toBind_1913_);
v___f_1918_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1918_, 0, v_toPure_1914_);
v_sz_1919_ = lean_array_size(v_as_1911_);
v___x_1920_ = ((size_t)0ULL);
v___x_1921_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1909_, v_as_1911_, v___f_1917_, v_sz_1919_, v___x_1920_, v___x_1916_);
v___x_1922_ = lean_apply_4(v_toBind_1913_, lean_box(0), lean_box(0), v___x_1921_, v___f_1918_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f(lean_object* v_00_u03b1_1923_, lean_object* v_m_1924_, lean_object* v_inst_1925_, lean_object* v_p_1926_, lean_object* v_as_1927_){
_start:
{
lean_object* v_toApplicative_1928_; lean_object* v_toBind_1929_; lean_object* v_toPure_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___f_1933_; lean_object* v___f_1934_; size_t v_sz_1935_; size_t v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v_toApplicative_1928_ = lean_ctor_get(v_inst_1925_, 0);
v_toBind_1929_ = lean_ctor_get(v_inst_1925_, 1);
lean_inc_n(v_toBind_1929_, 2);
v_toPure_1930_ = lean_ctor_get(v_toApplicative_1928_, 1);
v___x_1931_ = lean_box(0);
v___x_1932_ = ((lean_object*)(l_Array_findIdxM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1930_, 2);
v___f_1933_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__1), 7, 4);
lean_closure_set(v___f_1933_, 0, v___x_1931_);
lean_closure_set(v___f_1933_, 1, v_toPure_1930_);
lean_closure_set(v___f_1933_, 2, v_p_1926_);
lean_closure_set(v___f_1933_, 3, v_toBind_1929_);
v___f_1934_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1934_, 0, v_toPure_1930_);
v_sz_1935_ = lean_array_size(v_as_1927_);
v___x_1936_ = ((size_t)0ULL);
v___x_1937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1925_, v_as_1927_, v___f_1933_, v_sz_1935_, v___x_1936_, v___x_1932_);
v___x_1938_ = lean_apply_4(v_toBind_1929_, lean_box(0), lean_box(0), v___x_1937_, v___f_1934_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed(lean_object* v_i_1939_, lean_object* v_inst_1940_, lean_object* v_p_1941_, lean_object* v_as_1942_, lean_object* v_stop_1943_, lean_object* v_toPure_1944_, lean_object* v___x_1945_, lean_object* v_____do__lift_1946_){
_start:
{
size_t v_i_boxed_1947_; size_t v_stop_boxed_1948_; uint8_t v___x_78__boxed_1949_; uint8_t v_____do__lift_79__boxed_1950_; lean_object* v_res_1951_; 
v_i_boxed_1947_ = lean_unbox_usize(v_i_1939_);
lean_dec(v_i_1939_);
v_stop_boxed_1948_ = lean_unbox_usize(v_stop_1943_);
lean_dec(v_stop_1943_);
v___x_78__boxed_1949_ = lean_unbox(v___x_1945_);
v_____do__lift_79__boxed_1950_ = lean_unbox(v_____do__lift_1946_);
v_res_1951_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(v_i_boxed_1947_, v_inst_1940_, v_p_1941_, v_as_1942_, v_stop_boxed_1948_, v_toPure_1944_, v___x_78__boxed_1949_, v_____do__lift_79__boxed_1950_);
return v_res_1951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(lean_object* v_inst_1952_, lean_object* v_p_1953_, lean_object* v_as_1954_, size_t v_i_1955_, size_t v_stop_1956_){
_start:
{
lean_object* v_toApplicative_1957_; lean_object* v_toBind_1958_; lean_object* v_toPure_1959_; uint8_t v___x_1960_; 
v_toApplicative_1957_ = lean_ctor_get(v_inst_1952_, 0);
v_toBind_1958_ = lean_ctor_get(v_inst_1952_, 1);
lean_inc(v_toBind_1958_);
v_toPure_1959_ = lean_ctor_get(v_toApplicative_1957_, 1);
lean_inc(v_toPure_1959_);
v___x_1960_ = lean_usize_dec_eq(v_i_1955_, v_stop_1956_);
if (v___x_1960_ == 0)
{
uint8_t v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___f_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1961_ = 1;
v___x_1962_ = lean_box_usize(v_i_1955_);
v___x_1963_ = lean_box_usize(v_stop_1956_);
v___x_1964_ = lean_box(v___x_1961_);
lean_inc_ref(v_as_1954_);
lean_inc(v_p_1953_);
v___f_1965_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1965_, 0, v___x_1962_);
lean_closure_set(v___f_1965_, 1, v_inst_1952_);
lean_closure_set(v___f_1965_, 2, v_p_1953_);
lean_closure_set(v___f_1965_, 3, v_as_1954_);
lean_closure_set(v___f_1965_, 4, v___x_1963_);
lean_closure_set(v___f_1965_, 5, v_toPure_1959_);
lean_closure_set(v___f_1965_, 6, v___x_1964_);
v___x_1966_ = lean_array_uget(v_as_1954_, v_i_1955_);
lean_dec_ref(v_as_1954_);
v___x_1967_ = lean_apply_1(v_p_1953_, v___x_1966_);
v___x_1968_ = lean_apply_4(v_toBind_1958_, lean_box(0), lean_box(0), v___x_1967_, v___f_1965_);
return v___x_1968_;
}
else
{
uint8_t v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
lean_dec(v_toBind_1958_);
lean_dec_ref(v_as_1954_);
lean_dec(v_p_1953_);
lean_dec_ref(v_inst_1952_);
v___x_1969_ = 0;
v___x_1970_ = lean_box(v___x_1969_);
v___x_1971_ = lean_apply_2(v_toPure_1959_, lean_box(0), v___x_1970_);
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(size_t v_i_1972_, lean_object* v_inst_1973_, lean_object* v_p_1974_, lean_object* v_as_1975_, size_t v_stop_1976_, lean_object* v_toPure_1977_, uint8_t v___x_1978_, uint8_t v_____do__lift_1979_){
_start:
{
if (v_____do__lift_1979_ == 0)
{
size_t v___x_1980_; size_t v___x_1981_; lean_object* v___x_1982_; 
lean_dec(v_toPure_1977_);
v___x_1980_ = ((size_t)1ULL);
v___x_1981_ = lean_usize_add(v_i_1972_, v___x_1980_);
v___x_1982_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1973_, v_p_1974_, v_as_1975_, v___x_1981_, v_stop_1976_);
return v___x_1982_;
}
else
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
lean_dec_ref(v_as_1975_);
lean_dec(v_p_1974_);
lean_dec_ref(v_inst_1973_);
v___x_1983_ = lean_box(v___x_1978_);
v___x_1984_ = lean_apply_2(v_toPure_1977_, lean_box(0), v___x_1983_);
return v___x_1984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___boxed(lean_object* v_inst_1985_, lean_object* v_p_1986_, lean_object* v_as_1987_, lean_object* v_i_1988_, lean_object* v_stop_1989_){
_start:
{
size_t v_i_boxed_1990_; size_t v_stop_boxed_1991_; lean_object* v_res_1992_; 
v_i_boxed_1990_ = lean_unbox_usize(v_i_1988_);
lean_dec(v_i_1988_);
v_stop_boxed_1991_ = lean_unbox_usize(v_stop_1989_);
lean_dec(v_stop_1989_);
v_res_1992_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1985_, v_p_1986_, v_as_1987_, v_i_boxed_1990_, v_stop_boxed_1991_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object* v_00_u03b1_1993_, lean_object* v_m_1994_, lean_object* v_inst_1995_, lean_object* v_p_1996_, lean_object* v_as_1997_, size_t v_i_1998_, size_t v_stop_1999_){
_start:
{
lean_object* v___x_2000_; 
v___x_2000_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1995_, v_p_1996_, v_as_1997_, v_i_1998_, v_stop_1999_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___boxed(lean_object* v_00_u03b1_2001_, lean_object* v_m_2002_, lean_object* v_inst_2003_, lean_object* v_p_2004_, lean_object* v_as_2005_, lean_object* v_i_2006_, lean_object* v_stop_2007_){
_start:
{
size_t v_i_boxed_2008_; size_t v_stop_boxed_2009_; lean_object* v_res_2010_; 
v_i_boxed_2008_ = lean_unbox_usize(v_i_2006_);
lean_dec(v_i_2006_);
v_stop_boxed_2009_ = lean_unbox_usize(v_stop_2007_);
lean_dec(v_stop_2007_);
v_res_2010_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(v_00_u03b1_2001_, v_m_2002_, v_inst_2003_, v_p_2004_, v_as_2005_, v_i_boxed_2008_, v_stop_boxed_2009_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg(lean_object* v_inst_2011_, lean_object* v_p_2012_, lean_object* v_as_2013_, lean_object* v_start_2014_, lean_object* v_stop_2015_){
_start:
{
lean_object* v_toApplicative_2016_; lean_object* v_toPure_2017_; lean_object* v___y_2019_; uint8_t v___x_2026_; 
v_toApplicative_2016_ = lean_ctor_get(v_inst_2011_, 0);
v_toPure_2017_ = lean_ctor_get(v_toApplicative_2016_, 1);
v___x_2026_ = lean_nat_dec_lt(v_start_2014_, v_stop_2015_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
lean_inc(v_toPure_2017_);
lean_dec(v_stop_2015_);
lean_dec_ref(v_as_2013_);
lean_dec(v_p_2012_);
lean_dec_ref(v_inst_2011_);
v___x_2027_ = lean_box(v___x_2026_);
v___x_2028_ = lean_apply_2(v_toPure_2017_, lean_box(0), v___x_2027_);
return v___x_2028_;
}
else
{
lean_object* v___x_2029_; uint8_t v___x_2030_; 
v___x_2029_ = lean_array_get_size(v_as_2013_);
v___x_2030_ = lean_nat_dec_le(v_stop_2015_, v___x_2029_);
if (v___x_2030_ == 0)
{
lean_dec(v_stop_2015_);
v___y_2019_ = v___x_2029_;
goto v___jp_2018_;
}
else
{
v___y_2019_ = v_stop_2015_;
goto v___jp_2018_;
}
}
v___jp_2018_:
{
uint8_t v___x_2020_; 
v___x_2020_ = lean_nat_dec_lt(v_start_2014_, v___y_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
lean_inc(v_toPure_2017_);
lean_dec(v___y_2019_);
lean_dec_ref(v_as_2013_);
lean_dec(v_p_2012_);
lean_dec_ref(v_inst_2011_);
v___x_2021_ = lean_box(v___x_2020_);
v___x_2022_ = lean_apply_2(v_toPure_2017_, lean_box(0), v___x_2021_);
return v___x_2022_;
}
else
{
size_t v___x_2023_; size_t v___x_2024_; lean_object* v___x_2025_; 
v___x_2023_ = lean_usize_of_nat(v_start_2014_);
v___x_2024_ = lean_usize_of_nat(v___y_2019_);
lean_dec(v___y_2019_);
v___x_2025_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_2011_, v_p_2012_, v_as_2013_, v___x_2023_, v___x_2024_);
return v___x_2025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg___boxed(lean_object* v_inst_2031_, lean_object* v_p_2032_, lean_object* v_as_2033_, lean_object* v_start_2034_, lean_object* v_stop_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l_Array_anyMUnsafe___redArg(v_inst_2031_, v_p_2032_, v_as_2033_, v_start_2034_, v_stop_2035_);
lean_dec(v_start_2034_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe(lean_object* v_00_u03b1_2037_, lean_object* v_m_2038_, lean_object* v_inst_2039_, lean_object* v_p_2040_, lean_object* v_as_2041_, lean_object* v_start_2042_, lean_object* v_stop_2043_){
_start:
{
lean_object* v_toApplicative_2044_; lean_object* v_toPure_2045_; lean_object* v___y_2047_; uint8_t v___x_2054_; 
v_toApplicative_2044_ = lean_ctor_get(v_inst_2039_, 0);
v_toPure_2045_ = lean_ctor_get(v_toApplicative_2044_, 1);
v___x_2054_ = lean_nat_dec_lt(v_start_2042_, v_stop_2043_);
if (v___x_2054_ == 0)
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
lean_inc(v_toPure_2045_);
lean_dec(v_stop_2043_);
lean_dec_ref(v_as_2041_);
lean_dec(v_p_2040_);
lean_dec_ref(v_inst_2039_);
v___x_2055_ = lean_box(v___x_2054_);
v___x_2056_ = lean_apply_2(v_toPure_2045_, lean_box(0), v___x_2055_);
return v___x_2056_;
}
else
{
lean_object* v___x_2057_; uint8_t v___x_2058_; 
v___x_2057_ = lean_array_get_size(v_as_2041_);
v___x_2058_ = lean_nat_dec_le(v_stop_2043_, v___x_2057_);
if (v___x_2058_ == 0)
{
lean_dec(v_stop_2043_);
v___y_2047_ = v___x_2057_;
goto v___jp_2046_;
}
else
{
v___y_2047_ = v_stop_2043_;
goto v___jp_2046_;
}
}
v___jp_2046_:
{
uint8_t v___x_2048_; 
v___x_2048_ = lean_nat_dec_lt(v_start_2042_, v___y_2047_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
lean_inc(v_toPure_2045_);
lean_dec(v___y_2047_);
lean_dec_ref(v_as_2041_);
lean_dec(v_p_2040_);
lean_dec_ref(v_inst_2039_);
v___x_2049_ = lean_box(v___x_2048_);
v___x_2050_ = lean_apply_2(v_toPure_2045_, lean_box(0), v___x_2049_);
return v___x_2050_;
}
else
{
size_t v___x_2051_; size_t v___x_2052_; lean_object* v___x_2053_; 
v___x_2051_ = lean_usize_of_nat(v_start_2042_);
v___x_2052_ = lean_usize_of_nat(v___y_2047_);
lean_dec(v___y_2047_);
v___x_2053_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_2039_, v_p_2040_, v_as_2041_, v___x_2051_, v___x_2052_);
return v___x_2053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___boxed(lean_object* v_00_u03b1_2059_, lean_object* v_m_2060_, lean_object* v_inst_2061_, lean_object* v_p_2062_, lean_object* v_as_2063_, lean_object* v_start_2064_, lean_object* v_stop_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Array_anyMUnsafe(v_00_u03b1_2059_, v_m_2060_, v_inst_2061_, v_p_2062_, v_as_2063_, v_start_2064_, v_stop_2065_);
lean_dec(v_start_2064_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0___boxed(lean_object* v_j_2067_, lean_object* v_inst_2068_, lean_object* v_p_2069_, lean_object* v_as_2070_, lean_object* v_stop_2071_, lean_object* v_toPure_2072_, lean_object* v___x_2073_, lean_object* v_____do__lift_2074_){
_start:
{
uint8_t v___x_63__boxed_2075_; uint8_t v_____do__lift_64__boxed_2076_; lean_object* v_res_2077_; 
v___x_63__boxed_2075_ = lean_unbox(v___x_2073_);
v_____do__lift_64__boxed_2076_ = lean_unbox(v_____do__lift_2074_);
v_res_2077_ = l_Array_anyM_loop___redArg___lam__0(v_j_2067_, v_inst_2068_, v_p_2069_, v_as_2070_, v_stop_2071_, v_toPure_2072_, v___x_63__boxed_2075_, v_____do__lift_64__boxed_2076_);
lean_dec(v_j_2067_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg(lean_object* v_inst_2078_, lean_object* v_p_2079_, lean_object* v_as_2080_, lean_object* v_stop_2081_, lean_object* v_j_2082_){
_start:
{
lean_object* v_toApplicative_2083_; lean_object* v_toBind_2084_; lean_object* v_toPure_2085_; uint8_t v___x_2086_; 
v_toApplicative_2083_ = lean_ctor_get(v_inst_2078_, 0);
v_toBind_2084_ = lean_ctor_get(v_inst_2078_, 1);
lean_inc(v_toBind_2084_);
v_toPure_2085_ = lean_ctor_get(v_toApplicative_2083_, 1);
lean_inc(v_toPure_2085_);
v___x_2086_ = lean_nat_dec_lt(v_j_2082_, v_stop_2081_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
lean_dec(v_toBind_2084_);
lean_dec(v_j_2082_);
lean_dec(v_stop_2081_);
lean_dec_ref(v_as_2080_);
lean_dec(v_p_2079_);
lean_dec_ref(v_inst_2078_);
v___x_2087_ = lean_box(v___x_2086_);
v___x_2088_ = lean_apply_2(v_toPure_2085_, lean_box(0), v___x_2087_);
return v___x_2088_;
}
else
{
lean_object* v___x_2089_; lean_object* v___f_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2089_ = lean_box(v___x_2086_);
lean_inc_ref(v_as_2080_);
lean_inc(v_p_2079_);
lean_inc(v_j_2082_);
v___f_2090_ = lean_alloc_closure((void*)(l_Array_anyM_loop___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_2090_, 0, v_j_2082_);
lean_closure_set(v___f_2090_, 1, v_inst_2078_);
lean_closure_set(v___f_2090_, 2, v_p_2079_);
lean_closure_set(v___f_2090_, 3, v_as_2080_);
lean_closure_set(v___f_2090_, 4, v_stop_2081_);
lean_closure_set(v___f_2090_, 5, v_toPure_2085_);
lean_closure_set(v___f_2090_, 6, v___x_2089_);
v___x_2091_ = lean_array_fget(v_as_2080_, v_j_2082_);
lean_dec(v_j_2082_);
lean_dec_ref(v_as_2080_);
v___x_2092_ = lean_apply_1(v_p_2079_, v___x_2091_);
v___x_2093_ = lean_apply_4(v_toBind_2084_, lean_box(0), lean_box(0), v___x_2092_, v___f_2090_);
return v___x_2093_;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0(lean_object* v_j_2094_, lean_object* v_inst_2095_, lean_object* v_p_2096_, lean_object* v_as_2097_, lean_object* v_stop_2098_, lean_object* v_toPure_2099_, uint8_t v___x_2100_, uint8_t v_____do__lift_2101_){
_start:
{
if (v_____do__lift_2101_ == 0)
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
lean_dec(v_toPure_2099_);
v___x_2102_ = lean_unsigned_to_nat(1u);
v___x_2103_ = lean_nat_add(v_j_2094_, v___x_2102_);
v___x_2104_ = l_Array_anyM_loop___redArg(v_inst_2095_, v_p_2096_, v_as_2097_, v_stop_2098_, v___x_2103_);
return v___x_2104_;
}
else
{
lean_object* v___x_2105_; lean_object* v___x_2106_; 
lean_dec(v_stop_2098_);
lean_dec_ref(v_as_2097_);
lean_dec(v_p_2096_);
lean_dec_ref(v_inst_2095_);
v___x_2105_ = lean_box(v___x_2100_);
v___x_2106_ = lean_apply_2(v_toPure_2099_, lean_box(0), v___x_2105_);
return v___x_2106_;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop(lean_object* v_00_u03b1_2107_, lean_object* v_m_2108_, lean_object* v_inst_2109_, lean_object* v_p_2110_, lean_object* v_as_2111_, lean_object* v_stop_2112_, lean_object* v_h_2113_, lean_object* v_j_2114_){
_start:
{
lean_object* v___x_2115_; 
v___x_2115_ = l_Array_anyM_loop___redArg(v_inst_2109_, v_p_2110_, v_as_2111_, v_stop_2112_, v_j_2114_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0(lean_object* v_toPure_2116_, uint8_t v_____do__lift_2117_){
_start:
{
if (v_____do__lift_2117_ == 0)
{
uint8_t v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2118_ = 1;
v___x_2119_ = lean_box(v___x_2118_);
v___x_2120_ = lean_apply_2(v_toPure_2116_, lean_box(0), v___x_2119_);
return v___x_2120_;
}
else
{
uint8_t v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2121_ = 0;
v___x_2122_ = lean_box(v___x_2121_);
v___x_2123_ = lean_apply_2(v_toPure_2116_, lean_box(0), v___x_2122_);
return v___x_2123_;
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0___boxed(lean_object* v_toPure_2124_, lean_object* v_____do__lift_2125_){
_start:
{
uint8_t v_____do__lift_117__boxed_2126_; lean_object* v_res_2127_; 
v_____do__lift_117__boxed_2126_ = lean_unbox(v_____do__lift_2125_);
v_res_2127_ = l_Array_allM___redArg___lam__0(v_toPure_2124_, v_____do__lift_117__boxed_2126_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1(lean_object* v_toPure_2128_, uint8_t v___x_2129_, uint8_t v_____do__lift_2130_){
_start:
{
if (v_____do__lift_2130_ == 0)
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = lean_box(v___x_2129_);
v___x_2132_ = lean_apply_2(v_toPure_2128_, lean_box(0), v___x_2131_);
return v___x_2132_;
}
else
{
uint8_t v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2133_ = 0;
v___x_2134_ = lean_box(v___x_2133_);
v___x_2135_ = lean_apply_2(v_toPure_2128_, lean_box(0), v___x_2134_);
return v___x_2135_;
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1___boxed(lean_object* v_toPure_2136_, lean_object* v___x_2137_, lean_object* v_____do__lift_2138_){
_start:
{
uint8_t v___x_132__boxed_2139_; uint8_t v_____do__lift_133__boxed_2140_; lean_object* v_res_2141_; 
v___x_132__boxed_2139_ = lean_unbox(v___x_2137_);
v_____do__lift_133__boxed_2140_ = lean_unbox(v_____do__lift_2138_);
v_res_2141_ = l_Array_allM___redArg___lam__1(v_toPure_2136_, v___x_132__boxed_2139_, v_____do__lift_133__boxed_2140_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__2(lean_object* v_p_2142_, lean_object* v_toBind_2143_, lean_object* v___f_2144_, lean_object* v_v_2145_){
_start:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = lean_apply_1(v_p_2142_, v_v_2145_);
v___x_2147_ = lean_apply_4(v_toBind_2143_, lean_box(0), lean_box(0), v___x_2146_, v___f_2144_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg(lean_object* v_inst_2148_, lean_object* v_p_2149_, lean_object* v_as_2150_, lean_object* v_start_2151_, lean_object* v_stop_2152_){
_start:
{
lean_object* v_toApplicative_2153_; lean_object* v_toBind_2154_; lean_object* v_toPure_2155_; lean_object* v___f_2156_; uint8_t v___x_2157_; 
v_toApplicative_2153_ = lean_ctor_get(v_inst_2148_, 0);
v_toBind_2154_ = lean_ctor_get(v_inst_2148_, 1);
lean_inc(v_toBind_2154_);
v_toPure_2155_ = lean_ctor_get(v_toApplicative_2153_, 1);
lean_inc(v_toPure_2155_);
v___f_2156_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2156_, 0, v_toPure_2155_);
v___x_2157_ = lean_nat_dec_lt(v_start_2151_, v_stop_2152_);
if (v___x_2157_ == 0)
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
lean_inc(v_toPure_2155_);
lean_dec(v_stop_2152_);
lean_dec_ref(v_as_2150_);
lean_dec(v_p_2149_);
lean_dec_ref(v_inst_2148_);
v___x_2158_ = lean_box(v___x_2157_);
v___x_2159_ = lean_apply_2(v_toPure_2155_, lean_box(0), v___x_2158_);
v___x_2160_ = lean_apply_4(v_toBind_2154_, lean_box(0), lean_box(0), v___x_2159_, v___f_2156_);
return v___x_2160_;
}
else
{
lean_object* v___x_2161_; lean_object* v___f_2162_; lean_object* v___f_2163_; lean_object* v___y_2165_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2161_ = lean_box(v___x_2157_);
lean_inc(v_toPure_2155_);
v___f_2162_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2162_, 0, v_toPure_2155_);
lean_closure_set(v___f_2162_, 1, v___x_2161_);
lean_inc(v_toBind_2154_);
v___f_2163_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2163_, 0, v_p_2149_);
lean_closure_set(v___f_2163_, 1, v_toBind_2154_);
lean_closure_set(v___f_2163_, 2, v___f_2162_);
v___x_2174_ = lean_array_get_size(v_as_2150_);
v___x_2175_ = lean_nat_dec_le(v_stop_2152_, v___x_2174_);
if (v___x_2175_ == 0)
{
lean_dec(v_stop_2152_);
v___y_2165_ = v___x_2174_;
goto v___jp_2164_;
}
else
{
v___y_2165_ = v_stop_2152_;
goto v___jp_2164_;
}
v___jp_2164_:
{
uint8_t v___x_2166_; 
v___x_2166_ = lean_nat_dec_lt(v_start_2151_, v___y_2165_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
lean_inc(v_toPure_2155_);
lean_dec(v___y_2165_);
lean_dec_ref(v___f_2163_);
lean_dec_ref(v_as_2150_);
lean_dec_ref(v_inst_2148_);
v___x_2167_ = lean_box(v___x_2166_);
v___x_2168_ = lean_apply_2(v_toPure_2155_, lean_box(0), v___x_2167_);
v___x_2169_ = lean_apply_4(v_toBind_2154_, lean_box(0), lean_box(0), v___x_2168_, v___f_2156_);
return v___x_2169_;
}
else
{
size_t v___x_2170_; size_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2170_ = lean_usize_of_nat(v_start_2151_);
v___x_2171_ = lean_usize_of_nat(v___y_2165_);
lean_dec(v___y_2165_);
v___x_2172_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_2148_, v___f_2163_, v_as_2150_, v___x_2170_, v___x_2171_);
v___x_2173_ = lean_apply_4(v_toBind_2154_, lean_box(0), lean_box(0), v___x_2172_, v___f_2156_);
return v___x_2173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___boxed(lean_object* v_inst_2176_, lean_object* v_p_2177_, lean_object* v_as_2178_, lean_object* v_start_2179_, lean_object* v_stop_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_Array_allM___redArg(v_inst_2176_, v_p_2177_, v_as_2178_, v_start_2179_, v_stop_2180_);
lean_dec(v_start_2179_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Array_allM(lean_object* v_00_u03b1_2182_, lean_object* v_m_2183_, lean_object* v_inst_2184_, lean_object* v_p_2185_, lean_object* v_as_2186_, lean_object* v_start_2187_, lean_object* v_stop_2188_){
_start:
{
lean_object* v_toApplicative_2189_; lean_object* v_toBind_2190_; lean_object* v_toPure_2191_; lean_object* v___f_2192_; uint8_t v___x_2193_; 
v_toApplicative_2189_ = lean_ctor_get(v_inst_2184_, 0);
v_toBind_2190_ = lean_ctor_get(v_inst_2184_, 1);
lean_inc(v_toBind_2190_);
v_toPure_2191_ = lean_ctor_get(v_toApplicative_2189_, 1);
lean_inc(v_toPure_2191_);
v___f_2192_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2192_, 0, v_toPure_2191_);
v___x_2193_ = lean_nat_dec_lt(v_start_2187_, v_stop_2188_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
lean_inc(v_toPure_2191_);
lean_dec(v_stop_2188_);
lean_dec_ref(v_as_2186_);
lean_dec(v_p_2185_);
lean_dec_ref(v_inst_2184_);
v___x_2194_ = lean_box(v___x_2193_);
v___x_2195_ = lean_apply_2(v_toPure_2191_, lean_box(0), v___x_2194_);
v___x_2196_ = lean_apply_4(v_toBind_2190_, lean_box(0), lean_box(0), v___x_2195_, v___f_2192_);
return v___x_2196_;
}
else
{
lean_object* v___x_2197_; lean_object* v___f_2198_; lean_object* v___f_2199_; lean_object* v___y_2201_; lean_object* v___x_2210_; uint8_t v___x_2211_; 
v___x_2197_ = lean_box(v___x_2193_);
lean_inc(v_toPure_2191_);
v___f_2198_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2198_, 0, v_toPure_2191_);
lean_closure_set(v___f_2198_, 1, v___x_2197_);
lean_inc(v_toBind_2190_);
v___f_2199_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2199_, 0, v_p_2185_);
lean_closure_set(v___f_2199_, 1, v_toBind_2190_);
lean_closure_set(v___f_2199_, 2, v___f_2198_);
v___x_2210_ = lean_array_get_size(v_as_2186_);
v___x_2211_ = lean_nat_dec_le(v_stop_2188_, v___x_2210_);
if (v___x_2211_ == 0)
{
lean_dec(v_stop_2188_);
v___y_2201_ = v___x_2210_;
goto v___jp_2200_;
}
else
{
v___y_2201_ = v_stop_2188_;
goto v___jp_2200_;
}
v___jp_2200_:
{
uint8_t v___x_2202_; 
v___x_2202_ = lean_nat_dec_lt(v_start_2187_, v___y_2201_);
if (v___x_2202_ == 0)
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
lean_inc(v_toPure_2191_);
lean_dec(v___y_2201_);
lean_dec_ref(v___f_2199_);
lean_dec_ref(v_as_2186_);
lean_dec_ref(v_inst_2184_);
v___x_2203_ = lean_box(v___x_2202_);
v___x_2204_ = lean_apply_2(v_toPure_2191_, lean_box(0), v___x_2203_);
v___x_2205_ = lean_apply_4(v_toBind_2190_, lean_box(0), lean_box(0), v___x_2204_, v___f_2192_);
return v___x_2205_;
}
else
{
size_t v___x_2206_; size_t v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2206_ = lean_usize_of_nat(v_start_2187_);
v___x_2207_ = lean_usize_of_nat(v___y_2201_);
lean_dec(v___y_2201_);
v___x_2208_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_2184_, v___f_2199_, v_as_2186_, v___x_2206_, v___x_2207_);
v___x_2209_ = lean_apply_4(v_toBind_2190_, lean_box(0), lean_box(0), v___x_2208_, v___f_2192_);
return v___x_2209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___boxed(lean_object* v_00_u03b1_2212_, lean_object* v_m_2213_, lean_object* v_inst_2214_, lean_object* v_p_2215_, lean_object* v_as_2216_, lean_object* v_start_2217_, lean_object* v_stop_2218_){
_start:
{
lean_object* v_res_2219_; 
v_res_2219_ = l_Array_allM(v_00_u03b1_2212_, v_m_2213_, v_inst_2214_, v_p_2215_, v_as_2216_, v_start_2217_, v_stop_2218_);
lean_dec(v_start_2217_);
return v_res_2219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed(lean_object* v_inst_2220_, lean_object* v_f_2221_, lean_object* v_as_2222_, lean_object* v_n_2223_, lean_object* v_toPure_2224_, lean_object* v_r_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(v_inst_2220_, v_f_2221_, v_as_2222_, v_n_2223_, v_toPure_2224_, v_r_2225_);
lean_dec(v_n_2223_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(lean_object* v_inst_2227_, lean_object* v_f_2228_, lean_object* v_as_2229_, lean_object* v_i_2230_){
_start:
{
lean_object* v_toApplicative_2231_; lean_object* v_toBind_2232_; lean_object* v_toPure_2233_; lean_object* v_zero_2234_; uint8_t v_isZero_2235_; 
v_toApplicative_2231_ = lean_ctor_get(v_inst_2227_, 0);
v_toBind_2232_ = lean_ctor_get(v_inst_2227_, 1);
lean_inc(v_toBind_2232_);
v_toPure_2233_ = lean_ctor_get(v_toApplicative_2231_, 1);
lean_inc(v_toPure_2233_);
v_zero_2234_ = lean_unsigned_to_nat(0u);
v_isZero_2235_ = lean_nat_dec_eq(v_i_2230_, v_zero_2234_);
if (v_isZero_2235_ == 1)
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
lean_dec(v_toBind_2232_);
lean_dec_ref(v_as_2229_);
lean_dec(v_f_2228_);
lean_dec_ref(v_inst_2227_);
v___x_2236_ = lean_box(0);
v___x_2237_ = lean_apply_2(v_toPure_2233_, lean_box(0), v___x_2236_);
return v___x_2237_;
}
else
{
lean_object* v_one_2238_; lean_object* v_n_2239_; lean_object* v___f_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v_one_2238_ = lean_unsigned_to_nat(1u);
v_n_2239_ = lean_nat_sub(v_i_2230_, v_one_2238_);
lean_inc(v_n_2239_);
lean_inc_ref(v_as_2229_);
lean_inc(v_f_2228_);
v___f_2240_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2240_, 0, v_inst_2227_);
lean_closure_set(v___f_2240_, 1, v_f_2228_);
lean_closure_set(v___f_2240_, 2, v_as_2229_);
lean_closure_set(v___f_2240_, 3, v_n_2239_);
lean_closure_set(v___f_2240_, 4, v_toPure_2233_);
v___x_2241_ = lean_array_fget(v_as_2229_, v_n_2239_);
lean_dec(v_n_2239_);
lean_dec_ref(v_as_2229_);
v___x_2242_ = lean_apply_1(v_f_2228_, v___x_2241_);
v___x_2243_ = lean_apply_4(v_toBind_2232_, lean_box(0), lean_box(0), v___x_2242_, v___f_2240_);
return v___x_2243_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(lean_object* v_inst_2244_, lean_object* v_f_2245_, lean_object* v_as_2246_, lean_object* v_n_2247_, lean_object* v_toPure_2248_, lean_object* v_r_2249_){
_start:
{
if (lean_obj_tag(v_r_2249_) == 0)
{
lean_object* v___x_2250_; 
lean_dec(v_toPure_2248_);
v___x_2250_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2244_, v_f_2245_, v_as_2246_, v_n_2247_);
return v___x_2250_;
}
else
{
lean_object* v___x_2251_; 
lean_dec_ref(v_as_2246_);
lean_dec(v_f_2245_);
lean_dec_ref(v_inst_2244_);
v___x_2251_ = lean_apply_2(v_toPure_2248_, lean_box(0), v_r_2249_);
return v___x_2251_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___boxed(lean_object* v_inst_2252_, lean_object* v_f_2253_, lean_object* v_as_2254_, lean_object* v_i_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2252_, v_f_2253_, v_as_2254_, v_i_2255_);
lean_dec(v_i_2255_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object* v_00_u03b1_2257_, lean_object* v_00_u03b2_2258_, lean_object* v_m_2259_, lean_object* v_inst_2260_, lean_object* v_f_2261_, lean_object* v_as_2262_, lean_object* v_i_2263_, lean_object* v_a_2264_){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2260_, v_f_2261_, v_as_2262_, v_i_2263_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___boxed(lean_object* v_00_u03b1_2266_, lean_object* v_00_u03b2_2267_, lean_object* v_m_2268_, lean_object* v_inst_2269_, lean_object* v_f_2270_, lean_object* v_as_2271_, lean_object* v_i_2272_, lean_object* v_a_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(v_00_u03b1_2266_, v_00_u03b2_2267_, v_m_2268_, v_inst_2269_, v_f_2270_, v_as_2271_, v_i_2272_, v_a_2273_);
lean_dec(v_i_2272_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f___redArg(lean_object* v_inst_2275_, lean_object* v_f_2276_, lean_object* v_as_2277_){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2278_ = lean_array_get_size(v_as_2277_);
v___x_2279_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2275_, v_f_2276_, v_as_2277_, v___x_2278_);
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f(lean_object* v_00_u03b1_2280_, lean_object* v_00_u03b2_2281_, lean_object* v_m_2282_, lean_object* v_inst_2283_, lean_object* v_f_2284_, lean_object* v_as_2285_){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = lean_array_get_size(v_as_2285_);
v___x_2287_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2283_, v_f_2284_, v_as_2285_, v___x_2286_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0(lean_object* v_toPure_2288_, lean_object* v_a_2289_, uint8_t v_____do__lift_2290_){
_start:
{
if (v_____do__lift_2290_ == 0)
{
lean_object* v___x_2291_; lean_object* v___x_2292_; 
lean_dec(v_a_2289_);
v___x_2291_ = lean_box(0);
v___x_2292_ = lean_apply_2(v_toPure_2288_, lean_box(0), v___x_2291_);
return v___x_2292_;
}
else
{
lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2293_, 0, v_a_2289_);
v___x_2294_ = lean_apply_2(v_toPure_2288_, lean_box(0), v___x_2293_);
return v___x_2294_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0___boxed(lean_object* v_toPure_2295_, lean_object* v_a_2296_, lean_object* v_____do__lift_2297_){
_start:
{
uint8_t v_____do__lift_60__boxed_2298_; lean_object* v_res_2299_; 
v_____do__lift_60__boxed_2298_ = lean_unbox(v_____do__lift_2297_);
v_res_2299_ = l_Array_findRevM_x3f___redArg___lam__0(v_toPure_2295_, v_a_2296_, v_____do__lift_60__boxed_2298_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__1(lean_object* v_toPure_2300_, lean_object* v_p_2301_, lean_object* v_toBind_2302_, lean_object* v_a_2303_){
_start:
{
lean_object* v___f_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
lean_inc(v_a_2303_);
v___f_2304_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2304_, 0, v_toPure_2300_);
lean_closure_set(v___f_2304_, 1, v_a_2303_);
v___x_2305_ = lean_apply_1(v_p_2301_, v_a_2303_);
v___x_2306_ = lean_apply_4(v_toBind_2302_, lean_box(0), lean_box(0), v___x_2305_, v___f_2304_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg(lean_object* v_inst_2307_, lean_object* v_p_2308_, lean_object* v_as_2309_){
_start:
{
lean_object* v_toApplicative_2310_; lean_object* v_toBind_2311_; lean_object* v_toPure_2312_; lean_object* v___f_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
v_toApplicative_2310_ = lean_ctor_get(v_inst_2307_, 0);
v_toBind_2311_ = lean_ctor_get(v_inst_2307_, 1);
v_toPure_2312_ = lean_ctor_get(v_toApplicative_2310_, 1);
lean_inc(v_toBind_2311_);
lean_inc(v_toPure_2312_);
v___f_2313_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2313_, 0, v_toPure_2312_);
lean_closure_set(v___f_2313_, 1, v_p_2308_);
lean_closure_set(v___f_2313_, 2, v_toBind_2311_);
v___x_2314_ = lean_array_get_size(v_as_2309_);
v___x_2315_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2307_, v___f_2313_, v_as_2309_, v___x_2314_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f(lean_object* v_00_u03b1_2316_, lean_object* v_m_2317_, lean_object* v_inst_2318_, lean_object* v_p_2319_, lean_object* v_as_2320_){
_start:
{
lean_object* v_toApplicative_2321_; lean_object* v_toBind_2322_; lean_object* v_toPure_2323_; lean_object* v___f_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v_toApplicative_2321_ = lean_ctor_get(v_inst_2318_, 0);
v_toBind_2322_ = lean_ctor_get(v_inst_2318_, 1);
v_toPure_2323_ = lean_ctor_get(v_toApplicative_2321_, 1);
lean_inc(v_toBind_2322_);
lean_inc(v_toPure_2323_);
v___f_2324_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2324_, 0, v_toPure_2323_);
lean_closure_set(v___f_2324_, 1, v_p_2319_);
lean_closure_set(v___f_2324_, 2, v_toBind_2322_);
v___x_2325_ = lean_array_get_size(v_as_2320_);
v___x_2326_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2318_, v___f_2324_, v_as_2320_, v___x_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg___lam__0(lean_object* v_f_2327_, lean_object* v_x_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2330_; 
v___x_2330_ = lean_apply_1(v_f_2327_, v___y_2329_);
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg(lean_object* v_inst_2331_, lean_object* v_f_2332_, lean_object* v_as_2333_, lean_object* v_start_2334_, lean_object* v_stop_2335_){
_start:
{
lean_object* v_toApplicative_2336_; lean_object* v_toPure_2337_; lean_object* v___x_2338_; uint8_t v___x_2339_; 
v_toApplicative_2336_ = lean_ctor_get(v_inst_2331_, 0);
v_toPure_2337_ = lean_ctor_get(v_toApplicative_2336_, 1);
v___x_2338_ = lean_box(0);
v___x_2339_ = lean_nat_dec_lt(v_start_2334_, v_stop_2335_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; 
lean_inc(v_toPure_2337_);
lean_dec_ref(v_as_2333_);
lean_dec(v_f_2332_);
lean_dec_ref(v_inst_2331_);
v___x_2340_ = lean_apply_2(v_toPure_2337_, lean_box(0), v___x_2338_);
return v___x_2340_;
}
else
{
lean_object* v___f_2341_; lean_object* v___x_2342_; uint8_t v___x_2343_; 
v___f_2341_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2341_, 0, v_f_2332_);
v___x_2342_ = lean_array_get_size(v_as_2333_);
v___x_2343_ = lean_nat_dec_le(v_stop_2335_, v___x_2342_);
if (v___x_2343_ == 0)
{
uint8_t v___x_2344_; 
v___x_2344_ = lean_nat_dec_lt(v_start_2334_, v___x_2342_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; 
lean_inc(v_toPure_2337_);
lean_dec_ref(v___f_2341_);
lean_dec_ref(v_as_2333_);
lean_dec_ref(v_inst_2331_);
v___x_2345_ = lean_apply_2(v_toPure_2337_, lean_box(0), v___x_2338_);
return v___x_2345_;
}
else
{
size_t v___x_2346_; size_t v___x_2347_; lean_object* v___x_2348_; 
v___x_2346_ = lean_usize_of_nat(v_start_2334_);
v___x_2347_ = lean_usize_of_nat(v___x_2342_);
v___x_2348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2331_, v___f_2341_, v_as_2333_, v___x_2346_, v___x_2347_, v___x_2338_);
return v___x_2348_;
}
}
else
{
size_t v___x_2349_; size_t v___x_2350_; lean_object* v___x_2351_; 
v___x_2349_ = lean_usize_of_nat(v_start_2334_);
v___x_2350_ = lean_usize_of_nat(v_stop_2335_);
v___x_2351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2331_, v___f_2341_, v_as_2333_, v___x_2349_, v___x_2350_, v___x_2338_);
return v___x_2351_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg___boxed(lean_object* v_inst_2352_, lean_object* v_f_2353_, lean_object* v_as_2354_, lean_object* v_start_2355_, lean_object* v_stop_2356_){
_start:
{
lean_object* v_res_2357_; 
v_res_2357_ = l_Array_forM___redArg(v_inst_2352_, v_f_2353_, v_as_2354_, v_start_2355_, v_stop_2356_);
lean_dec(v_stop_2356_);
lean_dec(v_start_2355_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l_Array_forM(lean_object* v_00_u03b1_2358_, lean_object* v_m_2359_, lean_object* v_inst_2360_, lean_object* v_f_2361_, lean_object* v_as_2362_, lean_object* v_start_2363_, lean_object* v_stop_2364_){
_start:
{
lean_object* v_toApplicative_2365_; lean_object* v_toPure_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; 
v_toApplicative_2365_ = lean_ctor_get(v_inst_2360_, 0);
v_toPure_2366_ = lean_ctor_get(v_toApplicative_2365_, 1);
v___x_2367_ = lean_box(0);
v___x_2368_ = lean_nat_dec_lt(v_start_2363_, v_stop_2364_);
if (v___x_2368_ == 0)
{
lean_object* v___x_2369_; 
lean_inc(v_toPure_2366_);
lean_dec_ref(v_as_2362_);
lean_dec(v_f_2361_);
lean_dec_ref(v_inst_2360_);
v___x_2369_ = lean_apply_2(v_toPure_2366_, lean_box(0), v___x_2367_);
return v___x_2369_;
}
else
{
lean_object* v___f_2370_; lean_object* v___x_2371_; uint8_t v___x_2372_; 
v___f_2370_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2370_, 0, v_f_2361_);
v___x_2371_ = lean_array_get_size(v_as_2362_);
v___x_2372_ = lean_nat_dec_le(v_stop_2364_, v___x_2371_);
if (v___x_2372_ == 0)
{
uint8_t v___x_2373_; 
v___x_2373_ = lean_nat_dec_lt(v_start_2363_, v___x_2371_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; 
lean_inc(v_toPure_2366_);
lean_dec_ref(v___f_2370_);
lean_dec_ref(v_as_2362_);
lean_dec_ref(v_inst_2360_);
v___x_2374_ = lean_apply_2(v_toPure_2366_, lean_box(0), v___x_2367_);
return v___x_2374_;
}
else
{
size_t v___x_2375_; size_t v___x_2376_; lean_object* v___x_2377_; 
v___x_2375_ = lean_usize_of_nat(v_start_2363_);
v___x_2376_ = lean_usize_of_nat(v___x_2371_);
v___x_2377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2360_, v___f_2370_, v_as_2362_, v___x_2375_, v___x_2376_, v___x_2367_);
return v___x_2377_;
}
}
else
{
size_t v___x_2378_; size_t v___x_2379_; lean_object* v___x_2380_; 
v___x_2378_ = lean_usize_of_nat(v_start_2363_);
v___x_2379_ = lean_usize_of_nat(v_stop_2364_);
v___x_2380_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2360_, v___f_2370_, v_as_2362_, v___x_2378_, v___x_2379_, v___x_2367_);
return v___x_2380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forM___boxed(lean_object* v_00_u03b1_2381_, lean_object* v_m_2382_, lean_object* v_inst_2383_, lean_object* v_f_2384_, lean_object* v_as_2385_, lean_object* v_start_2386_, lean_object* v_stop_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Array_forM(v_00_u03b1_2381_, v_m_2382_, v_inst_2383_, v_f_2384_, v_as_2385_, v_start_2386_, v_stop_2387_);
lean_dec(v_stop_2387_);
lean_dec(v_start_2386_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg___lam__1(lean_object* v_inst_2389_, lean_object* v_xs_2390_, lean_object* v_f_2391_){
_start:
{
lean_object* v_toApplicative_2392_; lean_object* v_toPure_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; uint8_t v___x_2397_; 
v_toApplicative_2392_ = lean_ctor_get(v_inst_2389_, 0);
v_toPure_2393_ = lean_ctor_get(v_toApplicative_2392_, 1);
v___x_2394_ = lean_unsigned_to_nat(0u);
v___x_2395_ = lean_array_get_size(v_xs_2390_);
v___x_2396_ = lean_box(0);
v___x_2397_ = lean_nat_dec_lt(v___x_2394_, v___x_2395_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; 
lean_inc(v_toPure_2393_);
lean_dec(v_f_2391_);
lean_dec_ref(v_xs_2390_);
lean_dec_ref(v_inst_2389_);
v___x_2398_ = lean_apply_2(v_toPure_2393_, lean_box(0), v___x_2396_);
return v___x_2398_;
}
else
{
lean_object* v___f_2399_; uint8_t v___x_2400_; 
v___f_2399_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2399_, 0, v_f_2391_);
v___x_2400_ = lean_nat_dec_le(v___x_2395_, v___x_2395_);
if (v___x_2400_ == 0)
{
if (v___x_2397_ == 0)
{
lean_object* v___x_2401_; 
lean_inc(v_toPure_2393_);
lean_dec_ref(v___f_2399_);
lean_dec_ref(v_xs_2390_);
lean_dec_ref(v_inst_2389_);
v___x_2401_ = lean_apply_2(v_toPure_2393_, lean_box(0), v___x_2396_);
return v___x_2401_;
}
else
{
size_t v___x_2402_; size_t v___x_2403_; lean_object* v___x_2404_; 
v___x_2402_ = ((size_t)0ULL);
v___x_2403_ = lean_usize_of_nat(v___x_2395_);
v___x_2404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2389_, v___f_2399_, v_xs_2390_, v___x_2402_, v___x_2403_, v___x_2396_);
return v___x_2404_;
}
}
else
{
size_t v___x_2405_; size_t v___x_2406_; lean_object* v___x_2407_; 
v___x_2405_ = ((size_t)0ULL);
v___x_2406_ = lean_usize_of_nat(v___x_2395_);
v___x_2407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2389_, v___f_2399_, v_xs_2390_, v___x_2405_, v___x_2406_, v___x_2396_);
return v___x_2407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg(lean_object* v_inst_2408_){
_start:
{
lean_object* v___f_2409_; 
v___f_2409_ = lean_alloc_closure((void*)(l_Array_instForMOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_2409_, 0, v_inst_2408_);
return v___f_2409_;
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad(lean_object* v_00_u03b1_2410_, lean_object* v_m_2411_, lean_object* v_inst_2412_){
_start:
{
lean_object* v___f_2413_; 
v___f_2413_ = lean_alloc_closure((void*)(l_Array_instForMOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_2413_, 0, v_inst_2412_);
return v___f_2413_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___lam__0(lean_object* v_f_2414_, lean_object* v_a_2415_, lean_object* v_x_2416_){
_start:
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_apply_1(v_f_2414_, v_a_2415_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg(lean_object* v_inst_2418_, lean_object* v_f_2419_, lean_object* v_as_2420_, lean_object* v_start_2421_, lean_object* v_stop_2422_){
_start:
{
lean_object* v_toApplicative_2423_; lean_object* v_toPure_2424_; lean_object* v___f_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v_toApplicative_2423_ = lean_ctor_get(v_inst_2418_, 0);
v_toPure_2424_ = lean_ctor_get(v_toApplicative_2423_, 1);
v___f_2425_ = lean_alloc_closure((void*)(l_Array_forRevM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2425_, 0, v_f_2419_);
v___x_2426_ = lean_box(0);
v___x_2427_ = lean_array_get_size(v_as_2420_);
v___x_2428_ = lean_nat_dec_le(v_start_2421_, v___x_2427_);
if (v___x_2428_ == 0)
{
uint8_t v___x_2429_; 
v___x_2429_ = lean_nat_dec_lt(v_stop_2422_, v___x_2427_);
if (v___x_2429_ == 0)
{
lean_object* v___x_2430_; 
lean_inc(v_toPure_2424_);
lean_dec_ref(v___f_2425_);
lean_dec_ref(v_as_2420_);
lean_dec_ref(v_inst_2418_);
v___x_2430_ = lean_apply_2(v_toPure_2424_, lean_box(0), v___x_2426_);
return v___x_2430_;
}
else
{
size_t v___x_2431_; size_t v___x_2432_; lean_object* v___x_2433_; 
v___x_2431_ = lean_usize_of_nat(v___x_2427_);
v___x_2432_ = lean_usize_of_nat(v_stop_2422_);
v___x_2433_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2418_, v___f_2425_, v_as_2420_, v___x_2431_, v___x_2432_, v___x_2426_);
return v___x_2433_;
}
}
else
{
uint8_t v___x_2434_; 
v___x_2434_ = lean_nat_dec_lt(v_stop_2422_, v_start_2421_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2435_; 
lean_inc(v_toPure_2424_);
lean_dec_ref(v___f_2425_);
lean_dec_ref(v_as_2420_);
lean_dec_ref(v_inst_2418_);
v___x_2435_ = lean_apply_2(v_toPure_2424_, lean_box(0), v___x_2426_);
return v___x_2435_;
}
else
{
size_t v___x_2436_; size_t v___x_2437_; lean_object* v___x_2438_; 
v___x_2436_ = lean_usize_of_nat(v_start_2421_);
v___x_2437_ = lean_usize_of_nat(v_stop_2422_);
v___x_2438_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2418_, v___f_2425_, v_as_2420_, v___x_2436_, v___x_2437_, v___x_2426_);
return v___x_2438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___boxed(lean_object* v_inst_2439_, lean_object* v_f_2440_, lean_object* v_as_2441_, lean_object* v_start_2442_, lean_object* v_stop_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Array_forRevM___redArg(v_inst_2439_, v_f_2440_, v_as_2441_, v_start_2442_, v_stop_2443_);
lean_dec(v_stop_2443_);
lean_dec(v_start_2442_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM(lean_object* v_00_u03b1_2445_, lean_object* v_m_2446_, lean_object* v_inst_2447_, lean_object* v_f_2448_, lean_object* v_as_2449_, lean_object* v_start_2450_, lean_object* v_stop_2451_){
_start:
{
lean_object* v_toApplicative_2452_; lean_object* v_toPure_2453_; lean_object* v___f_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; uint8_t v___x_2457_; 
v_toApplicative_2452_ = lean_ctor_get(v_inst_2447_, 0);
v_toPure_2453_ = lean_ctor_get(v_toApplicative_2452_, 1);
v___f_2454_ = lean_alloc_closure((void*)(l_Array_forRevM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2454_, 0, v_f_2448_);
v___x_2455_ = lean_box(0);
v___x_2456_ = lean_array_get_size(v_as_2449_);
v___x_2457_ = lean_nat_dec_le(v_start_2450_, v___x_2456_);
if (v___x_2457_ == 0)
{
uint8_t v___x_2458_; 
v___x_2458_ = lean_nat_dec_lt(v_stop_2451_, v___x_2456_);
if (v___x_2458_ == 0)
{
lean_object* v___x_2459_; 
lean_inc(v_toPure_2453_);
lean_dec_ref(v___f_2454_);
lean_dec_ref(v_as_2449_);
lean_dec_ref(v_inst_2447_);
v___x_2459_ = lean_apply_2(v_toPure_2453_, lean_box(0), v___x_2455_);
return v___x_2459_;
}
else
{
size_t v___x_2460_; size_t v___x_2461_; lean_object* v___x_2462_; 
v___x_2460_ = lean_usize_of_nat(v___x_2456_);
v___x_2461_ = lean_usize_of_nat(v_stop_2451_);
v___x_2462_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2447_, v___f_2454_, v_as_2449_, v___x_2460_, v___x_2461_, v___x_2455_);
return v___x_2462_;
}
}
else
{
uint8_t v___x_2463_; 
v___x_2463_ = lean_nat_dec_lt(v_stop_2451_, v_start_2450_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; 
lean_inc(v_toPure_2453_);
lean_dec_ref(v___f_2454_);
lean_dec_ref(v_as_2449_);
lean_dec_ref(v_inst_2447_);
v___x_2464_ = lean_apply_2(v_toPure_2453_, lean_box(0), v___x_2455_);
return v___x_2464_;
}
else
{
size_t v___x_2465_; size_t v___x_2466_; lean_object* v___x_2467_; 
v___x_2465_ = lean_usize_of_nat(v_start_2450_);
v___x_2466_ = lean_usize_of_nat(v_stop_2451_);
v___x_2467_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2447_, v___f_2454_, v_as_2449_, v___x_2465_, v___x_2466_, v___x_2455_);
return v___x_2467_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___boxed(lean_object* v_00_u03b1_2468_, lean_object* v_m_2469_, lean_object* v_inst_2470_, lean_object* v_f_2471_, lean_object* v_as_2472_, lean_object* v_start_2473_, lean_object* v_stop_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Array_forRevM(v_00_u03b1_2468_, v_m_2469_, v_inst_2470_, v_f_2471_, v_as_2472_, v_start_2473_, v_stop_2474_);
lean_dec(v_stop_2474_);
lean_dec(v_start_2473_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg___lam__0(lean_object* v_f_2476_, lean_object* v_x1_2477_, lean_object* v_x2_2478_){
_start:
{
lean_object* v___x_2479_; 
v___x_2479_ = lean_apply_2(v_f_2476_, v_x1_2477_, v_x2_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg(lean_object* v_f_2499_, lean_object* v_init_2500_, lean_object* v_as_2501_, lean_object* v_start_2502_, lean_object* v_stop_2503_){
_start:
{
lean_object* v___x_2504_; uint8_t v___x_2505_; 
v___x_2504_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2505_ = lean_nat_dec_lt(v_start_2502_, v_stop_2503_);
if (v___x_2505_ == 0)
{
lean_dec_ref(v_as_2501_);
lean_dec(v_f_2499_);
return v_init_2500_;
}
else
{
lean_object* v___f_2506_; lean_object* v___x_2507_; uint8_t v___x_2508_; 
v___f_2506_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2506_, 0, v_f_2499_);
v___x_2507_ = lean_array_get_size(v_as_2501_);
v___x_2508_ = lean_nat_dec_le(v_stop_2503_, v___x_2507_);
if (v___x_2508_ == 0)
{
uint8_t v___x_2509_; 
v___x_2509_ = lean_nat_dec_lt(v_start_2502_, v___x_2507_);
if (v___x_2509_ == 0)
{
lean_dec_ref(v___f_2506_);
lean_dec_ref(v_as_2501_);
return v_init_2500_;
}
else
{
size_t v___x_2510_; size_t v___x_2511_; lean_object* v___x_2512_; 
v___x_2510_ = lean_usize_of_nat(v_start_2502_);
v___x_2511_ = lean_usize_of_nat(v___x_2507_);
v___x_2512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2504_, v___f_2506_, v_as_2501_, v___x_2510_, v___x_2511_, v_init_2500_);
return v___x_2512_;
}
}
else
{
size_t v___x_2513_; size_t v___x_2514_; lean_object* v___x_2515_; 
v___x_2513_ = lean_usize_of_nat(v_start_2502_);
v___x_2514_ = lean_usize_of_nat(v_stop_2503_);
v___x_2515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2504_, v___f_2506_, v_as_2501_, v___x_2513_, v___x_2514_, v_init_2500_);
return v___x_2515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg___boxed(lean_object* v_f_2516_, lean_object* v_init_2517_, lean_object* v_as_2518_, lean_object* v_start_2519_, lean_object* v_stop_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l_Array_foldl___redArg(v_f_2516_, v_init_2517_, v_as_2518_, v_start_2519_, v_stop_2520_);
lean_dec(v_stop_2520_);
lean_dec(v_start_2519_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl(lean_object* v_00_u03b1_2522_, lean_object* v_00_u03b2_2523_, lean_object* v_f_2524_, lean_object* v_init_2525_, lean_object* v_as_2526_, lean_object* v_start_2527_, lean_object* v_stop_2528_){
_start:
{
lean_object* v___x_2529_; uint8_t v___x_2530_; 
v___x_2529_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2530_ = lean_nat_dec_lt(v_start_2527_, v_stop_2528_);
if (v___x_2530_ == 0)
{
lean_dec_ref(v_as_2526_);
lean_dec(v_f_2524_);
return v_init_2525_;
}
else
{
lean_object* v___f_2531_; lean_object* v___x_2532_; uint8_t v___x_2533_; 
v___f_2531_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2531_, 0, v_f_2524_);
v___x_2532_ = lean_array_get_size(v_as_2526_);
v___x_2533_ = lean_nat_dec_le(v_stop_2528_, v___x_2532_);
if (v___x_2533_ == 0)
{
uint8_t v___x_2534_; 
v___x_2534_ = lean_nat_dec_lt(v_start_2527_, v___x_2532_);
if (v___x_2534_ == 0)
{
lean_dec_ref(v___f_2531_);
lean_dec_ref(v_as_2526_);
return v_init_2525_;
}
else
{
size_t v___x_2535_; size_t v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = lean_usize_of_nat(v_start_2527_);
v___x_2536_ = lean_usize_of_nat(v___x_2532_);
v___x_2537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2529_, v___f_2531_, v_as_2526_, v___x_2535_, v___x_2536_, v_init_2525_);
return v___x_2537_;
}
}
else
{
size_t v___x_2538_; size_t v___x_2539_; lean_object* v___x_2540_; 
v___x_2538_ = lean_usize_of_nat(v_start_2527_);
v___x_2539_ = lean_usize_of_nat(v_stop_2528_);
v___x_2540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2529_, v___f_2531_, v_as_2526_, v___x_2538_, v___x_2539_, v_init_2525_);
return v___x_2540_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldl___boxed(lean_object* v_00_u03b1_2541_, lean_object* v_00_u03b2_2542_, lean_object* v_f_2543_, lean_object* v_init_2544_, lean_object* v_as_2545_, lean_object* v_start_2546_, lean_object* v_stop_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l_Array_foldl(v_00_u03b1_2541_, v_00_u03b2_2542_, v_f_2543_, v_init_2544_, v_as_2545_, v_start_2546_, v_stop_2547_);
lean_dec(v_stop_2547_);
lean_dec(v_start_2546_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l_Array_foldr___redArg(lean_object* v_f_2549_, lean_object* v_init_2550_, lean_object* v_as_2551_, lean_object* v_start_2552_, lean_object* v_stop_2553_){
_start:
{
lean_object* v___f_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; uint8_t v___x_2557_; 
v___f_2554_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2554_, 0, v_f_2549_);
v___x_2555_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2556_ = lean_array_get_size(v_as_2551_);
v___x_2557_ = lean_nat_dec_le(v_start_2552_, v___x_2556_);
if (v___x_2557_ == 0)
{
uint8_t v___x_2558_; 
v___x_2558_ = lean_nat_dec_lt(v_stop_2553_, v___x_2556_);
if (v___x_2558_ == 0)
{
lean_dec_ref(v___f_2554_);
lean_dec_ref(v_as_2551_);
return v_init_2550_;
}
else
{
size_t v___x_2559_; size_t v___x_2560_; lean_object* v___x_2561_; 
v___x_2559_ = lean_usize_of_nat(v___x_2556_);
v___x_2560_ = lean_usize_of_nat(v_stop_2553_);
v___x_2561_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2555_, v___f_2554_, v_as_2551_, v___x_2559_, v___x_2560_, v_init_2550_);
return v___x_2561_;
}
}
else
{
uint8_t v___x_2562_; 
v___x_2562_ = lean_nat_dec_lt(v_stop_2553_, v_start_2552_);
if (v___x_2562_ == 0)
{
lean_dec_ref(v___f_2554_);
lean_dec_ref(v_as_2551_);
return v_init_2550_;
}
else
{
size_t v___x_2563_; size_t v___x_2564_; lean_object* v___x_2565_; 
v___x_2563_ = lean_usize_of_nat(v_start_2552_);
v___x_2564_ = lean_usize_of_nat(v_stop_2553_);
v___x_2565_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2555_, v___f_2554_, v_as_2551_, v___x_2563_, v___x_2564_, v_init_2550_);
return v___x_2565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldr___redArg___boxed(lean_object* v_f_2566_, lean_object* v_init_2567_, lean_object* v_as_2568_, lean_object* v_start_2569_, lean_object* v_stop_2570_){
_start:
{
lean_object* v_res_2571_; 
v_res_2571_ = l_Array_foldr___redArg(v_f_2566_, v_init_2567_, v_as_2568_, v_start_2569_, v_stop_2570_);
lean_dec(v_stop_2570_);
lean_dec(v_start_2569_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l_Array_foldr(lean_object* v_00_u03b1_2572_, lean_object* v_00_u03b2_2573_, lean_object* v_f_2574_, lean_object* v_init_2575_, lean_object* v_as_2576_, lean_object* v_start_2577_, lean_object* v_stop_2578_){
_start:
{
lean_object* v___f_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; uint8_t v___x_2582_; 
v___f_2579_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2579_, 0, v_f_2574_);
v___x_2580_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2581_ = lean_array_get_size(v_as_2576_);
v___x_2582_ = lean_nat_dec_le(v_start_2577_, v___x_2581_);
if (v___x_2582_ == 0)
{
uint8_t v___x_2583_; 
v___x_2583_ = lean_nat_dec_lt(v_stop_2578_, v___x_2581_);
if (v___x_2583_ == 0)
{
lean_dec_ref(v___f_2579_);
lean_dec_ref(v_as_2576_);
return v_init_2575_;
}
else
{
size_t v___x_2584_; size_t v___x_2585_; lean_object* v___x_2586_; 
v___x_2584_ = lean_usize_of_nat(v___x_2581_);
v___x_2585_ = lean_usize_of_nat(v_stop_2578_);
v___x_2586_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2580_, v___f_2579_, v_as_2576_, v___x_2584_, v___x_2585_, v_init_2575_);
return v___x_2586_;
}
}
else
{
uint8_t v___x_2587_; 
v___x_2587_ = lean_nat_dec_lt(v_stop_2578_, v_start_2577_);
if (v___x_2587_ == 0)
{
lean_dec_ref(v___f_2579_);
lean_dec_ref(v_as_2576_);
return v_init_2575_;
}
else
{
size_t v___x_2588_; size_t v___x_2589_; lean_object* v___x_2590_; 
v___x_2588_ = lean_usize_of_nat(v_start_2577_);
v___x_2589_ = lean_usize_of_nat(v_stop_2578_);
v___x_2590_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2580_, v___f_2579_, v_as_2576_, v___x_2588_, v___x_2589_, v_init_2575_);
return v___x_2590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldr___boxed(lean_object* v_00_u03b1_2591_, lean_object* v_00_u03b2_2592_, lean_object* v_f_2593_, lean_object* v_init_2594_, lean_object* v_as_2595_, lean_object* v_start_2596_, lean_object* v_stop_2597_){
_start:
{
lean_object* v_res_2598_; 
v_res_2598_ = l_Array_foldr(v_00_u03b1_2591_, v_00_u03b2_2592_, v_f_2593_, v_init_2594_, v_as_2595_, v_start_2596_, v_stop_2597_);
lean_dec(v_stop_2597_);
lean_dec(v_start_2596_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Array_sum___redArg___lam__0(lean_object* v_inst_2599_, lean_object* v_x1_2600_, lean_object* v_x2_2601_){
_start:
{
lean_object* v___x_2602_; 
v___x_2602_ = lean_apply_2(v_inst_2599_, v_x1_2600_, v_x2_2601_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l_Array_sum___redArg(lean_object* v_inst_2603_, lean_object* v_inst_2604_, lean_object* v_as_2605_){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; 
v___x_2606_ = lean_array_get_size(v_as_2605_);
v___x_2607_ = lean_unsigned_to_nat(0u);
v___x_2608_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2609_ = lean_nat_dec_lt(v___x_2607_, v___x_2606_);
if (v___x_2609_ == 0)
{
lean_dec_ref(v_as_2605_);
lean_dec(v_inst_2603_);
return v_inst_2604_;
}
else
{
lean_object* v___f_2610_; size_t v___x_2611_; size_t v___x_2612_; lean_object* v___x_2613_; 
v___f_2610_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2610_, 0, v_inst_2603_);
v___x_2611_ = lean_usize_of_nat(v___x_2606_);
v___x_2612_ = ((size_t)0ULL);
v___x_2613_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2608_, v___f_2610_, v_as_2605_, v___x_2611_, v___x_2612_, v_inst_2604_);
return v___x_2613_;
}
}
}
LEAN_EXPORT lean_object* l_Array_sum(lean_object* v_00_u03b1_2614_, lean_object* v_inst_2615_, lean_object* v_inst_2616_, lean_object* v_as_2617_){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; uint8_t v___x_2621_; 
v___x_2618_ = lean_array_get_size(v_as_2617_);
v___x_2619_ = lean_unsigned_to_nat(0u);
v___x_2620_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2621_ = lean_nat_dec_lt(v___x_2619_, v___x_2618_);
if (v___x_2621_ == 0)
{
lean_dec_ref(v_as_2617_);
lean_dec(v_inst_2615_);
return v_inst_2616_;
}
else
{
lean_object* v___f_2622_; size_t v___x_2623_; size_t v___x_2624_; lean_object* v___x_2625_; 
v___f_2622_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2622_, 0, v_inst_2615_);
v___x_2623_ = lean_usize_of_nat(v___x_2618_);
v___x_2624_ = ((size_t)0ULL);
v___x_2625_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2620_, v___f_2622_, v_as_2617_, v___x_2623_, v___x_2624_, v_inst_2616_);
return v___x_2625_;
}
}
}
LEAN_EXPORT lean_object* l_Array_prod___redArg(lean_object* v_inst_2626_, lean_object* v_inst_2627_, lean_object* v_as_2628_){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; uint8_t v___x_2632_; 
v___x_2629_ = lean_array_get_size(v_as_2628_);
v___x_2630_ = lean_unsigned_to_nat(0u);
v___x_2631_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2632_ = lean_nat_dec_lt(v___x_2630_, v___x_2629_);
if (v___x_2632_ == 0)
{
lean_dec_ref(v_as_2628_);
lean_dec(v_inst_2626_);
return v_inst_2627_;
}
else
{
lean_object* v___f_2633_; size_t v___x_2634_; size_t v___x_2635_; lean_object* v___x_2636_; 
v___f_2633_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2633_, 0, v_inst_2626_);
v___x_2634_ = lean_usize_of_nat(v___x_2629_);
v___x_2635_ = ((size_t)0ULL);
v___x_2636_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2631_, v___f_2633_, v_as_2628_, v___x_2634_, v___x_2635_, v_inst_2627_);
return v___x_2636_;
}
}
}
LEAN_EXPORT lean_object* l_Array_prod(lean_object* v_00_u03b1_2637_, lean_object* v_inst_2638_, lean_object* v_inst_2639_, lean_object* v_as_2640_){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; uint8_t v___x_2644_; 
v___x_2641_ = lean_array_get_size(v_as_2640_);
v___x_2642_ = lean_unsigned_to_nat(0u);
v___x_2643_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2644_ = lean_nat_dec_lt(v___x_2642_, v___x_2641_);
if (v___x_2644_ == 0)
{
lean_dec_ref(v_as_2640_);
lean_dec(v_inst_2638_);
return v_inst_2639_;
}
else
{
lean_object* v___f_2645_; size_t v___x_2646_; size_t v___x_2647_; lean_object* v___x_2648_; 
v___f_2645_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2645_, 0, v_inst_2638_);
v___x_2646_ = lean_usize_of_nat(v___x_2641_);
v___x_2647_ = ((size_t)0ULL);
v___x_2648_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2643_, v___f_2645_, v_as_2640_, v___x_2646_, v___x_2647_, v_inst_2639_);
return v___x_2648_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0(lean_object* v_p_2649_, lean_object* v_x1_2650_, lean_object* v_x2_2651_){
_start:
{
lean_object* v___x_2652_; uint8_t v___x_2653_; 
v___x_2652_ = lean_apply_1(v_p_2649_, v_x1_2650_);
v___x_2653_ = lean_unbox(v___x_2652_);
if (v___x_2653_ == 0)
{
lean_inc(v_x2_2651_);
return v_x2_2651_;
}
else
{
lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2654_ = lean_unsigned_to_nat(1u);
v___x_2655_ = lean_nat_add(v_x2_2651_, v___x_2654_);
return v___x_2655_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0___boxed(lean_object* v_p_2656_, lean_object* v_x1_2657_, lean_object* v_x2_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Array_countP___redArg___lam__0(v_p_2656_, v_x1_2657_, v_x2_2658_);
lean_dec(v_x2_2658_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg(lean_object* v_p_2660_, lean_object* v_as_2661_){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; uint8_t v___x_2665_; 
v___x_2662_ = lean_unsigned_to_nat(0u);
v___x_2663_ = lean_array_get_size(v_as_2661_);
v___x_2664_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2665_ = lean_nat_dec_lt(v___x_2662_, v___x_2663_);
if (v___x_2665_ == 0)
{
lean_dec_ref(v_as_2661_);
lean_dec_ref(v_p_2660_);
return v___x_2662_;
}
else
{
lean_object* v___f_2666_; size_t v___x_2667_; size_t v___x_2668_; lean_object* v___x_2669_; 
v___f_2666_ = lean_alloc_closure((void*)(l_Array_countP___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2666_, 0, v_p_2660_);
v___x_2667_ = lean_usize_of_nat(v___x_2663_);
v___x_2668_ = ((size_t)0ULL);
v___x_2669_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2664_, v___f_2666_, v_as_2661_, v___x_2667_, v___x_2668_, v___x_2662_);
return v___x_2669_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP(lean_object* v_00_u03b1_2670_, lean_object* v_p_2671_, lean_object* v_as_2672_){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; uint8_t v___x_2676_; 
v___x_2673_ = lean_unsigned_to_nat(0u);
v___x_2674_ = lean_array_get_size(v_as_2672_);
v___x_2675_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2676_ = lean_nat_dec_lt(v___x_2673_, v___x_2674_);
if (v___x_2676_ == 0)
{
lean_dec_ref(v_as_2672_);
lean_dec_ref(v_p_2671_);
return v___x_2673_;
}
else
{
lean_object* v___f_2677_; size_t v___x_2678_; size_t v___x_2679_; lean_object* v___x_2680_; 
v___f_2677_ = lean_alloc_closure((void*)(l_Array_countP___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2677_, 0, v_p_2671_);
v___x_2678_ = lean_usize_of_nat(v___x_2674_);
v___x_2679_ = ((size_t)0ULL);
v___x_2680_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2675_, v___f_2677_, v_as_2672_, v___x_2678_, v___x_2679_, v___x_2673_);
return v___x_2680_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0(lean_object* v_inst_2681_, lean_object* v_a_2682_, lean_object* v_x1_2683_, lean_object* v_x2_2684_){
_start:
{
lean_object* v___x_2685_; uint8_t v___x_2686_; 
v___x_2685_ = lean_apply_2(v_inst_2681_, v_x1_2683_, v_a_2682_);
v___x_2686_ = lean_unbox(v___x_2685_);
if (v___x_2686_ == 0)
{
lean_inc(v_x2_2684_);
return v_x2_2684_;
}
else
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2687_ = lean_unsigned_to_nat(1u);
v___x_2688_ = lean_nat_add(v_x2_2684_, v___x_2687_);
return v___x_2688_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0___boxed(lean_object* v_inst_2689_, lean_object* v_a_2690_, lean_object* v_x1_2691_, lean_object* v_x2_2692_){
_start:
{
lean_object* v_res_2693_; 
v_res_2693_ = l_Array_count___redArg___lam__0(v_inst_2689_, v_a_2690_, v_x1_2691_, v_x2_2692_);
lean_dec(v_x2_2692_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg(lean_object* v_inst_2694_, lean_object* v_a_2695_, lean_object* v_as_2696_){
_start:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; 
v___x_2697_ = lean_unsigned_to_nat(0u);
v___x_2698_ = lean_array_get_size(v_as_2696_);
v___x_2699_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2700_ = lean_nat_dec_lt(v___x_2697_, v___x_2698_);
if (v___x_2700_ == 0)
{
lean_dec_ref(v_as_2696_);
lean_dec(v_a_2695_);
lean_dec_ref(v_inst_2694_);
return v___x_2697_;
}
else
{
lean_object* v___f_2701_; size_t v___x_2702_; size_t v___x_2703_; lean_object* v___x_2704_; 
v___f_2701_ = lean_alloc_closure((void*)(l_Array_count___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2701_, 0, v_inst_2694_);
lean_closure_set(v___f_2701_, 1, v_a_2695_);
v___x_2702_ = lean_usize_of_nat(v___x_2698_);
v___x_2703_ = ((size_t)0ULL);
v___x_2704_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2699_, v___f_2701_, v_as_2696_, v___x_2702_, v___x_2703_, v___x_2697_);
return v___x_2704_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count(lean_object* v_00_u03b1_2705_, lean_object* v_inst_2706_, lean_object* v_a_2707_, lean_object* v_as_2708_){
_start:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; uint8_t v___x_2712_; 
v___x_2709_ = lean_unsigned_to_nat(0u);
v___x_2710_ = lean_array_get_size(v_as_2708_);
v___x_2711_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2712_ = lean_nat_dec_lt(v___x_2709_, v___x_2710_);
if (v___x_2712_ == 0)
{
lean_dec_ref(v_as_2708_);
lean_dec(v_a_2707_);
lean_dec_ref(v_inst_2706_);
return v___x_2709_;
}
else
{
lean_object* v___f_2713_; size_t v___x_2714_; size_t v___x_2715_; lean_object* v___x_2716_; 
v___f_2713_ = lean_alloc_closure((void*)(l_Array_count___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2713_, 0, v_inst_2706_);
lean_closure_set(v___f_2713_, 1, v_a_2707_);
v___x_2714_ = lean_usize_of_nat(v___x_2710_);
v___x_2715_ = ((size_t)0ULL);
v___x_2716_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2711_, v___f_2713_, v_as_2708_, v___x_2714_, v___x_2715_, v___x_2709_);
return v___x_2716_;
}
}
}
LEAN_EXPORT lean_object* l_Array_map___redArg___lam__0(lean_object* v_f_2717_, lean_object* v_x_2718_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = lean_apply_1(v_f_2717_, v_x_2718_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Array_map___redArg(lean_object* v_f_2720_, lean_object* v_as_2721_){
_start:
{
lean_object* v___f_2722_; lean_object* v___x_2723_; size_t v_sz_2724_; size_t v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___f_2722_ = lean_alloc_closure((void*)(l_Array_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2722_, 0, v_f_2720_);
v___x_2723_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2724_ = lean_array_size(v_as_2721_);
v___x_2725_ = ((size_t)0ULL);
v___x_2726_ = l_unsafeCast___redArg(v_as_2721_);
v___x_2727_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2723_, v___f_2722_, v_sz_2724_, v___x_2725_, v___x_2726_);
v___x_2728_ = l_unsafeCast___redArg(v___x_2727_);
lean_dec(v___x_2727_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Array_map___redArg___boxed(lean_object* v_f_2729_, lean_object* v_as_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Array_map___redArg(v_f_2729_, v_as_2730_);
lean_dec_ref(v_as_2730_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Array_map(lean_object* v_00_u03b1_2732_, lean_object* v_00_u03b2_2733_, lean_object* v_f_2734_, lean_object* v_as_2735_){
_start:
{
lean_object* v___f_2736_; lean_object* v___x_2737_; size_t v_sz_2738_; size_t v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___f_2736_ = lean_alloc_closure((void*)(l_Array_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2736_, 0, v_f_2734_);
v___x_2737_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2738_ = lean_array_size(v_as_2735_);
v___x_2739_ = ((size_t)0ULL);
v___x_2740_ = l_unsafeCast___redArg(v_as_2735_);
v___x_2741_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2737_, v___f_2736_, v_sz_2738_, v___x_2739_, v___x_2740_);
v___x_2742_ = l_unsafeCast___redArg(v___x_2741_);
lean_dec(v___x_2741_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Array_map___boxed(lean_object* v_00_u03b1_2743_, lean_object* v_00_u03b2_2744_, lean_object* v_f_2745_, lean_object* v_as_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Array_map(v_00_u03b1_2743_, v_00_u03b2_2744_, v_f_2745_, v_as_2746_);
lean_dec_ref(v_as_2746_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0(lean_object* v___y_2748_, lean_object* v_x_2749_){
_start:
{
lean_inc(v___y_2748_);
return v___y_2748_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0___boxed(lean_object* v___y_2750_, lean_object* v_x_2751_){
_start:
{
lean_object* v_res_2752_; 
v_res_2752_ = l_Array_instFunctor___lam__0(v___y_2750_, v_x_2751_);
lean_dec(v_x_2751_);
lean_dec(v___y_2750_);
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__1(lean_object* v_00_u03b1_2753_, lean_object* v_00_u03b2_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
lean_object* v___f_2757_; lean_object* v___x_2758_; size_t v_sz_2759_; size_t v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___f_2757_ = lean_alloc_closure((void*)(l_Array_instFunctor___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2757_, 0, v___y_2755_);
v___x_2758_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2759_ = lean_array_size(v___y_2756_);
v___x_2760_ = ((size_t)0ULL);
v___x_2761_ = l_unsafeCast___redArg(v___y_2756_);
v___x_2762_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2758_, v___f_2757_, v_sz_2759_, v___x_2760_, v___x_2761_);
v___x_2763_ = l_unsafeCast___redArg(v___x_2762_);
lean_dec(v___x_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__1___boxed(lean_object* v_00_u03b1_2764_, lean_object* v_00_u03b2_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Array_instFunctor___lam__1(v_00_u03b1_2764_, v_00_u03b2_2765_, v___y_2766_, v___y_2767_);
lean_dec_ref(v___y_2767_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg___lam__0(lean_object* v_f_2775_, lean_object* v_x1_2776_, lean_object* v_x2_2777_, lean_object* v_x3_2778_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = lean_apply_3(v_f_2775_, v_x1_2776_, v_x2_2777_, lean_box(0));
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg(lean_object* v_as_2780_, lean_object* v_f_2781_){
_start:
{
lean_object* v___f_2782_; lean_object* v___x_2783_; size_t v_sz_2784_; size_t v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___f_2782_ = lean_alloc_closure((void*)(l_Array_mapFinIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2782_, 0, v_f_2781_);
v___x_2783_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2784_ = lean_array_size(v_as_2780_);
v___x_2785_ = ((size_t)0ULL);
v___x_2786_ = l_unsafeCast___redArg(v_as_2780_);
v___x_2787_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2783_, v___f_2782_, v_sz_2784_, v___x_2785_, v___x_2786_);
v___x_2788_ = l_unsafeCast___redArg(v___x_2787_);
lean_dec(v___x_2787_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg___boxed(lean_object* v_as_2789_, lean_object* v_f_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Array_mapFinIdx___redArg(v_as_2789_, v_f_2790_);
lean_dec_ref(v_as_2789_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx(lean_object* v_00_u03b1_2792_, lean_object* v_00_u03b2_2793_, lean_object* v_as_2794_, lean_object* v_f_2795_){
_start:
{
lean_object* v___f_2796_; lean_object* v___x_2797_; size_t v_sz_2798_; size_t v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___f_2796_ = lean_alloc_closure((void*)(l_Array_mapFinIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2796_, 0, v_f_2795_);
v___x_2797_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2798_ = lean_array_size(v_as_2794_);
v___x_2799_ = ((size_t)0ULL);
v___x_2800_ = l_unsafeCast___redArg(v_as_2794_);
v___x_2801_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2797_, v___f_2796_, v_sz_2798_, v___x_2799_, v___x_2800_);
v___x_2802_ = l_unsafeCast___redArg(v___x_2801_);
lean_dec(v___x_2801_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx___boxed(lean_object* v_00_u03b1_2803_, lean_object* v_00_u03b2_2804_, lean_object* v_as_2805_, lean_object* v_f_2806_){
_start:
{
lean_object* v_res_2807_; 
v_res_2807_ = l_Array_mapFinIdx(v_00_u03b1_2803_, v_00_u03b2_2804_, v_as_2805_, v_f_2806_);
lean_dec_ref(v_as_2805_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdx___redArg(lean_object* v_f_2808_, lean_object* v_as_2809_){
_start:
{
lean_object* v___f_2810_; lean_object* v___x_2811_; size_t v_sz_2812_; size_t v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___f_2810_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2810_, 0, v_f_2808_);
v___x_2811_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2812_ = lean_array_size(v_as_2809_);
v___x_2813_ = ((size_t)0ULL);
v___x_2814_ = l_unsafeCast___redArg(v_as_2809_);
v___x_2815_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2811_, v___f_2810_, v_sz_2812_, v___x_2813_, v___x_2814_);
v___x_2816_ = l_unsafeCast___redArg(v___x_2815_);
lean_dec(v___x_2815_);
return v___x_2816_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdx___redArg___boxed(lean_object* v_f_2817_, lean_object* v_as_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l_Array_mapIdx___redArg(v_f_2817_, v_as_2818_);
lean_dec_ref(v_as_2818_);
return v_res_2819_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdx(lean_object* v_00_u03b1_2820_, lean_object* v_00_u03b2_2821_, lean_object* v_f_2822_, lean_object* v_as_2823_){
_start:
{
lean_object* v___f_2824_; lean_object* v___x_2825_; size_t v_sz_2826_; size_t v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___f_2824_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2824_, 0, v_f_2822_);
v___x_2825_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2826_ = lean_array_size(v_as_2823_);
v___x_2827_ = ((size_t)0ULL);
v___x_2828_ = l_unsafeCast___redArg(v_as_2823_);
v___x_2829_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2825_, v___f_2824_, v_sz_2826_, v___x_2827_, v___x_2828_);
v___x_2830_ = l_unsafeCast___redArg(v___x_2829_);
lean_dec(v___x_2829_);
return v___x_2830_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdx___boxed(lean_object* v_00_u03b1_2831_, lean_object* v_00_u03b2_2832_, lean_object* v_f_2833_, lean_object* v_as_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l_Array_mapIdx(v_00_u03b1_2831_, v_00_u03b2_2832_, v_f_2833_, v_as_2834_);
lean_dec_ref(v_as_2834_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(lean_object* v_start_2836_, size_t v_sz_2837_, size_t v_i_2838_, lean_object* v_bs_2839_){
_start:
{
uint8_t v___x_2840_; 
v___x_2840_ = lean_usize_dec_lt(v_i_2838_, v_sz_2837_);
if (v___x_2840_ == 0)
{
lean_object* v___x_2841_; 
v___x_2841_ = l_unsafeCast___redArg(v_bs_2839_);
lean_dec_ref(v_bs_2839_);
return v___x_2841_;
}
else
{
lean_object* v_v_2842_; lean_object* v___x_2843_; lean_object* v_bs_x27_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; size_t v___x_2849_; size_t v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v_v_2842_ = lean_array_uget(v_bs_2839_, v_i_2838_);
v___x_2843_ = lean_unsigned_to_nat(0u);
v_bs_x27_2844_ = lean_array_uset(v_bs_2839_, v_i_2838_, v___x_2843_);
v___x_2845_ = lean_usize_to_nat(v_i_2838_);
v___x_2846_ = l_unsafeCast___redArg(v_v_2842_);
lean_dec(v_v_2842_);
v___x_2847_ = lean_nat_add(v_start_2836_, v___x_2845_);
lean_dec(v___x_2845_);
v___x_2848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = ((size_t)1ULL);
v___x_2850_ = lean_usize_add(v_i_2838_, v___x_2849_);
v___x_2851_ = l_unsafeCast___redArg(v___x_2848_);
lean_dec_ref_known(v___x_2848_, 2);
v___x_2852_ = lean_array_uset(v_bs_x27_2844_, v_i_2838_, v___x_2851_);
v_i_2838_ = v___x_2850_;
v_bs_2839_ = v___x_2852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg___boxed(lean_object* v_start_2854_, lean_object* v_sz_2855_, lean_object* v_i_2856_, lean_object* v_bs_2857_){
_start:
{
size_t v_sz_boxed_2858_; size_t v_i_boxed_2859_; lean_object* v_res_2860_; 
v_sz_boxed_2858_ = lean_unbox_usize(v_sz_2855_);
lean_dec(v_sz_2855_);
v_i_boxed_2859_ = lean_unbox_usize(v_i_2856_);
lean_dec(v_i_2856_);
v_res_2860_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2854_, v_sz_boxed_2858_, v_i_boxed_2859_, v_bs_2857_);
lean_dec(v_start_2854_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg(lean_object* v_xs_2861_, lean_object* v_start_2862_){
_start:
{
size_t v_sz_2863_; size_t v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; 
v_sz_2863_ = lean_array_size(v_xs_2861_);
v___x_2864_ = ((size_t)0ULL);
v___x_2865_ = l_unsafeCast___redArg(v_xs_2861_);
v___x_2866_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2862_, v_sz_2863_, v___x_2864_, v___x_2865_);
v___x_2867_ = l_unsafeCast___redArg(v___x_2866_);
lean_dec_ref(v___x_2866_);
return v___x_2867_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg___boxed(lean_object* v_xs_2868_, lean_object* v_start_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Array_zipIdx___redArg(v_xs_2868_, v_start_2869_);
lean_dec(v_start_2869_);
lean_dec_ref(v_xs_2868_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx(lean_object* v_00_u03b1_2871_, lean_object* v_xs_2872_, lean_object* v_start_2873_){
_start:
{
lean_object* v___x_2874_; 
v___x_2874_ = l_Array_zipIdx___redArg(v_xs_2872_, v_start_2873_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___boxed(lean_object* v_00_u03b1_2875_, lean_object* v_xs_2876_, lean_object* v_start_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Array_zipIdx(v_00_u03b1_2875_, v_xs_2876_, v_start_2877_);
lean_dec(v_start_2877_);
lean_dec_ref(v_xs_2876_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(lean_object* v_00_u03b1_2879_, lean_object* v_start_2880_, lean_object* v_as_2881_, size_t v_sz_2882_, size_t v_i_2883_, lean_object* v_bs_2884_){
_start:
{
lean_object* v___x_2885_; 
v___x_2885_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2880_, v_sz_2882_, v_i_2883_, v_bs_2884_);
return v___x_2885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___boxed(lean_object* v_00_u03b1_2886_, lean_object* v_start_2887_, lean_object* v_as_2888_, lean_object* v_sz_2889_, lean_object* v_i_2890_, lean_object* v_bs_2891_){
_start:
{
size_t v_sz_boxed_2892_; size_t v_i_boxed_2893_; lean_object* v_res_2894_; 
v_sz_boxed_2892_ = lean_unbox_usize(v_sz_2889_);
lean_dec(v_sz_2889_);
v_i_boxed_2893_ = lean_unbox_usize(v_i_2890_);
lean_dec(v_i_2890_);
v_res_2894_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(v_00_u03b1_2886_, v_start_2887_, v_as_2888_, v_sz_boxed_2892_, v_i_boxed_2893_, v_bs_2891_);
lean_dec_ref(v_as_2888_);
lean_dec(v_start_2887_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0(lean_object* v_p_2895_, lean_object* v___x_2896_, lean_object* v___x_2897_, lean_object* v_a_2898_, lean_object* v_x_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v___x_2901_; uint8_t v___x_2902_; 
lean_inc(v_a_2898_);
v___x_2901_ = lean_apply_1(v_p_2895_, v_a_2898_);
v___x_2902_ = lean_unbox(v___x_2901_);
if (v___x_2902_ == 0)
{
lean_object* v___x_2903_; 
lean_dec(v_a_2898_);
v___x_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2896_);
return v___x_2903_;
}
else
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
lean_dec_ref(v___x_2896_);
v___x_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2904_, 0, v_a_2898_);
v___x_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2904_);
v___x_2906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
lean_ctor_set(v___x_2906_, 1, v___x_2897_);
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
return v___x_2907_;
}
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0___boxed(lean_object* v_p_2908_, lean_object* v___x_2909_, lean_object* v___x_2910_, lean_object* v_a_2911_, lean_object* v_x_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = l_Array_find_x3f___redArg___lam__0(v_p_2908_, v___x_2909_, v___x_2910_, v_a_2911_, v_x_2912_, v___y_2913_);
lean_dec_ref(v___y_2913_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg(lean_object* v_p_2915_, lean_object* v_as_2916_){
_start:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___f_2921_; size_t v_sz_2922_; size_t v___x_2923_; lean_object* v___x_2924_; lean_object* v_fst_2925_; 
v___x_2917_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2918_ = lean_box(0);
v___x_2919_ = lean_box(0);
v___x_2920_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2921_ = lean_alloc_closure((void*)(l_Array_find_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2921_, 0, v_p_2915_);
lean_closure_set(v___f_2921_, 1, v___x_2920_);
lean_closure_set(v___f_2921_, 2, v___x_2919_);
v_sz_2922_ = lean_array_size(v_as_2916_);
v___x_2923_ = ((size_t)0ULL);
v___x_2924_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2917_, v_as_2916_, v___f_2921_, v_sz_2922_, v___x_2923_, v___x_2920_);
v_fst_2925_ = lean_ctor_get(v___x_2924_, 0);
lean_inc(v_fst_2925_);
lean_dec(v___x_2924_);
if (lean_obj_tag(v_fst_2925_) == 0)
{
return v___x_2918_;
}
else
{
lean_object* v_val_2926_; 
v_val_2926_ = lean_ctor_get(v_fst_2925_, 0);
lean_inc(v_val_2926_);
lean_dec_ref_known(v_fst_2925_, 1);
return v_val_2926_;
}
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f(lean_object* v_00_u03b1_2927_, lean_object* v_p_2928_, lean_object* v_as_2929_){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___f_2934_; size_t v_sz_2935_; size_t v___x_2936_; lean_object* v___x_2937_; lean_object* v_fst_2938_; 
v___x_2930_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2931_ = lean_box(0);
v___x_2932_ = lean_box(0);
v___x_2933_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2934_ = lean_alloc_closure((void*)(l_Array_find_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2934_, 0, v_p_2928_);
lean_closure_set(v___f_2934_, 1, v___x_2933_);
lean_closure_set(v___f_2934_, 2, v___x_2932_);
v_sz_2935_ = lean_array_size(v_as_2929_);
v___x_2936_ = ((size_t)0ULL);
v___x_2937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2930_, v_as_2929_, v___f_2934_, v_sz_2935_, v___x_2936_, v___x_2933_);
v_fst_2938_ = lean_ctor_get(v___x_2937_, 0);
lean_inc(v_fst_2938_);
lean_dec(v___x_2937_);
if (lean_obj_tag(v_fst_2938_) == 0)
{
return v___x_2931_;
}
else
{
lean_object* v_val_2939_; 
v_val_2939_ = lean_ctor_get(v_fst_2938_, 0);
lean_inc(v_val_2939_);
lean_dec_ref_known(v_fst_2938_, 1);
return v_val_2939_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0(lean_object* v_f_2940_, lean_object* v___x_2941_, lean_object* v___x_2942_, lean_object* v_a_2943_, lean_object* v_x_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_apply_1(v_f_2940_, v_a_2943_);
if (lean_obj_tag(v___x_2946_) == 1)
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
lean_dec_ref(v___x_2942_);
v___x_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
v___x_2948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
lean_ctor_set(v___x_2948_, 1, v___x_2941_);
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
return v___x_2949_;
}
else
{
lean_object* v___x_2950_; 
lean_dec(v___x_2946_);
v___x_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2942_);
return v___x_2950_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0___boxed(lean_object* v_f_2951_, lean_object* v___x_2952_, lean_object* v___x_2953_, lean_object* v_a_2954_, lean_object* v_x_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l_Array_findSome_x3f___redArg___lam__0(v_f_2951_, v___x_2952_, v___x_2953_, v_a_2954_, v_x_2955_, v___y_2956_);
lean_dec_ref(v___y_2956_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg(lean_object* v_f_2958_, lean_object* v_as_2959_){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___f_2964_; size_t v_sz_2965_; size_t v___x_2966_; lean_object* v___x_2967_; lean_object* v_fst_2968_; 
v___x_2960_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2961_ = lean_box(0);
v___x_2962_ = lean_box(0);
v___x_2963_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2964_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2964_, 0, v_f_2958_);
lean_closure_set(v___f_2964_, 1, v___x_2962_);
lean_closure_set(v___f_2964_, 2, v___x_2963_);
v_sz_2965_ = lean_array_size(v_as_2959_);
v___x_2966_ = ((size_t)0ULL);
v___x_2967_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2960_, v_as_2959_, v___f_2964_, v_sz_2965_, v___x_2966_, v___x_2963_);
v_fst_2968_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_fst_2968_);
lean_dec(v___x_2967_);
if (lean_obj_tag(v_fst_2968_) == 0)
{
return v___x_2961_;
}
else
{
lean_object* v_val_2969_; 
v_val_2969_ = lean_ctor_get(v_fst_2968_, 0);
lean_inc(v_val_2969_);
lean_dec_ref_known(v_fst_2968_, 1);
return v_val_2969_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f(lean_object* v_00_u03b1_2970_, lean_object* v_00_u03b2_2971_, lean_object* v_f_2972_, lean_object* v_as_2973_){
_start:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___f_2978_; size_t v_sz_2979_; size_t v___x_2980_; lean_object* v___x_2981_; lean_object* v_fst_2982_; 
v___x_2974_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2975_ = lean_box(0);
v___x_2976_ = lean_box(0);
v___x_2977_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2978_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2978_, 0, v_f_2972_);
lean_closure_set(v___f_2978_, 1, v___x_2976_);
lean_closure_set(v___f_2978_, 2, v___x_2977_);
v_sz_2979_ = lean_array_size(v_as_2973_);
v___x_2980_ = ((size_t)0ULL);
v___x_2981_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2974_, v_as_2973_, v___f_2978_, v_sz_2979_, v___x_2980_, v___x_2977_);
v_fst_2982_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_fst_2982_);
lean_dec(v___x_2981_);
if (lean_obj_tag(v_fst_2982_) == 0)
{
return v___x_2975_;
}
else
{
lean_object* v_val_2983_; 
v_val_2983_ = lean_ctor_get(v_fst_2982_, 0);
lean_inc(v_val_2983_);
lean_dec_ref_known(v_fst_2982_, 1);
return v_val_2983_;
}
}
}
static lean_object* _init_l_Array_findSome_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2986_ = ((lean_object*)(l_Array_findSome_x21___redArg___closed__1));
v___x_2987_ = lean_unsigned_to_nat(14u);
v___x_2988_ = lean_unsigned_to_nat(1279u);
v___x_2989_ = ((lean_object*)(l_Array_findSome_x21___redArg___closed__0));
v___x_2990_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_2991_ = l_mkPanicMessageWithDecl(v___x_2990_, v___x_2989_, v___x_2988_, v___x_2987_, v___x_2986_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg(lean_object* v_inst_2992_, lean_object* v_f_2993_, lean_object* v_xs_2994_){
_start:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___f_3001_; size_t v_sz_3002_; size_t v___x_3003_; lean_object* v___x_3004_; lean_object* v_fst_3005_; 
v___x_2998_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2999_ = lean_box(0);
v___x_3000_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_3001_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_3001_, 0, v_f_2993_);
lean_closure_set(v___f_3001_, 1, v___x_2999_);
lean_closure_set(v___f_3001_, 2, v___x_3000_);
v_sz_3002_ = lean_array_size(v_xs_2994_);
v___x_3003_ = ((size_t)0ULL);
v___x_3004_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2998_, v_xs_2994_, v___f_3001_, v_sz_3002_, v___x_3003_, v___x_3000_);
v_fst_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_fst_3005_);
lean_dec(v___x_3004_);
if (lean_obj_tag(v_fst_3005_) == 0)
{
goto v___jp_2995_;
}
else
{
lean_object* v_val_3006_; 
v_val_3006_ = lean_ctor_get(v_fst_3005_, 0);
lean_inc(v_val_3006_);
lean_dec_ref_known(v_fst_3005_, 1);
if (lean_obj_tag(v_val_3006_) == 0)
{
goto v___jp_2995_;
}
else
{
lean_object* v_val_3007_; 
v_val_3007_ = lean_ctor_get(v_val_3006_, 0);
lean_inc(v_val_3007_);
lean_dec_ref_known(v_val_3006_, 1);
return v_val_3007_;
}
}
v___jp_2995_:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2996_ = lean_obj_once(&l_Array_findSome_x21___redArg___closed__2, &l_Array_findSome_x21___redArg___closed__2_once, _init_l_Array_findSome_x21___redArg___closed__2);
v___x_2997_ = l_panic___redArg(v_inst_2992_, v___x_2996_);
return v___x_2997_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg___boxed(lean_object* v_inst_3008_, lean_object* v_f_3009_, lean_object* v_xs_3010_){
_start:
{
lean_object* v_res_3011_; 
v_res_3011_ = l_Array_findSome_x21___redArg(v_inst_3008_, v_f_3009_, v_xs_3010_);
lean_dec(v_inst_3008_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21(lean_object* v_00_u03b1_3012_, lean_object* v_00_u03b2_3013_, lean_object* v_inst_3014_, lean_object* v_f_3015_, lean_object* v_xs_3016_){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___f_3023_; size_t v_sz_3024_; size_t v___x_3025_; lean_object* v___x_3026_; lean_object* v_fst_3027_; 
v___x_3020_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3021_ = lean_box(0);
v___x_3022_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_3023_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_3023_, 0, v_f_3015_);
lean_closure_set(v___f_3023_, 1, v___x_3021_);
lean_closure_set(v___f_3023_, 2, v___x_3022_);
v_sz_3024_ = lean_array_size(v_xs_3016_);
v___x_3025_ = ((size_t)0ULL);
v___x_3026_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_3020_, v_xs_3016_, v___f_3023_, v_sz_3024_, v___x_3025_, v___x_3022_);
v_fst_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_fst_3027_);
lean_dec(v___x_3026_);
if (lean_obj_tag(v_fst_3027_) == 0)
{
goto v___jp_3017_;
}
else
{
lean_object* v_val_3028_; 
v_val_3028_ = lean_ctor_get(v_fst_3027_, 0);
lean_inc(v_val_3028_);
lean_dec_ref_known(v_fst_3027_, 1);
if (lean_obj_tag(v_val_3028_) == 0)
{
goto v___jp_3017_;
}
else
{
lean_object* v_val_3029_; 
v_val_3029_ = lean_ctor_get(v_val_3028_, 0);
lean_inc(v_val_3029_);
lean_dec_ref_known(v_val_3028_, 1);
return v_val_3029_;
}
}
v___jp_3017_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3018_ = lean_obj_once(&l_Array_findSome_x21___redArg___closed__2, &l_Array_findSome_x21___redArg___closed__2_once, _init_l_Array_findSome_x21___redArg___closed__2);
v___x_3019_ = l_panic___redArg(v_inst_3014_, v___x_3018_);
return v___x_3019_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___boxed(lean_object* v_00_u03b1_3030_, lean_object* v_00_u03b2_3031_, lean_object* v_inst_3032_, lean_object* v_f_3033_, lean_object* v_xs_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Array_findSome_x21(v_00_u03b1_3030_, v_00_u03b2_3031_, v_inst_3032_, v_f_3033_, v_xs_3034_);
lean_dec(v_inst_3032_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg___lam__0(lean_object* v_f_3036_, lean_object* v_x_3037_){
_start:
{
lean_object* v___x_3038_; 
v___x_3038_ = lean_apply_1(v_f_3036_, v_x_3037_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg(lean_object* v_f_3039_, lean_object* v_as_3040_){
_start:
{
lean_object* v___f_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___f_3041_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3041_, 0, v_f_3039_);
v___x_3042_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3043_ = lean_array_get_size(v_as_3040_);
v___x_3044_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_3042_, v___f_3041_, v_as_3040_, v___x_3043_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f(lean_object* v_00_u03b1_3045_, lean_object* v_00_u03b2_3046_, lean_object* v_f_3047_, lean_object* v_as_3048_){
_start:
{
lean_object* v___f_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___f_3049_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3049_, 0, v_f_3047_);
v___x_3050_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3051_ = lean_array_get_size(v_as_3048_);
v___x_3052_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_3050_, v___f_3049_, v_as_3048_, v___x_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg___lam__0(lean_object* v_p_3053_, lean_object* v_a_3054_){
_start:
{
lean_object* v___x_3055_; uint8_t v___x_3056_; 
lean_inc(v_a_3054_);
v___x_3055_ = lean_apply_1(v_p_3053_, v_a_3054_);
v___x_3056_ = lean_unbox(v___x_3055_);
if (v___x_3056_ == 0)
{
lean_object* v___x_3057_; 
lean_dec(v_a_3054_);
v___x_3057_ = lean_box(0);
return v___x_3057_;
}
else
{
lean_object* v___x_3058_; 
v___x_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3058_, 0, v_a_3054_);
return v___x_3058_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg(lean_object* v_p_3059_, lean_object* v_as_3060_){
_start:
{
lean_object* v___f_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___f_3061_ = lean_alloc_closure((void*)(l_Array_findRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3061_, 0, v_p_3059_);
v___x_3062_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3063_ = lean_array_get_size(v_as_3060_);
v___x_3064_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_3062_, v___f_3061_, v_as_3060_, v___x_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f(lean_object* v_00_u03b1_3065_, lean_object* v_p_3066_, lean_object* v_as_3067_){
_start:
{
lean_object* v___f_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___f_3068_ = lean_alloc_closure((void*)(l_Array_findRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3068_, 0, v_p_3066_);
v___x_3069_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3070_ = lean_array_get_size(v_as_3067_);
v___x_3071_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_3069_, v___f_3068_, v_as_3067_, v___x_3070_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object* v_p_3072_, lean_object* v_as_3073_, lean_object* v_j_3074_){
_start:
{
lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3075_ = lean_array_get_size(v_as_3073_);
v___x_3076_ = lean_nat_dec_lt(v_j_3074_, v___x_3075_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; 
lean_dec(v_j_3074_);
lean_dec_ref(v_p_3072_);
v___x_3077_ = lean_box(0);
return v___x_3077_;
}
else
{
lean_object* v___x_3078_; lean_object* v___x_3079_; uint8_t v___x_3080_; 
v___x_3078_ = lean_array_fget_borrowed(v_as_3073_, v_j_3074_);
lean_inc_ref(v_p_3072_);
lean_inc(v___x_3078_);
v___x_3079_ = lean_apply_1(v_p_3072_, v___x_3078_);
v___x_3080_ = lean_unbox(v___x_3079_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = lean_unsigned_to_nat(1u);
v___x_3082_ = lean_nat_add(v_j_3074_, v___x_3081_);
lean_dec(v_j_3074_);
v_j_3074_ = v___x_3082_;
goto _start;
}
else
{
lean_object* v___x_3084_; 
lean_dec_ref(v_p_3072_);
v___x_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3084_, 0, v_j_3074_);
return v___x_3084_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg___boxed(lean_object* v_p_3085_, lean_object* v_as_3086_, lean_object* v_j_3087_){
_start:
{
lean_object* v_res_3088_; 
v_res_3088_ = l_Array_findIdx_x3f_loop___redArg(v_p_3085_, v_as_3086_, v_j_3087_);
lean_dec_ref(v_as_3086_);
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop(lean_object* v_00_u03b1_3089_, lean_object* v_p_3090_, lean_object* v_as_3091_, lean_object* v_j_3092_){
_start:
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Array_findIdx_x3f_loop___redArg(v_p_3090_, v_as_3091_, v_j_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___boxed(lean_object* v_00_u03b1_3094_, lean_object* v_p_3095_, lean_object* v_as_3096_, lean_object* v_j_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l_Array_findIdx_x3f_loop(v_00_u03b1_3094_, v_p_3095_, v_as_3096_, v_j_3097_);
lean_dec_ref(v_as_3096_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg(lean_object* v_p_3099_, lean_object* v_as_3100_){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3101_ = lean_unsigned_to_nat(0u);
v___x_3102_ = l_Array_findIdx_x3f_loop___redArg(v_p_3099_, v_as_3100_, v___x_3101_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg___boxed(lean_object* v_p_3103_, lean_object* v_as_3104_){
_start:
{
lean_object* v_res_3105_; 
v_res_3105_ = l_Array_findIdx_x3f___redArg(v_p_3103_, v_as_3104_);
lean_dec_ref(v_as_3104_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f(lean_object* v_00_u03b1_3106_, lean_object* v_p_3107_, lean_object* v_as_3108_){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = lean_unsigned_to_nat(0u);
v___x_3110_ = l_Array_findIdx_x3f_loop___redArg(v_p_3107_, v_as_3108_, v___x_3109_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___boxed(lean_object* v_00_u03b1_3111_, lean_object* v_p_3112_, lean_object* v_as_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_Array_findIdx_x3f(v_00_u03b1_3111_, v_p_3112_, v_as_3113_);
lean_dec_ref(v_as_3113_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(lean_object* v_p_3115_, lean_object* v_as_3116_, lean_object* v_j_3117_){
_start:
{
lean_object* v___x_3118_; uint8_t v___x_3119_; 
v___x_3118_ = lean_array_get_size(v_as_3116_);
v___x_3119_ = lean_nat_dec_lt(v_j_3117_, v___x_3118_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; 
lean_dec(v_j_3117_);
lean_dec_ref(v_p_3115_);
v___x_3120_ = lean_box(0);
return v___x_3120_;
}
else
{
lean_object* v___x_3121_; lean_object* v___x_3122_; uint8_t v___x_3123_; 
v___x_3121_ = lean_array_fget_borrowed(v_as_3116_, v_j_3117_);
lean_inc_ref(v_p_3115_);
lean_inc(v___x_3121_);
v___x_3122_ = lean_apply_1(v_p_3115_, v___x_3121_);
v___x_3123_ = lean_unbox(v___x_3122_);
if (v___x_3123_ == 0)
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3124_ = lean_unsigned_to_nat(1u);
v___x_3125_ = lean_nat_add(v_j_3117_, v___x_3124_);
lean_dec(v_j_3117_);
v_j_3117_ = v___x_3125_;
goto _start;
}
else
{
lean_object* v___x_3127_; 
lean_dec_ref(v_p_3115_);
v___x_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3127_, 0, v_j_3117_);
return v___x_3127_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg___boxed(lean_object* v_p_3128_, lean_object* v_as_3129_, lean_object* v_j_3130_){
_start:
{
lean_object* v_res_3131_; 
v_res_3131_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3128_, v_as_3129_, v_j_3130_);
lean_dec_ref(v_as_3129_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object* v_00_u03b1_3132_, lean_object* v_p_3133_, lean_object* v_as_3134_, lean_object* v_j_3135_){
_start:
{
lean_object* v___x_3136_; 
v___x_3136_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3133_, v_as_3134_, v_j_3135_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___boxed(lean_object* v_00_u03b1_3137_, lean_object* v_p_3138_, lean_object* v_as_3139_, lean_object* v_j_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(v_00_u03b1_3137_, v_p_3138_, v_as_3139_, v_j_3140_);
lean_dec_ref(v_as_3139_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg(lean_object* v_p_3142_, lean_object* v_as_3143_){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = lean_unsigned_to_nat(0u);
v___x_3145_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3142_, v_as_3143_, v___x_3144_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg___boxed(lean_object* v_p_3146_, lean_object* v_as_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Array_findFinIdx_x3f___redArg(v_p_3146_, v_as_3147_);
lean_dec_ref(v_as_3147_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f(lean_object* v_00_u03b1_3149_, lean_object* v_p_3150_, lean_object* v_as_3151_){
_start:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3152_ = lean_unsigned_to_nat(0u);
v___x_3153_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3150_, v_as_3151_, v___x_3152_);
return v___x_3153_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___boxed(lean_object* v_00_u03b1_3154_, lean_object* v_p_3155_, lean_object* v_as_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Array_findFinIdx_x3f(v_00_u03b1_3154_, v_p_3155_, v_as_3156_);
lean_dec_ref(v_as_3156_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___redArg(lean_object* v_p_3158_, lean_object* v_as_3159_){
_start:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = lean_unsigned_to_nat(0u);
v___x_3161_ = l_Array_findIdx_x3f_loop___redArg(v_p_3158_, v_as_3159_, v___x_3160_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_object* v___x_3162_; 
v___x_3162_ = lean_array_get_size(v_as_3159_);
return v___x_3162_;
}
else
{
lean_object* v_val_3163_; 
v_val_3163_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_val_3163_);
lean_dec_ref_known(v___x_3161_, 1);
return v_val_3163_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___redArg___boxed(lean_object* v_p_3164_, lean_object* v_as_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l_Array_findIdx___redArg(v_p_3164_, v_as_3165_);
lean_dec_ref(v_as_3165_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx(lean_object* v_00_u03b1_3167_, lean_object* v_p_3168_, lean_object* v_as_3169_){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3170_ = lean_unsigned_to_nat(0u);
v___x_3171_ = l_Array_findIdx_x3f_loop___redArg(v_p_3168_, v_as_3169_, v___x_3170_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v___x_3172_; 
v___x_3172_ = lean_array_get_size(v_as_3169_);
return v___x_3172_;
}
else
{
lean_object* v_val_3173_; 
v_val_3173_ = lean_ctor_get(v___x_3171_, 0);
lean_inc(v_val_3173_);
lean_dec_ref_known(v___x_3171_, 1);
return v_val_3173_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___boxed(lean_object* v_00_u03b1_3174_, lean_object* v_p_3175_, lean_object* v_as_3176_){
_start:
{
lean_object* v_res_3177_; 
v_res_3177_ = l_Array_findIdx(v_00_u03b1_3174_, v_p_3175_, v_as_3176_);
lean_dec_ref(v_as_3176_);
return v_res_3177_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg(lean_object* v_inst_3178_, lean_object* v_xs_3179_, lean_object* v_v_3180_, lean_object* v_i_3181_){
_start:
{
lean_object* v___x_3182_; uint8_t v___x_3183_; 
v___x_3182_ = lean_array_get_size(v_xs_3179_);
v___x_3183_ = lean_nat_dec_lt(v_i_3181_, v___x_3182_);
if (v___x_3183_ == 0)
{
lean_object* v___x_3184_; 
lean_dec(v_i_3181_);
lean_dec(v_v_3180_);
lean_dec_ref(v_inst_3178_);
v___x_3184_ = lean_box(0);
return v___x_3184_;
}
else
{
lean_object* v___x_3185_; lean_object* v___x_3186_; uint8_t v___x_3187_; 
v___x_3185_ = lean_array_fget_borrowed(v_xs_3179_, v_i_3181_);
lean_inc_ref(v_inst_3178_);
lean_inc(v_v_3180_);
lean_inc(v___x_3185_);
v___x_3186_ = lean_apply_2(v_inst_3178_, v___x_3185_, v_v_3180_);
v___x_3187_ = lean_unbox(v___x_3186_);
if (v___x_3187_ == 0)
{
lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3188_ = lean_unsigned_to_nat(1u);
v___x_3189_ = lean_nat_add(v_i_3181_, v___x_3188_);
lean_dec(v_i_3181_);
v_i_3181_ = v___x_3189_;
goto _start;
}
else
{
lean_object* v___x_3191_; 
lean_dec(v_v_3180_);
lean_dec_ref(v_inst_3178_);
v___x_3191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3191_, 0, v_i_3181_);
return v___x_3191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg___boxed(lean_object* v_inst_3192_, lean_object* v_xs_3193_, lean_object* v_v_3194_, lean_object* v_i_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l_Array_idxOfAux___redArg(v_inst_3192_, v_xs_3193_, v_v_3194_, v_i_3195_);
lean_dec_ref(v_xs_3193_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux(lean_object* v_00_u03b1_3197_, lean_object* v_inst_3198_, lean_object* v_xs_3199_, lean_object* v_v_3200_, lean_object* v_i_3201_){
_start:
{
lean_object* v___x_3202_; 
v___x_3202_ = l_Array_idxOfAux___redArg(v_inst_3198_, v_xs_3199_, v_v_3200_, v_i_3201_);
return v___x_3202_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___boxed(lean_object* v_00_u03b1_3203_, lean_object* v_inst_3204_, lean_object* v_xs_3205_, lean_object* v_v_3206_, lean_object* v_i_3207_){
_start:
{
lean_object* v_res_3208_; 
v_res_3208_ = l_Array_idxOfAux(v_00_u03b1_3203_, v_inst_3204_, v_xs_3205_, v_v_3206_, v_i_3207_);
lean_dec_ref(v_xs_3205_);
return v_res_3208_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg(lean_object* v_inst_3209_, lean_object* v_xs_3210_, lean_object* v_v_3211_){
_start:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3212_ = lean_unsigned_to_nat(0u);
v___x_3213_ = l_Array_idxOfAux___redArg(v_inst_3209_, v_xs_3210_, v_v_3211_, v___x_3212_);
return v___x_3213_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg___boxed(lean_object* v_inst_3214_, lean_object* v_xs_3215_, lean_object* v_v_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = l_Array_finIdxOf_x3f___redArg(v_inst_3214_, v_xs_3215_, v_v_3216_);
lean_dec_ref(v_xs_3215_);
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f(lean_object* v_00_u03b1_3218_, lean_object* v_inst_3219_, lean_object* v_xs_3220_, lean_object* v_v_3221_){
_start:
{
lean_object* v___x_3222_; 
v___x_3222_ = l_Array_finIdxOf_x3f___redArg(v_inst_3219_, v_xs_3220_, v_v_3221_);
return v___x_3222_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___boxed(lean_object* v_00_u03b1_3223_, lean_object* v_inst_3224_, lean_object* v_xs_3225_, lean_object* v_v_3226_){
_start:
{
lean_object* v_res_3227_; 
v_res_3227_ = l_Array_finIdxOf_x3f(v_00_u03b1_3223_, v_inst_3224_, v_xs_3225_, v_v_3226_);
lean_dec_ref(v_xs_3225_);
return v_res_3227_;
}
}
LEAN_EXPORT uint8_t l_Array_idxOf___redArg___lam__0(lean_object* v_inst_3228_, lean_object* v_a_3229_, lean_object* v_x_3230_){
_start:
{
lean_object* v___x_3231_; uint8_t v___x_3232_; 
v___x_3231_ = lean_apply_2(v_inst_3228_, v_x_3230_, v_a_3229_);
v___x_3232_ = lean_unbox(v___x_3231_);
return v___x_3232_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___lam__0___boxed(lean_object* v_inst_3233_, lean_object* v_a_3234_, lean_object* v_x_3235_){
_start:
{
uint8_t v_res_3236_; lean_object* v_r_3237_; 
v_res_3236_ = l_Array_idxOf___redArg___lam__0(v_inst_3233_, v_a_3234_, v_x_3235_);
v_r_3237_ = lean_box(v_res_3236_);
return v_r_3237_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg(lean_object* v_inst_3238_, lean_object* v_a_3239_, lean_object* v_as_3240_){
_start:
{
lean_object* v___f_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___f_3241_ = lean_alloc_closure((void*)(l_Array_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3241_, 0, v_inst_3238_);
lean_closure_set(v___f_3241_, 1, v_a_3239_);
v___x_3242_ = lean_unsigned_to_nat(0u);
v___x_3243_ = l_Array_findIdx_x3f_loop___redArg(v___f_3241_, v_as_3240_, v___x_3242_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v___x_3244_; 
v___x_3244_ = lean_array_get_size(v_as_3240_);
return v___x_3244_;
}
else
{
lean_object* v_val_3245_; 
v_val_3245_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_val_3245_);
lean_dec_ref_known(v___x_3243_, 1);
return v_val_3245_;
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___boxed(lean_object* v_inst_3246_, lean_object* v_a_3247_, lean_object* v_as_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l_Array_idxOf___redArg(v_inst_3246_, v_a_3247_, v_as_3248_);
lean_dec_ref(v_as_3248_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf(lean_object* v_00_u03b1_3250_, lean_object* v_inst_3251_, lean_object* v_a_3252_, lean_object* v_as_3253_){
_start:
{
lean_object* v___x_3254_; 
v___x_3254_ = l_Array_idxOf___redArg(v_inst_3251_, v_a_3252_, v_as_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___boxed(lean_object* v_00_u03b1_3255_, lean_object* v_inst_3256_, lean_object* v_a_3257_, lean_object* v_as_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = l_Array_idxOf(v_00_u03b1_3255_, v_inst_3256_, v_a_3257_, v_as_3258_);
lean_dec_ref(v_as_3258_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg(lean_object* v_inst_3260_, lean_object* v_xs_3261_, lean_object* v_v_3262_){
_start:
{
lean_object* v___x_3263_; 
v___x_3263_ = l_Array_finIdxOf_x3f___redArg(v_inst_3260_, v_xs_3261_, v_v_3262_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v___x_3264_; 
v___x_3264_ = lean_box(0);
return v___x_3264_;
}
else
{
lean_object* v_val_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
v_val_3265_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_3263_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_val_3265_);
lean_dec(v___x_3263_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_val_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg___boxed(lean_object* v_inst_3273_, lean_object* v_xs_3274_, lean_object* v_v_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l_Array_idxOf_x3f___redArg(v_inst_3273_, v_xs_3274_, v_v_3275_);
lean_dec_ref(v_xs_3274_);
return v_res_3276_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f(lean_object* v_00_u03b1_3277_, lean_object* v_inst_3278_, lean_object* v_xs_3279_, lean_object* v_v_3280_){
_start:
{
lean_object* v___x_3281_; 
v___x_3281_ = l_Array_idxOf_x3f___redArg(v_inst_3278_, v_xs_3279_, v_v_3280_);
return v___x_3281_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___boxed(lean_object* v_00_u03b1_3282_, lean_object* v_inst_3283_, lean_object* v_xs_3284_, lean_object* v_v_3285_){
_start:
{
lean_object* v_res_3286_; 
v_res_3286_ = l_Array_idxOf_x3f(v_00_u03b1_3282_, v_inst_3283_, v_xs_3284_, v_v_3285_);
lean_dec_ref(v_xs_3284_);
return v_res_3286_;
}
}
LEAN_EXPORT uint8_t l_Array_any___redArg___lam__0(lean_object* v_p_3287_, lean_object* v_x_3288_){
_start:
{
lean_object* v___x_3289_; uint8_t v___x_3290_; 
v___x_3289_ = lean_apply_1(v_p_3287_, v_x_3288_);
v___x_3290_ = lean_unbox(v___x_3289_);
return v___x_3290_;
}
}
LEAN_EXPORT lean_object* l_Array_any___redArg___lam__0___boxed(lean_object* v_p_3291_, lean_object* v_x_3292_){
_start:
{
uint8_t v_res_3293_; lean_object* v_r_3294_; 
v_res_3293_ = l_Array_any___redArg___lam__0(v_p_3291_, v_x_3292_);
v_r_3294_ = lean_box(v_res_3293_);
return v_r_3294_;
}
}
LEAN_EXPORT uint8_t l_Array_any___redArg(lean_object* v_as_3295_, lean_object* v_p_3296_, lean_object* v_start_3297_, lean_object* v_stop_3298_){
_start:
{
lean_object* v___x_3299_; uint8_t v___x_3300_; 
v___x_3299_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3300_ = lean_nat_dec_lt(v_start_3297_, v_stop_3298_);
if (v___x_3300_ == 0)
{
lean_dec(v_stop_3298_);
lean_dec_ref(v_p_3296_);
lean_dec_ref(v_as_3295_);
return v___x_3300_;
}
else
{
lean_object* v___f_3301_; lean_object* v___y_3303_; lean_object* v___x_3309_; uint8_t v___x_3310_; 
v___f_3301_ = lean_alloc_closure((void*)(l_Array_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3301_, 0, v_p_3296_);
v___x_3309_ = lean_array_get_size(v_as_3295_);
v___x_3310_ = lean_nat_dec_le(v_stop_3298_, v___x_3309_);
if (v___x_3310_ == 0)
{
lean_dec(v_stop_3298_);
v___y_3303_ = v___x_3309_;
goto v___jp_3302_;
}
else
{
v___y_3303_ = v_stop_3298_;
goto v___jp_3302_;
}
v___jp_3302_:
{
uint8_t v___x_3304_; 
v___x_3304_ = lean_nat_dec_lt(v_start_3297_, v___y_3303_);
if (v___x_3304_ == 0)
{
lean_dec(v___y_3303_);
lean_dec_ref(v___f_3301_);
lean_dec_ref(v_as_3295_);
return v___x_3304_;
}
else
{
size_t v___x_3305_; size_t v___x_3306_; lean_object* v___x_3307_; uint8_t v___x_3308_; 
v___x_3305_ = lean_usize_of_nat(v_start_3297_);
v___x_3306_ = lean_usize_of_nat(v___y_3303_);
lean_dec(v___y_3303_);
v___x_3307_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3299_, v___f_3301_, v_as_3295_, v___x_3305_, v___x_3306_);
v___x_3308_ = lean_unbox(v___x_3307_);
lean_dec(v___x_3307_);
return v___x_3308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_any___redArg___boxed(lean_object* v_as_3311_, lean_object* v_p_3312_, lean_object* v_start_3313_, lean_object* v_stop_3314_){
_start:
{
uint8_t v_res_3315_; lean_object* v_r_3316_; 
v_res_3315_ = l_Array_any___redArg(v_as_3311_, v_p_3312_, v_start_3313_, v_stop_3314_);
lean_dec(v_start_3313_);
v_r_3316_ = lean_box(v_res_3315_);
return v_r_3316_;
}
}
LEAN_EXPORT uint8_t l_Array_any(lean_object* v_00_u03b1_3317_, lean_object* v_as_3318_, lean_object* v_p_3319_, lean_object* v_start_3320_, lean_object* v_stop_3321_){
_start:
{
lean_object* v___x_3322_; uint8_t v___x_3323_; 
v___x_3322_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3323_ = lean_nat_dec_lt(v_start_3320_, v_stop_3321_);
if (v___x_3323_ == 0)
{
lean_dec(v_stop_3321_);
lean_dec_ref(v_p_3319_);
lean_dec_ref(v_as_3318_);
return v___x_3323_;
}
else
{
lean_object* v___f_3324_; lean_object* v___y_3326_; lean_object* v___x_3332_; uint8_t v___x_3333_; 
v___f_3324_ = lean_alloc_closure((void*)(l_Array_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3324_, 0, v_p_3319_);
v___x_3332_ = lean_array_get_size(v_as_3318_);
v___x_3333_ = lean_nat_dec_le(v_stop_3321_, v___x_3332_);
if (v___x_3333_ == 0)
{
lean_dec(v_stop_3321_);
v___y_3326_ = v___x_3332_;
goto v___jp_3325_;
}
else
{
v___y_3326_ = v_stop_3321_;
goto v___jp_3325_;
}
v___jp_3325_:
{
uint8_t v___x_3327_; 
v___x_3327_ = lean_nat_dec_lt(v_start_3320_, v___y_3326_);
if (v___x_3327_ == 0)
{
lean_dec(v___y_3326_);
lean_dec_ref(v___f_3324_);
lean_dec_ref(v_as_3318_);
return v___x_3327_;
}
else
{
size_t v___x_3328_; size_t v___x_3329_; lean_object* v___x_3330_; uint8_t v___x_3331_; 
v___x_3328_ = lean_usize_of_nat(v_start_3320_);
v___x_3329_ = lean_usize_of_nat(v___y_3326_);
lean_dec(v___y_3326_);
v___x_3330_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3322_, v___f_3324_, v_as_3318_, v___x_3328_, v___x_3329_);
v___x_3331_ = lean_unbox(v___x_3330_);
lean_dec(v___x_3330_);
return v___x_3331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_any___boxed(lean_object* v_00_u03b1_3334_, lean_object* v_as_3335_, lean_object* v_p_3336_, lean_object* v_start_3337_, lean_object* v_stop_3338_){
_start:
{
uint8_t v_res_3339_; lean_object* v_r_3340_; 
v_res_3339_ = l_Array_any(v_00_u03b1_3334_, v_as_3335_, v_p_3336_, v_start_3337_, v_stop_3338_);
lean_dec(v_start_3337_);
v_r_3340_ = lean_box(v_res_3339_);
return v_r_3340_;
}
}
LEAN_EXPORT uint8_t l_Array_all___redArg___lam__0(lean_object* v_p_3341_, uint8_t v___x_3342_, lean_object* v_v_3343_){
_start:
{
lean_object* v___x_3344_; uint8_t v___x_3345_; 
v___x_3344_ = lean_apply_1(v_p_3341_, v_v_3343_);
v___x_3345_ = lean_unbox(v___x_3344_);
if (v___x_3345_ == 0)
{
return v___x_3342_;
}
else
{
uint8_t v___x_3346_; 
v___x_3346_ = 0;
return v___x_3346_;
}
}
}
LEAN_EXPORT lean_object* l_Array_all___redArg___lam__0___boxed(lean_object* v_p_3347_, lean_object* v___x_3348_, lean_object* v_v_3349_){
_start:
{
uint8_t v___x_335__boxed_3350_; uint8_t v_res_3351_; lean_object* v_r_3352_; 
v___x_335__boxed_3350_ = lean_unbox(v___x_3348_);
v_res_3351_ = l_Array_all___redArg___lam__0(v_p_3347_, v___x_335__boxed_3350_, v_v_3349_);
v_r_3352_ = lean_box(v_res_3351_);
return v_r_3352_;
}
}
LEAN_EXPORT uint8_t l_Array_all___redArg(lean_object* v_as_3353_, lean_object* v_p_3354_, lean_object* v_start_3355_, lean_object* v_stop_3356_){
_start:
{
lean_object* v___x_3357_; uint8_t v___x_3358_; 
v___x_3357_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3358_ = lean_nat_dec_lt(v_start_3355_, v_stop_3356_);
if (v___x_3358_ == 0)
{
uint8_t v___x_3359_; 
lean_dec(v_stop_3356_);
lean_dec_ref(v_p_3354_);
lean_dec_ref(v_as_3353_);
v___x_3359_ = 1;
return v___x_3359_;
}
else
{
lean_object* v___x_3360_; lean_object* v___f_3361_; lean_object* v___y_3363_; lean_object* v___x_3370_; uint8_t v___x_3371_; 
v___x_3360_ = lean_box(v___x_3358_);
v___f_3361_ = lean_alloc_closure((void*)(l_Array_all___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3361_, 0, v_p_3354_);
lean_closure_set(v___f_3361_, 1, v___x_3360_);
v___x_3370_ = lean_array_get_size(v_as_3353_);
v___x_3371_ = lean_nat_dec_le(v_stop_3356_, v___x_3370_);
if (v___x_3371_ == 0)
{
lean_dec(v_stop_3356_);
v___y_3363_ = v___x_3370_;
goto v___jp_3362_;
}
else
{
v___y_3363_ = v_stop_3356_;
goto v___jp_3362_;
}
v___jp_3362_:
{
uint8_t v___x_3364_; 
v___x_3364_ = lean_nat_dec_lt(v_start_3355_, v___y_3363_);
if (v___x_3364_ == 0)
{
lean_dec(v___y_3363_);
lean_dec_ref(v___f_3361_);
lean_dec_ref(v_as_3353_);
return v___x_3358_;
}
else
{
size_t v___x_3365_; size_t v___x_3366_; lean_object* v___x_3367_; uint8_t v___x_3368_; 
v___x_3365_ = lean_usize_of_nat(v_start_3355_);
v___x_3366_ = lean_usize_of_nat(v___y_3363_);
lean_dec(v___y_3363_);
v___x_3367_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3357_, v___f_3361_, v_as_3353_, v___x_3365_, v___x_3366_);
v___x_3368_ = lean_unbox(v___x_3367_);
lean_dec(v___x_3367_);
if (v___x_3368_ == 0)
{
return v___x_3364_;
}
else
{
uint8_t v___x_3369_; 
v___x_3369_ = 0;
return v___x_3369_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_all___redArg___boxed(lean_object* v_as_3372_, lean_object* v_p_3373_, lean_object* v_start_3374_, lean_object* v_stop_3375_){
_start:
{
uint8_t v_res_3376_; lean_object* v_r_3377_; 
v_res_3376_ = l_Array_all___redArg(v_as_3372_, v_p_3373_, v_start_3374_, v_stop_3375_);
lean_dec(v_start_3374_);
v_r_3377_ = lean_box(v_res_3376_);
return v_r_3377_;
}
}
LEAN_EXPORT uint8_t l_Array_all(lean_object* v_00_u03b1_3378_, lean_object* v_as_3379_, lean_object* v_p_3380_, lean_object* v_start_3381_, lean_object* v_stop_3382_){
_start:
{
lean_object* v___x_3383_; uint8_t v___x_3384_; 
v___x_3383_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3384_ = lean_nat_dec_lt(v_start_3381_, v_stop_3382_);
if (v___x_3384_ == 0)
{
uint8_t v___x_3385_; 
lean_dec(v_stop_3382_);
lean_dec_ref(v_p_3380_);
lean_dec_ref(v_as_3379_);
v___x_3385_ = 1;
return v___x_3385_;
}
else
{
lean_object* v___x_3386_; lean_object* v___f_3387_; lean_object* v___y_3389_; lean_object* v___x_3396_; uint8_t v___x_3397_; 
v___x_3386_ = lean_box(v___x_3384_);
v___f_3387_ = lean_alloc_closure((void*)(l_Array_all___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3387_, 0, v_p_3380_);
lean_closure_set(v___f_3387_, 1, v___x_3386_);
v___x_3396_ = lean_array_get_size(v_as_3379_);
v___x_3397_ = lean_nat_dec_le(v_stop_3382_, v___x_3396_);
if (v___x_3397_ == 0)
{
lean_dec(v_stop_3382_);
v___y_3389_ = v___x_3396_;
goto v___jp_3388_;
}
else
{
v___y_3389_ = v_stop_3382_;
goto v___jp_3388_;
}
v___jp_3388_:
{
uint8_t v___x_3390_; 
v___x_3390_ = lean_nat_dec_lt(v_start_3381_, v___y_3389_);
if (v___x_3390_ == 0)
{
lean_dec(v___y_3389_);
lean_dec_ref(v___f_3387_);
lean_dec_ref(v_as_3379_);
return v___x_3384_;
}
else
{
size_t v___x_3391_; size_t v___x_3392_; lean_object* v___x_3393_; uint8_t v___x_3394_; 
v___x_3391_ = lean_usize_of_nat(v_start_3381_);
v___x_3392_ = lean_usize_of_nat(v___y_3389_);
lean_dec(v___y_3389_);
v___x_3393_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3383_, v___f_3387_, v_as_3379_, v___x_3391_, v___x_3392_);
v___x_3394_ = lean_unbox(v___x_3393_);
lean_dec(v___x_3393_);
if (v___x_3394_ == 0)
{
return v___x_3390_;
}
else
{
uint8_t v___x_3395_; 
v___x_3395_ = 0;
return v___x_3395_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_all___boxed(lean_object* v_00_u03b1_3398_, lean_object* v_as_3399_, lean_object* v_p_3400_, lean_object* v_start_3401_, lean_object* v_stop_3402_){
_start:
{
uint8_t v_res_3403_; lean_object* v_r_3404_; 
v_res_3403_ = l_Array_all(v_00_u03b1_3398_, v_as_3399_, v_p_3400_, v_start_3401_, v_stop_3402_);
lean_dec(v_start_3401_);
v_r_3404_ = lean_box(v_res_3403_);
return v_r_3404_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___redArg___lam__0(lean_object* v_inst_3405_, lean_object* v_a_3406_, lean_object* v_x_3407_){
_start:
{
lean_object* v___x_3408_; uint8_t v___x_3409_; 
v___x_3408_ = lean_apply_2(v_inst_3405_, v_a_3406_, v_x_3407_);
v___x_3409_ = lean_unbox(v___x_3408_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l_Array_contains___redArg___lam__0___boxed(lean_object* v_inst_3410_, lean_object* v_a_3411_, lean_object* v_x_3412_){
_start:
{
uint8_t v_res_3413_; lean_object* v_r_3414_; 
v_res_3413_ = l_Array_contains___redArg___lam__0(v_inst_3410_, v_a_3411_, v_x_3412_);
v_r_3414_ = lean_box(v_res_3413_);
return v_r_3414_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___redArg(lean_object* v_inst_3415_, lean_object* v_as_3416_, lean_object* v_a_3417_){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; uint8_t v___x_3421_; 
v___x_3418_ = lean_unsigned_to_nat(0u);
v___x_3419_ = lean_array_get_size(v_as_3416_);
v___x_3420_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3421_ = lean_nat_dec_lt(v___x_3418_, v___x_3419_);
if (v___x_3421_ == 0)
{
lean_dec(v_a_3417_);
lean_dec_ref(v_as_3416_);
lean_dec_ref(v_inst_3415_);
return v___x_3421_;
}
else
{
if (v___x_3421_ == 0)
{
lean_dec(v_a_3417_);
lean_dec_ref(v_as_3416_);
lean_dec_ref(v_inst_3415_);
return v___x_3421_;
}
else
{
lean_object* v___f_3422_; size_t v___x_3423_; size_t v___x_3424_; lean_object* v___x_3425_; uint8_t v___x_3426_; 
v___f_3422_ = lean_alloc_closure((void*)(l_Array_contains___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3422_, 0, v_inst_3415_);
lean_closure_set(v___f_3422_, 1, v_a_3417_);
v___x_3423_ = ((size_t)0ULL);
v___x_3424_ = lean_usize_of_nat(v___x_3419_);
v___x_3425_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3420_, v___f_3422_, v_as_3416_, v___x_3423_, v___x_3424_);
v___x_3426_ = lean_unbox(v___x_3425_);
lean_dec(v___x_3425_);
return v___x_3426_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___redArg___boxed(lean_object* v_inst_3427_, lean_object* v_as_3428_, lean_object* v_a_3429_){
_start:
{
uint8_t v_res_3430_; lean_object* v_r_3431_; 
v_res_3430_ = l_Array_contains___redArg(v_inst_3427_, v_as_3428_, v_a_3429_);
v_r_3431_ = lean_box(v_res_3430_);
return v_r_3431_;
}
}
LEAN_EXPORT uint8_t l_Array_contains(lean_object* v_00_u03b1_3432_, lean_object* v_inst_3433_, lean_object* v_as_3434_, lean_object* v_a_3435_){
_start:
{
uint8_t v___x_3436_; 
v___x_3436_ = l_Array_contains___redArg(v_inst_3433_, v_as_3434_, v_a_3435_);
return v___x_3436_;
}
}
LEAN_EXPORT lean_object* l_Array_contains___boxed(lean_object* v_00_u03b1_3437_, lean_object* v_inst_3438_, lean_object* v_as_3439_, lean_object* v_a_3440_){
_start:
{
uint8_t v_res_3441_; lean_object* v_r_3442_; 
v_res_3441_ = l_Array_contains(v_00_u03b1_3437_, v_inst_3438_, v_as_3439_, v_a_3440_);
v_r_3442_ = lean_box(v_res_3441_);
return v_r_3442_;
}
}
LEAN_EXPORT uint8_t l_Array_elem___redArg(lean_object* v_inst_3443_, lean_object* v_a_3444_, lean_object* v_as_3445_){
_start:
{
uint8_t v___x_3446_; 
v___x_3446_ = l_Array_contains___redArg(v_inst_3443_, v_as_3445_, v_a_3444_);
return v___x_3446_;
}
}
LEAN_EXPORT lean_object* l_Array_elem___redArg___boxed(lean_object* v_inst_3447_, lean_object* v_a_3448_, lean_object* v_as_3449_){
_start:
{
uint8_t v_res_3450_; lean_object* v_r_3451_; 
v_res_3450_ = l_Array_elem___redArg(v_inst_3447_, v_a_3448_, v_as_3449_);
v_r_3451_ = lean_box(v_res_3450_);
return v_r_3451_;
}
}
LEAN_EXPORT uint8_t l_Array_elem(lean_object* v_00_u03b1_3452_, lean_object* v_inst_3453_, lean_object* v_a_3454_, lean_object* v_as_3455_){
_start:
{
uint8_t v___x_3456_; 
v___x_3456_ = l_Array_contains___redArg(v_inst_3453_, v_as_3455_, v_a_3454_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Array_elem___boxed(lean_object* v_00_u03b1_3457_, lean_object* v_inst_3458_, lean_object* v_a_3459_, lean_object* v_as_3460_){
_start:
{
uint8_t v_res_3461_; lean_object* v_r_3462_; 
v_res_3461_ = l_Array_elem(v_00_u03b1_3457_, v_inst_3458_, v_a_3459_, v_as_3460_);
v_r_3462_ = lean_box(v_res_3461_);
return v_r_3462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(lean_object* v_as_3463_, size_t v_i_3464_, size_t v_stop_3465_, lean_object* v_b_3466_){
_start:
{
uint8_t v___x_3467_; 
v___x_3467_ = lean_usize_dec_eq(v_i_3464_, v_stop_3465_);
if (v___x_3467_ == 0)
{
size_t v___x_3468_; size_t v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3468_ = ((size_t)1ULL);
v___x_3469_ = lean_usize_sub(v_i_3464_, v___x_3468_);
v___x_3470_ = lean_array_uget_borrowed(v_as_3463_, v___x_3469_);
lean_inc(v___x_3470_);
v___x_3471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3471_, 0, v___x_3470_);
lean_ctor_set(v___x_3471_, 1, v_b_3466_);
v_i_3464_ = v___x_3469_;
v_b_3466_ = v___x_3471_;
goto _start;
}
else
{
return v_b_3466_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg___boxed(lean_object* v_as_3473_, lean_object* v_i_3474_, lean_object* v_stop_3475_, lean_object* v_b_3476_){
_start:
{
size_t v_i_boxed_3477_; size_t v_stop_boxed_3478_; lean_object* v_res_3479_; 
v_i_boxed_3477_ = lean_unbox_usize(v_i_3474_);
lean_dec(v_i_3474_);
v_stop_boxed_3478_ = lean_unbox_usize(v_stop_3475_);
lean_dec(v_stop_3475_);
v_res_3479_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3473_, v_i_boxed_3477_, v_stop_boxed_3478_, v_b_3476_);
lean_dec_ref(v_as_3473_);
return v_res_3479_;
}
}
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg(lean_object* v_as_3480_){
_start:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; uint8_t v___x_3484_; 
v___x_3481_ = lean_box(0);
v___x_3482_ = lean_array_get_size(v_as_3480_);
v___x_3483_ = lean_unsigned_to_nat(0u);
v___x_3484_ = lean_nat_dec_lt(v___x_3483_, v___x_3482_);
if (v___x_3484_ == 0)
{
return v___x_3481_;
}
else
{
size_t v___x_3485_; size_t v___x_3486_; lean_object* v___x_3487_; 
v___x_3485_ = lean_usize_of_nat(v___x_3482_);
v___x_3486_ = ((size_t)0ULL);
v___x_3487_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3480_, v___x_3485_, v___x_3486_, v___x_3481_);
return v___x_3487_;
}
}
}
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg___boxed(lean_object* v_as_3488_){
_start:
{
lean_object* v_res_3489_; 
v_res_3489_ = l_Array_toListImpl___redArg(v_as_3488_);
lean_dec_ref(v_as_3488_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* lean_array_to_list_impl(lean_object* v_00_u03b1_3490_, lean_object* v_as_3491_){
_start:
{
lean_object* v___x_3492_; 
v___x_3492_ = l_Array_toListImpl___redArg(v_as_3491_);
lean_dec_ref(v_as_3491_);
return v___x_3492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(lean_object* v_00_u03b1_3493_, lean_object* v_as_3494_, size_t v_i_3495_, size_t v_stop_3496_, lean_object* v_b_3497_){
_start:
{
lean_object* v___x_3498_; 
v___x_3498_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3494_, v_i_3495_, v_stop_3496_, v_b_3497_);
return v___x_3498_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___boxed(lean_object* v_00_u03b1_3499_, lean_object* v_as_3500_, lean_object* v_i_3501_, lean_object* v_stop_3502_, lean_object* v_b_3503_){
_start:
{
size_t v_i_boxed_3504_; size_t v_stop_boxed_3505_; lean_object* v_res_3506_; 
v_i_boxed_3504_ = lean_unbox_usize(v_i_3501_);
lean_dec(v_i_3501_);
v_stop_boxed_3505_ = lean_unbox_usize(v_stop_3502_);
lean_dec(v_stop_3502_);
v_res_3506_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(v_00_u03b1_3499_, v_as_3500_, v_i_boxed_3504_, v_stop_boxed_3505_, v_b_3503_);
lean_dec_ref(v_as_3500_);
return v_res_3506_;
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg___lam__0(lean_object* v_x1_3507_, lean_object* v_x2_3508_){
_start:
{
lean_object* v___x_3509_; 
v___x_3509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3509_, 0, v_x1_3507_);
lean_ctor_set(v___x_3509_, 1, v_x2_3508_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg(lean_object* v_as_3511_, lean_object* v_l_3512_){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; uint8_t v___x_3516_; 
v___x_3513_ = lean_array_get_size(v_as_3511_);
v___x_3514_ = lean_unsigned_to_nat(0u);
v___x_3515_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3516_ = lean_nat_dec_lt(v___x_3514_, v___x_3513_);
if (v___x_3516_ == 0)
{
lean_dec_ref(v_as_3511_);
return v_l_3512_;
}
else
{
lean_object* v___f_3517_; size_t v___x_3518_; size_t v___x_3519_; lean_object* v___x_3520_; 
v___f_3517_ = ((lean_object*)(l_Array_toListAppend___redArg___closed__0));
v___x_3518_ = lean_usize_of_nat(v___x_3513_);
v___x_3519_ = ((size_t)0ULL);
v___x_3520_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_3515_, v___f_3517_, v_as_3511_, v___x_3518_, v___x_3519_, v_l_3512_);
return v___x_3520_;
}
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend(lean_object* v_00_u03b1_3521_, lean_object* v_as_3522_, lean_object* v_l_3523_){
_start:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; uint8_t v___x_3527_; 
v___x_3524_ = lean_array_get_size(v_as_3522_);
v___x_3525_ = lean_unsigned_to_nat(0u);
v___x_3526_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3527_ = lean_nat_dec_lt(v___x_3525_, v___x_3524_);
if (v___x_3527_ == 0)
{
lean_dec_ref(v_as_3522_);
return v_l_3523_;
}
else
{
lean_object* v___f_3528_; size_t v___x_3529_; size_t v___x_3530_; lean_object* v___x_3531_; 
v___f_3528_ = ((lean_object*)(l_Array_toListAppend___redArg___closed__0));
v___x_3529_ = lean_usize_of_nat(v___x_3524_);
v___x_3530_ = ((size_t)0ULL);
v___x_3531_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_3526_, v___f_3528_, v_as_3522_, v___x_3529_, v___x_3530_, v_l_3523_);
return v___x_3531_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(lean_object* v_as_3532_, size_t v_i_3533_, size_t v_stop_3534_, lean_object* v_b_3535_){
_start:
{
uint8_t v___x_3536_; 
v___x_3536_ = lean_usize_dec_eq(v_i_3533_, v_stop_3534_);
if (v___x_3536_ == 0)
{
lean_object* v___x_3537_; lean_object* v___x_3538_; size_t v___x_3539_; size_t v___x_3540_; 
v___x_3537_ = lean_array_uget_borrowed(v_as_3532_, v_i_3533_);
lean_inc(v___x_3537_);
v___x_3538_ = lean_array_push(v_b_3535_, v___x_3537_);
v___x_3539_ = ((size_t)1ULL);
v___x_3540_ = lean_usize_add(v_i_3533_, v___x_3539_);
v_i_3533_ = v___x_3540_;
v_b_3535_ = v___x_3538_;
goto _start;
}
else
{
return v_b_3535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg___boxed(lean_object* v_as_3542_, lean_object* v_i_3543_, lean_object* v_stop_3544_, lean_object* v_b_3545_){
_start:
{
size_t v_i_boxed_3546_; size_t v_stop_boxed_3547_; lean_object* v_res_3548_; 
v_i_boxed_3546_ = lean_unbox_usize(v_i_3543_);
lean_dec(v_i_3543_);
v_stop_boxed_3547_ = lean_unbox_usize(v_stop_3544_);
lean_dec(v_stop_3544_);
v_res_3548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_as_3542_, v_i_boxed_3546_, v_stop_boxed_3547_, v_b_3545_);
lean_dec_ref(v_as_3542_);
return v_res_3548_;
}
}
LEAN_EXPORT lean_object* l_Array_append___redArg(lean_object* v_as_3549_, lean_object* v_bs_3550_){
_start:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; 
v___x_3551_ = lean_unsigned_to_nat(0u);
v___x_3552_ = lean_array_get_size(v_bs_3550_);
v___x_3553_ = lean_nat_dec_lt(v___x_3551_, v___x_3552_);
if (v___x_3553_ == 0)
{
return v_as_3549_;
}
else
{
uint8_t v___x_3554_; 
v___x_3554_ = lean_nat_dec_le(v___x_3552_, v___x_3552_);
if (v___x_3554_ == 0)
{
if (v___x_3553_ == 0)
{
return v_as_3549_;
}
else
{
size_t v___x_3555_; size_t v___x_3556_; lean_object* v___x_3557_; 
v___x_3555_ = ((size_t)0ULL);
v___x_3556_ = lean_usize_of_nat(v___x_3552_);
v___x_3557_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_bs_3550_, v___x_3555_, v___x_3556_, v_as_3549_);
return v___x_3557_;
}
}
else
{
size_t v___x_3558_; size_t v___x_3559_; lean_object* v___x_3560_; 
v___x_3558_ = ((size_t)0ULL);
v___x_3559_ = lean_usize_of_nat(v___x_3552_);
v___x_3560_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_bs_3550_, v___x_3558_, v___x_3559_, v_as_3549_);
return v___x_3560_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_append___redArg___boxed(lean_object* v_as_3561_, lean_object* v_bs_3562_){
_start:
{
lean_object* v_res_3563_; 
v_res_3563_ = l_Array_append___redArg(v_as_3561_, v_bs_3562_);
lean_dec_ref(v_bs_3562_);
return v_res_3563_;
}
}
LEAN_EXPORT lean_object* l_Array_append(lean_object* v_00_u03b1_3564_, lean_object* v_as_3565_, lean_object* v_bs_3566_){
_start:
{
lean_object* v___x_3567_; 
v___x_3567_ = l_Array_append___redArg(v_as_3565_, v_bs_3566_);
return v___x_3567_;
}
}
LEAN_EXPORT lean_object* l_Array_append___boxed(lean_object* v_00_u03b1_3568_, lean_object* v_as_3569_, lean_object* v_bs_3570_){
_start:
{
lean_object* v_res_3571_; 
v_res_3571_ = l_Array_append(v_00_u03b1_3568_, v_as_3569_, v_bs_3570_);
lean_dec_ref(v_bs_3570_);
return v_res_3571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(lean_object* v_00_u03b1_3572_, lean_object* v_as_3573_, size_t v_i_3574_, size_t v_stop_3575_, lean_object* v_b_3576_){
_start:
{
lean_object* v___x_3577_; 
v___x_3577_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_as_3573_, v_i_3574_, v_stop_3575_, v_b_3576_);
return v___x_3577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___boxed(lean_object* v_00_u03b1_3578_, lean_object* v_as_3579_, lean_object* v_i_3580_, lean_object* v_stop_3581_, lean_object* v_b_3582_){
_start:
{
size_t v_i_boxed_3583_; size_t v_stop_boxed_3584_; lean_object* v_res_3585_; 
v_i_boxed_3583_ = lean_unbox_usize(v_i_3580_);
lean_dec(v_i_3580_);
v_stop_boxed_3584_ = lean_unbox_usize(v_stop_3581_);
lean_dec(v_stop_3581_);
v_res_3585_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(v_00_u03b1_3578_, v_as_3579_, v_i_boxed_3583_, v_stop_boxed_3584_, v_b_3582_);
lean_dec_ref(v_as_3579_);
return v_res_3585_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend___redArg(){
_start:
{
lean_object* v___x_3588_; 
v___x_3588_ = ((lean_object*)(l_Array_instAppend___redArg___closed__0));
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend___redArg___boxed(lean_object* v___dummy_3589_){
_start:
{
lean_object* v_res_3590_; 
v_res_3590_ = l_Array_instAppend___redArg();
return v_res_3590_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend(lean_object* v_00_u03b1_3591_){
_start:
{
lean_object* v___x_3592_; 
v___x_3592_ = ((lean_object*)(l_Array_instAppend___redArg___closed__0));
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object* v_x_3593_, lean_object* v_x_3594_){
_start:
{
if (lean_obj_tag(v_x_3594_) == 0)
{
return v_x_3593_;
}
else
{
lean_object* v_head_3595_; lean_object* v_tail_3596_; lean_object* v___x_3597_; 
v_head_3595_ = lean_ctor_get(v_x_3594_, 0);
lean_inc(v_head_3595_);
v_tail_3596_ = lean_ctor_get(v_x_3594_, 1);
lean_inc(v_tail_3596_);
lean_dec_ref_known(v_x_3594_, 2);
v___x_3597_ = lean_array_push(v_x_3593_, v_head_3595_);
v_x_3593_ = v___x_3597_;
v_x_3594_ = v_tail_3596_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_appendList___redArg(lean_object* v_as_3599_, lean_object* v_bs_3600_){
_start:
{
lean_object* v___x_3601_; 
v___x_3601_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_as_3599_, v_bs_3600_);
return v___x_3601_;
}
}
LEAN_EXPORT lean_object* l_Array_appendList(lean_object* v_00_u03b1_3602_, lean_object* v_as_3603_, lean_object* v_bs_3604_){
_start:
{
lean_object* v___x_3605_; 
v___x_3605_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_as_3603_, v_bs_3604_);
return v___x_3605_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0(lean_object* v_00_u03b1_3606_, lean_object* v_x_3607_, lean_object* v_x_3608_){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_3607_, v_x_3608_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg(){
_start:
{
lean_object* v___x_3612_; 
v___x_3612_ = ((lean_object*)(l_Array_instHAppendList___redArg___closed__0));
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg___boxed(lean_object* v___dummy_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_Array_instHAppendList___redArg();
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList(lean_object* v_00_u03b1_3615_){
_start:
{
lean_object* v___x_3616_; 
v___x_3616_ = ((lean_object*)(l_Array_instHAppendList___redArg___closed__0));
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0(lean_object* v_bs_3617_, lean_object* v_toPure_3618_, lean_object* v_____do__lift_3619_){
_start:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3620_ = l_Array_append___redArg(v_bs_3617_, v_____do__lift_3619_);
v___x_3621_ = lean_apply_2(v_toPure_3618_, lean_box(0), v___x_3620_);
return v___x_3621_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0___boxed(lean_object* v_bs_3622_, lean_object* v_toPure_3623_, lean_object* v_____do__lift_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Array_flatMapM___redArg___lam__0(v_bs_3622_, v_toPure_3623_, v_____do__lift_3624_);
lean_dec_ref(v_____do__lift_3624_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__1(lean_object* v_toPure_3626_, lean_object* v_f_3627_, lean_object* v_toBind_3628_, lean_object* v_bs_3629_, lean_object* v_a_3630_){
_start:
{
lean_object* v___f_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___f_3631_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3631_, 0, v_bs_3629_);
lean_closure_set(v___f_3631_, 1, v_toPure_3626_);
v___x_3632_ = lean_apply_1(v_f_3627_, v_a_3630_);
v___x_3633_ = lean_apply_4(v_toBind_3628_, lean_box(0), lean_box(0), v___x_3632_, v___f_3631_);
return v___x_3633_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg(lean_object* v_inst_3634_, lean_object* v_f_3635_, lean_object* v_as_3636_){
_start:
{
lean_object* v_toApplicative_3637_; lean_object* v_toBind_3638_; lean_object* v_toPure_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; uint8_t v___x_3643_; 
v_toApplicative_3637_ = lean_ctor_get(v_inst_3634_, 0);
v_toBind_3638_ = lean_ctor_get(v_inst_3634_, 1);
v_toPure_3639_ = lean_ctor_get(v_toApplicative_3637_, 1);
v___x_3640_ = lean_unsigned_to_nat(0u);
v___x_3641_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3642_ = lean_array_get_size(v_as_3636_);
v___x_3643_ = lean_nat_dec_lt(v___x_3640_, v___x_3642_);
if (v___x_3643_ == 0)
{
lean_object* v___x_3644_; 
lean_inc(v_toPure_3639_);
lean_dec_ref(v_as_3636_);
lean_dec(v_f_3635_);
lean_dec_ref(v_inst_3634_);
v___x_3644_ = lean_apply_2(v_toPure_3639_, lean_box(0), v___x_3641_);
return v___x_3644_;
}
else
{
lean_object* v___f_3645_; uint8_t v___x_3646_; 
lean_inc(v_toBind_3638_);
lean_inc(v_toPure_3639_);
v___f_3645_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3645_, 0, v_toPure_3639_);
lean_closure_set(v___f_3645_, 1, v_f_3635_);
lean_closure_set(v___f_3645_, 2, v_toBind_3638_);
v___x_3646_ = lean_nat_dec_le(v___x_3642_, v___x_3642_);
if (v___x_3646_ == 0)
{
if (v___x_3643_ == 0)
{
lean_object* v___x_3647_; 
lean_inc(v_toPure_3639_);
lean_dec_ref(v___f_3645_);
lean_dec_ref(v_as_3636_);
lean_dec_ref(v_inst_3634_);
v___x_3647_ = lean_apply_2(v_toPure_3639_, lean_box(0), v___x_3641_);
return v___x_3647_;
}
else
{
size_t v___x_3648_; size_t v___x_3649_; lean_object* v___x_3650_; 
v___x_3648_ = ((size_t)0ULL);
v___x_3649_ = lean_usize_of_nat(v___x_3642_);
v___x_3650_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3634_, v___f_3645_, v_as_3636_, v___x_3648_, v___x_3649_, v___x_3641_);
return v___x_3650_;
}
}
else
{
size_t v___x_3651_; size_t v___x_3652_; lean_object* v___x_3653_; 
v___x_3651_ = ((size_t)0ULL);
v___x_3652_ = lean_usize_of_nat(v___x_3642_);
v___x_3653_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3634_, v___f_3645_, v_as_3636_, v___x_3651_, v___x_3652_, v___x_3641_);
return v___x_3653_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM(lean_object* v_00_u03b1_3654_, lean_object* v_m_3655_, lean_object* v_00_u03b2_3656_, lean_object* v_inst_3657_, lean_object* v_f_3658_, lean_object* v_as_3659_){
_start:
{
lean_object* v_toApplicative_3660_; lean_object* v_toBind_3661_; lean_object* v_toPure_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; uint8_t v___x_3666_; 
v_toApplicative_3660_ = lean_ctor_get(v_inst_3657_, 0);
v_toBind_3661_ = lean_ctor_get(v_inst_3657_, 1);
v_toPure_3662_ = lean_ctor_get(v_toApplicative_3660_, 1);
v___x_3663_ = lean_unsigned_to_nat(0u);
v___x_3664_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3665_ = lean_array_get_size(v_as_3659_);
v___x_3666_ = lean_nat_dec_lt(v___x_3663_, v___x_3665_);
if (v___x_3666_ == 0)
{
lean_object* v___x_3667_; 
lean_inc(v_toPure_3662_);
lean_dec_ref(v_as_3659_);
lean_dec(v_f_3658_);
lean_dec_ref(v_inst_3657_);
v___x_3667_ = lean_apply_2(v_toPure_3662_, lean_box(0), v___x_3664_);
return v___x_3667_;
}
else
{
lean_object* v___f_3668_; uint8_t v___x_3669_; 
lean_inc(v_toBind_3661_);
lean_inc(v_toPure_3662_);
v___f_3668_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3668_, 0, v_toPure_3662_);
lean_closure_set(v___f_3668_, 1, v_f_3658_);
lean_closure_set(v___f_3668_, 2, v_toBind_3661_);
v___x_3669_ = lean_nat_dec_le(v___x_3665_, v___x_3665_);
if (v___x_3669_ == 0)
{
if (v___x_3666_ == 0)
{
lean_object* v___x_3670_; 
lean_inc(v_toPure_3662_);
lean_dec_ref(v___f_3668_);
lean_dec_ref(v_as_3659_);
lean_dec_ref(v_inst_3657_);
v___x_3670_ = lean_apply_2(v_toPure_3662_, lean_box(0), v___x_3664_);
return v___x_3670_;
}
else
{
size_t v___x_3671_; size_t v___x_3672_; lean_object* v___x_3673_; 
v___x_3671_ = ((size_t)0ULL);
v___x_3672_ = lean_usize_of_nat(v___x_3665_);
v___x_3673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3657_, v___f_3668_, v_as_3659_, v___x_3671_, v___x_3672_, v___x_3664_);
return v___x_3673_;
}
}
else
{
size_t v___x_3674_; size_t v___x_3675_; lean_object* v___x_3676_; 
v___x_3674_ = ((size_t)0ULL);
v___x_3675_ = lean_usize_of_nat(v___x_3665_);
v___x_3676_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3657_, v___f_3668_, v_as_3659_, v___x_3674_, v___x_3675_, v___x_3664_);
return v___x_3676_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMap___redArg___lam__0(lean_object* v_f_3677_, lean_object* v_x1_3678_, lean_object* v_x2_3679_){
_start:
{
lean_object* v___x_3680_; lean_object* v___x_3681_; 
v___x_3680_ = lean_apply_1(v_f_3677_, v_x2_3679_);
v___x_3681_ = l_Array_append___redArg(v_x1_3678_, v___x_3680_);
lean_dec_ref(v___x_3680_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMap___redArg(lean_object* v_f_3682_, lean_object* v_as_3683_){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; uint8_t v___x_3688_; 
v___x_3684_ = lean_unsigned_to_nat(0u);
v___x_3685_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3686_ = lean_array_get_size(v_as_3683_);
v___x_3687_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3688_ = lean_nat_dec_lt(v___x_3684_, v___x_3686_);
if (v___x_3688_ == 0)
{
lean_dec_ref(v_as_3683_);
lean_dec_ref(v_f_3682_);
return v___x_3685_;
}
else
{
lean_object* v___f_3689_; uint8_t v___x_3690_; 
v___f_3689_ = lean_alloc_closure((void*)(l_Array_flatMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3689_, 0, v_f_3682_);
v___x_3690_ = lean_nat_dec_le(v___x_3686_, v___x_3686_);
if (v___x_3690_ == 0)
{
if (v___x_3688_ == 0)
{
lean_dec_ref(v___f_3689_);
lean_dec_ref(v_as_3683_);
return v___x_3685_;
}
else
{
size_t v___x_3691_; size_t v___x_3692_; lean_object* v___x_3693_; 
v___x_3691_ = ((size_t)0ULL);
v___x_3692_ = lean_usize_of_nat(v___x_3686_);
v___x_3693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3687_, v___f_3689_, v_as_3683_, v___x_3691_, v___x_3692_, v___x_3685_);
return v___x_3693_;
}
}
else
{
size_t v___x_3694_; size_t v___x_3695_; lean_object* v___x_3696_; 
v___x_3694_ = ((size_t)0ULL);
v___x_3695_ = lean_usize_of_nat(v___x_3686_);
v___x_3696_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3687_, v___f_3689_, v_as_3683_, v___x_3694_, v___x_3695_, v___x_3685_);
return v___x_3696_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMap(lean_object* v_00_u03b1_3697_, lean_object* v_00_u03b2_3698_, lean_object* v_f_3699_, lean_object* v_as_3700_){
_start:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; uint8_t v___x_3705_; 
v___x_3701_ = lean_unsigned_to_nat(0u);
v___x_3702_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3703_ = lean_array_get_size(v_as_3700_);
v___x_3704_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3705_ = lean_nat_dec_lt(v___x_3701_, v___x_3703_);
if (v___x_3705_ == 0)
{
lean_dec_ref(v_as_3700_);
lean_dec_ref(v_f_3699_);
return v___x_3702_;
}
else
{
lean_object* v___f_3706_; uint8_t v___x_3707_; 
v___f_3706_ = lean_alloc_closure((void*)(l_Array_flatMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3706_, 0, v_f_3699_);
v___x_3707_ = lean_nat_dec_le(v___x_3703_, v___x_3703_);
if (v___x_3707_ == 0)
{
if (v___x_3705_ == 0)
{
lean_dec_ref(v___f_3706_);
lean_dec_ref(v_as_3700_);
return v___x_3702_;
}
else
{
size_t v___x_3708_; size_t v___x_3709_; lean_object* v___x_3710_; 
v___x_3708_ = ((size_t)0ULL);
v___x_3709_ = lean_usize_of_nat(v___x_3703_);
v___x_3710_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3704_, v___f_3706_, v_as_3700_, v___x_3708_, v___x_3709_, v___x_3702_);
return v___x_3710_;
}
}
else
{
size_t v___x_3711_; size_t v___x_3712_; lean_object* v___x_3713_; 
v___x_3711_ = ((size_t)0ULL);
v___x_3712_ = lean_usize_of_nat(v___x_3703_);
v___x_3713_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3704_, v___f_3706_, v_as_3700_, v___x_3711_, v___x_3712_, v___x_3702_);
return v___x_3713_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_flatten___redArg(lean_object* v_xss_3715_){
_start:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; uint8_t v___x_3720_; 
v___x_3716_ = lean_unsigned_to_nat(0u);
v___x_3717_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3718_ = lean_array_get_size(v_xss_3715_);
v___x_3719_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3720_ = lean_nat_dec_lt(v___x_3716_, v___x_3718_);
if (v___x_3720_ == 0)
{
lean_dec_ref(v_xss_3715_);
return v___x_3717_;
}
else
{
lean_object* v___f_3721_; uint8_t v___x_3722_; 
v___f_3721_ = ((lean_object*)(l_Array_flatten___redArg___closed__0));
v___x_3722_ = lean_nat_dec_le(v___x_3718_, v___x_3718_);
if (v___x_3722_ == 0)
{
if (v___x_3720_ == 0)
{
lean_dec_ref(v_xss_3715_);
return v___x_3717_;
}
else
{
size_t v___x_3723_; size_t v___x_3724_; lean_object* v___x_3725_; 
v___x_3723_ = ((size_t)0ULL);
v___x_3724_ = lean_usize_of_nat(v___x_3718_);
v___x_3725_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3719_, v___f_3721_, v_xss_3715_, v___x_3723_, v___x_3724_, v___x_3717_);
return v___x_3725_;
}
}
else
{
size_t v___x_3726_; size_t v___x_3727_; lean_object* v___x_3728_; 
v___x_3726_ = ((size_t)0ULL);
v___x_3727_ = lean_usize_of_nat(v___x_3718_);
v___x_3728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3719_, v___f_3721_, v_xss_3715_, v___x_3726_, v___x_3727_, v___x_3717_);
return v___x_3728_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_flatten(lean_object* v_00_u03b1_3729_, lean_object* v_xss_3730_){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; uint8_t v___x_3735_; 
v___x_3731_ = lean_unsigned_to_nat(0u);
v___x_3732_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3733_ = lean_array_get_size(v_xss_3730_);
v___x_3734_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3735_ = lean_nat_dec_lt(v___x_3731_, v___x_3733_);
if (v___x_3735_ == 0)
{
lean_dec_ref(v_xss_3730_);
return v___x_3732_;
}
else
{
lean_object* v___f_3736_; uint8_t v___x_3737_; 
v___f_3736_ = ((lean_object*)(l_Array_flatten___redArg___closed__0));
v___x_3737_ = lean_nat_dec_le(v___x_3733_, v___x_3733_);
if (v___x_3737_ == 0)
{
if (v___x_3735_ == 0)
{
lean_dec_ref(v_xss_3730_);
return v___x_3732_;
}
else
{
size_t v___x_3738_; size_t v___x_3739_; lean_object* v___x_3740_; 
v___x_3738_ = ((size_t)0ULL);
v___x_3739_ = lean_usize_of_nat(v___x_3733_);
v___x_3740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3734_, v___f_3736_, v_xss_3730_, v___x_3738_, v___x_3739_, v___x_3732_);
return v___x_3740_;
}
}
else
{
size_t v___x_3741_; size_t v___x_3742_; lean_object* v___x_3743_; 
v___x_3741_ = ((size_t)0ULL);
v___x_3742_ = lean_usize_of_nat(v___x_3733_);
v___x_3743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3734_, v___f_3736_, v_xss_3730_, v___x_3741_, v___x_3742_, v___x_3732_);
return v___x_3743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse_loop___redArg(lean_object* v_as_3744_, lean_object* v_i_3745_, lean_object* v_j_3746_){
_start:
{
uint8_t v___x_3747_; 
v___x_3747_ = lean_nat_dec_lt(v_i_3745_, v_j_3746_);
if (v___x_3747_ == 0)
{
lean_dec(v_j_3746_);
lean_dec(v_i_3745_);
return v_as_3744_;
}
else
{
lean_object* v_as_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; 
v_as_3748_ = lean_array_fswap(v_as_3744_, v_i_3745_, v_j_3746_);
v___x_3749_ = lean_unsigned_to_nat(1u);
v___x_3750_ = lean_nat_add(v_i_3745_, v___x_3749_);
lean_dec(v_i_3745_);
v___x_3751_ = lean_nat_sub(v_j_3746_, v___x_3749_);
lean_dec(v_j_3746_);
v_as_3744_ = v_as_3748_;
v_i_3745_ = v___x_3750_;
v_j_3746_ = v___x_3751_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse_loop(lean_object* v_00_u03b1_3753_, lean_object* v_as_3754_, lean_object* v_i_3755_, lean_object* v_j_3756_){
_start:
{
lean_object* v___x_3757_; 
v___x_3757_ = l_Array_reverse_loop___redArg(v_as_3754_, v_i_3755_, v_j_3756_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l_Array_reverse___redArg(lean_object* v_as_3758_){
_start:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; uint8_t v___x_3761_; 
v___x_3759_ = lean_array_get_size(v_as_3758_);
v___x_3760_ = lean_unsigned_to_nat(1u);
v___x_3761_ = lean_nat_dec_le(v___x_3759_, v___x_3760_);
if (v___x_3761_ == 0)
{
lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3762_ = lean_unsigned_to_nat(0u);
v___x_3763_ = lean_nat_sub(v___x_3759_, v___x_3760_);
v___x_3764_ = l_Array_reverse_loop___redArg(v_as_3758_, v___x_3762_, v___x_3763_);
return v___x_3764_;
}
else
{
return v_as_3758_;
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse(lean_object* v_00_u03b1_3765_, lean_object* v_as_3766_){
_start:
{
lean_object* v___x_3767_; 
v___x_3767_ = l_Array_reverse___redArg(v_as_3766_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg___lam__0(lean_object* v_p_3768_, lean_object* v_x1_3769_, lean_object* v_x2_3770_){
_start:
{
lean_object* v___x_3771_; uint8_t v___x_3772_; 
lean_inc(v_x2_3770_);
v___x_3771_ = lean_apply_1(v_p_3768_, v_x2_3770_);
v___x_3772_ = lean_unbox(v___x_3771_);
if (v___x_3772_ == 0)
{
lean_dec(v_x2_3770_);
return v_x1_3769_;
}
else
{
lean_object* v___x_3773_; 
v___x_3773_ = lean_array_push(v_x1_3769_, v_x2_3770_);
return v___x_3773_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg(lean_object* v_p_3776_, lean_object* v_as_3777_, lean_object* v_start_3778_, lean_object* v_stop_3779_){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; uint8_t v___x_3782_; 
v___x_3780_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3781_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3782_ = lean_nat_dec_lt(v_start_3778_, v_stop_3779_);
if (v___x_3782_ == 0)
{
lean_dec_ref(v_as_3777_);
lean_dec_ref(v_p_3776_);
return v___x_3780_;
}
else
{
lean_object* v___f_3783_; lean_object* v___x_3784_; uint8_t v___x_3785_; 
v___f_3783_ = lean_alloc_closure((void*)(l_Array_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3783_, 0, v_p_3776_);
v___x_3784_ = lean_array_get_size(v_as_3777_);
v___x_3785_ = lean_nat_dec_le(v_stop_3779_, v___x_3784_);
if (v___x_3785_ == 0)
{
uint8_t v___x_3786_; 
v___x_3786_ = lean_nat_dec_lt(v_start_3778_, v___x_3784_);
if (v___x_3786_ == 0)
{
lean_dec_ref(v___f_3783_);
lean_dec_ref(v_as_3777_);
return v___x_3780_;
}
else
{
size_t v___x_3787_; size_t v___x_3788_; lean_object* v___x_3789_; 
v___x_3787_ = lean_usize_of_nat(v_start_3778_);
v___x_3788_ = lean_usize_of_nat(v___x_3784_);
v___x_3789_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3781_, v___f_3783_, v_as_3777_, v___x_3787_, v___x_3788_, v___x_3780_);
return v___x_3789_;
}
}
else
{
size_t v___x_3790_; size_t v___x_3791_; lean_object* v___x_3792_; 
v___x_3790_ = lean_usize_of_nat(v_start_3778_);
v___x_3791_ = lean_usize_of_nat(v_stop_3779_);
v___x_3792_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3781_, v___f_3783_, v_as_3777_, v___x_3790_, v___x_3791_, v___x_3780_);
return v___x_3792_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg___boxed(lean_object* v_p_3793_, lean_object* v_as_3794_, lean_object* v_start_3795_, lean_object* v_stop_3796_){
_start:
{
lean_object* v_res_3797_; 
v_res_3797_ = l_Array_filter___redArg(v_p_3793_, v_as_3794_, v_start_3795_, v_stop_3796_);
lean_dec(v_stop_3796_);
lean_dec(v_start_3795_);
return v_res_3797_;
}
}
LEAN_EXPORT lean_object* l_Array_filter(lean_object* v_00_u03b1_3798_, lean_object* v_p_3799_, lean_object* v_as_3800_, lean_object* v_start_3801_, lean_object* v_stop_3802_){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; uint8_t v___x_3805_; 
v___x_3803_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3804_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3805_ = lean_nat_dec_lt(v_start_3801_, v_stop_3802_);
if (v___x_3805_ == 0)
{
lean_dec_ref(v_as_3800_);
lean_dec_ref(v_p_3799_);
return v___x_3803_;
}
else
{
lean_object* v___f_3806_; lean_object* v___x_3807_; uint8_t v___x_3808_; 
v___f_3806_ = lean_alloc_closure((void*)(l_Array_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3806_, 0, v_p_3799_);
v___x_3807_ = lean_array_get_size(v_as_3800_);
v___x_3808_ = lean_nat_dec_le(v_stop_3802_, v___x_3807_);
if (v___x_3808_ == 0)
{
uint8_t v___x_3809_; 
v___x_3809_ = lean_nat_dec_lt(v_start_3801_, v___x_3807_);
if (v___x_3809_ == 0)
{
lean_dec_ref(v___f_3806_);
lean_dec_ref(v_as_3800_);
return v___x_3803_;
}
else
{
size_t v___x_3810_; size_t v___x_3811_; lean_object* v___x_3812_; 
v___x_3810_ = lean_usize_of_nat(v_start_3801_);
v___x_3811_ = lean_usize_of_nat(v___x_3807_);
v___x_3812_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3804_, v___f_3806_, v_as_3800_, v___x_3810_, v___x_3811_, v___x_3803_);
return v___x_3812_;
}
}
else
{
size_t v___x_3813_; size_t v___x_3814_; lean_object* v___x_3815_; 
v___x_3813_ = lean_usize_of_nat(v_start_3801_);
v___x_3814_ = lean_usize_of_nat(v_stop_3802_);
v___x_3815_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3804_, v___f_3806_, v_as_3800_, v___x_3813_, v___x_3814_, v___x_3803_);
return v___x_3815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___boxed(lean_object* v_00_u03b1_3816_, lean_object* v_p_3817_, lean_object* v_as_3818_, lean_object* v_start_3819_, lean_object* v_stop_3820_){
_start:
{
lean_object* v_res_3821_; 
v_res_3821_ = l_Array_filter(v_00_u03b1_3816_, v_p_3817_, v_as_3818_, v_start_3819_, v_stop_3820_);
lean_dec(v_stop_3820_);
lean_dec(v_start_3819_);
return v_res_3821_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0(lean_object* v_toPure_3822_, lean_object* v_acc_3823_, lean_object* v_a_3824_, uint8_t v_____do__lift_3825_){
_start:
{
if (v_____do__lift_3825_ == 0)
{
lean_object* v___x_3826_; 
lean_dec(v_a_3824_);
v___x_3826_ = lean_apply_2(v_toPure_3822_, lean_box(0), v_acc_3823_);
return v___x_3826_;
}
else
{
lean_object* v___x_3827_; lean_object* v___x_3828_; 
v___x_3827_ = lean_array_push(v_acc_3823_, v_a_3824_);
v___x_3828_ = lean_apply_2(v_toPure_3822_, lean_box(0), v___x_3827_);
return v___x_3828_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0___boxed(lean_object* v_toPure_3829_, lean_object* v_acc_3830_, lean_object* v_a_3831_, lean_object* v_____do__lift_3832_){
_start:
{
uint8_t v_____do__lift_91__boxed_3833_; lean_object* v_res_3834_; 
v_____do__lift_91__boxed_3833_ = lean_unbox(v_____do__lift_3832_);
v_res_3834_ = l_Array_filterM___redArg___lam__0(v_toPure_3829_, v_acc_3830_, v_a_3831_, v_____do__lift_91__boxed_3833_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__1(lean_object* v_toPure_3835_, lean_object* v_p_3836_, lean_object* v_toBind_3837_, lean_object* v_acc_3838_, lean_object* v_a_3839_){
_start:
{
lean_object* v___f_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
lean_inc(v_a_3839_);
v___f_3840_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3840_, 0, v_toPure_3835_);
lean_closure_set(v___f_3840_, 1, v_acc_3838_);
lean_closure_set(v___f_3840_, 2, v_a_3839_);
v___x_3841_ = lean_apply_1(v_p_3836_, v_a_3839_);
v___x_3842_ = lean_apply_4(v_toBind_3837_, lean_box(0), lean_box(0), v___x_3841_, v___f_3840_);
return v___x_3842_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg(lean_object* v_inst_3843_, lean_object* v_p_3844_, lean_object* v_as_3845_, lean_object* v_start_3846_, lean_object* v_stop_3847_){
_start:
{
lean_object* v_toApplicative_3848_; lean_object* v_toBind_3849_; lean_object* v_toPure_3850_; lean_object* v___x_3851_; uint8_t v___x_3852_; 
v_toApplicative_3848_ = lean_ctor_get(v_inst_3843_, 0);
v_toBind_3849_ = lean_ctor_get(v_inst_3843_, 1);
v_toPure_3850_ = lean_ctor_get(v_toApplicative_3848_, 1);
v___x_3851_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3852_ = lean_nat_dec_lt(v_start_3846_, v_stop_3847_);
if (v___x_3852_ == 0)
{
lean_object* v___x_3853_; 
lean_inc(v_toPure_3850_);
lean_dec_ref(v_as_3845_);
lean_dec(v_p_3844_);
lean_dec_ref(v_inst_3843_);
v___x_3853_ = lean_apply_2(v_toPure_3850_, lean_box(0), v___x_3851_);
return v___x_3853_;
}
else
{
lean_object* v___f_3854_; lean_object* v___x_3855_; uint8_t v___x_3856_; 
lean_inc(v_toBind_3849_);
lean_inc(v_toPure_3850_);
v___f_3854_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3854_, 0, v_toPure_3850_);
lean_closure_set(v___f_3854_, 1, v_p_3844_);
lean_closure_set(v___f_3854_, 2, v_toBind_3849_);
v___x_3855_ = lean_array_get_size(v_as_3845_);
v___x_3856_ = lean_nat_dec_le(v_stop_3847_, v___x_3855_);
if (v___x_3856_ == 0)
{
uint8_t v___x_3857_; 
v___x_3857_ = lean_nat_dec_lt(v_start_3846_, v___x_3855_);
if (v___x_3857_ == 0)
{
lean_object* v___x_3858_; 
lean_inc(v_toPure_3850_);
lean_dec_ref(v___f_3854_);
lean_dec_ref(v_as_3845_);
lean_dec_ref(v_inst_3843_);
v___x_3858_ = lean_apply_2(v_toPure_3850_, lean_box(0), v___x_3851_);
return v___x_3858_;
}
else
{
size_t v___x_3859_; size_t v___x_3860_; lean_object* v___x_3861_; 
v___x_3859_ = lean_usize_of_nat(v_start_3846_);
v___x_3860_ = lean_usize_of_nat(v___x_3855_);
v___x_3861_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3843_, v___f_3854_, v_as_3845_, v___x_3859_, v___x_3860_, v___x_3851_);
return v___x_3861_;
}
}
else
{
size_t v___x_3862_; size_t v___x_3863_; lean_object* v___x_3864_; 
v___x_3862_ = lean_usize_of_nat(v_start_3846_);
v___x_3863_ = lean_usize_of_nat(v_stop_3847_);
v___x_3864_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3843_, v___f_3854_, v_as_3845_, v___x_3862_, v___x_3863_, v___x_3851_);
return v___x_3864_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___boxed(lean_object* v_inst_3865_, lean_object* v_p_3866_, lean_object* v_as_3867_, lean_object* v_start_3868_, lean_object* v_stop_3869_){
_start:
{
lean_object* v_res_3870_; 
v_res_3870_ = l_Array_filterM___redArg(v_inst_3865_, v_p_3866_, v_as_3867_, v_start_3868_, v_stop_3869_);
lean_dec(v_stop_3869_);
lean_dec(v_start_3868_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM(lean_object* v_m_3871_, lean_object* v_00_u03b1_3872_, lean_object* v_inst_3873_, lean_object* v_p_3874_, lean_object* v_as_3875_, lean_object* v_start_3876_, lean_object* v_stop_3877_){
_start:
{
lean_object* v_toApplicative_3878_; lean_object* v_toBind_3879_; lean_object* v_toPure_3880_; lean_object* v___x_3881_; uint8_t v___x_3882_; 
v_toApplicative_3878_ = lean_ctor_get(v_inst_3873_, 0);
v_toBind_3879_ = lean_ctor_get(v_inst_3873_, 1);
v_toPure_3880_ = lean_ctor_get(v_toApplicative_3878_, 1);
v___x_3881_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3882_ = lean_nat_dec_lt(v_start_3876_, v_stop_3877_);
if (v___x_3882_ == 0)
{
lean_object* v___x_3883_; 
lean_inc(v_toPure_3880_);
lean_dec_ref(v_as_3875_);
lean_dec(v_p_3874_);
lean_dec_ref(v_inst_3873_);
v___x_3883_ = lean_apply_2(v_toPure_3880_, lean_box(0), v___x_3881_);
return v___x_3883_;
}
else
{
lean_object* v___f_3884_; lean_object* v___x_3885_; uint8_t v___x_3886_; 
lean_inc(v_toBind_3879_);
lean_inc(v_toPure_3880_);
v___f_3884_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3884_, 0, v_toPure_3880_);
lean_closure_set(v___f_3884_, 1, v_p_3874_);
lean_closure_set(v___f_3884_, 2, v_toBind_3879_);
v___x_3885_ = lean_array_get_size(v_as_3875_);
v___x_3886_ = lean_nat_dec_le(v_stop_3877_, v___x_3885_);
if (v___x_3886_ == 0)
{
uint8_t v___x_3887_; 
v___x_3887_ = lean_nat_dec_lt(v_start_3876_, v___x_3885_);
if (v___x_3887_ == 0)
{
lean_object* v___x_3888_; 
lean_inc(v_toPure_3880_);
lean_dec_ref(v___f_3884_);
lean_dec_ref(v_as_3875_);
lean_dec_ref(v_inst_3873_);
v___x_3888_ = lean_apply_2(v_toPure_3880_, lean_box(0), v___x_3881_);
return v___x_3888_;
}
else
{
size_t v___x_3889_; size_t v___x_3890_; lean_object* v___x_3891_; 
v___x_3889_ = lean_usize_of_nat(v_start_3876_);
v___x_3890_ = lean_usize_of_nat(v___x_3885_);
v___x_3891_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3873_, v___f_3884_, v_as_3875_, v___x_3889_, v___x_3890_, v___x_3881_);
return v___x_3891_;
}
}
else
{
size_t v___x_3892_; size_t v___x_3893_; lean_object* v___x_3894_; 
v___x_3892_ = lean_usize_of_nat(v_start_3876_);
v___x_3893_ = lean_usize_of_nat(v_stop_3877_);
v___x_3894_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3873_, v___f_3884_, v_as_3875_, v___x_3892_, v___x_3893_, v___x_3881_);
return v___x_3894_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___boxed(lean_object* v_m_3895_, lean_object* v_00_u03b1_3896_, lean_object* v_inst_3897_, lean_object* v_p_3898_, lean_object* v_as_3899_, lean_object* v_start_3900_, lean_object* v_stop_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l_Array_filterM(v_m_3895_, v_00_u03b1_3896_, v_inst_3897_, v_p_3898_, v_as_3899_, v_start_3900_, v_stop_3901_);
lean_dec(v_stop_3901_);
lean_dec(v_start_3900_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___lam__1(lean_object* v_toPure_3903_, lean_object* v_p_3904_, lean_object* v_toBind_3905_, lean_object* v_a_3906_, lean_object* v_acc_3907_){
_start:
{
lean_object* v___f_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
lean_inc(v_a_3906_);
v___f_3908_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3908_, 0, v_toPure_3903_);
lean_closure_set(v___f_3908_, 1, v_acc_3907_);
lean_closure_set(v___f_3908_, 2, v_a_3906_);
v___x_3909_ = lean_apply_1(v_p_3904_, v_a_3906_);
v___x_3910_ = lean_apply_4(v_toBind_3905_, lean_box(0), lean_box(0), v___x_3909_, v___f_3908_);
return v___x_3910_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg(lean_object* v_inst_3912_, lean_object* v_p_3913_, lean_object* v_as_3914_, lean_object* v_start_3915_, lean_object* v_stop_3916_){
_start:
{
lean_object* v_toApplicative_3917_; lean_object* v_toFunctor_3918_; lean_object* v_toBind_3919_; lean_object* v_toPure_3920_; lean_object* v_map_3921_; lean_object* v___f_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; uint8_t v___x_3926_; 
v_toApplicative_3917_ = lean_ctor_get(v_inst_3912_, 0);
v_toFunctor_3918_ = lean_ctor_get(v_toApplicative_3917_, 0);
v_toBind_3919_ = lean_ctor_get(v_inst_3912_, 1);
v_toPure_3920_ = lean_ctor_get(v_toApplicative_3917_, 1);
v_map_3921_ = lean_ctor_get(v_toFunctor_3918_, 0);
lean_inc(v_map_3921_);
lean_inc(v_toBind_3919_);
lean_inc(v_toPure_3920_);
v___f_3922_ = lean_alloc_closure((void*)(l_Array_filterRevM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3922_, 0, v_toPure_3920_);
lean_closure_set(v___f_3922_, 1, v_p_3913_);
lean_closure_set(v___f_3922_, 2, v_toBind_3919_);
v___x_3923_ = ((lean_object*)(l_Array_filterRevM___redArg___closed__0));
v___x_3924_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3925_ = lean_array_get_size(v_as_3914_);
v___x_3926_ = lean_nat_dec_le(v_start_3915_, v___x_3925_);
if (v___x_3926_ == 0)
{
uint8_t v___x_3927_; 
v___x_3927_ = lean_nat_dec_lt(v_stop_3916_, v___x_3925_);
if (v___x_3927_ == 0)
{
lean_object* v___x_3928_; lean_object* v___x_3929_; 
lean_inc(v_toPure_3920_);
lean_dec_ref(v___f_3922_);
lean_dec_ref(v_as_3914_);
lean_dec_ref(v_inst_3912_);
v___x_3928_ = lean_apply_2(v_toPure_3920_, lean_box(0), v___x_3924_);
v___x_3929_ = lean_apply_4(v_map_3921_, lean_box(0), lean_box(0), v___x_3923_, v___x_3928_);
return v___x_3929_;
}
else
{
size_t v___x_3930_; size_t v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___x_3930_ = lean_usize_of_nat(v___x_3925_);
v___x_3931_ = lean_usize_of_nat(v_stop_3916_);
v___x_3932_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3912_, v___f_3922_, v_as_3914_, v___x_3930_, v___x_3931_, v___x_3924_);
v___x_3933_ = lean_apply_4(v_map_3921_, lean_box(0), lean_box(0), v___x_3923_, v___x_3932_);
return v___x_3933_;
}
}
else
{
uint8_t v___x_3934_; 
v___x_3934_ = lean_nat_dec_lt(v_stop_3916_, v_start_3915_);
if (v___x_3934_ == 0)
{
lean_object* v___x_3935_; lean_object* v___x_3936_; 
lean_inc(v_toPure_3920_);
lean_dec_ref(v___f_3922_);
lean_dec_ref(v_as_3914_);
lean_dec_ref(v_inst_3912_);
v___x_3935_ = lean_apply_2(v_toPure_3920_, lean_box(0), v___x_3924_);
v___x_3936_ = lean_apply_4(v_map_3921_, lean_box(0), lean_box(0), v___x_3923_, v___x_3935_);
return v___x_3936_;
}
else
{
size_t v___x_3937_; size_t v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; 
v___x_3937_ = lean_usize_of_nat(v_start_3915_);
v___x_3938_ = lean_usize_of_nat(v_stop_3916_);
v___x_3939_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3912_, v___f_3922_, v_as_3914_, v___x_3937_, v___x_3938_, v___x_3924_);
v___x_3940_ = lean_apply_4(v_map_3921_, lean_box(0), lean_box(0), v___x_3923_, v___x_3939_);
return v___x_3940_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___boxed(lean_object* v_inst_3941_, lean_object* v_p_3942_, lean_object* v_as_3943_, lean_object* v_start_3944_, lean_object* v_stop_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l_Array_filterRevM___redArg(v_inst_3941_, v_p_3942_, v_as_3943_, v_start_3944_, v_stop_3945_);
lean_dec(v_stop_3945_);
lean_dec(v_start_3944_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM(lean_object* v_m_3947_, lean_object* v_00_u03b1_3948_, lean_object* v_inst_3949_, lean_object* v_p_3950_, lean_object* v_as_3951_, lean_object* v_start_3952_, lean_object* v_stop_3953_){
_start:
{
lean_object* v_toApplicative_3954_; lean_object* v_toFunctor_3955_; lean_object* v_toBind_3956_; lean_object* v_toPure_3957_; lean_object* v_map_3958_; lean_object* v___f_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; uint8_t v___x_3963_; 
v_toApplicative_3954_ = lean_ctor_get(v_inst_3949_, 0);
v_toFunctor_3955_ = lean_ctor_get(v_toApplicative_3954_, 0);
v_toBind_3956_ = lean_ctor_get(v_inst_3949_, 1);
v_toPure_3957_ = lean_ctor_get(v_toApplicative_3954_, 1);
v_map_3958_ = lean_ctor_get(v_toFunctor_3955_, 0);
lean_inc(v_map_3958_);
lean_inc(v_toBind_3956_);
lean_inc(v_toPure_3957_);
v___f_3959_ = lean_alloc_closure((void*)(l_Array_filterRevM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3959_, 0, v_toPure_3957_);
lean_closure_set(v___f_3959_, 1, v_p_3950_);
lean_closure_set(v___f_3959_, 2, v_toBind_3956_);
v___x_3960_ = ((lean_object*)(l_Array_filterRevM___redArg___closed__0));
v___x_3961_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3962_ = lean_array_get_size(v_as_3951_);
v___x_3963_ = lean_nat_dec_le(v_start_3952_, v___x_3962_);
if (v___x_3963_ == 0)
{
uint8_t v___x_3964_; 
v___x_3964_ = lean_nat_dec_lt(v_stop_3953_, v___x_3962_);
if (v___x_3964_ == 0)
{
lean_object* v___x_3965_; lean_object* v___x_3966_; 
lean_inc(v_toPure_3957_);
lean_dec_ref(v___f_3959_);
lean_dec_ref(v_as_3951_);
lean_dec_ref(v_inst_3949_);
v___x_3965_ = lean_apply_2(v_toPure_3957_, lean_box(0), v___x_3961_);
v___x_3966_ = lean_apply_4(v_map_3958_, lean_box(0), lean_box(0), v___x_3960_, v___x_3965_);
return v___x_3966_;
}
else
{
size_t v___x_3967_; size_t v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3967_ = lean_usize_of_nat(v___x_3962_);
v___x_3968_ = lean_usize_of_nat(v_stop_3953_);
v___x_3969_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3949_, v___f_3959_, v_as_3951_, v___x_3967_, v___x_3968_, v___x_3961_);
v___x_3970_ = lean_apply_4(v_map_3958_, lean_box(0), lean_box(0), v___x_3960_, v___x_3969_);
return v___x_3970_;
}
}
else
{
uint8_t v___x_3971_; 
v___x_3971_ = lean_nat_dec_lt(v_stop_3953_, v_start_3952_);
if (v___x_3971_ == 0)
{
lean_object* v___x_3972_; lean_object* v___x_3973_; 
lean_inc(v_toPure_3957_);
lean_dec_ref(v___f_3959_);
lean_dec_ref(v_as_3951_);
lean_dec_ref(v_inst_3949_);
v___x_3972_ = lean_apply_2(v_toPure_3957_, lean_box(0), v___x_3961_);
v___x_3973_ = lean_apply_4(v_map_3958_, lean_box(0), lean_box(0), v___x_3960_, v___x_3972_);
return v___x_3973_;
}
else
{
size_t v___x_3974_; size_t v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; 
v___x_3974_ = lean_usize_of_nat(v_start_3952_);
v___x_3975_ = lean_usize_of_nat(v_stop_3953_);
v___x_3976_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3949_, v___f_3959_, v_as_3951_, v___x_3974_, v___x_3975_, v___x_3961_);
v___x_3977_ = lean_apply_4(v_map_3958_, lean_box(0), lean_box(0), v___x_3960_, v___x_3976_);
return v___x_3977_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___boxed(lean_object* v_m_3978_, lean_object* v_00_u03b1_3979_, lean_object* v_inst_3980_, lean_object* v_p_3981_, lean_object* v_as_3982_, lean_object* v_start_3983_, lean_object* v_stop_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l_Array_filterRevM(v_m_3978_, v_00_u03b1_3979_, v_inst_3980_, v_p_3981_, v_as_3982_, v_start_3983_, v_stop_3984_);
lean_dec(v_stop_3984_);
lean_dec(v_start_3983_);
return v_res_3985_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__0(lean_object* v_toPure_3986_, lean_object* v_bs_3987_, lean_object* v_____do__lift_3988_){
_start:
{
if (lean_obj_tag(v_____do__lift_3988_) == 0)
{
lean_object* v___x_3989_; 
v___x_3989_ = lean_apply_2(v_toPure_3986_, lean_box(0), v_bs_3987_);
return v___x_3989_;
}
else
{
lean_object* v_val_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; 
v_val_3990_ = lean_ctor_get(v_____do__lift_3988_, 0);
lean_inc(v_val_3990_);
lean_dec_ref_known(v_____do__lift_3988_, 1);
v___x_3991_ = lean_array_push(v_bs_3987_, v_val_3990_);
v___x_3992_ = lean_apply_2(v_toPure_3986_, lean_box(0), v___x_3991_);
return v___x_3992_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__1(lean_object* v_toPure_3993_, lean_object* v_f_3994_, lean_object* v_toBind_3995_, lean_object* v_bs_3996_, lean_object* v_a_3997_){
_start:
{
lean_object* v___f_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; 
v___f_3998_ = lean_alloc_closure((void*)(l_Array_filterMapM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3998_, 0, v_toPure_3993_);
lean_closure_set(v___f_3998_, 1, v_bs_3996_);
v___x_3999_ = lean_apply_1(v_f_3994_, v_a_3997_);
v___x_4000_ = lean_apply_4(v_toBind_3995_, lean_box(0), lean_box(0), v___x_3999_, v___f_3998_);
return v___x_4000_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg(lean_object* v_inst_4001_, lean_object* v_f_4002_, lean_object* v_as_4003_, lean_object* v_start_4004_, lean_object* v_stop_4005_){
_start:
{
lean_object* v_toApplicative_4006_; lean_object* v_toBind_4007_; lean_object* v_toPure_4008_; lean_object* v___x_4009_; uint8_t v___x_4010_; 
v_toApplicative_4006_ = lean_ctor_get(v_inst_4001_, 0);
v_toBind_4007_ = lean_ctor_get(v_inst_4001_, 1);
v_toPure_4008_ = lean_ctor_get(v_toApplicative_4006_, 1);
v___x_4009_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4010_ = lean_nat_dec_lt(v_start_4004_, v_stop_4005_);
if (v___x_4010_ == 0)
{
lean_object* v___x_4011_; 
lean_inc(v_toPure_4008_);
lean_dec_ref(v_as_4003_);
lean_dec(v_f_4002_);
lean_dec_ref(v_inst_4001_);
v___x_4011_ = lean_apply_2(v_toPure_4008_, lean_box(0), v___x_4009_);
return v___x_4011_;
}
else
{
lean_object* v___f_4012_; lean_object* v___x_4013_; uint8_t v___x_4014_; 
lean_inc(v_toBind_4007_);
lean_inc(v_toPure_4008_);
v___f_4012_ = lean_alloc_closure((void*)(l_Array_filterMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_4012_, 0, v_toPure_4008_);
lean_closure_set(v___f_4012_, 1, v_f_4002_);
lean_closure_set(v___f_4012_, 2, v_toBind_4007_);
v___x_4013_ = lean_array_get_size(v_as_4003_);
v___x_4014_ = lean_nat_dec_le(v_stop_4005_, v___x_4013_);
if (v___x_4014_ == 0)
{
uint8_t v___x_4015_; 
v___x_4015_ = lean_nat_dec_lt(v_start_4004_, v___x_4013_);
if (v___x_4015_ == 0)
{
lean_object* v___x_4016_; 
lean_inc(v_toPure_4008_);
lean_dec_ref(v___f_4012_);
lean_dec_ref(v_as_4003_);
lean_dec_ref(v_inst_4001_);
v___x_4016_ = lean_apply_2(v_toPure_4008_, lean_box(0), v___x_4009_);
return v___x_4016_;
}
else
{
size_t v___x_4017_; size_t v___x_4018_; lean_object* v___x_4019_; 
v___x_4017_ = lean_usize_of_nat(v_start_4004_);
v___x_4018_ = lean_usize_of_nat(v___x_4013_);
v___x_4019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_4001_, v___f_4012_, v_as_4003_, v___x_4017_, v___x_4018_, v___x_4009_);
return v___x_4019_;
}
}
else
{
size_t v___x_4020_; size_t v___x_4021_; lean_object* v___x_4022_; 
v___x_4020_ = lean_usize_of_nat(v_start_4004_);
v___x_4021_ = lean_usize_of_nat(v_stop_4005_);
v___x_4022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_4001_, v___f_4012_, v_as_4003_, v___x_4020_, v___x_4021_, v___x_4009_);
return v___x_4022_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___boxed(lean_object* v_inst_4023_, lean_object* v_f_4024_, lean_object* v_as_4025_, lean_object* v_start_4026_, lean_object* v_stop_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l_Array_filterMapM___redArg(v_inst_4023_, v_f_4024_, v_as_4025_, v_start_4026_, v_stop_4027_);
lean_dec(v_stop_4027_);
lean_dec(v_start_4026_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM(lean_object* v_00_u03b1_4029_, lean_object* v_m_4030_, lean_object* v_00_u03b2_4031_, lean_object* v_inst_4032_, lean_object* v_f_4033_, lean_object* v_as_4034_, lean_object* v_start_4035_, lean_object* v_stop_4036_){
_start:
{
lean_object* v___x_4037_; 
v___x_4037_ = l_Array_filterMapM___redArg(v_inst_4032_, v_f_4033_, v_as_4034_, v_start_4035_, v_stop_4036_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___boxed(lean_object* v_00_u03b1_4038_, lean_object* v_m_4039_, lean_object* v_00_u03b2_4040_, lean_object* v_inst_4041_, lean_object* v_f_4042_, lean_object* v_as_4043_, lean_object* v_start_4044_, lean_object* v_stop_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l_Array_filterMapM(v_00_u03b1_4038_, v_m_4039_, v_00_u03b2_4040_, v_inst_4041_, v_f_4042_, v_as_4043_, v_start_4044_, v_stop_4045_);
lean_dec(v_stop_4045_);
lean_dec(v_start_4044_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___redArg(lean_object* v_f_4047_, lean_object* v_as_4048_, lean_object* v_start_4049_, lean_object* v_stop_4050_){
_start:
{
lean_object* v___f_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___f_4051_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4051_, 0, v_f_4047_);
v___x_4052_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4053_ = l_Array_filterMapM___redArg(v___x_4052_, v___f_4051_, v_as_4048_, v_start_4049_, v_stop_4050_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___redArg___boxed(lean_object* v_f_4054_, lean_object* v_as_4055_, lean_object* v_start_4056_, lean_object* v_stop_4057_){
_start:
{
lean_object* v_res_4058_; 
v_res_4058_ = l_Array_filterMap___redArg(v_f_4054_, v_as_4055_, v_start_4056_, v_stop_4057_);
lean_dec(v_stop_4057_);
lean_dec(v_start_4056_);
return v_res_4058_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap(lean_object* v_00_u03b1_4059_, lean_object* v_00_u03b2_4060_, lean_object* v_f_4061_, lean_object* v_as_4062_, lean_object* v_start_4063_, lean_object* v_stop_4064_){
_start:
{
lean_object* v___f_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; 
v___f_4065_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4065_, 0, v_f_4061_);
v___x_4066_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4067_ = l_Array_filterMapM___redArg(v___x_4066_, v___f_4065_, v_as_4062_, v_start_4063_, v_stop_4064_);
return v___x_4067_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___boxed(lean_object* v_00_u03b1_4068_, lean_object* v_00_u03b2_4069_, lean_object* v_f_4070_, lean_object* v_as_4071_, lean_object* v_start_4072_, lean_object* v_stop_4073_){
_start:
{
lean_object* v_res_4074_; 
v_res_4074_ = l_Array_filterMap(v_00_u03b1_4068_, v_00_u03b2_4069_, v_f_4070_, v_as_4071_, v_start_4072_, v_stop_4073_);
lean_dec(v_stop_4073_);
lean_dec(v_start_4072_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg___lam__0(lean_object* v_lt_4075_, lean_object* v_x1_4076_, lean_object* v_x2_4077_){
_start:
{
lean_object* v___x_4078_; uint8_t v___x_4079_; 
lean_inc(v_x2_4077_);
lean_inc(v_x1_4076_);
v___x_4078_ = lean_apply_2(v_lt_4075_, v_x1_4076_, v_x2_4077_);
v___x_4079_ = lean_unbox(v___x_4078_);
if (v___x_4079_ == 0)
{
lean_dec(v_x2_4077_);
return v_x1_4076_;
}
else
{
lean_dec(v_x1_4076_);
return v_x2_4077_;
}
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg(lean_object* v_as_4080_, lean_object* v_lt_4081_){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; uint8_t v___x_4084_; 
v___x_4082_ = lean_unsigned_to_nat(0u);
v___x_4083_ = lean_array_get_size(v_as_4080_);
v___x_4084_ = lean_nat_dec_lt(v___x_4082_, v___x_4083_);
if (v___x_4084_ == 0)
{
lean_object* v___x_4085_; 
lean_dec_ref(v_lt_4081_);
lean_dec_ref(v_as_4080_);
v___x_4085_ = lean_box(0);
return v___x_4085_;
}
else
{
lean_object* v_a0_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; uint8_t v___x_4089_; 
v_a0_4086_ = lean_array_fget(v_as_4080_, v___x_4082_);
v___x_4087_ = lean_unsigned_to_nat(1u);
v___x_4088_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4089_ = lean_nat_dec_lt(v___x_4087_, v___x_4083_);
if (v___x_4089_ == 0)
{
lean_object* v___x_4090_; 
lean_dec_ref(v_lt_4081_);
lean_dec_ref(v_as_4080_);
v___x_4090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4090_, 0, v_a0_4086_);
return v___x_4090_;
}
else
{
lean_object* v___f_4091_; uint8_t v___x_4092_; 
v___f_4091_ = lean_alloc_closure((void*)(l_Array_getMax_x3f___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4091_, 0, v_lt_4081_);
v___x_4092_ = lean_nat_dec_le(v___x_4083_, v___x_4083_);
if (v___x_4092_ == 0)
{
if (v___x_4089_ == 0)
{
lean_object* v___x_4093_; 
lean_dec_ref(v___f_4091_);
lean_dec_ref(v_as_4080_);
v___x_4093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4093_, 0, v_a0_4086_);
return v___x_4093_;
}
else
{
size_t v___x_4094_; size_t v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; 
v___x_4094_ = ((size_t)1ULL);
v___x_4095_ = lean_usize_of_nat(v___x_4083_);
v___x_4096_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4088_, v___f_4091_, v_as_4080_, v___x_4094_, v___x_4095_, v_a0_4086_);
v___x_4097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4096_);
return v___x_4097_;
}
}
else
{
size_t v___x_4098_; size_t v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4098_ = ((size_t)1ULL);
v___x_4099_ = lean_usize_of_nat(v___x_4083_);
v___x_4100_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4088_, v___f_4091_, v_as_4080_, v___x_4098_, v___x_4099_, v_a0_4086_);
v___x_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
return v___x_4101_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f(lean_object* v_00_u03b1_4102_, lean_object* v_as_4103_, lean_object* v_lt_4104_){
_start:
{
lean_object* v___x_4105_; 
v___x_4105_ = l_Array_getMax_x3f___redArg(v_as_4103_, v_lt_4104_);
return v___x_4105_;
}
}
LEAN_EXPORT lean_object* l_Array_partition___redArg___lam__0(lean_object* v_p_4106_, lean_object* v_a_4107_, lean_object* v_x_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v_fst_4110_; lean_object* v_snd_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4127_; 
v_fst_4110_ = lean_ctor_get(v___y_4109_, 0);
v_snd_4111_ = lean_ctor_get(v___y_4109_, 1);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___y_4109_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4113_ = v___y_4109_;
v_isShared_4114_ = v_isSharedCheck_4127_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_snd_4111_);
lean_inc(v_fst_4110_);
lean_dec(v___y_4109_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4127_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4115_; uint8_t v___x_4116_; 
lean_inc(v_a_4107_);
v___x_4115_ = lean_apply_1(v_p_4106_, v_a_4107_);
v___x_4116_ = lean_unbox(v___x_4115_);
if (v___x_4116_ == 0)
{
lean_object* v___x_4117_; lean_object* v___x_4119_; 
v___x_4117_ = lean_array_push(v_snd_4111_, v_a_4107_);
if (v_isShared_4114_ == 0)
{
lean_ctor_set(v___x_4113_, 1, v___x_4117_);
v___x_4119_ = v___x_4113_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v_fst_4110_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_4117_);
v___x_4119_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
lean_object* v___x_4120_; 
v___x_4120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4119_);
return v___x_4120_;
}
}
else
{
lean_object* v___x_4122_; lean_object* v___x_4124_; 
v___x_4122_ = lean_array_push(v_fst_4110_, v_a_4107_);
if (v_isShared_4114_ == 0)
{
lean_ctor_set(v___x_4113_, 0, v___x_4122_);
v___x_4124_ = v___x_4113_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v___x_4122_);
lean_ctor_set(v_reuseFailAlloc_4126_, 1, v_snd_4111_);
v___x_4124_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
lean_object* v___x_4125_; 
v___x_4125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4124_);
return v___x_4125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_partition___redArg(lean_object* v_p_4130_, lean_object* v_as_4131_){
_start:
{
lean_object* v___f_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; size_t v_sz_4135_; size_t v___x_4136_; lean_object* v___x_4137_; lean_object* v_fst_4138_; lean_object* v_snd_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4146_; 
v___f_4132_ = lean_alloc_closure((void*)(l_Array_partition___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4132_, 0, v_p_4130_);
v___x_4133_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4134_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v_sz_4135_ = lean_array_size(v_as_4131_);
v___x_4136_ = ((size_t)0ULL);
v___x_4137_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_4133_, v_as_4131_, v___f_4132_, v_sz_4135_, v___x_4136_, v___x_4134_);
v_fst_4138_ = lean_ctor_get(v___x_4137_, 0);
v_snd_4139_ = lean_ctor_get(v___x_4137_, 1);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4137_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4141_ = v___x_4137_;
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_snd_4139_);
lean_inc(v_fst_4138_);
lean_dec(v___x_4137_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v___x_4144_; 
if (v_isShared_4142_ == 0)
{
v___x_4144_ = v___x_4141_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v_fst_4138_);
lean_ctor_set(v_reuseFailAlloc_4145_, 1, v_snd_4139_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_partition(lean_object* v_00_u03b1_4147_, lean_object* v_p_4148_, lean_object* v_as_4149_){
_start:
{
lean_object* v___f_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; size_t v_sz_4153_; size_t v___x_4154_; lean_object* v___x_4155_; lean_object* v_fst_4156_; lean_object* v_snd_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4164_; 
v___f_4150_ = lean_alloc_closure((void*)(l_Array_partition___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4150_, 0, v_p_4148_);
v___x_4151_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4152_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v_sz_4153_ = lean_array_size(v_as_4149_);
v___x_4154_ = ((size_t)0ULL);
v___x_4155_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_4151_, v_as_4149_, v___f_4150_, v_sz_4153_, v___x_4154_, v___x_4152_);
v_fst_4156_ = lean_ctor_get(v___x_4155_, 0);
v_snd_4157_ = lean_ctor_get(v___x_4155_, 1);
v_isSharedCheck_4164_ = !lean_is_exclusive(v___x_4155_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4159_ = v___x_4155_;
v_isShared_4160_ = v_isSharedCheck_4164_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_snd_4157_);
lean_inc(v_fst_4156_);
lean_dec(v___x_4155_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4164_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4162_; 
if (v_isShared_4160_ == 0)
{
v___x_4162_ = v___x_4159_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v_fst_4156_);
lean_ctor_set(v_reuseFailAlloc_4163_, 1, v_snd_4157_);
v___x_4162_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
return v___x_4162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_popWhile___redArg(lean_object* v_p_4165_, lean_object* v_as_4166_){
_start:
{
lean_object* v___x_4167_; lean_object* v___x_4168_; uint8_t v___x_4169_; 
v___x_4167_ = lean_unsigned_to_nat(0u);
v___x_4168_ = lean_array_get_size(v_as_4166_);
v___x_4169_ = lean_nat_dec_lt(v___x_4167_, v___x_4168_);
if (v___x_4169_ == 0)
{
lean_dec_ref(v_p_4165_);
return v_as_4166_;
}
else
{
lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; uint8_t v___x_4174_; 
v___x_4170_ = lean_unsigned_to_nat(1u);
v___x_4171_ = lean_nat_sub(v___x_4168_, v___x_4170_);
v___x_4172_ = lean_array_fget_borrowed(v_as_4166_, v___x_4171_);
lean_dec(v___x_4171_);
lean_inc_ref(v_p_4165_);
lean_inc(v___x_4172_);
v___x_4173_ = lean_apply_1(v_p_4165_, v___x_4172_);
v___x_4174_ = lean_unbox(v___x_4173_);
if (v___x_4174_ == 0)
{
lean_dec_ref(v_p_4165_);
return v_as_4166_;
}
else
{
lean_object* v___x_4175_; 
v___x_4175_ = lean_array_pop(v_as_4166_);
v_as_4166_ = v___x_4175_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_popWhile(lean_object* v_00_u03b1_4177_, lean_object* v_p_4178_, lean_object* v_as_4179_){
_start:
{
lean_object* v___x_4180_; 
v___x_4180_ = l_Array_popWhile___redArg(v_p_4178_, v_as_4179_);
return v___x_4180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(lean_object* v_p_4181_, lean_object* v_as_4182_, lean_object* v_i_4183_, lean_object* v_acc_4184_){
_start:
{
lean_object* v___x_4185_; uint8_t v___x_4186_; 
v___x_4185_ = lean_array_get_size(v_as_4182_);
v___x_4186_ = lean_nat_dec_lt(v_i_4183_, v___x_4185_);
if (v___x_4186_ == 0)
{
lean_dec(v_i_4183_);
lean_dec_ref(v_p_4181_);
return v_acc_4184_;
}
else
{
lean_object* v_a_4187_; lean_object* v___x_4188_; uint8_t v___x_4189_; 
v_a_4187_ = lean_array_fget_borrowed(v_as_4182_, v_i_4183_);
lean_inc_ref(v_p_4181_);
lean_inc(v_a_4187_);
v___x_4188_ = lean_apply_1(v_p_4181_, v_a_4187_);
v___x_4189_ = lean_unbox(v___x_4188_);
if (v___x_4189_ == 0)
{
lean_dec(v_i_4183_);
lean_dec_ref(v_p_4181_);
return v_acc_4184_;
}
else
{
lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; 
v___x_4190_ = lean_unsigned_to_nat(1u);
v___x_4191_ = lean_nat_add(v_i_4183_, v___x_4190_);
lean_dec(v_i_4183_);
lean_inc(v_a_4187_);
v___x_4192_ = lean_array_push(v_acc_4184_, v_a_4187_);
v_i_4183_ = v___x_4191_;
v_acc_4184_ = v___x_4192_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg___boxed(lean_object* v_p_4194_, lean_object* v_as_4195_, lean_object* v_i_4196_, lean_object* v_acc_4197_){
_start:
{
lean_object* v_res_4198_; 
v_res_4198_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4194_, v_as_4195_, v_i_4196_, v_acc_4197_);
lean_dec_ref(v_as_4195_);
return v_res_4198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(lean_object* v_00_u03b1_4199_, lean_object* v_p_4200_, lean_object* v_as_4201_, lean_object* v_i_4202_, lean_object* v_acc_4203_){
_start:
{
lean_object* v___x_4204_; 
v___x_4204_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4200_, v_as_4201_, v_i_4202_, v_acc_4203_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___boxed(lean_object* v_00_u03b1_4205_, lean_object* v_p_4206_, lean_object* v_as_4207_, lean_object* v_i_4208_, lean_object* v_acc_4209_){
_start:
{
lean_object* v_res_4210_; 
v_res_4210_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(v_00_u03b1_4205_, v_p_4206_, v_as_4207_, v_i_4208_, v_acc_4209_);
lean_dec_ref(v_as_4207_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg(lean_object* v_p_4211_, lean_object* v_as_4212_){
_start:
{
lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; 
v___x_4213_ = lean_unsigned_to_nat(0u);
v___x_4214_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4215_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4211_, v_as_4212_, v___x_4213_, v___x_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg___boxed(lean_object* v_p_4216_, lean_object* v_as_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l_Array_takeWhile___redArg(v_p_4216_, v_as_4217_);
lean_dec_ref(v_as_4217_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile(lean_object* v_00_u03b1_4219_, lean_object* v_p_4220_, lean_object* v_as_4221_){
_start:
{
lean_object* v___x_4222_; 
v___x_4222_ = l_Array_takeWhile___redArg(v_p_4220_, v_as_4221_);
return v___x_4222_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___boxed(lean_object* v_00_u03b1_4223_, lean_object* v_p_4224_, lean_object* v_as_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = l_Array_takeWhile(v_00_u03b1_4223_, v_p_4224_, v_as_4225_);
lean_dec_ref(v_as_4225_);
return v_res_4226_;
}
}
static lean_object* _init_l_Array_eraseIdx___auto__1(void){
_start:
{
lean_object* v___x_4227_; 
v___x_4227_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_4227_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx___redArg(lean_object* v_xs_4228_, lean_object* v_i_4229_){
_start:
{
lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; uint8_t v___x_4233_; 
v___x_4230_ = lean_unsigned_to_nat(1u);
v___x_4231_ = lean_nat_add(v_i_4229_, v___x_4230_);
v___x_4232_ = lean_array_get_size(v_xs_4228_);
v___x_4233_ = lean_nat_dec_lt(v___x_4231_, v___x_4232_);
if (v___x_4233_ == 0)
{
lean_object* v___x_4234_; 
lean_dec(v___x_4231_);
lean_dec(v_i_4229_);
v___x_4234_ = lean_array_pop(v_xs_4228_);
return v___x_4234_;
}
else
{
lean_object* v_xs_x27_4235_; 
v_xs_x27_4235_ = lean_array_fswap(v_xs_4228_, v___x_4231_, v_i_4229_);
lean_dec(v_i_4229_);
v_xs_4228_ = v_xs_x27_4235_;
v_i_4229_ = v___x_4231_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx(lean_object* v_00_u03b1_4237_, lean_object* v_xs_4238_, lean_object* v_i_4239_, lean_object* v_h_4240_){
_start:
{
lean_object* v___x_4241_; 
v___x_4241_ = l_Array_eraseIdx___redArg(v_xs_4238_, v_i_4239_);
return v___x_4241_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds___redArg(lean_object* v_xs_4242_, lean_object* v_i_4243_){
_start:
{
lean_object* v___x_4244_; uint8_t v___x_4245_; 
v___x_4244_ = lean_array_get_size(v_xs_4242_);
v___x_4245_ = lean_nat_dec_lt(v_i_4243_, v___x_4244_);
if (v___x_4245_ == 0)
{
lean_dec(v_i_4243_);
return v_xs_4242_;
}
else
{
lean_object* v___x_4246_; 
v___x_4246_ = l_Array_eraseIdx___redArg(v_xs_4242_, v_i_4243_);
return v___x_4246_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds(lean_object* v_00_u03b1_4247_, lean_object* v_xs_4248_, lean_object* v_i_4249_){
_start:
{
lean_object* v___x_4250_; 
v___x_4250_ = l_Array_eraseIdxIfInBounds___redArg(v_xs_4248_, v_i_4249_);
return v___x_4250_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(lean_object* v_msg_4251_){
_start:
{
lean_object* v___x_4252_; lean_object* v___x_4253_; 
v___x_4252_ = lean_obj_once(&l_Array_instInhabited___closed__0, &l_Array_instInhabited___closed__0_once, _init_l_Array_instInhabited___closed__0);
v___x_4253_ = lean_panic_fn_borrowed(v___x_4252_, v_msg_4251_);
return v___x_4253_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0(lean_object* v_00_u03b1_4254_, lean_object* v_msg_4255_){
_start:
{
lean_object* v___x_4256_; 
v___x_4256_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v_msg_4255_);
return v___x_4256_;
}
}
static lean_object* _init_l_Array_eraseIdx_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; 
v___x_4259_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__1));
v___x_4260_ = lean_unsigned_to_nat(47u);
v___x_4261_ = lean_unsigned_to_nat(1867u);
v___x_4262_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__0));
v___x_4263_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_4264_ = l_mkPanicMessageWithDecl(v___x_4263_, v___x_4262_, v___x_4261_, v___x_4260_, v___x_4259_);
return v___x_4264_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21___redArg(lean_object* v_xs_4265_, lean_object* v_i_4266_){
_start:
{
lean_object* v___x_4267_; uint8_t v___x_4268_; 
v___x_4267_ = lean_array_get_size(v_xs_4265_);
v___x_4268_ = lean_nat_dec_lt(v_i_4266_, v___x_4267_);
if (v___x_4268_ == 0)
{
lean_object* v___x_4269_; lean_object* v___x_4270_; 
lean_dec(v_i_4266_);
lean_dec_ref(v_xs_4265_);
v___x_4269_ = lean_obj_once(&l_Array_eraseIdx_x21___redArg___closed__2, &l_Array_eraseIdx_x21___redArg___closed__2_once, _init_l_Array_eraseIdx_x21___redArg___closed__2);
v___x_4270_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v___x_4269_);
return v___x_4270_;
}
else
{
lean_object* v___x_4271_; 
v___x_4271_ = l_Array_eraseIdx___redArg(v_xs_4265_, v_i_4266_);
return v___x_4271_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21(lean_object* v_00_u03b1_4272_, lean_object* v_xs_4273_, lean_object* v_i_4274_){
_start:
{
lean_object* v___x_4275_; 
v___x_4275_ = l_Array_eraseIdx_x21___redArg(v_xs_4273_, v_i_4274_);
return v___x_4275_;
}
}
LEAN_EXPORT lean_object* l_Array_erase___redArg(lean_object* v_inst_4276_, lean_object* v_as_4277_, lean_object* v_a_4278_){
_start:
{
lean_object* v___x_4279_; 
v___x_4279_ = l_Array_finIdxOf_x3f___redArg(v_inst_4276_, v_as_4277_, v_a_4278_);
if (lean_obj_tag(v___x_4279_) == 0)
{
return v_as_4277_;
}
else
{
lean_object* v_val_4280_; lean_object* v___x_4281_; 
v_val_4280_ = lean_ctor_get(v___x_4279_, 0);
lean_inc(v_val_4280_);
lean_dec_ref_known(v___x_4279_, 1);
v___x_4281_ = l_Array_eraseIdx___redArg(v_as_4277_, v_val_4280_);
return v___x_4281_;
}
}
}
LEAN_EXPORT lean_object* l_Array_erase(lean_object* v_00_u03b1_4282_, lean_object* v_inst_4283_, lean_object* v_as_4284_, lean_object* v_a_4285_){
_start:
{
lean_object* v___x_4286_; 
v___x_4286_ = l_Array_erase___redArg(v_inst_4283_, v_as_4284_, v_a_4285_);
return v___x_4286_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseP___redArg(lean_object* v_as_4287_, lean_object* v_p_4288_){
_start:
{
lean_object* v___x_4289_; lean_object* v___x_4290_; 
v___x_4289_ = lean_unsigned_to_nat(0u);
v___x_4290_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_4288_, v_as_4287_, v___x_4289_);
if (lean_obj_tag(v___x_4290_) == 0)
{
return v_as_4287_;
}
else
{
lean_object* v_val_4291_; lean_object* v___x_4292_; 
v_val_4291_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_val_4291_);
lean_dec_ref_known(v___x_4290_, 1);
v___x_4292_ = l_Array_eraseIdx___redArg(v_as_4287_, v_val_4291_);
return v___x_4292_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseP(lean_object* v_00_u03b1_4293_, lean_object* v_as_4294_, lean_object* v_p_4295_){
_start:
{
lean_object* v___x_4296_; 
v___x_4296_ = l_Array_eraseP___redArg(v_as_4294_, v_p_4295_);
return v___x_4296_;
}
}
static lean_object* _init_l_Array_insertIdx___auto__1(void){
_start:
{
lean_object* v___x_4297_; 
v___x_4297_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(lean_object* v_i_4298_, lean_object* v_as_4299_, lean_object* v_j_4300_){
_start:
{
uint8_t v___x_4301_; 
v___x_4301_ = lean_nat_dec_lt(v_i_4298_, v_j_4300_);
if (v___x_4301_ == 0)
{
lean_dec(v_j_4300_);
return v_as_4299_;
}
else
{
lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v_as_4304_; 
v___x_4302_ = lean_unsigned_to_nat(1u);
v___x_4303_ = lean_nat_sub(v_j_4300_, v___x_4302_);
v_as_4304_ = lean_array_fswap(v_as_4299_, v___x_4303_, v_j_4300_);
lean_dec(v_j_4300_);
v_as_4299_ = v_as_4304_;
v_j_4300_ = v___x_4303_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg___boxed(lean_object* v_i_4306_, lean_object* v_as_4307_, lean_object* v_j_4308_){
_start:
{
lean_object* v_res_4309_; 
v_res_4309_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4306_, v_as_4307_, v_j_4308_);
lean_dec(v_i_4306_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object* v_00_u03b1_4310_, lean_object* v_i_4311_, lean_object* v_as_4312_, lean_object* v_j_4313_){
_start:
{
lean_object* v___x_4314_; 
v___x_4314_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4311_, v_as_4312_, v_j_4313_);
return v___x_4314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___boxed(lean_object* v_00_u03b1_4315_, lean_object* v_i_4316_, lean_object* v_as_4317_, lean_object* v_j_4318_){
_start:
{
lean_object* v_res_4319_; 
v_res_4319_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(v_00_u03b1_4315_, v_i_4316_, v_as_4317_, v_j_4318_);
lean_dec(v_i_4316_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg(lean_object* v_as_4320_, lean_object* v_i_4321_, lean_object* v_a_4322_){
_start:
{
lean_object* v_j_4323_; lean_object* v_as_4324_; lean_object* v___x_4325_; 
v_j_4323_ = lean_array_get_size(v_as_4320_);
v_as_4324_ = lean_array_push(v_as_4320_, v_a_4322_);
v___x_4325_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4321_, v_as_4324_, v_j_4323_);
return v___x_4325_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg___boxed(lean_object* v_as_4326_, lean_object* v_i_4327_, lean_object* v_a_4328_){
_start:
{
lean_object* v_res_4329_; 
v_res_4329_ = l_Array_insertIdx___redArg(v_as_4326_, v_i_4327_, v_a_4328_);
lean_dec(v_i_4327_);
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx(lean_object* v_00_u03b1_4330_, lean_object* v_as_4331_, lean_object* v_i_4332_, lean_object* v_a_4333_, lean_object* v_x_4334_){
_start:
{
lean_object* v_j_4335_; lean_object* v_as_4336_; lean_object* v___x_4337_; 
v_j_4335_ = lean_array_get_size(v_as_4331_);
v_as_4336_ = lean_array_push(v_as_4331_, v_a_4333_);
v___x_4337_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4332_, v_as_4336_, v_j_4335_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___boxed(lean_object* v_00_u03b1_4338_, lean_object* v_as_4339_, lean_object* v_i_4340_, lean_object* v_a_4341_, lean_object* v_x_4342_){
_start:
{
lean_object* v_res_4343_; 
v_res_4343_ = l_Array_insertIdx(v_00_u03b1_4338_, v_as_4339_, v_i_4340_, v_a_4341_, v_x_4342_);
lean_dec(v_i_4340_);
return v_res_4343_;
}
}
static lean_object* _init_l_Array_insertIdx_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; 
v___x_4345_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__1));
v___x_4346_ = lean_unsigned_to_nat(7u);
v___x_4347_ = lean_unsigned_to_nat(1949u);
v___x_4348_ = ((lean_object*)(l_Array_insertIdx_x21___redArg___closed__0));
v___x_4349_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_4350_ = l_mkPanicMessageWithDecl(v___x_4349_, v___x_4348_, v___x_4347_, v___x_4346_, v___x_4345_);
return v___x_4350_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg(lean_object* v_as_4351_, lean_object* v_i_4352_, lean_object* v_a_4353_){
_start:
{
lean_object* v___x_4354_; uint8_t v___x_4355_; 
v___x_4354_ = lean_array_get_size(v_as_4351_);
v___x_4355_ = lean_nat_dec_le(v_i_4352_, v___x_4354_);
if (v___x_4355_ == 0)
{
lean_object* v___x_4356_; lean_object* v___x_4357_; 
lean_dec(v_a_4353_);
lean_dec_ref(v_as_4351_);
v___x_4356_ = lean_obj_once(&l_Array_insertIdx_x21___redArg___closed__1, &l_Array_insertIdx_x21___redArg___closed__1_once, _init_l_Array_insertIdx_x21___redArg___closed__1);
v___x_4357_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v___x_4356_);
return v___x_4357_;
}
else
{
lean_object* v_as_4358_; lean_object* v___x_4359_; 
v_as_4358_ = lean_array_push(v_as_4351_, v_a_4353_);
v___x_4359_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4352_, v_as_4358_, v___x_4354_);
return v___x_4359_;
}
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg___boxed(lean_object* v_as_4360_, lean_object* v_i_4361_, lean_object* v_a_4362_){
_start:
{
lean_object* v_res_4363_; 
v_res_4363_ = l_Array_insertIdx_x21___redArg(v_as_4360_, v_i_4361_, v_a_4362_);
lean_dec(v_i_4361_);
return v_res_4363_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21(lean_object* v_00_u03b1_4364_, lean_object* v_as_4365_, lean_object* v_i_4366_, lean_object* v_a_4367_){
_start:
{
lean_object* v___x_4368_; 
v___x_4368_ = l_Array_insertIdx_x21___redArg(v_as_4365_, v_i_4366_, v_a_4367_);
return v___x_4368_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___boxed(lean_object* v_00_u03b1_4369_, lean_object* v_as_4370_, lean_object* v_i_4371_, lean_object* v_a_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l_Array_insertIdx_x21(v_00_u03b1_4369_, v_as_4370_, v_i_4371_, v_a_4372_);
lean_dec(v_i_4371_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg(lean_object* v_as_4374_, lean_object* v_i_4375_, lean_object* v_a_4376_){
_start:
{
lean_object* v___x_4377_; uint8_t v___x_4378_; 
v___x_4377_ = lean_array_get_size(v_as_4374_);
v___x_4378_ = lean_nat_dec_le(v_i_4375_, v___x_4377_);
if (v___x_4378_ == 0)
{
lean_dec(v_a_4376_);
return v_as_4374_;
}
else
{
lean_object* v_as_4379_; lean_object* v___x_4380_; 
v_as_4379_ = lean_array_push(v_as_4374_, v_a_4376_);
v___x_4380_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4375_, v_as_4379_, v___x_4377_);
return v___x_4380_;
}
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg___boxed(lean_object* v_as_4381_, lean_object* v_i_4382_, lean_object* v_a_4383_){
_start:
{
lean_object* v_res_4384_; 
v_res_4384_ = l_Array_insertIdxIfInBounds___redArg(v_as_4381_, v_i_4382_, v_a_4383_);
lean_dec(v_i_4382_);
return v_res_4384_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds(lean_object* v_00_u03b1_4385_, lean_object* v_as_4386_, lean_object* v_i_4387_, lean_object* v_a_4388_){
_start:
{
lean_object* v___x_4389_; 
v___x_4389_ = l_Array_insertIdxIfInBounds___redArg(v_as_4386_, v_i_4387_, v_a_4388_);
return v___x_4389_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___boxed(lean_object* v_00_u03b1_4390_, lean_object* v_as_4391_, lean_object* v_i_4392_, lean_object* v_a_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l_Array_insertIdxIfInBounds(v_00_u03b1_4390_, v_as_4391_, v_i_4392_, v_a_4393_);
lean_dec(v_i_4392_);
return v_res_4394_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux___redArg(lean_object* v_inst_4395_, lean_object* v_as_4396_, lean_object* v_bs_4397_, lean_object* v_i_4398_){
_start:
{
lean_object* v___x_4399_; uint8_t v___x_4400_; 
v___x_4399_ = lean_array_get_size(v_as_4396_);
v___x_4400_ = lean_nat_dec_lt(v_i_4398_, v___x_4399_);
if (v___x_4400_ == 0)
{
uint8_t v___x_4401_; 
lean_dec(v_i_4398_);
lean_dec_ref(v_inst_4395_);
v___x_4401_ = 1;
return v___x_4401_;
}
else
{
lean_object* v_a_4402_; lean_object* v_b_4403_; lean_object* v___x_4404_; uint8_t v___x_4405_; 
v_a_4402_ = lean_array_fget_borrowed(v_as_4396_, v_i_4398_);
v_b_4403_ = lean_array_fget_borrowed(v_bs_4397_, v_i_4398_);
lean_inc_ref(v_inst_4395_);
lean_inc(v_b_4403_);
lean_inc(v_a_4402_);
v___x_4404_ = lean_apply_2(v_inst_4395_, v_a_4402_, v_b_4403_);
v___x_4405_ = lean_unbox(v___x_4404_);
if (v___x_4405_ == 0)
{
uint8_t v___x_4406_; 
lean_dec(v_i_4398_);
lean_dec_ref(v_inst_4395_);
v___x_4406_ = lean_unbox(v___x_4404_);
return v___x_4406_;
}
else
{
lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4407_ = lean_unsigned_to_nat(1u);
v___x_4408_ = lean_nat_add(v_i_4398_, v___x_4407_);
lean_dec(v_i_4398_);
v_i_4398_ = v___x_4408_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___redArg___boxed(lean_object* v_inst_4410_, lean_object* v_as_4411_, lean_object* v_bs_4412_, lean_object* v_i_4413_){
_start:
{
uint8_t v_res_4414_; lean_object* v_r_4415_; 
v_res_4414_ = l_Array_isPrefixOfAux___redArg(v_inst_4410_, v_as_4411_, v_bs_4412_, v_i_4413_);
lean_dec_ref(v_bs_4412_);
lean_dec_ref(v_as_4411_);
v_r_4415_ = lean_box(v_res_4414_);
return v_r_4415_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux(lean_object* v_00_u03b1_4416_, lean_object* v_inst_4417_, lean_object* v_as_4418_, lean_object* v_bs_4419_, lean_object* v_hle_4420_, lean_object* v_i_4421_){
_start:
{
uint8_t v___x_4422_; 
v___x_4422_ = l_Array_isPrefixOfAux___redArg(v_inst_4417_, v_as_4418_, v_bs_4419_, v_i_4421_);
return v___x_4422_;
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___boxed(lean_object* v_00_u03b1_4423_, lean_object* v_inst_4424_, lean_object* v_as_4425_, lean_object* v_bs_4426_, lean_object* v_hle_4427_, lean_object* v_i_4428_){
_start:
{
uint8_t v_res_4429_; lean_object* v_r_4430_; 
v_res_4429_ = l_Array_isPrefixOfAux(v_00_u03b1_4423_, v_inst_4424_, v_as_4425_, v_bs_4426_, v_hle_4427_, v_i_4428_);
lean_dec_ref(v_bs_4426_);
lean_dec_ref(v_as_4425_);
v_r_4430_ = lean_box(v_res_4429_);
return v_r_4430_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOf___redArg(lean_object* v_inst_4431_, lean_object* v_as_4432_, lean_object* v_bs_4433_){
_start:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; uint8_t v___x_4436_; 
v___x_4434_ = lean_array_get_size(v_as_4432_);
v___x_4435_ = lean_array_get_size(v_bs_4433_);
v___x_4436_ = lean_nat_dec_le(v___x_4434_, v___x_4435_);
if (v___x_4436_ == 0)
{
lean_dec_ref(v_inst_4431_);
return v___x_4436_;
}
else
{
lean_object* v___x_4437_; uint8_t v___x_4438_; 
v___x_4437_ = lean_unsigned_to_nat(0u);
v___x_4438_ = l_Array_isPrefixOfAux___redArg(v_inst_4431_, v_as_4432_, v_bs_4433_, v___x_4437_);
return v___x_4438_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOf___redArg___boxed(lean_object* v_inst_4439_, lean_object* v_as_4440_, lean_object* v_bs_4441_){
_start:
{
uint8_t v_res_4442_; lean_object* v_r_4443_; 
v_res_4442_ = l_Array_isPrefixOf___redArg(v_inst_4439_, v_as_4440_, v_bs_4441_);
lean_dec_ref(v_bs_4441_);
lean_dec_ref(v_as_4440_);
v_r_4443_ = lean_box(v_res_4442_);
return v_r_4443_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOf(lean_object* v_00_u03b1_4444_, lean_object* v_inst_4445_, lean_object* v_as_4446_, lean_object* v_bs_4447_){
_start:
{
uint8_t v___x_4448_; 
v___x_4448_ = l_Array_isPrefixOf___redArg(v_inst_4445_, v_as_4446_, v_bs_4447_);
return v___x_4448_;
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOf___boxed(lean_object* v_00_u03b1_4449_, lean_object* v_inst_4450_, lean_object* v_as_4451_, lean_object* v_bs_4452_){
_start:
{
uint8_t v_res_4453_; lean_object* v_r_4454_; 
v_res_4453_ = l_Array_isPrefixOf(v_00_u03b1_4449_, v_inst_4450_, v_as_4451_, v_bs_4452_);
lean_dec_ref(v_bs_4452_);
lean_dec_ref(v_as_4451_);
v_r_4454_ = lean_box(v_res_4453_);
return v_r_4454_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0___boxed(lean_object* v_i_4455_, lean_object* v_cs_4456_, lean_object* v_inst_4457_, lean_object* v_as_4458_, lean_object* v_bs_4459_, lean_object* v_f_4460_, lean_object* v_____do__lift_4461_){
_start:
{
lean_object* v_res_4462_; 
v_res_4462_ = l_Array_zipWithMAux___redArg___lam__0(v_i_4455_, v_cs_4456_, v_inst_4457_, v_as_4458_, v_bs_4459_, v_f_4460_, v_____do__lift_4461_);
lean_dec(v_i_4455_);
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg(lean_object* v_inst_4463_, lean_object* v_as_4464_, lean_object* v_bs_4465_, lean_object* v_f_4466_, lean_object* v_i_4467_, lean_object* v_cs_4468_){
_start:
{
lean_object* v_toApplicative_4469_; lean_object* v_toBind_4470_; lean_object* v_toPure_4471_; lean_object* v___x_4472_; uint8_t v___x_4473_; 
v_toApplicative_4469_ = lean_ctor_get(v_inst_4463_, 0);
v_toBind_4470_ = lean_ctor_get(v_inst_4463_, 1);
lean_inc(v_toBind_4470_);
v_toPure_4471_ = lean_ctor_get(v_toApplicative_4469_, 1);
v___x_4472_ = lean_array_get_size(v_as_4464_);
v___x_4473_ = lean_nat_dec_lt(v_i_4467_, v___x_4472_);
if (v___x_4473_ == 0)
{
lean_object* v___x_4474_; 
lean_inc(v_toPure_4471_);
lean_dec(v_toBind_4470_);
lean_dec(v_i_4467_);
lean_dec(v_f_4466_);
lean_dec_ref(v_bs_4465_);
lean_dec_ref(v_as_4464_);
lean_dec_ref(v_inst_4463_);
v___x_4474_ = lean_apply_2(v_toPure_4471_, lean_box(0), v_cs_4468_);
return v___x_4474_;
}
else
{
lean_object* v___x_4475_; uint8_t v___x_4476_; 
v___x_4475_ = lean_array_get_size(v_bs_4465_);
v___x_4476_ = lean_nat_dec_lt(v_i_4467_, v___x_4475_);
if (v___x_4476_ == 0)
{
lean_object* v___x_4477_; 
lean_inc(v_toPure_4471_);
lean_dec(v_toBind_4470_);
lean_dec(v_i_4467_);
lean_dec(v_f_4466_);
lean_dec_ref(v_bs_4465_);
lean_dec_ref(v_as_4464_);
lean_dec_ref(v_inst_4463_);
v___x_4477_ = lean_apply_2(v_toPure_4471_, lean_box(0), v_cs_4468_);
return v___x_4477_;
}
else
{
lean_object* v___f_4478_; lean_object* v_a_4479_; lean_object* v_b_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; 
lean_inc(v_f_4466_);
lean_inc_ref(v_bs_4465_);
lean_inc_ref(v_as_4464_);
lean_inc(v_i_4467_);
v___f_4478_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_4478_, 0, v_i_4467_);
lean_closure_set(v___f_4478_, 1, v_cs_4468_);
lean_closure_set(v___f_4478_, 2, v_inst_4463_);
lean_closure_set(v___f_4478_, 3, v_as_4464_);
lean_closure_set(v___f_4478_, 4, v_bs_4465_);
lean_closure_set(v___f_4478_, 5, v_f_4466_);
v_a_4479_ = lean_array_fget(v_as_4464_, v_i_4467_);
lean_dec_ref(v_as_4464_);
v_b_4480_ = lean_array_fget(v_bs_4465_, v_i_4467_);
lean_dec(v_i_4467_);
lean_dec_ref(v_bs_4465_);
v___x_4481_ = lean_apply_2(v_f_4466_, v_a_4479_, v_b_4480_);
v___x_4482_ = lean_apply_4(v_toBind_4470_, lean_box(0), lean_box(0), v___x_4481_, v___f_4478_);
return v___x_4482_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0(lean_object* v_i_4483_, lean_object* v_cs_4484_, lean_object* v_inst_4485_, lean_object* v_as_4486_, lean_object* v_bs_4487_, lean_object* v_f_4488_, lean_object* v_____do__lift_4489_){
_start:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4490_ = lean_unsigned_to_nat(1u);
v___x_4491_ = lean_nat_add(v_i_4483_, v___x_4490_);
v___x_4492_ = lean_array_push(v_cs_4484_, v_____do__lift_4489_);
v___x_4493_ = l_Array_zipWithMAux___redArg(v_inst_4485_, v_as_4486_, v_bs_4487_, v_f_4488_, v___x_4491_, v___x_4492_);
return v___x_4493_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux(lean_object* v_00_u03b1_4494_, lean_object* v_00_u03b2_4495_, lean_object* v_00_u03b3_4496_, lean_object* v_m_4497_, lean_object* v_inst_4498_, lean_object* v_as_4499_, lean_object* v_bs_4500_, lean_object* v_f_4501_, lean_object* v_i_4502_, lean_object* v_cs_4503_){
_start:
{
lean_object* v___x_4504_; 
v___x_4504_ = l_Array_zipWithMAux___redArg(v_inst_4498_, v_as_4499_, v_bs_4500_, v_f_4501_, v_i_4502_, v_cs_4503_);
return v___x_4504_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWith___redArg(lean_object* v_f_4505_, lean_object* v_as_4506_, lean_object* v_bs_4507_){
_start:
{
lean_object* v___f_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; 
v___f_4508_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4508_, 0, v_f_4505_);
v___x_4509_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4510_ = lean_unsigned_to_nat(0u);
v___x_4511_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4512_ = l_Array_zipWithMAux___redArg(v___x_4509_, v_as_4506_, v_bs_4507_, v___f_4508_, v___x_4510_, v___x_4511_);
return v___x_4512_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWith(lean_object* v_00_u03b1_4513_, lean_object* v_00_u03b2_4514_, lean_object* v_00_u03b3_4515_, lean_object* v_f_4516_, lean_object* v_as_4517_, lean_object* v_bs_4518_){
_start:
{
lean_object* v___f_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___f_4519_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4519_, 0, v_f_4516_);
v___x_4520_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4521_ = lean_unsigned_to_nat(0u);
v___x_4522_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4523_ = l_Array_zipWithMAux___redArg(v___x_4520_, v_as_4517_, v_bs_4518_, v___f_4519_, v___x_4521_, v___x_4522_);
return v___x_4523_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(lean_object* v_as_4524_, lean_object* v_bs_4525_, lean_object* v_i_4526_, lean_object* v_cs_4527_){
_start:
{
lean_object* v___x_4528_; uint8_t v___x_4529_; 
v___x_4528_ = lean_array_get_size(v_as_4524_);
v___x_4529_ = lean_nat_dec_lt(v_i_4526_, v___x_4528_);
if (v___x_4529_ == 0)
{
lean_dec(v_i_4526_);
return v_cs_4527_;
}
else
{
lean_object* v___x_4530_; uint8_t v___x_4531_; 
v___x_4530_ = lean_array_get_size(v_bs_4525_);
v___x_4531_ = lean_nat_dec_lt(v_i_4526_, v___x_4530_);
if (v___x_4531_ == 0)
{
lean_dec(v_i_4526_);
return v_cs_4527_;
}
else
{
lean_object* v_a_4532_; lean_object* v_b_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v_a_4532_ = lean_array_fget_borrowed(v_as_4524_, v_i_4526_);
v_b_4533_ = lean_array_fget_borrowed(v_bs_4525_, v_i_4526_);
lean_inc(v_b_4533_);
lean_inc(v_a_4532_);
v___x_4534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4534_, 0, v_a_4532_);
lean_ctor_set(v___x_4534_, 1, v_b_4533_);
v___x_4535_ = lean_unsigned_to_nat(1u);
v___x_4536_ = lean_nat_add(v_i_4526_, v___x_4535_);
lean_dec(v_i_4526_);
v___x_4537_ = lean_array_push(v_cs_4527_, v___x_4534_);
v_i_4526_ = v___x_4536_;
v_cs_4527_ = v___x_4537_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg___boxed(lean_object* v_as_4539_, lean_object* v_bs_4540_, lean_object* v_i_4541_, lean_object* v_cs_4542_){
_start:
{
lean_object* v_res_4543_; 
v_res_4543_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4539_, v_bs_4540_, v_i_4541_, v_cs_4542_);
lean_dec_ref(v_bs_4540_);
lean_dec_ref(v_as_4539_);
return v_res_4543_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___redArg(lean_object* v_as_4546_, lean_object* v_bs_4547_){
_start:
{
lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4548_ = lean_unsigned_to_nat(0u);
v___x_4549_ = ((lean_object*)(l_Array_zip___redArg___closed__0));
v___x_4550_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4546_, v_bs_4547_, v___x_4548_, v___x_4549_);
return v___x_4550_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___redArg___boxed(lean_object* v_as_4551_, lean_object* v_bs_4552_){
_start:
{
lean_object* v_res_4553_; 
v_res_4553_ = l_Array_zip___redArg(v_as_4551_, v_bs_4552_);
lean_dec_ref(v_bs_4552_);
lean_dec_ref(v_as_4551_);
return v_res_4553_;
}
}
LEAN_EXPORT lean_object* l_Array_zip(lean_object* v_00_u03b1_4554_, lean_object* v_00_u03b2_4555_, lean_object* v_as_4556_, lean_object* v_bs_4557_){
_start:
{
lean_object* v___x_4558_; 
v___x_4558_ = l_Array_zip___redArg(v_as_4556_, v_bs_4557_);
return v___x_4558_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___boxed(lean_object* v_00_u03b1_4559_, lean_object* v_00_u03b2_4560_, lean_object* v_as_4561_, lean_object* v_bs_4562_){
_start:
{
lean_object* v_res_4563_; 
v_res_4563_ = l_Array_zip(v_00_u03b1_4559_, v_00_u03b2_4560_, v_as_4561_, v_bs_4562_);
lean_dec_ref(v_bs_4562_);
lean_dec_ref(v_as_4561_);
return v_res_4563_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0(lean_object* v_00_u03b1_4564_, lean_object* v_00_u03b2_4565_, lean_object* v_as_4566_, lean_object* v_bs_4567_, lean_object* v_i_4568_, lean_object* v_cs_4569_){
_start:
{
lean_object* v___x_4570_; 
v___x_4570_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4566_, v_bs_4567_, v_i_4568_, v_cs_4569_);
return v___x_4570_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___boxed(lean_object* v_00_u03b1_4571_, lean_object* v_00_u03b2_4572_, lean_object* v_as_4573_, lean_object* v_bs_4574_, lean_object* v_i_4575_, lean_object* v_cs_4576_){
_start:
{
lean_object* v_res_4577_; 
v_res_4577_ = l_Array_zipWithMAux___at___00Array_zip_spec__0(v_00_u03b1_4571_, v_00_u03b2_4572_, v_as_4573_, v_bs_4574_, v_i_4575_, v_cs_4576_);
lean_dec_ref(v_bs_4574_);
lean_dec_ref(v_as_4573_);
return v_res_4577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(lean_object* v_f_4578_, lean_object* v_as_4579_, lean_object* v_bs_4580_, lean_object* v_i_4581_, lean_object* v_cs_4582_){
_start:
{
lean_object* v___y_4584_; lean_object* v___y_4585_; lean_object* v___y_4592_; lean_object* v___y_4599_; lean_object* v___x_4606_; lean_object* v___x_4607_; uint8_t v___x_4608_; 
v___x_4606_ = lean_array_get_size(v_as_4579_);
v___x_4607_ = lean_array_get_size(v_bs_4580_);
v___x_4608_ = lean_nat_dec_le(v___x_4606_, v___x_4607_);
if (v___x_4608_ == 0)
{
v___y_4599_ = v___x_4606_;
goto v___jp_4598_;
}
else
{
v___y_4599_ = v___x_4607_;
goto v___jp_4598_;
}
v___jp_4583_:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; 
v___x_4586_ = lean_unsigned_to_nat(1u);
v___x_4587_ = lean_nat_add(v_i_4581_, v___x_4586_);
lean_dec(v_i_4581_);
lean_inc(v_f_4578_);
v___x_4588_ = lean_apply_2(v_f_4578_, v___y_4584_, v___y_4585_);
v___x_4589_ = lean_array_push(v_cs_4582_, v___x_4588_);
v_i_4581_ = v___x_4587_;
v_cs_4582_ = v___x_4589_;
goto _start;
}
v___jp_4591_:
{
lean_object* v___x_4593_; uint8_t v___x_4594_; 
v___x_4593_ = lean_array_get_size(v_bs_4580_);
v___x_4594_ = lean_nat_dec_lt(v_i_4581_, v___x_4593_);
if (v___x_4594_ == 0)
{
lean_object* v___x_4595_; 
v___x_4595_ = lean_box(0);
v___y_4584_ = v___y_4592_;
v___y_4585_ = v___x_4595_;
goto v___jp_4583_;
}
else
{
lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4596_ = lean_array_fget_borrowed(v_bs_4580_, v_i_4581_);
lean_inc(v___x_4596_);
v___x_4597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4597_, 0, v___x_4596_);
v___y_4584_ = v___y_4592_;
v___y_4585_ = v___x_4597_;
goto v___jp_4583_;
}
}
v___jp_4598_:
{
uint8_t v___x_4600_; 
v___x_4600_ = lean_nat_dec_lt(v_i_4581_, v___y_4599_);
lean_dec(v___y_4599_);
if (v___x_4600_ == 0)
{
lean_dec(v_i_4581_);
lean_dec(v_f_4578_);
return v_cs_4582_;
}
else
{
lean_object* v___x_4601_; uint8_t v___x_4602_; 
v___x_4601_ = lean_array_get_size(v_as_4579_);
v___x_4602_ = lean_nat_dec_lt(v_i_4581_, v___x_4601_);
if (v___x_4602_ == 0)
{
lean_object* v___x_4603_; 
v___x_4603_ = lean_box(0);
v___y_4592_ = v___x_4603_;
goto v___jp_4591_;
}
else
{
lean_object* v___x_4604_; lean_object* v___x_4605_; 
v___x_4604_ = lean_array_fget_borrowed(v_as_4579_, v_i_4581_);
lean_inc(v___x_4604_);
v___x_4605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4605_, 0, v___x_4604_);
v___y_4592_ = v___x_4605_;
goto v___jp_4591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg___boxed(lean_object* v_f_4609_, lean_object* v_as_4610_, lean_object* v_bs_4611_, lean_object* v_i_4612_, lean_object* v_cs_4613_){
_start:
{
lean_object* v_res_4614_; 
v_res_4614_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4609_, v_as_4610_, v_bs_4611_, v_i_4612_, v_cs_4613_);
lean_dec_ref(v_bs_4611_);
lean_dec_ref(v_as_4610_);
return v_res_4614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(lean_object* v_00_u03b1_4615_, lean_object* v_00_u03b2_4616_, lean_object* v_00_u03b3_4617_, lean_object* v_f_4618_, lean_object* v_as_4619_, lean_object* v_bs_4620_, lean_object* v_i_4621_, lean_object* v_cs_4622_){
_start:
{
lean_object* v___x_4623_; 
v___x_4623_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4618_, v_as_4619_, v_bs_4620_, v_i_4621_, v_cs_4622_);
return v___x_4623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___boxed(lean_object* v_00_u03b1_4624_, lean_object* v_00_u03b2_4625_, lean_object* v_00_u03b3_4626_, lean_object* v_f_4627_, lean_object* v_as_4628_, lean_object* v_bs_4629_, lean_object* v_i_4630_, lean_object* v_cs_4631_){
_start:
{
lean_object* v_res_4632_; 
v_res_4632_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(v_00_u03b1_4624_, v_00_u03b2_4625_, v_00_u03b3_4626_, v_f_4627_, v_as_4628_, v_bs_4629_, v_i_4630_, v_cs_4631_);
lean_dec_ref(v_bs_4629_);
lean_dec_ref(v_as_4628_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg(lean_object* v_f_4633_, lean_object* v_as_4634_, lean_object* v_bs_4635_){
_start:
{
lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; 
v___x_4636_ = lean_unsigned_to_nat(0u);
v___x_4637_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4638_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4633_, v_as_4634_, v_bs_4635_, v___x_4636_, v___x_4637_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg___boxed(lean_object* v_f_4639_, lean_object* v_as_4640_, lean_object* v_bs_4641_){
_start:
{
lean_object* v_res_4642_; 
v_res_4642_ = l_Array_zipWithAll___redArg(v_f_4639_, v_as_4640_, v_bs_4641_);
lean_dec_ref(v_bs_4641_);
lean_dec_ref(v_as_4640_);
return v_res_4642_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll(lean_object* v_00_u03b1_4643_, lean_object* v_00_u03b2_4644_, lean_object* v_00_u03b3_4645_, lean_object* v_f_4646_, lean_object* v_as_4647_, lean_object* v_bs_4648_){
_start:
{
lean_object* v___x_4649_; 
v___x_4649_ = l_Array_zipWithAll___redArg(v_f_4646_, v_as_4647_, v_bs_4648_);
return v___x_4649_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___boxed(lean_object* v_00_u03b1_4650_, lean_object* v_00_u03b2_4651_, lean_object* v_00_u03b3_4652_, lean_object* v_f_4653_, lean_object* v_as_4654_, lean_object* v_bs_4655_){
_start:
{
lean_object* v_res_4656_; 
v_res_4656_ = l_Array_zipWithAll(v_00_u03b1_4650_, v_00_u03b2_4651_, v_00_u03b3_4652_, v_f_4653_, v_as_4654_, v_bs_4655_);
lean_dec_ref(v_bs_4655_);
lean_dec_ref(v_as_4654_);
return v_res_4656_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithM___redArg(lean_object* v_inst_4657_, lean_object* v_f_4658_, lean_object* v_as_4659_, lean_object* v_bs_4660_){
_start:
{
lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; 
v___x_4661_ = lean_unsigned_to_nat(0u);
v___x_4662_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4663_ = l_Array_zipWithMAux___redArg(v_inst_4657_, v_as_4659_, v_bs_4660_, v_f_4658_, v___x_4661_, v___x_4662_);
return v___x_4663_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithM(lean_object* v_00_u03b1_4664_, lean_object* v_00_u03b2_4665_, lean_object* v_00_u03b3_4666_, lean_object* v_m_4667_, lean_object* v_inst_4668_, lean_object* v_f_4669_, lean_object* v_as_4670_, lean_object* v_bs_4671_){
_start:
{
lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; 
v___x_4672_ = lean_unsigned_to_nat(0u);
v___x_4673_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4674_ = l_Array_zipWithMAux___redArg(v_inst_4668_, v_as_4670_, v_bs_4671_, v_f_4669_, v___x_4672_, v___x_4673_);
return v___x_4674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(lean_object* v_as_4675_, size_t v_i_4676_, size_t v_stop_4677_, lean_object* v_b_4678_){
_start:
{
uint8_t v___x_4679_; 
v___x_4679_ = lean_usize_dec_eq(v_i_4676_, v_stop_4677_);
if (v___x_4679_ == 0)
{
lean_object* v_fst_4680_; lean_object* v_snd_4681_; lean_object* v___x_4682_; lean_object* v_fst_4683_; lean_object* v_snd_4684_; lean_object* v___x_4686_; uint8_t v_isShared_4687_; uint8_t v_isSharedCheck_4696_; 
v_fst_4680_ = lean_ctor_get(v_b_4678_, 0);
lean_inc(v_fst_4680_);
v_snd_4681_ = lean_ctor_get(v_b_4678_, 1);
lean_inc(v_snd_4681_);
lean_dec_ref(v_b_4678_);
v___x_4682_ = lean_array_uget(v_as_4675_, v_i_4676_);
v_fst_4683_ = lean_ctor_get(v___x_4682_, 0);
v_snd_4684_ = lean_ctor_get(v___x_4682_, 1);
v_isSharedCheck_4696_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4696_ == 0)
{
v___x_4686_ = v___x_4682_;
v_isShared_4687_ = v_isSharedCheck_4696_;
goto v_resetjp_4685_;
}
else
{
lean_inc(v_snd_4684_);
lean_inc(v_fst_4683_);
lean_dec(v___x_4682_);
v___x_4686_ = lean_box(0);
v_isShared_4687_ = v_isSharedCheck_4696_;
goto v_resetjp_4685_;
}
v_resetjp_4685_:
{
lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4691_; 
v___x_4688_ = lean_array_push(v_fst_4680_, v_fst_4683_);
v___x_4689_ = lean_array_push(v_snd_4681_, v_snd_4684_);
if (v_isShared_4687_ == 0)
{
lean_ctor_set(v___x_4686_, 1, v___x_4689_);
lean_ctor_set(v___x_4686_, 0, v___x_4688_);
v___x_4691_ = v___x_4686_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4695_; 
v_reuseFailAlloc_4695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4695_, 0, v___x_4688_);
lean_ctor_set(v_reuseFailAlloc_4695_, 1, v___x_4689_);
v___x_4691_ = v_reuseFailAlloc_4695_;
goto v_reusejp_4690_;
}
v_reusejp_4690_:
{
size_t v___x_4692_; size_t v___x_4693_; 
v___x_4692_ = ((size_t)1ULL);
v___x_4693_ = lean_usize_add(v_i_4676_, v___x_4692_);
v_i_4676_ = v___x_4693_;
v_b_4678_ = v___x_4691_;
goto _start;
}
}
}
else
{
return v_b_4678_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg___boxed(lean_object* v_as_4697_, lean_object* v_i_4698_, lean_object* v_stop_4699_, lean_object* v_b_4700_){
_start:
{
size_t v_i_boxed_4701_; size_t v_stop_boxed_4702_; lean_object* v_res_4703_; 
v_i_boxed_4701_ = lean_unbox_usize(v_i_4698_);
lean_dec(v_i_4698_);
v_stop_boxed_4702_ = lean_unbox_usize(v_stop_4699_);
lean_dec(v_stop_4699_);
v_res_4703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4697_, v_i_boxed_4701_, v_stop_boxed_4702_, v_b_4700_);
lean_dec_ref(v_as_4697_);
return v_res_4703_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip___redArg(lean_object* v_as_4704_){
_start:
{
lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; uint8_t v___x_4708_; 
v___x_4705_ = lean_unsigned_to_nat(0u);
v___x_4706_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v___x_4707_ = lean_array_get_size(v_as_4704_);
v___x_4708_ = lean_nat_dec_lt(v___x_4705_, v___x_4707_);
if (v___x_4708_ == 0)
{
return v___x_4706_;
}
else
{
uint8_t v___x_4709_; 
v___x_4709_ = lean_nat_dec_le(v___x_4707_, v___x_4707_);
if (v___x_4709_ == 0)
{
if (v___x_4708_ == 0)
{
return v___x_4706_;
}
else
{
size_t v___x_4710_; size_t v___x_4711_; lean_object* v___x_4712_; 
v___x_4710_ = ((size_t)0ULL);
v___x_4711_ = lean_usize_of_nat(v___x_4707_);
v___x_4712_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4704_, v___x_4710_, v___x_4711_, v___x_4706_);
return v___x_4712_;
}
}
else
{
size_t v___x_4713_; size_t v___x_4714_; lean_object* v___x_4715_; 
v___x_4713_ = ((size_t)0ULL);
v___x_4714_ = lean_usize_of_nat(v___x_4707_);
v___x_4715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4704_, v___x_4713_, v___x_4714_, v___x_4706_);
return v___x_4715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_unzip___redArg___boxed(lean_object* v_as_4716_){
_start:
{
lean_object* v_res_4717_; 
v_res_4717_ = l_Array_unzip___redArg(v_as_4716_);
lean_dec_ref(v_as_4716_);
return v_res_4717_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip(lean_object* v_00_u03b1_4718_, lean_object* v_00_u03b2_4719_, lean_object* v_as_4720_){
_start:
{
lean_object* v___x_4721_; 
v___x_4721_ = l_Array_unzip___redArg(v_as_4720_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip___boxed(lean_object* v_00_u03b1_4722_, lean_object* v_00_u03b2_4723_, lean_object* v_as_4724_){
_start:
{
lean_object* v_res_4725_; 
v_res_4725_ = l_Array_unzip(v_00_u03b1_4722_, v_00_u03b2_4723_, v_as_4724_);
lean_dec_ref(v_as_4724_);
return v_res_4725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(lean_object* v_00_u03b1_4726_, lean_object* v_00_u03b2_4727_, lean_object* v_as_4728_, size_t v_i_4729_, size_t v_stop_4730_, lean_object* v_b_4731_){
_start:
{
lean_object* v___x_4732_; 
v___x_4732_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4728_, v_i_4729_, v_stop_4730_, v_b_4731_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___boxed(lean_object* v_00_u03b1_4733_, lean_object* v_00_u03b2_4734_, lean_object* v_as_4735_, lean_object* v_i_4736_, lean_object* v_stop_4737_, lean_object* v_b_4738_){
_start:
{
size_t v_i_boxed_4739_; size_t v_stop_boxed_4740_; lean_object* v_res_4741_; 
v_i_boxed_4739_ = lean_unbox_usize(v_i_4736_);
lean_dec(v_i_4736_);
v_stop_boxed_4740_ = lean_unbox_usize(v_stop_4737_);
lean_dec(v_stop_4737_);
v_res_4741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(v_00_u03b1_4733_, v_00_u03b2_4734_, v_as_4735_, v_i_boxed_4739_, v_stop_boxed_4740_, v_b_4738_);
lean_dec_ref(v_as_4735_);
return v_res_4741_;
}
}
LEAN_EXPORT lean_object* l_Array_replace___redArg(lean_object* v_inst_4742_, lean_object* v_xs_4743_, lean_object* v_a_4744_, lean_object* v_b_4745_){
_start:
{
lean_object* v___x_4746_; 
v___x_4746_ = l_Array_finIdxOf_x3f___redArg(v_inst_4742_, v_xs_4743_, v_a_4744_);
if (lean_obj_tag(v___x_4746_) == 0)
{
lean_dec(v_b_4745_);
return v_xs_4743_;
}
else
{
lean_object* v_val_4747_; lean_object* v___x_4748_; 
v_val_4747_ = lean_ctor_get(v___x_4746_, 0);
lean_inc(v_val_4747_);
lean_dec_ref_known(v___x_4746_, 1);
v___x_4748_ = lean_array_fset(v_xs_4743_, v_val_4747_, v_b_4745_);
lean_dec(v_val_4747_);
return v___x_4748_;
}
}
}
LEAN_EXPORT lean_object* l_Array_replace(lean_object* v_00_u03b1_4749_, lean_object* v_inst_4750_, lean_object* v_xs_4751_, lean_object* v_a_4752_, lean_object* v_b_4753_){
_start:
{
lean_object* v___x_4754_; 
v___x_4754_ = l_Array_replace___redArg(v_inst_4750_, v_xs_4751_, v_a_4752_, v_b_4753_);
return v___x_4754_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT___redArg(){
_start:
{
lean_object* v___x_4756_; 
v___x_4756_ = lean_box(0);
return v___x_4756_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT___redArg___boxed(lean_object* v___dummy_4757_){
_start:
{
lean_object* v_res_4758_; 
v_res_4758_ = l_Array_instLT___redArg();
return v_res_4758_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT(lean_object* v_00_u03b1_4759_, lean_object* v_inst_4760_){
_start:
{
lean_object* v___x_4761_; 
v___x_4761_ = lean_box(0);
return v___x_4761_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE___redArg(){
_start:
{
lean_object* v___x_4763_; 
v___x_4763_ = lean_box(0);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE___redArg___boxed(lean_object* v___dummy_4764_){
_start:
{
lean_object* v_res_4765_; 
v_res_4765_ = l_Array_instLE___redArg();
return v_res_4765_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE(lean_object* v_00_u03b1_4766_, lean_object* v_inst_4767_){
_start:
{
lean_object* v___x_4768_; 
v___x_4768_ = lean_box(0);
return v___x_4768_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___redArg(lean_object* v_n_4769_, lean_object* v_a_4770_, lean_object* v_xs_4771_){
_start:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4772_ = lean_array_get_size(v_xs_4771_);
v___x_4773_ = lean_nat_sub(v_n_4769_, v___x_4772_);
v___x_4774_ = lean_mk_array(v___x_4773_, v_a_4770_);
v___x_4775_ = l_Array_append___redArg(v___x_4774_, v_xs_4771_);
return v___x_4775_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___redArg___boxed(lean_object* v_n_4776_, lean_object* v_a_4777_, lean_object* v_xs_4778_){
_start:
{
lean_object* v_res_4779_; 
v_res_4779_ = l_Array_leftpad___redArg(v_n_4776_, v_a_4777_, v_xs_4778_);
lean_dec_ref(v_xs_4778_);
lean_dec(v_n_4776_);
return v_res_4779_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad(lean_object* v_00_u03b1_4780_, lean_object* v_n_4781_, lean_object* v_a_4782_, lean_object* v_xs_4783_){
_start:
{
lean_object* v___x_4784_; 
v___x_4784_ = l_Array_leftpad___redArg(v_n_4781_, v_a_4782_, v_xs_4783_);
return v___x_4784_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___boxed(lean_object* v_00_u03b1_4785_, lean_object* v_n_4786_, lean_object* v_a_4787_, lean_object* v_xs_4788_){
_start:
{
lean_object* v_res_4789_; 
v_res_4789_ = l_Array_leftpad(v_00_u03b1_4785_, v_n_4786_, v_a_4787_, v_xs_4788_);
lean_dec_ref(v_xs_4788_);
lean_dec(v_n_4786_);
return v_res_4789_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___redArg(lean_object* v_n_4790_, lean_object* v_a_4791_, lean_object* v_xs_4792_){
_start:
{
lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___x_4793_ = lean_array_get_size(v_xs_4792_);
v___x_4794_ = lean_nat_sub(v_n_4790_, v___x_4793_);
v___x_4795_ = lean_mk_array(v___x_4794_, v_a_4791_);
v___x_4796_ = l_Array_append___redArg(v_xs_4792_, v___x_4795_);
lean_dec_ref(v___x_4795_);
return v___x_4796_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___redArg___boxed(lean_object* v_n_4797_, lean_object* v_a_4798_, lean_object* v_xs_4799_){
_start:
{
lean_object* v_res_4800_; 
v_res_4800_ = l_Array_rightpad___redArg(v_n_4797_, v_a_4798_, v_xs_4799_);
lean_dec(v_n_4797_);
return v_res_4800_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad(lean_object* v_00_u03b1_4801_, lean_object* v_n_4802_, lean_object* v_a_4803_, lean_object* v_xs_4804_){
_start:
{
lean_object* v___x_4805_; 
v___x_4805_ = l_Array_rightpad___redArg(v_n_4802_, v_a_4803_, v_xs_4804_);
return v___x_4805_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___boxed(lean_object* v_00_u03b1_4806_, lean_object* v_n_4807_, lean_object* v_a_4808_, lean_object* v_xs_4809_){
_start:
{
lean_object* v_res_4810_; 
v_res_4810_ = l_Array_rightpad(v_00_u03b1_4806_, v_n_4807_, v_a_4808_, v_xs_4809_);
lean_dec(v_n_4807_);
return v_res_4810_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0(lean_object* v_x_4811_){
_start:
{
lean_inc(v_x_4811_);
return v_x_4811_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0___boxed(lean_object* v_x_4812_){
_start:
{
lean_object* v_res_4813_; 
v_res_4813_ = l_Array_reduceOption___redArg___lam__0(v_x_4812_);
lean_dec(v_x_4812_);
return v_res_4813_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg(lean_object* v_as_4815_){
_start:
{
lean_object* v___f_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; 
v___f_4816_ = ((lean_object*)(l_Array_reduceOption___redArg___closed__0));
v___x_4817_ = lean_unsigned_to_nat(0u);
v___x_4818_ = lean_array_get_size(v_as_4815_);
v___x_4819_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4820_ = l_Array_filterMapM___redArg(v___x_4819_, v___f_4816_, v_as_4815_, v___x_4817_, v___x_4818_);
return v___x_4820_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption(lean_object* v_00_u03b1_4821_, lean_object* v_as_4822_){
_start:
{
lean_object* v___f_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
v___f_4823_ = ((lean_object*)(l_Array_reduceOption___redArg___closed__0));
v___x_4824_ = lean_unsigned_to_nat(0u);
v___x_4825_ = lean_array_get_size(v_as_4822_);
v___x_4826_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4827_ = l_Array_filterMapM___redArg(v___x_4826_, v___f_4823_, v_as_4822_, v___x_4824_, v___x_4825_);
return v___x_4827_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg___lam__0(lean_object* v_inst_4828_, lean_object* v_x1_4829_, lean_object* v_x2_4830_){
_start:
{
lean_object* v_fst_4831_; lean_object* v_snd_4832_; lean_object* v___x_4833_; uint8_t v___x_4834_; 
v_fst_4831_ = lean_ctor_get(v_x1_4829_, 0);
v_snd_4832_ = lean_ctor_get(v_x1_4829_, 1);
lean_inc(v_fst_4831_);
lean_inc(v_x2_4830_);
v___x_4833_ = lean_apply_2(v_inst_4828_, v_x2_4830_, v_fst_4831_);
v___x_4834_ = lean_unbox(v___x_4833_);
if (v___x_4834_ == 0)
{
lean_object* v___x_4836_; uint8_t v_isShared_4837_; uint8_t v_isSharedCheck_4842_; 
lean_inc(v_snd_4832_);
lean_inc(v_fst_4831_);
v_isSharedCheck_4842_ = !lean_is_exclusive(v_x1_4829_);
if (v_isSharedCheck_4842_ == 0)
{
lean_object* v_unused_4843_; lean_object* v_unused_4844_; 
v_unused_4843_ = lean_ctor_get(v_x1_4829_, 1);
lean_dec(v_unused_4843_);
v_unused_4844_ = lean_ctor_get(v_x1_4829_, 0);
lean_dec(v_unused_4844_);
v___x_4836_ = v_x1_4829_;
v_isShared_4837_ = v_isSharedCheck_4842_;
goto v_resetjp_4835_;
}
else
{
lean_dec(v_x1_4829_);
v___x_4836_ = lean_box(0);
v_isShared_4837_ = v_isSharedCheck_4842_;
goto v_resetjp_4835_;
}
v_resetjp_4835_:
{
lean_object* v___x_4838_; lean_object* v___x_4840_; 
v___x_4838_ = lean_array_push(v_snd_4832_, v_fst_4831_);
if (v_isShared_4837_ == 0)
{
lean_ctor_set(v___x_4836_, 1, v___x_4838_);
lean_ctor_set(v___x_4836_, 0, v_x2_4830_);
v___x_4840_ = v___x_4836_;
goto v_reusejp_4839_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v_x2_4830_);
lean_ctor_set(v_reuseFailAlloc_4841_, 1, v___x_4838_);
v___x_4840_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4839_;
}
v_reusejp_4839_:
{
return v___x_4840_;
}
}
}
else
{
lean_dec(v_x2_4830_);
return v_x1_4829_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg(lean_object* v_inst_4845_, lean_object* v_as_4846_){
_start:
{
lean_object* v___y_4848_; lean_object* v___x_4852_; lean_object* v___x_4853_; uint8_t v___x_4854_; 
v___x_4852_ = lean_unsigned_to_nat(0u);
v___x_4853_ = lean_array_get_size(v_as_4846_);
v___x_4854_ = lean_nat_dec_lt(v___x_4852_, v___x_4853_);
if (v___x_4854_ == 0)
{
lean_object* v___x_4855_; 
lean_dec_ref(v_as_4846_);
lean_dec_ref(v_inst_4845_);
v___x_4855_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
return v___x_4855_;
}
else
{
lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; 
v___x_4856_ = lean_array_fget_borrowed(v_as_4846_, v___x_4852_);
v___x_4857_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4858_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
if (v___x_4854_ == 0)
{
lean_object* v___x_4859_; 
lean_inc(v___x_4856_);
lean_dec_ref(v_as_4846_);
lean_dec_ref(v_inst_4845_);
v___x_4859_ = lean_array_push(v___x_4857_, v___x_4856_);
return v___x_4859_;
}
else
{
lean_object* v___f_4860_; lean_object* v___x_4861_; uint8_t v___x_4862_; 
v___f_4860_ = lean_alloc_closure((void*)(l_Array_eraseReps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4860_, 0, v_inst_4845_);
lean_inc(v___x_4856_);
v___x_4861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4861_, 0, v___x_4856_);
lean_ctor_set(v___x_4861_, 1, v___x_4857_);
v___x_4862_ = lean_nat_dec_le(v___x_4853_, v___x_4853_);
if (v___x_4862_ == 0)
{
if (v___x_4854_ == 0)
{
lean_object* v___x_4863_; 
lean_inc(v___x_4856_);
lean_dec_ref_known(v___x_4861_, 2);
lean_dec_ref(v___f_4860_);
lean_dec_ref(v_as_4846_);
v___x_4863_ = lean_array_push(v___x_4857_, v___x_4856_);
return v___x_4863_;
}
else
{
size_t v___x_4864_; size_t v___x_4865_; lean_object* v___x_4866_; 
v___x_4864_ = ((size_t)0ULL);
v___x_4865_ = lean_usize_of_nat(v___x_4853_);
v___x_4866_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4858_, v___f_4860_, v_as_4846_, v___x_4864_, v___x_4865_, v___x_4861_);
v___y_4848_ = v___x_4866_;
goto v___jp_4847_;
}
}
else
{
size_t v___x_4867_; size_t v___x_4868_; lean_object* v___x_4869_; 
v___x_4867_ = ((size_t)0ULL);
v___x_4868_ = lean_usize_of_nat(v___x_4853_);
v___x_4869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4858_, v___f_4860_, v_as_4846_, v___x_4867_, v___x_4868_, v___x_4861_);
v___y_4848_ = v___x_4869_;
goto v___jp_4847_;
}
}
}
v___jp_4847_:
{
lean_object* v_fst_4849_; lean_object* v_snd_4850_; lean_object* v___x_4851_; 
v_fst_4849_ = lean_ctor_get(v___y_4848_, 0);
lean_inc(v_fst_4849_);
v_snd_4850_ = lean_ctor_get(v___y_4848_, 1);
lean_inc(v_snd_4850_);
lean_dec_ref(v___y_4848_);
v___x_4851_ = lean_array_push(v_snd_4850_, v_fst_4849_);
return v___x_4851_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps(lean_object* v_00_u03b1_4870_, lean_object* v_inst_4871_, lean_object* v_as_4872_){
_start:
{
lean_object* v___x_4873_; 
v___x_4873_ = l_Array_eraseReps___redArg(v_inst_4871_, v_as_4872_);
return v___x_4873_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(lean_object* v_inst_4874_, lean_object* v_as_4875_, lean_object* v_a_4876_, lean_object* v_x_4877_){
_start:
{
lean_object* v_zero_4878_; uint8_t v_isZero_4879_; 
v_zero_4878_ = lean_unsigned_to_nat(0u);
v_isZero_4879_ = lean_nat_dec_eq(v_x_4877_, v_zero_4878_);
if (v_isZero_4879_ == 1)
{
lean_dec(v_x_4877_);
lean_dec(v_a_4876_);
lean_dec_ref(v_inst_4874_);
return v_isZero_4879_;
}
else
{
lean_object* v_one_4880_; lean_object* v_n_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; uint8_t v___x_4884_; 
v_one_4880_ = lean_unsigned_to_nat(1u);
v_n_4881_ = lean_nat_sub(v_x_4877_, v_one_4880_);
lean_dec(v_x_4877_);
v___x_4882_ = lean_array_fget_borrowed(v_as_4875_, v_n_4881_);
lean_inc_ref(v_inst_4874_);
lean_inc(v___x_4882_);
lean_inc(v_a_4876_);
v___x_4883_ = lean_apply_2(v_inst_4874_, v_a_4876_, v___x_4882_);
v___x_4884_ = lean_unbox(v___x_4883_);
if (v___x_4884_ == 0)
{
v_x_4877_ = v_n_4881_;
goto _start;
}
else
{
lean_dec(v_n_4881_);
lean_dec(v_a_4876_);
lean_dec_ref(v_inst_4874_);
return v_isZero_4879_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg___boxed(lean_object* v_inst_4886_, lean_object* v_as_4887_, lean_object* v_a_4888_, lean_object* v_x_4889_){
_start:
{
uint8_t v_res_4890_; lean_object* v_r_4891_; 
v_res_4890_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4886_, v_as_4887_, v_a_4888_, v_x_4889_);
lean_dec_ref(v_as_4887_);
v_r_4891_ = lean_box(v_res_4890_);
return v_r_4891_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(lean_object* v_00_u03b1_4892_, lean_object* v_inst_4893_, lean_object* v_as_4894_, lean_object* v_a_4895_, lean_object* v_x_4896_, lean_object* v_x_4897_){
_start:
{
uint8_t v___x_4898_; 
v___x_4898_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4893_, v_as_4894_, v_a_4895_, v_x_4896_);
return v___x_4898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___boxed(lean_object* v_00_u03b1_4899_, lean_object* v_inst_4900_, lean_object* v_as_4901_, lean_object* v_a_4902_, lean_object* v_x_4903_, lean_object* v_x_4904_){
_start:
{
uint8_t v_res_4905_; lean_object* v_r_4906_; 
v_res_4905_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(v_00_u03b1_4899_, v_inst_4900_, v_as_4901_, v_a_4902_, v_x_4903_, v_x_4904_);
lean_dec_ref(v_as_4901_);
v_r_4906_ = lean_box(v_res_4905_);
return v_r_4906_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(lean_object* v_inst_4907_, lean_object* v_as_4908_, lean_object* v_i_4909_){
_start:
{
lean_object* v___x_4910_; uint8_t v___x_4911_; 
v___x_4910_ = lean_array_get_size(v_as_4908_);
v___x_4911_ = lean_nat_dec_lt(v_i_4909_, v___x_4910_);
if (v___x_4911_ == 0)
{
uint8_t v___x_4912_; 
lean_dec(v_i_4909_);
lean_dec_ref(v_inst_4907_);
v___x_4912_ = 1;
return v___x_4912_;
}
else
{
lean_object* v___x_4913_; uint8_t v___x_4914_; 
v___x_4913_ = lean_array_fget_borrowed(v_as_4908_, v_i_4909_);
lean_inc(v_i_4909_);
lean_inc(v___x_4913_);
lean_inc_ref(v_inst_4907_);
v___x_4914_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4907_, v_as_4908_, v___x_4913_, v_i_4909_);
if (v___x_4914_ == 0)
{
lean_dec(v_i_4909_);
lean_dec_ref(v_inst_4907_);
return v___x_4914_;
}
else
{
lean_object* v___x_4915_; lean_object* v___x_4916_; 
v___x_4915_ = lean_unsigned_to_nat(1u);
v___x_4916_ = lean_nat_add(v_i_4909_, v___x_4915_);
lean_dec(v_i_4909_);
v_i_4909_ = v___x_4916_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg___boxed(lean_object* v_inst_4918_, lean_object* v_as_4919_, lean_object* v_i_4920_){
_start:
{
uint8_t v_res_4921_; lean_object* v_r_4922_; 
v_res_4921_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4918_, v_as_4919_, v_i_4920_);
lean_dec_ref(v_as_4919_);
v_r_4922_ = lean_box(v_res_4921_);
return v_r_4922_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux(lean_object* v_00_u03b1_4923_, lean_object* v_inst_4924_, lean_object* v_as_4925_, lean_object* v_i_4926_){
_start:
{
uint8_t v___x_4927_; 
v___x_4927_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4924_, v_as_4925_, v_i_4926_);
return v___x_4927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___boxed(lean_object* v_00_u03b1_4928_, lean_object* v_inst_4929_, lean_object* v_as_4930_, lean_object* v_i_4931_){
_start:
{
uint8_t v_res_4932_; lean_object* v_r_4933_; 
v_res_4932_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux(v_00_u03b1_4928_, v_inst_4929_, v_as_4930_, v_i_4931_);
lean_dec_ref(v_as_4930_);
v_r_4933_ = lean_box(v_res_4932_);
return v_r_4933_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff___redArg(lean_object* v_inst_4934_, lean_object* v_as_4935_){
_start:
{
lean_object* v___x_4936_; uint8_t v___x_4937_; 
v___x_4936_ = lean_unsigned_to_nat(0u);
v___x_4937_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4934_, v_as_4935_, v___x_4936_);
return v___x_4937_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___redArg___boxed(lean_object* v_inst_4938_, lean_object* v_as_4939_){
_start:
{
uint8_t v_res_4940_; lean_object* v_r_4941_; 
v_res_4940_ = l_Array_allDiff___redArg(v_inst_4938_, v_as_4939_);
lean_dec_ref(v_as_4939_);
v_r_4941_ = lean_box(v_res_4940_);
return v_r_4941_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff(lean_object* v_00_u03b1_4942_, lean_object* v_inst_4943_, lean_object* v_as_4944_){
_start:
{
uint8_t v___x_4945_; 
v___x_4945_ = l_Array_allDiff___redArg(v_inst_4943_, v_as_4944_);
return v___x_4945_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___boxed(lean_object* v_00_u03b1_4946_, lean_object* v_inst_4947_, lean_object* v_as_4948_){
_start:
{
uint8_t v_res_4949_; lean_object* v_r_4950_; 
v_res_4949_ = l_Array_allDiff(v_00_u03b1_4946_, v_inst_4947_, v_as_4948_);
lean_dec_ref(v_as_4948_);
v_r_4950_ = lean_box(v_res_4949_);
return v_r_4950_;
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0(uint8_t v___x_4951_, lean_object* v_x1_4952_, lean_object* v_x2_4953_){
_start:
{
lean_object* v_fst_4954_; uint8_t v___x_4955_; 
v_fst_4954_ = lean_ctor_get(v_x1_4952_, 0);
v___x_4955_ = lean_unbox(v_fst_4954_);
if (v___x_4955_ == 0)
{
lean_object* v_snd_4956_; lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_4964_; 
lean_dec(v_x2_4953_);
v_snd_4956_ = lean_ctor_get(v_x1_4952_, 1);
v_isSharedCheck_4964_ = !lean_is_exclusive(v_x1_4952_);
if (v_isSharedCheck_4964_ == 0)
{
lean_object* v_unused_4965_; 
v_unused_4965_ = lean_ctor_get(v_x1_4952_, 0);
lean_dec(v_unused_4965_);
v___x_4958_ = v_x1_4952_;
v_isShared_4959_ = v_isSharedCheck_4964_;
goto v_resetjp_4957_;
}
else
{
lean_inc(v_snd_4956_);
lean_dec(v_x1_4952_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_4964_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v___x_4960_; lean_object* v___x_4962_; 
v___x_4960_ = lean_box(v___x_4951_);
if (v_isShared_4959_ == 0)
{
lean_ctor_set(v___x_4958_, 0, v___x_4960_);
v___x_4962_ = v___x_4958_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v___x_4960_);
lean_ctor_set(v_reuseFailAlloc_4963_, 1, v_snd_4956_);
v___x_4962_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
return v___x_4962_;
}
}
}
else
{
lean_object* v_snd_4966_; lean_object* v___x_4968_; uint8_t v_isShared_4969_; uint8_t v_isSharedCheck_4976_; 
v_snd_4966_ = lean_ctor_get(v_x1_4952_, 1);
v_isSharedCheck_4976_ = !lean_is_exclusive(v_x1_4952_);
if (v_isSharedCheck_4976_ == 0)
{
lean_object* v_unused_4977_; 
v_unused_4977_ = lean_ctor_get(v_x1_4952_, 0);
lean_dec(v_unused_4977_);
v___x_4968_ = v_x1_4952_;
v_isShared_4969_ = v_isSharedCheck_4976_;
goto v_resetjp_4967_;
}
else
{
lean_inc(v_snd_4966_);
lean_dec(v_x1_4952_);
v___x_4968_ = lean_box(0);
v_isShared_4969_ = v_isSharedCheck_4976_;
goto v_resetjp_4967_;
}
v_resetjp_4967_:
{
uint8_t v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4974_; 
v___x_4970_ = 0;
v___x_4971_ = lean_array_push(v_snd_4966_, v_x2_4953_);
v___x_4972_ = lean_box(v___x_4970_);
if (v_isShared_4969_ == 0)
{
lean_ctor_set(v___x_4968_, 1, v___x_4971_);
lean_ctor_set(v___x_4968_, 0, v___x_4972_);
v___x_4974_ = v___x_4968_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4975_; 
v_reuseFailAlloc_4975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4975_, 0, v___x_4972_);
lean_ctor_set(v_reuseFailAlloc_4975_, 1, v___x_4971_);
v___x_4974_ = v_reuseFailAlloc_4975_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
return v___x_4974_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0___boxed(lean_object* v___x_4978_, lean_object* v_x1_4979_, lean_object* v_x2_4980_){
_start:
{
uint8_t v___x_141__boxed_4981_; lean_object* v_res_4982_; 
v___x_141__boxed_4981_ = lean_unbox(v___x_4978_);
v_res_4982_ = l_Array_getEvenElems___redArg___lam__0(v___x_141__boxed_4981_, v_x1_4979_, v_x2_4980_);
return v_res_4982_;
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg(lean_object* v_as_4983_){
_start:
{
lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; uint8_t v___x_4988_; 
v___x_4984_ = lean_unsigned_to_nat(0u);
v___x_4985_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_4986_ = lean_array_get_size(v_as_4983_);
v___x_4987_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4988_ = lean_nat_dec_lt(v___x_4984_, v___x_4986_);
if (v___x_4988_ == 0)
{
lean_dec_ref(v_as_4983_);
return v___x_4985_;
}
else
{
lean_object* v___x_4989_; lean_object* v___f_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; uint8_t v___x_4993_; 
v___x_4989_ = lean_box(v___x_4988_);
v___f_4990_ = lean_alloc_closure((void*)(l_Array_getEvenElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4990_, 0, v___x_4989_);
v___x_4991_ = lean_box(v___x_4988_);
v___x_4992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4991_);
lean_ctor_set(v___x_4992_, 1, v___x_4985_);
v___x_4993_ = lean_nat_dec_le(v___x_4986_, v___x_4986_);
if (v___x_4993_ == 0)
{
if (v___x_4988_ == 0)
{
lean_dec_ref_known(v___x_4992_, 2);
lean_dec_ref(v___f_4990_);
lean_dec_ref(v_as_4983_);
return v___x_4985_;
}
else
{
size_t v___x_4994_; size_t v___x_4995_; lean_object* v___x_4996_; lean_object* v_snd_4997_; 
v___x_4994_ = ((size_t)0ULL);
v___x_4995_ = lean_usize_of_nat(v___x_4986_);
v___x_4996_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4987_, v___f_4990_, v_as_4983_, v___x_4994_, v___x_4995_, v___x_4992_);
v_snd_4997_ = lean_ctor_get(v___x_4996_, 1);
lean_inc(v_snd_4997_);
lean_dec(v___x_4996_);
return v_snd_4997_;
}
}
else
{
size_t v___x_4998_; size_t v___x_4999_; lean_object* v___x_5000_; lean_object* v_snd_5001_; 
v___x_4998_ = ((size_t)0ULL);
v___x_4999_ = lean_usize_of_nat(v___x_4986_);
v___x_5000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4987_, v___f_4990_, v_as_4983_, v___x_4998_, v___x_4999_, v___x_4992_);
v_snd_5001_ = lean_ctor_get(v___x_5000_, 1);
lean_inc(v_snd_5001_);
lean_dec(v___x_5000_);
return v_snd_5001_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems(lean_object* v_00_u03b1_5002_, lean_object* v_as_5003_){
_start:
{
lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; uint8_t v___x_5008_; 
v___x_5004_ = lean_unsigned_to_nat(0u);
v___x_5005_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_5006_ = lean_array_get_size(v_as_5003_);
v___x_5007_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_5008_ = lean_nat_dec_lt(v___x_5004_, v___x_5006_);
if (v___x_5008_ == 0)
{
lean_dec_ref(v_as_5003_);
return v___x_5005_;
}
else
{
lean_object* v___x_5009_; lean_object* v___f_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; uint8_t v___x_5013_; 
v___x_5009_ = lean_box(v___x_5008_);
v___f_5010_ = lean_alloc_closure((void*)(l_Array_getEvenElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5010_, 0, v___x_5009_);
v___x_5011_ = lean_box(v___x_5008_);
v___x_5012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5012_, 0, v___x_5011_);
lean_ctor_set(v___x_5012_, 1, v___x_5005_);
v___x_5013_ = lean_nat_dec_le(v___x_5006_, v___x_5006_);
if (v___x_5013_ == 0)
{
if (v___x_5008_ == 0)
{
lean_dec_ref_known(v___x_5012_, 2);
lean_dec_ref(v___f_5010_);
lean_dec_ref(v_as_5003_);
return v___x_5005_;
}
else
{
size_t v___x_5014_; size_t v___x_5015_; lean_object* v___x_5016_; lean_object* v_snd_5017_; 
v___x_5014_ = ((size_t)0ULL);
v___x_5015_ = lean_usize_of_nat(v___x_5006_);
v___x_5016_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_5007_, v___f_5010_, v_as_5003_, v___x_5014_, v___x_5015_, v___x_5012_);
v_snd_5017_ = lean_ctor_get(v___x_5016_, 1);
lean_inc(v_snd_5017_);
lean_dec(v___x_5016_);
return v_snd_5017_;
}
}
else
{
size_t v___x_5018_; size_t v___x_5019_; lean_object* v___x_5020_; lean_object* v_snd_5021_; 
v___x_5018_ = ((size_t)0ULL);
v___x_5019_ = lean_usize_of_nat(v___x_5006_);
v___x_5020_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_5007_, v___f_5010_, v_as_5003_, v___x_5018_, v___x_5019_, v___x_5012_);
v_snd_5021_ = lean_ctor_get(v___x_5020_, 1);
lean_inc(v_snd_5021_);
lean_dec(v___x_5020_);
return v_snd_5021_;
}
}
}
}
static lean_object* _init_l_Array_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_5027_; lean_object* v___x_5028_; 
v___x_5027_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__4));
v___x_5028_ = lean_string_length(v___x_5027_);
return v___x_5028_;
}
}
static lean_object* _init_l_Array_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_5029_; lean_object* v___x_5030_; 
v___x_5029_ = lean_obj_once(&l_Array_repr___redArg___closed__2, &l_Array_repr___redArg___closed__2_once, _init_l_Array_repr___redArg___closed__2);
v___x_5030_ = lean_nat_to_int(v___x_5029_);
return v___x_5030_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___redArg(lean_object* v_inst_5038_, lean_object* v_xs_5039_){
_start:
{
lean_object* v___x_5040_; lean_object* v___x_5041_; uint8_t v___x_5042_; 
v___x_5040_ = lean_array_get_size(v_xs_5039_);
v___x_5041_ = lean_unsigned_to_nat(0u);
v___x_5042_ = lean_nat_dec_eq(v___x_5040_, v___x_5041_);
if (v___x_5042_ == 0)
{
lean_object* v_x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; 
v_x_5043_ = lean_alloc_closure((void*)(l_repr), 3, 2);
lean_closure_set(v_x_5043_, 0, lean_box(0));
lean_closure_set(v_x_5043_, 1, v_inst_5038_);
v___x_5044_ = lean_array_to_list(v_xs_5039_);
v___x_5045_ = ((lean_object*)(l_Array_repr___redArg___closed__1));
v___x_5046_ = l_Std_Format_joinSep___redArg(v_x_5043_, v___x_5044_, v___x_5045_);
v___x_5047_ = lean_obj_once(&l_Array_repr___redArg___closed__3, &l_Array_repr___redArg___closed__3_once, _init_l_Array_repr___redArg___closed__3);
v___x_5048_ = ((lean_object*)(l_Array_repr___redArg___closed__4));
v___x_5049_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5049_, 0, v___x_5048_);
lean_ctor_set(v___x_5049_, 1, v___x_5046_);
v___x_5050_ = ((lean_object*)(l_Array_repr___redArg___closed__5));
v___x_5051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5051_, 0, v___x_5049_);
lean_ctor_set(v___x_5051_, 1, v___x_5050_);
v___x_5052_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5052_, 0, v___x_5047_);
lean_ctor_set(v___x_5052_, 1, v___x_5051_);
v___x_5053_ = l_Std_Format_fill(v___x_5052_);
return v___x_5053_;
}
else
{
lean_object* v___x_5054_; 
lean_dec_ref(v_xs_5039_);
lean_dec_ref(v_inst_5038_);
v___x_5054_ = ((lean_object*)(l_Array_repr___redArg___closed__7));
return v___x_5054_;
}
}
}
LEAN_EXPORT lean_object* l_Array_repr(lean_object* v_00_u03b1_5055_, lean_object* v_inst_5056_, lean_object* v_xs_5057_){
_start:
{
lean_object* v___x_5058_; 
v___x_5058_ = l_Array_repr___redArg(v_inst_5056_, v_xs_5057_);
return v___x_5058_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0(lean_object* v_inst_5059_, lean_object* v_xs_5060_, lean_object* v_x_5061_){
_start:
{
lean_object* v___x_5062_; 
v___x_5062_ = l_Array_repr___redArg(v_inst_5059_, v_xs_5060_);
return v___x_5062_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0___boxed(lean_object* v_inst_5063_, lean_object* v_xs_5064_, lean_object* v_x_5065_){
_start:
{
lean_object* v_res_5066_; 
v_res_5066_ = l_Array_instRepr___redArg___lam__0(v_inst_5063_, v_xs_5064_, v_x_5065_);
lean_dec(v_x_5065_);
return v_res_5066_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg(lean_object* v_inst_5067_){
_start:
{
lean_object* v___f_5068_; 
v___f_5068_ = lean_alloc_closure((void*)(l_Array_instRepr___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5068_, 0, v_inst_5067_);
return v___f_5068_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr(lean_object* v_00_u03b1_5069_, lean_object* v_inst_5070_){
_start:
{
lean_object* v___f_5071_; 
v___f_5071_ = lean_alloc_closure((void*)(l_Array_instRepr___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5071_, 0, v_inst_5070_);
return v___f_5071_;
}
}
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_GetElem(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* runtime_initialize_Init_WF(uint8_t builtin);
lean_object* runtime_initialize_Init_WFTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_swap___auto__1 = _init_l_Array_swap___auto__1();
lean_mark_persistent(l_Array_swap___auto__1);
l_Array_swap___auto__3 = _init_l_Array_swap___auto__3();
lean_mark_persistent(l_Array_swap___auto__3);
l_Array_back___auto__1 = _init_l_Array_back___auto__1();
lean_mark_persistent(l_Array_back___auto__1);
l_Array_swapAt___auto__1 = _init_l_Array_swapAt___auto__1();
lean_mark_persistent(l_Array_swapAt___auto__1);
l_Array_eraseIdx___auto__1 = _init_l_Array_eraseIdx___auto__1();
lean_mark_persistent(l_Array_eraseIdx___auto__1);
l_Array_insertIdx___auto__1 = _init_l_Array_insertIdx___auto__1();
lean_mark_persistent(l_Array_insertIdx___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Init_GetElem(uint8_t builtin);
lean_object* initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* initialize_Init_WF(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_WFTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

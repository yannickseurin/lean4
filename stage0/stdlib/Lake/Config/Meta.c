// Lean compiler output
// Module: Lake.Config.Meta
// Imports: public import Lake.Util.Binder public import Lake.Config.MetaClasses public meta import Lake.Util.Binder public meta import Lean.Parser.Command public meta import Lake.Util.Name import Lean.Parser.Command
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
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lake_expandBinders(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_mkDepArrow(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lake_BinderSyntaxView_mkArgument(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lake_Name_quoteFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
static const lean_string_object l_Lake_configField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "configField"};
static const lean_object* l_Lake_configField___closed__0 = (const lean_object*)&l_Lake_configField___closed__0_value;
static const lean_string_object l_Lake_configField___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_configField___closed__1 = (const lean_object*)&l_Lake_configField___closed__1_value;
static const lean_ctor_object l_Lake_configField___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_configField___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configField___closed__2_value_aux_0),((lean_object*)&l_Lake_configField___closed__0_value),LEAN_SCALAR_PTR_LITERAL(228, 254, 146, 249, 6, 137, 67, 241)}};
static const lean_object* l_Lake_configField___closed__2 = (const lean_object*)&l_Lake_configField___closed__2_value;
static const lean_string_object l_Lake_configField___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lake_configField___closed__3 = (const lean_object*)&l_Lake_configField___closed__3_value;
static const lean_ctor_object l_Lake_configField___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lake_configField___closed__4 = (const lean_object*)&l_Lake_configField___closed__4_value;
static const lean_string_object l_Lake_configField___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l_Lake_configField___closed__5 = (const lean_object*)&l_Lake_configField___closed__5_value;
static const lean_ctor_object l_Lake_configField___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__5_value),LEAN_SCALAR_PTR_LITERAL(56, 145, 113, 208, 127, 167, 216, 55)}};
static const lean_object* l_Lake_configField___closed__6 = (const lean_object*)&l_Lake_configField___closed__6_value;
static const lean_string_object l_Lake_configField___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "nestedDeclModifiers"};
static const lean_object* l_Lake_configField___closed__7 = (const lean_object*)&l_Lake_configField___closed__7_value;
static const lean_ctor_object l_Lake_configField___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__7_value),LEAN_SCALAR_PTR_LITERAL(80, 42, 11, 81, 100, 8, 187, 212)}};
static const lean_object* l_Lake_configField___closed__8 = (const lean_object*)&l_Lake_configField___closed__8_value;
static const lean_ctor_object l_Lake_configField___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configField___closed__8_value)}};
static const lean_object* l_Lake_configField___closed__9 = (const lean_object*)&l_Lake_configField___closed__9_value;
static const lean_string_object l_Lake_configField___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lake_configField___closed__10 = (const lean_object*)&l_Lake_configField___closed__10_value;
static const lean_ctor_object l_Lake_configField___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__10_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lake_configField___closed__11 = (const lean_object*)&l_Lake_configField___closed__11_value;
static const lean_string_object l_Lake_configField___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lake_configField___closed__12 = (const lean_object*)&l_Lake_configField___closed__12_value;
static const lean_ctor_object l_Lake_configField___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__12_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lake_configField___closed__13 = (const lean_object*)&l_Lake_configField___closed__13_value;
static const lean_ctor_object l_Lake_configField___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configField___closed__13_value)}};
static const lean_object* l_Lake_configField___closed__14 = (const lean_object*)&l_Lake_configField___closed__14_value;
static const lean_string_object l_Lake_configField___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " @ "};
static const lean_object* l_Lake_configField___closed__15 = (const lean_object*)&l_Lake_configField___closed__15_value;
static const lean_ctor_object l_Lake_configField___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_configField___closed__15_value)}};
static const lean_object* l_Lake_configField___closed__16 = (const lean_object*)&l_Lake_configField___closed__16_value;
static const lean_ctor_object l_Lake_configField___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configField___closed__14_value),((lean_object*)&l_Lake_configField___closed__16_value)}};
static const lean_object* l_Lake_configField___closed__17 = (const lean_object*)&l_Lake_configField___closed__17_value;
static const lean_ctor_object l_Lake_configField___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configField___closed__6_value),((lean_object*)&l_Lake_configField___closed__17_value)}};
static const lean_object* l_Lake_configField___closed__18 = (const lean_object*)&l_Lake_configField___closed__18_value;
static const lean_ctor_object l_Lake_configField___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configField___closed__11_value),((lean_object*)&l_Lake_configField___closed__18_value)}};
static const lean_object* l_Lake_configField___closed__19 = (const lean_object*)&l_Lake_configField___closed__19_value;
static const lean_ctor_object l_Lake_configField___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configField___closed__9_value),((lean_object*)&l_Lake_configField___closed__19_value)}};
static const lean_object* l_Lake_configField___closed__20 = (const lean_object*)&l_Lake_configField___closed__20_value;
static const lean_string_object l_Lake_configField___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lake_configField___closed__21 = (const lean_object*)&l_Lake_configField___closed__21_value;
static const lean_string_object l_Lake_configField___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lake_configField___closed__22 = (const lean_object*)&l_Lake_configField___closed__22_value;
static const lean_ctor_object l_Lake_configField___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_configField___closed__22_value)}};
static const lean_object* l_Lake_configField___closed__23 = (const lean_object*)&l_Lake_configField___closed__23_value;
static const lean_ctor_object l_Lake_configField___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Lake_configField___closed__14_value),((lean_object*)&l_Lake_configField___closed__21_value),((lean_object*)&l_Lake_configField___closed__23_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_configField___closed__24 = (const lean_object*)&l_Lake_configField___closed__24_value;
static const lean_ctor_object l_Lake_configField___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configField___closed__20_value),((lean_object*)&l_Lake_configField___closed__24_value)}};
static const lean_object* l_Lake_configField___closed__25 = (const lean_object*)&l_Lake_configField___closed__25_value;
static const lean_ctor_object l_Lake_configField___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configField___closed__6_value),((lean_object*)&l_Lake_configField___closed__25_value)}};
static const lean_object* l_Lake_configField___closed__26 = (const lean_object*)&l_Lake_configField___closed__26_value;
static const lean_string_object l_Lake_configField___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lake_configField___closed__27 = (const lean_object*)&l_Lake_configField___closed__27_value;
static const lean_ctor_object l_Lake_configField___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__27_value),LEAN_SCALAR_PTR_LITERAL(79, 160, 221, 255, 50, 155, 99, 177)}};
static const lean_object* l_Lake_configField___closed__28 = (const lean_object*)&l_Lake_configField___closed__28_value;
static const lean_ctor_object l_Lake_configField___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configField___closed__28_value)}};
static const lean_object* l_Lake_configField___closed__29 = (const lean_object*)&l_Lake_configField___closed__29_value;
static const lean_ctor_object l_Lake_configField___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configField___closed__26_value),((lean_object*)&l_Lake_configField___closed__29_value)}};
static const lean_object* l_Lake_configField___closed__30 = (const lean_object*)&l_Lake_configField___closed__30_value;
static const lean_string_object l_Lake_configField___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lake_configField___closed__31 = (const lean_object*)&l_Lake_configField___closed__31_value;
static const lean_ctor_object l_Lake_configField___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_configField___closed__31_value)}};
static const lean_object* l_Lake_configField___closed__32 = (const lean_object*)&l_Lake_configField___closed__32_value;
static const lean_string_object l_Lake_configField___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lake_configField___closed__33 = (const lean_object*)&l_Lake_configField___closed__33_value;
static const lean_ctor_object l_Lake_configField___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__33_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lake_configField___closed__34 = (const lean_object*)&l_Lake_configField___closed__34_value;
static const lean_ctor_object l_Lake_configField___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lake_configField___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_configField___closed__35 = (const lean_object*)&l_Lake_configField___closed__35_value;
static const lean_ctor_object l_Lake_configField___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configField___closed__32_value),((lean_object*)&l_Lake_configField___closed__35_value)}};
static const lean_object* l_Lake_configField___closed__36 = (const lean_object*)&l_Lake_configField___closed__36_value;
static const lean_ctor_object l_Lake_configField___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configField___closed__11_value),((lean_object*)&l_Lake_configField___closed__36_value)}};
static const lean_object* l_Lake_configField___closed__37 = (const lean_object*)&l_Lake_configField___closed__37_value;
static const lean_ctor_object l_Lake_configField___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configField___closed__30_value),((lean_object*)&l_Lake_configField___closed__37_value)}};
static const lean_object* l_Lake_configField___closed__38 = (const lean_object*)&l_Lake_configField___closed__38_value;
static const lean_ctor_object l_Lake_configField___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lake_configField___closed__0_value),((lean_object*)&l_Lake_configField___closed__2_value),((lean_object*)&l_Lake_configField___closed__38_value)}};
static const lean_object* l_Lake_configField___closed__39 = (const lean_object*)&l_Lake_configField___closed__39_value;
LEAN_EXPORT const lean_object* l_Lake_configField = (const lean_object*)&l_Lake_configField___closed__39_value;
static const lean_string_object l_Lake_configDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configDecl"};
static const lean_object* l_Lake_configDecl___closed__0 = (const lean_object*)&l_Lake_configDecl___closed__0_value;
static const lean_ctor_object l_Lake_configDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_configDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 67, 129, 86, 42, 160, 126, 252)}};
static const lean_object* l_Lake_configDecl___closed__1 = (const lean_object*)&l_Lake_configDecl___closed__1_value;
static const lean_string_object l_Lake_configDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lake_configDecl___closed__2 = (const lean_object*)&l_Lake_configDecl___closed__2_value;
static const lean_ctor_object l_Lake_configDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__2_value),LEAN_SCALAR_PTR_LITERAL(113, 135, 0, 93, 130, 217, 220, 132)}};
static const lean_object* l_Lake_configDecl___closed__3 = (const lean_object*)&l_Lake_configDecl___closed__3_value;
static const lean_ctor_object l_Lake_configDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__3_value)}};
static const lean_object* l_Lake_configDecl___closed__4 = (const lean_object*)&l_Lake_configDecl___closed__4_value;
static const lean_string_object l_Lake_configDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "configuration "};
static const lean_object* l_Lake_configDecl___closed__5 = (const lean_object*)&l_Lake_configDecl___closed__5_value;
static const lean_ctor_object l_Lake_configDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__5_value)}};
static const lean_object* l_Lake_configDecl___closed__6 = (const lean_object*)&l_Lake_configDecl___closed__6_value;
static const lean_ctor_object l_Lake_configDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__6_value)}};
static const lean_object* l_Lake_configDecl___closed__7 = (const lean_object*)&l_Lake_configDecl___closed__7_value;
static const lean_string_object l_Lake_configDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lake_configDecl___closed__8 = (const lean_object*)&l_Lake_configDecl___closed__8_value;
static const lean_ctor_object l_Lake_configDecl___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__8_value),LEAN_SCALAR_PTR_LITERAL(210, 155, 24, 168, 139, 44, 164, 47)}};
static const lean_object* l_Lake_configDecl___closed__9 = (const lean_object*)&l_Lake_configDecl___closed__9_value;
static const lean_ctor_object l_Lake_configDecl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__9_value)}};
static const lean_object* l_Lake_configDecl___closed__10 = (const lean_object*)&l_Lake_configDecl___closed__10_value;
static const lean_ctor_object l_Lake_configDecl___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__7_value),((lean_object*)&l_Lake_configDecl___closed__10_value)}};
static const lean_object* l_Lake_configDecl___closed__11 = (const lean_object*)&l_Lake_configDecl___closed__11_value;
static const lean_string_object l_Lake_configDecl___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ppIndent"};
static const lean_object* l_Lake_configDecl___closed__12 = (const lean_object*)&l_Lake_configDecl___closed__12_value;
static const lean_ctor_object l_Lake_configDecl___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__12_value),LEAN_SCALAR_PTR_LITERAL(240, 142, 232, 190, 100, 212, 29, 41)}};
static const lean_object* l_Lake_configDecl___closed__13 = (const lean_object*)&l_Lake_configDecl___closed__13_value;
static const lean_string_object l_Lake_configDecl___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l_Lake_configDecl___closed__14 = (const lean_object*)&l_Lake_configDecl___closed__14_value;
static const lean_ctor_object l_Lake_configDecl___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__14_value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l_Lake_configDecl___closed__15 = (const lean_object*)&l_Lake_configDecl___closed__15_value;
static const lean_string_object l_Lake_configDecl___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppSpace"};
static const lean_object* l_Lake_configDecl___closed__16 = (const lean_object*)&l_Lake_configDecl___closed__16_value;
static const lean_ctor_object l_Lake_configDecl___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__16_value),LEAN_SCALAR_PTR_LITERAL(207, 47, 58, 43, 30, 240, 125, 246)}};
static const lean_object* l_Lake_configDecl___closed__17 = (const lean_object*)&l_Lake_configDecl___closed__17_value;
static const lean_ctor_object l_Lake_configDecl___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__17_value)}};
static const lean_object* l_Lake_configDecl___closed__18 = (const lean_object*)&l_Lake_configDecl___closed__18_value;
static const lean_string_object l_Lake_configDecl___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bracketedBinder"};
static const lean_object* l_Lake_configDecl___closed__19 = (const lean_object*)&l_Lake_configDecl___closed__19_value;
static const lean_ctor_object l_Lake_configDecl___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__19_value),LEAN_SCALAR_PTR_LITERAL(126, 188, 9, 177, 18, 110, 216, 30)}};
static const lean_object* l_Lake_configDecl___closed__20 = (const lean_object*)&l_Lake_configDecl___closed__20_value;
static const lean_ctor_object l_Lake_configDecl___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__20_value)}};
static const lean_object* l_Lake_configDecl___closed__21 = (const lean_object*)&l_Lake_configDecl___closed__21_value;
static const lean_ctor_object l_Lake_configDecl___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__18_value),((lean_object*)&l_Lake_configDecl___closed__21_value)}};
static const lean_object* l_Lake_configDecl___closed__22 = (const lean_object*)&l_Lake_configDecl___closed__22_value;
static const lean_ctor_object l_Lake_configDecl___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__15_value),((lean_object*)&l_Lake_configDecl___closed__22_value)}};
static const lean_object* l_Lake_configDecl___closed__23 = (const lean_object*)&l_Lake_configDecl___closed__23_value;
static const lean_string_object l_Lake_configDecl___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake_configDecl___closed__24 = (const lean_object*)&l_Lake_configDecl___closed__24_value;
static const lean_string_object l_Lake_configDecl___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake_configDecl___closed__25 = (const lean_object*)&l_Lake_configDecl___closed__25_value;
static const lean_string_object l_Lake_configDecl___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake_configDecl___closed__26 = (const lean_object*)&l_Lake_configDecl___closed__26_value;
static const lean_string_object l_Lake_configDecl___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "optType"};
static const lean_object* l_Lake_configDecl___closed__27 = (const lean_object*)&l_Lake_configDecl___closed__27_value;
static const lean_ctor_object l_Lake_configDecl___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_configDecl___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__28_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_configDecl___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__28_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_configDecl___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__28_value_aux_2),((lean_object*)&l_Lake_configDecl___closed__27_value),LEAN_SCALAR_PTR_LITERAL(230, 186, 93, 163, 90, 7, 206, 225)}};
static const lean_object* l_Lake_configDecl___closed__28 = (const lean_object*)&l_Lake_configDecl___closed__28_value;
static const lean_ctor_object l_Lake_configDecl___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__28_value)}};
static const lean_object* l_Lake_configDecl___closed__29 = (const lean_object*)&l_Lake_configDecl___closed__29_value;
static const lean_ctor_object l_Lake_configDecl___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__23_value),((lean_object*)&l_Lake_configDecl___closed__29_value)}};
static const lean_object* l_Lake_configDecl___closed__30 = (const lean_object*)&l_Lake_configDecl___closed__30_value;
static const lean_string_object l_Lake_configDecl___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lake_configDecl___closed__31 = (const lean_object*)&l_Lake_configDecl___closed__31_value;
static const lean_string_object l_Lake_configDecl___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "extends"};
static const lean_object* l_Lake_configDecl___closed__32 = (const lean_object*)&l_Lake_configDecl___closed__32_value;
static const lean_ctor_object l_Lake_configDecl___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_configDecl___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__33_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_configDecl___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__33_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake_configDecl___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__33_value_aux_2),((lean_object*)&l_Lake_configDecl___closed__32_value),LEAN_SCALAR_PTR_LITERAL(231, 24, 97, 144, 91, 250, 92, 29)}};
static const lean_object* l_Lake_configDecl___closed__33 = (const lean_object*)&l_Lake_configDecl___closed__33_value;
static const lean_ctor_object l_Lake_configDecl___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__33_value)}};
static const lean_object* l_Lake_configDecl___closed__34 = (const lean_object*)&l_Lake_configDecl___closed__34_value;
static const lean_ctor_object l_Lake_configDecl___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configField___closed__11_value),((lean_object*)&l_Lake_configDecl___closed__34_value)}};
static const lean_object* l_Lake_configDecl___closed__35 = (const lean_object*)&l_Lake_configDecl___closed__35_value;
static const lean_ctor_object l_Lake_configDecl___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__30_value),((lean_object*)&l_Lake_configDecl___closed__35_value)}};
static const lean_object* l_Lake_configDecl___closed__36 = (const lean_object*)&l_Lake_configDecl___closed__36_value;
static const lean_ctor_object l_Lake_configDecl___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__13_value),((lean_object*)&l_Lake_configDecl___closed__36_value)}};
static const lean_object* l_Lake_configDecl___closed__37 = (const lean_object*)&l_Lake_configDecl___closed__37_value;
static const lean_ctor_object l_Lake_configDecl___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__11_value),((lean_object*)&l_Lake_configDecl___closed__37_value)}};
static const lean_object* l_Lake_configDecl___closed__38 = (const lean_object*)&l_Lake_configDecl___closed__38_value;
static const lean_string_object l_Lake_configDecl___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lake_configDecl___closed__39 = (const lean_object*)&l_Lake_configDecl___closed__39_value;
static const lean_ctor_object l_Lake_configDecl___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__39_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lake_configDecl___closed__40 = (const lean_object*)&l_Lake_configDecl___closed__40_value;
static const lean_string_object l_Lake_configDecl___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l_Lake_configDecl___closed__41 = (const lean_object*)&l_Lake_configDecl___closed__41_value;
static const lean_ctor_object l_Lake_configDecl___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__41_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lake_configDecl___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__42_value_aux_0),((lean_object*)&l_Lake_configField___closed__31_value),LEAN_SCALAR_PTR_LITERAL(243, 64, 60, 42, 244, 245, 53, 52)}};
static const lean_object* l_Lake_configDecl___closed__42 = (const lean_object*)&l_Lake_configDecl___closed__42_value;
static const lean_ctor_object l_Lake_configDecl___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lake_configField___closed__31_value),((lean_object*)&l_Lake_configDecl___closed__42_value),((lean_object*)&l_Lake_configField___closed__32_value)}};
static const lean_object* l_Lake_configDecl___closed__43 = (const lean_object*)&l_Lake_configDecl___closed__43_value;
static const lean_string_object l_Lake_configDecl___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " where "};
static const lean_object* l_Lake_configDecl___closed__44 = (const lean_object*)&l_Lake_configDecl___closed__44_value;
static const lean_ctor_object l_Lake_configDecl___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__41_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l_Lake_configDecl___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__45_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__44_value),LEAN_SCALAR_PTR_LITERAL(197, 177, 143, 70, 3, 238, 86, 51)}};
static const lean_object* l_Lake_configDecl___closed__45 = (const lean_object*)&l_Lake_configDecl___closed__45_value;
static const lean_ctor_object l_Lake_configDecl___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__44_value)}};
static const lean_object* l_Lake_configDecl___closed__46 = (const lean_object*)&l_Lake_configDecl___closed__46_value;
static const lean_ctor_object l_Lake_configDecl___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 9}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__44_value),((lean_object*)&l_Lake_configDecl___closed__45_value),((lean_object*)&l_Lake_configDecl___closed__46_value)}};
static const lean_object* l_Lake_configDecl___closed__47 = (const lean_object*)&l_Lake_configDecl___closed__47_value;
static const lean_ctor_object l_Lake_configDecl___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__40_value),((lean_object*)&l_Lake_configDecl___closed__43_value),((lean_object*)&l_Lake_configDecl___closed__47_value)}};
static const lean_object* l_Lake_configDecl___closed__48 = (const lean_object*)&l_Lake_configDecl___closed__48_value;
static const lean_string_object l_Lake_configDecl___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structCtor"};
static const lean_object* l_Lake_configDecl___closed__49 = (const lean_object*)&l_Lake_configDecl___closed__49_value;
static const lean_ctor_object l_Lake_configDecl___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_configDecl___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__50_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_configDecl___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__50_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake_configDecl___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__50_value_aux_2),((lean_object*)&l_Lake_configDecl___closed__49_value),LEAN_SCALAR_PTR_LITERAL(56, 67, 52, 180, 140, 36, 149, 125)}};
static const lean_object* l_Lake_configDecl___closed__50 = (const lean_object*)&l_Lake_configDecl___closed__50_value;
static const lean_ctor_object l_Lake_configDecl___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__50_value)}};
static const lean_object* l_Lake_configDecl___closed__51 = (const lean_object*)&l_Lake_configDecl___closed__51_value;
static const lean_ctor_object l_Lake_configDecl___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configField___closed__11_value),((lean_object*)&l_Lake_configDecl___closed__51_value)}};
static const lean_object* l_Lake_configDecl___closed__52 = (const lean_object*)&l_Lake_configDecl___closed__52_value;
static const lean_ctor_object l_Lake_configDecl___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__48_value),((lean_object*)&l_Lake_configDecl___closed__52_value)}};
static const lean_object* l_Lake_configDecl___closed__53 = (const lean_object*)&l_Lake_configDecl___closed__53_value;
static const lean_string_object l_Lake_configDecl___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "manyIndent"};
static const lean_object* l_Lake_configDecl___closed__54 = (const lean_object*)&l_Lake_configDecl___closed__54_value;
static const lean_ctor_object l_Lake_configDecl___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__54_value),LEAN_SCALAR_PTR_LITERAL(151, 35, 49, 198, 227, 245, 222, 169)}};
static const lean_object* l_Lake_configDecl___closed__55 = (const lean_object*)&l_Lake_configDecl___closed__55_value;
static const lean_string_object l_Lake_configDecl___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ppLine"};
static const lean_object* l_Lake_configDecl___closed__56 = (const lean_object*)&l_Lake_configDecl___closed__56_value;
static const lean_ctor_object l_Lake_configDecl___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__56_value),LEAN_SCALAR_PTR_LITERAL(117, 61, 38, 245, 158, 59, 171, 58)}};
static const lean_object* l_Lake_configDecl___closed__57 = (const lean_object*)&l_Lake_configDecl___closed__57_value;
static const lean_ctor_object l_Lake_configDecl___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__57_value)}};
static const lean_object* l_Lake_configDecl___closed__58 = (const lean_object*)&l_Lake_configDecl___closed__58_value;
static const lean_string_object l_Lake_configDecl___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "colGe"};
static const lean_object* l_Lake_configDecl___closed__59 = (const lean_object*)&l_Lake_configDecl___closed__59_value;
static const lean_ctor_object l_Lake_configDecl___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__59_value),LEAN_SCALAR_PTR_LITERAL(119, 36, 80, 74, 173, 106, 150, 68)}};
static const lean_object* l_Lake_configDecl___closed__60 = (const lean_object*)&l_Lake_configDecl___closed__60_value;
static const lean_ctor_object l_Lake_configDecl___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__60_value)}};
static const lean_object* l_Lake_configDecl___closed__61 = (const lean_object*)&l_Lake_configDecl___closed__61_value;
static const lean_ctor_object l_Lake_configDecl___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__58_value),((lean_object*)&l_Lake_configDecl___closed__61_value)}};
static const lean_object* l_Lake_configDecl___closed__62 = (const lean_object*)&l_Lake_configDecl___closed__62_value;
static const lean_string_object l_Lake_configDecl___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ppGroup"};
static const lean_object* l_Lake_configDecl___closed__63 = (const lean_object*)&l_Lake_configDecl___closed__63_value;
static const lean_ctor_object l_Lake_configDecl___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__63_value),LEAN_SCALAR_PTR_LITERAL(149, 180, 65, 169, 196, 28, 141, 221)}};
static const lean_object* l_Lake_configDecl___closed__64 = (const lean_object*)&l_Lake_configDecl___closed__64_value;
static const lean_ctor_object l_Lake_configDecl___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__64_value),((lean_object*)&l_Lake_configField___closed__39_value)}};
static const lean_object* l_Lake_configDecl___closed__65 = (const lean_object*)&l_Lake_configDecl___closed__65_value;
static const lean_ctor_object l_Lake_configDecl___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__62_value),((lean_object*)&l_Lake_configDecl___closed__65_value)}};
static const lean_object* l_Lake_configDecl___closed__66 = (const lean_object*)&l_Lake_configDecl___closed__66_value;
static const lean_ctor_object l_Lake_configDecl___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__55_value),((lean_object*)&l_Lake_configDecl___closed__66_value)}};
static const lean_object* l_Lake_configDecl___closed__67 = (const lean_object*)&l_Lake_configDecl___closed__67_value;
static const lean_ctor_object l_Lake_configDecl___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__53_value),((lean_object*)&l_Lake_configDecl___closed__67_value)}};
static const lean_object* l_Lake_configDecl___closed__68 = (const lean_object*)&l_Lake_configDecl___closed__68_value;
static const lean_ctor_object l_Lake_configDecl___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configField___closed__11_value),((lean_object*)&l_Lake_configDecl___closed__68_value)}};
static const lean_object* l_Lake_configDecl___closed__69 = (const lean_object*)&l_Lake_configDecl___closed__69_value;
static const lean_ctor_object l_Lake_configDecl___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__38_value),((lean_object*)&l_Lake_configDecl___closed__69_value)}};
static const lean_object* l_Lake_configDecl___closed__70 = (const lean_object*)&l_Lake_configDecl___closed__70_value;
static const lean_string_object l_Lake_configDecl___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optDeriving"};
static const lean_object* l_Lake_configDecl___closed__71 = (const lean_object*)&l_Lake_configDecl___closed__71_value;
static const lean_ctor_object l_Lake_configDecl___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_configDecl___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__72_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_configDecl___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__72_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake_configDecl___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__72_value_aux_2),((lean_object*)&l_Lake_configDecl___closed__71_value),LEAN_SCALAR_PTR_LITERAL(215, 163, 253, 206, 79, 89, 101, 240)}};
static const lean_object* l_Lake_configDecl___closed__72 = (const lean_object*)&l_Lake_configDecl___closed__72_value;
static const lean_ctor_object l_Lake_configDecl___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__72_value)}};
static const lean_object* l_Lake_configDecl___closed__73 = (const lean_object*)&l_Lake_configDecl___closed__73_value;
static const lean_ctor_object l_Lake_configDecl___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_configField___closed__4_value),((lean_object*)&l_Lake_configDecl___closed__70_value),((lean_object*)&l_Lake_configDecl___closed__73_value)}};
static const lean_object* l_Lake_configDecl___closed__74 = (const lean_object*)&l_Lake_configDecl___closed__74_value;
static const lean_ctor_object l_Lake_configDecl___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_configDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__74_value)}};
static const lean_object* l_Lake_configDecl___closed__75 = (const lean_object*)&l_Lake_configDecl___closed__75_value;
LEAN_EXPORT const lean_object* l_Lake_configDecl = (const lean_object*)&l_Lake_configDecl___closed__75_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2_value_aux_2),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__3 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0(lean_object*);
static const lean_closure_object l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_fields"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__1___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__1(lean_object*);
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "instConfigFields"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__2___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__2(lean_object*);
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "instConfigInfo"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__3___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__3(lean_object*);
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "instEmptyCollection"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__4___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__4(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "instConfigField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ConfigField"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(247, 156, 204, 47, 51, 77, 87, 91)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(59, 228, 204, 215, 72, 103, 209, 63)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__8_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__9_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__11_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pipeProj"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "|>."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "push"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__22_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__22_value),LEAN_SCALAR_PTR_LITERAL(234, 36, 132, 139, 128, 248, 8, 42)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__25_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__26_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__28_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__28_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "realName"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__32_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__32_value),LEAN_SCALAR_PTR_LITERAL(144, 209, 47, 186, 198, 69, 114, 168)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonical"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__35_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__35_value),LEAN_SCALAR_PTR_LITERAL(250, 161, 207, 191, 201, 123, 75, 165)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__37_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__38_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__39 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__39_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__38_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__40_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__39_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__40 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__40_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__42 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__42_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ConfigFieldInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43_value),LEAN_SCALAR_PTR_LITERAL(219, 5, 143, 119, 172, 22, 154, 14)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__46_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43_value),LEAN_SCALAR_PTR_LITERAL(151, 104, 212, 31, 149, 64, 64, 146)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__46 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__46_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__46_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__47 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__47_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__46_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__48 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__48_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__49 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__49_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__47_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__49_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__50 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__50_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__51 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__51_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__52 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__52_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__52_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54_value_aux_2),((lean_object*)&l_Lake_configDecl___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_proj"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "instConfigParent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__38_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ConfigParent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(73, 44, 166, 143, 34, 174, 28, 219)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__6_value),LEAN_SCALAR_PTR_LITERAL(100, 115, 34, 99, 165, 32, 152, 125)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__12_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__14_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ConfigFields.fields"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__18_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ConfigFields"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fields"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20_value),LEAN_SCALAR_PTR_LITERAL(78, 115, 196, 194, 188, 85, 136, 250)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__22_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__21_value),LEAN_SCALAR_PTR_LITERAL(51, 161, 135, 158, 114, 114, 169, 2)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "parent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__24_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__24_value),LEAN_SCALAR_PTR_LITERAL(14, 193, 30, 208, 65, 149, 209, 94)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__26_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(235, 97, 249, 134, 197, 220, 12, 91)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__28_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__29_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__30_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ConfigProj"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__32_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__32_value),LEAN_SCALAR_PTR_LITERAL(20, 253, 220, 72, 95, 155, 159, 11)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__34_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__35_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__32_value),LEAN_SCALAR_PTR_LITERAL(80, 193, 48, 218, 209, 214, 51, 12)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__35_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__35_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__36_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__35_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__37_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__38_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__36_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__38_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__39 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__39_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "whereStructInst"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__40 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__40_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "where"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__41 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__41_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__42 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__42_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__42_value),LEAN_SCALAR_PTR_LITERAL(149, 195, 233, 5, 41, 184, 182, 9)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__44 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__44_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MonadState"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__45 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__45_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__45_value),LEAN_SCALAR_PTR_LITERAL(133, 87, 22, 123, 153, 115, 76, 72)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__46_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__42_value),LEAN_SCALAR_PTR_LITERAL(171, 90, 209, 238, 200, 105, 147, 59)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__46 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__46_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__46_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__47 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__47_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__47_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__48 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__48_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cfg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__49 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__49_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__49_value),LEAN_SCALAR_PTR_LITERAL(193, 249, 49, 54, 148, 135, 57, 21)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__51 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__51_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__52 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__52_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__53 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__53_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__54 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__54_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__54_value),LEAN_SCALAR_PTR_LITERAL(251, 234, 199, 196, 105, 204, 214, 2)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__56 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__56_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "MonadStateOf"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__57 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__57_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__57_value),LEAN_SCALAR_PTR_LITERAL(190, 161, 118, 134, 19, 241, 250, 34)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__58_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__54_value),LEAN_SCALAR_PTR_LITERAL(18, 82, 123, 92, 236, 217, 106, 211)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__58 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__58_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__58_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__59 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__59_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__59_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__60 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__60_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__61 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__61_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__61_value),LEAN_SCALAR_PTR_LITERAL(228, 28, 19, 111, 76, 58, 44, 203)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__63 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__63_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__64 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__64_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "modify"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__65 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__65_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__65_value),LEAN_SCALAR_PTR_LITERAL(28, 15, 159, 80, 159, 14, 30, 42)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__67 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__67_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__67_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__68 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__68_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__68_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__69 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__69_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__70 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__70_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__70_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__72 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__72_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mkDefault"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__73 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__73_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__73_value),LEAN_SCALAR_PTR_LITERAL(198, 16, 75, 188, 15, 169, 2, 241)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__75 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__75_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__76 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__76_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__77 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__77_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__78 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__78_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "UnhygienicMain"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__0_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 169, 242, 144, 140, 56, 85, 78)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__1 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__1_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__2 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__2_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "empty"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__3 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__3_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__4_value_aux_0),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__3_value),LEAN_SCALAR_PTR_LITERAL(245, 156, 216, 135, 178, 199, 82, 94)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__4 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__4_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__5;
static const lean_array_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__6 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__6_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Array.empty"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__7 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__7_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__8;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__9 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__9_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__10 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__10_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__11;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__12;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__25_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__27_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__15;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__42_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".."};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__17 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__17_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "EmptyCollection"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__18 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__18_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__19;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__18_value),LEAN_SCALAR_PTR_LITERAL(236, 209, 69, 209, 212, 29, 83, 196)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__20 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__20_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__21 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__21_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__20_value)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__22 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__22_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__23 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__23_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__21_value),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__23_value)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__24 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__24_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__25 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__25_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__25_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__26 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__26_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "term{}"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__27 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__27_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__27_value),LEAN_SCALAR_PTR_LITERAL(44, 141, 217, 101, 193, 131, 35, 71)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__28 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__28_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ConfigInfo"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__29 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__29_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__30;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__29_value),LEAN_SCALAR_PTR_LITERAL(100, 26, 82, 225, 106, 6, 63, 188)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__31 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__31_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doubleQuotedName"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__32 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__32_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33_value_aux_2),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__32_value),LEAN_SCALAR_PTR_LITERAL(194, 121, 78, 150, 98, 156, 35, 157)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__34;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__21_value),LEAN_SCALAR_PTR_LITERAL(186, 249, 167, 146, 96, 188, 95, 76)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__35 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__35_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__31_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arity"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__37 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__37_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__38;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__37_value),LEAN_SCALAR_PTR_LITERAL(251, 206, 108, 50, 170, 163, 91, 135)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__39 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__39_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__40 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__40_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__42;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__43;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__47;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20_value),LEAN_SCALAR_PTR_LITERAL(78, 115, 196, 194, 188, 85, 136, 250)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__48 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__48_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configField___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__49_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20_value),LEAN_SCALAR_PTR_LITERAL(106, 121, 165, 74, 234, 116, 106, 233)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__49 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__49_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__49_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__50 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__50_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__49_value)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__51 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__51_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__51_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__52 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__52_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__50_value),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__52_value)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__53 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__53_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__26_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkFieldView_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkFieldView_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "ill-formed configuration field declaration"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structSimpleBinder"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__1 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__1_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2_value_aux_2),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 230, 214, 182, 254, 52, 213, 225)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__31_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "binderDefault"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__4 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__4_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "expected a default value"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__5 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__5_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "expected at least one field name"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__6 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__6_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7_value_aux_2),((lean_object*)&l_Lake_configField___closed__27_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "to"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "structParent"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__0 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__0_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1_value_aux_2),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 41, 245, 205, 163, 229, 236, 195)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "term∅"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__2 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__2_value;
static const lean_ctor_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__2_value),LEAN_SCALAR_PTR_LITERAL(185, 213, 176, 183, 122, 236, 171, 252)}};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__3 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__3_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∅"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__4 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__4_value;
static lean_once_cell_t l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__5;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ill-formed parent"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__6 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__6_value;
static const lean_string_object l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "unsupported parent syntax"};
static const lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__7 = (const lean_object*)&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandConfigDecl___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandConfigDecl___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandConfigDecl_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandConfigDecl_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_expandConfigDecl_spec__2_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_expandConfigDecl_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_expandConfigDecl_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_expandConfigDecl_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_expandConfigDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "ill-formed configuration declaration"};
static const lean_object* l_Lake_expandConfigDecl___closed__0 = (const lean_object*)&l_Lake_expandConfigDecl___closed__0_value;
static const lean_string_object l_Lake_expandConfigDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "structFields"};
static const lean_object* l_Lake_expandConfigDecl___closed__1 = (const lean_object*)&l_Lake_expandConfigDecl___closed__1_value;
static const lean_ctor_object l_Lake_expandConfigDecl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__2_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__2_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__2_value_aux_2),((lean_object*)&l_Lake_expandConfigDecl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 20, 124, 55, 90, 140, 156, 83)}};
static const lean_object* l_Lake_expandConfigDecl___closed__2 = (const lean_object*)&l_Lake_expandConfigDecl___closed__2_value;
static lean_once_cell_t l_Lake_expandConfigDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_expandConfigDecl___closed__3;
static const lean_string_object l_Lake_expandConfigDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "structure"};
static const lean_object* l_Lake_expandConfigDecl___closed__4 = (const lean_object*)&l_Lake_expandConfigDecl___closed__4_value;
static const lean_ctor_object l_Lake_expandConfigDecl___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__5_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__5_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__5_value_aux_2),((lean_object*)&l_Lake_expandConfigDecl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(180, 236, 187, 15, 83, 171, 117, 65)}};
static const lean_object* l_Lake_expandConfigDecl___closed__5 = (const lean_object*)&l_Lake_expandConfigDecl___closed__5_value;
static const lean_string_object l_Lake_expandConfigDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "structureTk"};
static const lean_object* l_Lake_expandConfigDecl___closed__6 = (const lean_object*)&l_Lake_expandConfigDecl___closed__6_value;
static const lean_ctor_object l_Lake_expandConfigDecl___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_configDecl___closed__24_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__7_value_aux_0),((lean_object*)&l_Lake_configDecl___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__7_value_aux_1),((lean_object*)&l_Lake_configDecl___closed__31_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake_expandConfigDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_expandConfigDecl___closed__7_value_aux_2),((lean_object*)&l_Lake_expandConfigDecl___closed__6_value),LEAN_SCALAR_PTR_LITERAL(132, 164, 13, 167, 248, 219, 132, 242)}};
static const lean_object* l_Lake_expandConfigDecl___closed__7 = (const lean_object*)&l_Lake_expandConfigDecl___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_expandConfigDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_expandConfigDecl___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0(void){
_start:
{
uint8_t v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = 0;
v___x_277_ = lean_box(0);
v___x_278_ = l_Lean_SourceInfo_fromRef(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5(void){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_Array_mkArray0___redArg();
return v___x_288_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_289_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5);
v___x_290_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4));
v___x_291_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0);
v___x_292_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set(v___x_292_, 1, v___x_290_);
lean_ctor_set(v___x_292_, 2, v___x_289_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0(lean_object* v_stx_293_){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_294_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0);
v___x_295_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2));
v___x_296_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6);
v___x_297_ = l_Lean_Syntax_node2(v___x_294_, v___x_295_, v_stx_293_, v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(lean_object* v_____do__lift_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
uint8_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = 0;
v___x_304_ = l_Lean_SourceInfo_fromRef(v_____do__lift_300_, v___x_303_);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___y_302_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0___boxed(lean_object* v_____do__lift_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(v_____do__lift_306_, v___y_307_, v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v_____do__lift_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__1(lean_object* v_x_311_){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__1___closed__0));
v___x_313_ = l_Lean_Name_str___override(v_x_311_, v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__2(lean_object* v_x_315_){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__2___closed__0));
v___x_317_ = l_Lean_Name_str___override(v_x_315_, v___x_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__3(lean_object* v_x_319_){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__3___closed__0));
v___x_321_ = l_Lean_Name_str___override(v_x_319_, v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__4(lean_object* v_x_323_){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__4___closed__0));
v___x_325_ = l_Lean_Name_str___override(v_x_323_, v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1(lean_object* v_a_332_, lean_object* v___x_333_, size_t v_sz_334_, size_t v_i_335_, lean_object* v_bs_336_){
_start:
{
uint8_t v___x_337_; 
v___x_337_ = lean_usize_dec_lt(v_i_335_, v_sz_334_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; 
lean_dec(v___x_333_);
lean_dec(v_a_332_);
v___x_338_ = l_unsafeCast___redArg(v_bs_336_);
lean_dec_ref(v_bs_336_);
return v___x_338_;
}
else
{
lean_object* v_v_339_; lean_object* v___x_340_; lean_object* v_bs_x27_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; size_t v___x_347_; size_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_v_339_ = lean_array_uget(v_bs_336_, v_i_335_);
v___x_340_ = lean_unsigned_to_nat(0u);
v_bs_x27_341_ = lean_array_uset(v_bs_336_, v_i_335_, v___x_340_);
v___x_342_ = l_unsafeCast___redArg(v_v_339_);
lean_dec(v_v_339_);
v___x_343_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1));
v___x_344_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2));
lean_inc_n(v___x_333_, 2);
lean_inc_n(v_a_332_, 2);
v___x_345_ = l_Lean_Syntax_node2(v_a_332_, v___x_344_, v___x_342_, v___x_333_);
v___x_346_ = l_Lean_Syntax_node2(v_a_332_, v___x_343_, v___x_345_, v___x_333_);
v___x_347_ = ((size_t)1ULL);
v___x_348_ = lean_usize_add(v_i_335_, v___x_347_);
v___x_349_ = l_unsafeCast___redArg(v___x_346_);
lean_dec(v___x_346_);
v___x_350_ = lean_array_uset(v_bs_x27_341_, v_i_335_, v___x_349_);
v_i_335_ = v___x_348_;
v_bs_336_ = v___x_350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___boxed(lean_object* v_a_352_, lean_object* v___x_353_, lean_object* v_sz_354_, lean_object* v_i_355_, lean_object* v_bs_356_){
_start:
{
size_t v_sz_boxed_357_; size_t v_i_boxed_358_; lean_object* v_res_359_; 
v_sz_boxed_357_ = lean_unbox_usize(v_sz_354_);
lean_dec(v_sz_354_);
v_i_boxed_358_ = lean_unbox_usize(v_i_355_);
lean_dec(v_i_355_);
v_res_359_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1(v_a_352_, v___x_353_, v_sz_boxed_357_, v_i_boxed_358_, v_bs_356_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(uint8_t v___x_360_, lean_object* v_____do__lift_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = l_Lean_SourceInfo_fromRef(v_____do__lift_361_, v___x_360_);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v___y_363_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1___boxed(lean_object* v___x_366_, lean_object* v_____do__lift_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
uint8_t v___x_79036__boxed_370_; lean_object* v_res_371_; 
v___x_79036__boxed_370_ = lean_unbox(v___x_366_);
v_res_371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_79036__boxed_370_, v_____do__lift_367_, v___y_368_, v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec(v_____do__lift_367_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(lean_object* v_structId_373_, lean_object* v_x_374_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_375_ = l_Lean_TSyntax_getId(v_structId_373_);
v___x_376_ = l_Lean_Name_append(v___x_375_, v_x_374_);
v___x_377_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0___closed__0));
v___x_378_ = l_Lean_Name_str___override(v___x_376_, v___x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0___boxed(lean_object* v_structId_379_, lean_object* v_x_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_379_, v_x_380_);
lean_dec(v_structId_379_);
return v_res_381_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__5));
v___x_389_ = l_String_toRawSubstring_x27(v___x_388_);
return v___x_389_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__22));
v___x_417_ = l_String_toRawSubstring_x27(v___x_416_);
return v___x_417_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__28));
v___x_425_ = l_String_toRawSubstring_x27(v___x_424_);
return v___x_425_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__32));
v___x_431_ = l_String_toRawSubstring_x27(v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__35));
v___x_436_ = l_String_toRawSubstring_x27(v___x_435_);
return v___x_436_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__40));
v___x_445_ = l_Lean_mkCIdent(v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43));
v___x_449_ = l_String_toRawSubstring_x27(v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2(lean_object* v_structTy_480_, lean_object* v_type_481_, lean_object* v___x_482_, lean_object* v___x_483_, lean_object* v_vis_x3f_484_, lean_object* v_structId_485_, lean_object* v_as_486_, size_t v_i_487_, size_t v_stop_488_, lean_object* v_b_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = lean_usize_dec_eq(v_i_487_, v_stop_488_);
if (v___x_492_ == 0)
{
lean_object* v_cmds_493_; lean_object* v_fields_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_704_; 
v_cmds_493_ = lean_ctor_get(v_b_489_, 0);
v_fields_494_ = lean_ctor_get(v_b_489_, 1);
v_isSharedCheck_704_ = !lean_is_exclusive(v_b_489_);
if (v_isSharedCheck_704_ == 0)
{
v___x_496_ = v_b_489_;
v_isShared_497_ = v_isSharedCheck_704_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_fields_494_);
lean_inc(v_cmds_493_);
lean_dec(v_b_489_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_704_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___y_502_; lean_object* v___y_503_; lean_object* v___y_504_; lean_object* v___y_505_; lean_object* v___y_506_; lean_object* v___y_507_; lean_object* v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_514_; lean_object* v___y_515_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_657_; uint8_t v___x_688_; 
v___x_498_ = lean_array_uget_borrowed(v_as_486_, v_i_487_);
v___x_499_ = l_Lean_TSyntax_getId(v___x_498_);
lean_inc(v___x_499_);
lean_inc(v___x_498_);
v___x_500_ = l_Lake_Name_quoteFrom(v___x_498_, v___x_499_, v___x_492_);
v___x_688_ = l_Lean_Name_hasMacroScopes(v___x_499_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; 
v___x_689_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_485_, v___x_499_);
v___y_657_ = v___x_689_;
goto v___jp_656_;
}
else
{
lean_object* v_view_690_; lean_object* v_name_691_; lean_object* v_imported_692_; lean_object* v_ctx_693_; lean_object* v_scopes_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_703_; 
v_view_690_ = l_Lean_extractMacroScopes(v___x_499_);
v_name_691_ = lean_ctor_get(v_view_690_, 0);
v_imported_692_ = lean_ctor_get(v_view_690_, 1);
v_ctx_693_ = lean_ctor_get(v_view_690_, 2);
v_scopes_694_ = lean_ctor_get(v_view_690_, 3);
v_isSharedCheck_703_ = !lean_is_exclusive(v_view_690_);
if (v_isSharedCheck_703_ == 0)
{
v___x_696_ = v_view_690_;
v_isShared_697_ = v_isSharedCheck_703_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_scopes_694_);
lean_inc(v_ctx_693_);
lean_inc(v_imported_692_);
lean_inc(v_name_691_);
lean_dec(v_view_690_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_703_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_485_, v_name_691_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_698_);
v___x_700_ = v___x_696_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_698_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v_imported_692_);
lean_ctor_set(v_reuseFailAlloc_702_, 2, v_ctx_693_);
lean_ctor_set(v_reuseFailAlloc_702_, 3, v_scopes_694_);
v___x_700_ = v_reuseFailAlloc_702_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lean_MacroScopesView_review(v___x_700_);
v___y_657_ = v___x_701_;
goto v___jp_656_;
}
}
}
v___jp_501_:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v_ref_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_inc_ref(v___y_508_);
v___x_520_ = l_Array_append___redArg(v___y_508_, v___y_519_);
lean_dec_ref(v___y_519_);
lean_inc_n(v___y_503_, 4);
lean_inc_n(v___y_510_, 18);
v___x_521_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_521_, 0, v___y_510_);
lean_ctor_set(v___x_521_, 1, v___y_503_);
lean_ctor_set(v___x_521_, 2, v___x_520_);
lean_inc_n(v___y_511_, 11);
lean_inc(v___y_505_);
v___x_522_ = l_Lean_Syntax_node7(v___y_510_, v___y_505_, v___y_511_, v___y_511_, v___x_521_, v___y_511_, v___y_511_, v___y_511_, v___y_511_);
v___x_523_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0));
lean_inc_ref_n(v___y_507_, 4);
lean_inc_ref_n(v___y_506_, 9);
lean_inc_ref_n(v___y_517_, 9);
v___x_524_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___y_507_, v___x_523_);
v___x_525_ = ((lean_object*)(l_Lake_configDecl___closed__26));
v___x_526_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1));
v___x_527_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_526_);
v___x_528_ = l_Lean_Syntax_node1(v___y_510_, v___x_527_, v___y_511_);
v___x_529_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_529_, 0, v___y_510_);
lean_ctor_set(v___x_529_, 1, v___x_523_);
v___x_530_ = ((lean_object*)(l_Lake_configDecl___closed__8));
v___x_531_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___y_507_, v___x_530_);
v___x_532_ = l_Lean_Syntax_node2(v___y_510_, v___x_531_, v___y_518_, v___y_511_);
v___x_533_ = l_Lean_Syntax_node1(v___y_510_, v___y_503_, v___x_532_);
v___x_534_ = ((lean_object*)(l_Lake_configField___closed__27));
v___x_535_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___y_507_, v___x_534_);
v___x_536_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__2));
v___x_537_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_536_);
v___x_538_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3));
v___x_539_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_539_, 0, v___y_510_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__4));
v___x_541_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_540_);
v___x_542_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6);
v___x_543_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__7));
lean_inc_n(v___y_516_, 2);
lean_inc_n(v___y_514_, 2);
v___x_544_ = l_Lean_addMacroScope(v___y_514_, v___x_543_, v___y_516_);
v___x_545_ = lean_box(0);
v___x_546_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__12));
v___x_547_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_547_, 0, v___y_510_);
lean_ctor_set(v___x_547_, 1, v___x_542_);
lean_ctor_set(v___x_547_, 2, v___x_544_);
lean_ctor_set(v___x_547_, 3, v___x_546_);
lean_inc(v_type_481_);
lean_inc(v___x_500_);
lean_inc(v_structTy_480_);
v___x_548_ = l_Lean_Syntax_node3(v___y_510_, v___y_503_, v_structTy_480_, v___x_500_, v_type_481_);
v___x_549_ = l_Lean_Syntax_node2(v___y_510_, v___x_541_, v___x_547_, v___x_548_);
v___x_550_ = l_Lean_Syntax_node2(v___y_510_, v___x_537_, v___x_539_, v___x_549_);
v___x_551_ = l_Lean_Syntax_node2(v___y_510_, v___x_535_, v___y_511_, v___x_550_);
v___x_552_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13));
v___x_553_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___y_507_, v___x_552_);
v___x_554_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14));
v___x_555_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_555_, 0, v___y_510_);
lean_ctor_set(v___x_555_, 1, v___x_554_);
v___x_556_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15));
v___x_557_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_556_);
v___x_558_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16));
v___x_559_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_559_, 0, v___y_510_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
lean_inc(v___x_482_);
v___x_560_ = l_Lean_Syntax_node1(v___y_510_, v___y_503_, v___x_482_);
v___x_561_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17));
v___x_562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_562_, 0, v___y_510_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = l_Lean_Syntax_node3(v___y_510_, v___x_557_, v___x_559_, v___x_560_, v___x_562_);
v___x_564_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18));
v___x_565_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19));
v___x_566_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_564_, v___x_565_);
v___x_567_ = l_Lean_Syntax_node2(v___y_510_, v___x_566_, v___y_511_, v___y_511_);
v_ref_568_ = l_Lean_replaceRef(v_fields_494_, v___y_504_);
lean_inc(v_ref_568_);
lean_inc(v___y_509_);
lean_inc(v___y_502_);
lean_inc(v___y_513_);
v___x_569_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_569_, 0, v___y_513_);
lean_ctor_set(v___x_569_, 1, v___y_514_);
lean_ctor_set(v___x_569_, 2, v___y_516_);
lean_ctor_set(v___x_569_, 3, v___y_502_);
lean_ctor_set(v___x_569_, 4, v___y_509_);
lean_ctor_set(v___x_569_, 5, v_ref_568_);
v___x_570_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_492_, v_ref_568_, v___x_569_, v___y_512_);
lean_dec_ref_known(v___x_569_, 6);
lean_dec(v_ref_568_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v_a_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc_n(v_a_571_, 30);
v_a_572_ = lean_ctor_get(v___x_570_, 1);
lean_inc(v_a_572_);
lean_dec_ref_known(v___x_570_, 2);
lean_inc(v___y_511_);
lean_inc_n(v___y_510_, 2);
v___x_573_ = l_Lean_Syntax_node4(v___y_510_, v___x_553_, v___x_555_, v___x_563_, v___x_567_, v___y_511_);
v___x_574_ = l_Lean_Syntax_node6(v___y_510_, v___x_524_, v___x_528_, v___x_529_, v___y_511_, v___x_533_, v___x_551_, v___x_573_);
lean_inc(v___y_515_);
v___x_575_ = l_Lean_Syntax_node2(v___y_510_, v___y_515_, v___x_522_, v___x_574_);
v___x_576_ = lean_array_push(v_cmds_493_, v___x_575_);
v___x_577_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20));
lean_inc_ref_n(v___y_506_, 7);
lean_inc_ref_n(v___y_517_, 7);
v___x_578_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_577_);
v___x_579_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21));
v___x_580_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_580_, 0, v_a_571_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23);
v___x_582_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24));
lean_inc_n(v___y_516_, 5);
lean_inc_n(v___y_514_, 5);
v___x_583_ = l_Lean_addMacroScope(v___y_514_, v___x_582_, v___y_516_);
v___x_584_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_584_, 0, v_a_571_);
lean_ctor_set(v___x_584_, 1, v___x_581_);
lean_ctor_set(v___x_584_, 2, v___x_583_);
lean_ctor_set(v___x_584_, 3, v___x_545_);
lean_inc_ref(v___y_508_);
lean_inc_n(v___y_503_, 7);
v___x_585_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_585_, 0, v_a_571_);
lean_ctor_set(v___x_585_, 1, v___y_503_);
lean_ctor_set(v___x_585_, 2, v___y_508_);
v___x_586_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__25));
v___x_587_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_586_);
v___x_588_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__26));
v___x_589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_589_, 0, v_a_571_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__27));
v___x_591_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_590_);
v___x_592_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__0));
v___x_593_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_592_);
v___x_594_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__1));
v___x_595_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_594_);
v___x_596_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29);
v___x_597_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30));
v___x_598_ = l_Lean_addMacroScope(v___y_514_, v___x_597_, v___y_516_);
v___x_599_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_599_, 0, v_a_571_);
lean_ctor_set(v___x_599_, 1, v___x_596_);
lean_ctor_set(v___x_599_, 2, v___x_598_);
lean_ctor_set(v___x_599_, 3, v___x_545_);
lean_inc_ref_n(v___x_585_, 17);
lean_inc_n(v___x_595_, 2);
v___x_600_ = l_Lean_Syntax_node2(v_a_571_, v___x_595_, v___x_599_, v___x_585_);
v___x_601_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__31));
v___x_602_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_601_);
v___x_603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_603_, 0, v_a_571_);
lean_ctor_set(v___x_603_, 1, v___x_554_);
lean_inc_ref_n(v___x_603_, 2);
lean_inc_n(v___x_602_, 2);
v___x_604_ = l_Lean_Syntax_node3(v_a_571_, v___x_602_, v___x_603_, v___x_585_, v___x_500_);
v___x_605_ = l_Lean_Syntax_node3(v_a_571_, v___y_503_, v___x_585_, v___x_585_, v___x_604_);
lean_inc_n(v___x_593_, 2);
v___x_606_ = l_Lean_Syntax_node2(v_a_571_, v___x_593_, v___x_600_, v___x_605_);
v___x_607_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33);
v___x_608_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34));
v___x_609_ = l_Lean_addMacroScope(v___y_514_, v___x_608_, v___y_516_);
v___x_610_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_610_, 0, v_a_571_);
lean_ctor_set(v___x_610_, 1, v___x_607_);
lean_ctor_set(v___x_610_, 2, v___x_609_);
lean_ctor_set(v___x_610_, 3, v___x_545_);
v___x_611_ = l_Lean_Syntax_node2(v_a_571_, v___x_595_, v___x_610_, v___x_585_);
lean_inc(v___x_483_);
v___x_612_ = l_Lean_Syntax_node3(v_a_571_, v___x_602_, v___x_603_, v___x_585_, v___x_483_);
v___x_613_ = l_Lean_Syntax_node3(v_a_571_, v___y_503_, v___x_585_, v___x_585_, v___x_612_);
v___x_614_ = l_Lean_Syntax_node2(v_a_571_, v___x_593_, v___x_611_, v___x_613_);
v___x_615_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36);
v___x_616_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__37));
v___x_617_ = l_Lean_addMacroScope(v___y_514_, v___x_616_, v___y_516_);
v___x_618_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_618_, 0, v_a_571_);
lean_ctor_set(v___x_618_, 1, v___x_615_);
lean_ctor_set(v___x_618_, 2, v___x_617_);
lean_ctor_set(v___x_618_, 3, v___x_545_);
v___x_619_ = l_Lean_Syntax_node2(v_a_571_, v___x_595_, v___x_618_, v___x_585_);
v___x_620_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41);
v___x_621_ = l_Lean_Syntax_node3(v_a_571_, v___x_602_, v___x_603_, v___x_585_, v___x_620_);
v___x_622_ = l_Lean_Syntax_node3(v_a_571_, v___y_503_, v___x_585_, v___x_585_, v___x_621_);
v___x_623_ = l_Lean_Syntax_node2(v_a_571_, v___x_593_, v___x_619_, v___x_622_);
v___x_624_ = l_Lean_Syntax_node6(v_a_571_, v___y_503_, v___x_606_, v___x_585_, v___x_614_, v___x_585_, v___x_623_, v___x_585_);
v___x_625_ = l_Lean_Syntax_node1(v_a_571_, v___x_591_, v___x_624_);
v___x_626_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__42));
v___x_627_ = l_Lean_Name_mkStr4(v___y_517_, v___y_506_, v___x_525_, v___x_626_);
v___x_628_ = l_Lean_Syntax_node1(v_a_571_, v___x_627_, v___x_585_);
v___x_629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_629_, 0, v_a_571_);
lean_ctor_set(v___x_629_, 1, v___x_538_);
v___x_630_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44);
v___x_631_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45));
v___x_632_ = l_Lean_addMacroScope(v___y_514_, v___x_631_, v___y_516_);
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__50));
v___x_634_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_634_, 0, v_a_571_);
lean_ctor_set(v___x_634_, 1, v___x_630_);
lean_ctor_set(v___x_634_, 2, v___x_632_);
lean_ctor_set(v___x_634_, 3, v___x_633_);
v___x_635_ = l_Lean_Syntax_node2(v_a_571_, v___y_503_, v___x_629_, v___x_634_);
v___x_636_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__51));
v___x_637_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_637_, 0, v_a_571_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = l_Lean_Syntax_node6(v_a_571_, v___x_587_, v___x_589_, v___x_585_, v___x_625_, v___x_628_, v___x_635_, v___x_637_);
v___x_639_ = l_Lean_Syntax_node1(v_a_571_, v___y_503_, v___x_638_);
v___x_640_ = l_Lean_Syntax_node5(v_a_571_, v___x_578_, v_fields_494_, v___x_580_, v___x_584_, v___x_585_, v___x_639_);
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 1, v___x_640_);
lean_ctor_set(v___x_496_, 0, v___x_576_);
v___x_642_ = v___x_496_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v___x_640_);
v___x_642_ = v_reuseFailAlloc_646_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
size_t v___x_643_; size_t v___x_644_; 
v___x_643_ = ((size_t)1ULL);
v___x_644_ = lean_usize_add(v_i_487_, v___x_643_);
v_i_487_ = v___x_644_;
v_b_489_ = v___x_642_;
v___y_491_ = v_a_572_;
goto _start;
}
}
else
{
lean_object* v_a_647_; lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
lean_dec(v___x_567_);
lean_dec(v___x_563_);
lean_dec_ref_known(v___x_555_, 2);
lean_dec(v___x_553_);
lean_dec(v___x_551_);
lean_dec(v___x_533_);
lean_dec_ref_known(v___x_529_, 2);
lean_dec(v___x_528_);
lean_dec(v___x_524_);
lean_dec(v___x_522_);
lean_dec(v___y_511_);
lean_dec(v___y_510_);
lean_dec(v___x_500_);
lean_del_object(v___x_496_);
lean_dec(v_fields_494_);
lean_dec_ref(v_cmds_493_);
lean_dec(v_vis_x3f_484_);
lean_dec(v___x_483_);
lean_dec(v___x_482_);
lean_dec(v_type_481_);
lean_dec(v_structTy_480_);
v_a_647_ = lean_ctor_get(v___x_570_, 0);
v_a_648_ = lean_ctor_get(v___x_570_, 1);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_570_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_inc(v_a_647_);
lean_dec(v___x_570_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_647_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
v___jp_656_:
{
lean_object* v_methods_658_; lean_object* v_quotContext_659_; lean_object* v_currMacroScope_660_; lean_object* v_currRecDepth_661_; lean_object* v_maxRecDepth_662_; lean_object* v_ref_663_; lean_object* v___x_664_; 
v_methods_658_ = lean_ctor_get(v___y_490_, 0);
v_quotContext_659_ = lean_ctor_get(v___y_490_, 1);
v_currMacroScope_660_ = lean_ctor_get(v___y_490_, 2);
v_currRecDepth_661_ = lean_ctor_get(v___y_490_, 3);
v_maxRecDepth_662_ = lean_ctor_get(v___y_490_, 4);
v_ref_663_ = lean_ctor_get(v___y_490_, 5);
v___x_664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_492_, v_ref_663_, v___y_490_, v___y_491_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; lean_object* v_a_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc_n(v_a_665_, 2);
v_a_666_ = lean_ctor_get(v___x_664_, 1);
lean_inc(v_a_666_);
lean_dec_ref_known(v___x_664_, 2);
v___x_667_ = l_Lean_mkIdentFrom(v___x_498_, v___y_657_, v___x_492_);
v___x_668_ = ((lean_object*)(l_Lake_configDecl___closed__24));
v___x_669_ = ((lean_object*)(l_Lake_configDecl___closed__25));
v___x_670_ = ((lean_object*)(l_Lake_configDecl___closed__31));
v___x_671_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53));
v___x_672_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54));
v___x_673_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4));
v___x_674_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5);
v___x_675_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_675_, 0, v_a_665_);
lean_ctor_set(v___x_675_, 1, v___x_673_);
lean_ctor_set(v___x_675_, 2, v___x_674_);
if (lean_obj_tag(v_vis_x3f_484_) == 1)
{
lean_object* v_val_676_; lean_object* v___x_677_; 
v_val_676_ = lean_ctor_get(v_vis_x3f_484_, 0);
lean_inc(v_val_676_);
v___x_677_ = l_Array_mkArray1___redArg(v_val_676_);
v___y_502_ = v_currRecDepth_661_;
v___y_503_ = v___x_673_;
v___y_504_ = v_ref_663_;
v___y_505_ = v___x_672_;
v___y_506_ = v___x_669_;
v___y_507_ = v___x_670_;
v___y_508_ = v___x_674_;
v___y_509_ = v_maxRecDepth_662_;
v___y_510_ = v_a_665_;
v___y_511_ = v___x_675_;
v___y_512_ = v_a_666_;
v___y_513_ = v_methods_658_;
v___y_514_ = v_quotContext_659_;
v___y_515_ = v___x_671_;
v___y_516_ = v_currMacroScope_660_;
v___y_517_ = v___x_668_;
v___y_518_ = v___x_667_;
v___y_519_ = v___x_677_;
goto v___jp_501_;
}
else
{
lean_object* v___x_678_; 
v___x_678_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_502_ = v_currRecDepth_661_;
v___y_503_ = v___x_673_;
v___y_504_ = v_ref_663_;
v___y_505_ = v___x_672_;
v___y_506_ = v___x_669_;
v___y_507_ = v___x_670_;
v___y_508_ = v___x_674_;
v___y_509_ = v_maxRecDepth_662_;
v___y_510_ = v_a_665_;
v___y_511_ = v___x_675_;
v___y_512_ = v_a_666_;
v___y_513_ = v_methods_658_;
v___y_514_ = v_quotContext_659_;
v___y_515_ = v___x_671_;
v___y_516_ = v_currMacroScope_660_;
v___y_517_ = v___x_668_;
v___y_518_ = v___x_667_;
v___y_519_ = v___x_678_;
goto v___jp_501_;
}
}
else
{
lean_object* v_a_679_; lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec(v___y_657_);
lean_dec(v___x_500_);
lean_del_object(v___x_496_);
lean_dec(v_fields_494_);
lean_dec_ref(v_cmds_493_);
lean_dec(v_vis_x3f_484_);
lean_dec(v___x_483_);
lean_dec(v___x_482_);
lean_dec(v_type_481_);
lean_dec(v_structTy_480_);
v_a_679_ = lean_ctor_get(v___x_664_, 0);
v_a_680_ = lean_ctor_get(v___x_664_, 1);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_664_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_inc(v_a_679_);
lean_dec(v___x_664_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_679_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
}
}
else
{
lean_object* v___x_705_; 
lean_dec(v_vis_x3f_484_);
lean_dec(v___x_483_);
lean_dec(v___x_482_);
lean_dec(v_type_481_);
lean_dec(v_structTy_480_);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v_b_489_);
lean_ctor_set(v___x_705_, 1, v___y_491_);
return v___x_705_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___boxed(lean_object* v_structTy_706_, lean_object* v_type_707_, lean_object* v___x_708_, lean_object* v___x_709_, lean_object* v_vis_x3f_710_, lean_object* v_structId_711_, lean_object* v_as_712_, lean_object* v_i_713_, lean_object* v_stop_714_, lean_object* v_b_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
size_t v_i_boxed_718_; size_t v_stop_boxed_719_; lean_object* v_res_720_; 
v_i_boxed_718_ = lean_unbox_usize(v_i_713_);
lean_dec(v_i_713_);
v_stop_boxed_719_ = lean_unbox_usize(v_stop_714_);
lean_dec(v_stop_714_);
v_res_720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2(v_structTy_706_, v_type_707_, v___x_708_, v___x_709_, v_vis_x3f_710_, v_structId_711_, v_as_712_, v_i_boxed_718_, v_stop_boxed_719_, v_b_715_, v___y_716_, v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec_ref(v_as_712_);
lean_dec(v_structId_711_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2(lean_object* v_structTy_721_, lean_object* v_type_722_, lean_object* v___x_723_, lean_object* v___x_724_, lean_object* v_vis_x3f_725_, lean_object* v_structId_726_, lean_object* v_as_727_, size_t v_i_728_, size_t v_stop_729_, lean_object* v_b_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
uint8_t v___x_733_; 
v___x_733_ = lean_usize_dec_eq(v_i_728_, v_stop_729_);
if (v___x_733_ == 0)
{
lean_object* v_cmds_734_; lean_object* v_fields_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_945_; 
v_cmds_734_ = lean_ctor_get(v_b_730_, 0);
v_fields_735_ = lean_ctor_get(v_b_730_, 1);
v_isSharedCheck_945_ = !lean_is_exclusive(v_b_730_);
if (v_isSharedCheck_945_ == 0)
{
v___x_737_ = v_b_730_;
v_isShared_738_ = v_isSharedCheck_945_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_fields_735_);
lean_inc(v_cmds_734_);
lean_dec(v_b_730_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_945_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_898_; uint8_t v___x_929_; 
v___x_739_ = lean_array_uget_borrowed(v_as_727_, v_i_728_);
v___x_740_ = l_Lean_TSyntax_getId(v___x_739_);
lean_inc(v___x_740_);
lean_inc(v___x_739_);
v___x_741_ = l_Lake_Name_quoteFrom(v___x_739_, v___x_740_, v___x_733_);
v___x_929_ = l_Lean_Name_hasMacroScopes(v___x_740_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; 
v___x_930_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_726_, v___x_740_);
v___y_898_ = v___x_930_;
goto v___jp_897_;
}
else
{
lean_object* v_view_931_; lean_object* v_name_932_; lean_object* v_imported_933_; lean_object* v_ctx_934_; lean_object* v_scopes_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_944_; 
v_view_931_ = l_Lean_extractMacroScopes(v___x_740_);
v_name_932_ = lean_ctor_get(v_view_931_, 0);
v_imported_933_ = lean_ctor_get(v_view_931_, 1);
v_ctx_934_ = lean_ctor_get(v_view_931_, 2);
v_scopes_935_ = lean_ctor_get(v_view_931_, 3);
v_isSharedCheck_944_ = !lean_is_exclusive(v_view_931_);
if (v_isSharedCheck_944_ == 0)
{
v___x_937_ = v_view_931_;
v_isShared_938_ = v_isSharedCheck_944_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_scopes_935_);
lean_inc(v_ctx_934_);
lean_inc(v_imported_933_);
lean_inc(v_name_932_);
lean_dec(v_view_931_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_944_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_939_; lean_object* v___x_941_; 
v___x_939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_726_, v_name_932_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_939_);
v___x_941_ = v___x_937_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_939_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v_imported_933_);
lean_ctor_set(v_reuseFailAlloc_943_, 2, v_ctx_934_);
lean_ctor_set(v_reuseFailAlloc_943_, 3, v_scopes_935_);
v___x_941_ = v_reuseFailAlloc_943_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_942_; 
v___x_942_ = l_Lean_MacroScopesView_review(v___x_941_);
v___y_898_ = v___x_942_;
goto v___jp_897_;
}
}
}
v___jp_742_:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v_ref_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
lean_inc_ref(v___y_756_);
v___x_761_ = l_Array_append___redArg(v___y_756_, v___y_760_);
lean_dec_ref(v___y_760_);
lean_inc_n(v___y_757_, 4);
lean_inc_n(v___y_750_, 18);
v___x_762_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_762_, 0, v___y_750_);
lean_ctor_set(v___x_762_, 1, v___y_757_);
lean_ctor_set(v___x_762_, 2, v___x_761_);
lean_inc_n(v___y_748_, 11);
lean_inc(v___y_743_);
v___x_763_ = l_Lean_Syntax_node7(v___y_750_, v___y_743_, v___y_748_, v___y_748_, v___x_762_, v___y_748_, v___y_748_, v___y_748_, v___y_748_);
v___x_764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0));
lean_inc_ref_n(v___y_747_, 4);
lean_inc_ref_n(v___y_751_, 9);
lean_inc_ref_n(v___y_745_, 9);
v___x_765_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___y_747_, v___x_764_);
v___x_766_ = ((lean_object*)(l_Lake_configDecl___closed__26));
v___x_767_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1));
v___x_768_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_767_);
v___x_769_ = l_Lean_Syntax_node1(v___y_750_, v___x_768_, v___y_748_);
v___x_770_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_770_, 0, v___y_750_);
lean_ctor_set(v___x_770_, 1, v___x_764_);
v___x_771_ = ((lean_object*)(l_Lake_configDecl___closed__8));
v___x_772_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___y_747_, v___x_771_);
v___x_773_ = l_Lean_Syntax_node2(v___y_750_, v___x_772_, v___y_758_, v___y_748_);
v___x_774_ = l_Lean_Syntax_node1(v___y_750_, v___y_757_, v___x_773_);
v___x_775_ = ((lean_object*)(l_Lake_configField___closed__27));
v___x_776_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___y_747_, v___x_775_);
v___x_777_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__2));
v___x_778_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_777_);
v___x_779_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3));
v___x_780_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_780_, 0, v___y_750_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__4));
v___x_782_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_781_);
v___x_783_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6);
v___x_784_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__7));
lean_inc_n(v___y_759_, 2);
lean_inc_n(v___y_752_, 2);
v___x_785_ = l_Lean_addMacroScope(v___y_752_, v___x_784_, v___y_759_);
v___x_786_ = lean_box(0);
v___x_787_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__12));
v___x_788_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_788_, 0, v___y_750_);
lean_ctor_set(v___x_788_, 1, v___x_783_);
lean_ctor_set(v___x_788_, 2, v___x_785_);
lean_ctor_set(v___x_788_, 3, v___x_787_);
lean_inc(v_type_722_);
lean_inc(v___x_741_);
lean_inc(v_structTy_721_);
v___x_789_ = l_Lean_Syntax_node3(v___y_750_, v___y_757_, v_structTy_721_, v___x_741_, v_type_722_);
v___x_790_ = l_Lean_Syntax_node2(v___y_750_, v___x_782_, v___x_788_, v___x_789_);
v___x_791_ = l_Lean_Syntax_node2(v___y_750_, v___x_778_, v___x_780_, v___x_790_);
v___x_792_ = l_Lean_Syntax_node2(v___y_750_, v___x_776_, v___y_748_, v___x_791_);
v___x_793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13));
v___x_794_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___y_747_, v___x_793_);
v___x_795_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14));
v___x_796_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_796_, 0, v___y_750_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
v___x_797_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15));
v___x_798_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_797_);
v___x_799_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16));
v___x_800_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_800_, 0, v___y_750_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
lean_inc(v___x_723_);
v___x_801_ = l_Lean_Syntax_node1(v___y_750_, v___y_757_, v___x_723_);
v___x_802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17));
v___x_803_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_803_, 0, v___y_750_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v___x_804_ = l_Lean_Syntax_node3(v___y_750_, v___x_798_, v___x_800_, v___x_801_, v___x_803_);
v___x_805_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18));
v___x_806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19));
v___x_807_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_805_, v___x_806_);
v___x_808_ = l_Lean_Syntax_node2(v___y_750_, v___x_807_, v___y_748_, v___y_748_);
v_ref_809_ = l_Lean_replaceRef(v_fields_735_, v___y_749_);
lean_inc(v_ref_809_);
lean_inc(v___y_744_);
lean_inc(v___y_746_);
lean_inc(v___y_753_);
v___x_810_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_810_, 0, v___y_753_);
lean_ctor_set(v___x_810_, 1, v___y_752_);
lean_ctor_set(v___x_810_, 2, v___y_759_);
lean_ctor_set(v___x_810_, 3, v___y_746_);
lean_ctor_set(v___x_810_, 4, v___y_744_);
lean_ctor_set(v___x_810_, 5, v_ref_809_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_733_, v_ref_809_, v___x_810_, v___y_755_);
lean_dec_ref_known(v___x_810_, 6);
lean_dec(v_ref_809_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v_a_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_883_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc_n(v_a_812_, 30);
v_a_813_ = lean_ctor_get(v___x_811_, 1);
lean_inc(v_a_813_);
lean_dec_ref_known(v___x_811_, 2);
lean_inc(v___y_748_);
lean_inc_n(v___y_750_, 2);
v___x_814_ = l_Lean_Syntax_node4(v___y_750_, v___x_794_, v___x_796_, v___x_804_, v___x_808_, v___y_748_);
v___x_815_ = l_Lean_Syntax_node6(v___y_750_, v___x_765_, v___x_769_, v___x_770_, v___y_748_, v___x_774_, v___x_792_, v___x_814_);
lean_inc(v___y_754_);
v___x_816_ = l_Lean_Syntax_node2(v___y_750_, v___y_754_, v___x_763_, v___x_815_);
v___x_817_ = lean_array_push(v_cmds_734_, v___x_816_);
v___x_818_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20));
lean_inc_ref_n(v___y_751_, 7);
lean_inc_ref_n(v___y_745_, 7);
v___x_819_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_818_);
v___x_820_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21));
v___x_821_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_821_, 0, v_a_812_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
v___x_822_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23);
v___x_823_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24));
lean_inc_n(v___y_759_, 5);
lean_inc_n(v___y_752_, 5);
v___x_824_ = l_Lean_addMacroScope(v___y_752_, v___x_823_, v___y_759_);
v___x_825_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_825_, 0, v_a_812_);
lean_ctor_set(v___x_825_, 1, v___x_822_);
lean_ctor_set(v___x_825_, 2, v___x_824_);
lean_ctor_set(v___x_825_, 3, v___x_786_);
lean_inc_ref(v___y_756_);
lean_inc_n(v___y_757_, 7);
v___x_826_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_826_, 0, v_a_812_);
lean_ctor_set(v___x_826_, 1, v___y_757_);
lean_ctor_set(v___x_826_, 2, v___y_756_);
v___x_827_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__25));
v___x_828_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_827_);
v___x_829_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__26));
v___x_830_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_830_, 0, v_a_812_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__27));
v___x_832_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_831_);
v___x_833_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__0));
v___x_834_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_833_);
v___x_835_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__1));
v___x_836_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_835_);
v___x_837_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29);
v___x_838_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30));
v___x_839_ = l_Lean_addMacroScope(v___y_752_, v___x_838_, v___y_759_);
v___x_840_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_840_, 0, v_a_812_);
lean_ctor_set(v___x_840_, 1, v___x_837_);
lean_ctor_set(v___x_840_, 2, v___x_839_);
lean_ctor_set(v___x_840_, 3, v___x_786_);
lean_inc_ref_n(v___x_826_, 17);
lean_inc_n(v___x_836_, 2);
v___x_841_ = l_Lean_Syntax_node2(v_a_812_, v___x_836_, v___x_840_, v___x_826_);
v___x_842_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__31));
v___x_843_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_842_);
v___x_844_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_844_, 0, v_a_812_);
lean_ctor_set(v___x_844_, 1, v___x_795_);
lean_inc_ref_n(v___x_844_, 2);
lean_inc_n(v___x_843_, 2);
v___x_845_ = l_Lean_Syntax_node3(v_a_812_, v___x_843_, v___x_844_, v___x_826_, v___x_741_);
v___x_846_ = l_Lean_Syntax_node3(v_a_812_, v___y_757_, v___x_826_, v___x_826_, v___x_845_);
lean_inc_n(v___x_834_, 2);
v___x_847_ = l_Lean_Syntax_node2(v_a_812_, v___x_834_, v___x_841_, v___x_846_);
v___x_848_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33);
v___x_849_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34));
v___x_850_ = l_Lean_addMacroScope(v___y_752_, v___x_849_, v___y_759_);
v___x_851_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_851_, 0, v_a_812_);
lean_ctor_set(v___x_851_, 1, v___x_848_);
lean_ctor_set(v___x_851_, 2, v___x_850_);
lean_ctor_set(v___x_851_, 3, v___x_786_);
v___x_852_ = l_Lean_Syntax_node2(v_a_812_, v___x_836_, v___x_851_, v___x_826_);
lean_inc(v___x_724_);
v___x_853_ = l_Lean_Syntax_node3(v_a_812_, v___x_843_, v___x_844_, v___x_826_, v___x_724_);
v___x_854_ = l_Lean_Syntax_node3(v_a_812_, v___y_757_, v___x_826_, v___x_826_, v___x_853_);
v___x_855_ = l_Lean_Syntax_node2(v_a_812_, v___x_834_, v___x_852_, v___x_854_);
v___x_856_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36);
v___x_857_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__37));
v___x_858_ = l_Lean_addMacroScope(v___y_752_, v___x_857_, v___y_759_);
v___x_859_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_859_, 0, v_a_812_);
lean_ctor_set(v___x_859_, 1, v___x_856_);
lean_ctor_set(v___x_859_, 2, v___x_858_);
lean_ctor_set(v___x_859_, 3, v___x_786_);
v___x_860_ = l_Lean_Syntax_node2(v_a_812_, v___x_836_, v___x_859_, v___x_826_);
v___x_861_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__41);
v___x_862_ = l_Lean_Syntax_node3(v_a_812_, v___x_843_, v___x_844_, v___x_826_, v___x_861_);
v___x_863_ = l_Lean_Syntax_node3(v_a_812_, v___y_757_, v___x_826_, v___x_826_, v___x_862_);
v___x_864_ = l_Lean_Syntax_node2(v_a_812_, v___x_834_, v___x_860_, v___x_863_);
v___x_865_ = l_Lean_Syntax_node6(v_a_812_, v___y_757_, v___x_847_, v___x_826_, v___x_855_, v___x_826_, v___x_864_, v___x_826_);
v___x_866_ = l_Lean_Syntax_node1(v_a_812_, v___x_832_, v___x_865_);
v___x_867_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__42));
v___x_868_ = l_Lean_Name_mkStr4(v___y_745_, v___y_751_, v___x_766_, v___x_867_);
v___x_869_ = l_Lean_Syntax_node1(v_a_812_, v___x_868_, v___x_826_);
v___x_870_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_870_, 0, v_a_812_);
lean_ctor_set(v___x_870_, 1, v___x_779_);
v___x_871_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44);
v___x_872_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45));
v___x_873_ = l_Lean_addMacroScope(v___y_752_, v___x_872_, v___y_759_);
v___x_874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__50));
v___x_875_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_875_, 0, v_a_812_);
lean_ctor_set(v___x_875_, 1, v___x_871_);
lean_ctor_set(v___x_875_, 2, v___x_873_);
lean_ctor_set(v___x_875_, 3, v___x_874_);
v___x_876_ = l_Lean_Syntax_node2(v_a_812_, v___y_757_, v___x_870_, v___x_875_);
v___x_877_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__51));
v___x_878_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_878_, 0, v_a_812_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
v___x_879_ = l_Lean_Syntax_node6(v_a_812_, v___x_828_, v___x_830_, v___x_826_, v___x_866_, v___x_869_, v___x_876_, v___x_878_);
v___x_880_ = l_Lean_Syntax_node1(v_a_812_, v___y_757_, v___x_879_);
v___x_881_ = l_Lean_Syntax_node5(v_a_812_, v___x_819_, v_fields_735_, v___x_821_, v___x_825_, v___x_826_, v___x_880_);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 1, v___x_881_);
lean_ctor_set(v___x_737_, 0, v___x_817_);
v___x_883_ = v___x_737_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_817_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v___x_881_);
v___x_883_ = v_reuseFailAlloc_887_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
size_t v___x_884_; size_t v___x_885_; lean_object* v___x_886_; 
v___x_884_ = ((size_t)1ULL);
v___x_885_ = lean_usize_add(v_i_728_, v___x_884_);
v___x_886_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2(v_structTy_721_, v_type_722_, v___x_723_, v___x_724_, v_vis_x3f_725_, v_structId_726_, v_as_727_, v___x_885_, v_stop_729_, v___x_883_, v___y_731_, v_a_813_);
return v___x_886_;
}
}
else
{
lean_object* v_a_888_; lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec(v___x_808_);
lean_dec(v___x_804_);
lean_dec_ref_known(v___x_796_, 2);
lean_dec(v___x_794_);
lean_dec(v___x_792_);
lean_dec(v___x_774_);
lean_dec_ref_known(v___x_770_, 2);
lean_dec(v___x_769_);
lean_dec(v___x_765_);
lean_dec(v___x_763_);
lean_dec(v___y_750_);
lean_dec(v___y_748_);
lean_dec(v___x_741_);
lean_del_object(v___x_737_);
lean_dec(v_fields_735_);
lean_dec_ref(v_cmds_734_);
lean_dec(v_vis_x3f_725_);
lean_dec(v___x_724_);
lean_dec(v___x_723_);
lean_dec(v_type_722_);
lean_dec(v_structTy_721_);
v_a_888_ = lean_ctor_get(v___x_811_, 0);
v_a_889_ = lean_ctor_get(v___x_811_, 1);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_811_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_inc(v_a_888_);
lean_dec(v___x_811_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_888_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
v___jp_897_:
{
lean_object* v_methods_899_; lean_object* v_quotContext_900_; lean_object* v_currMacroScope_901_; lean_object* v_currRecDepth_902_; lean_object* v_maxRecDepth_903_; lean_object* v_ref_904_; lean_object* v___x_905_; 
v_methods_899_ = lean_ctor_get(v___y_731_, 0);
v_quotContext_900_ = lean_ctor_get(v___y_731_, 1);
v_currMacroScope_901_ = lean_ctor_get(v___y_731_, 2);
v_currRecDepth_902_ = lean_ctor_get(v___y_731_, 3);
v_maxRecDepth_903_ = lean_ctor_get(v___y_731_, 4);
v_ref_904_ = lean_ctor_get(v___y_731_, 5);
v___x_905_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_733_, v_ref_904_, v___y_731_, v___y_732_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v_a_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc_n(v_a_906_, 2);
v_a_907_ = lean_ctor_get(v___x_905_, 1);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_905_, 2);
v___x_908_ = l_Lean_mkIdentFrom(v___x_739_, v___y_898_, v___x_733_);
v___x_909_ = ((lean_object*)(l_Lake_configDecl___closed__24));
v___x_910_ = ((lean_object*)(l_Lake_configDecl___closed__25));
v___x_911_ = ((lean_object*)(l_Lake_configDecl___closed__31));
v___x_912_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53));
v___x_913_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54));
v___x_914_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4));
v___x_915_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5);
v___x_916_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_916_, 0, v_a_906_);
lean_ctor_set(v___x_916_, 1, v___x_914_);
lean_ctor_set(v___x_916_, 2, v___x_915_);
if (lean_obj_tag(v_vis_x3f_725_) == 1)
{
lean_object* v_val_917_; lean_object* v___x_918_; 
v_val_917_ = lean_ctor_get(v_vis_x3f_725_, 0);
lean_inc(v_val_917_);
v___x_918_ = l_Array_mkArray1___redArg(v_val_917_);
v___y_743_ = v___x_913_;
v___y_744_ = v_maxRecDepth_903_;
v___y_745_ = v___x_909_;
v___y_746_ = v_currRecDepth_902_;
v___y_747_ = v___x_911_;
v___y_748_ = v___x_916_;
v___y_749_ = v_ref_904_;
v___y_750_ = v_a_906_;
v___y_751_ = v___x_910_;
v___y_752_ = v_quotContext_900_;
v___y_753_ = v_methods_899_;
v___y_754_ = v___x_912_;
v___y_755_ = v_a_907_;
v___y_756_ = v___x_915_;
v___y_757_ = v___x_914_;
v___y_758_ = v___x_908_;
v___y_759_ = v_currMacroScope_901_;
v___y_760_ = v___x_918_;
goto v___jp_742_;
}
else
{
lean_object* v___x_919_; 
v___x_919_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_743_ = v___x_913_;
v___y_744_ = v_maxRecDepth_903_;
v___y_745_ = v___x_909_;
v___y_746_ = v_currRecDepth_902_;
v___y_747_ = v___x_911_;
v___y_748_ = v___x_916_;
v___y_749_ = v_ref_904_;
v___y_750_ = v_a_906_;
v___y_751_ = v___x_910_;
v___y_752_ = v_quotContext_900_;
v___y_753_ = v_methods_899_;
v___y_754_ = v___x_912_;
v___y_755_ = v_a_907_;
v___y_756_ = v___x_915_;
v___y_757_ = v___x_914_;
v___y_758_ = v___x_908_;
v___y_759_ = v_currMacroScope_901_;
v___y_760_ = v___x_919_;
goto v___jp_742_;
}
}
else
{
lean_object* v_a_920_; lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
lean_dec(v___y_898_);
lean_dec(v___x_741_);
lean_del_object(v___x_737_);
lean_dec(v_fields_735_);
lean_dec_ref(v_cmds_734_);
lean_dec(v_vis_x3f_725_);
lean_dec(v___x_724_);
lean_dec(v___x_723_);
lean_dec(v_type_722_);
lean_dec(v_structTy_721_);
v_a_920_ = lean_ctor_get(v___x_905_, 0);
v_a_921_ = lean_ctor_get(v___x_905_, 1);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_905_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_inc(v_a_920_);
lean_dec(v___x_905_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_920_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
}
else
{
lean_object* v___x_946_; 
lean_dec(v_vis_x3f_725_);
lean_dec(v___x_724_);
lean_dec(v___x_723_);
lean_dec(v_type_722_);
lean_dec(v_structTy_721_);
v___x_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_946_, 0, v_b_730_);
lean_ctor_set(v___x_946_, 1, v___y_732_);
return v___x_946_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___boxed(lean_object* v_structTy_947_, lean_object* v_type_948_, lean_object* v___x_949_, lean_object* v___x_950_, lean_object* v_vis_x3f_951_, lean_object* v_structId_952_, lean_object* v_as_953_, lean_object* v_i_954_, lean_object* v_stop_955_, lean_object* v_b_956_, lean_object* v___y_957_, lean_object* v___y_958_){
_start:
{
size_t v_i_boxed_959_; size_t v_stop_boxed_960_; lean_object* v_res_961_; 
v_i_boxed_959_ = lean_unbox_usize(v_i_954_);
lean_dec(v_i_954_);
v_stop_boxed_960_ = lean_unbox_usize(v_stop_955_);
lean_dec(v_stop_955_);
v_res_961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2(v_structTy_947_, v_type_948_, v___x_949_, v___x_950_, v_vis_x3f_951_, v_structId_952_, v_as_953_, v_i_boxed_959_, v_stop_boxed_960_, v_b_956_, v___y_957_, v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec_ref(v_as_953_);
lean_dec(v_structId_952_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0(lean_object* v_structId_963_, lean_object* v_x_964_){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_965_ = l_Lean_TSyntax_getId(v_structId_963_);
v___x_966_ = l_Lean_Name_append(v___x_965_, v_x_964_);
v___x_967_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0___closed__0));
v___x_968_ = l_Lean_Name_str___override(v___x_966_, v___x_967_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0___boxed(lean_object* v_structId_969_, lean_object* v_x_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0(v_structId_969_, v_x_970_);
lean_dec(v_structId_969_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2(lean_object* v_structId_973_, lean_object* v_x_974_){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_975_ = l_Lean_TSyntax_getId(v_structId_973_);
v___x_976_ = l_Lean_Name_append(v___x_975_, v_x_974_);
v___x_977_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2___closed__0));
v___x_978_ = l_Lean_Name_str___override(v___x_976_, v___x_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2___boxed(lean_object* v_structId_979_, lean_object* v_x_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2(v_structId_979_, v_x_980_);
lean_dec(v_structId_979_);
return v_res_981_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__1));
v___x_987_ = l_Lean_mkCIdent(v___x_986_);
return v___x_987_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__3));
v___x_990_ = l_String_toRawSubstring_x27(v___x_989_);
return v___x_990_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__6));
v___x_995_ = l_String_toRawSubstring_x27(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__14));
v___x_1006_ = l_String_toRawSubstring_x27(v___x_1005_);
return v___x_1006_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_box(0);
v___x_1008_ = l_unsafeCast___redArg(v___x_1007_);
return v___x_1008_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__18));
v___x_1012_ = l_String_toRawSubstring_x27(v___x_1011_);
return v___x_1012_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25(void){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__24));
v___x_1021_ = l_String_toRawSubstring_x27(v___x_1020_);
return v___x_1021_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__0));
v___x_1025_ = l_String_toRawSubstring_x27(v___x_1024_);
return v___x_1025_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__32));
v___x_1033_ = l_String_toRawSubstring_x27(v___x_1032_);
return v___x_1033_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__42));
v___x_1054_ = l_String_toRawSubstring_x27(v___x_1053_);
return v___x_1054_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__49));
v___x_1069_ = l_String_toRawSubstring_x27(v___x_1068_);
return v___x_1069_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__54));
v___x_1076_ = l_String_toRawSubstring_x27(v___x_1075_);
return v___x_1076_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__61));
v___x_1091_ = l_String_toRawSubstring_x27(v___x_1090_);
return v___x_1091_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__65));
v___x_1097_ = l_String_toRawSubstring_x27(v___x_1096_);
return v___x_1097_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__70));
v___x_1108_ = l_String_toRawSubstring_x27(v___x_1107_);
return v___x_1108_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__73));
v___x_1113_ = l_String_toRawSubstring_x27(v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4(lean_object* v_structTy_1119_, lean_object* v___x_1120_, lean_object* v_vis_x3f_1121_, lean_object* v_structId_1122_, lean_object* v_as_1123_, size_t v_i_1124_, size_t v_stop_1125_, lean_object* v_b_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v_a_1130_; lean_object* v_a_1131_; lean_object* v___y_1136_; uint8_t v___x_1139_; 
v___x_1139_ = lean_usize_dec_eq(v_i_1124_, v_stop_1125_);
if (v___x_1139_ == 0)
{
lean_object* v_cmds_1140_; lean_object* v_fields_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1895_; 
v_cmds_1140_ = lean_ctor_get(v_b_1126_, 0);
v_fields_1141_ = lean_ctor_get(v_b_1126_, 1);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_b_1126_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1143_ = v_b_1126_;
v_isShared_1144_ = v_isSharedCheck_1895_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_fields_1141_);
lean_inc(v_cmds_1140_);
lean_dec(v_b_1126_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1895_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1145_; lean_object* v_id_1146_; lean_object* v_ids_1147_; lean_object* v_type_1148_; lean_object* v_defVal_1149_; uint8_t v_parent_1150_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___y_1332_; lean_object* v___y_1333_; lean_object* v___y_1334_; lean_object* v___y_1335_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1396_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1624_; lean_object* v___y_1625_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___x_1653_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___y_1671_; lean_object* v___y_1859_; uint8_t v___x_1879_; 
v___x_1145_ = lean_array_uget_borrowed(v_as_1123_, v_i_1124_);
v_id_1146_ = lean_ctor_get(v___x_1145_, 2);
v_ids_1147_ = lean_ctor_get(v___x_1145_, 3);
v_type_1148_ = lean_ctor_get(v___x_1145_, 4);
v_defVal_1149_ = lean_ctor_get(v___x_1145_, 5);
v_parent_1150_ = lean_ctor_get_uint8(v___x_1145_, sizeof(void*)*7);
v___x_1653_ = l_Lean_TSyntax_getId(v_id_1146_);
v___x_1879_ = l_Lean_Name_hasMacroScopes(v___x_1653_);
if (v___x_1879_ == 0)
{
lean_object* v___x_1880_; 
lean_inc(v___x_1653_);
v___x_1880_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0(v_structId_1122_, v___x_1653_);
v___y_1859_ = v___x_1880_;
goto v___jp_1858_;
}
else
{
lean_object* v_view_1881_; lean_object* v_name_1882_; lean_object* v_imported_1883_; lean_object* v_ctx_1884_; lean_object* v_scopes_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1894_; 
lean_inc(v___x_1653_);
v_view_1881_ = l_Lean_extractMacroScopes(v___x_1653_);
v_name_1882_ = lean_ctor_get(v_view_1881_, 0);
v_imported_1883_ = lean_ctor_get(v_view_1881_, 1);
v_ctx_1884_ = lean_ctor_get(v_view_1881_, 2);
v_scopes_1885_ = lean_ctor_get(v_view_1881_, 3);
v_isSharedCheck_1894_ = !lean_is_exclusive(v_view_1881_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1887_ = v_view_1881_;
v_isShared_1888_ = v_isSharedCheck_1894_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_scopes_1885_);
lean_inc(v_ctx_1884_);
lean_inc(v_imported_1883_);
lean_inc(v_name_1882_);
lean_dec(v_view_1881_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1894_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1889_; lean_object* v___x_1891_; 
v___x_1889_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0(v_structId_1122_, v_name_1882_);
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 0, v___x_1889_);
v___x_1891_ = v___x_1887_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1889_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v_imported_1883_);
lean_ctor_set(v_reuseFailAlloc_1893_, 2, v_ctx_1884_);
lean_ctor_set(v_reuseFailAlloc_1893_, 3, v_scopes_1885_);
v___x_1891_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
lean_object* v___x_1892_; 
v___x_1892_ = l_Lean_MacroScopesView_review(v___x_1891_);
v___y_1859_ = v___x_1892_;
goto v___jp_1858_;
}
}
}
v___jp_1151_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v_ref_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
lean_inc_ref(v___y_1166_);
v___x_1192_ = l_Array_append___redArg(v___y_1166_, v___y_1191_);
lean_dec_ref(v___y_1191_);
lean_inc_n(v___y_1171_, 4);
lean_inc_n(v___y_1161_, 18);
v___x_1193_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1193_, 0, v___y_1161_);
lean_ctor_set(v___x_1193_, 1, v___y_1171_);
lean_ctor_set(v___x_1193_, 2, v___x_1192_);
lean_inc_n(v___y_1162_, 11);
lean_inc(v___y_1157_);
v___x_1194_ = l_Lean_Syntax_node7(v___y_1161_, v___y_1157_, v___y_1162_, v___y_1162_, v___x_1193_, v___y_1162_, v___y_1162_, v___y_1162_, v___y_1162_);
v___x_1195_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0));
lean_inc_ref_n(v___y_1189_, 3);
lean_inc_ref_n(v___y_1155_, 6);
lean_inc_ref_n(v___y_1180_, 6);
v___x_1196_ = l_Lean_Name_mkStr4(v___y_1180_, v___y_1155_, v___y_1189_, v___x_1195_);
v___x_1197_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1));
lean_inc_ref_n(v___y_1168_, 2);
v___x_1198_ = l_Lean_Name_mkStr4(v___y_1180_, v___y_1155_, v___y_1168_, v___x_1197_);
v___x_1199_ = l_Lean_Syntax_node1(v___y_1161_, v___x_1198_, v___y_1162_);
v___x_1200_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1200_, 0, v___y_1161_);
lean_ctor_set(v___x_1200_, 1, v___x_1195_);
v___x_1201_ = l_Lean_Syntax_node2(v___y_1161_, v___y_1173_, v___y_1176_, v___y_1162_);
v___x_1202_ = l_Lean_Syntax_node1(v___y_1161_, v___y_1171_, v___x_1201_);
v___x_1203_ = ((lean_object*)(l_Lake_configField___closed__27));
v___x_1204_ = l_Lean_Name_mkStr4(v___y_1180_, v___y_1155_, v___y_1189_, v___x_1203_);
lean_inc_ref(v___y_1187_);
v___x_1205_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___y_1161_);
lean_ctor_set(v___x_1205_, 1, v___y_1187_);
v___x_1206_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__5));
v___x_1207_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6);
v___x_1208_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__7));
lean_inc_n(v___y_1177_, 2);
lean_inc_n(v___y_1184_, 2);
v___x_1209_ = l_Lean_addMacroScope(v___y_1184_, v___x_1208_, v___y_1177_);
lean_inc_ref(v___y_1186_);
v___x_1210_ = l_Lean_Name_mkStr2(v___y_1186_, v___x_1206_);
lean_inc(v___y_1158_);
lean_inc(v___x_1210_);
v___x_1211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1210_);
lean_ctor_set(v___x_1211_, 1, v___y_1158_);
v___x_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_inc(v___y_1179_);
v___x_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v___y_1179_);
v___x_1214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1211_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1215_, 0, v___y_1161_);
lean_ctor_set(v___x_1215_, 1, v___x_1207_);
lean_ctor_set(v___x_1215_, 2, v___x_1209_);
lean_ctor_set(v___x_1215_, 3, v___x_1214_);
lean_inc(v_type_1148_);
lean_inc(v___y_1181_);
lean_inc(v_structTy_1119_);
v___x_1216_ = l_Lean_Syntax_node3(v___y_1161_, v___y_1171_, v_structTy_1119_, v___y_1181_, v_type_1148_);
v___x_1217_ = l_Lean_Syntax_node2(v___y_1161_, v___y_1160_, v___x_1215_, v___x_1216_);
v___x_1218_ = l_Lean_Syntax_node2(v___y_1161_, v___y_1164_, v___x_1205_, v___x_1217_);
v___x_1219_ = l_Lean_Syntax_node2(v___y_1161_, v___x_1204_, v___y_1162_, v___x_1218_);
v___x_1220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13));
v___x_1221_ = l_Lean_Name_mkStr4(v___y_1180_, v___y_1155_, v___y_1189_, v___x_1220_);
lean_inc_ref(v___y_1172_);
v___x_1222_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___y_1161_);
lean_ctor_set(v___x_1222_, 1, v___y_1172_);
v___x_1223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15));
v___x_1224_ = l_Lean_Name_mkStr4(v___y_1180_, v___y_1155_, v___y_1168_, v___x_1223_);
v___x_1225_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16));
v___x_1226_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___y_1161_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
lean_inc(v___y_1182_);
v___x_1227_ = l_Lean_Syntax_node1(v___y_1161_, v___y_1171_, v___y_1182_);
v___x_1228_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17));
v___x_1229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___y_1161_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v___x_1230_ = l_Lean_Syntax_node3(v___y_1161_, v___x_1224_, v___x_1226_, v___x_1227_, v___x_1229_);
v___x_1231_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18));
v___x_1232_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19));
v___x_1233_ = l_Lean_Name_mkStr4(v___y_1180_, v___y_1155_, v___x_1231_, v___x_1232_);
v___x_1234_ = l_Lean_Syntax_node2(v___y_1161_, v___x_1233_, v___y_1162_, v___y_1162_);
v_ref_1235_ = l_Lean_replaceRef(v_fields_1141_, v___y_1156_);
lean_inc(v_ref_1235_);
lean_inc(v___y_1170_);
lean_inc(v___y_1174_);
lean_inc(v___y_1190_);
v___x_1236_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1236_, 0, v___y_1190_);
lean_ctor_set(v___x_1236_, 1, v___y_1184_);
lean_ctor_set(v___x_1236_, 2, v___y_1177_);
lean_ctor_set(v___x_1236_, 3, v___y_1174_);
lean_ctor_set(v___x_1236_, 4, v___y_1170_);
lean_ctor_set(v___x_1236_, 5, v_ref_1235_);
v___x_1237_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1139_, v_ref_1235_, v___x_1236_, v___y_1169_);
lean_dec_ref_known(v___x_1236_, 6);
lean_dec(v_ref_1235_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v_a_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1300_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
lean_inc_n(v_a_1238_, 30);
v_a_1239_ = lean_ctor_get(v___x_1237_, 1);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1237_, 2);
lean_inc(v___y_1162_);
lean_inc_n(v___y_1161_, 2);
v___x_1240_ = l_Lean_Syntax_node4(v___y_1161_, v___x_1221_, v___x_1222_, v___x_1230_, v___x_1234_, v___y_1162_);
v___x_1241_ = l_Lean_Syntax_node6(v___y_1161_, v___x_1196_, v___x_1199_, v___x_1200_, v___y_1162_, v___x_1202_, v___x_1219_, v___x_1240_);
lean_inc(v___y_1175_);
v___x_1242_ = l_Lean_Syntax_node2(v___y_1161_, v___y_1175_, v___x_1194_, v___x_1241_);
v___x_1243_ = lean_array_push(v___y_1154_, v___x_1242_);
v___x_1244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20));
lean_inc_ref(v___y_1155_);
lean_inc_ref(v___y_1180_);
v___x_1245_ = l_Lean_Name_mkStr4(v___y_1180_, v___y_1155_, v___y_1168_, v___x_1244_);
v___x_1246_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21));
v___x_1247_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1247_, 0, v_a_1238_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23);
v___x_1249_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24));
lean_inc_n(v___y_1177_, 5);
lean_inc_n(v___y_1184_, 5);
v___x_1250_ = l_Lean_addMacroScope(v___y_1184_, v___x_1249_, v___y_1177_);
lean_inc_n(v___y_1179_, 5);
v___x_1251_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1251_, 0, v_a_1238_);
lean_ctor_set(v___x_1251_, 1, v___x_1248_);
lean_ctor_set(v___x_1251_, 2, v___x_1250_);
lean_ctor_set(v___x_1251_, 3, v___y_1179_);
lean_inc_ref(v___y_1166_);
lean_inc_n(v___y_1171_, 7);
v___x_1252_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1252_, 0, v_a_1238_);
lean_ctor_set(v___x_1252_, 1, v___y_1171_);
lean_ctor_set(v___x_1252_, 2, v___y_1166_);
lean_inc_ref(v___y_1153_);
v___x_1253_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1253_, 0, v_a_1238_);
lean_ctor_set(v___x_1253_, 1, v___y_1153_);
v___x_1254_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29);
v___x_1255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30));
v___x_1256_ = l_Lean_addMacroScope(v___y_1184_, v___x_1255_, v___y_1177_);
v___x_1257_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1257_, 0, v_a_1238_);
lean_ctor_set(v___x_1257_, 1, v___x_1254_);
lean_ctor_set(v___x_1257_, 2, v___x_1256_);
lean_ctor_set(v___x_1257_, 3, v___y_1179_);
lean_inc_ref_n(v___x_1252_, 17);
lean_inc_n(v___y_1152_, 2);
v___x_1258_ = l_Lean_Syntax_node2(v_a_1238_, v___y_1152_, v___x_1257_, v___x_1252_);
lean_inc_ref(v___y_1172_);
v___x_1259_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1259_, 0, v_a_1238_);
lean_ctor_set(v___x_1259_, 1, v___y_1172_);
lean_inc_ref_n(v___x_1259_, 2);
lean_inc_n(v___y_1167_, 2);
v___x_1260_ = l_Lean_Syntax_node3(v_a_1238_, v___y_1167_, v___x_1259_, v___x_1252_, v___y_1181_);
v___x_1261_ = l_Lean_Syntax_node3(v_a_1238_, v___y_1171_, v___x_1252_, v___x_1252_, v___x_1260_);
lean_inc_n(v___y_1163_, 2);
v___x_1262_ = l_Lean_Syntax_node2(v_a_1238_, v___y_1163_, v___x_1258_, v___x_1261_);
v___x_1263_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33);
v___x_1264_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34));
v___x_1265_ = l_Lean_addMacroScope(v___y_1184_, v___x_1264_, v___y_1177_);
v___x_1266_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1266_, 0, v_a_1238_);
lean_ctor_set(v___x_1266_, 1, v___x_1263_);
lean_ctor_set(v___x_1266_, 2, v___x_1265_);
lean_ctor_set(v___x_1266_, 3, v___y_1179_);
v___x_1267_ = l_Lean_Syntax_node2(v_a_1238_, v___y_1152_, v___x_1266_, v___x_1252_);
lean_inc(v___y_1178_);
v___x_1268_ = l_Lean_Syntax_node3(v_a_1238_, v___y_1167_, v___x_1259_, v___x_1252_, v___y_1178_);
v___x_1269_ = l_Lean_Syntax_node3(v_a_1238_, v___y_1171_, v___x_1252_, v___x_1252_, v___x_1268_);
v___x_1270_ = l_Lean_Syntax_node2(v_a_1238_, v___y_1163_, v___x_1267_, v___x_1269_);
v___x_1271_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36);
v___x_1272_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__37));
v___x_1273_ = l_Lean_addMacroScope(v___y_1184_, v___x_1272_, v___y_1177_);
v___x_1274_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1274_, 0, v_a_1238_);
lean_ctor_set(v___x_1274_, 1, v___x_1271_);
lean_ctor_set(v___x_1274_, 2, v___x_1273_);
lean_ctor_set(v___x_1274_, 3, v___y_1179_);
v___x_1275_ = l_Lean_Syntax_node2(v_a_1238_, v___y_1152_, v___x_1274_, v___x_1252_);
v___x_1276_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2);
v___x_1277_ = l_Lean_Syntax_node3(v_a_1238_, v___y_1167_, v___x_1259_, v___x_1252_, v___x_1276_);
v___x_1278_ = l_Lean_Syntax_node3(v_a_1238_, v___y_1171_, v___x_1252_, v___x_1252_, v___x_1277_);
v___x_1279_ = l_Lean_Syntax_node2(v_a_1238_, v___y_1163_, v___x_1275_, v___x_1278_);
v___x_1280_ = l_Lean_Syntax_node6(v_a_1238_, v___y_1171_, v___x_1262_, v___x_1252_, v___x_1270_, v___x_1252_, v___x_1279_, v___x_1252_);
v___x_1281_ = l_Lean_Syntax_node1(v_a_1238_, v___y_1185_, v___x_1280_);
v___x_1282_ = l_Lean_Syntax_node1(v_a_1238_, v___y_1183_, v___x_1252_);
lean_inc_ref(v___y_1187_);
v___x_1283_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1283_, 0, v_a_1238_);
lean_ctor_set(v___x_1283_, 1, v___y_1187_);
v___x_1284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43));
v___x_1285_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44);
v___x_1286_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45));
v___x_1287_ = l_Lean_addMacroScope(v___y_1184_, v___x_1286_, v___y_1177_);
lean_inc_ref(v___y_1186_);
v___x_1288_ = l_Lean_Name_mkStr2(v___y_1186_, v___x_1284_);
lean_inc(v___y_1158_);
lean_inc(v___x_1288_);
v___x_1289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v___y_1158_);
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
v___x_1291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
lean_ctor_set(v___x_1291_, 1, v___y_1179_);
v___x_1292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1289_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1293_, 0, v_a_1238_);
lean_ctor_set(v___x_1293_, 1, v___x_1285_);
lean_ctor_set(v___x_1293_, 2, v___x_1287_);
lean_ctor_set(v___x_1293_, 3, v___x_1292_);
v___x_1294_ = l_Lean_Syntax_node2(v_a_1238_, v___y_1171_, v___x_1283_, v___x_1293_);
lean_inc_ref(v___y_1165_);
v___x_1295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1295_, 0, v_a_1238_);
lean_ctor_set(v___x_1295_, 1, v___y_1165_);
v___x_1296_ = l_Lean_Syntax_node6(v_a_1238_, v___y_1159_, v___x_1253_, v___x_1252_, v___x_1281_, v___x_1282_, v___x_1294_, v___x_1295_);
v___x_1297_ = l_Lean_Syntax_node1(v_a_1238_, v___y_1171_, v___x_1296_);
v___x_1298_ = l_Lean_Syntax_node5(v_a_1238_, v___x_1245_, v_fields_1141_, v___x_1247_, v___x_1251_, v___x_1252_, v___x_1297_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 1, v___x_1298_);
lean_ctor_set(v___x_1143_, 0, v___x_1243_);
v___x_1300_ = v___x_1143_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1243_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v___x_1298_);
v___x_1300_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1301_ = lean_unsigned_to_nat(1u);
v___x_1302_ = lean_nat_dec_lt(v___x_1301_, v___y_1188_);
if (v___x_1302_ == 0)
{
lean_dec(v___y_1188_);
lean_dec(v___y_1182_);
lean_dec(v___y_1178_);
v_a_1130_ = v___x_1300_;
v_a_1131_ = v_a_1239_;
goto v___jp_1129_;
}
else
{
uint8_t v___x_1303_; 
v___x_1303_ = lean_nat_dec_le(v___y_1188_, v___y_1188_);
if (v___x_1303_ == 0)
{
if (v___x_1302_ == 0)
{
lean_dec(v___y_1188_);
lean_dec(v___y_1182_);
lean_dec(v___y_1178_);
v_a_1130_ = v___x_1300_;
v_a_1131_ = v_a_1239_;
goto v___jp_1129_;
}
else
{
size_t v___x_1304_; size_t v___x_1305_; lean_object* v___x_1306_; 
v___x_1304_ = ((size_t)1ULL);
v___x_1305_ = lean_usize_of_nat(v___y_1188_);
lean_dec(v___y_1188_);
lean_inc(v_vis_x3f_1121_);
lean_inc(v_type_1148_);
lean_inc(v_structTy_1119_);
v___x_1306_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2(v_structTy_1119_, v_type_1148_, v___y_1182_, v___y_1178_, v_vis_x3f_1121_, v_structId_1122_, v_ids_1147_, v___x_1304_, v___x_1305_, v___x_1300_, v___y_1127_, v_a_1239_);
v___y_1136_ = v___x_1306_;
goto v___jp_1135_;
}
}
else
{
size_t v___x_1307_; size_t v___x_1308_; lean_object* v___x_1309_; 
v___x_1307_ = ((size_t)1ULL);
v___x_1308_ = lean_usize_of_nat(v___y_1188_);
lean_dec(v___y_1188_);
lean_inc(v_vis_x3f_1121_);
lean_inc(v_type_1148_);
lean_inc(v_structTy_1119_);
v___x_1309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2(v_structTy_1119_, v_type_1148_, v___y_1182_, v___y_1178_, v_vis_x3f_1121_, v_structId_1122_, v_ids_1147_, v___x_1307_, v___x_1308_, v___x_1300_, v___y_1127_, v_a_1239_);
v___y_1136_ = v___x_1309_;
goto v___jp_1135_;
}
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_dec(v___x_1234_);
lean_dec(v___x_1230_);
lean_dec_ref_known(v___x_1222_, 2);
lean_dec(v___x_1221_);
lean_dec(v___x_1219_);
lean_dec(v___x_1202_);
lean_dec_ref_known(v___x_1200_, 2);
lean_dec(v___x_1199_);
lean_dec(v___x_1196_);
lean_dec(v___x_1194_);
lean_dec(v___y_1188_);
lean_dec(v___y_1185_);
lean_dec(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1152_);
lean_del_object(v___x_1143_);
lean_dec(v_fields_1141_);
lean_dec(v_vis_x3f_1121_);
lean_dec(v___x_1120_);
lean_dec(v_structTy_1119_);
v_a_1311_ = lean_ctor_get(v___x_1237_, 0);
v_a_1312_ = lean_ctor_get(v___x_1237_, 1);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1237_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_inc(v_a_1311_);
lean_dec(v___x_1237_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1311_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
v___jp_1320_:
{
lean_object* v___x_1359_; 
v___x_1359_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1139_, v___y_1326_, v___y_1127_, v___y_1128_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v_a_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc_n(v_a_1360_, 2);
v_a_1361_ = lean_ctor_get(v___x_1359_, 1);
lean_inc(v_a_1361_);
lean_dec_ref_known(v___x_1359_, 2);
v___x_1362_ = l_Lean_mkIdentFrom(v___y_1337_, v___y_1358_, v___x_1139_);
lean_dec(v___y_1337_);
lean_inc_ref(v___y_1334_);
lean_inc(v___y_1339_);
v___x_1363_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1363_, 0, v_a_1360_);
lean_ctor_set(v___x_1363_, 1, v___y_1339_);
lean_ctor_set(v___x_1363_, 2, v___y_1334_);
if (lean_obj_tag(v_vis_x3f_1121_) == 1)
{
lean_object* v_val_1364_; lean_object* v___x_1365_; 
v_val_1364_ = lean_ctor_get(v_vis_x3f_1121_, 0);
lean_inc(v_val_1364_);
v___x_1365_ = l_Array_mkArray1___redArg(v_val_1364_);
v___y_1152_ = v___y_1321_;
v___y_1153_ = v___y_1322_;
v___y_1154_ = v___y_1323_;
v___y_1155_ = v___y_1324_;
v___y_1156_ = v___y_1326_;
v___y_1157_ = v___y_1327_;
v___y_1158_ = v___y_1328_;
v___y_1159_ = v___y_1330_;
v___y_1160_ = v___y_1329_;
v___y_1161_ = v_a_1360_;
v___y_1162_ = v___x_1363_;
v___y_1163_ = v___y_1331_;
v___y_1164_ = v___y_1332_;
v___y_1165_ = v___y_1333_;
v___y_1166_ = v___y_1334_;
v___y_1167_ = v___y_1335_;
v___y_1168_ = v___y_1336_;
v___y_1169_ = v_a_1361_;
v___y_1170_ = v___y_1338_;
v___y_1171_ = v___y_1339_;
v___y_1172_ = v___y_1340_;
v___y_1173_ = v___y_1341_;
v___y_1174_ = v___y_1342_;
v___y_1175_ = v___y_1343_;
v___y_1176_ = v___x_1362_;
v___y_1177_ = v___y_1344_;
v___y_1178_ = v___y_1345_;
v___y_1179_ = v___y_1346_;
v___y_1180_ = v___y_1349_;
v___y_1181_ = v___y_1348_;
v___y_1182_ = v___y_1347_;
v___y_1183_ = v___y_1351_;
v___y_1184_ = v___y_1350_;
v___y_1185_ = v___y_1353_;
v___y_1186_ = v___y_1352_;
v___y_1187_ = v___y_1354_;
v___y_1188_ = v___y_1357_;
v___y_1189_ = v___y_1356_;
v___y_1190_ = v___y_1355_;
v___y_1191_ = v___x_1365_;
goto v___jp_1151_;
}
else
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_mk_empty_array_with_capacity(v___y_1325_);
v___y_1152_ = v___y_1321_;
v___y_1153_ = v___y_1322_;
v___y_1154_ = v___y_1323_;
v___y_1155_ = v___y_1324_;
v___y_1156_ = v___y_1326_;
v___y_1157_ = v___y_1327_;
v___y_1158_ = v___y_1328_;
v___y_1159_ = v___y_1330_;
v___y_1160_ = v___y_1329_;
v___y_1161_ = v_a_1360_;
v___y_1162_ = v___x_1363_;
v___y_1163_ = v___y_1331_;
v___y_1164_ = v___y_1332_;
v___y_1165_ = v___y_1333_;
v___y_1166_ = v___y_1334_;
v___y_1167_ = v___y_1335_;
v___y_1168_ = v___y_1336_;
v___y_1169_ = v_a_1361_;
v___y_1170_ = v___y_1338_;
v___y_1171_ = v___y_1339_;
v___y_1172_ = v___y_1340_;
v___y_1173_ = v___y_1341_;
v___y_1174_ = v___y_1342_;
v___y_1175_ = v___y_1343_;
v___y_1176_ = v___x_1362_;
v___y_1177_ = v___y_1344_;
v___y_1178_ = v___y_1345_;
v___y_1179_ = v___y_1346_;
v___y_1180_ = v___y_1349_;
v___y_1181_ = v___y_1348_;
v___y_1182_ = v___y_1347_;
v___y_1183_ = v___y_1351_;
v___y_1184_ = v___y_1350_;
v___y_1185_ = v___y_1353_;
v___y_1186_ = v___y_1352_;
v___y_1187_ = v___y_1354_;
v___y_1188_ = v___y_1357_;
v___y_1189_ = v___y_1356_;
v___y_1190_ = v___y_1355_;
v___y_1191_ = v___x_1366_;
goto v___jp_1151_;
}
}
else
{
lean_object* v_a_1367_; lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1375_; 
lean_dec(v___y_1358_);
lean_dec(v___y_1357_);
lean_dec(v___y_1353_);
lean_dec(v___y_1351_);
lean_dec(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec(v___y_1345_);
lean_dec(v___y_1341_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec(v___y_1330_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1321_);
lean_del_object(v___x_1143_);
lean_dec(v_fields_1141_);
lean_dec(v_vis_x3f_1121_);
lean_dec(v___x_1120_);
lean_dec(v_structTy_1119_);
v_a_1367_ = lean_ctor_get(v___x_1359_, 0);
v_a_1368_ = lean_ctor_get(v___x_1359_, 1);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1370_ = v___x_1359_;
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_inc(v_a_1367_);
lean_dec(v___x_1359_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1367_);
lean_ctor_set(v_reuseFailAlloc_1374_, 1, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
}
v___jp_1376_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v_ref_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
lean_inc_ref(v___y_1390_);
v___x_1415_ = l_Array_append___redArg(v___y_1390_, v___y_1414_);
lean_dec_ref(v___y_1414_);
lean_inc_n(v___y_1395_, 4);
lean_inc_n(v___y_1393_, 18);
v___x_1416_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1416_, 0, v___y_1393_);
lean_ctor_set(v___x_1416_, 1, v___y_1395_);
lean_ctor_set(v___x_1416_, 2, v___x_1415_);
lean_inc_n(v___y_1411_, 11);
lean_inc(v___y_1383_);
v___x_1417_ = l_Lean_Syntax_node7(v___y_1393_, v___y_1383_, v___y_1411_, v___y_1411_, v___x_1416_, v___y_1411_, v___y_1411_, v___y_1411_, v___y_1411_);
v___x_1418_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0));
lean_inc_ref_n(v___y_1412_, 3);
lean_inc_ref_n(v___y_1381_, 6);
lean_inc_ref_n(v___y_1404_, 6);
v___x_1419_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___y_1412_, v___x_1418_);
v___x_1420_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1));
lean_inc_ref_n(v___y_1392_, 2);
v___x_1421_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___y_1392_, v___x_1420_);
v___x_1422_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1421_, v___y_1411_);
v___x_1423_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___y_1393_);
lean_ctor_set(v___x_1423_, 1, v___x_1418_);
v___x_1424_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1398_, v___y_1396_, v___y_1411_);
v___x_1425_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1395_, v___x_1424_);
v___x_1426_ = ((lean_object*)(l_Lake_configField___closed__27));
v___x_1427_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___y_1412_, v___x_1426_);
lean_inc_ref(v___y_1410_);
v___x_1428_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___y_1393_);
lean_ctor_set(v___x_1428_, 1, v___y_1410_);
v___x_1429_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__3));
v___x_1430_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4);
v___x_1431_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__5));
lean_inc_n(v___y_1401_, 2);
lean_inc_n(v___y_1407_, 2);
v___x_1432_ = l_Lean_addMacroScope(v___y_1407_, v___x_1431_, v___y_1401_);
lean_inc_ref(v___y_1409_);
v___x_1433_ = l_Lean_Name_mkStr2(v___y_1409_, v___x_1429_);
lean_inc(v___y_1384_);
lean_inc(v___x_1433_);
v___x_1434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
lean_ctor_set(v___x_1434_, 1, v___y_1384_);
v___x_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_inc(v___y_1403_);
v___x_1436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
lean_ctor_set(v___x_1436_, 1, v___y_1403_);
v___x_1437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1434_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1438_, 0, v___y_1393_);
lean_ctor_set(v___x_1438_, 1, v___x_1430_);
lean_ctor_set(v___x_1438_, 2, v___x_1432_);
lean_ctor_set(v___x_1438_, 3, v___x_1437_);
lean_inc(v_type_1148_);
lean_inc(v_structTy_1119_);
v___x_1439_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1395_, v_structTy_1119_, v_type_1148_);
lean_inc(v___y_1386_);
v___x_1440_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1386_, v___x_1438_, v___x_1439_);
v___x_1441_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1388_, v___x_1428_, v___x_1440_);
v___x_1442_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1427_, v___y_1411_, v___x_1441_);
v___x_1443_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13));
v___x_1444_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___y_1412_, v___x_1443_);
lean_inc_ref(v___y_1397_);
v___x_1445_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___y_1393_);
lean_ctor_set(v___x_1445_, 1, v___y_1397_);
v___x_1446_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15));
v___x_1447_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___y_1392_, v___x_1446_);
v___x_1448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16));
v___x_1449_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___y_1393_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1395_, v___y_1405_);
v___x_1451_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17));
v___x_1452_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___y_1393_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = l_Lean_Syntax_node3(v___y_1393_, v___x_1447_, v___x_1449_, v___x_1450_, v___x_1452_);
v___x_1454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18));
v___x_1455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19));
v___x_1456_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___x_1454_, v___x_1455_);
v___x_1457_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1456_, v___y_1411_, v___y_1411_);
v_ref_1458_ = l_Lean_replaceRef(v_fields_1141_, v___y_1382_);
lean_inc(v_ref_1458_);
lean_inc(v___y_1394_);
lean_inc(v___y_1399_);
lean_inc(v___y_1413_);
v___x_1459_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1459_, 0, v___y_1413_);
lean_ctor_set(v___x_1459_, 1, v___y_1407_);
lean_ctor_set(v___x_1459_, 2, v___y_1401_);
lean_ctor_set(v___x_1459_, 3, v___y_1399_);
lean_ctor_set(v___x_1459_, 4, v___y_1394_);
lean_ctor_set(v___x_1459_, 5, v_ref_1458_);
v___x_1460_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1139_, v_ref_1458_, v___x_1459_, v___y_1379_);
lean_dec_ref_known(v___x_1459_, 6);
lean_dec(v_ref_1458_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v_a_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v_ref_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc_n(v_a_1461_, 14);
v_a_1462_ = lean_ctor_get(v___x_1460_, 1);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1460_, 2);
v___x_1463_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20));
lean_inc_ref_n(v___y_1392_, 2);
lean_inc_ref_n(v___y_1381_, 5);
lean_inc_ref_n(v___y_1404_, 7);
v___x_1464_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___y_1392_, v___x_1463_);
v___x_1465_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21));
v___x_1466_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1466_, 0, v_a_1461_);
lean_ctor_set(v___x_1466_, 1, v___x_1465_);
v___x_1467_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7);
v___x_1468_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__8));
lean_inc_n(v___y_1401_, 4);
lean_inc_n(v___y_1407_, 4);
v___x_1469_ = l_Lean_addMacroScope(v___y_1407_, v___x_1468_, v___y_1401_);
lean_inc_n(v___y_1403_, 3);
v___x_1470_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1470_, 0, v_a_1461_);
lean_ctor_set(v___x_1470_, 1, v___x_1467_);
lean_ctor_set(v___x_1470_, 2, v___x_1469_);
lean_ctor_set(v___x_1470_, 3, v___y_1403_);
lean_inc_ref(v___y_1390_);
lean_inc_n(v___y_1395_, 3);
v___x_1471_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1471_, 0, v_a_1461_);
lean_ctor_set(v___x_1471_, 1, v___y_1395_);
lean_ctor_set(v___x_1471_, 2, v___y_1390_);
v___x_1472_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__9));
v___x_1473_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___y_1392_, v___x_1472_);
v___x_1474_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__10));
v___x_1475_ = l_Lean_Name_mkStr4(v___y_1404_, v___y_1381_, v___y_1392_, v___x_1474_);
v___x_1476_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__11));
v___x_1477_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1477_, 0, v_a_1461_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
v___x_1478_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__13));
v___x_1479_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15);
v___x_1480_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16);
v___x_1481_ = l_Lean_addMacroScope(v___y_1407_, v___x_1480_, v___y_1401_);
lean_inc_ref_n(v___y_1409_, 2);
v___x_1482_ = l_Lean_Name_mkStr1(v___y_1409_);
v___x_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1482_);
lean_inc_ref(v___y_1412_);
v___x_1484_ = l_Lean_Name_mkStr3(v___y_1404_, v___y_1381_, v___y_1412_);
v___x_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1484_);
v___x_1486_ = l_Lean_Name_mkStr2(v___y_1404_, v___y_1381_);
v___x_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
v___x_1488_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__17));
v___x_1489_ = l_Lean_Name_mkStr2(v___y_1404_, v___x_1488_);
v___x_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
v___x_1491_ = l_Lean_Name_mkStr1(v___y_1404_);
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
v___x_1493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
lean_ctor_set(v___x_1493_, 1, v___y_1403_);
v___x_1494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1490_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1487_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
v___x_1496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1485_);
lean_ctor_set(v___x_1496_, 1, v___x_1495_);
v___x_1497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1483_);
lean_ctor_set(v___x_1497_, 1, v___x_1496_);
v___x_1498_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1498_, 0, v_a_1461_);
lean_ctor_set(v___x_1498_, 1, v___x_1479_);
lean_ctor_set(v___x_1498_, 2, v___x_1481_);
lean_ctor_set(v___x_1498_, 3, v___x_1497_);
v___x_1499_ = l_Lean_Syntax_node1(v_a_1461_, v___x_1478_, v___x_1498_);
v___x_1500_ = l_Lean_Syntax_node2(v_a_1461_, v___x_1475_, v___x_1477_, v___x_1499_);
v___x_1501_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19);
v___x_1502_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20));
v___x_1503_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__21));
v___x_1504_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__22));
v___x_1505_ = l_Lean_addMacroScope(v___y_1407_, v___x_1504_, v___y_1401_);
v___x_1506_ = l_Lean_Name_mkStr3(v___y_1409_, v___x_1502_, v___x_1503_);
lean_inc(v___y_1384_);
v___x_1507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1506_);
lean_ctor_set(v___x_1507_, 1, v___y_1384_);
v___x_1508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1507_);
lean_ctor_set(v___x_1508_, 1, v___y_1403_);
v___x_1509_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1509_, 0, v_a_1461_);
lean_ctor_set(v___x_1509_, 1, v___x_1501_);
lean_ctor_set(v___x_1509_, 2, v___x_1505_);
lean_ctor_set(v___x_1509_, 3, v___x_1508_);
lean_inc(v_type_1148_);
v___x_1510_ = l_Lean_Syntax_node1(v_a_1461_, v___y_1395_, v_type_1148_);
v___x_1511_ = l_Lean_Syntax_node2(v_a_1461_, v___y_1386_, v___x_1509_, v___x_1510_);
v___x_1512_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__23));
v___x_1513_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1513_, 0, v_a_1461_);
lean_ctor_set(v___x_1513_, 1, v___x_1512_);
v___x_1514_ = l_Lean_Syntax_node3(v_a_1461_, v___x_1473_, v___x_1500_, v___x_1511_, v___x_1513_);
v___x_1515_ = l_Lean_Syntax_node1(v_a_1461_, v___y_1395_, v___x_1514_);
lean_inc(v___x_1464_);
v___x_1516_ = l_Lean_Syntax_node5(v_a_1461_, v___x_1464_, v_fields_1141_, v___x_1466_, v___x_1470_, v___x_1471_, v___x_1515_);
v_ref_1517_ = l_Lean_replaceRef(v___x_1516_, v___y_1382_);
lean_inc(v_ref_1517_);
lean_inc(v___y_1394_);
lean_inc(v___y_1399_);
lean_inc(v___y_1413_);
v___x_1518_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1518_, 0, v___y_1413_);
lean_ctor_set(v___x_1518_, 1, v___y_1407_);
lean_ctor_set(v___x_1518_, 2, v___y_1401_);
lean_ctor_set(v___x_1518_, 3, v___y_1399_);
lean_ctor_set(v___x_1518_, 4, v___y_1394_);
lean_ctor_set(v___x_1518_, 5, v_ref_1517_);
v___x_1519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1139_, v_ref_1517_, v___x_1518_, v_a_1462_);
lean_dec_ref_known(v___x_1518_, 6);
lean_dec(v_ref_1517_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v_a_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc_n(v_a_1520_, 29);
v_a_1521_ = lean_ctor_get(v___x_1519_, 1);
lean_inc(v_a_1521_);
lean_dec_ref_known(v___x_1519_, 2);
lean_inc(v___y_1411_);
lean_inc_n(v___y_1393_, 2);
v___x_1522_ = l_Lean_Syntax_node4(v___y_1393_, v___x_1444_, v___x_1445_, v___x_1453_, v___x_1457_, v___y_1411_);
v___x_1523_ = l_Lean_Syntax_node6(v___y_1393_, v___x_1419_, v___x_1422_, v___x_1423_, v___y_1411_, v___x_1425_, v___x_1442_, v___x_1522_);
lean_inc(v___y_1400_);
v___x_1524_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1400_, v___x_1417_, v___x_1523_);
v___x_1525_ = lean_array_push(v___y_1380_, v___x_1524_);
v___x_1526_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1526_, 0, v_a_1520_);
lean_ctor_set(v___x_1526_, 1, v___x_1465_);
v___x_1527_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23);
v___x_1528_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24));
lean_inc_n(v___y_1401_, 6);
lean_inc_n(v___y_1407_, 6);
v___x_1529_ = l_Lean_addMacroScope(v___y_1407_, v___x_1528_, v___y_1401_);
lean_inc_n(v___y_1403_, 6);
v___x_1530_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1530_, 0, v_a_1520_);
lean_ctor_set(v___x_1530_, 1, v___x_1527_);
lean_ctor_set(v___x_1530_, 2, v___x_1529_);
lean_ctor_set(v___x_1530_, 3, v___y_1403_);
lean_inc_ref(v___y_1390_);
lean_inc_n(v___y_1395_, 6);
v___x_1531_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1531_, 0, v_a_1520_);
lean_ctor_set(v___x_1531_, 1, v___y_1395_);
lean_ctor_set(v___x_1531_, 2, v___y_1390_);
lean_inc_ref(v___y_1378_);
v___x_1532_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1532_, 0, v_a_1520_);
lean_ctor_set(v___x_1532_, 1, v___y_1378_);
v___x_1533_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29);
v___x_1534_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30));
v___x_1535_ = l_Lean_addMacroScope(v___y_1407_, v___x_1534_, v___y_1401_);
v___x_1536_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1536_, 0, v_a_1520_);
lean_ctor_set(v___x_1536_, 1, v___x_1533_);
lean_ctor_set(v___x_1536_, 2, v___x_1535_);
lean_ctor_set(v___x_1536_, 3, v___y_1403_);
lean_inc_ref_n(v___x_1531_, 14);
lean_inc_n(v___y_1377_, 2);
v___x_1537_ = l_Lean_Syntax_node2(v_a_1520_, v___y_1377_, v___x_1536_, v___x_1531_);
lean_inc_ref(v___y_1397_);
v___x_1538_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1538_, 0, v_a_1520_);
lean_ctor_set(v___x_1538_, 1, v___y_1397_);
lean_inc_ref(v___x_1538_);
lean_inc(v___y_1391_);
v___x_1539_ = l_Lean_Syntax_node3(v_a_1520_, v___y_1391_, v___x_1538_, v___x_1531_, v___y_1402_);
v___x_1540_ = l_Lean_Syntax_node3(v_a_1520_, v___y_1395_, v___x_1531_, v___x_1531_, v___x_1539_);
lean_inc(v___x_1540_);
lean_inc_n(v___y_1387_, 2);
v___x_1541_ = l_Lean_Syntax_node2(v_a_1520_, v___y_1387_, v___x_1537_, v___x_1540_);
v___x_1542_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33);
v___x_1543_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34));
v___x_1544_ = l_Lean_addMacroScope(v___y_1407_, v___x_1543_, v___y_1401_);
v___x_1545_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1545_, 0, v_a_1520_);
lean_ctor_set(v___x_1545_, 1, v___x_1542_);
lean_ctor_set(v___x_1545_, 2, v___x_1544_);
lean_ctor_set(v___x_1545_, 3, v___y_1403_);
v___x_1546_ = l_Lean_Syntax_node2(v_a_1520_, v___y_1377_, v___x_1545_, v___x_1531_);
v___x_1547_ = l_Lean_Syntax_node2(v_a_1520_, v___y_1387_, v___x_1546_, v___x_1540_);
v___x_1548_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25);
v___x_1549_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__26));
v___x_1550_ = l_Lean_addMacroScope(v___y_1407_, v___x_1549_, v___y_1401_);
v___x_1551_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1551_, 0, v_a_1520_);
lean_ctor_set(v___x_1551_, 1, v___x_1548_);
lean_ctor_set(v___x_1551_, 2, v___x_1550_);
lean_ctor_set(v___x_1551_, 3, v___y_1403_);
v___x_1552_ = l_Lean_Syntax_node2(v_a_1520_, v___y_1377_, v___x_1551_, v___x_1531_);
v___x_1553_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27);
v___x_1554_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__28));
v___x_1555_ = l_Lean_addMacroScope(v___y_1407_, v___x_1554_, v___y_1401_);
v___x_1556_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__1));
lean_inc_n(v___y_1384_, 2);
v___x_1557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
lean_ctor_set(v___x_1557_, 1, v___y_1384_);
v___x_1558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
lean_ctor_set(v___x_1558_, 1, v___y_1403_);
v___x_1559_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1559_, 0, v_a_1520_);
lean_ctor_set(v___x_1559_, 1, v___x_1553_);
lean_ctor_set(v___x_1559_, 2, v___x_1555_);
lean_ctor_set(v___x_1559_, 3, v___x_1558_);
v___x_1560_ = l_Lean_Syntax_node3(v_a_1520_, v___y_1391_, v___x_1538_, v___x_1531_, v___x_1559_);
v___x_1561_ = l_Lean_Syntax_node3(v_a_1520_, v___y_1395_, v___x_1531_, v___x_1531_, v___x_1560_);
v___x_1562_ = l_Lean_Syntax_node2(v_a_1520_, v___y_1387_, v___x_1552_, v___x_1561_);
v___x_1563_ = l_Lean_Syntax_node6(v_a_1520_, v___y_1395_, v___x_1541_, v___x_1531_, v___x_1547_, v___x_1531_, v___x_1562_, v___x_1531_);
v___x_1564_ = l_Lean_Syntax_node1(v_a_1520_, v___y_1408_, v___x_1563_);
v___x_1565_ = l_Lean_Syntax_node1(v_a_1520_, v___y_1406_, v___x_1531_);
lean_inc_ref(v___y_1410_);
v___x_1566_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1566_, 0, v_a_1520_);
lean_ctor_set(v___x_1566_, 1, v___y_1410_);
v___x_1567_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43));
v___x_1568_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44);
v___x_1569_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45));
v___x_1570_ = l_Lean_addMacroScope(v___y_1407_, v___x_1569_, v___y_1401_);
lean_inc_ref(v___y_1409_);
v___x_1571_ = l_Lean_Name_mkStr2(v___y_1409_, v___x_1567_);
lean_inc(v___x_1571_);
v___x_1572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1571_);
lean_ctor_set(v___x_1572_, 1, v___y_1384_);
v___x_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
v___x_1574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
lean_ctor_set(v___x_1574_, 1, v___y_1403_);
v___x_1575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1572_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1576_, 0, v_a_1520_);
lean_ctor_set(v___x_1576_, 1, v___x_1568_);
lean_ctor_set(v___x_1576_, 2, v___x_1570_);
lean_ctor_set(v___x_1576_, 3, v___x_1575_);
v___x_1577_ = l_Lean_Syntax_node2(v_a_1520_, v___y_1395_, v___x_1566_, v___x_1576_);
lean_inc_ref(v___y_1389_);
v___x_1578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1578_, 0, v_a_1520_);
lean_ctor_set(v___x_1578_, 1, v___y_1389_);
v___x_1579_ = l_Lean_Syntax_node6(v_a_1520_, v___y_1385_, v___x_1532_, v___x_1531_, v___x_1564_, v___x_1565_, v___x_1577_, v___x_1578_);
v___x_1580_ = l_Lean_Syntax_node1(v_a_1520_, v___y_1395_, v___x_1579_);
v___x_1581_ = l_Lean_Syntax_node5(v_a_1520_, v___x_1464_, v___x_1516_, v___x_1526_, v___x_1530_, v___x_1531_, v___x_1580_);
v___x_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1525_);
lean_ctor_set(v___x_1582_, 1, v___x_1581_);
v_a_1130_ = v___x_1582_;
v_a_1131_ = v_a_1521_;
goto v___jp_1129_;
}
else
{
lean_object* v_a_1583_; lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
lean_dec(v___x_1516_);
lean_dec(v___x_1464_);
lean_dec(v___x_1457_);
lean_dec(v___x_1453_);
lean_dec_ref_known(v___x_1445_, 2);
lean_dec(v___x_1444_);
lean_dec(v___x_1442_);
lean_dec(v___x_1425_);
lean_dec_ref_known(v___x_1423_, 2);
lean_dec(v___x_1422_);
lean_dec(v___x_1419_);
lean_dec(v___x_1417_);
lean_dec(v___y_1411_);
lean_dec(v___y_1408_);
lean_dec(v___y_1406_);
lean_dec(v___y_1402_);
lean_dec(v___y_1393_);
lean_dec(v___y_1391_);
lean_dec(v___y_1387_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1377_);
lean_dec(v_vis_x3f_1121_);
lean_dec(v___x_1120_);
lean_dec(v_structTy_1119_);
v_a_1583_ = lean_ctor_get(v___x_1519_, 0);
v_a_1584_ = lean_ctor_get(v___x_1519_, 1);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1519_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_inc(v_a_1583_);
lean_dec(v___x_1519_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1583_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
else
{
lean_object* v_a_1592_; lean_object* v_a_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1600_; 
lean_dec(v___x_1457_);
lean_dec(v___x_1453_);
lean_dec_ref_known(v___x_1445_, 2);
lean_dec(v___x_1444_);
lean_dec(v___x_1442_);
lean_dec(v___x_1425_);
lean_dec_ref_known(v___x_1423_, 2);
lean_dec(v___x_1422_);
lean_dec(v___x_1419_);
lean_dec(v___x_1417_);
lean_dec(v___y_1411_);
lean_dec(v___y_1408_);
lean_dec(v___y_1406_);
lean_dec(v___y_1402_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec(v___y_1391_);
lean_dec(v___y_1387_);
lean_dec(v___y_1386_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1377_);
lean_dec(v_fields_1141_);
lean_dec(v_vis_x3f_1121_);
lean_dec(v___x_1120_);
lean_dec(v_structTy_1119_);
v_a_1592_ = lean_ctor_get(v___x_1460_, 0);
v_a_1593_ = lean_ctor_get(v___x_1460_, 1);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1595_ = v___x_1460_;
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_a_1593_);
lean_inc(v_a_1592_);
lean_dec(v___x_1460_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1598_; 
if (v_isShared_1596_ == 0)
{
v___x_1598_ = v___x_1595_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_a_1592_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v_a_1593_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
}
v___jp_1601_:
{
lean_object* v___x_1636_; 
v___x_1636_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1139_, v___y_1606_, v___y_1127_, v___y_1128_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; lean_object* v_a_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
lean_inc_n(v_a_1637_, 2);
v_a_1638_ = lean_ctor_get(v___x_1636_, 1);
lean_inc(v_a_1638_);
lean_dec_ref_known(v___x_1636_, 2);
v___x_1639_ = l_Lean_mkIdentFrom(v_id_1146_, v___y_1635_, v___x_1139_);
lean_inc_ref(v___y_1614_);
lean_inc(v___y_1618_);
v___x_1640_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1640_, 0, v_a_1637_);
lean_ctor_set(v___x_1640_, 1, v___y_1618_);
lean_ctor_set(v___x_1640_, 2, v___y_1614_);
if (lean_obj_tag(v_vis_x3f_1121_) == 1)
{
lean_object* v_val_1641_; lean_object* v___x_1642_; 
v_val_1641_ = lean_ctor_get(v_vis_x3f_1121_, 0);
lean_inc(v_val_1641_);
v___x_1642_ = l_Array_mkArray1___redArg(v_val_1641_);
v___y_1377_ = v___y_1602_;
v___y_1378_ = v___y_1603_;
v___y_1379_ = v_a_1638_;
v___y_1380_ = v___y_1604_;
v___y_1381_ = v___y_1605_;
v___y_1382_ = v___y_1606_;
v___y_1383_ = v___y_1607_;
v___y_1384_ = v___y_1608_;
v___y_1385_ = v___y_1610_;
v___y_1386_ = v___y_1609_;
v___y_1387_ = v___y_1611_;
v___y_1388_ = v___y_1612_;
v___y_1389_ = v___y_1613_;
v___y_1390_ = v___y_1614_;
v___y_1391_ = v___y_1615_;
v___y_1392_ = v___y_1616_;
v___y_1393_ = v_a_1637_;
v___y_1394_ = v___y_1617_;
v___y_1395_ = v___y_1618_;
v___y_1396_ = v___x_1639_;
v___y_1397_ = v___y_1619_;
v___y_1398_ = v___y_1620_;
v___y_1399_ = v___y_1621_;
v___y_1400_ = v___y_1622_;
v___y_1401_ = v___y_1623_;
v___y_1402_ = v___y_1624_;
v___y_1403_ = v___y_1625_;
v___y_1404_ = v___y_1627_;
v___y_1405_ = v___y_1626_;
v___y_1406_ = v___y_1629_;
v___y_1407_ = v___y_1628_;
v___y_1408_ = v___y_1631_;
v___y_1409_ = v___y_1630_;
v___y_1410_ = v___y_1632_;
v___y_1411_ = v___x_1640_;
v___y_1412_ = v___y_1634_;
v___y_1413_ = v___y_1633_;
v___y_1414_ = v___x_1642_;
goto v___jp_1376_;
}
else
{
lean_object* v___x_1643_; 
v___x_1643_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_1377_ = v___y_1602_;
v___y_1378_ = v___y_1603_;
v___y_1379_ = v_a_1638_;
v___y_1380_ = v___y_1604_;
v___y_1381_ = v___y_1605_;
v___y_1382_ = v___y_1606_;
v___y_1383_ = v___y_1607_;
v___y_1384_ = v___y_1608_;
v___y_1385_ = v___y_1610_;
v___y_1386_ = v___y_1609_;
v___y_1387_ = v___y_1611_;
v___y_1388_ = v___y_1612_;
v___y_1389_ = v___y_1613_;
v___y_1390_ = v___y_1614_;
v___y_1391_ = v___y_1615_;
v___y_1392_ = v___y_1616_;
v___y_1393_ = v_a_1637_;
v___y_1394_ = v___y_1617_;
v___y_1395_ = v___y_1618_;
v___y_1396_ = v___x_1639_;
v___y_1397_ = v___y_1619_;
v___y_1398_ = v___y_1620_;
v___y_1399_ = v___y_1621_;
v___y_1400_ = v___y_1622_;
v___y_1401_ = v___y_1623_;
v___y_1402_ = v___y_1624_;
v___y_1403_ = v___y_1625_;
v___y_1404_ = v___y_1627_;
v___y_1405_ = v___y_1626_;
v___y_1406_ = v___y_1629_;
v___y_1407_ = v___y_1628_;
v___y_1408_ = v___y_1631_;
v___y_1409_ = v___y_1630_;
v___y_1410_ = v___y_1632_;
v___y_1411_ = v___x_1640_;
v___y_1412_ = v___y_1634_;
v___y_1413_ = v___y_1633_;
v___y_1414_ = v___x_1643_;
goto v___jp_1376_;
}
}
else
{
lean_object* v_a_1644_; lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
lean_dec(v___y_1635_);
lean_dec(v___y_1631_);
lean_dec(v___y_1629_);
lean_dec(v___y_1626_);
lean_dec(v___y_1624_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1602_);
lean_dec(v_fields_1141_);
lean_dec(v_vis_x3f_1121_);
lean_dec(v___x_1120_);
lean_dec(v_structTy_1119_);
v_a_1644_ = lean_ctor_get(v___x_1636_, 0);
v_a_1645_ = lean_ctor_get(v___x_1636_, 1);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1636_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_inc(v_a_1644_);
lean_dec(v___x_1636_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1644_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_a_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
v___jp_1654_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
lean_inc_ref_n(v___y_1666_, 2);
v___x_1672_ = l_Array_append___redArg(v___y_1666_, v___y_1671_);
lean_dec_ref(v___y_1671_);
lean_inc_n(v___y_1656_, 19);
lean_inc_n(v___y_1657_, 69);
v___x_1673_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1673_, 0, v___y_1657_);
lean_ctor_set(v___x_1673_, 1, v___y_1656_);
lean_ctor_set(v___x_1673_, 2, v___x_1672_);
lean_inc_n(v___y_1670_, 35);
lean_inc(v___y_1662_);
v___x_1674_ = l_Lean_Syntax_node7(v___y_1657_, v___y_1662_, v___y_1670_, v___y_1670_, v___x_1673_, v___y_1670_, v___y_1670_, v___y_1670_, v___y_1670_);
v___x_1675_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__29));
lean_inc_ref_n(v___y_1669_, 4);
lean_inc_ref_n(v___y_1660_, 15);
lean_inc_ref_n(v___y_1664_, 15);
v___x_1676_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___y_1669_, v___x_1675_);
v___x_1677_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__30));
v___x_1678_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___y_1657_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = ((lean_object*)(l_Lake_configDecl___closed__8));
v___x_1680_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___y_1669_, v___x_1679_);
lean_inc(v___y_1665_);
lean_inc(v___x_1680_);
v___x_1681_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1680_, v___y_1665_, v___y_1670_);
v___x_1682_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__31));
v___x_1683_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___y_1669_, v___x_1682_);
v___x_1684_ = ((lean_object*)(l_Lake_configDecl___closed__26));
v___x_1685_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__2));
v___x_1686_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1685_);
v___x_1687_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3));
v___x_1688_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___y_1657_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
v___x_1689_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__4));
v___x_1690_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1689_);
v___x_1691_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33);
v___x_1692_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__34));
lean_inc_n(v___y_1663_, 8);
lean_inc_n(v___y_1667_, 8);
v___x_1693_ = l_Lean_addMacroScope(v___y_1667_, v___x_1692_, v___y_1663_);
v___x_1694_ = ((lean_object*)(l_Lake_configField___closed__1));
v___x_1695_ = lean_box(0);
v___x_1696_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__39));
v___x_1697_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1697_, 0, v___y_1657_);
lean_ctor_set(v___x_1697_, 1, v___x_1691_);
lean_ctor_set(v___x_1697_, 2, v___x_1693_);
lean_ctor_set(v___x_1697_, 3, v___x_1696_);
lean_inc(v_type_1148_);
lean_inc(v_structTy_1119_);
v___x_1698_ = l_Lean_Syntax_node2(v___y_1657_, v___y_1656_, v_structTy_1119_, v_type_1148_);
lean_inc_n(v___x_1690_, 2);
v___x_1699_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1690_, v___x_1697_, v___x_1698_);
lean_inc(v___x_1686_);
v___x_1700_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1686_, v___x_1688_, v___x_1699_);
v___x_1701_ = l_Lean_Syntax_node1(v___y_1657_, v___y_1656_, v___x_1700_);
v___x_1702_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1683_, v___y_1670_, v___x_1701_);
v___x_1703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__40));
v___x_1704_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___y_1669_, v___x_1703_);
v___x_1705_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__41));
v___x_1706_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1706_, 0, v___y_1657_);
lean_ctor_set(v___x_1706_, 1, v___x_1705_);
v___x_1707_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__27));
v___x_1708_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1707_);
v___x_1709_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__0));
v___x_1710_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1709_);
v___x_1711_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__1));
v___x_1712_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1711_);
v___x_1713_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43);
v___x_1714_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__44));
v___x_1715_ = l_Lean_addMacroScope(v___y_1667_, v___x_1714_, v___y_1663_);
v___x_1716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__48));
v___x_1717_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1717_, 0, v___y_1657_);
lean_ctor_set(v___x_1717_, 1, v___x_1713_);
lean_ctor_set(v___x_1717_, 2, v___x_1715_);
lean_ctor_set(v___x_1717_, 3, v___x_1716_);
lean_inc_n(v___x_1712_, 5);
v___x_1718_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1712_, v___x_1717_, v___y_1670_);
v___x_1719_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50);
v___x_1720_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__51));
v___x_1721_ = l_Lean_addMacroScope(v___y_1667_, v___x_1720_, v___y_1663_);
v___x_1722_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1722_, 0, v___y_1657_);
lean_ctor_set(v___x_1722_, 1, v___x_1719_);
lean_ctor_set(v___x_1722_, 2, v___x_1721_);
lean_ctor_set(v___x_1722_, 3, v___x_1695_);
lean_inc_ref_n(v___x_1722_, 3);
v___x_1723_ = l_Lean_Syntax_node1(v___y_1657_, v___y_1656_, v___x_1722_);
v___x_1724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__31));
v___x_1725_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1724_);
v___x_1726_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14));
v___x_1727_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___y_1657_);
lean_ctor_set(v___x_1727_, 1, v___x_1726_);
v___x_1728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__52));
v___x_1729_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1728_);
v___x_1730_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__53));
v___x_1731_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___y_1657_);
lean_ctor_set(v___x_1731_, 1, v___x_1730_);
lean_inc_n(v_id_1146_, 3);
v___x_1732_ = l_Lean_Syntax_node3(v___y_1657_, v___x_1729_, v___x_1722_, v___x_1731_, v_id_1146_);
lean_inc(v___x_1732_);
lean_inc_ref_n(v___x_1727_, 5);
lean_inc_n(v___x_1725_, 6);
v___x_1733_ = l_Lean_Syntax_node3(v___y_1657_, v___x_1725_, v___x_1727_, v___y_1670_, v___x_1732_);
lean_inc(v___x_1723_);
v___x_1734_ = l_Lean_Syntax_node3(v___y_1657_, v___y_1656_, v___x_1723_, v___y_1670_, v___x_1733_);
lean_inc_n(v___x_1710_, 6);
v___x_1735_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1710_, v___x_1718_, v___x_1734_);
v___x_1736_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55);
v___x_1737_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__56));
v___x_1738_ = l_Lean_addMacroScope(v___y_1667_, v___x_1737_, v___y_1663_);
v___x_1739_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__60));
v___x_1740_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1740_, 0, v___y_1657_);
lean_ctor_set(v___x_1740_, 1, v___x_1736_);
lean_ctor_set(v___x_1740_, 2, v___x_1738_);
lean_ctor_set(v___x_1740_, 3, v___x_1739_);
v___x_1741_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1712_, v___x_1740_, v___y_1670_);
v___x_1742_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62);
v___x_1743_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__63));
v___x_1744_ = l_Lean_addMacroScope(v___y_1667_, v___x_1743_, v___y_1663_);
v___x_1745_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1745_, 0, v___y_1657_);
lean_ctor_set(v___x_1745_, 1, v___x_1742_);
lean_ctor_set(v___x_1745_, 2, v___x_1744_);
lean_ctor_set(v___x_1745_, 3, v___x_1695_);
lean_inc_ref(v___x_1745_);
v___x_1746_ = l_Lean_Syntax_node2(v___y_1657_, v___y_1656_, v___x_1745_, v___x_1722_);
v___x_1747_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__25));
v___x_1748_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1747_);
v___x_1749_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__26));
v___x_1750_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1750_, 0, v___y_1657_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
v___x_1751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__64));
v___x_1752_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1752_, 0, v___y_1657_);
lean_ctor_set(v___x_1752_, 1, v___x_1751_);
v___x_1753_ = l_Lean_Syntax_node2(v___y_1657_, v___y_1656_, v___x_1723_, v___x_1752_);
v___x_1754_ = lean_box(0);
v___x_1755_ = l_Lean_SourceInfo_fromRef(v___x_1754_, v___x_1139_);
lean_inc(v___x_1755_);
v___x_1756_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
lean_ctor_set(v___x_1756_, 1, v___y_1656_);
lean_ctor_set(v___x_1756_, 2, v___y_1666_);
v___x_1757_ = l_Lean_Syntax_node2(v___x_1755_, v___x_1712_, v_id_1146_, v___x_1756_);
v___x_1758_ = l_Lean_Syntax_node3(v___y_1657_, v___x_1725_, v___x_1727_, v___y_1670_, v___x_1745_);
v___x_1759_ = l_Lean_Syntax_node3(v___y_1657_, v___y_1656_, v___y_1670_, v___y_1670_, v___x_1758_);
lean_inc(v___x_1757_);
v___x_1760_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1710_, v___x_1757_, v___x_1759_);
v___x_1761_ = l_Lean_Syntax_node1(v___y_1657_, v___y_1656_, v___x_1760_);
lean_inc_n(v___x_1708_, 3);
v___x_1762_ = l_Lean_Syntax_node1(v___y_1657_, v___x_1708_, v___x_1761_);
v___x_1763_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__42));
v___x_1764_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1763_);
lean_inc(v___x_1764_);
v___x_1765_ = l_Lean_Syntax_node1(v___y_1657_, v___x_1764_, v___y_1670_);
v___x_1766_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__51));
v___x_1767_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___y_1657_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
lean_inc_ref(v___x_1767_);
lean_inc(v___x_1765_);
lean_inc(v___x_1753_);
lean_inc_ref(v___x_1750_);
lean_inc_n(v___x_1748_, 2);
v___x_1768_ = l_Lean_Syntax_node6(v___y_1657_, v___x_1748_, v___x_1750_, v___x_1753_, v___x_1762_, v___x_1765_, v___y_1670_, v___x_1767_);
v___x_1769_ = l_Lean_Syntax_node3(v___y_1657_, v___x_1725_, v___x_1727_, v___y_1670_, v___x_1768_);
v___x_1770_ = l_Lean_Syntax_node3(v___y_1657_, v___y_1656_, v___x_1746_, v___y_1670_, v___x_1769_);
v___x_1771_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1710_, v___x_1741_, v___x_1770_);
v___x_1772_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66);
v___x_1773_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__67));
v___x_1774_ = l_Lean_addMacroScope(v___y_1667_, v___x_1773_, v___y_1663_);
v___x_1775_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__69));
v___x_1776_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1776_, 0, v___y_1657_);
lean_ctor_set(v___x_1776_, 1, v___x_1772_);
lean_ctor_set(v___x_1776_, 2, v___x_1774_);
lean_ctor_set(v___x_1776_, 3, v___x_1775_);
v___x_1777_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1712_, v___x_1776_, v___y_1670_);
v___x_1778_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71);
v___x_1779_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__72));
v___x_1780_ = l_Lean_addMacroScope(v___y_1667_, v___x_1779_, v___y_1663_);
v___x_1781_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1781_, 0, v___y_1657_);
lean_ctor_set(v___x_1781_, 1, v___x_1778_);
lean_ctor_set(v___x_1781_, 2, v___x_1780_);
lean_ctor_set(v___x_1781_, 3, v___x_1695_);
lean_inc_ref(v___x_1781_);
v___x_1782_ = l_Lean_Syntax_node2(v___y_1657_, v___y_1656_, v___x_1781_, v___x_1722_);
v___x_1783_ = l_Lean_Syntax_node1(v___y_1657_, v___y_1656_, v___x_1732_);
v___x_1784_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1690_, v___x_1781_, v___x_1783_);
v___x_1785_ = l_Lean_Syntax_node3(v___y_1657_, v___x_1725_, v___x_1727_, v___y_1670_, v___x_1784_);
v___x_1786_ = l_Lean_Syntax_node3(v___y_1657_, v___y_1656_, v___y_1670_, v___y_1670_, v___x_1785_);
v___x_1787_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1710_, v___x_1757_, v___x_1786_);
v___x_1788_ = l_Lean_Syntax_node1(v___y_1657_, v___y_1656_, v___x_1787_);
v___x_1789_ = l_Lean_Syntax_node1(v___y_1657_, v___x_1708_, v___x_1788_);
v___x_1790_ = l_Lean_Syntax_node6(v___y_1657_, v___x_1748_, v___x_1750_, v___x_1753_, v___x_1789_, v___x_1765_, v___y_1670_, v___x_1767_);
v___x_1791_ = l_Lean_Syntax_node3(v___y_1657_, v___x_1725_, v___x_1727_, v___y_1670_, v___x_1790_);
v___x_1792_ = l_Lean_Syntax_node3(v___y_1657_, v___y_1656_, v___x_1782_, v___y_1670_, v___x_1791_);
v___x_1793_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1710_, v___x_1777_, v___x_1792_);
v___x_1794_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74);
v___x_1795_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__75));
v___x_1796_ = l_Lean_addMacroScope(v___y_1667_, v___x_1795_, v___y_1663_);
v___x_1797_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1797_, 0, v___y_1657_);
lean_ctor_set(v___x_1797_, 1, v___x_1794_);
lean_ctor_set(v___x_1797_, 2, v___x_1796_);
lean_ctor_set(v___x_1797_, 3, v___x_1695_);
v___x_1798_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1712_, v___x_1797_, v___y_1670_);
v___x_1799_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__76));
v___x_1800_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1799_);
v___x_1801_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___y_1657_);
lean_ctor_set(v___x_1801_, 1, v___x_1799_);
v___x_1802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__77));
v___x_1803_ = l_Lean_Name_mkStr4(v___y_1664_, v___y_1660_, v___x_1684_, v___x_1802_);
lean_inc(v___x_1120_);
v___x_1804_ = l_Lean_Syntax_node1(v___y_1657_, v___y_1656_, v___x_1120_);
v___x_1805_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__78));
v___x_1806_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___y_1657_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
lean_inc(v_defVal_1149_);
v___x_1807_ = l_Lean_Syntax_node4(v___y_1657_, v___x_1803_, v___x_1804_, v___y_1670_, v___x_1806_, v_defVal_1149_);
v___x_1808_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1800_, v___x_1801_, v___x_1807_);
v___x_1809_ = l_Lean_Syntax_node3(v___y_1657_, v___x_1725_, v___x_1727_, v___y_1670_, v___x_1808_);
v___x_1810_ = l_Lean_Syntax_node3(v___y_1657_, v___y_1656_, v___y_1670_, v___y_1670_, v___x_1809_);
v___x_1811_ = l_Lean_Syntax_node2(v___y_1657_, v___x_1710_, v___x_1798_, v___x_1810_);
v___x_1812_ = l_Lean_Syntax_node7(v___y_1657_, v___y_1656_, v___x_1735_, v___y_1670_, v___x_1771_, v___y_1670_, v___x_1793_, v___y_1670_, v___x_1811_);
v___x_1813_ = l_Lean_Syntax_node1(v___y_1657_, v___x_1708_, v___x_1812_);
v___x_1814_ = l_Lean_Syntax_node3(v___y_1657_, v___x_1704_, v___x_1706_, v___x_1813_, v___y_1670_);
v___x_1815_ = l_Lean_Syntax_node5(v___y_1657_, v___x_1676_, v___x_1678_, v___x_1681_, v___x_1702_, v___x_1814_, v___y_1670_);
lean_inc(v___y_1659_);
v___x_1816_ = l_Lean_Syntax_node2(v___y_1657_, v___y_1659_, v___x_1674_, v___x_1815_);
v___x_1817_ = lean_array_push(v_cmds_1140_, v___x_1816_);
lean_inc(v___x_1653_);
v___x_1818_ = l_Lake_Name_quoteFrom(v_id_1146_, v___x_1653_, v___x_1139_);
if (v_parent_1150_ == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1820_; uint8_t v___x_1821_; 
lean_dec(v___x_1653_);
v___x_1819_ = lean_unsigned_to_nat(0u);
v___x_1820_ = lean_array_get_size(v_ids_1147_);
v___x_1821_ = lean_nat_dec_lt(v___x_1819_, v___x_1820_);
if (v___x_1821_ == 0)
{
lean_object* v___x_1822_; 
lean_dec(v___x_1818_);
lean_dec(v___x_1764_);
lean_dec(v___x_1748_);
lean_dec(v___x_1725_);
lean_dec(v___x_1712_);
lean_dec(v___x_1710_);
lean_dec(v___x_1708_);
lean_dec(v___x_1690_);
lean_dec(v___x_1686_);
lean_dec(v___x_1680_);
lean_dec(v___y_1665_);
lean_del_object(v___x_1143_);
v___x_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1817_);
lean_ctor_set(v___x_1822_, 1, v_fields_1141_);
v_a_1130_ = v___x_1822_;
v_a_1131_ = v___y_1128_;
goto v___jp_1129_;
}
else
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v___x_1823_ = lean_array_fget_borrowed(v_ids_1147_, v___x_1819_);
v___x_1824_ = l_Lean_TSyntax_getId(v___x_1823_);
lean_inc(v___x_1824_);
lean_inc(v___x_1823_);
v___x_1825_ = l_Lake_Name_quoteFrom(v___x_1823_, v___x_1824_, v___x_1139_);
v___x_1826_ = l_Lean_Name_hasMacroScopes(v___x_1824_);
if (v___x_1826_ == 0)
{
lean_object* v___x_1827_; 
v___x_1827_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_1122_, v___x_1824_);
lean_inc(v___x_1823_);
v___y_1321_ = v___x_1712_;
v___y_1322_ = v___x_1749_;
v___y_1323_ = v___x_1817_;
v___y_1324_ = v___y_1660_;
v___y_1325_ = v___x_1819_;
v___y_1326_ = v___y_1661_;
v___y_1327_ = v___y_1662_;
v___y_1328_ = v___x_1695_;
v___y_1329_ = v___x_1690_;
v___y_1330_ = v___x_1748_;
v___y_1331_ = v___x_1710_;
v___y_1332_ = v___x_1686_;
v___y_1333_ = v___x_1766_;
v___y_1334_ = v___y_1666_;
v___y_1335_ = v___x_1725_;
v___y_1336_ = v___x_1684_;
v___y_1337_ = v___x_1823_;
v___y_1338_ = v___y_1655_;
v___y_1339_ = v___y_1656_;
v___y_1340_ = v___x_1726_;
v___y_1341_ = v___x_1680_;
v___y_1342_ = v___y_1658_;
v___y_1343_ = v___y_1659_;
v___y_1344_ = v___y_1663_;
v___y_1345_ = v___x_1818_;
v___y_1346_ = v___x_1695_;
v___y_1347_ = v___y_1665_;
v___y_1348_ = v___x_1825_;
v___y_1349_ = v___y_1664_;
v___y_1350_ = v___y_1667_;
v___y_1351_ = v___x_1764_;
v___y_1352_ = v___x_1694_;
v___y_1353_ = v___x_1708_;
v___y_1354_ = v___x_1687_;
v___y_1355_ = v___y_1668_;
v___y_1356_ = v___y_1669_;
v___y_1357_ = v___x_1820_;
v___y_1358_ = v___x_1827_;
goto v___jp_1320_;
}
else
{
lean_object* v_view_1828_; lean_object* v_name_1829_; lean_object* v_imported_1830_; lean_object* v_ctx_1831_; lean_object* v_scopes_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1841_; 
v_view_1828_ = l_Lean_extractMacroScopes(v___x_1824_);
v_name_1829_ = lean_ctor_get(v_view_1828_, 0);
v_imported_1830_ = lean_ctor_get(v_view_1828_, 1);
v_ctx_1831_ = lean_ctor_get(v_view_1828_, 2);
v_scopes_1832_ = lean_ctor_get(v_view_1828_, 3);
v_isSharedCheck_1841_ = !lean_is_exclusive(v_view_1828_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1834_ = v_view_1828_;
v_isShared_1835_ = v_isSharedCheck_1841_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_scopes_1832_);
lean_inc(v_ctx_1831_);
lean_inc(v_imported_1830_);
lean_inc(v_name_1829_);
lean_dec(v_view_1828_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1841_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_1122_, v_name_1829_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1836_);
v___x_1838_ = v___x_1834_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v___x_1836_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v_imported_1830_);
lean_ctor_set(v_reuseFailAlloc_1840_, 2, v_ctx_1831_);
lean_ctor_set(v_reuseFailAlloc_1840_, 3, v_scopes_1832_);
v___x_1838_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
lean_object* v___x_1839_; 
v___x_1839_ = l_Lean_MacroScopesView_review(v___x_1838_);
lean_inc(v___x_1823_);
v___y_1321_ = v___x_1712_;
v___y_1322_ = v___x_1749_;
v___y_1323_ = v___x_1817_;
v___y_1324_ = v___y_1660_;
v___y_1325_ = v___x_1819_;
v___y_1326_ = v___y_1661_;
v___y_1327_ = v___y_1662_;
v___y_1328_ = v___x_1695_;
v___y_1329_ = v___x_1690_;
v___y_1330_ = v___x_1748_;
v___y_1331_ = v___x_1710_;
v___y_1332_ = v___x_1686_;
v___y_1333_ = v___x_1766_;
v___y_1334_ = v___y_1666_;
v___y_1335_ = v___x_1725_;
v___y_1336_ = v___x_1684_;
v___y_1337_ = v___x_1823_;
v___y_1338_ = v___y_1655_;
v___y_1339_ = v___y_1656_;
v___y_1340_ = v___x_1726_;
v___y_1341_ = v___x_1680_;
v___y_1342_ = v___y_1658_;
v___y_1343_ = v___y_1659_;
v___y_1344_ = v___y_1663_;
v___y_1345_ = v___x_1818_;
v___y_1346_ = v___x_1695_;
v___y_1347_ = v___y_1665_;
v___y_1348_ = v___x_1825_;
v___y_1349_ = v___y_1664_;
v___y_1350_ = v___y_1667_;
v___y_1351_ = v___x_1764_;
v___y_1352_ = v___x_1694_;
v___y_1353_ = v___x_1708_;
v___y_1354_ = v___x_1687_;
v___y_1355_ = v___y_1668_;
v___y_1356_ = v___y_1669_;
v___y_1357_ = v___x_1820_;
v___y_1358_ = v___x_1839_;
goto v___jp_1320_;
}
}
}
}
}
else
{
uint8_t v___x_1842_; 
lean_del_object(v___x_1143_);
v___x_1842_ = l_Lean_Name_hasMacroScopes(v___x_1653_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; 
v___x_1843_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2(v_structId_1122_, v___x_1653_);
v___y_1602_ = v___x_1712_;
v___y_1603_ = v___x_1749_;
v___y_1604_ = v___x_1817_;
v___y_1605_ = v___y_1660_;
v___y_1606_ = v___y_1661_;
v___y_1607_ = v___y_1662_;
v___y_1608_ = v___x_1695_;
v___y_1609_ = v___x_1690_;
v___y_1610_ = v___x_1748_;
v___y_1611_ = v___x_1710_;
v___y_1612_ = v___x_1686_;
v___y_1613_ = v___x_1766_;
v___y_1614_ = v___y_1666_;
v___y_1615_ = v___x_1725_;
v___y_1616_ = v___x_1684_;
v___y_1617_ = v___y_1655_;
v___y_1618_ = v___y_1656_;
v___y_1619_ = v___x_1726_;
v___y_1620_ = v___x_1680_;
v___y_1621_ = v___y_1658_;
v___y_1622_ = v___y_1659_;
v___y_1623_ = v___y_1663_;
v___y_1624_ = v___x_1818_;
v___y_1625_ = v___x_1695_;
v___y_1626_ = v___y_1665_;
v___y_1627_ = v___y_1664_;
v___y_1628_ = v___y_1667_;
v___y_1629_ = v___x_1764_;
v___y_1630_ = v___x_1694_;
v___y_1631_ = v___x_1708_;
v___y_1632_ = v___x_1687_;
v___y_1633_ = v___y_1668_;
v___y_1634_ = v___y_1669_;
v___y_1635_ = v___x_1843_;
goto v___jp_1601_;
}
else
{
lean_object* v_view_1844_; lean_object* v_name_1845_; lean_object* v_imported_1846_; lean_object* v_ctx_1847_; lean_object* v_scopes_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1857_; 
v_view_1844_ = l_Lean_extractMacroScopes(v___x_1653_);
v_name_1845_ = lean_ctor_get(v_view_1844_, 0);
v_imported_1846_ = lean_ctor_get(v_view_1844_, 1);
v_ctx_1847_ = lean_ctor_get(v_view_1844_, 2);
v_scopes_1848_ = lean_ctor_get(v_view_1844_, 3);
v_isSharedCheck_1857_ = !lean_is_exclusive(v_view_1844_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1850_ = v_view_1844_;
v_isShared_1851_ = v_isSharedCheck_1857_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_scopes_1848_);
lean_inc(v_ctx_1847_);
lean_inc(v_imported_1846_);
lean_inc(v_name_1845_);
lean_dec(v_view_1844_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1857_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1852_; lean_object* v___x_1854_; 
v___x_1852_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2(v_structId_1122_, v_name_1845_);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 0, v___x_1852_);
v___x_1854_ = v___x_1850_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v___x_1852_);
lean_ctor_set(v_reuseFailAlloc_1856_, 1, v_imported_1846_);
lean_ctor_set(v_reuseFailAlloc_1856_, 2, v_ctx_1847_);
lean_ctor_set(v_reuseFailAlloc_1856_, 3, v_scopes_1848_);
v___x_1854_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1855_; 
v___x_1855_ = l_Lean_MacroScopesView_review(v___x_1854_);
v___y_1602_ = v___x_1712_;
v___y_1603_ = v___x_1749_;
v___y_1604_ = v___x_1817_;
v___y_1605_ = v___y_1660_;
v___y_1606_ = v___y_1661_;
v___y_1607_ = v___y_1662_;
v___y_1608_ = v___x_1695_;
v___y_1609_ = v___x_1690_;
v___y_1610_ = v___x_1748_;
v___y_1611_ = v___x_1710_;
v___y_1612_ = v___x_1686_;
v___y_1613_ = v___x_1766_;
v___y_1614_ = v___y_1666_;
v___y_1615_ = v___x_1725_;
v___y_1616_ = v___x_1684_;
v___y_1617_ = v___y_1655_;
v___y_1618_ = v___y_1656_;
v___y_1619_ = v___x_1726_;
v___y_1620_ = v___x_1680_;
v___y_1621_ = v___y_1658_;
v___y_1622_ = v___y_1659_;
v___y_1623_ = v___y_1663_;
v___y_1624_ = v___x_1818_;
v___y_1625_ = v___x_1695_;
v___y_1626_ = v___y_1665_;
v___y_1627_ = v___y_1664_;
v___y_1628_ = v___y_1667_;
v___y_1629_ = v___x_1764_;
v___y_1630_ = v___x_1694_;
v___y_1631_ = v___x_1708_;
v___y_1632_ = v___x_1687_;
v___y_1633_ = v___y_1668_;
v___y_1634_ = v___y_1669_;
v___y_1635_ = v___x_1855_;
goto v___jp_1601_;
}
}
}
}
}
v___jp_1858_:
{
lean_object* v_methods_1860_; lean_object* v_quotContext_1861_; lean_object* v_currMacroScope_1862_; lean_object* v_currRecDepth_1863_; lean_object* v_maxRecDepth_1864_; lean_object* v_ref_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v_methods_1860_ = lean_ctor_get(v___y_1127_, 0);
v_quotContext_1861_ = lean_ctor_get(v___y_1127_, 1);
v_currMacroScope_1862_ = lean_ctor_get(v___y_1127_, 2);
v_currRecDepth_1863_ = lean_ctor_get(v___y_1127_, 3);
v_maxRecDepth_1864_ = lean_ctor_get(v___y_1127_, 4);
v_ref_1865_ = lean_ctor_get(v___y_1127_, 5);
v___x_1866_ = l_Lean_mkIdentFrom(v_id_1146_, v___y_1859_, v___x_1139_);
v___x_1867_ = l_Lean_SourceInfo_fromRef(v_ref_1865_, v___x_1139_);
v___x_1868_ = ((lean_object*)(l_Lake_configDecl___closed__24));
v___x_1869_ = ((lean_object*)(l_Lake_configDecl___closed__25));
v___x_1870_ = ((lean_object*)(l_Lake_configDecl___closed__31));
v___x_1871_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53));
v___x_1872_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54));
v___x_1873_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4));
v___x_1874_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5);
lean_inc(v___x_1867_);
v___x_1875_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1867_);
lean_ctor_set(v___x_1875_, 1, v___x_1873_);
lean_ctor_set(v___x_1875_, 2, v___x_1874_);
if (lean_obj_tag(v_vis_x3f_1121_) == 1)
{
lean_object* v_val_1876_; lean_object* v___x_1877_; 
v_val_1876_ = lean_ctor_get(v_vis_x3f_1121_, 0);
lean_inc(v_val_1876_);
v___x_1877_ = l_Array_mkArray1___redArg(v_val_1876_);
v___y_1655_ = v_maxRecDepth_1864_;
v___y_1656_ = v___x_1873_;
v___y_1657_ = v___x_1867_;
v___y_1658_ = v_currRecDepth_1863_;
v___y_1659_ = v___x_1871_;
v___y_1660_ = v___x_1869_;
v___y_1661_ = v_ref_1865_;
v___y_1662_ = v___x_1872_;
v___y_1663_ = v_currMacroScope_1862_;
v___y_1664_ = v___x_1868_;
v___y_1665_ = v___x_1866_;
v___y_1666_ = v___x_1874_;
v___y_1667_ = v_quotContext_1861_;
v___y_1668_ = v_methods_1860_;
v___y_1669_ = v___x_1870_;
v___y_1670_ = v___x_1875_;
v___y_1671_ = v___x_1877_;
goto v___jp_1654_;
}
else
{
lean_object* v___x_1878_; 
v___x_1878_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_1655_ = v_maxRecDepth_1864_;
v___y_1656_ = v___x_1873_;
v___y_1657_ = v___x_1867_;
v___y_1658_ = v_currRecDepth_1863_;
v___y_1659_ = v___x_1871_;
v___y_1660_ = v___x_1869_;
v___y_1661_ = v_ref_1865_;
v___y_1662_ = v___x_1872_;
v___y_1663_ = v_currMacroScope_1862_;
v___y_1664_ = v___x_1868_;
v___y_1665_ = v___x_1866_;
v___y_1666_ = v___x_1874_;
v___y_1667_ = v_quotContext_1861_;
v___y_1668_ = v_methods_1860_;
v___y_1669_ = v___x_1870_;
v___y_1670_ = v___x_1875_;
v___y_1671_ = v___x_1878_;
goto v___jp_1654_;
}
}
}
}
else
{
lean_object* v___x_1896_; 
lean_dec(v_vis_x3f_1121_);
lean_dec(v___x_1120_);
lean_dec(v_structTy_1119_);
v___x_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1896_, 0, v_b_1126_);
lean_ctor_set(v___x_1896_, 1, v___y_1128_);
return v___x_1896_;
}
v___jp_1129_:
{
size_t v___x_1132_; size_t v___x_1133_; 
v___x_1132_ = ((size_t)1ULL);
v___x_1133_ = lean_usize_add(v_i_1124_, v___x_1132_);
v_i_1124_ = v___x_1133_;
v_b_1126_ = v_a_1130_;
v___y_1128_ = v_a_1131_;
goto _start;
}
v___jp_1135_:
{
if (lean_obj_tag(v___y_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v_a_1138_; 
v_a_1137_ = lean_ctor_get(v___y_1136_, 0);
lean_inc(v_a_1137_);
v_a_1138_ = lean_ctor_get(v___y_1136_, 1);
lean_inc(v_a_1138_);
lean_dec_ref_known(v___y_1136_, 2);
v_a_1130_ = v_a_1137_;
v_a_1131_ = v_a_1138_;
goto v___jp_1129_;
}
else
{
lean_dec(v_vis_x3f_1121_);
lean_dec(v___x_1120_);
lean_dec(v_structTy_1119_);
return v___y_1136_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___boxed(lean_object* v_structTy_1897_, lean_object* v___x_1898_, lean_object* v_vis_x3f_1899_, lean_object* v_structId_1900_, lean_object* v_as_1901_, lean_object* v_i_1902_, lean_object* v_stop_1903_, lean_object* v_b_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
size_t v_i_boxed_1907_; size_t v_stop_boxed_1908_; lean_object* v_res_1909_; 
v_i_boxed_1907_ = lean_unbox_usize(v_i_1902_);
lean_dec(v_i_1902_);
v_stop_boxed_1908_ = lean_unbox_usize(v_stop_1903_);
lean_dec(v_stop_1903_);
v_res_1909_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4(v_structTy_1897_, v___x_1898_, v_vis_x3f_1899_, v_structId_1900_, v_as_1901_, v_i_boxed_1907_, v_stop_boxed_1908_, v_b_1904_, v___y_1905_, v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec_ref(v_as_1901_);
lean_dec(v_structId_1900_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3(lean_object* v_structTy_1910_, lean_object* v___x_1911_, lean_object* v_vis_x3f_1912_, lean_object* v_structId_1913_, lean_object* v_as_1914_, size_t v_i_1915_, size_t v_stop_1916_, lean_object* v_b_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v_a_1921_; lean_object* v_a_1922_; lean_object* v___y_1927_; uint8_t v___x_1930_; 
v___x_1930_ = lean_usize_dec_eq(v_i_1915_, v_stop_1916_);
if (v___x_1930_ == 0)
{
lean_object* v_cmds_1931_; lean_object* v_fields_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_2686_; 
v_cmds_1931_ = lean_ctor_get(v_b_1917_, 0);
v_fields_1932_ = lean_ctor_get(v_b_1917_, 1);
v_isSharedCheck_2686_ = !lean_is_exclusive(v_b_1917_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_1934_ = v_b_1917_;
v_isShared_1935_ = v_isSharedCheck_2686_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_fields_1932_);
lean_inc(v_cmds_1931_);
lean_dec(v_b_1917_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_2686_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1936_; lean_object* v_id_1937_; lean_object* v_ids_1938_; lean_object* v_type_1939_; lean_object* v_defVal_1940_; uint8_t v_parent_1941_; lean_object* v___y_1943_; lean_object* v___y_1944_; lean_object* v___y_1945_; lean_object* v___y_1946_; lean_object* v___y_1947_; lean_object* v___y_1948_; lean_object* v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v___y_1971_; lean_object* v___y_1972_; lean_object* v___y_1973_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v___y_2112_; lean_object* v___y_2113_; lean_object* v___y_2114_; lean_object* v___y_2115_; lean_object* v___y_2116_; lean_object* v___y_2117_; lean_object* v___y_2118_; lean_object* v___y_2119_; lean_object* v___y_2120_; lean_object* v___y_2121_; lean_object* v___y_2122_; lean_object* v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v___y_2128_; lean_object* v___y_2129_; lean_object* v___y_2130_; lean_object* v___y_2131_; lean_object* v___y_2132_; lean_object* v___y_2133_; lean_object* v___y_2134_; lean_object* v___y_2135_; lean_object* v___y_2136_; lean_object* v___y_2137_; lean_object* v___y_2138_; lean_object* v___y_2139_; lean_object* v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2145_; lean_object* v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2148_; lean_object* v___y_2149_; lean_object* v___y_2168_; lean_object* v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2174_; lean_object* v___y_2175_; lean_object* v___y_2176_; lean_object* v___y_2177_; lean_object* v___y_2178_; lean_object* v___y_2179_; lean_object* v___y_2180_; lean_object* v___y_2181_; lean_object* v___y_2182_; lean_object* v___y_2183_; lean_object* v___y_2184_; lean_object* v___y_2185_; lean_object* v___y_2186_; lean_object* v___y_2187_; lean_object* v___y_2188_; lean_object* v___y_2189_; lean_object* v___y_2190_; lean_object* v___y_2191_; lean_object* v___y_2192_; lean_object* v___y_2193_; lean_object* v___y_2194_; lean_object* v___y_2195_; lean_object* v___y_2196_; lean_object* v___y_2197_; lean_object* v___y_2198_; lean_object* v___y_2199_; lean_object* v___y_2200_; lean_object* v___y_2201_; lean_object* v___y_2202_; lean_object* v___y_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2393_; lean_object* v___y_2394_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2403_; lean_object* v___y_2404_; lean_object* v___y_2405_; lean_object* v___y_2406_; lean_object* v___y_2407_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___y_2420_; lean_object* v___y_2421_; lean_object* v___y_2422_; lean_object* v___y_2423_; lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___x_2444_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2450_; lean_object* v___y_2451_; lean_object* v___y_2452_; lean_object* v___y_2453_; lean_object* v___y_2454_; lean_object* v___y_2455_; lean_object* v___y_2456_; lean_object* v___y_2457_; lean_object* v___y_2458_; lean_object* v___y_2459_; lean_object* v___y_2460_; lean_object* v___y_2461_; lean_object* v___y_2462_; lean_object* v___y_2650_; uint8_t v___x_2670_; 
v___x_1936_ = lean_array_uget_borrowed(v_as_1914_, v_i_1915_);
v_id_1937_ = lean_ctor_get(v___x_1936_, 2);
v_ids_1938_ = lean_ctor_get(v___x_1936_, 3);
v_type_1939_ = lean_ctor_get(v___x_1936_, 4);
v_defVal_1940_ = lean_ctor_get(v___x_1936_, 5);
v_parent_1941_ = lean_ctor_get_uint8(v___x_1936_, sizeof(void*)*7);
v___x_2444_ = l_Lean_TSyntax_getId(v_id_1937_);
v___x_2670_ = l_Lean_Name_hasMacroScopes(v___x_2444_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2671_; 
lean_inc(v___x_2444_);
v___x_2671_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0(v_structId_1913_, v___x_2444_);
v___y_2650_ = v___x_2671_;
goto v___jp_2649_;
}
else
{
lean_object* v_view_2672_; lean_object* v_name_2673_; lean_object* v_imported_2674_; lean_object* v_ctx_2675_; lean_object* v_scopes_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2685_; 
lean_inc(v___x_2444_);
v_view_2672_ = l_Lean_extractMacroScopes(v___x_2444_);
v_name_2673_ = lean_ctor_get(v_view_2672_, 0);
v_imported_2674_ = lean_ctor_get(v_view_2672_, 1);
v_ctx_2675_ = lean_ctor_get(v_view_2672_, 2);
v_scopes_2676_ = lean_ctor_get(v_view_2672_, 3);
v_isSharedCheck_2685_ = !lean_is_exclusive(v_view_2672_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2678_ = v_view_2672_;
v_isShared_2679_ = v_isSharedCheck_2685_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_scopes_2676_);
lean_inc(v_ctx_2675_);
lean_inc(v_imported_2674_);
lean_inc(v_name_2673_);
lean_dec(v_view_2672_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2685_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2680_; lean_object* v___x_2682_; 
v___x_2680_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__0(v_structId_1913_, v_name_2673_);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 0, v___x_2680_);
v___x_2682_ = v___x_2678_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v___x_2680_);
lean_ctor_set(v_reuseFailAlloc_2684_, 1, v_imported_2674_);
lean_ctor_set(v_reuseFailAlloc_2684_, 2, v_ctx_2675_);
lean_ctor_set(v_reuseFailAlloc_2684_, 3, v_scopes_2676_);
v___x_2682_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
lean_object* v___x_2683_; 
v___x_2683_ = l_Lean_MacroScopesView_review(v___x_2682_);
v___y_2650_ = v___x_2683_;
goto v___jp_2649_;
}
}
}
v___jp_1942_:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v_ref_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
lean_inc_ref(v___y_1962_);
v___x_1983_ = l_Array_append___redArg(v___y_1962_, v___y_1982_);
lean_dec_ref(v___y_1982_);
lean_inc_n(v___y_1978_, 4);
lean_inc_n(v___y_1946_, 18);
v___x_1984_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1984_, 0, v___y_1946_);
lean_ctor_set(v___x_1984_, 1, v___y_1978_);
lean_ctor_set(v___x_1984_, 2, v___x_1983_);
lean_inc_n(v___y_1966_, 11);
lean_inc(v___y_1981_);
v___x_1985_ = l_Lean_Syntax_node7(v___y_1946_, v___y_1981_, v___y_1966_, v___y_1966_, v___x_1984_, v___y_1966_, v___y_1966_, v___y_1966_, v___y_1966_);
v___x_1986_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0));
lean_inc_ref_n(v___y_1975_, 3);
lean_inc_ref_n(v___y_1948_, 6);
lean_inc_ref_n(v___y_1959_, 6);
v___x_1987_ = l_Lean_Name_mkStr4(v___y_1959_, v___y_1948_, v___y_1975_, v___x_1986_);
v___x_1988_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1));
lean_inc_ref_n(v___y_1958_, 2);
v___x_1989_ = l_Lean_Name_mkStr4(v___y_1959_, v___y_1948_, v___y_1958_, v___x_1988_);
v___x_1990_ = l_Lean_Syntax_node1(v___y_1946_, v___x_1989_, v___y_1966_);
v___x_1991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1991_, 0, v___y_1946_);
lean_ctor_set(v___x_1991_, 1, v___x_1986_);
v___x_1992_ = l_Lean_Syntax_node2(v___y_1946_, v___y_1960_, v___y_1970_, v___y_1966_);
v___x_1993_ = l_Lean_Syntax_node1(v___y_1946_, v___y_1978_, v___x_1992_);
v___x_1994_ = ((lean_object*)(l_Lake_configField___closed__27));
v___x_1995_ = l_Lean_Name_mkStr4(v___y_1959_, v___y_1948_, v___y_1975_, v___x_1994_);
lean_inc_ref(v___y_1955_);
v___x_1996_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1996_, 0, v___y_1946_);
lean_ctor_set(v___x_1996_, 1, v___y_1955_);
v___x_1997_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__5));
v___x_1998_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__6);
v___x_1999_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__7));
lean_inc_n(v___y_1956_, 2);
lean_inc_n(v___y_1969_, 2);
v___x_2000_ = l_Lean_addMacroScope(v___y_1969_, v___x_1999_, v___y_1956_);
lean_inc_ref(v___y_1957_);
v___x_2001_ = l_Lean_Name_mkStr2(v___y_1957_, v___x_1997_);
lean_inc(v___y_1965_);
lean_inc(v___x_2001_);
v___x_2002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
lean_ctor_set(v___x_2002_, 1, v___y_1965_);
v___x_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2001_);
lean_inc(v___y_1949_);
v___x_2004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2003_);
lean_ctor_set(v___x_2004_, 1, v___y_1949_);
v___x_2005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2002_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
v___x_2006_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2006_, 0, v___y_1946_);
lean_ctor_set(v___x_2006_, 1, v___x_1998_);
lean_ctor_set(v___x_2006_, 2, v___x_2000_);
lean_ctor_set(v___x_2006_, 3, v___x_2005_);
lean_inc(v_type_1939_);
lean_inc(v___y_1967_);
lean_inc(v_structTy_1910_);
v___x_2007_ = l_Lean_Syntax_node3(v___y_1946_, v___y_1978_, v_structTy_1910_, v___y_1967_, v_type_1939_);
v___x_2008_ = l_Lean_Syntax_node2(v___y_1946_, v___y_1961_, v___x_2006_, v___x_2007_);
v___x_2009_ = l_Lean_Syntax_node2(v___y_1946_, v___y_1974_, v___x_1996_, v___x_2008_);
v___x_2010_ = l_Lean_Syntax_node2(v___y_1946_, v___x_1995_, v___y_1966_, v___x_2009_);
v___x_2011_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13));
v___x_2012_ = l_Lean_Name_mkStr4(v___y_1959_, v___y_1948_, v___y_1975_, v___x_2011_);
lean_inc_ref(v___y_1947_);
v___x_2013_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2013_, 0, v___y_1946_);
lean_ctor_set(v___x_2013_, 1, v___y_1947_);
v___x_2014_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15));
v___x_2015_ = l_Lean_Name_mkStr4(v___y_1959_, v___y_1948_, v___y_1958_, v___x_2014_);
v___x_2016_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16));
v___x_2017_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___y_1946_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
lean_inc(v___y_1953_);
v___x_2018_ = l_Lean_Syntax_node1(v___y_1946_, v___y_1978_, v___y_1953_);
v___x_2019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17));
v___x_2020_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2020_, 0, v___y_1946_);
lean_ctor_set(v___x_2020_, 1, v___x_2019_);
v___x_2021_ = l_Lean_Syntax_node3(v___y_1946_, v___x_2015_, v___x_2017_, v___x_2018_, v___x_2020_);
v___x_2022_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18));
v___x_2023_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19));
v___x_2024_ = l_Lean_Name_mkStr4(v___y_1959_, v___y_1948_, v___x_2022_, v___x_2023_);
v___x_2025_ = l_Lean_Syntax_node2(v___y_1946_, v___x_2024_, v___y_1966_, v___y_1966_);
v_ref_2026_ = l_Lean_replaceRef(v_fields_1932_, v___y_1979_);
lean_inc(v_ref_2026_);
lean_inc(v___y_1952_);
lean_inc(v___y_1977_);
lean_inc(v___y_1950_);
v___x_2027_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2027_, 0, v___y_1950_);
lean_ctor_set(v___x_2027_, 1, v___y_1969_);
lean_ctor_set(v___x_2027_, 2, v___y_1956_);
lean_ctor_set(v___x_2027_, 3, v___y_1977_);
lean_ctor_set(v___x_2027_, 4, v___y_1952_);
lean_ctor_set(v___x_2027_, 5, v_ref_2026_);
v___x_2028_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1930_, v_ref_2026_, v___x_2027_, v___y_1968_);
lean_dec_ref_known(v___x_2027_, 6);
lean_dec(v_ref_2026_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v_a_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2091_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc_n(v_a_2029_, 30);
v_a_2030_ = lean_ctor_get(v___x_2028_, 1);
lean_inc(v_a_2030_);
lean_dec_ref_known(v___x_2028_, 2);
lean_inc(v___y_1966_);
lean_inc_n(v___y_1946_, 2);
v___x_2031_ = l_Lean_Syntax_node4(v___y_1946_, v___x_2012_, v___x_2013_, v___x_2021_, v___x_2025_, v___y_1966_);
v___x_2032_ = l_Lean_Syntax_node6(v___y_1946_, v___x_1987_, v___x_1990_, v___x_1991_, v___y_1966_, v___x_1993_, v___x_2010_, v___x_2031_);
lean_inc(v___y_1944_);
v___x_2033_ = l_Lean_Syntax_node2(v___y_1946_, v___y_1944_, v___x_1985_, v___x_2032_);
v___x_2034_ = lean_array_push(v___y_1945_, v___x_2033_);
v___x_2035_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20));
lean_inc_ref(v___y_1948_);
lean_inc_ref(v___y_1959_);
v___x_2036_ = l_Lean_Name_mkStr4(v___y_1959_, v___y_1948_, v___y_1958_, v___x_2035_);
v___x_2037_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21));
v___x_2038_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2038_, 0, v_a_2029_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23);
v___x_2040_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24));
lean_inc_n(v___y_1956_, 5);
lean_inc_n(v___y_1969_, 5);
v___x_2041_ = l_Lean_addMacroScope(v___y_1969_, v___x_2040_, v___y_1956_);
lean_inc_n(v___y_1949_, 5);
v___x_2042_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2042_, 0, v_a_2029_);
lean_ctor_set(v___x_2042_, 1, v___x_2039_);
lean_ctor_set(v___x_2042_, 2, v___x_2041_);
lean_ctor_set(v___x_2042_, 3, v___y_1949_);
lean_inc_ref(v___y_1962_);
lean_inc_n(v___y_1978_, 7);
v___x_2043_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2043_, 0, v_a_2029_);
lean_ctor_set(v___x_2043_, 1, v___y_1978_);
lean_ctor_set(v___x_2043_, 2, v___y_1962_);
lean_inc_ref(v___y_1971_);
v___x_2044_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2044_, 0, v_a_2029_);
lean_ctor_set(v___x_2044_, 1, v___y_1971_);
v___x_2045_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29);
v___x_2046_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30));
v___x_2047_ = l_Lean_addMacroScope(v___y_1969_, v___x_2046_, v___y_1956_);
v___x_2048_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2048_, 0, v_a_2029_);
lean_ctor_set(v___x_2048_, 1, v___x_2045_);
lean_ctor_set(v___x_2048_, 2, v___x_2047_);
lean_ctor_set(v___x_2048_, 3, v___y_1949_);
lean_inc_ref_n(v___x_2043_, 17);
lean_inc_n(v___y_1951_, 2);
v___x_2049_ = l_Lean_Syntax_node2(v_a_2029_, v___y_1951_, v___x_2048_, v___x_2043_);
lean_inc_ref(v___y_1947_);
v___x_2050_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2050_, 0, v_a_2029_);
lean_ctor_set(v___x_2050_, 1, v___y_1947_);
lean_inc_ref_n(v___x_2050_, 2);
lean_inc_n(v___y_1963_, 2);
v___x_2051_ = l_Lean_Syntax_node3(v_a_2029_, v___y_1963_, v___x_2050_, v___x_2043_, v___y_1967_);
v___x_2052_ = l_Lean_Syntax_node3(v_a_2029_, v___y_1978_, v___x_2043_, v___x_2043_, v___x_2051_);
lean_inc_n(v___y_1973_, 2);
v___x_2053_ = l_Lean_Syntax_node2(v_a_2029_, v___y_1973_, v___x_2049_, v___x_2052_);
v___x_2054_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33);
v___x_2055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34));
v___x_2056_ = l_Lean_addMacroScope(v___y_1969_, v___x_2055_, v___y_1956_);
v___x_2057_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2057_, 0, v_a_2029_);
lean_ctor_set(v___x_2057_, 1, v___x_2054_);
lean_ctor_set(v___x_2057_, 2, v___x_2056_);
lean_ctor_set(v___x_2057_, 3, v___y_1949_);
v___x_2058_ = l_Lean_Syntax_node2(v_a_2029_, v___y_1951_, v___x_2057_, v___x_2043_);
lean_inc(v___y_1972_);
v___x_2059_ = l_Lean_Syntax_node3(v_a_2029_, v___y_1963_, v___x_2050_, v___x_2043_, v___y_1972_);
v___x_2060_ = l_Lean_Syntax_node3(v_a_2029_, v___y_1978_, v___x_2043_, v___x_2043_, v___x_2059_);
v___x_2061_ = l_Lean_Syntax_node2(v_a_2029_, v___y_1973_, v___x_2058_, v___x_2060_);
v___x_2062_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__36);
v___x_2063_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__37));
v___x_2064_ = l_Lean_addMacroScope(v___y_1969_, v___x_2063_, v___y_1956_);
v___x_2065_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2065_, 0, v_a_2029_);
lean_ctor_set(v___x_2065_, 1, v___x_2062_);
lean_ctor_set(v___x_2065_, 2, v___x_2064_);
lean_ctor_set(v___x_2065_, 3, v___y_1949_);
v___x_2066_ = l_Lean_Syntax_node2(v_a_2029_, v___y_1951_, v___x_2065_, v___x_2043_);
v___x_2067_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__2);
v___x_2068_ = l_Lean_Syntax_node3(v_a_2029_, v___y_1963_, v___x_2050_, v___x_2043_, v___x_2067_);
v___x_2069_ = l_Lean_Syntax_node3(v_a_2029_, v___y_1978_, v___x_2043_, v___x_2043_, v___x_2068_);
v___x_2070_ = l_Lean_Syntax_node2(v_a_2029_, v___y_1973_, v___x_2066_, v___x_2069_);
v___x_2071_ = l_Lean_Syntax_node6(v_a_2029_, v___y_1978_, v___x_2053_, v___x_2043_, v___x_2061_, v___x_2043_, v___x_2070_, v___x_2043_);
v___x_2072_ = l_Lean_Syntax_node1(v_a_2029_, v___y_1964_, v___x_2071_);
v___x_2073_ = l_Lean_Syntax_node1(v_a_2029_, v___y_1954_, v___x_2043_);
lean_inc_ref(v___y_1955_);
v___x_2074_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2074_, 0, v_a_2029_);
lean_ctor_set(v___x_2074_, 1, v___y_1955_);
v___x_2075_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43));
v___x_2076_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44);
v___x_2077_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45));
v___x_2078_ = l_Lean_addMacroScope(v___y_1969_, v___x_2077_, v___y_1956_);
lean_inc_ref(v___y_1957_);
v___x_2079_ = l_Lean_Name_mkStr2(v___y_1957_, v___x_2075_);
lean_inc(v___y_1965_);
lean_inc(v___x_2079_);
v___x_2080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
lean_ctor_set(v___x_2080_, 1, v___y_1965_);
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2079_);
v___x_2082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
lean_ctor_set(v___x_2082_, 1, v___y_1949_);
v___x_2083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2080_);
lean_ctor_set(v___x_2083_, 1, v___x_2082_);
v___x_2084_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2084_, 0, v_a_2029_);
lean_ctor_set(v___x_2084_, 1, v___x_2076_);
lean_ctor_set(v___x_2084_, 2, v___x_2078_);
lean_ctor_set(v___x_2084_, 3, v___x_2083_);
v___x_2085_ = l_Lean_Syntax_node2(v_a_2029_, v___y_1978_, v___x_2074_, v___x_2084_);
lean_inc_ref(v___y_1943_);
v___x_2086_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2086_, 0, v_a_2029_);
lean_ctor_set(v___x_2086_, 1, v___y_1943_);
v___x_2087_ = l_Lean_Syntax_node6(v_a_2029_, v___y_1976_, v___x_2044_, v___x_2043_, v___x_2072_, v___x_2073_, v___x_2085_, v___x_2086_);
v___x_2088_ = l_Lean_Syntax_node1(v_a_2029_, v___y_1978_, v___x_2087_);
v___x_2089_ = l_Lean_Syntax_node5(v_a_2029_, v___x_2036_, v_fields_1932_, v___x_2038_, v___x_2042_, v___x_2043_, v___x_2088_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 1, v___x_2089_);
lean_ctor_set(v___x_1934_, 0, v___x_2034_);
v___x_2091_ = v___x_1934_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2034_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v___x_2089_);
v___x_2091_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
lean_object* v___x_2092_; uint8_t v___x_2093_; 
v___x_2092_ = lean_unsigned_to_nat(1u);
v___x_2093_ = lean_nat_dec_lt(v___x_2092_, v___y_1980_);
if (v___x_2093_ == 0)
{
lean_dec(v___y_1980_);
lean_dec(v___y_1972_);
lean_dec(v___y_1953_);
v_a_1921_ = v___x_2091_;
v_a_1922_ = v_a_2030_;
goto v___jp_1920_;
}
else
{
uint8_t v___x_2094_; 
v___x_2094_ = lean_nat_dec_le(v___y_1980_, v___y_1980_);
if (v___x_2094_ == 0)
{
if (v___x_2093_ == 0)
{
lean_dec(v___y_1980_);
lean_dec(v___y_1972_);
lean_dec(v___y_1953_);
v_a_1921_ = v___x_2091_;
v_a_1922_ = v_a_2030_;
goto v___jp_1920_;
}
else
{
size_t v___x_2095_; size_t v___x_2096_; lean_object* v___x_2097_; 
v___x_2095_ = ((size_t)1ULL);
v___x_2096_ = lean_usize_of_nat(v___y_1980_);
lean_dec(v___y_1980_);
lean_inc(v_vis_x3f_1912_);
lean_inc(v_type_1939_);
lean_inc(v_structTy_1910_);
v___x_2097_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2(v_structTy_1910_, v_type_1939_, v___y_1953_, v___y_1972_, v_vis_x3f_1912_, v_structId_1913_, v_ids_1938_, v___x_2095_, v___x_2096_, v___x_2091_, v___y_1918_, v_a_2030_);
v___y_1927_ = v___x_2097_;
goto v___jp_1926_;
}
}
else
{
size_t v___x_2098_; size_t v___x_2099_; lean_object* v___x_2100_; 
v___x_2098_ = ((size_t)1ULL);
v___x_2099_ = lean_usize_of_nat(v___y_1980_);
lean_dec(v___y_1980_);
lean_inc(v_vis_x3f_1912_);
lean_inc(v_type_1939_);
lean_inc(v_structTy_1910_);
v___x_2100_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2(v_structTy_1910_, v_type_1939_, v___y_1953_, v___y_1972_, v_vis_x3f_1912_, v_structId_1913_, v_ids_1938_, v___x_2098_, v___x_2099_, v___x_2091_, v___y_1918_, v_a_2030_);
v___y_1927_ = v___x_2100_;
goto v___jp_1926_;
}
}
}
}
else
{
lean_object* v_a_2102_; lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec(v___x_2025_);
lean_dec(v___x_2021_);
lean_dec_ref_known(v___x_2013_, 2);
lean_dec(v___x_2012_);
lean_dec(v___x_2010_);
lean_dec(v___x_1993_);
lean_dec_ref_known(v___x_1991_, 2);
lean_dec(v___x_1990_);
lean_dec(v___x_1987_);
lean_dec(v___x_1985_);
lean_dec(v___y_1980_);
lean_dec(v___y_1976_);
lean_dec(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec(v___y_1951_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_del_object(v___x_1934_);
lean_dec(v_fields_1932_);
lean_dec(v_vis_x3f_1912_);
lean_dec(v___x_1911_);
lean_dec(v_structTy_1910_);
v_a_2102_ = lean_ctor_get(v___x_2028_, 0);
v_a_2103_ = lean_ctor_get(v___x_2028_, 1);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2028_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_inc(v_a_2102_);
lean_dec(v___x_2028_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2102_);
lean_ctor_set(v_reuseFailAlloc_2109_, 1, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
v___jp_2111_:
{
lean_object* v___x_2150_; 
v___x_2150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1930_, v___y_2146_, v___y_1918_, v___y_1919_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v_a_2151_; lean_object* v_a_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc_n(v_a_2151_, 2);
v_a_2152_ = lean_ctor_get(v___x_2150_, 1);
lean_inc(v_a_2152_);
lean_dec_ref_known(v___x_2150_, 2);
v___x_2153_ = l_Lean_mkIdentFrom(v___y_2135_, v___y_2149_, v___x_1930_);
lean_dec(v___y_2135_);
lean_inc_ref(v___y_2130_);
lean_inc(v___y_2145_);
v___x_2154_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2154_, 0, v_a_2151_);
lean_ctor_set(v___x_2154_, 1, v___y_2145_);
lean_ctor_set(v___x_2154_, 2, v___y_2130_);
if (lean_obj_tag(v_vis_x3f_1912_) == 1)
{
lean_object* v_val_2155_; lean_object* v___x_2156_; 
v_val_2155_ = lean_ctor_get(v_vis_x3f_1912_, 0);
lean_inc(v_val_2155_);
v___x_2156_ = l_Array_mkArray1___redArg(v_val_2155_);
v___y_1943_ = v___y_2113_;
v___y_1944_ = v___y_2112_;
v___y_1945_ = v___y_2114_;
v___y_1946_ = v_a_2151_;
v___y_1947_ = v___y_2115_;
v___y_1948_ = v___y_2117_;
v___y_1949_ = v___y_2116_;
v___y_1950_ = v___y_2118_;
v___y_1951_ = v___y_2119_;
v___y_1952_ = v___y_2120_;
v___y_1953_ = v___y_2121_;
v___y_1954_ = v___y_2122_;
v___y_1955_ = v___y_2123_;
v___y_1956_ = v___y_2124_;
v___y_1957_ = v___y_2125_;
v___y_1958_ = v___y_2126_;
v___y_1959_ = v___y_2127_;
v___y_1960_ = v___y_2128_;
v___y_1961_ = v___y_2129_;
v___y_1962_ = v___y_2130_;
v___y_1963_ = v___y_2131_;
v___y_1964_ = v___y_2132_;
v___y_1965_ = v___y_2133_;
v___y_1966_ = v___x_2154_;
v___y_1967_ = v___y_2134_;
v___y_1968_ = v_a_2152_;
v___y_1969_ = v___y_2136_;
v___y_1970_ = v___x_2153_;
v___y_1971_ = v___y_2137_;
v___y_1972_ = v___y_2138_;
v___y_1973_ = v___y_2141_;
v___y_1974_ = v___y_2140_;
v___y_1975_ = v___y_2142_;
v___y_1976_ = v___y_2144_;
v___y_1977_ = v___y_2143_;
v___y_1978_ = v___y_2145_;
v___y_1979_ = v___y_2146_;
v___y_1980_ = v___y_2148_;
v___y_1981_ = v___y_2147_;
v___y_1982_ = v___x_2156_;
goto v___jp_1942_;
}
else
{
lean_object* v___x_2157_; 
v___x_2157_ = lean_mk_empty_array_with_capacity(v___y_2139_);
v___y_1943_ = v___y_2113_;
v___y_1944_ = v___y_2112_;
v___y_1945_ = v___y_2114_;
v___y_1946_ = v_a_2151_;
v___y_1947_ = v___y_2115_;
v___y_1948_ = v___y_2117_;
v___y_1949_ = v___y_2116_;
v___y_1950_ = v___y_2118_;
v___y_1951_ = v___y_2119_;
v___y_1952_ = v___y_2120_;
v___y_1953_ = v___y_2121_;
v___y_1954_ = v___y_2122_;
v___y_1955_ = v___y_2123_;
v___y_1956_ = v___y_2124_;
v___y_1957_ = v___y_2125_;
v___y_1958_ = v___y_2126_;
v___y_1959_ = v___y_2127_;
v___y_1960_ = v___y_2128_;
v___y_1961_ = v___y_2129_;
v___y_1962_ = v___y_2130_;
v___y_1963_ = v___y_2131_;
v___y_1964_ = v___y_2132_;
v___y_1965_ = v___y_2133_;
v___y_1966_ = v___x_2154_;
v___y_1967_ = v___y_2134_;
v___y_1968_ = v_a_2152_;
v___y_1969_ = v___y_2136_;
v___y_1970_ = v___x_2153_;
v___y_1971_ = v___y_2137_;
v___y_1972_ = v___y_2138_;
v___y_1973_ = v___y_2141_;
v___y_1974_ = v___y_2140_;
v___y_1975_ = v___y_2142_;
v___y_1976_ = v___y_2144_;
v___y_1977_ = v___y_2143_;
v___y_1978_ = v___y_2145_;
v___y_1979_ = v___y_2146_;
v___y_1980_ = v___y_2148_;
v___y_1981_ = v___y_2147_;
v___y_1982_ = v___x_2157_;
goto v___jp_1942_;
}
}
else
{
lean_object* v_a_2158_; lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec(v___y_2144_);
lean_dec(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec(v___y_2138_);
lean_dec(v___y_2135_);
lean_dec(v___y_2134_);
lean_dec(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec(v___y_2119_);
lean_dec_ref(v___y_2114_);
lean_del_object(v___x_1934_);
lean_dec(v_fields_1932_);
lean_dec(v_vis_x3f_1912_);
lean_dec(v___x_1911_);
lean_dec(v_structTy_1910_);
v_a_2158_ = lean_ctor_get(v___x_2150_, 0);
v_a_2159_ = lean_ctor_get(v___x_2150_, 1);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2150_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_inc(v_a_2158_);
lean_dec(v___x_2150_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2158_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
v___jp_2167_:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v_ref_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
lean_inc_ref(v___y_2189_);
v___x_2206_ = l_Array_append___redArg(v___y_2189_, v___y_2205_);
lean_dec_ref(v___y_2205_);
lean_inc_n(v___y_2202_, 4);
lean_inc_n(v___y_2181_, 18);
v___x_2207_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2207_, 0, v___y_2181_);
lean_ctor_set(v___x_2207_, 1, v___y_2202_);
lean_ctor_set(v___x_2207_, 2, v___x_2206_);
lean_inc_n(v___y_2180_, 11);
lean_inc(v___y_2204_);
v___x_2208_ = l_Lean_Syntax_node7(v___y_2181_, v___y_2204_, v___y_2180_, v___y_2180_, v___x_2207_, v___y_2180_, v___y_2180_, v___y_2180_, v___y_2180_);
v___x_2209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0));
lean_inc_ref_n(v___y_2199_, 3);
lean_inc_ref_n(v___y_2172_, 6);
lean_inc_ref_n(v___y_2186_, 6);
v___x_2210_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___y_2199_, v___x_2209_);
v___x_2211_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__1));
lean_inc_ref_n(v___y_2185_, 2);
v___x_2212_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___y_2185_, v___x_2211_);
v___x_2213_ = l_Lean_Syntax_node1(v___y_2181_, v___x_2212_, v___y_2180_);
v___x_2214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___y_2181_);
lean_ctor_set(v___x_2214_, 1, v___x_2209_);
v___x_2215_ = l_Lean_Syntax_node2(v___y_2181_, v___y_2187_, v___y_2184_, v___y_2180_);
v___x_2216_ = l_Lean_Syntax_node1(v___y_2181_, v___y_2202_, v___x_2215_);
v___x_2217_ = ((lean_object*)(l_Lake_configField___closed__27));
v___x_2218_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___y_2199_, v___x_2217_);
lean_inc_ref(v___y_2179_);
v___x_2219_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2219_, 0, v___y_2181_);
lean_ctor_set(v___x_2219_, 1, v___y_2179_);
v___x_2220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__3));
v___x_2221_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__4);
v___x_2222_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__5));
lean_inc_n(v___y_2182_, 2);
lean_inc_n(v___y_2194_, 2);
v___x_2223_ = l_Lean_addMacroScope(v___y_2194_, v___x_2222_, v___y_2182_);
lean_inc_ref(v___y_2183_);
v___x_2224_ = l_Lean_Name_mkStr2(v___y_2183_, v___x_2220_);
lean_inc(v___y_2192_);
lean_inc(v___x_2224_);
v___x_2225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
lean_ctor_set(v___x_2225_, 1, v___y_2192_);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2224_);
lean_inc(v___y_2173_);
v___x_2227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
lean_ctor_set(v___x_2227_, 1, v___y_2173_);
v___x_2228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2225_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2229_, 0, v___y_2181_);
lean_ctor_set(v___x_2229_, 1, v___x_2221_);
lean_ctor_set(v___x_2229_, 2, v___x_2223_);
lean_ctor_set(v___x_2229_, 3, v___x_2228_);
lean_inc(v_type_1939_);
lean_inc(v_structTy_1910_);
v___x_2230_ = l_Lean_Syntax_node2(v___y_2181_, v___y_2202_, v_structTy_1910_, v_type_1939_);
lean_inc(v___y_2188_);
v___x_2231_ = l_Lean_Syntax_node2(v___y_2181_, v___y_2188_, v___x_2229_, v___x_2230_);
v___x_2232_ = l_Lean_Syntax_node2(v___y_2181_, v___y_2198_, v___x_2219_, v___x_2231_);
v___x_2233_ = l_Lean_Syntax_node2(v___y_2181_, v___x_2218_, v___y_2180_, v___x_2232_);
v___x_2234_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13));
v___x_2235_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___y_2199_, v___x_2234_);
lean_inc_ref(v___y_2171_);
v___x_2236_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2236_, 0, v___y_2181_);
lean_ctor_set(v___x_2236_, 1, v___y_2171_);
v___x_2237_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__15));
v___x_2238_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___y_2185_, v___x_2237_);
v___x_2239_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16));
v___x_2240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2240_, 0, v___y_2181_);
lean_ctor_set(v___x_2240_, 1, v___x_2239_);
v___x_2241_ = l_Lean_Syntax_node1(v___y_2181_, v___y_2202_, v___y_2176_);
v___x_2242_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17));
v___x_2243_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2243_, 0, v___y_2181_);
lean_ctor_set(v___x_2243_, 1, v___x_2242_);
v___x_2244_ = l_Lean_Syntax_node3(v___y_2181_, v___x_2238_, v___x_2240_, v___x_2241_, v___x_2243_);
v___x_2245_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__18));
v___x_2246_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__19));
v___x_2247_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___x_2245_, v___x_2246_);
v___x_2248_ = l_Lean_Syntax_node2(v___y_2181_, v___x_2247_, v___y_2180_, v___y_2180_);
v_ref_2249_ = l_Lean_replaceRef(v_fields_1932_, v___y_2203_);
lean_inc(v_ref_2249_);
lean_inc(v___y_2177_);
lean_inc(v___y_2201_);
lean_inc(v___y_2174_);
v___x_2250_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2250_, 0, v___y_2174_);
lean_ctor_set(v___x_2250_, 1, v___y_2194_);
lean_ctor_set(v___x_2250_, 2, v___y_2182_);
lean_ctor_set(v___x_2250_, 3, v___y_2201_);
lean_ctor_set(v___x_2250_, 4, v___y_2177_);
lean_ctor_set(v___x_2250_, 5, v_ref_2249_);
v___x_2251_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1930_, v_ref_2249_, v___x_2250_, v___y_2193_);
lean_dec_ref_known(v___x_2250_, 6);
lean_dec(v_ref_2249_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v_a_2252_; lean_object* v_a_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v_ref_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v_a_2252_ = lean_ctor_get(v___x_2251_, 0);
lean_inc_n(v_a_2252_, 14);
v_a_2253_ = lean_ctor_get(v___x_2251_, 1);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2251_, 2);
v___x_2254_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__20));
lean_inc_ref_n(v___y_2185_, 2);
lean_inc_ref_n(v___y_2172_, 5);
lean_inc_ref_n(v___y_2186_, 7);
v___x_2255_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___y_2185_, v___x_2254_);
v___x_2256_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__21));
v___x_2257_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2257_, 0, v_a_2252_);
lean_ctor_set(v___x_2257_, 1, v___x_2256_);
v___x_2258_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__7);
v___x_2259_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__8));
lean_inc_n(v___y_2182_, 4);
lean_inc_n(v___y_2194_, 4);
v___x_2260_ = l_Lean_addMacroScope(v___y_2194_, v___x_2259_, v___y_2182_);
lean_inc_n(v___y_2173_, 3);
v___x_2261_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2261_, 0, v_a_2252_);
lean_ctor_set(v___x_2261_, 1, v___x_2258_);
lean_ctor_set(v___x_2261_, 2, v___x_2260_);
lean_ctor_set(v___x_2261_, 3, v___y_2173_);
lean_inc_ref(v___y_2189_);
lean_inc_n(v___y_2202_, 3);
v___x_2262_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2262_, 0, v_a_2252_);
lean_ctor_set(v___x_2262_, 1, v___y_2202_);
lean_ctor_set(v___x_2262_, 2, v___y_2189_);
v___x_2263_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__9));
v___x_2264_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___y_2185_, v___x_2263_);
v___x_2265_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__10));
v___x_2266_ = l_Lean_Name_mkStr4(v___y_2186_, v___y_2172_, v___y_2185_, v___x_2265_);
v___x_2267_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__11));
v___x_2268_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2268_, 0, v_a_2252_);
lean_ctor_set(v___x_2268_, 1, v___x_2267_);
v___x_2269_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__13));
v___x_2270_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__15);
v___x_2271_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16);
v___x_2272_ = l_Lean_addMacroScope(v___y_2194_, v___x_2271_, v___y_2182_);
lean_inc_ref_n(v___y_2183_, 2);
v___x_2273_ = l_Lean_Name_mkStr1(v___y_2183_);
v___x_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2273_);
lean_inc_ref(v___y_2199_);
v___x_2275_ = l_Lean_Name_mkStr3(v___y_2186_, v___y_2172_, v___y_2199_);
v___x_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
v___x_2277_ = l_Lean_Name_mkStr2(v___y_2186_, v___y_2172_);
v___x_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
v___x_2279_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__17));
v___x_2280_ = l_Lean_Name_mkStr2(v___y_2186_, v___x_2279_);
v___x_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
v___x_2282_ = l_Lean_Name_mkStr1(v___y_2186_);
v___x_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
v___x_2284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
lean_ctor_set(v___x_2284_, 1, v___y_2173_);
v___x_2285_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2281_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2278_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2276_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v___x_2288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2274_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2289_, 0, v_a_2252_);
lean_ctor_set(v___x_2289_, 1, v___x_2270_);
lean_ctor_set(v___x_2289_, 2, v___x_2272_);
lean_ctor_set(v___x_2289_, 3, v___x_2288_);
v___x_2290_ = l_Lean_Syntax_node1(v_a_2252_, v___x_2269_, v___x_2289_);
v___x_2291_ = l_Lean_Syntax_node2(v_a_2252_, v___x_2266_, v___x_2268_, v___x_2290_);
v___x_2292_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__19);
v___x_2293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20));
v___x_2294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__21));
v___x_2295_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__22));
v___x_2296_ = l_Lean_addMacroScope(v___y_2194_, v___x_2295_, v___y_2182_);
v___x_2297_ = l_Lean_Name_mkStr3(v___y_2183_, v___x_2293_, v___x_2294_);
lean_inc(v___y_2192_);
v___x_2298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
lean_ctor_set(v___x_2298_, 1, v___y_2192_);
v___x_2299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
lean_ctor_set(v___x_2299_, 1, v___y_2173_);
v___x_2300_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2300_, 0, v_a_2252_);
lean_ctor_set(v___x_2300_, 1, v___x_2292_);
lean_ctor_set(v___x_2300_, 2, v___x_2296_);
lean_ctor_set(v___x_2300_, 3, v___x_2299_);
lean_inc(v_type_1939_);
v___x_2301_ = l_Lean_Syntax_node1(v_a_2252_, v___y_2202_, v_type_1939_);
v___x_2302_ = l_Lean_Syntax_node2(v_a_2252_, v___y_2188_, v___x_2300_, v___x_2301_);
v___x_2303_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__23));
v___x_2304_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2304_, 0, v_a_2252_);
lean_ctor_set(v___x_2304_, 1, v___x_2303_);
v___x_2305_ = l_Lean_Syntax_node3(v_a_2252_, v___x_2264_, v___x_2291_, v___x_2302_, v___x_2304_);
v___x_2306_ = l_Lean_Syntax_node1(v_a_2252_, v___y_2202_, v___x_2305_);
lean_inc(v___x_2255_);
v___x_2307_ = l_Lean_Syntax_node5(v_a_2252_, v___x_2255_, v_fields_1932_, v___x_2257_, v___x_2261_, v___x_2262_, v___x_2306_);
v_ref_2308_ = l_Lean_replaceRef(v___x_2307_, v___y_2203_);
lean_inc(v_ref_2308_);
lean_inc(v___y_2177_);
lean_inc(v___y_2201_);
lean_inc(v___y_2174_);
v___x_2309_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2309_, 0, v___y_2174_);
lean_ctor_set(v___x_2309_, 1, v___y_2194_);
lean_ctor_set(v___x_2309_, 2, v___y_2182_);
lean_ctor_set(v___x_2309_, 3, v___y_2201_);
lean_ctor_set(v___x_2309_, 4, v___y_2177_);
lean_ctor_set(v___x_2309_, 5, v_ref_2308_);
v___x_2310_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1930_, v_ref_2308_, v___x_2309_, v_a_2253_);
lean_dec_ref_known(v___x_2309_, 6);
lean_dec(v_ref_2308_);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; lean_object* v_a_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
lean_inc_n(v_a_2311_, 29);
v_a_2312_ = lean_ctor_get(v___x_2310_, 1);
lean_inc(v_a_2312_);
lean_dec_ref_known(v___x_2310_, 2);
lean_inc(v___y_2180_);
lean_inc_n(v___y_2181_, 2);
v___x_2313_ = l_Lean_Syntax_node4(v___y_2181_, v___x_2235_, v___x_2236_, v___x_2244_, v___x_2248_, v___y_2180_);
v___x_2314_ = l_Lean_Syntax_node6(v___y_2181_, v___x_2210_, v___x_2213_, v___x_2214_, v___y_2180_, v___x_2216_, v___x_2233_, v___x_2313_);
lean_inc(v___y_2169_);
v___x_2315_ = l_Lean_Syntax_node2(v___y_2181_, v___y_2169_, v___x_2208_, v___x_2314_);
v___x_2316_ = lean_array_push(v___y_2170_, v___x_2315_);
v___x_2317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2317_, 0, v_a_2311_);
lean_ctor_set(v___x_2317_, 1, v___x_2256_);
v___x_2318_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__23);
v___x_2319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__24));
lean_inc_n(v___y_2182_, 6);
lean_inc_n(v___y_2194_, 6);
v___x_2320_ = l_Lean_addMacroScope(v___y_2194_, v___x_2319_, v___y_2182_);
lean_inc_n(v___y_2173_, 6);
v___x_2321_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2321_, 0, v_a_2311_);
lean_ctor_set(v___x_2321_, 1, v___x_2318_);
lean_ctor_set(v___x_2321_, 2, v___x_2320_);
lean_ctor_set(v___x_2321_, 3, v___y_2173_);
lean_inc_ref(v___y_2189_);
lean_inc_n(v___y_2202_, 6);
v___x_2322_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2322_, 0, v_a_2311_);
lean_ctor_set(v___x_2322_, 1, v___y_2202_);
lean_ctor_set(v___x_2322_, 2, v___y_2189_);
lean_inc_ref(v___y_2195_);
v___x_2323_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2323_, 0, v_a_2311_);
lean_ctor_set(v___x_2323_, 1, v___y_2195_);
v___x_2324_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__29);
v___x_2325_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__30));
v___x_2326_ = l_Lean_addMacroScope(v___y_2194_, v___x_2325_, v___y_2182_);
v___x_2327_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2327_, 0, v_a_2311_);
lean_ctor_set(v___x_2327_, 1, v___x_2324_);
lean_ctor_set(v___x_2327_, 2, v___x_2326_);
lean_ctor_set(v___x_2327_, 3, v___y_2173_);
lean_inc_ref_n(v___x_2322_, 14);
lean_inc_n(v___y_2175_, 2);
v___x_2328_ = l_Lean_Syntax_node2(v_a_2311_, v___y_2175_, v___x_2327_, v___x_2322_);
lean_inc_ref(v___y_2171_);
v___x_2329_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2329_, 0, v_a_2311_);
lean_ctor_set(v___x_2329_, 1, v___y_2171_);
lean_inc_ref(v___x_2329_);
lean_inc(v___y_2190_);
v___x_2330_ = l_Lean_Syntax_node3(v_a_2311_, v___y_2190_, v___x_2329_, v___x_2322_, v___y_2196_);
v___x_2331_ = l_Lean_Syntax_node3(v_a_2311_, v___y_2202_, v___x_2322_, v___x_2322_, v___x_2330_);
lean_inc(v___x_2331_);
lean_inc_n(v___y_2197_, 2);
v___x_2332_ = l_Lean_Syntax_node2(v_a_2311_, v___y_2197_, v___x_2328_, v___x_2331_);
v___x_2333_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__33);
v___x_2334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__34));
v___x_2335_ = l_Lean_addMacroScope(v___y_2194_, v___x_2334_, v___y_2182_);
v___x_2336_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2336_, 0, v_a_2311_);
lean_ctor_set(v___x_2336_, 1, v___x_2333_);
lean_ctor_set(v___x_2336_, 2, v___x_2335_);
lean_ctor_set(v___x_2336_, 3, v___y_2173_);
v___x_2337_ = l_Lean_Syntax_node2(v_a_2311_, v___y_2175_, v___x_2336_, v___x_2322_);
v___x_2338_ = l_Lean_Syntax_node2(v_a_2311_, v___y_2197_, v___x_2337_, v___x_2331_);
v___x_2339_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__25);
v___x_2340_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__26));
v___x_2341_ = l_Lean_addMacroScope(v___y_2194_, v___x_2340_, v___y_2182_);
v___x_2342_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2342_, 0, v_a_2311_);
lean_ctor_set(v___x_2342_, 1, v___x_2339_);
lean_ctor_set(v___x_2342_, 2, v___x_2341_);
lean_ctor_set(v___x_2342_, 3, v___y_2173_);
v___x_2343_ = l_Lean_Syntax_node2(v_a_2311_, v___y_2175_, v___x_2342_, v___x_2322_);
v___x_2344_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__27);
v___x_2345_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__28));
v___x_2346_ = l_Lean_addMacroScope(v___y_2194_, v___x_2345_, v___y_2182_);
v___x_2347_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__1));
lean_inc_n(v___y_2192_, 2);
v___x_2348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
lean_ctor_set(v___x_2348_, 1, v___y_2192_);
v___x_2349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
lean_ctor_set(v___x_2349_, 1, v___y_2173_);
v___x_2350_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2350_, 0, v_a_2311_);
lean_ctor_set(v___x_2350_, 1, v___x_2344_);
lean_ctor_set(v___x_2350_, 2, v___x_2346_);
lean_ctor_set(v___x_2350_, 3, v___x_2349_);
v___x_2351_ = l_Lean_Syntax_node3(v_a_2311_, v___y_2190_, v___x_2329_, v___x_2322_, v___x_2350_);
v___x_2352_ = l_Lean_Syntax_node3(v_a_2311_, v___y_2202_, v___x_2322_, v___x_2322_, v___x_2351_);
v___x_2353_ = l_Lean_Syntax_node2(v_a_2311_, v___y_2197_, v___x_2343_, v___x_2352_);
v___x_2354_ = l_Lean_Syntax_node6(v_a_2311_, v___y_2202_, v___x_2332_, v___x_2322_, v___x_2338_, v___x_2322_, v___x_2353_, v___x_2322_);
v___x_2355_ = l_Lean_Syntax_node1(v_a_2311_, v___y_2191_, v___x_2354_);
v___x_2356_ = l_Lean_Syntax_node1(v_a_2311_, v___y_2178_, v___x_2322_);
lean_inc_ref(v___y_2179_);
v___x_2357_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2357_, 0, v_a_2311_);
lean_ctor_set(v___x_2357_, 1, v___y_2179_);
v___x_2358_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__43));
v___x_2359_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__44);
v___x_2360_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__45));
v___x_2361_ = l_Lean_addMacroScope(v___y_2194_, v___x_2360_, v___y_2182_);
lean_inc_ref(v___y_2183_);
v___x_2362_ = l_Lean_Name_mkStr2(v___y_2183_, v___x_2358_);
lean_inc(v___x_2362_);
v___x_2363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
lean_ctor_set(v___x_2363_, 1, v___y_2192_);
v___x_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2362_);
v___x_2365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
lean_ctor_set(v___x_2365_, 1, v___y_2173_);
v___x_2366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2363_);
lean_ctor_set(v___x_2366_, 1, v___x_2365_);
v___x_2367_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2367_, 0, v_a_2311_);
lean_ctor_set(v___x_2367_, 1, v___x_2359_);
lean_ctor_set(v___x_2367_, 2, v___x_2361_);
lean_ctor_set(v___x_2367_, 3, v___x_2366_);
v___x_2368_ = l_Lean_Syntax_node2(v_a_2311_, v___y_2202_, v___x_2357_, v___x_2367_);
lean_inc_ref(v___y_2168_);
v___x_2369_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2369_, 0, v_a_2311_);
lean_ctor_set(v___x_2369_, 1, v___y_2168_);
v___x_2370_ = l_Lean_Syntax_node6(v_a_2311_, v___y_2200_, v___x_2323_, v___x_2322_, v___x_2355_, v___x_2356_, v___x_2368_, v___x_2369_);
v___x_2371_ = l_Lean_Syntax_node1(v_a_2311_, v___y_2202_, v___x_2370_);
v___x_2372_ = l_Lean_Syntax_node5(v_a_2311_, v___x_2255_, v___x_2307_, v___x_2317_, v___x_2321_, v___x_2322_, v___x_2371_);
v___x_2373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2316_);
lean_ctor_set(v___x_2373_, 1, v___x_2372_);
v_a_1921_ = v___x_2373_;
v_a_1922_ = v_a_2312_;
goto v___jp_1920_;
}
else
{
lean_object* v_a_2374_; lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2382_; 
lean_dec(v___x_2307_);
lean_dec(v___x_2255_);
lean_dec(v___x_2248_);
lean_dec(v___x_2244_);
lean_dec_ref_known(v___x_2236_, 2);
lean_dec(v___x_2235_);
lean_dec(v___x_2233_);
lean_dec(v___x_2216_);
lean_dec_ref_known(v___x_2214_, 2);
lean_dec(v___x_2213_);
lean_dec(v___x_2210_);
lean_dec(v___x_2208_);
lean_dec(v___y_2200_);
lean_dec(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec(v___y_2181_);
lean_dec(v___y_2180_);
lean_dec(v___y_2178_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2170_);
lean_dec(v_vis_x3f_1912_);
lean_dec(v___x_1911_);
lean_dec(v_structTy_1910_);
v_a_2374_ = lean_ctor_get(v___x_2310_, 0);
v_a_2375_ = lean_ctor_get(v___x_2310_, 1);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2377_ = v___x_2310_;
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_inc(v_a_2374_);
lean_dec(v___x_2310_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2380_; 
if (v_isShared_2378_ == 0)
{
v___x_2380_ = v___x_2377_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_a_2374_);
lean_ctor_set(v_reuseFailAlloc_2381_, 1, v_a_2375_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
}
}
else
{
lean_object* v_a_2383_; lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
lean_dec(v___x_2248_);
lean_dec(v___x_2244_);
lean_dec_ref_known(v___x_2236_, 2);
lean_dec(v___x_2235_);
lean_dec(v___x_2233_);
lean_dec(v___x_2216_);
lean_dec_ref_known(v___x_2214_, 2);
lean_dec(v___x_2213_);
lean_dec(v___x_2210_);
lean_dec(v___x_2208_);
lean_dec(v___y_2200_);
lean_dec(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec(v___y_2188_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2181_);
lean_dec(v___y_2180_);
lean_dec(v___y_2178_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2170_);
lean_dec(v_fields_1932_);
lean_dec(v_vis_x3f_1912_);
lean_dec(v___x_1911_);
lean_dec(v_structTy_1910_);
v_a_2383_ = lean_ctor_get(v___x_2251_, 0);
v_a_2384_ = lean_ctor_get(v___x_2251_, 1);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2251_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2251_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_inc(v_a_2383_);
lean_dec(v___x_2251_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2383_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_a_2384_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
v___jp_2392_:
{
lean_object* v___x_2427_; 
v___x_2427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__1(v___x_1930_, v___y_2424_, v___y_1918_, v___y_1919_);
if (lean_obj_tag(v___x_2427_) == 0)
{
lean_object* v_a_2428_; lean_object* v_a_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v_a_2428_ = lean_ctor_get(v___x_2427_, 0);
lean_inc_n(v_a_2428_, 2);
v_a_2429_ = lean_ctor_get(v___x_2427_, 1);
lean_inc(v_a_2429_);
lean_dec_ref_known(v___x_2427_, 2);
v___x_2430_ = l_Lean_mkIdentFrom(v_id_1937_, v___y_2426_, v___x_1930_);
lean_inc_ref(v___y_2411_);
lean_inc(v___y_2423_);
v___x_2431_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2431_, 0, v_a_2428_);
lean_ctor_set(v___x_2431_, 1, v___y_2423_);
lean_ctor_set(v___x_2431_, 2, v___y_2411_);
if (lean_obj_tag(v_vis_x3f_1912_) == 1)
{
lean_object* v_val_2432_; lean_object* v___x_2433_; 
v_val_2432_ = lean_ctor_get(v_vis_x3f_1912_, 0);
lean_inc(v_val_2432_);
v___x_2433_ = l_Array_mkArray1___redArg(v_val_2432_);
v___y_2168_ = v___y_2394_;
v___y_2169_ = v___y_2393_;
v___y_2170_ = v___y_2395_;
v___y_2171_ = v___y_2396_;
v___y_2172_ = v___y_2398_;
v___y_2173_ = v___y_2397_;
v___y_2174_ = v___y_2399_;
v___y_2175_ = v___y_2400_;
v___y_2176_ = v___y_2402_;
v___y_2177_ = v___y_2401_;
v___y_2178_ = v___y_2403_;
v___y_2179_ = v___y_2404_;
v___y_2180_ = v___x_2431_;
v___y_2181_ = v_a_2428_;
v___y_2182_ = v___y_2405_;
v___y_2183_ = v___y_2406_;
v___y_2184_ = v___x_2430_;
v___y_2185_ = v___y_2407_;
v___y_2186_ = v___y_2408_;
v___y_2187_ = v___y_2409_;
v___y_2188_ = v___y_2410_;
v___y_2189_ = v___y_2411_;
v___y_2190_ = v___y_2412_;
v___y_2191_ = v___y_2413_;
v___y_2192_ = v___y_2414_;
v___y_2193_ = v_a_2429_;
v___y_2194_ = v___y_2415_;
v___y_2195_ = v___y_2416_;
v___y_2196_ = v___y_2417_;
v___y_2197_ = v___y_2419_;
v___y_2198_ = v___y_2418_;
v___y_2199_ = v___y_2420_;
v___y_2200_ = v___y_2422_;
v___y_2201_ = v___y_2421_;
v___y_2202_ = v___y_2423_;
v___y_2203_ = v___y_2424_;
v___y_2204_ = v___y_2425_;
v___y_2205_ = v___x_2433_;
goto v___jp_2167_;
}
else
{
lean_object* v___x_2434_; 
v___x_2434_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_2168_ = v___y_2394_;
v___y_2169_ = v___y_2393_;
v___y_2170_ = v___y_2395_;
v___y_2171_ = v___y_2396_;
v___y_2172_ = v___y_2398_;
v___y_2173_ = v___y_2397_;
v___y_2174_ = v___y_2399_;
v___y_2175_ = v___y_2400_;
v___y_2176_ = v___y_2402_;
v___y_2177_ = v___y_2401_;
v___y_2178_ = v___y_2403_;
v___y_2179_ = v___y_2404_;
v___y_2180_ = v___x_2431_;
v___y_2181_ = v_a_2428_;
v___y_2182_ = v___y_2405_;
v___y_2183_ = v___y_2406_;
v___y_2184_ = v___x_2430_;
v___y_2185_ = v___y_2407_;
v___y_2186_ = v___y_2408_;
v___y_2187_ = v___y_2409_;
v___y_2188_ = v___y_2410_;
v___y_2189_ = v___y_2411_;
v___y_2190_ = v___y_2412_;
v___y_2191_ = v___y_2413_;
v___y_2192_ = v___y_2414_;
v___y_2193_ = v_a_2429_;
v___y_2194_ = v___y_2415_;
v___y_2195_ = v___y_2416_;
v___y_2196_ = v___y_2417_;
v___y_2197_ = v___y_2419_;
v___y_2198_ = v___y_2418_;
v___y_2199_ = v___y_2420_;
v___y_2200_ = v___y_2422_;
v___y_2201_ = v___y_2421_;
v___y_2202_ = v___y_2423_;
v___y_2203_ = v___y_2424_;
v___y_2204_ = v___y_2425_;
v___y_2205_ = v___x_2434_;
goto v___jp_2167_;
}
}
else
{
lean_object* v_a_2435_; lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2443_; 
lean_dec(v___y_2426_);
lean_dec(v___y_2422_);
lean_dec(v___y_2419_);
lean_dec(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec(v___y_2410_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2407_);
lean_dec(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2395_);
lean_dec(v_fields_1932_);
lean_dec(v_vis_x3f_1912_);
lean_dec(v___x_1911_);
lean_dec(v_structTy_1910_);
v_a_2435_ = lean_ctor_get(v___x_2427_, 0);
v_a_2436_ = lean_ctor_get(v___x_2427_, 1);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2438_ = v___x_2427_;
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_inc(v_a_2435_);
lean_dec(v___x_2427_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2441_; 
if (v_isShared_2439_ == 0)
{
v___x_2441_ = v___x_2438_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_a_2435_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_a_2436_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
v___jp_2445_:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
lean_inc_ref_n(v___y_2446_, 2);
v___x_2463_ = l_Array_append___redArg(v___y_2446_, v___y_2462_);
lean_dec_ref(v___y_2462_);
lean_inc_n(v___y_2458_, 19);
lean_inc_n(v___y_2449_, 69);
v___x_2464_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2464_, 0, v___y_2449_);
lean_ctor_set(v___x_2464_, 1, v___y_2458_);
lean_ctor_set(v___x_2464_, 2, v___x_2463_);
lean_inc_n(v___y_2453_, 35);
lean_inc(v___y_2461_);
v___x_2465_ = l_Lean_Syntax_node7(v___y_2449_, v___y_2461_, v___y_2453_, v___y_2453_, v___x_2464_, v___y_2453_, v___y_2453_, v___y_2453_, v___y_2453_);
v___x_2466_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__29));
lean_inc_ref_n(v___y_2456_, 4);
lean_inc_ref_n(v___y_2448_, 15);
lean_inc_ref_n(v___y_2459_, 15);
v___x_2467_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___y_2456_, v___x_2466_);
v___x_2468_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__30));
v___x_2469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2469_, 0, v___y_2449_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = ((lean_object*)(l_Lake_configDecl___closed__8));
v___x_2471_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___y_2456_, v___x_2470_);
lean_inc(v___y_2454_);
lean_inc(v___x_2471_);
v___x_2472_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2471_, v___y_2454_, v___y_2453_);
v___x_2473_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__31));
v___x_2474_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___y_2456_, v___x_2473_);
v___x_2475_ = ((lean_object*)(l_Lake_configDecl___closed__26));
v___x_2476_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__2));
v___x_2477_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2476_);
v___x_2478_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3));
v___x_2479_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___y_2449_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
v___x_2480_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__4));
v___x_2481_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2480_);
v___x_2482_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__33);
v___x_2483_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__34));
lean_inc_n(v___y_2455_, 8);
lean_inc_n(v___y_2451_, 8);
v___x_2484_ = l_Lean_addMacroScope(v___y_2451_, v___x_2483_, v___y_2455_);
v___x_2485_ = ((lean_object*)(l_Lake_configField___closed__1));
v___x_2486_ = lean_box(0);
v___x_2487_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__39));
v___x_2488_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2488_, 0, v___y_2449_);
lean_ctor_set(v___x_2488_, 1, v___x_2482_);
lean_ctor_set(v___x_2488_, 2, v___x_2484_);
lean_ctor_set(v___x_2488_, 3, v___x_2487_);
lean_inc(v_type_1939_);
lean_inc(v_structTy_1910_);
v___x_2489_ = l_Lean_Syntax_node2(v___y_2449_, v___y_2458_, v_structTy_1910_, v_type_1939_);
lean_inc_n(v___x_2481_, 2);
v___x_2490_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2481_, v___x_2488_, v___x_2489_);
lean_inc(v___x_2477_);
v___x_2491_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2477_, v___x_2479_, v___x_2490_);
v___x_2492_ = l_Lean_Syntax_node1(v___y_2449_, v___y_2458_, v___x_2491_);
v___x_2493_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2474_, v___y_2453_, v___x_2492_);
v___x_2494_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__40));
v___x_2495_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___y_2456_, v___x_2494_);
v___x_2496_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__41));
v___x_2497_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___y_2449_);
lean_ctor_set(v___x_2497_, 1, v___x_2496_);
v___x_2498_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__27));
v___x_2499_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2498_);
v___x_2500_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__0));
v___x_2501_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2500_);
v___x_2502_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__1));
v___x_2503_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2502_);
v___x_2504_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__43);
v___x_2505_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__44));
v___x_2506_ = l_Lean_addMacroScope(v___y_2451_, v___x_2505_, v___y_2455_);
v___x_2507_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__48));
v___x_2508_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2508_, 0, v___y_2449_);
lean_ctor_set(v___x_2508_, 1, v___x_2504_);
lean_ctor_set(v___x_2508_, 2, v___x_2506_);
lean_ctor_set(v___x_2508_, 3, v___x_2507_);
lean_inc_n(v___x_2503_, 5);
v___x_2509_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2503_, v___x_2508_, v___y_2453_);
v___x_2510_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__50);
v___x_2511_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__51));
v___x_2512_ = l_Lean_addMacroScope(v___y_2451_, v___x_2511_, v___y_2455_);
v___x_2513_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2513_, 0, v___y_2449_);
lean_ctor_set(v___x_2513_, 1, v___x_2510_);
lean_ctor_set(v___x_2513_, 2, v___x_2512_);
lean_ctor_set(v___x_2513_, 3, v___x_2486_);
lean_inc_ref_n(v___x_2513_, 3);
v___x_2514_ = l_Lean_Syntax_node1(v___y_2449_, v___y_2458_, v___x_2513_);
v___x_2515_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__31));
v___x_2516_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2515_);
v___x_2517_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14));
v___x_2518_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___y_2449_);
lean_ctor_set(v___x_2518_, 1, v___x_2517_);
v___x_2519_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__52));
v___x_2520_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2519_);
v___x_2521_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__53));
v___x_2522_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___y_2449_);
lean_ctor_set(v___x_2522_, 1, v___x_2521_);
lean_inc_n(v_id_1937_, 3);
v___x_2523_ = l_Lean_Syntax_node3(v___y_2449_, v___x_2520_, v___x_2513_, v___x_2522_, v_id_1937_);
lean_inc(v___x_2523_);
lean_inc_ref_n(v___x_2518_, 5);
lean_inc_n(v___x_2516_, 6);
v___x_2524_ = l_Lean_Syntax_node3(v___y_2449_, v___x_2516_, v___x_2518_, v___y_2453_, v___x_2523_);
lean_inc(v___x_2514_);
v___x_2525_ = l_Lean_Syntax_node3(v___y_2449_, v___y_2458_, v___x_2514_, v___y_2453_, v___x_2524_);
lean_inc_n(v___x_2501_, 6);
v___x_2526_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2501_, v___x_2509_, v___x_2525_);
v___x_2527_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__55);
v___x_2528_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__56));
v___x_2529_ = l_Lean_addMacroScope(v___y_2451_, v___x_2528_, v___y_2455_);
v___x_2530_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__60));
v___x_2531_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2531_, 0, v___y_2449_);
lean_ctor_set(v___x_2531_, 1, v___x_2527_);
lean_ctor_set(v___x_2531_, 2, v___x_2529_);
lean_ctor_set(v___x_2531_, 3, v___x_2530_);
v___x_2532_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2503_, v___x_2531_, v___y_2453_);
v___x_2533_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__62);
v___x_2534_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__63));
v___x_2535_ = l_Lean_addMacroScope(v___y_2451_, v___x_2534_, v___y_2455_);
v___x_2536_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2536_, 0, v___y_2449_);
lean_ctor_set(v___x_2536_, 1, v___x_2533_);
lean_ctor_set(v___x_2536_, 2, v___x_2535_);
lean_ctor_set(v___x_2536_, 3, v___x_2486_);
lean_inc_ref(v___x_2536_);
v___x_2537_ = l_Lean_Syntax_node2(v___y_2449_, v___y_2458_, v___x_2536_, v___x_2513_);
v___x_2538_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__25));
v___x_2539_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2538_);
v___x_2540_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__26));
v___x_2541_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___y_2449_);
lean_ctor_set(v___x_2541_, 1, v___x_2540_);
v___x_2542_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__64));
v___x_2543_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___y_2449_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
v___x_2544_ = l_Lean_Syntax_node2(v___y_2449_, v___y_2458_, v___x_2514_, v___x_2543_);
v___x_2545_ = lean_box(0);
v___x_2546_ = l_Lean_SourceInfo_fromRef(v___x_2545_, v___x_1930_);
lean_inc(v___x_2546_);
v___x_2547_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2547_, 0, v___x_2546_);
lean_ctor_set(v___x_2547_, 1, v___y_2458_);
lean_ctor_set(v___x_2547_, 2, v___y_2446_);
v___x_2548_ = l_Lean_Syntax_node2(v___x_2546_, v___x_2503_, v_id_1937_, v___x_2547_);
v___x_2549_ = l_Lean_Syntax_node3(v___y_2449_, v___x_2516_, v___x_2518_, v___y_2453_, v___x_2536_);
v___x_2550_ = l_Lean_Syntax_node3(v___y_2449_, v___y_2458_, v___y_2453_, v___y_2453_, v___x_2549_);
lean_inc(v___x_2548_);
v___x_2551_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2501_, v___x_2548_, v___x_2550_);
v___x_2552_ = l_Lean_Syntax_node1(v___y_2449_, v___y_2458_, v___x_2551_);
lean_inc_n(v___x_2499_, 3);
v___x_2553_ = l_Lean_Syntax_node1(v___y_2449_, v___x_2499_, v___x_2552_);
v___x_2554_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__42));
v___x_2555_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2554_);
lean_inc(v___x_2555_);
v___x_2556_ = l_Lean_Syntax_node1(v___y_2449_, v___x_2555_, v___y_2453_);
v___x_2557_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__51));
v___x_2558_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___y_2449_);
lean_ctor_set(v___x_2558_, 1, v___x_2557_);
lean_inc_ref(v___x_2558_);
lean_inc(v___x_2556_);
lean_inc(v___x_2544_);
lean_inc_ref(v___x_2541_);
lean_inc_n(v___x_2539_, 2);
v___x_2559_ = l_Lean_Syntax_node6(v___y_2449_, v___x_2539_, v___x_2541_, v___x_2544_, v___x_2553_, v___x_2556_, v___y_2453_, v___x_2558_);
v___x_2560_ = l_Lean_Syntax_node3(v___y_2449_, v___x_2516_, v___x_2518_, v___y_2453_, v___x_2559_);
v___x_2561_ = l_Lean_Syntax_node3(v___y_2449_, v___y_2458_, v___x_2537_, v___y_2453_, v___x_2560_);
v___x_2562_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2501_, v___x_2532_, v___x_2561_);
v___x_2563_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__66);
v___x_2564_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__67));
v___x_2565_ = l_Lean_addMacroScope(v___y_2451_, v___x_2564_, v___y_2455_);
v___x_2566_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__69));
v___x_2567_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2567_, 0, v___y_2449_);
lean_ctor_set(v___x_2567_, 1, v___x_2563_);
lean_ctor_set(v___x_2567_, 2, v___x_2565_);
lean_ctor_set(v___x_2567_, 3, v___x_2566_);
v___x_2568_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2503_, v___x_2567_, v___y_2453_);
v___x_2569_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__71);
v___x_2570_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__72));
v___x_2571_ = l_Lean_addMacroScope(v___y_2451_, v___x_2570_, v___y_2455_);
v___x_2572_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2572_, 0, v___y_2449_);
lean_ctor_set(v___x_2572_, 1, v___x_2569_);
lean_ctor_set(v___x_2572_, 2, v___x_2571_);
lean_ctor_set(v___x_2572_, 3, v___x_2486_);
lean_inc_ref(v___x_2572_);
v___x_2573_ = l_Lean_Syntax_node2(v___y_2449_, v___y_2458_, v___x_2572_, v___x_2513_);
v___x_2574_ = l_Lean_Syntax_node1(v___y_2449_, v___y_2458_, v___x_2523_);
v___x_2575_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2481_, v___x_2572_, v___x_2574_);
v___x_2576_ = l_Lean_Syntax_node3(v___y_2449_, v___x_2516_, v___x_2518_, v___y_2453_, v___x_2575_);
v___x_2577_ = l_Lean_Syntax_node3(v___y_2449_, v___y_2458_, v___y_2453_, v___y_2453_, v___x_2576_);
v___x_2578_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2501_, v___x_2548_, v___x_2577_);
v___x_2579_ = l_Lean_Syntax_node1(v___y_2449_, v___y_2458_, v___x_2578_);
v___x_2580_ = l_Lean_Syntax_node1(v___y_2449_, v___x_2499_, v___x_2579_);
v___x_2581_ = l_Lean_Syntax_node6(v___y_2449_, v___x_2539_, v___x_2541_, v___x_2544_, v___x_2580_, v___x_2556_, v___y_2453_, v___x_2558_);
v___x_2582_ = l_Lean_Syntax_node3(v___y_2449_, v___x_2516_, v___x_2518_, v___y_2453_, v___x_2581_);
v___x_2583_ = l_Lean_Syntax_node3(v___y_2449_, v___y_2458_, v___x_2573_, v___y_2453_, v___x_2582_);
v___x_2584_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2501_, v___x_2568_, v___x_2583_);
v___x_2585_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__74);
v___x_2586_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__75));
v___x_2587_ = l_Lean_addMacroScope(v___y_2451_, v___x_2586_, v___y_2455_);
v___x_2588_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2588_, 0, v___y_2449_);
lean_ctor_set(v___x_2588_, 1, v___x_2585_);
lean_ctor_set(v___x_2588_, 2, v___x_2587_);
lean_ctor_set(v___x_2588_, 3, v___x_2486_);
v___x_2589_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2503_, v___x_2588_, v___y_2453_);
v___x_2590_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__76));
v___x_2591_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2590_);
v___x_2592_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___y_2449_);
lean_ctor_set(v___x_2592_, 1, v___x_2590_);
v___x_2593_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__77));
v___x_2594_ = l_Lean_Name_mkStr4(v___y_2459_, v___y_2448_, v___x_2475_, v___x_2593_);
lean_inc(v___x_1911_);
v___x_2595_ = l_Lean_Syntax_node1(v___y_2449_, v___y_2458_, v___x_1911_);
v___x_2596_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__78));
v___x_2597_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___y_2449_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
lean_inc(v_defVal_1940_);
v___x_2598_ = l_Lean_Syntax_node4(v___y_2449_, v___x_2594_, v___x_2595_, v___y_2453_, v___x_2597_, v_defVal_1940_);
v___x_2599_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2591_, v___x_2592_, v___x_2598_);
v___x_2600_ = l_Lean_Syntax_node3(v___y_2449_, v___x_2516_, v___x_2518_, v___y_2453_, v___x_2599_);
v___x_2601_ = l_Lean_Syntax_node3(v___y_2449_, v___y_2458_, v___y_2453_, v___y_2453_, v___x_2600_);
v___x_2602_ = l_Lean_Syntax_node2(v___y_2449_, v___x_2501_, v___x_2589_, v___x_2601_);
v___x_2603_ = l_Lean_Syntax_node7(v___y_2449_, v___y_2458_, v___x_2526_, v___y_2453_, v___x_2562_, v___y_2453_, v___x_2584_, v___y_2453_, v___x_2602_);
v___x_2604_ = l_Lean_Syntax_node1(v___y_2449_, v___x_2499_, v___x_2603_);
v___x_2605_ = l_Lean_Syntax_node3(v___y_2449_, v___x_2495_, v___x_2497_, v___x_2604_, v___y_2453_);
v___x_2606_ = l_Lean_Syntax_node5(v___y_2449_, v___x_2467_, v___x_2469_, v___x_2472_, v___x_2493_, v___x_2605_, v___y_2453_);
lean_inc(v___y_2447_);
v___x_2607_ = l_Lean_Syntax_node2(v___y_2449_, v___y_2447_, v___x_2465_, v___x_2606_);
v___x_2608_ = lean_array_push(v_cmds_1931_, v___x_2607_);
lean_inc(v___x_2444_);
v___x_2609_ = l_Lake_Name_quoteFrom(v_id_1937_, v___x_2444_, v___x_1930_);
if (v_parent_1941_ == 0)
{
lean_object* v___x_2610_; lean_object* v___x_2611_; uint8_t v___x_2612_; 
lean_dec(v___x_2444_);
v___x_2610_ = lean_unsigned_to_nat(0u);
v___x_2611_ = lean_array_get_size(v_ids_1938_);
v___x_2612_ = lean_nat_dec_lt(v___x_2610_, v___x_2611_);
if (v___x_2612_ == 0)
{
lean_object* v___x_2613_; 
lean_dec(v___x_2609_);
lean_dec(v___x_2555_);
lean_dec(v___x_2539_);
lean_dec(v___x_2516_);
lean_dec(v___x_2503_);
lean_dec(v___x_2501_);
lean_dec(v___x_2499_);
lean_dec(v___x_2481_);
lean_dec(v___x_2477_);
lean_dec(v___x_2471_);
lean_dec(v___y_2454_);
lean_del_object(v___x_1934_);
v___x_2613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2608_);
lean_ctor_set(v___x_2613_, 1, v_fields_1932_);
v_a_1921_ = v___x_2613_;
v_a_1922_ = v___y_1919_;
goto v___jp_1920_;
}
else
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; 
v___x_2614_ = lean_array_fget_borrowed(v_ids_1938_, v___x_2610_);
v___x_2615_ = l_Lean_TSyntax_getId(v___x_2614_);
lean_inc(v___x_2615_);
lean_inc(v___x_2614_);
v___x_2616_ = l_Lake_Name_quoteFrom(v___x_2614_, v___x_2615_, v___x_1930_);
v___x_2617_ = l_Lean_Name_hasMacroScopes(v___x_2615_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; 
v___x_2618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_1913_, v___x_2615_);
lean_inc(v___x_2614_);
v___y_2112_ = v___y_2447_;
v___y_2113_ = v___x_2557_;
v___y_2114_ = v___x_2608_;
v___y_2115_ = v___x_2517_;
v___y_2116_ = v___x_2486_;
v___y_2117_ = v___y_2448_;
v___y_2118_ = v___y_2450_;
v___y_2119_ = v___x_2503_;
v___y_2120_ = v___y_2452_;
v___y_2121_ = v___y_2454_;
v___y_2122_ = v___x_2555_;
v___y_2123_ = v___x_2478_;
v___y_2124_ = v___y_2455_;
v___y_2125_ = v___x_2485_;
v___y_2126_ = v___x_2475_;
v___y_2127_ = v___y_2459_;
v___y_2128_ = v___x_2471_;
v___y_2129_ = v___x_2481_;
v___y_2130_ = v___y_2446_;
v___y_2131_ = v___x_2516_;
v___y_2132_ = v___x_2499_;
v___y_2133_ = v___x_2486_;
v___y_2134_ = v___x_2616_;
v___y_2135_ = v___x_2614_;
v___y_2136_ = v___y_2451_;
v___y_2137_ = v___x_2540_;
v___y_2138_ = v___x_2609_;
v___y_2139_ = v___x_2610_;
v___y_2140_ = v___x_2477_;
v___y_2141_ = v___x_2501_;
v___y_2142_ = v___y_2456_;
v___y_2143_ = v___y_2457_;
v___y_2144_ = v___x_2539_;
v___y_2145_ = v___y_2458_;
v___y_2146_ = v___y_2460_;
v___y_2147_ = v___y_2461_;
v___y_2148_ = v___x_2611_;
v___y_2149_ = v___x_2618_;
goto v___jp_2111_;
}
else
{
lean_object* v_view_2619_; lean_object* v_name_2620_; lean_object* v_imported_2621_; lean_object* v_ctx_2622_; lean_object* v_scopes_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2632_; 
v_view_2619_ = l_Lean_extractMacroScopes(v___x_2615_);
v_name_2620_ = lean_ctor_get(v_view_2619_, 0);
v_imported_2621_ = lean_ctor_get(v_view_2619_, 1);
v_ctx_2622_ = lean_ctor_get(v_view_2619_, 2);
v_scopes_2623_ = lean_ctor_get(v_view_2619_, 3);
v_isSharedCheck_2632_ = !lean_is_exclusive(v_view_2619_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2625_ = v_view_2619_;
v_isShared_2626_ = v_isSharedCheck_2632_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_scopes_2623_);
lean_inc(v_ctx_2622_);
lean_inc(v_imported_2621_);
lean_inc(v_name_2620_);
lean_dec(v_view_2619_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2632_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2627_; lean_object* v___x_2629_; 
v___x_2627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2___lam__0(v_structId_1913_, v_name_2620_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v___x_2627_);
v___x_2629_ = v___x_2625_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v___x_2627_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v_imported_2621_);
lean_ctor_set(v_reuseFailAlloc_2631_, 2, v_ctx_2622_);
lean_ctor_set(v_reuseFailAlloc_2631_, 3, v_scopes_2623_);
v___x_2629_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
lean_object* v___x_2630_; 
v___x_2630_ = l_Lean_MacroScopesView_review(v___x_2629_);
lean_inc(v___x_2614_);
v___y_2112_ = v___y_2447_;
v___y_2113_ = v___x_2557_;
v___y_2114_ = v___x_2608_;
v___y_2115_ = v___x_2517_;
v___y_2116_ = v___x_2486_;
v___y_2117_ = v___y_2448_;
v___y_2118_ = v___y_2450_;
v___y_2119_ = v___x_2503_;
v___y_2120_ = v___y_2452_;
v___y_2121_ = v___y_2454_;
v___y_2122_ = v___x_2555_;
v___y_2123_ = v___x_2478_;
v___y_2124_ = v___y_2455_;
v___y_2125_ = v___x_2485_;
v___y_2126_ = v___x_2475_;
v___y_2127_ = v___y_2459_;
v___y_2128_ = v___x_2471_;
v___y_2129_ = v___x_2481_;
v___y_2130_ = v___y_2446_;
v___y_2131_ = v___x_2516_;
v___y_2132_ = v___x_2499_;
v___y_2133_ = v___x_2486_;
v___y_2134_ = v___x_2616_;
v___y_2135_ = v___x_2614_;
v___y_2136_ = v___y_2451_;
v___y_2137_ = v___x_2540_;
v___y_2138_ = v___x_2609_;
v___y_2139_ = v___x_2610_;
v___y_2140_ = v___x_2477_;
v___y_2141_ = v___x_2501_;
v___y_2142_ = v___y_2456_;
v___y_2143_ = v___y_2457_;
v___y_2144_ = v___x_2539_;
v___y_2145_ = v___y_2458_;
v___y_2146_ = v___y_2460_;
v___y_2147_ = v___y_2461_;
v___y_2148_ = v___x_2611_;
v___y_2149_ = v___x_2630_;
goto v___jp_2111_;
}
}
}
}
}
else
{
uint8_t v___x_2633_; 
lean_del_object(v___x_1934_);
v___x_2633_ = l_Lean_Name_hasMacroScopes(v___x_2444_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; 
v___x_2634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2(v_structId_1913_, v___x_2444_);
v___y_2393_ = v___y_2447_;
v___y_2394_ = v___x_2557_;
v___y_2395_ = v___x_2608_;
v___y_2396_ = v___x_2517_;
v___y_2397_ = v___x_2486_;
v___y_2398_ = v___y_2448_;
v___y_2399_ = v___y_2450_;
v___y_2400_ = v___x_2503_;
v___y_2401_ = v___y_2452_;
v___y_2402_ = v___y_2454_;
v___y_2403_ = v___x_2555_;
v___y_2404_ = v___x_2478_;
v___y_2405_ = v___y_2455_;
v___y_2406_ = v___x_2485_;
v___y_2407_ = v___x_2475_;
v___y_2408_ = v___y_2459_;
v___y_2409_ = v___x_2471_;
v___y_2410_ = v___x_2481_;
v___y_2411_ = v___y_2446_;
v___y_2412_ = v___x_2516_;
v___y_2413_ = v___x_2499_;
v___y_2414_ = v___x_2486_;
v___y_2415_ = v___y_2451_;
v___y_2416_ = v___x_2540_;
v___y_2417_ = v___x_2609_;
v___y_2418_ = v___x_2477_;
v___y_2419_ = v___x_2501_;
v___y_2420_ = v___y_2456_;
v___y_2421_ = v___y_2457_;
v___y_2422_ = v___x_2539_;
v___y_2423_ = v___y_2458_;
v___y_2424_ = v___y_2460_;
v___y_2425_ = v___y_2461_;
v___y_2426_ = v___x_2634_;
goto v___jp_2392_;
}
else
{
lean_object* v_view_2635_; lean_object* v_name_2636_; lean_object* v_imported_2637_; lean_object* v_ctx_2638_; lean_object* v_scopes_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2648_; 
v_view_2635_ = l_Lean_extractMacroScopes(v___x_2444_);
v_name_2636_ = lean_ctor_get(v_view_2635_, 0);
v_imported_2637_ = lean_ctor_get(v_view_2635_, 1);
v_ctx_2638_ = lean_ctor_get(v_view_2635_, 2);
v_scopes_2639_ = lean_ctor_get(v_view_2635_, 3);
v_isSharedCheck_2648_ = !lean_is_exclusive(v_view_2635_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2641_ = v_view_2635_;
v_isShared_2642_ = v_isSharedCheck_2648_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_scopes_2639_);
lean_inc(v_ctx_2638_);
lean_inc(v_imported_2637_);
lean_inc(v_name_2636_);
lean_dec(v_view_2635_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2648_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2643_; lean_object* v___x_2645_; 
v___x_2643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___lam__2(v_structId_1913_, v_name_2636_);
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 0, v___x_2643_);
v___x_2645_ = v___x_2641_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v___x_2643_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v_imported_2637_);
lean_ctor_set(v_reuseFailAlloc_2647_, 2, v_ctx_2638_);
lean_ctor_set(v_reuseFailAlloc_2647_, 3, v_scopes_2639_);
v___x_2645_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
lean_object* v___x_2646_; 
v___x_2646_ = l_Lean_MacroScopesView_review(v___x_2645_);
v___y_2393_ = v___y_2447_;
v___y_2394_ = v___x_2557_;
v___y_2395_ = v___x_2608_;
v___y_2396_ = v___x_2517_;
v___y_2397_ = v___x_2486_;
v___y_2398_ = v___y_2448_;
v___y_2399_ = v___y_2450_;
v___y_2400_ = v___x_2503_;
v___y_2401_ = v___y_2452_;
v___y_2402_ = v___y_2454_;
v___y_2403_ = v___x_2555_;
v___y_2404_ = v___x_2478_;
v___y_2405_ = v___y_2455_;
v___y_2406_ = v___x_2485_;
v___y_2407_ = v___x_2475_;
v___y_2408_ = v___y_2459_;
v___y_2409_ = v___x_2471_;
v___y_2410_ = v___x_2481_;
v___y_2411_ = v___y_2446_;
v___y_2412_ = v___x_2516_;
v___y_2413_ = v___x_2499_;
v___y_2414_ = v___x_2486_;
v___y_2415_ = v___y_2451_;
v___y_2416_ = v___x_2540_;
v___y_2417_ = v___x_2609_;
v___y_2418_ = v___x_2477_;
v___y_2419_ = v___x_2501_;
v___y_2420_ = v___y_2456_;
v___y_2421_ = v___y_2457_;
v___y_2422_ = v___x_2539_;
v___y_2423_ = v___y_2458_;
v___y_2424_ = v___y_2460_;
v___y_2425_ = v___y_2461_;
v___y_2426_ = v___x_2646_;
goto v___jp_2392_;
}
}
}
}
}
v___jp_2649_:
{
lean_object* v_methods_2651_; lean_object* v_quotContext_2652_; lean_object* v_currMacroScope_2653_; lean_object* v_currRecDepth_2654_; lean_object* v_maxRecDepth_2655_; lean_object* v_ref_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; 
v_methods_2651_ = lean_ctor_get(v___y_1918_, 0);
v_quotContext_2652_ = lean_ctor_get(v___y_1918_, 1);
v_currMacroScope_2653_ = lean_ctor_get(v___y_1918_, 2);
v_currRecDepth_2654_ = lean_ctor_get(v___y_1918_, 3);
v_maxRecDepth_2655_ = lean_ctor_get(v___y_1918_, 4);
v_ref_2656_ = lean_ctor_get(v___y_1918_, 5);
v___x_2657_ = l_Lean_mkIdentFrom(v_id_1937_, v___y_2650_, v___x_1930_);
v___x_2658_ = l_Lean_SourceInfo_fromRef(v_ref_2656_, v___x_1930_);
v___x_2659_ = ((lean_object*)(l_Lake_configDecl___closed__24));
v___x_2660_ = ((lean_object*)(l_Lake_configDecl___closed__25));
v___x_2661_ = ((lean_object*)(l_Lake_configDecl___closed__31));
v___x_2662_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53));
v___x_2663_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54));
v___x_2664_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4));
v___x_2665_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5);
lean_inc(v___x_2658_);
v___x_2666_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2658_);
lean_ctor_set(v___x_2666_, 1, v___x_2664_);
lean_ctor_set(v___x_2666_, 2, v___x_2665_);
if (lean_obj_tag(v_vis_x3f_1912_) == 1)
{
lean_object* v_val_2667_; lean_object* v___x_2668_; 
v_val_2667_ = lean_ctor_get(v_vis_x3f_1912_, 0);
lean_inc(v_val_2667_);
v___x_2668_ = l_Array_mkArray1___redArg(v_val_2667_);
v___y_2446_ = v___x_2665_;
v___y_2447_ = v___x_2662_;
v___y_2448_ = v___x_2660_;
v___y_2449_ = v___x_2658_;
v___y_2450_ = v_methods_2651_;
v___y_2451_ = v_quotContext_2652_;
v___y_2452_ = v_maxRecDepth_2655_;
v___y_2453_ = v___x_2666_;
v___y_2454_ = v___x_2657_;
v___y_2455_ = v_currMacroScope_2653_;
v___y_2456_ = v___x_2661_;
v___y_2457_ = v_currRecDepth_2654_;
v___y_2458_ = v___x_2664_;
v___y_2459_ = v___x_2659_;
v___y_2460_ = v_ref_2656_;
v___y_2461_ = v___x_2663_;
v___y_2462_ = v___x_2668_;
goto v___jp_2445_;
}
else
{
lean_object* v___x_2669_; 
v___x_2669_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_2446_ = v___x_2665_;
v___y_2447_ = v___x_2662_;
v___y_2448_ = v___x_2660_;
v___y_2449_ = v___x_2658_;
v___y_2450_ = v_methods_2651_;
v___y_2451_ = v_quotContext_2652_;
v___y_2452_ = v_maxRecDepth_2655_;
v___y_2453_ = v___x_2666_;
v___y_2454_ = v___x_2657_;
v___y_2455_ = v_currMacroScope_2653_;
v___y_2456_ = v___x_2661_;
v___y_2457_ = v_currRecDepth_2654_;
v___y_2458_ = v___x_2664_;
v___y_2459_ = v___x_2659_;
v___y_2460_ = v_ref_2656_;
v___y_2461_ = v___x_2663_;
v___y_2462_ = v___x_2669_;
goto v___jp_2445_;
}
}
}
}
else
{
lean_object* v___x_2687_; 
lean_dec(v_vis_x3f_1912_);
lean_dec(v___x_1911_);
lean_dec(v_structTy_1910_);
v___x_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2687_, 0, v_b_1917_);
lean_ctor_set(v___x_2687_, 1, v___y_1919_);
return v___x_2687_;
}
v___jp_1920_:
{
size_t v___x_1923_; size_t v___x_1924_; lean_object* v___x_1925_; 
v___x_1923_ = ((size_t)1ULL);
v___x_1924_ = lean_usize_add(v_i_1915_, v___x_1923_);
v___x_1925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4(v_structTy_1910_, v___x_1911_, v_vis_x3f_1912_, v_structId_1913_, v_as_1914_, v___x_1924_, v_stop_1916_, v_a_1921_, v___y_1918_, v_a_1922_);
return v___x_1925_;
}
v___jp_1926_:
{
if (lean_obj_tag(v___y_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v_a_1929_; 
v_a_1928_ = lean_ctor_get(v___y_1927_, 0);
lean_inc(v_a_1928_);
v_a_1929_ = lean_ctor_get(v___y_1927_, 1);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___y_1927_, 2);
v_a_1921_ = v_a_1928_;
v_a_1922_ = v_a_1929_;
goto v___jp_1920_;
}
else
{
lean_dec(v_vis_x3f_1912_);
lean_dec(v___x_1911_);
lean_dec(v_structTy_1910_);
return v___y_1927_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3___boxed(lean_object* v_structTy_2688_, lean_object* v___x_2689_, lean_object* v_vis_x3f_2690_, lean_object* v_structId_2691_, lean_object* v_as_2692_, lean_object* v_i_2693_, lean_object* v_stop_2694_, lean_object* v_b_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
size_t v_i_boxed_2698_; size_t v_stop_boxed_2699_; lean_object* v_res_2700_; 
v_i_boxed_2698_ = lean_unbox_usize(v_i_2693_);
lean_dec(v_i_2693_);
v_stop_boxed_2699_ = lean_unbox_usize(v_stop_2694_);
lean_dec(v_stop_2694_);
v_res_2700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3(v_structTy_2688_, v___x_2689_, v_vis_x3f_2690_, v_structId_2691_, v_as_2692_, v_i_boxed_2698_, v_stop_boxed_2699_, v_b_2695_, v___y_2696_, v___y_2697_);
lean_dec_ref(v___y_2696_);
lean_dec_ref(v_as_2692_);
lean_dec(v_structId_2691_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__0(size_t v_sz_2701_, size_t v_i_2702_, lean_object* v_bs_2703_){
_start:
{
uint8_t v___x_2704_; 
v___x_2704_ = lean_usize_dec_lt(v_i_2702_, v_sz_2701_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; 
v___x_2705_ = l_unsafeCast___redArg(v_bs_2703_);
lean_dec_ref(v_bs_2703_);
return v___x_2705_;
}
else
{
lean_object* v_v_2706_; lean_object* v___x_2707_; lean_object* v_id_2708_; lean_object* v___x_2709_; lean_object* v_bs_x27_2710_; size_t v___x_2711_; size_t v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; 
v_v_2706_ = lean_array_uget_borrowed(v_bs_2703_, v_i_2702_);
v___x_2707_ = l_unsafeCast___redArg(v_v_2706_);
v_id_2708_ = lean_ctor_get(v___x_2707_, 2);
lean_inc(v_id_2708_);
lean_dec(v___x_2707_);
v___x_2709_ = lean_unsigned_to_nat(0u);
v_bs_x27_2710_ = lean_array_uset(v_bs_2703_, v_i_2702_, v___x_2709_);
v___x_2711_ = ((size_t)1ULL);
v___x_2712_ = lean_usize_add(v_i_2702_, v___x_2711_);
v___x_2713_ = l_unsafeCast___redArg(v_id_2708_);
lean_dec(v_id_2708_);
v___x_2714_ = lean_array_uset(v_bs_x27_2710_, v_i_2702_, v___x_2713_);
v_i_2702_ = v___x_2712_;
v_bs_2703_ = v___x_2714_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__0___boxed(lean_object* v_sz_2716_, lean_object* v_i_2717_, lean_object* v_bs_2718_){
_start:
{
size_t v_sz_boxed_2719_; size_t v_i_boxed_2720_; lean_object* v_res_2721_; 
v_sz_boxed_2719_ = lean_unbox_usize(v_sz_2716_);
lean_dec(v_sz_2716_);
v_i_boxed_2720_ = lean_unbox_usize(v_i_2717_);
lean_dec(v_i_2717_);
v_res_2721_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__0(v_sz_boxed_2719_, v_i_boxed_2720_, v_bs_2718_);
return v_res_2721_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__5(void){
_start:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2730_ = l_Lean_firstFrontendMacroScope;
v___x_2731_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__4));
v___x_2732_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__1));
v___x_2733_ = l_Lean_addMacroScope(v___x_2732_, v___x_2731_, v___x_2730_);
return v___x_2733_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__8(void){
_start:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2737_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__7));
v___x_2738_ = l_String_toRawSubstring_x27(v___x_2737_);
return v___x_2738_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__11(void){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___x_2745_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__10));
v___x_2746_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__5, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__5);
v___x_2747_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__8, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__8_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__8);
v___x_2748_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0);
v___x_2749_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2748_);
lean_ctor_set(v___x_2749_, 1, v___x_2747_);
lean_ctor_set(v___x_2749_, 2, v___x_2746_);
lean_ctor_set(v___x_2749_, 3, v___x_2745_);
return v___x_2749_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__12(void){
_start:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v_data_2752_; 
v___x_2750_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__11, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__11_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__11);
v___x_2751_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__6));
v_data_2752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_data_2752_, 0, v___x_2751_);
lean_ctor_set(v_data_2752_, 1, v___x_2750_);
return v_data_2752_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__15(void){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = ((lean_object*)(l_Lake_configField___closed__21));
v___x_2764_ = l_Lean_mkAtom(v___x_2763_);
return v___x_2764_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__19(void){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__18));
v___x_2773_ = l_String_toRawSubstring_x27(v___x_2772_);
return v___x_2773_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__30(void){
_start:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2794_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__29));
v___x_2795_ = l_String_toRawSubstring_x27(v___x_2794_);
return v___x_2795_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__34(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2804_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__21));
v___x_2805_ = l_String_toRawSubstring_x27(v___x_2804_);
return v___x_2805_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__38(void){
_start:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__37));
v___x_2815_ = l_String_toRawSubstring_x27(v___x_2814_);
return v___x_2815_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41(void){
_start:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2819_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__40));
v___x_2820_ = l_Lean_mkAtom(v___x_2819_);
return v___x_2820_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__42(void){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2821_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41);
v___x_2822_ = lean_unsigned_to_nat(3u);
v___x_2823_ = lean_mk_empty_array_with_capacity(v___x_2822_);
v___x_2824_ = lean_array_push(v___x_2823_, v___x_2821_);
return v___x_2824_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__43(void){
_start:
{
lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2825_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__41);
v___x_2826_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__42, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__42_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__42);
v___x_2827_ = lean_array_push(v___x_2826_, v___x_2825_);
return v___x_2827_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__47(void){
_start:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2843_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__20));
v___x_2844_ = l_String_toRawSubstring_x27(v___x_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls(lean_object* v_vis_x3f_2871_, lean_object* v_structId_2872_, lean_object* v_structArity_2873_, lean_object* v_structTy_2874_, lean_object* v_views_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_){
_start:
{
lean_object* v_quotContext_2878_; lean_object* v_currMacroScope_2879_; lean_object* v_ref_2880_; lean_object* v___x_2881_; lean_object* v_a_2882_; lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_3377_; 
v_quotContext_2878_ = lean_ctor_get(v_a_2876_, 1);
v_currMacroScope_2879_ = lean_ctor_get(v_a_2876_, 2);
v_ref_2880_ = lean_ctor_get(v_a_2876_, 5);
v___x_2881_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(v_ref_2880_, v_a_2876_, v_a_2877_);
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
v_a_2883_ = lean_ctor_get(v___x_2881_, 1);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_2885_ = v___x_2881_;
v_isShared_2886_ = v_isSharedCheck_3377_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_inc(v_a_2882_);
lean_dec(v___x_2881_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_3377_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2887_; uint8_t v___x_2888_; lean_object* v___x_2889_; lean_object* v_data_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; size_t v_sz_2900_; size_t v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; size_t v_sz_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___y_3008_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; lean_object* v___y_3116_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3180_; lean_object* v___y_3181_; lean_object* v___y_3182_; lean_object* v___y_3183_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3250_; lean_object* v___y_3251_; lean_object* v___y_3252_; lean_object* v___y_3253_; lean_object* v___y_3263_; lean_object* v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v_a_3336_; lean_object* v_a_3337_; lean_object* v___y_3356_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; uint8_t v___x_3371_; 
v___x_2887_ = lean_unsigned_to_nat(0u);
v___x_2888_ = 0;
v___x_2889_ = lean_box(0);
v_data_2890_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__12, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__12_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__12);
v___x_2891_ = ((lean_object*)(l_Lake_configDecl___closed__24));
v___x_2892_ = ((lean_object*)(l_Lake_configDecl___closed__25));
v___x_2893_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__13));
v___x_2894_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__26));
lean_inc_n(v_a_2882_, 9);
v___x_2895_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2895_, 0, v_a_2882_);
lean_ctor_set(v___x_2895_, 1, v___x_2894_);
v___x_2896_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4));
v___x_2897_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5);
v___x_2898_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2898_, 0, v_a_2882_);
lean_ctor_set(v___x_2898_, 1, v___x_2896_);
lean_ctor_set(v___x_2898_, 2, v___x_2897_);
v___x_2899_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__14));
v_sz_2900_ = lean_array_size(v_views_2875_);
v___x_2901_ = ((size_t)0ULL);
v___x_2902_ = l_unsafeCast___redArg(v_views_2875_);
v___x_2903_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__0(v_sz_2900_, v___x_2901_, v___x_2902_);
v___x_2904_ = l_unsafeCast___redArg(v___x_2903_);
lean_dec_ref(v___x_2903_);
v_sz_2905_ = lean_array_size(v___x_2904_);
v___x_2906_ = l_unsafeCast___redArg(v___x_2904_);
lean_dec(v___x_2904_);
lean_inc_ref_n(v___x_2898_, 2);
v___x_2907_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1(v_a_2882_, v___x_2898_, v_sz_2905_, v___x_2901_, v___x_2906_);
v___x_2908_ = l_unsafeCast___redArg(v___x_2907_);
lean_dec_ref(v___x_2907_);
v___x_2909_ = ((lean_object*)(l_Lake_configField___closed__21));
v___x_2910_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__15, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__15_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__15);
v___x_2911_ = l_Lean_mkSepArray(v___x_2908_, v___x_2910_);
lean_dec(v___x_2908_);
v___x_2912_ = l_Array_append___redArg(v___x_2897_, v___x_2911_);
lean_dec_ref(v___x_2911_);
v___x_2913_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2913_, 0, v_a_2882_);
lean_ctor_set(v___x_2913_, 1, v___x_2896_);
lean_ctor_set(v___x_2913_, 2, v___x_2912_);
v___x_2914_ = l_Lean_Syntax_node1(v_a_2882_, v___x_2899_, v___x_2913_);
v___x_2915_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__16));
v___x_2916_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__17));
v___x_2917_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2917_, 0, v_a_2882_);
lean_ctor_set(v___x_2917_, 1, v___x_2916_);
v___x_2918_ = l_Lean_Syntax_node1(v_a_2882_, v___x_2896_, v___x_2917_);
v___x_2919_ = l_Lean_Syntax_node1(v_a_2882_, v___x_2915_, v___x_2918_);
v___x_2920_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__51));
v___x_3368_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3368_, 0, v_a_2882_);
lean_ctor_set(v___x_3368_, 1, v___x_2920_);
v___x_3369_ = l_Lean_Syntax_node6(v_a_2882_, v___x_2893_, v___x_2895_, v___x_2898_, v___x_2914_, v___x_2919_, v___x_2898_, v___x_3368_);
v___x_3370_ = lean_array_get_size(v_views_2875_);
v___x_3371_ = lean_nat_dec_lt(v___x_2887_, v___x_3370_);
if (v___x_3371_ == 0)
{
lean_dec(v___x_3369_);
v_a_3336_ = v_data_2890_;
v_a_3337_ = v_a_2883_;
goto v___jp_3335_;
}
else
{
uint8_t v___x_3372_; 
v___x_3372_ = lean_nat_dec_le(v___x_3370_, v___x_3370_);
if (v___x_3372_ == 0)
{
if (v___x_3371_ == 0)
{
lean_dec(v___x_3369_);
v_a_3336_ = v_data_2890_;
v_a_3337_ = v_a_2883_;
goto v___jp_3335_;
}
else
{
size_t v___x_3373_; lean_object* v___x_3374_; 
v___x_3373_ = lean_usize_of_nat(v___x_3370_);
lean_inc(v_vis_x3f_2871_);
lean_inc(v_structTy_2874_);
v___x_3374_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3(v_structTy_2874_, v___x_3369_, v_vis_x3f_2871_, v_structId_2872_, v_views_2875_, v___x_2901_, v___x_3373_, v_data_2890_, v_a_2876_, v_a_2883_);
v___y_3356_ = v___x_3374_;
goto v___jp_3355_;
}
}
else
{
size_t v___x_3375_; lean_object* v___x_3376_; 
v___x_3375_ = lean_usize_of_nat(v___x_3370_);
lean_inc(v_vis_x3f_2871_);
lean_inc(v_structTy_2874_);
v___x_3376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3(v_structTy_2874_, v___x_3369_, v_vis_x3f_2871_, v_structId_2872_, v_views_2875_, v___x_2901_, v___x_3375_, v_data_2890_, v_a_2876_, v_a_2883_);
v___y_3356_ = v___x_3376_;
goto v___jp_3355_;
}
}
v___jp_2921_:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2987_; 
v___x_2947_ = l_Array_append___redArg(v___x_2897_, v___y_2946_);
lean_dec_ref(v___y_2946_);
lean_inc_n(v___y_2941_, 27);
v___x_2948_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2948_, 0, v___y_2941_);
lean_ctor_set(v___x_2948_, 1, v___x_2896_);
lean_ctor_set(v___x_2948_, 2, v___x_2947_);
lean_inc_n(v___y_2931_, 16);
lean_inc(v___y_2936_);
v___x_2949_ = l_Lean_Syntax_node7(v___y_2941_, v___y_2936_, v___y_2931_, v___y_2931_, v___x_2948_, v___y_2931_, v___y_2931_, v___y_2931_, v___y_2931_);
v___x_2950_ = l_Lean_Syntax_node1(v___y_2941_, v___y_2944_, v___y_2931_);
v___x_2951_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___y_2941_);
lean_ctor_set(v___x_2951_, 1, v___y_2924_);
v___x_2952_ = l_Lean_Syntax_node2(v___y_2941_, v___y_2938_, v___y_2937_, v___y_2931_);
v___x_2953_ = l_Lean_Syntax_node1(v___y_2941_, v___x_2896_, v___x_2952_);
lean_inc_ref(v___y_2925_);
v___x_2954_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2954_, 0, v___y_2941_);
lean_ctor_set(v___x_2954_, 1, v___y_2925_);
v___x_2955_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__19, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__19_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__19);
v___x_2956_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__20));
lean_inc(v_currMacroScope_2879_);
lean_inc(v_quotContext_2878_);
v___x_2957_ = l_Lean_addMacroScope(v_quotContext_2878_, v___x_2956_, v_currMacroScope_2879_);
v___x_2958_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__24));
v___x_2959_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2959_, 0, v___y_2941_);
lean_ctor_set(v___x_2959_, 1, v___x_2955_);
lean_ctor_set(v___x_2959_, 2, v___x_2957_);
lean_ctor_set(v___x_2959_, 3, v___x_2958_);
v___x_2960_ = l_Lean_Syntax_node1(v___y_2941_, v___x_2896_, v_structTy_2874_);
v___x_2961_ = l_Lean_Syntax_node2(v___y_2941_, v___y_2939_, v___x_2959_, v___x_2960_);
v___x_2962_ = l_Lean_Syntax_node2(v___y_2941_, v___y_2942_, v___x_2954_, v___x_2961_);
v___x_2963_ = l_Lean_Syntax_node2(v___y_2941_, v___y_2945_, v___y_2931_, v___x_2962_);
lean_inc_ref(v___y_2932_);
v___x_2964_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2964_, 0, v___y_2941_);
lean_ctor_set(v___x_2964_, 1, v___y_2932_);
lean_inc_ref(v___y_2928_);
v___x_2965_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___y_2941_);
lean_ctor_set(v___x_2965_, 1, v___y_2928_);
v___x_2966_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__26));
v___x_2967_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__28));
v___x_2968_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2968_, 0, v___y_2941_);
lean_ctor_set(v___x_2968_, 1, v___x_2894_);
v___x_2969_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2969_, 0, v___y_2941_);
lean_ctor_set(v___x_2969_, 1, v___x_2920_);
lean_inc_ref(v___x_2969_);
lean_inc_ref(v___x_2968_);
v___x_2970_ = l_Lean_Syntax_node2(v___y_2941_, v___x_2967_, v___x_2968_, v___x_2969_);
v___x_2971_ = l_Lean_Syntax_node1(v___y_2941_, v___x_2899_, v___y_2931_);
v___x_2972_ = l_Lean_Syntax_node1(v___y_2941_, v___x_2915_, v___y_2931_);
v___x_2973_ = l_Lean_Syntax_node6(v___y_2941_, v___x_2893_, v___x_2968_, v___y_2931_, v___x_2971_, v___x_2972_, v___y_2931_, v___x_2969_);
v___x_2974_ = l_Lean_Syntax_node2(v___y_2941_, v___x_2966_, v___x_2970_, v___x_2973_);
v___x_2975_ = l_Lean_Syntax_node1(v___y_2941_, v___x_2896_, v___x_2974_);
lean_inc_ref(v___y_2943_);
v___x_2976_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2976_, 0, v___y_2941_);
lean_ctor_set(v___x_2976_, 1, v___y_2943_);
v___x_2977_ = l_Lean_Syntax_node3(v___y_2941_, v___y_2935_, v___x_2965_, v___x_2975_, v___x_2976_);
v___x_2978_ = l_Lean_Syntax_node2(v___y_2941_, v___y_2934_, v___y_2931_, v___y_2931_);
v___x_2979_ = l_Lean_Syntax_node4(v___y_2941_, v___y_2930_, v___x_2964_, v___x_2977_, v___x_2978_, v___y_2931_);
v___x_2980_ = l_Lean_Syntax_node6(v___y_2941_, v___y_2923_, v___x_2950_, v___x_2951_, v___y_2931_, v___x_2953_, v___x_2963_, v___x_2979_);
lean_inc(v___y_2927_);
v___x_2981_ = l_Lean_Syntax_node2(v___y_2941_, v___y_2927_, v___x_2949_, v___x_2980_);
v___x_2982_ = lean_array_push(v___y_2926_, v___y_2940_);
v___x_2983_ = lean_array_push(v___x_2982_, v___y_2929_);
v___x_2984_ = lean_array_push(v___x_2983_, v___y_2933_);
v___x_2985_ = lean_array_push(v___x_2984_, v___x_2981_);
if (v_isShared_2886_ == 0)
{
lean_ctor_set(v___x_2885_, 1, v___y_2922_);
lean_ctor_set(v___x_2885_, 0, v___x_2985_);
v___x_2987_ = v___x_2885_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2985_);
lean_ctor_set(v_reuseFailAlloc_2988_, 1, v___y_2922_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
v___jp_2989_:
{
lean_object* v___x_3012_; lean_object* v_a_3013_; lean_object* v_a_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; 
v___x_3012_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(v_ref_2880_, v_a_2876_, v___y_2998_);
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
lean_inc_n(v_a_3013_, 2);
v_a_3014_ = lean_ctor_get(v___x_3012_, 1);
lean_inc(v_a_3014_);
lean_dec_ref(v___x_3012_);
v___x_3015_ = l_Lean_mkIdentFrom(v_structId_2872_, v___y_3011_, v___x_2888_);
lean_dec(v_structId_2872_);
v___x_3016_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3016_, 0, v_a_3013_);
lean_ctor_set(v___x_3016_, 1, v___x_2896_);
lean_ctor_set(v___x_3016_, 2, v___x_2897_);
if (lean_obj_tag(v_vis_x3f_2871_) == 1)
{
lean_object* v_val_3017_; lean_object* v___x_3018_; 
v_val_3017_ = lean_ctor_get(v_vis_x3f_2871_, 0);
lean_inc(v_val_3017_);
lean_dec_ref_known(v_vis_x3f_2871_, 1);
v___x_3018_ = l_Array_mkArray1___redArg(v_val_3017_);
v___y_2922_ = v_a_3014_;
v___y_2923_ = v___y_2990_;
v___y_2924_ = v___y_2991_;
v___y_2925_ = v___y_2992_;
v___y_2926_ = v___y_2993_;
v___y_2927_ = v___y_2994_;
v___y_2928_ = v___y_2995_;
v___y_2929_ = v___y_2996_;
v___y_2930_ = v___y_2997_;
v___y_2931_ = v___x_3016_;
v___y_2932_ = v___y_2999_;
v___y_2933_ = v___y_3000_;
v___y_2934_ = v___y_3001_;
v___y_2935_ = v___y_3002_;
v___y_2936_ = v___y_3003_;
v___y_2937_ = v___x_3015_;
v___y_2938_ = v___y_3004_;
v___y_2939_ = v___y_3005_;
v___y_2940_ = v___y_3006_;
v___y_2941_ = v_a_3013_;
v___y_2942_ = v___y_3007_;
v___y_2943_ = v___y_3008_;
v___y_2944_ = v___y_3009_;
v___y_2945_ = v___y_3010_;
v___y_2946_ = v___x_3018_;
goto v___jp_2921_;
}
else
{
lean_object* v___x_3019_; 
lean_dec(v_vis_x3f_2871_);
v___x_3019_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_2922_ = v_a_3014_;
v___y_2923_ = v___y_2990_;
v___y_2924_ = v___y_2991_;
v___y_2925_ = v___y_2992_;
v___y_2926_ = v___y_2993_;
v___y_2927_ = v___y_2994_;
v___y_2928_ = v___y_2995_;
v___y_2929_ = v___y_2996_;
v___y_2930_ = v___y_2997_;
v___y_2931_ = v___x_3016_;
v___y_2932_ = v___y_2999_;
v___y_2933_ = v___y_3000_;
v___y_2934_ = v___y_3001_;
v___y_2935_ = v___y_3002_;
v___y_2936_ = v___y_3003_;
v___y_2937_ = v___x_3015_;
v___y_2938_ = v___y_3004_;
v___y_2939_ = v___y_3005_;
v___y_2940_ = v___y_3006_;
v___y_2941_ = v_a_3013_;
v___y_2942_ = v___y_3007_;
v___y_2943_ = v___y_3008_;
v___y_2944_ = v___y_3009_;
v___y_2945_ = v___y_3010_;
v___y_2946_ = v___x_3019_;
goto v___jp_2921_;
}
}
v___jp_3020_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3049_ = l_Array_append___redArg(v___x_2897_, v___y_3048_);
lean_dec_ref(v___y_3048_);
lean_inc_n(v___y_3028_, 16);
v___x_3050_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3050_, 0, v___y_3028_);
lean_ctor_set(v___x_3050_, 1, v___x_2896_);
lean_ctor_set(v___x_3050_, 2, v___x_3049_);
lean_inc_n(v___y_3035_, 12);
lean_inc(v___y_3031_);
v___x_3051_ = l_Lean_Syntax_node7(v___y_3028_, v___y_3031_, v___y_3035_, v___y_3035_, v___x_3050_, v___y_3035_, v___y_3035_, v___y_3035_, v___y_3035_);
lean_inc(v___y_3046_);
v___x_3052_ = l_Lean_Syntax_node1(v___y_3028_, v___y_3046_, v___y_3035_);
lean_inc_ref(v___y_3022_);
v___x_3053_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3053_, 0, v___y_3028_);
lean_ctor_set(v___x_3053_, 1, v___y_3022_);
lean_inc(v___y_3032_);
v___x_3054_ = l_Lean_Syntax_node2(v___y_3028_, v___y_3032_, v___y_3038_, v___y_3035_);
v___x_3055_ = l_Lean_Syntax_node1(v___y_3028_, v___x_2896_, v___x_3054_);
lean_inc_ref(v___y_3021_);
v___x_3056_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___y_3028_);
lean_ctor_set(v___x_3056_, 1, v___y_3021_);
v___x_3057_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__29));
v___x_3058_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__30, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__30_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__30);
v___x_3059_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__31));
lean_inc(v_currMacroScope_2879_);
lean_inc(v_quotContext_2878_);
v___x_3060_ = l_Lean_addMacroScope(v_quotContext_2878_, v___x_3059_, v_currMacroScope_2879_);
lean_inc_ref(v___y_3026_);
v___x_3061_ = l_Lean_Name_mkStr2(v___y_3026_, v___x_3057_);
lean_inc(v___x_3061_);
v___x_3062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
lean_ctor_set(v___x_3062_, 1, v___x_2889_);
v___x_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3061_);
v___x_3064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3064_, 0, v___x_3063_);
lean_ctor_set(v___x_3064_, 1, v___x_2889_);
v___x_3065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3062_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3066_, 0, v___y_3028_);
lean_ctor_set(v___x_3066_, 1, v___x_3058_);
lean_ctor_set(v___x_3066_, 2, v___x_3060_);
lean_ctor_set(v___x_3066_, 3, v___x_3065_);
v___x_3067_ = l_Lean_Syntax_node1(v___y_3028_, v___x_2896_, v___y_3033_);
lean_inc(v___y_3043_);
v___x_3068_ = l_Lean_Syntax_node2(v___y_3028_, v___y_3043_, v___x_3066_, v___x_3067_);
lean_inc(v___y_3034_);
v___x_3069_ = l_Lean_Syntax_node2(v___y_3028_, v___y_3034_, v___x_3056_, v___x_3068_);
lean_inc(v___y_3047_);
v___x_3070_ = l_Lean_Syntax_node2(v___y_3028_, v___y_3047_, v___y_3035_, v___x_3069_);
lean_inc_ref(v___y_3029_);
v___x_3071_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3071_, 0, v___y_3028_);
lean_ctor_set(v___x_3071_, 1, v___y_3029_);
lean_inc(v___y_3042_);
v___x_3072_ = l_Lean_Syntax_node2(v___y_3028_, v___y_3042_, v___y_3035_, v___y_3035_);
lean_inc(v___y_3039_);
v___x_3073_ = l_Lean_Syntax_node4(v___y_3028_, v___y_3039_, v___x_3071_, v___y_3041_, v___x_3072_, v___y_3035_);
lean_inc(v___y_3023_);
v___x_3074_ = l_Lean_Syntax_node6(v___y_3028_, v___y_3023_, v___x_3052_, v___x_3053_, v___y_3035_, v___x_3055_, v___x_3070_, v___x_3073_);
lean_inc(v___y_3025_);
v___x_3075_ = l_Lean_Syntax_node2(v___y_3028_, v___y_3025_, v___x_3051_, v___x_3074_);
v___x_3076_ = l_Lean_Name_hasMacroScopes(v___y_3037_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; 
v___x_3077_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__4(v___y_3037_);
v___y_2990_ = v___y_3023_;
v___y_2991_ = v___y_3022_;
v___y_2992_ = v___y_3021_;
v___y_2993_ = v___y_3024_;
v___y_2994_ = v___y_3025_;
v___y_2995_ = v___y_3036_;
v___y_2996_ = v___y_3040_;
v___y_2997_ = v___y_3039_;
v___y_2998_ = v___y_3027_;
v___y_2999_ = v___y_3029_;
v___y_3000_ = v___x_3075_;
v___y_3001_ = v___y_3042_;
v___y_3002_ = v___y_3030_;
v___y_3003_ = v___y_3031_;
v___y_3004_ = v___y_3032_;
v___y_3005_ = v___y_3043_;
v___y_3006_ = v___y_3044_;
v___y_3007_ = v___y_3034_;
v___y_3008_ = v___y_3045_;
v___y_3009_ = v___y_3046_;
v___y_3010_ = v___y_3047_;
v___y_3011_ = v___x_3077_;
goto v___jp_2989_;
}
else
{
lean_object* v_view_3078_; lean_object* v_name_3079_; lean_object* v_imported_3080_; lean_object* v_ctx_3081_; lean_object* v_scopes_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3091_; 
v_view_3078_ = l_Lean_extractMacroScopes(v___y_3037_);
v_name_3079_ = lean_ctor_get(v_view_3078_, 0);
v_imported_3080_ = lean_ctor_get(v_view_3078_, 1);
v_ctx_3081_ = lean_ctor_get(v_view_3078_, 2);
v_scopes_3082_ = lean_ctor_get(v_view_3078_, 3);
v_isSharedCheck_3091_ = !lean_is_exclusive(v_view_3078_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3084_ = v_view_3078_;
v_isShared_3085_ = v_isSharedCheck_3091_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_scopes_3082_);
lean_inc(v_ctx_3081_);
lean_inc(v_imported_3080_);
lean_inc(v_name_3079_);
lean_dec(v_view_3078_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3091_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3086_; lean_object* v___x_3088_; 
v___x_3086_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__4(v_name_3079_);
if (v_isShared_3085_ == 0)
{
lean_ctor_set(v___x_3084_, 0, v___x_3086_);
v___x_3088_ = v___x_3084_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v___x_3086_);
lean_ctor_set(v_reuseFailAlloc_3090_, 1, v_imported_3080_);
lean_ctor_set(v_reuseFailAlloc_3090_, 2, v_ctx_3081_);
lean_ctor_set(v_reuseFailAlloc_3090_, 3, v_scopes_3082_);
v___x_3088_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
lean_object* v___x_3089_; 
v___x_3089_ = l_Lean_MacroScopesView_review(v___x_3088_);
v___y_2990_ = v___y_3023_;
v___y_2991_ = v___y_3022_;
v___y_2992_ = v___y_3021_;
v___y_2993_ = v___y_3024_;
v___y_2994_ = v___y_3025_;
v___y_2995_ = v___y_3036_;
v___y_2996_ = v___y_3040_;
v___y_2997_ = v___y_3039_;
v___y_2998_ = v___y_3027_;
v___y_2999_ = v___y_3029_;
v___y_3000_ = v___x_3075_;
v___y_3001_ = v___y_3042_;
v___y_3002_ = v___y_3030_;
v___y_3003_ = v___y_3031_;
v___y_3004_ = v___y_3032_;
v___y_3005_ = v___y_3043_;
v___y_3006_ = v___y_3044_;
v___y_3007_ = v___y_3034_;
v___y_3008_ = v___y_3045_;
v___y_3009_ = v___y_3046_;
v___y_3010_ = v___y_3047_;
v___y_3011_ = v___x_3089_;
goto v___jp_2989_;
}
}
}
}
v___jp_3092_:
{
lean_object* v___x_3117_; lean_object* v_a_3118_; lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3168_; 
v___x_3117_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(v_ref_2880_, v_a_2876_, v___y_3103_);
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
v_a_3119_ = lean_ctor_get(v___x_3117_, 1);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3121_ = v___x_3117_;
v_isShared_3122_ = v_isSharedCheck_3168_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_inc(v_a_3118_);
lean_dec(v___x_3117_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3168_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; lean_object* v___x_3125_; 
v___x_3123_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__33));
lean_inc(v_a_3118_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set_tag(v___x_3121_, 2);
lean_ctor_set(v___x_3121_, 1, v___x_2894_);
v___x_3125_ = v___x_3121_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3118_);
lean_ctor_set(v_reuseFailAlloc_3167_, 1, v___x_2894_);
v___x_3125_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v_a_3157_; lean_object* v_a_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
lean_inc_n(v_a_3118_, 17);
v___x_3126_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3126_, 0, v_a_3118_);
lean_ctor_set(v___x_3126_, 1, v___x_2896_);
lean_ctor_set(v___x_3126_, 2, v___x_2897_);
v___x_3127_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__1___closed__1));
v___x_3128_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__2));
v___x_3129_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__34, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__34_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__34);
v___x_3130_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__35));
lean_inc_n(v_currMacroScope_2879_, 2);
lean_inc_n(v_quotContext_2878_, 2);
v___x_3131_ = l_Lean_addMacroScope(v_quotContext_2878_, v___x_3130_, v_currMacroScope_2879_);
v___x_3132_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3132_, 0, v_a_3118_);
lean_ctor_set(v___x_3132_, 1, v___x_3129_);
lean_ctor_set(v___x_3132_, 2, v___x_3131_);
lean_ctor_set(v___x_3132_, 3, v___x_2889_);
lean_inc_ref_n(v___x_3126_, 10);
v___x_3133_ = l_Lean_Syntax_node2(v_a_3118_, v___x_3128_, v___x_3132_, v___x_3126_);
v___x_3134_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__36));
lean_inc_ref(v___y_3104_);
v___x_3135_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3135_, 0, v_a_3118_);
lean_ctor_set(v___x_3135_, 1, v___y_3104_);
lean_inc_ref(v___x_3135_);
v___x_3136_ = l_Lean_Syntax_node3(v_a_3118_, v___x_3134_, v___x_3135_, v___x_3126_, v___y_3105_);
v___x_3137_ = l_Lean_Syntax_node3(v_a_3118_, v___x_2896_, v___x_3126_, v___x_3126_, v___x_3136_);
v___x_3138_ = l_Lean_Syntax_node2(v_a_3118_, v___x_3127_, v___x_3133_, v___x_3137_);
v___x_3139_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3139_, 0, v_a_3118_);
lean_ctor_set(v___x_3139_, 1, v___x_2909_);
v___x_3140_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__38, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__38_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__38);
v___x_3141_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__39));
v___x_3142_ = l_Lean_addMacroScope(v_quotContext_2878_, v___x_3141_, v_currMacroScope_2879_);
v___x_3143_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3143_, 0, v_a_3118_);
lean_ctor_set(v___x_3143_, 1, v___x_3140_);
lean_ctor_set(v___x_3143_, 2, v___x_3142_);
lean_ctor_set(v___x_3143_, 3, v___x_2889_);
v___x_3144_ = l_Lean_Syntax_node2(v_a_3118_, v___x_3128_, v___x_3143_, v___x_3126_);
v___x_3145_ = l_Nat_reprFast(v_structArity_2873_);
v___x_3146_ = lean_box(2);
v___x_3147_ = l_Lean_Syntax_mkNumLit(v___x_3145_, v___x_3146_);
v___x_3148_ = l_Lean_Syntax_node3(v_a_3118_, v___x_3134_, v___x_3135_, v___x_3126_, v___x_3147_);
v___x_3149_ = l_Lean_Syntax_node3(v_a_3118_, v___x_2896_, v___x_3126_, v___x_3126_, v___x_3148_);
v___x_3150_ = l_Lean_Syntax_node2(v_a_3118_, v___x_3127_, v___x_3144_, v___x_3149_);
v___x_3151_ = l_Lean_Syntax_node3(v_a_3118_, v___x_2896_, v___x_3138_, v___x_3139_, v___x_3150_);
v___x_3152_ = l_Lean_Syntax_node1(v_a_3118_, v___x_2899_, v___x_3151_);
v___x_3153_ = l_Lean_Syntax_node1(v_a_3118_, v___x_2915_, v___x_3126_);
v___x_3154_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3154_, 0, v_a_3118_);
lean_ctor_set(v___x_3154_, 1, v___x_2920_);
v___x_3155_ = l_Lean_Syntax_node6(v_a_3118_, v___x_2893_, v___x_3125_, v___x_3126_, v___x_3152_, v___x_3153_, v___x_3126_, v___x_3154_);
v___x_3156_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(v_ref_2880_, v_a_2876_, v_a_3119_);
v_a_3157_ = lean_ctor_get(v___x_3156_, 0);
lean_inc_n(v_a_3157_, 2);
v_a_3158_ = lean_ctor_get(v___x_3156_, 1);
lean_inc(v_a_3158_);
lean_dec_ref(v___x_3156_);
v___x_3159_ = l_Lean_mkIdentFrom(v_structId_2872_, v___y_3116_, v___x_2888_);
v___x_3160_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__43, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__43_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__43);
lean_inc(v_structId_2872_);
v___x_3161_ = lean_array_push(v___x_3160_, v_structId_2872_);
v___x_3162_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3146_);
lean_ctor_set(v___x_3162_, 1, v___x_3123_);
lean_ctor_set(v___x_3162_, 2, v___x_3161_);
v___x_3163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3163_, 0, v_a_3157_);
lean_ctor_set(v___x_3163_, 1, v___x_2896_);
lean_ctor_set(v___x_3163_, 2, v___x_2897_);
if (lean_obj_tag(v_vis_x3f_2871_) == 1)
{
lean_object* v_val_3164_; lean_object* v___x_3165_; 
v_val_3164_ = lean_ctor_get(v_vis_x3f_2871_, 0);
lean_inc(v_val_3164_);
v___x_3165_ = l_Array_mkArray1___redArg(v_val_3164_);
v___y_3021_ = v___y_3093_;
v___y_3022_ = v___y_3094_;
v___y_3023_ = v___y_3095_;
v___y_3024_ = v___y_3096_;
v___y_3025_ = v___y_3098_;
v___y_3026_ = v___y_3099_;
v___y_3027_ = v_a_3158_;
v___y_3028_ = v_a_3157_;
v___y_3029_ = v___y_3104_;
v___y_3030_ = v___y_3107_;
v___y_3031_ = v___y_3108_;
v___y_3032_ = v___y_3109_;
v___y_3033_ = v___x_3162_;
v___y_3034_ = v___y_3112_;
v___y_3035_ = v___x_3163_;
v___y_3036_ = v___y_3097_;
v___y_3037_ = v___y_3100_;
v___y_3038_ = v___x_3159_;
v___y_3039_ = v___y_3102_;
v___y_3040_ = v___y_3101_;
v___y_3041_ = v___x_3155_;
v___y_3042_ = v___y_3106_;
v___y_3043_ = v___y_3110_;
v___y_3044_ = v___y_3111_;
v___y_3045_ = v___y_3113_;
v___y_3046_ = v___y_3114_;
v___y_3047_ = v___y_3115_;
v___y_3048_ = v___x_3165_;
goto v___jp_3020_;
}
else
{
lean_object* v___x_3166_; 
v___x_3166_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_3021_ = v___y_3093_;
v___y_3022_ = v___y_3094_;
v___y_3023_ = v___y_3095_;
v___y_3024_ = v___y_3096_;
v___y_3025_ = v___y_3098_;
v___y_3026_ = v___y_3099_;
v___y_3027_ = v_a_3158_;
v___y_3028_ = v_a_3157_;
v___y_3029_ = v___y_3104_;
v___y_3030_ = v___y_3107_;
v___y_3031_ = v___y_3108_;
v___y_3032_ = v___y_3109_;
v___y_3033_ = v___x_3162_;
v___y_3034_ = v___y_3112_;
v___y_3035_ = v___x_3163_;
v___y_3036_ = v___y_3097_;
v___y_3037_ = v___y_3100_;
v___y_3038_ = v___x_3159_;
v___y_3039_ = v___y_3102_;
v___y_3040_ = v___y_3101_;
v___y_3041_ = v___x_3155_;
v___y_3042_ = v___y_3106_;
v___y_3043_ = v___y_3110_;
v___y_3044_ = v___y_3111_;
v___y_3045_ = v___y_3113_;
v___y_3046_ = v___y_3114_;
v___y_3047_ = v___y_3115_;
v___y_3048_ = v___x_3166_;
goto v___jp_3020_;
}
}
}
}
v___jp_3169_:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; uint8_t v___x_3224_; 
v___x_3186_ = l_Array_append___redArg(v___x_2897_, v___y_3185_);
lean_dec_ref(v___y_3185_);
lean_inc_n(v___y_3175_, 20);
v___x_3187_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3187_, 0, v___y_3175_);
lean_ctor_set(v___x_3187_, 1, v___x_2896_);
lean_ctor_set(v___x_3187_, 2, v___x_3186_);
lean_inc_n(v___y_3177_, 12);
lean_inc(v___y_3180_);
v___x_3188_ = l_Lean_Syntax_node7(v___y_3175_, v___y_3180_, v___y_3177_, v___y_3177_, v___x_3187_, v___y_3177_, v___y_3177_, v___y_3177_, v___y_3177_);
v___x_3189_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__0));
lean_inc_ref_n(v___y_3184_, 2);
v___x_3190_ = l_Lean_Name_mkStr4(v___x_2891_, v___x_2892_, v___y_3184_, v___x_3189_);
v___x_3191_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__44));
v___x_3192_ = l_Lean_Syntax_node1(v___y_3175_, v___x_3191_, v___y_3177_);
v___x_3193_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___y_3175_);
lean_ctor_set(v___x_3193_, 1, v___x_3189_);
lean_inc(v___y_3181_);
v___x_3194_ = l_Lean_Syntax_node2(v___y_3175_, v___y_3181_, v___y_3183_, v___y_3177_);
v___x_3195_ = l_Lean_Syntax_node1(v___y_3175_, v___x_2896_, v___x_3194_);
v___x_3196_ = ((lean_object*)(l_Lake_configField___closed__27));
v___x_3197_ = l_Lean_Name_mkStr4(v___x_2891_, v___x_2892_, v___y_3184_, v___x_3196_);
v___x_3198_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45));
v___x_3199_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3));
v___x_3200_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3200_, 0, v___y_3175_);
lean_ctor_set(v___x_3200_, 1, v___x_3199_);
v___x_3201_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46));
v___x_3202_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__47, &l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__47_once, _init_l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__47);
v___x_3203_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__48));
lean_inc(v_currMacroScope_2879_);
lean_inc(v_quotContext_2878_);
v___x_3204_ = l_Lean_addMacroScope(v_quotContext_2878_, v___x_3203_, v_currMacroScope_2879_);
v___x_3205_ = ((lean_object*)(l_Lake_configField___closed__1));
v___x_3206_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__53));
v___x_3207_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3207_, 0, v___y_3175_);
lean_ctor_set(v___x_3207_, 1, v___x_3202_);
lean_ctor_set(v___x_3207_, 2, v___x_3204_);
lean_ctor_set(v___x_3207_, 3, v___x_3206_);
lean_inc(v_structTy_2874_);
v___x_3208_ = l_Lean_Syntax_node1(v___y_3175_, v___x_2896_, v_structTy_2874_);
v___x_3209_ = l_Lean_Syntax_node2(v___y_3175_, v___x_3201_, v___x_3207_, v___x_3208_);
v___x_3210_ = l_Lean_Syntax_node2(v___y_3175_, v___x_3198_, v___x_3200_, v___x_3209_);
lean_inc(v___x_3197_);
v___x_3211_ = l_Lean_Syntax_node2(v___y_3175_, v___x_3197_, v___y_3177_, v___x_3210_);
lean_inc_ref(v___y_3176_);
v___x_3212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___y_3175_);
lean_ctor_set(v___x_3212_, 1, v___y_3176_);
v___x_3213_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__54));
v___x_3214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__16));
v___x_3215_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3215_, 0, v___y_3175_);
lean_ctor_set(v___x_3215_, 1, v___x_3214_);
lean_inc(v___y_3178_);
v___x_3216_ = l_Lean_Syntax_node1(v___y_3175_, v___x_2896_, v___y_3178_);
v___x_3217_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__17));
v___x_3218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3218_, 0, v___y_3175_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
v___x_3219_ = l_Lean_Syntax_node3(v___y_3175_, v___x_3213_, v___x_3215_, v___x_3216_, v___x_3218_);
lean_inc(v___y_3179_);
v___x_3220_ = l_Lean_Syntax_node2(v___y_3175_, v___y_3179_, v___y_3177_, v___y_3177_);
lean_inc(v___y_3173_);
v___x_3221_ = l_Lean_Syntax_node4(v___y_3175_, v___y_3173_, v___x_3212_, v___x_3219_, v___x_3220_, v___y_3177_);
lean_inc(v___x_3190_);
v___x_3222_ = l_Lean_Syntax_node6(v___y_3175_, v___x_3190_, v___x_3192_, v___x_3193_, v___y_3177_, v___x_3195_, v___x_3211_, v___x_3221_);
lean_inc(v___y_3171_);
v___x_3223_ = l_Lean_Syntax_node2(v___y_3175_, v___y_3171_, v___x_3188_, v___x_3222_);
v___x_3224_ = l_Lean_Name_hasMacroScopes(v___y_3172_);
if (v___x_3224_ == 0)
{
lean_object* v___x_3225_; 
lean_inc(v___y_3172_);
v___x_3225_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__3(v___y_3172_);
v___y_3093_ = v___x_3199_;
v___y_3094_ = v___x_3189_;
v___y_3095_ = v___x_3190_;
v___y_3096_ = v___y_3170_;
v___y_3097_ = v___x_3214_;
v___y_3098_ = v___y_3171_;
v___y_3099_ = v___x_3205_;
v___y_3100_ = v___y_3172_;
v___y_3101_ = v___x_3223_;
v___y_3102_ = v___y_3173_;
v___y_3103_ = v___y_3174_;
v___y_3104_ = v___y_3176_;
v___y_3105_ = v___y_3178_;
v___y_3106_ = v___y_3179_;
v___y_3107_ = v___x_3213_;
v___y_3108_ = v___y_3180_;
v___y_3109_ = v___y_3181_;
v___y_3110_ = v___x_3201_;
v___y_3111_ = v___y_3182_;
v___y_3112_ = v___x_3198_;
v___y_3113_ = v___x_3217_;
v___y_3114_ = v___x_3191_;
v___y_3115_ = v___x_3197_;
v___y_3116_ = v___x_3225_;
goto v___jp_3092_;
}
else
{
lean_object* v_view_3226_; lean_object* v_name_3227_; lean_object* v_imported_3228_; lean_object* v_ctx_3229_; lean_object* v_scopes_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3239_; 
lean_inc(v___y_3172_);
v_view_3226_ = l_Lean_extractMacroScopes(v___y_3172_);
v_name_3227_ = lean_ctor_get(v_view_3226_, 0);
v_imported_3228_ = lean_ctor_get(v_view_3226_, 1);
v_ctx_3229_ = lean_ctor_get(v_view_3226_, 2);
v_scopes_3230_ = lean_ctor_get(v_view_3226_, 3);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_view_3226_);
if (v_isSharedCheck_3239_ == 0)
{
v___x_3232_ = v_view_3226_;
v_isShared_3233_ = v_isSharedCheck_3239_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_scopes_3230_);
lean_inc(v_ctx_3229_);
lean_inc(v_imported_3228_);
lean_inc(v_name_3227_);
lean_dec(v_view_3226_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3239_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3234_; lean_object* v___x_3236_; 
v___x_3234_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__3(v_name_3227_);
if (v_isShared_3233_ == 0)
{
lean_ctor_set(v___x_3232_, 0, v___x_3234_);
v___x_3236_ = v___x_3232_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3234_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v_imported_3228_);
lean_ctor_set(v_reuseFailAlloc_3238_, 2, v_ctx_3229_);
lean_ctor_set(v_reuseFailAlloc_3238_, 3, v_scopes_3230_);
v___x_3236_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
lean_object* v___x_3237_; 
v___x_3237_ = l_Lean_MacroScopesView_review(v___x_3236_);
v___y_3093_ = v___x_3199_;
v___y_3094_ = v___x_3189_;
v___y_3095_ = v___x_3190_;
v___y_3096_ = v___y_3170_;
v___y_3097_ = v___x_3214_;
v___y_3098_ = v___y_3171_;
v___y_3099_ = v___x_3205_;
v___y_3100_ = v___y_3172_;
v___y_3101_ = v___x_3223_;
v___y_3102_ = v___y_3173_;
v___y_3103_ = v___y_3174_;
v___y_3104_ = v___y_3176_;
v___y_3105_ = v___y_3178_;
v___y_3106_ = v___y_3179_;
v___y_3107_ = v___x_3213_;
v___y_3108_ = v___y_3180_;
v___y_3109_ = v___y_3181_;
v___y_3110_ = v___x_3201_;
v___y_3111_ = v___y_3182_;
v___y_3112_ = v___x_3198_;
v___y_3113_ = v___x_3217_;
v___y_3114_ = v___x_3191_;
v___y_3115_ = v___x_3197_;
v___y_3116_ = v___x_3237_;
goto v___jp_3092_;
}
}
}
}
v___jp_3240_:
{
lean_object* v___x_3254_; lean_object* v_a_3255_; lean_object* v_a_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___x_3254_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(v_ref_2880_, v_a_2876_, v___y_3241_);
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
lean_inc_n(v_a_3255_, 2);
v_a_3256_ = lean_ctor_get(v___x_3254_, 1);
lean_inc(v_a_3256_);
lean_dec_ref(v___x_3254_);
v___x_3257_ = l_Lean_mkIdentFrom(v_structId_2872_, v___y_3253_, v___x_2888_);
v___x_3258_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3258_, 0, v_a_3255_);
lean_ctor_set(v___x_3258_, 1, v___x_2896_);
lean_ctor_set(v___x_3258_, 2, v___x_2897_);
if (lean_obj_tag(v_vis_x3f_2871_) == 1)
{
lean_object* v_val_3259_; lean_object* v___x_3260_; 
v_val_3259_ = lean_ctor_get(v_vis_x3f_2871_, 0);
lean_inc(v_val_3259_);
v___x_3260_ = l_Array_mkArray1___redArg(v_val_3259_);
v___y_3170_ = v___y_3245_;
v___y_3171_ = v___y_3247_;
v___y_3172_ = v___y_3249_;
v___y_3173_ = v___y_3251_;
v___y_3174_ = v_a_3256_;
v___y_3175_ = v_a_3255_;
v___y_3176_ = v___y_3242_;
v___y_3177_ = v___x_3258_;
v___y_3178_ = v___y_3243_;
v___y_3179_ = v___y_3244_;
v___y_3180_ = v___y_3246_;
v___y_3181_ = v___y_3248_;
v___y_3182_ = v___y_3250_;
v___y_3183_ = v___x_3257_;
v___y_3184_ = v___y_3252_;
v___y_3185_ = v___x_3260_;
goto v___jp_3169_;
}
else
{
lean_object* v___x_3261_; 
v___x_3261_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_3170_ = v___y_3245_;
v___y_3171_ = v___y_3247_;
v___y_3172_ = v___y_3249_;
v___y_3173_ = v___y_3251_;
v___y_3174_ = v_a_3256_;
v___y_3175_ = v_a_3255_;
v___y_3176_ = v___y_3242_;
v___y_3177_ = v___x_3258_;
v___y_3178_ = v___y_3243_;
v___y_3179_ = v___y_3244_;
v___y_3180_ = v___y_3246_;
v___y_3181_ = v___y_3248_;
v___y_3182_ = v___y_3250_;
v___y_3183_ = v___x_3257_;
v___y_3184_ = v___y_3252_;
v___y_3185_ = v___x_3261_;
goto v___jp_3169_;
}
}
v___jp_3262_:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v_cmds_3286_; lean_object* v_fields_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3318_; 
v___x_3273_ = l_Array_append___redArg(v___x_2897_, v___y_3272_);
lean_dec_ref(v___y_3272_);
lean_inc_n(v___y_3264_, 5);
v___x_3274_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3274_, 0, v___y_3264_);
lean_ctor_set(v___x_3274_, 1, v___x_2896_);
lean_ctor_set(v___x_3274_, 2, v___x_3273_);
lean_inc_n(v___y_3266_, 9);
lean_inc(v___y_3268_);
v___x_3275_ = l_Lean_Syntax_node7(v___y_3264_, v___y_3268_, v___y_3266_, v___y_3266_, v___x_3274_, v___y_3266_, v___y_3266_, v___y_3266_, v___y_3266_);
v___x_3276_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__29));
lean_inc_ref_n(v___y_3271_, 3);
v___x_3277_ = l_Lean_Name_mkStr4(v___x_2891_, v___x_2892_, v___y_3271_, v___x_3276_);
v___x_3278_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__30));
v___x_3279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___y_3264_);
lean_ctor_set(v___x_3279_, 1, v___x_3278_);
v___x_3280_ = ((lean_object*)(l_Lake_configDecl___closed__8));
v___x_3281_ = l_Lean_Name_mkStr4(v___x_2891_, v___x_2892_, v___y_3271_, v___x_3280_);
lean_inc(v___y_3265_);
lean_inc(v___x_3281_);
v___x_3282_ = l_Lean_Syntax_node2(v___y_3264_, v___x_3281_, v___y_3265_, v___y_3266_);
v___x_3283_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__31));
v___x_3284_ = l_Lean_Name_mkStr4(v___x_2891_, v___x_2892_, v___y_3271_, v___x_3283_);
v___x_3285_ = l_Lean_Syntax_node2(v___y_3264_, v___x_3284_, v___y_3266_, v___y_3266_);
v_cmds_3286_ = lean_ctor_get(v___y_3270_, 0);
v_fields_3287_ = lean_ctor_get(v___y_3270_, 1);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___y_3270_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3289_ = v___y_3270_;
v_isShared_3290_ = v_isSharedCheck_3318_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_fields_3287_);
lean_inc(v_cmds_3286_);
lean_dec(v___y_3270_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3318_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3295_; 
v___x_3291_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__13));
lean_inc_ref(v___y_3271_);
v___x_3292_ = l_Lean_Name_mkStr4(v___x_2891_, v___x_2892_, v___y_3271_, v___x_3291_);
v___x_3293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14));
lean_inc(v___y_3264_);
if (v_isShared_3290_ == 0)
{
lean_ctor_set_tag(v___x_3289_, 2);
lean_ctor_set(v___x_3289_, 1, v___x_3293_);
lean_ctor_set(v___x_3289_, 0, v___y_3264_);
v___x_3295_ = v___x_3289_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___y_3264_);
lean_ctor_set(v_reuseFailAlloc_3317_, 1, v___x_3293_);
v___x_3295_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; uint8_t v___x_3301_; 
v___x_3296_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__55));
lean_inc_n(v___y_3266_, 3);
lean_inc_n(v___y_3264_, 3);
v___x_3297_ = l_Lean_Syntax_node2(v___y_3264_, v___x_3296_, v___y_3266_, v___y_3266_);
lean_inc(v___x_3292_);
v___x_3298_ = l_Lean_Syntax_node4(v___y_3264_, v___x_3292_, v___x_3295_, v_fields_3287_, v___x_3297_, v___y_3266_);
v___x_3299_ = l_Lean_Syntax_node5(v___y_3264_, v___x_3277_, v___x_3279_, v___x_3282_, v___x_3285_, v___x_3298_, v___y_3266_);
lean_inc(v___y_3267_);
v___x_3300_ = l_Lean_Syntax_node2(v___y_3264_, v___y_3267_, v___x_3275_, v___x_3299_);
v___x_3301_ = l_Lean_Name_hasMacroScopes(v___y_3269_);
if (v___x_3301_ == 0)
{
lean_object* v___x_3302_; 
lean_inc(v___y_3269_);
v___x_3302_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__2(v___y_3269_);
v___y_3241_ = v___y_3263_;
v___y_3242_ = v___x_3293_;
v___y_3243_ = v___y_3265_;
v___y_3244_ = v___x_3296_;
v___y_3245_ = v_cmds_3286_;
v___y_3246_ = v___y_3268_;
v___y_3247_ = v___y_3267_;
v___y_3248_ = v___x_3281_;
v___y_3249_ = v___y_3269_;
v___y_3250_ = v___x_3300_;
v___y_3251_ = v___x_3292_;
v___y_3252_ = v___y_3271_;
v___y_3253_ = v___x_3302_;
goto v___jp_3240_;
}
else
{
lean_object* v_view_3303_; lean_object* v_name_3304_; lean_object* v_imported_3305_; lean_object* v_ctx_3306_; lean_object* v_scopes_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3316_; 
lean_inc(v___y_3269_);
v_view_3303_ = l_Lean_extractMacroScopes(v___y_3269_);
v_name_3304_ = lean_ctor_get(v_view_3303_, 0);
v_imported_3305_ = lean_ctor_get(v_view_3303_, 1);
v_ctx_3306_ = lean_ctor_get(v_view_3303_, 2);
v_scopes_3307_ = lean_ctor_get(v_view_3303_, 3);
v_isSharedCheck_3316_ = !lean_is_exclusive(v_view_3303_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3309_ = v_view_3303_;
v_isShared_3310_ = v_isSharedCheck_3316_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_scopes_3307_);
lean_inc(v_ctx_3306_);
lean_inc(v_imported_3305_);
lean_inc(v_name_3304_);
lean_dec(v_view_3303_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3316_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3311_; lean_object* v___x_3313_; 
v___x_3311_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__2(v_name_3304_);
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 0, v___x_3311_);
v___x_3313_ = v___x_3309_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3311_);
lean_ctor_set(v_reuseFailAlloc_3315_, 1, v_imported_3305_);
lean_ctor_set(v_reuseFailAlloc_3315_, 2, v_ctx_3306_);
lean_ctor_set(v_reuseFailAlloc_3315_, 3, v_scopes_3307_);
v___x_3313_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
lean_object* v___x_3314_; 
v___x_3314_ = l_Lean_MacroScopesView_review(v___x_3313_);
v___y_3241_ = v___y_3263_;
v___y_3242_ = v___x_3293_;
v___y_3243_ = v___y_3265_;
v___y_3244_ = v___x_3296_;
v___y_3245_ = v_cmds_3286_;
v___y_3246_ = v___y_3268_;
v___y_3247_ = v___y_3267_;
v___y_3248_ = v___x_3281_;
v___y_3249_ = v___y_3269_;
v___y_3250_ = v___x_3300_;
v___y_3251_ = v___x_3292_;
v___y_3252_ = v___y_3271_;
v___y_3253_ = v___x_3314_;
goto v___jp_3240_;
}
}
}
}
}
}
v___jp_3319_:
{
lean_object* v___x_3324_; lean_object* v_a_3325_; lean_object* v_a_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3324_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__0(v_ref_2880_, v_a_2876_, v___y_3320_);
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
lean_inc_n(v_a_3325_, 2);
v_a_3326_ = lean_ctor_get(v___x_3324_, 1);
lean_inc(v_a_3326_);
lean_dec_ref(v___x_3324_);
v___x_3327_ = l_Lean_mkIdentFrom(v_structId_2872_, v___y_3323_, v___x_2888_);
v___x_3328_ = ((lean_object*)(l_Lake_configDecl___closed__31));
v___x_3329_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53));
v___x_3330_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54));
v___x_3331_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3331_, 0, v_a_3325_);
lean_ctor_set(v___x_3331_, 1, v___x_2896_);
lean_ctor_set(v___x_3331_, 2, v___x_2897_);
if (lean_obj_tag(v_vis_x3f_2871_) == 1)
{
lean_object* v_val_3332_; lean_object* v___x_3333_; 
v_val_3332_ = lean_ctor_get(v_vis_x3f_2871_, 0);
lean_inc(v_val_3332_);
v___x_3333_ = l_Array_mkArray1___redArg(v_val_3332_);
v___y_3263_ = v_a_3326_;
v___y_3264_ = v_a_3325_;
v___y_3265_ = v___x_3327_;
v___y_3266_ = v___x_3331_;
v___y_3267_ = v___x_3329_;
v___y_3268_ = v___x_3330_;
v___y_3269_ = v___y_3321_;
v___y_3270_ = v___y_3322_;
v___y_3271_ = v___x_3328_;
v___y_3272_ = v___x_3333_;
goto v___jp_3262_;
}
else
{
lean_object* v___x_3334_; 
v___x_3334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_3263_ = v_a_3326_;
v___y_3264_ = v_a_3325_;
v___y_3265_ = v___x_3327_;
v___y_3266_ = v___x_3331_;
v___y_3267_ = v___x_3329_;
v___y_3268_ = v___x_3330_;
v___y_3269_ = v___y_3321_;
v___y_3270_ = v___y_3322_;
v___y_3271_ = v___x_3328_;
v___y_3272_ = v___x_3334_;
goto v___jp_3262_;
}
}
v___jp_3335_:
{
lean_object* v___x_3338_; uint8_t v___x_3339_; 
v___x_3338_ = l_Lean_TSyntax_getId(v_structId_2872_);
v___x_3339_ = l_Lean_Name_hasMacroScopes(v___x_3338_);
if (v___x_3339_ == 0)
{
lean_object* v___x_3340_; 
lean_inc(v___x_3338_);
v___x_3340_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__1(v___x_3338_);
v___y_3320_ = v_a_3337_;
v___y_3321_ = v___x_3338_;
v___y_3322_ = v_a_3336_;
v___y_3323_ = v___x_3340_;
goto v___jp_3319_;
}
else
{
lean_object* v_view_3341_; lean_object* v_name_3342_; lean_object* v_imported_3343_; lean_object* v_ctx_3344_; lean_object* v_scopes_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3354_; 
lean_inc(v___x_3338_);
v_view_3341_ = l_Lean_extractMacroScopes(v___x_3338_);
v_name_3342_ = lean_ctor_get(v_view_3341_, 0);
v_imported_3343_ = lean_ctor_get(v_view_3341_, 1);
v_ctx_3344_ = lean_ctor_get(v_view_3341_, 2);
v_scopes_3345_ = lean_ctor_get(v_view_3341_, 3);
v_isSharedCheck_3354_ = !lean_is_exclusive(v_view_3341_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3347_ = v_view_3341_;
v_isShared_3348_ = v_isSharedCheck_3354_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_scopes_3345_);
lean_inc(v_ctx_3344_);
lean_inc(v_imported_3343_);
lean_inc(v_name_3342_);
lean_dec(v_view_3341_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3354_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3349_; lean_object* v___x_3351_; 
v___x_3349_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___lam__1(v_name_3342_);
if (v_isShared_3348_ == 0)
{
lean_ctor_set(v___x_3347_, 0, v___x_3349_);
v___x_3351_ = v___x_3347_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3349_);
lean_ctor_set(v_reuseFailAlloc_3353_, 1, v_imported_3343_);
lean_ctor_set(v_reuseFailAlloc_3353_, 2, v_ctx_3344_);
lean_ctor_set(v_reuseFailAlloc_3353_, 3, v_scopes_3345_);
v___x_3351_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
lean_object* v___x_3352_; 
v___x_3352_ = l_Lean_MacroScopesView_review(v___x_3351_);
v___y_3320_ = v_a_3337_;
v___y_3321_ = v___x_3338_;
v___y_3322_ = v_a_3336_;
v___y_3323_ = v___x_3352_;
goto v___jp_3319_;
}
}
}
}
v___jp_3355_:
{
if (lean_obj_tag(v___y_3356_) == 0)
{
lean_object* v_a_3357_; lean_object* v_a_3358_; 
v_a_3357_ = lean_ctor_get(v___y_3356_, 0);
lean_inc(v_a_3357_);
v_a_3358_ = lean_ctor_get(v___y_3356_, 1);
lean_inc(v_a_3358_);
lean_dec_ref_known(v___y_3356_, 2);
v_a_3336_ = v_a_3357_;
v_a_3337_ = v_a_3358_;
goto v___jp_3335_;
}
else
{
lean_object* v_a_3359_; lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_del_object(v___x_2885_);
lean_dec(v_structTy_2874_);
lean_dec(v_structArity_2873_);
lean_dec(v_structId_2872_);
lean_dec(v_vis_x3f_2871_);
v_a_3359_ = lean_ctor_get(v___y_3356_, 0);
v_a_3360_ = lean_ctor_get(v___y_3356_, 1);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___y_3356_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___y_3356_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_inc(v_a_3359_);
lean_dec(v___y_3356_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3359_);
lean_ctor_set(v_reuseFailAlloc_3366_, 1, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___boxed(lean_object* v_vis_x3f_3378_, lean_object* v_structId_3379_, lean_object* v_structArity_3380_, lean_object* v_structTy_3381_, lean_object* v_views_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_){
_start:
{
lean_object* v_res_3385_; 
v_res_3385_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls(v_vis_x3f_3378_, v_structId_3379_, v_structArity_3380_, v_structTy_3381_, v_views_3382_, v_a_3383_, v_a_3384_);
lean_dec_ref(v_a_3383_);
lean_dec_ref(v_views_3382_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkFieldView_spec__0(size_t v_sz_3386_, size_t v_i_3387_, lean_object* v_bs_3388_){
_start:
{
uint8_t v___x_3389_; 
v___x_3389_ = lean_usize_dec_lt(v_i_3387_, v_sz_3386_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3390_; 
v___x_3390_ = l_unsafeCast___redArg(v_bs_3388_);
lean_dec_ref(v_bs_3388_);
return v___x_3390_;
}
else
{
lean_object* v_v_3391_; lean_object* v___x_3392_; lean_object* v_id_3393_; lean_object* v___x_3394_; lean_object* v_bs_x27_3395_; size_t v___x_3396_; size_t v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v_v_3391_ = lean_array_uget_borrowed(v_bs_3388_, v_i_3387_);
v___x_3392_ = l_unsafeCast___redArg(v_v_3391_);
v_id_3393_ = lean_ctor_get(v___x_3392_, 1);
lean_inc(v_id_3393_);
lean_dec(v___x_3392_);
v___x_3394_ = lean_unsigned_to_nat(0u);
v_bs_x27_3395_ = lean_array_uset(v_bs_3388_, v_i_3387_, v___x_3394_);
v___x_3396_ = ((size_t)1ULL);
v___x_3397_ = lean_usize_add(v_i_3387_, v___x_3396_);
v___x_3398_ = l_unsafeCast___redArg(v_id_3393_);
lean_dec(v_id_3393_);
v___x_3399_ = lean_array_uset(v_bs_x27_3395_, v_i_3387_, v___x_3398_);
v_i_3387_ = v___x_3397_;
v_bs_3388_ = v___x_3399_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkFieldView_spec__0___boxed(lean_object* v_sz_3401_, lean_object* v_i_3402_, lean_object* v_bs_3403_){
_start:
{
size_t v_sz_boxed_3404_; size_t v_i_boxed_3405_; lean_object* v_res_3406_; 
v_sz_boxed_3404_ = lean_unbox_usize(v_sz_3401_);
lean_dec(v_sz_3401_);
v_i_boxed_3405_ = lean_unbox_usize(v_i_3402_);
lean_dec(v_i_3402_);
v_res_3406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkFieldView_spec__0(v_sz_boxed_3404_, v_i_boxed_3405_, v_bs_3403_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView(lean_object* v_stx_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_){
_start:
{
lean_object* v_methods_3430_; lean_object* v_quotContext_3431_; lean_object* v_currMacroScope_3432_; lean_object* v_currRecDepth_3433_; lean_object* v_maxRecDepth_3434_; lean_object* v_ref_3435_; lean_object* v___x_3436_; uint8_t v___x_3437_; lean_object* v_ref_3438_; lean_object* v___x_3439_; 
v_methods_3430_ = lean_ctor_get(v_a_3428_, 0);
v_quotContext_3431_ = lean_ctor_get(v_a_3428_, 1);
v_currMacroScope_3432_ = lean_ctor_get(v_a_3428_, 2);
v_currRecDepth_3433_ = lean_ctor_get(v_a_3428_, 3);
v_maxRecDepth_3434_ = lean_ctor_get(v_a_3428_, 4);
v_ref_3435_ = lean_ctor_get(v_a_3428_, 5);
v___x_3436_ = ((lean_object*)(l_Lake_configField___closed__2));
lean_inc(v_stx_3427_);
v___x_3437_ = l_Lean_Syntax_isOfKind(v_stx_3427_, v___x_3436_);
v_ref_3438_ = l_Lean_replaceRef(v_stx_3427_, v_ref_3435_);
lean_inc(v_maxRecDepth_3434_);
lean_inc(v_currRecDepth_3433_);
lean_inc(v_currMacroScope_3432_);
lean_inc(v_quotContext_3431_);
lean_inc(v_methods_3430_);
v___x_3439_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3439_, 0, v_methods_3430_);
lean_ctor_set(v___x_3439_, 1, v_quotContext_3431_);
lean_ctor_set(v___x_3439_, 2, v_currMacroScope_3432_);
lean_ctor_set(v___x_3439_, 3, v_currRecDepth_3433_);
lean_ctor_set(v___x_3439_, 4, v_maxRecDepth_3434_);
lean_ctor_set(v___x_3439_, 5, v_ref_3438_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3440_; lean_object* v___x_3441_; 
lean_dec(v_stx_3427_);
v___x_3440_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0));
v___x_3441_ = l_Lean_Macro_throwError___redArg(v___x_3440_, v___x_3439_, v_a_3429_);
lean_dec_ref_known(v___x_3439_, 6);
return v___x_3441_;
}
else
{
lean_object* v___x_3442_; lean_object* v_mods_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3453_; lean_object* v___y_3454_; lean_object* v_val_3455_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v_val_x3f_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___x_3553_; uint8_t v___x_3554_; 
v___x_3442_ = lean_unsigned_to_nat(0u);
v_mods_3443_ = l_Lean_Syntax_getArg(v_stx_3427_, v___x_3442_);
v___x_3444_ = ((lean_object*)(l_Lake_configDecl___closed__24));
v___x_3445_ = ((lean_object*)(l_Lake_configDecl___closed__25));
v___x_3553_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54));
lean_inc(v_mods_3443_);
v___x_3554_ = l_Lean_Syntax_isOfKind(v_mods_3443_, v___x_3553_);
if (v___x_3554_ == 0)
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
lean_dec(v_mods_3443_);
lean_dec(v_stx_3427_);
v___x_3555_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0));
v___x_3556_ = l_Lean_Macro_throwError___redArg(v___x_3555_, v___x_3439_, v_a_3429_);
lean_dec_ref_known(v___x_3439_, 6);
return v___x_3556_;
}
else
{
lean_object* v___x_3557_; lean_object* v_id_x3f_3559_; lean_object* v___y_3560_; lean_object* v___y_3561_; lean_object* v___x_3587_; uint8_t v___x_3588_; 
v___x_3557_ = lean_unsigned_to_nat(1u);
v___x_3587_ = l_Lean_Syntax_getArg(v_stx_3427_, v___x_3557_);
v___x_3588_ = l_Lean_Syntax_isNone(v___x_3587_);
if (v___x_3588_ == 0)
{
lean_object* v___x_3589_; uint8_t v___x_3590_; 
v___x_3589_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3587_);
v___x_3590_ = l_Lean_Syntax_matchesNull(v___x_3587_, v___x_3589_);
if (v___x_3590_ == 0)
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
lean_dec(v___x_3587_);
lean_dec(v_mods_3443_);
lean_dec(v_stx_3427_);
v___x_3591_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0));
v___x_3592_ = l_Lean_Macro_throwError___redArg(v___x_3591_, v___x_3439_, v_a_3429_);
lean_dec_ref_known(v___x_3439_, 6);
return v___x_3592_;
}
else
{
lean_object* v_id_x3f_3593_; lean_object* v___x_3594_; 
v_id_x3f_3593_ = l_Lean_Syntax_getArg(v___x_3587_, v___x_3442_);
lean_dec(v___x_3587_);
v___x_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3594_, 0, v_id_x3f_3593_);
v_id_x3f_3559_ = v___x_3594_;
v___y_3560_ = v___x_3439_;
v___y_3561_ = v_a_3429_;
goto v___jp_3558_;
}
}
else
{
lean_object* v___x_3595_; 
lean_dec(v___x_3587_);
v___x_3595_ = lean_box(0);
v_id_x3f_3559_ = v___x_3595_;
v___y_3560_ = v___x_3439_;
v___y_3561_ = v_a_3429_;
goto v___jp_3558_;
}
v___jp_3558_:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; uint8_t v___x_3565_; 
v___x_3562_ = lean_unsigned_to_nat(3u);
v___x_3563_ = l_Lean_Syntax_getArg(v_stx_3427_, v___x_3562_);
v___x_3564_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__7));
lean_inc(v___x_3563_);
v___x_3565_ = l_Lean_Syntax_isOfKind(v___x_3563_, v___x_3564_);
if (v___x_3565_ == 0)
{
lean_object* v___x_3566_; lean_object* v___x_3567_; 
lean_dec(v___x_3563_);
lean_dec(v_id_x3f_3559_);
lean_dec(v_mods_3443_);
lean_dec(v_stx_3427_);
v___x_3566_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0));
v___x_3567_ = l_Lean_Macro_throwError___redArg(v___x_3566_, v___y_3560_, v___y_3561_);
lean_dec_ref(v___y_3560_);
return v___x_3567_;
}
else
{
lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; uint8_t v___x_3571_; 
v___x_3568_ = l_Lean_Syntax_getArg(v___x_3563_, v___x_3557_);
v___x_3569_ = ((lean_object*)(l_Lake_configDecl___closed__26));
v___x_3570_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__45));
lean_inc(v___x_3568_);
v___x_3571_ = l_Lean_Syntax_isOfKind(v___x_3568_, v___x_3570_);
if (v___x_3571_ == 0)
{
lean_object* v___x_3572_; lean_object* v___x_3573_; 
lean_dec(v___x_3568_);
lean_dec(v___x_3563_);
lean_dec(v_id_x3f_3559_);
lean_dec(v_mods_3443_);
lean_dec(v_stx_3427_);
v___x_3572_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0));
v___x_3573_ = l_Lean_Macro_throwError___redArg(v___x_3572_, v___y_3560_, v___y_3561_);
lean_dec_ref(v___y_3560_);
return v___x_3573_;
}
else
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v_rty_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; uint8_t v___x_3580_; 
v___x_3574_ = lean_unsigned_to_nat(2u);
v___x_3575_ = l_Lean_Syntax_getArg(v_stx_3427_, v___x_3574_);
v___x_3576_ = l_Lean_Syntax_getArg(v___x_3563_, v___x_3442_);
lean_dec(v___x_3563_);
v_rty_3577_ = l_Lean_Syntax_getArg(v___x_3568_, v___x_3557_);
lean_dec(v___x_3568_);
v___x_3578_ = lean_unsigned_to_nat(4u);
v___x_3579_ = l_Lean_Syntax_getArg(v_stx_3427_, v___x_3578_);
v___x_3580_ = l_Lean_Syntax_isNone(v___x_3579_);
if (v___x_3580_ == 0)
{
uint8_t v___x_3581_; 
lean_inc(v___x_3579_);
v___x_3581_ = l_Lean_Syntax_matchesNull(v___x_3579_, v___x_3574_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3582_; lean_object* v___x_3583_; 
lean_dec(v___x_3579_);
lean_dec(v_rty_3577_);
lean_dec(v___x_3576_);
lean_dec(v___x_3575_);
lean_dec(v_id_x3f_3559_);
lean_dec(v_mods_3443_);
lean_dec(v_stx_3427_);
v___x_3582_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__0));
v___x_3583_ = l_Lean_Macro_throwError___redArg(v___x_3582_, v___y_3560_, v___y_3561_);
lean_dec_ref(v___y_3560_);
return v___x_3583_;
}
else
{
lean_object* v_val_x3f_3584_; lean_object* v___x_3585_; 
v_val_x3f_3584_ = l_Lean_Syntax_getArg(v___x_3579_, v___x_3557_);
lean_dec(v___x_3579_);
v___x_3585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3585_, 0, v_val_x3f_3584_);
v___y_3520_ = v___x_3569_;
v___y_3521_ = v___x_3570_;
v___y_3522_ = v_rty_3577_;
v___y_3523_ = v___x_3576_;
v___y_3524_ = v___x_3575_;
v___y_3525_ = v_id_x3f_3559_;
v_val_x3f_3526_ = v___x_3585_;
v___y_3527_ = v___y_3560_;
v___y_3528_ = v___y_3561_;
goto v___jp_3519_;
}
}
else
{
lean_object* v___x_3586_; 
lean_dec(v___x_3579_);
v___x_3586_ = lean_box(0);
v___y_3520_ = v___x_3569_;
v___y_3521_ = v___x_3570_;
v___y_3522_ = v_rty_3577_;
v___y_3523_ = v___x_3576_;
v___y_3524_ = v___x_3575_;
v___y_3525_ = v_id_x3f_3559_;
v_val_x3f_3526_ = v___x_3586_;
v___y_3527_ = v___y_3560_;
v___y_3528_ = v___y_3561_;
goto v___jp_3519_;
}
}
}
}
}
v___jp_3446_:
{
lean_object* v_methods_3456_; lean_object* v_quotContext_3457_; lean_object* v_currMacroScope_3458_; lean_object* v_currRecDepth_3459_; lean_object* v_maxRecDepth_3460_; lean_object* v_ref_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3518_; 
v_methods_3456_ = lean_ctor_get(v___y_3449_, 0);
v_quotContext_3457_ = lean_ctor_get(v___y_3449_, 1);
v_currMacroScope_3458_ = lean_ctor_get(v___y_3449_, 2);
v_currRecDepth_3459_ = lean_ctor_get(v___y_3449_, 3);
v_maxRecDepth_3460_ = lean_ctor_get(v___y_3449_, 4);
v_ref_3461_ = lean_ctor_get(v___y_3449_, 5);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___y_3449_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3463_ = v___y_3449_;
v_isShared_3464_ = v_isSharedCheck_3518_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_ref_3461_);
lean_inc(v_maxRecDepth_3460_);
lean_inc(v_currRecDepth_3459_);
lean_inc(v_currMacroScope_3458_);
lean_inc(v_quotContext_3457_);
lean_inc(v_methods_3456_);
lean_dec(v___y_3449_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3518_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v_ref_3465_; 
v_ref_3465_ = l_Lean_replaceRef(v_val_3455_, v_ref_3461_);
lean_dec(v_ref_3461_);
if (lean_obj_tag(v___y_3448_) == 1)
{
lean_object* v_val_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3512_; 
lean_del_object(v___x_3463_);
lean_dec(v_maxRecDepth_3460_);
lean_dec(v_currRecDepth_3459_);
lean_dec(v_currMacroScope_3458_);
lean_dec(v_quotContext_3457_);
lean_dec(v_methods_3456_);
v_val_3466_ = lean_ctor_get(v___y_3448_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___y_3448_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3468_ = v___y_3448_;
v_isShared_3469_ = v_isSharedCheck_3512_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_val_3466_);
lean_dec(v___y_3448_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3512_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
uint8_t v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; size_t v_sz_3479_; size_t v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3508_; 
v___x_3470_ = 0;
v___x_3471_ = l_Lean_SourceInfo_fromRef(v_ref_3465_, v___x_3470_);
lean_dec(v_ref_3465_);
v___x_3472_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__76));
lean_inc_ref_n(v___y_3447_, 3);
v___x_3473_ = l_Lean_Name_mkStr4(v___x_3444_, v___x_3445_, v___y_3447_, v___x_3472_);
lean_inc_n(v___x_3471_, 13);
v___x_3474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3471_);
lean_ctor_set(v___x_3474_, 1, v___x_3472_);
v___x_3475_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__77));
v___x_3476_ = l_Lean_Name_mkStr4(v___x_3444_, v___x_3445_, v___y_3447_, v___x_3475_);
v___x_3477_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4));
v___x_3478_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5);
v_sz_3479_ = lean_array_size(v___y_3453_);
v___x_3480_ = ((size_t)0ULL);
v___x_3481_ = l_unsafeCast___redArg(v___y_3453_);
lean_dec_ref(v___y_3453_);
v___x_3482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Meta_0__Lake_mkFieldView_spec__0(v_sz_3479_, v___x_3480_, v___x_3481_);
v___x_3483_ = l_unsafeCast___redArg(v___x_3482_);
lean_dec_ref(v___x_3482_);
v___x_3484_ = l_unsafeCast___redArg(v___x_3483_);
lean_dec(v___x_3483_);
v___x_3485_ = l_Array_append___redArg(v___x_3478_, v___x_3484_);
lean_dec(v___x_3484_);
v___x_3486_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3471_);
lean_ctor_set(v___x_3486_, 1, v___x_3477_);
lean_ctor_set(v___x_3486_, 2, v___x_3485_);
v___x_3487_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3471_);
lean_ctor_set(v___x_3487_, 1, v___x_3477_);
lean_ctor_set(v___x_3487_, 2, v___x_3478_);
v___x_3488_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__78));
v___x_3489_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3471_);
lean_ctor_set(v___x_3489_, 1, v___x_3488_);
lean_inc_ref(v___x_3487_);
v___x_3490_ = l_Lean_Syntax_node4(v___x_3471_, v___x_3476_, v___x_3486_, v___x_3487_, v___x_3489_, v_val_3466_);
v___x_3491_ = l_Lean_Syntax_node2(v___x_3471_, v___x_3473_, v___x_3474_, v___x_3490_);
v___x_3492_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__2));
v___x_3493_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3));
v___x_3494_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__3));
v___x_3495_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3471_);
lean_ctor_set(v___x_3495_, 1, v___x_3494_);
lean_inc(v___y_3452_);
lean_inc(v___y_3451_);
v___x_3496_ = l_Lean_Syntax_node2(v___x_3471_, v___y_3451_, v___x_3495_, v___y_3452_);
v___x_3497_ = l_Lean_Syntax_node1(v___x_3471_, v___x_3477_, v___x_3496_);
v___x_3498_ = l_Lean_Syntax_node2(v___x_3471_, v___x_3493_, v___x_3487_, v___x_3497_);
v___x_3499_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__4));
v___x_3500_ = l_Lean_Name_mkStr4(v___x_3444_, v___x_3445_, v___y_3447_, v___x_3499_);
v___x_3501_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__14));
v___x_3502_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3471_);
lean_ctor_set(v___x_3502_, 1, v___x_3501_);
lean_inc(v___x_3491_);
v___x_3503_ = l_Lean_Syntax_node2(v___x_3471_, v___x_3500_, v___x_3502_, v___x_3491_);
v___x_3504_ = l_Lean_Syntax_node1(v___x_3471_, v___x_3477_, v___x_3503_);
lean_inc(v_val_3455_);
lean_inc(v_mods_3443_);
v___x_3505_ = l_Lean_Syntax_node4(v___x_3471_, v___x_3492_, v_mods_3443_, v_val_3455_, v___x_3498_, v___x_3504_);
v___x_3506_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___y_3454_);
lean_dec_ref(v___y_3454_);
if (v_isShared_3469_ == 0)
{
lean_ctor_set(v___x_3468_, 0, v___x_3505_);
v___x_3508_ = v___x_3468_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3505_);
v___x_3508_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3509_, 0, v_stx_3427_);
lean_ctor_set(v___x_3509_, 1, v_mods_3443_);
lean_ctor_set(v___x_3509_, 2, v_val_3455_);
lean_ctor_set(v___x_3509_, 3, v___x_3506_);
lean_ctor_set(v___x_3509_, 4, v___y_3452_);
lean_ctor_set(v___x_3509_, 5, v___x_3491_);
lean_ctor_set(v___x_3509_, 6, v___x_3508_);
lean_ctor_set_uint8(v___x_3509_, sizeof(void*)*7, v___x_3470_);
v___x_3510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
lean_ctor_set(v___x_3510_, 1, v___y_3450_);
return v___x_3510_;
}
}
}
else
{
lean_object* v___x_3514_; 
lean_dec(v_val_3455_);
lean_dec_ref(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v___y_3452_);
lean_dec(v___y_3448_);
lean_dec(v_mods_3443_);
lean_dec(v_stx_3427_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 5, v_ref_3465_);
v___x_3514_ = v___x_3463_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_methods_3456_);
lean_ctor_set(v_reuseFailAlloc_3517_, 1, v_quotContext_3457_);
lean_ctor_set(v_reuseFailAlloc_3517_, 2, v_currMacroScope_3458_);
lean_ctor_set(v_reuseFailAlloc_3517_, 3, v_currRecDepth_3459_);
lean_ctor_set(v_reuseFailAlloc_3517_, 4, v_maxRecDepth_3460_);
lean_ctor_set(v_reuseFailAlloc_3517_, 5, v_ref_3465_);
v___x_3514_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__5));
v___x_3516_ = l_Lean_Macro_throwError___redArg(v___x_3515_, v___x_3514_, v___y_3450_);
lean_dec_ref(v___x_3514_);
return v___x_3516_;
}
}
}
}
v___jp_3519_:
{
lean_object* v___x_3529_; lean_object* v_bs_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3529_ = l_Lean_Syntax_getArgs(v___y_3523_);
lean_dec(v___y_3523_);
v_bs_3530_ = l_unsafeCast___redArg(v___x_3529_);
lean_dec_ref(v___x_3529_);
v___x_3531_ = l_unsafeCast___redArg(v_bs_3530_);
lean_dec(v_bs_3530_);
v___x_3532_ = l_Lake_expandBinders(v___x_3531_, v___y_3527_, v___y_3528_);
lean_dec(v___x_3531_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v_a_3534_; lean_object* v_ids_3535_; lean_object* v___x_3536_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
v_a_3534_ = lean_ctor_get(v___x_3532_, 1);
lean_inc(v_a_3534_);
lean_dec_ref_known(v___x_3532_, 2);
v_ids_3535_ = l_Lean_Syntax_getArgs(v___y_3524_);
lean_dec(v___y_3524_);
v___x_3536_ = l_Lake_mkDepArrow(v_a_3533_, v___y_3522_);
if (lean_obj_tag(v___y_3525_) == 0)
{
lean_object* v___x_3537_; lean_object* v___x_3538_; uint8_t v___x_3539_; 
v___x_3537_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_ids_3535_);
v___x_3538_ = lean_array_get_size(v___x_3537_);
v___x_3539_ = lean_nat_dec_lt(v___x_3442_, v___x_3538_);
if (v___x_3539_ == 0)
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
lean_dec_ref(v___x_3537_);
lean_dec(v___x_3536_);
lean_dec_ref(v_ids_3535_);
lean_dec(v_a_3533_);
lean_dec(v_val_x3f_3526_);
lean_dec(v_mods_3443_);
lean_dec(v_stx_3427_);
v___x_3540_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__6));
v___x_3541_ = l_Lean_Macro_throwError___redArg(v___x_3540_, v___y_3527_, v_a_3534_);
lean_dec_ref(v___y_3527_);
return v___x_3541_;
}
else
{
lean_object* v___x_3542_; 
v___x_3542_ = lean_array_fget(v___x_3537_, v___x_3442_);
lean_dec_ref(v___x_3537_);
v___y_3447_ = v___y_3520_;
v___y_3448_ = v_val_x3f_3526_;
v___y_3449_ = v___y_3527_;
v___y_3450_ = v_a_3534_;
v___y_3451_ = v___y_3521_;
v___y_3452_ = v___x_3536_;
v___y_3453_ = v_a_3533_;
v___y_3454_ = v_ids_3535_;
v_val_3455_ = v___x_3542_;
goto v___jp_3446_;
}
}
else
{
lean_object* v_val_3543_; 
v_val_3543_ = lean_ctor_get(v___y_3525_, 0);
lean_inc(v_val_3543_);
lean_dec_ref_known(v___y_3525_, 1);
v___y_3447_ = v___y_3520_;
v___y_3448_ = v_val_x3f_3526_;
v___y_3449_ = v___y_3527_;
v___y_3450_ = v_a_3534_;
v___y_3451_ = v___y_3521_;
v___y_3452_ = v___x_3536_;
v___y_3453_ = v_a_3533_;
v___y_3454_ = v_ids_3535_;
v_val_3455_ = v_val_3543_;
goto v___jp_3446_;
}
}
else
{
lean_object* v_a_3544_; lean_object* v_a_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3552_; 
lean_dec_ref(v___y_3527_);
lean_dec(v_val_x3f_3526_);
lean_dec(v___y_3525_);
lean_dec(v___y_3524_);
lean_dec(v___y_3522_);
lean_dec(v_mods_3443_);
lean_dec(v_stx_3427_);
v_a_3544_ = lean_ctor_get(v___x_3532_, 0);
v_a_3545_ = lean_ctor_get(v___x_3532_, 1);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3547_ = v___x_3532_;
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_a_3545_);
lean_inc(v_a_3544_);
lean_dec(v___x_3532_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3550_; 
if (v_isShared_3548_ == 0)
{
v___x_3550_ = v___x_3547_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v_a_3544_);
lean_ctor_set(v_reuseFailAlloc_3551_, 1, v_a_3545_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkFieldView___boxed(lean_object* v_stx_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l___private_Lake_Config_Meta_0__Lake_mkFieldView(v_stx_3596_, v_a_3597_, v_a_3598_);
lean_dec_ref(v_a_3597_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0(lean_object* v_typeName_3601_){
_start:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3602_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0___closed__0));
v___x_3603_ = l_Lean_Name_getString_x21(v_typeName_3601_);
v___x_3604_ = lean_string_append(v___x_3602_, v___x_3603_);
lean_dec_ref(v___x_3603_);
v___x_3605_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__16);
v___x_3606_ = l_Lean_Name_str___override(v___x_3605_, v___x_3604_);
return v___x_3606_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0___boxed(lean_object* v_typeName_3607_){
_start:
{
lean_object* v_res_3608_; 
v_res_3608_ = l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0(v_typeName_3607_);
lean_dec(v_typeName_3607_);
return v_res_3608_;
}
}
static lean_object* _init_l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__5(void){
_start:
{
lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3619_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__6);
v___x_3620_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54));
v___x_3621_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__0);
v___x_3622_ = l_Lean_Syntax_node7(v___x_3621_, v___x_3620_, v___x_3619_, v___x_3619_, v___x_3619_, v___x_3619_, v___x_3619_, v___x_3619_, v___x_3619_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView(lean_object* v_stx_3625_, lean_object* v_a_3626_, lean_object* v_a_3627_){
_start:
{
lean_object* v_methods_3628_; lean_object* v_quotContext_3629_; lean_object* v_currMacroScope_3630_; lean_object* v_currRecDepth_3631_; lean_object* v_maxRecDepth_3632_; lean_object* v_ref_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; lean_object* v___y_3637_; lean_object* v___y_3638_; lean_object* v_id_3639_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___y_3656_; lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v___y_3659_; lean_object* v___y_3660_; lean_object* v___y_3661_; lean_object* v_ref_3664_; lean_object* v___x_3665_; 
v_methods_3628_ = lean_ctor_get(v_a_3626_, 0);
v_quotContext_3629_ = lean_ctor_get(v_a_3626_, 1);
v_currMacroScope_3630_ = lean_ctor_get(v_a_3626_, 2);
v_currRecDepth_3631_ = lean_ctor_get(v_a_3626_, 3);
v_maxRecDepth_3632_ = lean_ctor_get(v_a_3626_, 4);
v_ref_3633_ = lean_ctor_get(v_a_3626_, 5);
v___x_3634_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__1));
lean_inc(v_stx_3625_);
v___x_3635_ = l_Lean_Syntax_isOfKind(v_stx_3625_, v___x_3634_);
v_ref_3664_ = l_Lean_replaceRef(v_stx_3625_, v_ref_3633_);
lean_inc(v_maxRecDepth_3632_);
lean_inc(v_currRecDepth_3631_);
lean_inc(v_currMacroScope_3630_);
lean_inc(v_quotContext_3629_);
lean_inc(v_methods_3628_);
v___x_3665_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3665_, 0, v_methods_3628_);
lean_ctor_set(v___x_3665_, 1, v_quotContext_3629_);
lean_ctor_set(v___x_3665_, 2, v_currMacroScope_3630_);
lean_ctor_set(v___x_3665_, 3, v_currRecDepth_3631_);
lean_ctor_set(v___x_3665_, 4, v_maxRecDepth_3632_);
lean_ctor_set(v___x_3665_, 5, v_ref_3664_);
if (v___x_3635_ == 0)
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
lean_dec(v_stx_3625_);
v___x_3666_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__6));
v___x_3667_ = l_Lean_Macro_throwError___redArg(v___x_3666_, v___x_3665_, v_a_3627_);
lean_dec_ref_known(v___x_3665_, 6);
return v___x_3667_;
}
else
{
lean_object* v___y_3669_; lean_object* v___y_3670_; lean_object* v_typeId_3671_; lean_object* v___y_3672_; lean_object* v___y_3673_; lean_object* v___x_3691_; lean_object* v_id_x3f_3693_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___x_3731_; uint8_t v___x_3732_; 
v___x_3691_ = lean_unsigned_to_nat(0u);
v___x_3731_ = l_Lean_Syntax_getArg(v_stx_3625_, v___x_3691_);
v___x_3732_ = l_Lean_Syntax_isNone(v___x_3731_);
if (v___x_3732_ == 0)
{
lean_object* v___x_3733_; uint8_t v___x_3734_; 
v___x_3733_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3731_);
v___x_3734_ = l_Lean_Syntax_matchesNull(v___x_3731_, v___x_3733_);
if (v___x_3734_ == 0)
{
lean_object* v___x_3735_; lean_object* v___x_3736_; 
lean_dec(v___x_3731_);
lean_dec(v_stx_3625_);
v___x_3735_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__6));
v___x_3736_ = l_Lean_Macro_throwError___redArg(v___x_3735_, v___x_3665_, v_a_3627_);
lean_dec_ref_known(v___x_3665_, 6);
return v___x_3736_;
}
else
{
lean_object* v_id_x3f_3737_; lean_object* v___x_3738_; 
v_id_x3f_3737_ = l_Lean_Syntax_getArg(v___x_3731_, v___x_3691_);
lean_dec(v___x_3731_);
v___x_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3738_, 0, v_id_x3f_3737_);
v_id_x3f_3693_ = v___x_3738_;
v___y_3694_ = v___x_3665_;
v___y_3695_ = v_a_3627_;
goto v___jp_3692_;
}
}
else
{
lean_object* v___x_3739_; 
lean_dec(v___x_3731_);
v___x_3739_ = lean_box(0);
v_id_x3f_3693_ = v___x_3739_;
v___y_3694_ = v___x_3665_;
v___y_3695_ = v_a_3627_;
goto v___jp_3692_;
}
v___jp_3668_:
{
lean_object* v___x_3674_; uint8_t v___x_3675_; 
v___x_3674_ = l_Lean_TSyntax_getId(v_typeId_3671_);
v___x_3675_ = l_Lean_Name_hasMacroScopes(v___x_3674_);
if (v___x_3675_ == 0)
{
lean_object* v___x_3676_; 
v___x_3676_ = l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0(v___x_3674_);
lean_dec(v___x_3674_);
v___y_3656_ = v___y_3669_;
v___y_3657_ = v___y_3672_;
v___y_3658_ = v___y_3673_;
v___y_3659_ = v___y_3670_;
v___y_3660_ = v_typeId_3671_;
v___y_3661_ = v___x_3676_;
goto v___jp_3655_;
}
else
{
lean_object* v_view_3677_; lean_object* v_name_3678_; lean_object* v_imported_3679_; lean_object* v_ctx_3680_; lean_object* v_scopes_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3690_; 
v_view_3677_ = l_Lean_extractMacroScopes(v___x_3674_);
v_name_3678_ = lean_ctor_get(v_view_3677_, 0);
v_imported_3679_ = lean_ctor_get(v_view_3677_, 1);
v_ctx_3680_ = lean_ctor_get(v_view_3677_, 2);
v_scopes_3681_ = lean_ctor_get(v_view_3677_, 3);
v_isSharedCheck_3690_ = !lean_is_exclusive(v_view_3677_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3683_ = v_view_3677_;
v_isShared_3684_ = v_isSharedCheck_3690_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_scopes_3681_);
lean_inc(v_ctx_3680_);
lean_inc(v_imported_3679_);
lean_inc(v_name_3678_);
lean_dec(v_view_3677_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3690_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v___x_3685_; lean_object* v___x_3687_; 
v___x_3685_ = l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___lam__0(v_name_3678_);
lean_dec(v_name_3678_);
if (v_isShared_3684_ == 0)
{
lean_ctor_set(v___x_3683_, 0, v___x_3685_);
v___x_3687_ = v___x_3683_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v___x_3685_);
lean_ctor_set(v_reuseFailAlloc_3689_, 1, v_imported_3679_);
lean_ctor_set(v_reuseFailAlloc_3689_, 2, v_ctx_3680_);
lean_ctor_set(v_reuseFailAlloc_3689_, 3, v_scopes_3681_);
v___x_3687_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
lean_object* v___x_3688_; 
v___x_3688_ = l_Lean_MacroScopesView_review(v___x_3687_);
v___y_3656_ = v___y_3669_;
v___y_3657_ = v___y_3672_;
v___y_3658_ = v___y_3673_;
v___y_3659_ = v___y_3670_;
v___y_3660_ = v_typeId_3671_;
v___y_3661_ = v___x_3688_;
goto v___jp_3655_;
}
}
}
}
v___jp_3692_:
{
lean_object* v___x_3696_; lean_object* v_id_3697_; 
v___x_3696_ = lean_unsigned_to_nat(1u);
v_id_3697_ = l_Lean_Syntax_getArg(v_stx_3625_, v___x_3696_);
if (lean_obj_tag(v_id_x3f_3693_) == 1)
{
lean_object* v_val_3698_; 
v_val_3698_ = lean_ctor_get(v_id_x3f_3693_, 0);
lean_inc(v_val_3698_);
lean_dec_ref_known(v_id_x3f_3693_, 1);
v___y_3637_ = v_id_3697_;
v___y_3638_ = v___x_3696_;
v_id_3639_ = v_val_3698_;
v___y_3640_ = v___y_3694_;
v___y_3641_ = v___y_3695_;
goto v___jp_3636_;
}
else
{
lean_object* v___x_3699_; uint8_t v___x_3700_; 
lean_dec(v_id_x3f_3693_);
v___x_3699_ = ((lean_object*)(l_Lake_configField___closed__13));
lean_inc(v_id_3697_);
v___x_3700_ = l_Lean_Syntax_isOfKind(v_id_3697_, v___x_3699_);
if (v___x_3700_ == 0)
{
lean_object* v___x_3701_; uint8_t v___x_3702_; 
v___x_3701_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__46));
lean_inc(v_id_3697_);
v___x_3702_ = l_Lean_Syntax_isOfKind(v_id_3697_, v___x_3701_);
if (v___x_3702_ == 0)
{
lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3703_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__7));
v___x_3704_ = l_Lean_Macro_throwErrorAt___redArg(v_id_3697_, v___x_3703_, v___y_3694_, v___y_3695_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v_a_3706_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
lean_inc(v_a_3705_);
v_a_3706_ = lean_ctor_get(v___x_3704_, 1);
lean_inc(v_a_3706_);
lean_dec_ref_known(v___x_3704_, 2);
v___y_3669_ = v_id_3697_;
v___y_3670_ = v___x_3696_;
v_typeId_3671_ = v_a_3705_;
v___y_3672_ = v___y_3694_;
v___y_3673_ = v_a_3706_;
goto v___jp_3668_;
}
else
{
lean_object* v_a_3707_; lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
lean_dec(v_id_3697_);
lean_dec_ref(v___y_3694_);
lean_dec(v_stx_3625_);
v_a_3707_ = lean_ctor_get(v___x_3704_, 0);
v_a_3708_ = lean_ctor_get(v___x_3704_, 1);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3710_ = v___x_3704_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_inc(v_a_3707_);
lean_dec(v___x_3704_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_a_3707_);
lean_ctor_set(v_reuseFailAlloc_3714_, 1, v_a_3708_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
}
else
{
lean_object* v_id_3716_; uint8_t v___x_3717_; 
v_id_3716_ = l_Lean_Syntax_getArg(v_id_3697_, v___x_3691_);
lean_inc(v_id_3716_);
v___x_3717_ = l_Lean_Syntax_isOfKind(v_id_3716_, v___x_3699_);
if (v___x_3717_ == 0)
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
lean_dec(v_id_3716_);
v___x_3718_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__7));
v___x_3719_ = l_Lean_Macro_throwErrorAt___redArg(v_id_3697_, v___x_3718_, v___y_3694_, v___y_3695_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v_a_3721_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
v_a_3721_ = lean_ctor_get(v___x_3719_, 1);
lean_inc(v_a_3721_);
lean_dec_ref_known(v___x_3719_, 2);
v___y_3669_ = v_id_3697_;
v___y_3670_ = v___x_3696_;
v_typeId_3671_ = v_a_3720_;
v___y_3672_ = v___y_3694_;
v___y_3673_ = v_a_3721_;
goto v___jp_3668_;
}
else
{
lean_object* v_a_3722_; lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
lean_dec(v_id_3697_);
lean_dec_ref(v___y_3694_);
lean_dec(v_stx_3625_);
v_a_3722_ = lean_ctor_get(v___x_3719_, 0);
v_a_3723_ = lean_ctor_get(v___x_3719_, 1);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3719_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_inc(v_a_3722_);
lean_dec(v___x_3719_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3722_);
lean_ctor_set(v_reuseFailAlloc_3729_, 1, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
else
{
v___y_3669_ = v_id_3697_;
v___y_3670_ = v___x_3696_;
v_typeId_3671_ = v_id_3716_;
v___y_3672_ = v___y_3694_;
v___y_3673_ = v___y_3695_;
goto v___jp_3668_;
}
}
}
else
{
lean_inc(v_id_3697_);
v___y_3669_ = v_id_3697_;
v___y_3670_ = v___x_3696_;
v_typeId_3671_ = v_id_3697_;
v___y_3672_ = v___y_3694_;
v___y_3673_ = v___y_3695_;
goto v___jp_3668_;
}
}
}
}
v___jp_3636_:
{
lean_object* v_ref_3642_; uint8_t v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; 
v_ref_3642_ = lean_ctor_get(v___y_3640_, 5);
lean_inc(v_ref_3642_);
lean_dec_ref(v___y_3640_);
v___x_3643_ = 0;
v___x_3644_ = l_Lean_SourceInfo_fromRef(v_ref_3642_, v___x_3643_);
lean_dec(v_ref_3642_);
v___x_3645_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__3));
v___x_3646_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__4));
lean_inc(v___x_3644_);
v___x_3647_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3647_, 0, v___x_3644_);
lean_ctor_set(v___x_3647_, 1, v___x_3646_);
v___x_3648_ = l_Lean_Syntax_node1(v___x_3644_, v___x_3645_, v___x_3647_);
v___x_3649_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__5, &l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___closed__5);
v___x_3650_ = lean_mk_empty_array_with_capacity(v___y_3638_);
lean_inc(v_id_3639_);
v___x_3651_ = lean_array_push(v___x_3650_, v_id_3639_);
v___x_3652_ = lean_box(0);
v___x_3653_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_3653_, 0, v_stx_3625_);
lean_ctor_set(v___x_3653_, 1, v___x_3649_);
lean_ctor_set(v___x_3653_, 2, v_id_3639_);
lean_ctor_set(v___x_3653_, 3, v___x_3651_);
lean_ctor_set(v___x_3653_, 4, v___y_3637_);
lean_ctor_set(v___x_3653_, 5, v___x_3648_);
lean_ctor_set(v___x_3653_, 6, v___x_3652_);
lean_ctor_set_uint8(v___x_3653_, sizeof(void*)*7, v___x_3635_);
v___x_3654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3653_);
lean_ctor_set(v___x_3654_, 1, v___y_3641_);
return v___x_3654_;
}
v___jp_3655_:
{
uint8_t v___x_3662_; lean_object* v___x_3663_; 
v___x_3662_ = 0;
v___x_3663_ = l_Lean_mkIdentFrom(v___y_3660_, v___y_3661_, v___x_3662_);
lean_dec(v___y_3660_);
v___y_3637_ = v___y_3656_;
v___y_3638_ = v___y_3659_;
v_id_3639_ = v___x_3663_;
v___y_3640_ = v___y_3657_;
v___y_3641_ = v___y_3658_;
goto v___jp_3636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Meta_0__Lake_mkParentFieldView___boxed(lean_object* v_stx_3740_, lean_object* v_a_3741_, lean_object* v_a_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = l___private_Lake_Config_Meta_0__Lake_mkParentFieldView(v_stx_3740_, v_a_3741_, v_a_3742_);
lean_dec_ref(v_a_3741_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandConfigDecl___lam__0(lean_object* v_x_3744_){
_start:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3745_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___x_3746_ = lean_array_push(v___x_3745_, v_x_3744_);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandConfigDecl___lam__1(lean_object* v_00___3747_){
_start:
{
lean_object* v___x_3748_; 
v___x_3748_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
return v___x_3748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__3(size_t v_sz_3749_, size_t v_i_3750_, lean_object* v_bs_3751_){
_start:
{
uint8_t v___x_3752_; 
v___x_3752_ = lean_usize_dec_lt(v_i_3750_, v_sz_3749_);
if (v___x_3752_ == 0)
{
lean_object* v___x_3753_; 
v___x_3753_ = l_unsafeCast___redArg(v_bs_3751_);
lean_dec_ref(v_bs_3751_);
return v___x_3753_;
}
else
{
lean_object* v_v_3754_; lean_object* v___x_3755_; lean_object* v_bs_x27_3756_; lean_object* v___x_3757_; size_t v___x_3758_; size_t v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; 
v_v_3754_ = lean_array_uget(v_bs_3751_, v_i_3750_);
v___x_3755_ = lean_unsigned_to_nat(0u);
v_bs_x27_3756_ = lean_array_uset(v_bs_3751_, v_i_3750_, v___x_3755_);
v___x_3757_ = l_unsafeCast___redArg(v_v_3754_);
lean_dec(v_v_3754_);
v___x_3758_ = ((size_t)1ULL);
v___x_3759_ = lean_usize_add(v_i_3750_, v___x_3758_);
v___x_3760_ = l_unsafeCast___redArg(v___x_3757_);
lean_dec(v___x_3757_);
v___x_3761_ = lean_array_uset(v_bs_x27_3756_, v_i_3750_, v___x_3760_);
v_i_3750_ = v___x_3759_;
v_bs_3751_ = v___x_3761_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__3___boxed(lean_object* v_sz_3763_, lean_object* v_i_3764_, lean_object* v_bs_3765_){
_start:
{
size_t v_sz_boxed_3766_; size_t v_i_boxed_3767_; lean_object* v_res_3768_; 
v_sz_boxed_3766_ = lean_unbox_usize(v_sz_3763_);
lean_dec(v_sz_3763_);
v_i_boxed_3767_ = lean_unbox_usize(v_i_3764_);
lean_dec(v_i_3764_);
v_res_3768_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__3(v_sz_boxed_3766_, v_i_boxed_3767_, v_bs_3765_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__6(size_t v_sz_3769_, size_t v_i_3770_, lean_object* v_bs_3771_){
_start:
{
uint8_t v___x_3772_; 
v___x_3772_ = lean_usize_dec_lt(v_i_3770_, v_sz_3769_);
if (v___x_3772_ == 0)
{
lean_object* v___x_3773_; 
v___x_3773_ = l_unsafeCast___redArg(v_bs_3771_);
lean_dec_ref(v_bs_3771_);
return v___x_3773_;
}
else
{
lean_object* v_v_3774_; lean_object* v___x_3775_; lean_object* v_bs_x27_3776_; lean_object* v___x_3777_; size_t v___x_3778_; size_t v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; 
v_v_3774_ = lean_array_uget(v_bs_3771_, v_i_3770_);
v___x_3775_ = lean_unsigned_to_nat(0u);
v_bs_x27_3776_ = lean_array_uset(v_bs_3771_, v_i_3770_, v___x_3775_);
v___x_3777_ = l_unsafeCast___redArg(v_v_3774_);
lean_dec(v_v_3774_);
v___x_3778_ = ((size_t)1ULL);
v___x_3779_ = lean_usize_add(v_i_3770_, v___x_3778_);
v___x_3780_ = l_unsafeCast___redArg(v___x_3777_);
lean_dec(v___x_3777_);
v___x_3781_ = lean_array_uset(v_bs_x27_3776_, v_i_3770_, v___x_3780_);
v_i_3770_ = v___x_3779_;
v_bs_3771_ = v___x_3781_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__6___boxed(lean_object* v_sz_3783_, lean_object* v_i_3784_, lean_object* v_bs_3785_){
_start:
{
size_t v_sz_boxed_3786_; size_t v_i_boxed_3787_; lean_object* v_res_3788_; 
v_sz_boxed_3786_ = lean_unbox_usize(v_sz_3783_);
lean_dec(v_sz_3783_);
v_i_boxed_3787_ = lean_unbox_usize(v_i_3784_);
lean_dec(v_i_3784_);
v_res_3788_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__6(v_sz_boxed_3786_, v_i_boxed_3787_, v_bs_3785_);
return v_res_3788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__5(size_t v_sz_3789_, size_t v_i_3790_, lean_object* v_bs_3791_){
_start:
{
uint8_t v___x_3792_; 
v___x_3792_ = lean_usize_dec_lt(v_i_3790_, v_sz_3789_);
if (v___x_3792_ == 0)
{
lean_object* v___x_3793_; 
v___x_3793_ = l_unsafeCast___redArg(v_bs_3791_);
lean_dec_ref(v_bs_3791_);
return v___x_3793_;
}
else
{
lean_object* v_v_3794_; lean_object* v___x_3795_; lean_object* v_bs_x27_3796_; lean_object* v___x_3797_; size_t v___x_3798_; size_t v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v_v_3794_ = lean_array_uget(v_bs_3791_, v_i_3790_);
v___x_3795_ = lean_unsigned_to_nat(0u);
v_bs_x27_3796_ = lean_array_uset(v_bs_3791_, v_i_3790_, v___x_3795_);
v___x_3797_ = l_unsafeCast___redArg(v_v_3794_);
lean_dec(v_v_3794_);
v___x_3798_ = ((size_t)1ULL);
v___x_3799_ = lean_usize_add(v_i_3790_, v___x_3798_);
v___x_3800_ = l_unsafeCast___redArg(v___x_3797_);
lean_dec(v___x_3797_);
v___x_3801_ = lean_array_uset(v_bs_x27_3796_, v_i_3790_, v___x_3800_);
v_i_3790_ = v___x_3799_;
v_bs_3791_ = v___x_3801_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__5___boxed(lean_object* v_sz_3803_, lean_object* v_i_3804_, lean_object* v_bs_3805_){
_start:
{
size_t v_sz_boxed_3806_; size_t v_i_boxed_3807_; lean_object* v_res_3808_; 
v_sz_boxed_3806_ = lean_unbox_usize(v_sz_3803_);
lean_dec(v_sz_3803_);
v_i_boxed_3807_ = lean_unbox_usize(v_i_3804_);
lean_dec(v_i_3804_);
v_res_3808_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__5(v_sz_boxed_3806_, v_i_boxed_3807_, v_bs_3805_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandConfigDecl_spec__8(lean_object* v_as_3809_, size_t v_i_3810_, size_t v_stop_3811_, lean_object* v_b_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_){
_start:
{
uint8_t v___x_3815_; 
v___x_3815_ = lean_usize_dec_eq(v_i_3810_, v_stop_3811_);
if (v___x_3815_ == 0)
{
lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___x_3816_ = lean_array_uget_borrowed(v_as_3809_, v_i_3810_);
lean_inc(v___x_3816_);
v___x_3817_ = l___private_Lake_Config_Meta_0__Lake_mkParentFieldView(v___x_3816_, v___y_3813_, v___y_3814_);
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_a_3818_; lean_object* v_a_3819_; lean_object* v___x_3820_; size_t v___x_3821_; size_t v___x_3822_; 
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3818_);
v_a_3819_ = lean_ctor_get(v___x_3817_, 1);
lean_inc(v_a_3819_);
lean_dec_ref_known(v___x_3817_, 2);
v___x_3820_ = lean_array_push(v_b_3812_, v_a_3818_);
v___x_3821_ = ((size_t)1ULL);
v___x_3822_ = lean_usize_add(v_i_3810_, v___x_3821_);
v_i_3810_ = v___x_3822_;
v_b_3812_ = v___x_3820_;
v___y_3814_ = v_a_3819_;
goto _start;
}
else
{
lean_object* v_a_3824_; lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
lean_dec_ref(v_b_3812_);
v_a_3824_ = lean_ctor_get(v___x_3817_, 0);
v_a_3825_ = lean_ctor_get(v___x_3817_, 1);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3817_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_inc(v_a_3824_);
lean_dec(v___x_3817_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3824_);
lean_ctor_set(v_reuseFailAlloc_3831_, 1, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
else
{
lean_object* v___x_3833_; 
v___x_3833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3833_, 0, v_b_3812_);
lean_ctor_set(v___x_3833_, 1, v___y_3814_);
return v___x_3833_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandConfigDecl_spec__8___boxed(lean_object* v_as_3834_, lean_object* v_i_3835_, lean_object* v_stop_3836_, lean_object* v_b_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
size_t v_i_boxed_3840_; size_t v_stop_boxed_3841_; lean_object* v_res_3842_; 
v_i_boxed_3840_ = lean_unbox_usize(v_i_3835_);
lean_dec(v_i_3835_);
v_stop_boxed_3841_ = lean_unbox_usize(v_stop_3836_);
lean_dec(v_stop_3836_);
v_res_3842_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandConfigDecl_spec__8(v_as_3834_, v_i_boxed_3840_, v_stop_boxed_3841_, v_b_3837_, v___y_3838_, v___y_3839_);
lean_dec_ref(v___y_3838_);
lean_dec_ref(v_as_3834_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_expandConfigDecl_spec__2_spec__2(lean_object* v_as_3843_, size_t v_i_3844_, size_t v_stop_3845_, lean_object* v_b_3846_){
_start:
{
lean_object* v___y_3848_; uint8_t v___x_3852_; 
v___x_3852_ = lean_usize_dec_eq(v_i_3844_, v_stop_3845_);
if (v___x_3852_ == 0)
{
lean_object* v___x_3853_; lean_object* v_decl_x3f_3854_; 
v___x_3853_ = lean_array_uget_borrowed(v_as_3843_, v_i_3844_);
v_decl_x3f_3854_ = lean_ctor_get(v___x_3853_, 6);
if (lean_obj_tag(v_decl_x3f_3854_) == 0)
{
v___y_3848_ = v_b_3846_;
goto v___jp_3847_;
}
else
{
lean_object* v_val_3855_; lean_object* v___x_3856_; 
v_val_3855_ = lean_ctor_get(v_decl_x3f_3854_, 0);
lean_inc(v_val_3855_);
v___x_3856_ = lean_array_push(v_b_3846_, v_val_3855_);
v___y_3848_ = v___x_3856_;
goto v___jp_3847_;
}
}
else
{
return v_b_3846_;
}
v___jp_3847_:
{
size_t v___x_3849_; size_t v___x_3850_; 
v___x_3849_ = ((size_t)1ULL);
v___x_3850_ = lean_usize_add(v_i_3844_, v___x_3849_);
v_i_3844_ = v___x_3850_;
v_b_3846_ = v___y_3848_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_expandConfigDecl_spec__2_spec__2___boxed(lean_object* v_as_3857_, lean_object* v_i_3858_, lean_object* v_stop_3859_, lean_object* v_b_3860_){
_start:
{
size_t v_i_boxed_3861_; size_t v_stop_boxed_3862_; lean_object* v_res_3863_; 
v_i_boxed_3861_ = lean_unbox_usize(v_i_3858_);
lean_dec(v_i_3858_);
v_stop_boxed_3862_ = lean_unbox_usize(v_stop_3859_);
lean_dec(v_stop_3859_);
v_res_3863_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_expandConfigDecl_spec__2_spec__2(v_as_3857_, v_i_boxed_3861_, v_stop_boxed_3862_, v_b_3860_);
lean_dec_ref(v_as_3857_);
return v_res_3863_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_expandConfigDecl_spec__2(lean_object* v_as_3864_, lean_object* v_start_3865_, lean_object* v_stop_3866_){
_start:
{
lean_object* v___x_3867_; uint8_t v___x_3868_; 
v___x_3867_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__6));
v___x_3868_ = lean_nat_dec_lt(v_start_3865_, v_stop_3866_);
if (v___x_3868_ == 0)
{
return v___x_3867_;
}
else
{
lean_object* v___x_3869_; uint8_t v___x_3870_; 
v___x_3869_ = lean_array_get_size(v_as_3864_);
v___x_3870_ = lean_nat_dec_le(v_stop_3866_, v___x_3869_);
if (v___x_3870_ == 0)
{
uint8_t v___x_3871_; 
v___x_3871_ = lean_nat_dec_lt(v_start_3865_, v___x_3869_);
if (v___x_3871_ == 0)
{
return v___x_3867_;
}
else
{
size_t v___x_3872_; size_t v___x_3873_; lean_object* v___x_3874_; 
v___x_3872_ = lean_usize_of_nat(v_start_3865_);
v___x_3873_ = lean_usize_of_nat(v___x_3869_);
v___x_3874_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_expandConfigDecl_spec__2_spec__2(v_as_3864_, v___x_3872_, v___x_3873_, v___x_3867_);
return v___x_3874_;
}
}
else
{
size_t v___x_3875_; size_t v___x_3876_; lean_object* v___x_3877_; 
v___x_3875_ = lean_usize_of_nat(v_start_3865_);
v___x_3876_ = lean_usize_of_nat(v_stop_3866_);
v___x_3877_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_expandConfigDecl_spec__2_spec__2(v_as_3864_, v___x_3875_, v___x_3876_, v___x_3867_);
return v___x_3877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_expandConfigDecl_spec__2___boxed(lean_object* v_as_3878_, lean_object* v_start_3879_, lean_object* v_stop_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Array_filterMapM___at___00Lake_expandConfigDecl_spec__2(v_as_3878_, v_start_3879_, v_stop_3880_);
lean_dec(v_stop_3880_);
lean_dec(v_start_3879_);
lean_dec_ref(v_as_3878_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__7(size_t v_sz_3882_, size_t v_i_3883_, lean_object* v_bs_3884_){
_start:
{
uint8_t v___x_3885_; 
v___x_3885_ = lean_usize_dec_lt(v_i_3883_, v_sz_3882_);
if (v___x_3885_ == 0)
{
lean_object* v___x_3886_; 
v___x_3886_ = l_unsafeCast___redArg(v_bs_3884_);
lean_dec_ref(v_bs_3884_);
return v___x_3886_;
}
else
{
lean_object* v_v_3887_; lean_object* v___x_3888_; lean_object* v_bs_x27_3889_; lean_object* v___x_3890_; size_t v___x_3891_; size_t v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v_v_3887_ = lean_array_uget(v_bs_3884_, v_i_3883_);
v___x_3888_ = lean_unsigned_to_nat(0u);
v_bs_x27_3889_ = lean_array_uset(v_bs_3884_, v_i_3883_, v___x_3888_);
v___x_3890_ = l_unsafeCast___redArg(v_v_3887_);
lean_dec(v_v_3887_);
v___x_3891_ = ((size_t)1ULL);
v___x_3892_ = lean_usize_add(v_i_3883_, v___x_3891_);
v___x_3893_ = l_unsafeCast___redArg(v___x_3890_);
lean_dec(v___x_3890_);
v___x_3894_ = lean_array_uset(v_bs_x27_3889_, v_i_3883_, v___x_3893_);
v_i_3883_ = v___x_3892_;
v_bs_3884_ = v___x_3894_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__7___boxed(lean_object* v_sz_3896_, lean_object* v_i_3897_, lean_object* v_bs_3898_){
_start:
{
size_t v_sz_boxed_3899_; size_t v_i_boxed_3900_; lean_object* v_res_3901_; 
v_sz_boxed_3899_ = lean_unbox_usize(v_sz_3896_);
lean_dec(v_sz_3896_);
v_i_boxed_3900_ = lean_unbox_usize(v_i_3897_);
lean_dec(v_i_3897_);
v_res_3901_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__7(v_sz_boxed_3899_, v_i_boxed_3900_, v_bs_3898_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__0(size_t v_sz_3902_, size_t v_i_3903_, lean_object* v_bs_3904_){
_start:
{
uint8_t v___x_3905_; 
v___x_3905_ = lean_usize_dec_lt(v_i_3903_, v_sz_3902_);
if (v___x_3905_ == 0)
{
lean_object* v___x_3906_; 
v___x_3906_ = l_unsafeCast___redArg(v_bs_3904_);
lean_dec_ref(v_bs_3904_);
return v___x_3906_;
}
else
{
lean_object* v_v_3907_; lean_object* v___x_3908_; lean_object* v_bs_x27_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; size_t v___x_3912_; size_t v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v_v_3907_ = lean_array_uget(v_bs_3904_, v_i_3903_);
v___x_3908_ = lean_unsigned_to_nat(0u);
v_bs_x27_3909_ = lean_array_uset(v_bs_3904_, v_i_3903_, v___x_3908_);
v___x_3910_ = l_unsafeCast___redArg(v_v_3907_);
lean_dec(v_v_3907_);
v___x_3911_ = l_Lake_BinderSyntaxView_mkArgument(v___x_3910_);
v___x_3912_ = ((size_t)1ULL);
v___x_3913_ = lean_usize_add(v_i_3903_, v___x_3912_);
v___x_3914_ = l_unsafeCast___redArg(v___x_3911_);
lean_dec(v___x_3911_);
v___x_3915_ = lean_array_uset(v_bs_x27_3909_, v_i_3903_, v___x_3914_);
v_i_3903_ = v___x_3913_;
v_bs_3904_ = v___x_3915_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__0___boxed(lean_object* v_sz_3917_, lean_object* v_i_3918_, lean_object* v_bs_3919_){
_start:
{
size_t v_sz_boxed_3920_; size_t v_i_boxed_3921_; lean_object* v_res_3922_; 
v_sz_boxed_3920_ = lean_unbox_usize(v_sz_3917_);
lean_dec(v_sz_3917_);
v_i_boxed_3921_ = lean_unbox_usize(v_i_3918_);
lean_dec(v_i_3918_);
v_res_3922_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__0(v_sz_boxed_3920_, v_i_boxed_3921_, v_bs_3919_);
return v_res_3922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__1(size_t v_sz_3923_, size_t v_i_3924_, lean_object* v_bs_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_){
_start:
{
uint8_t v___x_3928_; 
v___x_3928_ = lean_usize_dec_lt(v_i_3924_, v_sz_3923_);
if (v___x_3928_ == 0)
{
lean_object* v___x_3929_; lean_object* v___x_3930_; 
v___x_3929_ = l_unsafeCast___redArg(v_bs_3925_);
lean_dec_ref(v_bs_3925_);
v___x_3930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
lean_ctor_set(v___x_3930_, 1, v___y_3927_);
return v___x_3930_;
}
else
{
lean_object* v_v_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; 
v_v_3931_ = lean_array_uget_borrowed(v_bs_3925_, v_i_3924_);
v___x_3932_ = l_unsafeCast___redArg(v_v_3931_);
v___x_3933_ = l___private_Lake_Config_Meta_0__Lake_mkFieldView(v___x_3932_, v___y_3926_, v___y_3927_);
if (lean_obj_tag(v___x_3933_) == 0)
{
lean_object* v_a_3934_; lean_object* v_a_3935_; lean_object* v___x_3936_; lean_object* v_bs_x27_3937_; size_t v___x_3938_; size_t v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v_a_3934_ = lean_ctor_get(v___x_3933_, 0);
lean_inc(v_a_3934_);
v_a_3935_ = lean_ctor_get(v___x_3933_, 1);
lean_inc(v_a_3935_);
lean_dec_ref_known(v___x_3933_, 2);
v___x_3936_ = lean_unsigned_to_nat(0u);
v_bs_x27_3937_ = lean_array_uset(v_bs_3925_, v_i_3924_, v___x_3936_);
v___x_3938_ = ((size_t)1ULL);
v___x_3939_ = lean_usize_add(v_i_3924_, v___x_3938_);
v___x_3940_ = l_unsafeCast___redArg(v_a_3934_);
lean_dec(v_a_3934_);
v___x_3941_ = lean_array_uset(v_bs_x27_3937_, v_i_3924_, v___x_3940_);
v_i_3924_ = v___x_3939_;
v_bs_3925_ = v___x_3941_;
v___y_3927_ = v_a_3935_;
goto _start;
}
else
{
lean_object* v_a_3943_; lean_object* v_a_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3951_; 
lean_dec_ref(v_bs_3925_);
v_a_3943_ = lean_ctor_get(v___x_3933_, 0);
v_a_3944_ = lean_ctor_get(v___x_3933_, 1);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3933_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3946_ = v___x_3933_;
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_a_3944_);
lean_inc(v_a_3943_);
lean_dec(v___x_3933_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_a_3943_);
lean_ctor_set(v_reuseFailAlloc_3950_, 1, v_a_3944_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__1___boxed(lean_object* v_sz_3952_, lean_object* v_i_3953_, lean_object* v_bs_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_){
_start:
{
size_t v_sz_boxed_3957_; size_t v_i_boxed_3958_; lean_object* v_res_3959_; 
v_sz_boxed_3957_ = lean_unbox_usize(v_sz_3952_);
lean_dec(v_sz_3952_);
v_i_boxed_3958_ = lean_unbox_usize(v_i_3953_);
lean_dec(v_i_3953_);
v_res_3959_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__1(v_sz_boxed_3957_, v_i_boxed_3958_, v_bs_3954_, v___y_3955_, v___y_3956_);
lean_dec_ref(v___y_3955_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__4(size_t v_sz_3960_, size_t v_i_3961_, lean_object* v_bs_3962_){
_start:
{
uint8_t v___x_3963_; 
v___x_3963_ = lean_usize_dec_lt(v_i_3961_, v_sz_3960_);
if (v___x_3963_ == 0)
{
lean_object* v___x_3964_; 
v___x_3964_ = l_unsafeCast___redArg(v_bs_3962_);
lean_dec_ref(v_bs_3962_);
return v___x_3964_;
}
else
{
lean_object* v_v_3965_; lean_object* v___x_3966_; lean_object* v_bs_x27_3967_; lean_object* v___x_3968_; size_t v___x_3969_; size_t v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; 
v_v_3965_ = lean_array_uget(v_bs_3962_, v_i_3961_);
v___x_3966_ = lean_unsigned_to_nat(0u);
v_bs_x27_3967_ = lean_array_uset(v_bs_3962_, v_i_3961_, v___x_3966_);
v___x_3968_ = l_unsafeCast___redArg(v_v_3965_);
lean_dec(v_v_3965_);
v___x_3969_ = ((size_t)1ULL);
v___x_3970_ = lean_usize_add(v_i_3961_, v___x_3969_);
v___x_3971_ = l_unsafeCast___redArg(v___x_3968_);
lean_dec(v___x_3968_);
v___x_3972_ = lean_array_uset(v_bs_x27_3967_, v_i_3961_, v___x_3971_);
v_i_3961_ = v___x_3970_;
v_bs_3962_ = v___x_3972_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__4___boxed(lean_object* v_sz_3974_, lean_object* v_i_3975_, lean_object* v_bs_3976_){
_start:
{
size_t v_sz_boxed_3977_; size_t v_i_boxed_3978_; lean_object* v_res_3979_; 
v_sz_boxed_3977_ = lean_unbox_usize(v_sz_3974_);
lean_dec(v_sz_3974_);
v_i_boxed_3978_ = lean_unbox_usize(v_i_3975_);
lean_dec(v_i_3975_);
v_res_3979_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__4(v_sz_boxed_3977_, v_i_boxed_3978_, v_bs_3976_);
return v_res_3979_;
}
}
static lean_object* _init_l_Lake_expandConfigDecl___closed__3(void){
_start:
{
lean_object* v___x_3987_; lean_object* v___x_3988_; 
v___x_3987_ = lean_box(0);
v___x_3988_ = l_Lake_expandConfigDecl___lam__1(v___x_3987_);
return v___x_3988_;
}
}
LEAN_EXPORT lean_object* l_Lake_expandConfigDecl(lean_object* v_stx_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_){
_start:
{
lean_object* v___x_4004_; uint8_t v___x_4005_; 
v___x_4004_ = ((lean_object*)(l_Lake_configDecl___closed__1));
lean_inc(v_stx_4001_);
v___x_4005_ = l_Lean_Syntax_isOfKind(v_stx_4001_, v___x_4004_);
if (v___x_4005_ == 0)
{
lean_object* v___x_4006_; lean_object* v___x_4007_; 
lean_dec(v_stx_4001_);
v___x_4006_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4007_ = l_Lean_Macro_throwError___redArg(v___x_4006_, v_a_4002_, v_a_4003_);
return v___x_4007_;
}
else
{
lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; uint8_t v___x_4011_; 
v___x_4008_ = lean_unsigned_to_nat(0u);
v___x_4009_ = l_Lean_Syntax_getArg(v_stx_4001_, v___x_4008_);
v___x_4010_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__54));
lean_inc(v___x_4009_);
v___x_4011_ = l_Lean_Syntax_isOfKind(v___x_4009_, v___x_4010_);
if (v___x_4011_ == 0)
{
lean_object* v___x_4012_; lean_object* v___x_4013_; 
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v___x_4012_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4013_ = l_Lean_Macro_throwError___redArg(v___x_4012_, v_a_4002_, v_a_4003_);
return v___x_4013_;
}
else
{
lean_object* v___x_4014_; lean_object* v___y_4016_; lean_object* v___y_4017_; lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4022_; lean_object* v___y_4023_; lean_object* v___y_4024_; lean_object* v_tk_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; size_t v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___y_4062_; lean_object* v___y_4063_; lean_object* v___y_4064_; lean_object* v___y_4065_; lean_object* v___y_4066_; lean_object* v___y_4067_; lean_object* v___y_4068_; lean_object* v___y_4069_; lean_object* v___y_4070_; lean_object* v___y_4071_; lean_object* v___y_4072_; lean_object* v___y_4073_; size_t v___y_4108_; lean_object* v___y_4109_; lean_object* v___y_4110_; lean_object* v___y_4111_; lean_object* v___y_4112_; lean_object* v___y_4113_; lean_object* v___y_4114_; lean_object* v___y_4115_; lean_object* v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4118_; lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4124_; lean_object* v___y_4125_; size_t v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___y_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; lean_object* v___y_4134_; lean_object* v___y_4135_; lean_object* v___y_4136_; lean_object* v___y_4137_; lean_object* v___y_4138_; lean_object* v___y_4139_; lean_object* v___y_4140_; lean_object* v___y_4141_; lean_object* v___y_4142_; lean_object* v___y_4143_; lean_object* v___y_4144_; lean_object* v___y_4145_; lean_object* v___y_4146_; lean_object* v___y_4147_; lean_object* v___y_4148_; size_t v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; lean_object* v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4168_; lean_object* v___y_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; lean_object* v___y_4172_; lean_object* v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; lean_object* v___y_4178_; size_t v___y_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4197_; lean_object* v___y_4198_; lean_object* v___y_4199_; lean_object* v___y_4200_; lean_object* v___y_4201_; lean_object* v___y_4214_; lean_object* v___y_4215_; size_t v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4265_; size_t v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4288_; lean_object* v___y_4289_; size_t v___y_4290_; lean_object* v___y_4291_; lean_object* v___y_4292_; lean_object* v___y_4293_; lean_object* v___y_4294_; lean_object* v___y_4295_; lean_object* v___y_4296_; lean_object* v___y_4297_; lean_object* v___y_4298_; lean_object* v___y_4299_; lean_object* v___y_4300_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___y_4326_; lean_object* v___y_4327_; lean_object* v___y_4328_; lean_object* v_ctor_x3f_4329_; lean_object* v_fs_x3f_4330_; lean_object* v___y_4331_; lean_object* v___y_4332_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4371_; lean_object* v_ctor_x3f_4372_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4381_; lean_object* v_ps_x3f_4382_; lean_object* v_xty_x3f_4383_; lean_object* v___y_4384_; lean_object* v___y_4385_; lean_object* v___y_4407_; lean_object* v___y_4408_; lean_object* v_xty_x3f_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v_ty_x3f_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v___x_4440_; lean_object* v___x_4441_; uint8_t v___x_4442_; 
v___x_4014_ = lean_unsigned_to_nat(1u);
v_tk_4051_ = l_Lean_Syntax_getArg(v_stx_4001_, v___x_4014_);
v___x_4052_ = lean_unsigned_to_nat(2u);
v___x_4053_ = l_Lean_Syntax_getArg(v_stx_4001_, v___x_4052_);
v___x_4323_ = lean_unsigned_to_nat(3u);
v___x_4324_ = l_Lean_Syntax_getArg(v_stx_4001_, v___x_4323_);
v___x_4440_ = lean_unsigned_to_nat(4u);
v___x_4441_ = l_Lean_Syntax_getArg(v_stx_4001_, v___x_4440_);
v___x_4442_ = l_Lean_Syntax_isNone(v___x_4441_);
if (v___x_4442_ == 0)
{
uint8_t v___x_4443_; 
lean_inc(v___x_4441_);
v___x_4443_ = l_Lean_Syntax_matchesNull(v___x_4441_, v___x_4014_);
if (v___x_4443_ == 0)
{
lean_object* v___x_4444_; lean_object* v___x_4445_; 
lean_dec(v___x_4441_);
lean_dec(v___x_4324_);
lean_dec(v___x_4053_);
lean_dec(v_tk_4051_);
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v___x_4444_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4445_ = l_Lean_Macro_throwError___redArg(v___x_4444_, v_a_4002_, v_a_4003_);
return v___x_4445_;
}
else
{
lean_object* v_ty_x3f_4446_; lean_object* v___x_4447_; 
v_ty_x3f_4446_ = l_Lean_Syntax_getArg(v___x_4441_, v___x_4008_);
lean_dec(v___x_4441_);
v___x_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4447_, 0, v_ty_x3f_4446_);
v_ty_x3f_4416_ = v___x_4447_;
v___y_4417_ = v_a_4002_;
v___y_4418_ = v_a_4003_;
goto v___jp_4415_;
}
}
else
{
lean_object* v___x_4448_; 
lean_dec(v___x_4441_);
v___x_4448_ = lean_box(0);
v_ty_x3f_4416_ = v___x_4448_;
v___y_4417_ = v_a_4002_;
v___y_4418_ = v_a_4003_;
goto v___jp_4415_;
}
v___jp_4015_:
{
lean_object* v___x_4025_; lean_object* v___x_4026_; 
v___x_4025_ = lean_array_get_size(v___y_4022_);
lean_dec(v___y_4022_);
v___x_4026_ = l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls(v___y_4024_, v___y_4017_, v___x_4025_, v___y_4018_, v___y_4016_, v___y_4021_, v___y_4020_);
lean_dec_ref(v___y_4021_);
lean_dec_ref(v___y_4016_);
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v_a_4027_; lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4041_; 
v_a_4027_ = lean_ctor_get(v___x_4026_, 0);
v_a_4028_ = lean_ctor_get(v___x_4026_, 1);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4030_ = v___x_4026_;
v_isShared_4031_ = v_isSharedCheck_4041_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_inc(v_a_4027_);
lean_dec(v___x_4026_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4041_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4039_; 
v___x_4032_ = lean_mk_empty_array_with_capacity(v___x_4014_);
v___x_4033_ = lean_array_push(v___x_4032_, v___y_4023_);
v___x_4034_ = l_Array_append___redArg(v___x_4033_, v_a_4027_);
lean_dec(v_a_4027_);
v___x_4035_ = l_unsafeCast___redArg(v___x_4034_);
lean_dec_ref(v___x_4034_);
v___x_4036_ = lean_box(2);
lean_inc(v___y_4019_);
v___x_4037_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4036_);
lean_ctor_set(v___x_4037_, 1, v___y_4019_);
lean_ctor_set(v___x_4037_, 2, v___x_4035_);
if (v_isShared_4031_ == 0)
{
lean_ctor_set(v___x_4030_, 0, v___x_4037_);
v___x_4039_ = v___x_4030_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v___x_4037_);
lean_ctor_set(v_reuseFailAlloc_4040_, 1, v_a_4028_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v_a_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4050_; 
lean_dec(v___y_4023_);
v_a_4042_ = lean_ctor_get(v___x_4026_, 0);
v_a_4043_ = lean_ctor_get(v___x_4026_, 1);
v_isSharedCheck_4050_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_4045_ = v___x_4026_;
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_a_4043_);
lean_inc(v_a_4042_);
lean_dec(v___x_4026_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4048_; 
if (v_isShared_4046_ == 0)
{
v___x_4048_ = v___x_4045_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_a_4042_);
lean_ctor_set(v_reuseFailAlloc_4049_, 1, v_a_4043_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
}
v___jp_4054_:
{
lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; size_t v_sz_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; size_t v_sz_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; size_t v_sz_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; 
lean_inc_ref(v___y_4064_);
v___x_4074_ = l_Array_append___redArg(v___y_4064_, v___y_4073_);
lean_dec_ref(v___y_4073_);
lean_inc_n(v___y_4068_, 3);
lean_inc_n(v___y_4071_, 5);
v___x_4075_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4075_, 0, v___y_4071_);
lean_ctor_set(v___x_4075_, 1, v___y_4068_);
lean_ctor_set(v___x_4075_, 2, v___x_4074_);
v___x_4076_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__2));
v_sz_4077_ = lean_array_size(v___y_4063_);
v___x_4078_ = l_unsafeCast___redArg(v___y_4063_);
lean_dec_ref(v___y_4063_);
v___x_4079_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__5(v_sz_4077_, v___y_4055_, v___x_4078_);
v___x_4080_ = l_unsafeCast___redArg(v___x_4079_);
lean_dec_ref(v___x_4079_);
v_sz_4081_ = lean_array_size(v___x_4080_);
v___x_4082_ = l_unsafeCast___redArg(v___x_4080_);
lean_dec(v___x_4080_);
v___x_4083_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__6(v_sz_4081_, v___y_4055_, v___x_4082_);
v___x_4084_ = l_unsafeCast___redArg(v___x_4083_);
lean_dec_ref(v___x_4083_);
v_sz_4085_ = lean_array_size(v___x_4084_);
v___x_4086_ = l_unsafeCast___redArg(v___x_4084_);
lean_dec(v___x_4084_);
v___x_4087_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__7(v_sz_4085_, v___y_4055_, v___x_4086_);
v___x_4088_ = l_unsafeCast___redArg(v___x_4087_);
lean_dec_ref(v___x_4087_);
v___x_4089_ = l_unsafeCast___redArg(v___x_4088_);
lean_dec(v___x_4088_);
v___x_4090_ = l_Array_append___redArg(v___y_4064_, v___x_4089_);
lean_dec(v___x_4089_);
v___x_4091_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4091_, 0, v___y_4071_);
lean_ctor_set(v___x_4091_, 1, v___y_4068_);
lean_ctor_set(v___x_4091_, 2, v___x_4090_);
v___x_4092_ = l_Lean_Syntax_node1(v___y_4071_, v___x_4076_, v___x_4091_);
v___x_4093_ = l_Lean_Syntax_node3(v___y_4071_, v___y_4068_, v___y_4062_, v___x_4075_, v___x_4092_);
lean_inc(v___y_4065_);
v___x_4094_ = l_Lean_Syntax_node6(v___y_4071_, v___y_4065_, v___y_4070_, v___x_4053_, v___y_4072_, v___y_4059_, v___x_4093_, v___y_4066_);
lean_inc(v___x_4009_);
lean_inc(v___y_4067_);
v___x_4095_ = l_Lean_Syntax_node2(v___y_4071_, v___y_4067_, v___x_4009_, v___x_4094_);
v___x_4096_ = l_Lean_Syntax_getArg(v___x_4009_, v___x_4052_);
lean_dec(v___x_4009_);
v___x_4097_ = l_Lean_Syntax_getOptional_x3f(v___x_4096_);
lean_dec(v___x_4096_);
if (lean_obj_tag(v___x_4097_) == 0)
{
lean_object* v___x_4098_; 
v___x_4098_ = lean_box(0);
v___y_4016_ = v___y_4056_;
v___y_4017_ = v___y_4057_;
v___y_4018_ = v___y_4058_;
v___y_4019_ = v___y_4068_;
v___y_4020_ = v___y_4061_;
v___y_4021_ = v___y_4060_;
v___y_4022_ = v___y_4069_;
v___y_4023_ = v___x_4095_;
v___y_4024_ = v___x_4098_;
goto v___jp_4015_;
}
else
{
lean_object* v_val_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4106_; 
v_val_4099_ = lean_ctor_get(v___x_4097_, 0);
v_isSharedCheck_4106_ = !lean_is_exclusive(v___x_4097_);
if (v_isSharedCheck_4106_ == 0)
{
v___x_4101_ = v___x_4097_;
v_isShared_4102_ = v_isSharedCheck_4106_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_val_4099_);
lean_dec(v___x_4097_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4106_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
lean_object* v___x_4104_; 
if (v_isShared_4102_ == 0)
{
v___x_4104_ = v___x_4101_;
goto v_reusejp_4103_;
}
else
{
lean_object* v_reuseFailAlloc_4105_; 
v_reuseFailAlloc_4105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4105_, 0, v_val_4099_);
v___x_4104_ = v_reuseFailAlloc_4105_;
goto v_reusejp_4103_;
}
v_reusejp_4103_:
{
v___y_4016_ = v___y_4056_;
v___y_4017_ = v___y_4057_;
v___y_4018_ = v___y_4058_;
v___y_4019_ = v___y_4068_;
v___y_4020_ = v___y_4061_;
v___y_4021_ = v___y_4060_;
v___y_4022_ = v___y_4069_;
v___y_4023_ = v___x_4095_;
v___y_4024_ = v___x_4104_;
goto v___jp_4015_;
}
}
}
}
v___jp_4107_:
{
lean_object* v___x_4126_; 
v___x_4126_ = lean_obj_once(&l_Lake_expandConfigDecl___closed__3, &l_Lake_expandConfigDecl___closed__3_once, _init_l_Lake_expandConfigDecl___closed__3);
v___y_4055_ = v___y_4108_;
v___y_4056_ = v___y_4109_;
v___y_4057_ = v___y_4110_;
v___y_4058_ = v___y_4111_;
v___y_4059_ = v___y_4112_;
v___y_4060_ = v___y_4113_;
v___y_4061_ = v___y_4114_;
v___y_4062_ = v___y_4115_;
v___y_4063_ = v___y_4116_;
v___y_4064_ = v___y_4117_;
v___y_4065_ = v___y_4118_;
v___y_4066_ = v___y_4119_;
v___y_4067_ = v___y_4120_;
v___y_4068_ = v___y_4121_;
v___y_4069_ = v___y_4123_;
v___y_4070_ = v___y_4122_;
v___y_4071_ = v___y_4124_;
v___y_4072_ = v___y_4125_;
v___y_4073_ = v___x_4126_;
goto v___jp_4054_;
}
v___jp_4127_:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
lean_inc_ref(v___y_4135_);
v___x_4149_ = l_Array_append___redArg(v___y_4135_, v___y_4148_);
lean_dec_ref(v___y_4148_);
lean_inc_n(v___y_4141_, 2);
lean_inc_n(v___y_4144_, 4);
v___x_4150_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4150_, 0, v___y_4144_);
lean_ctor_set(v___x_4150_, 1, v___y_4141_);
lean_ctor_set(v___x_4150_, 2, v___x_4149_);
lean_inc(v___y_4147_);
v___x_4151_ = l_Lean_Syntax_node3(v___y_4144_, v___y_4147_, v___y_4146_, v___y_4137_, v___x_4150_);
v___x_4152_ = l_Lean_Syntax_node1(v___y_4144_, v___y_4141_, v___x_4151_);
v___x_4153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__3_spec__4___closed__41));
v___x_4154_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4154_, 0, v___y_4144_);
lean_ctor_set(v___x_4154_, 1, v___x_4153_);
if (lean_obj_tag(v___y_4140_) == 0)
{
v___y_4108_ = v___y_4128_;
v___y_4109_ = v___y_4129_;
v___y_4110_ = v___y_4130_;
v___y_4111_ = v___y_4131_;
v___y_4112_ = v___x_4152_;
v___y_4113_ = v___y_4132_;
v___y_4114_ = v___y_4133_;
v___y_4115_ = v___x_4154_;
v___y_4116_ = v___y_4134_;
v___y_4117_ = v___y_4135_;
v___y_4118_ = v___y_4136_;
v___y_4119_ = v___y_4139_;
v___y_4120_ = v___y_4138_;
v___y_4121_ = v___y_4141_;
v___y_4122_ = v___y_4142_;
v___y_4123_ = v___y_4143_;
v___y_4124_ = v___y_4144_;
v___y_4125_ = v___y_4145_;
goto v___jp_4107_;
}
else
{
lean_object* v_val_4155_; 
v_val_4155_ = lean_ctor_get(v___y_4140_, 0);
lean_inc(v_val_4155_);
lean_dec_ref_known(v___y_4140_, 1);
if (lean_obj_tag(v_val_4155_) == 0)
{
v___y_4108_ = v___y_4128_;
v___y_4109_ = v___y_4129_;
v___y_4110_ = v___y_4130_;
v___y_4111_ = v___y_4131_;
v___y_4112_ = v___x_4152_;
v___y_4113_ = v___y_4132_;
v___y_4114_ = v___y_4133_;
v___y_4115_ = v___x_4154_;
v___y_4116_ = v___y_4134_;
v___y_4117_ = v___y_4135_;
v___y_4118_ = v___y_4136_;
v___y_4119_ = v___y_4139_;
v___y_4120_ = v___y_4138_;
v___y_4121_ = v___y_4141_;
v___y_4122_ = v___y_4142_;
v___y_4123_ = v___y_4143_;
v___y_4124_ = v___y_4144_;
v___y_4125_ = v___y_4145_;
goto v___jp_4107_;
}
else
{
lean_object* v_val_4156_; lean_object* v___x_4157_; 
v_val_4156_ = lean_ctor_get(v_val_4155_, 0);
lean_inc(v_val_4156_);
lean_dec_ref_known(v_val_4155_, 1);
v___x_4157_ = l_Lake_expandConfigDecl___lam__0(v_val_4156_);
v___y_4055_ = v___y_4128_;
v___y_4056_ = v___y_4129_;
v___y_4057_ = v___y_4130_;
v___y_4058_ = v___y_4131_;
v___y_4059_ = v___x_4152_;
v___y_4060_ = v___y_4132_;
v___y_4061_ = v___y_4133_;
v___y_4062_ = v___x_4154_;
v___y_4063_ = v___y_4134_;
v___y_4064_ = v___y_4135_;
v___y_4065_ = v___y_4136_;
v___y_4066_ = v___y_4139_;
v___y_4067_ = v___y_4138_;
v___y_4068_ = v___y_4141_;
v___y_4069_ = v___y_4143_;
v___y_4070_ = v___y_4142_;
v___y_4071_ = v___y_4144_;
v___y_4072_ = v___y_4145_;
v___y_4073_ = v___x_4157_;
goto v___jp_4054_;
}
}
}
v___jp_4158_:
{
lean_object* v___x_4179_; 
v___x_4179_ = lean_obj_once(&l_Lake_expandConfigDecl___closed__3, &l_Lake_expandConfigDecl___closed__3_once, _init_l_Lake_expandConfigDecl___closed__3);
v___y_4128_ = v___y_4159_;
v___y_4129_ = v___y_4160_;
v___y_4130_ = v___y_4161_;
v___y_4131_ = v___y_4162_;
v___y_4132_ = v___y_4163_;
v___y_4133_ = v___y_4164_;
v___y_4134_ = v___y_4165_;
v___y_4135_ = v___y_4166_;
v___y_4136_ = v___y_4167_;
v___y_4137_ = v___y_4168_;
v___y_4138_ = v___y_4169_;
v___y_4139_ = v___y_4170_;
v___y_4140_ = v___y_4171_;
v___y_4141_ = v___y_4172_;
v___y_4142_ = v___y_4174_;
v___y_4143_ = v___y_4173_;
v___y_4144_ = v___y_4175_;
v___y_4145_ = v___y_4176_;
v___y_4146_ = v___y_4177_;
v___y_4147_ = v___y_4178_;
v___y_4148_ = v___x_4179_;
goto v___jp_4127_;
}
v___jp_4180_:
{
lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
lean_inc_ref_n(v___y_4189_, 2);
v___x_4202_ = l_Array_append___redArg(v___y_4189_, v___y_4201_);
lean_dec_ref(v___y_4201_);
lean_inc_n(v___y_4196_, 2);
lean_inc_n(v___y_4199_, 4);
v___x_4203_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4203_, 0, v___y_4199_);
lean_ctor_set(v___x_4203_, 1, v___y_4196_);
lean_ctor_set(v___x_4203_, 2, v___x_4202_);
lean_inc(v___y_4194_);
v___x_4204_ = l_Lean_Syntax_node2(v___y_4199_, v___y_4194_, v___y_4200_, v___x_4203_);
v___x_4205_ = ((lean_object*)(l_Lake_configDecl___closed__32));
v___x_4206_ = ((lean_object*)(l_Lake_configDecl___closed__33));
v___x_4207_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4207_, 0, v___y_4199_);
lean_ctor_set(v___x_4207_, 1, v___x_4205_);
v___x_4208_ = l_Array_append___redArg(v___y_4189_, v___y_4195_);
lean_dec_ref(v___y_4195_);
v___x_4209_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4209_, 0, v___y_4199_);
lean_ctor_set(v___x_4209_, 1, v___y_4196_);
lean_ctor_set(v___x_4209_, 2, v___x_4208_);
if (lean_obj_tag(v___y_4184_) == 0)
{
v___y_4159_ = v___y_4181_;
v___y_4160_ = v___y_4182_;
v___y_4161_ = v___y_4183_;
v___y_4162_ = v___y_4185_;
v___y_4163_ = v___y_4186_;
v___y_4164_ = v___y_4187_;
v___y_4165_ = v___y_4188_;
v___y_4166_ = v___y_4189_;
v___y_4167_ = v___y_4190_;
v___y_4168_ = v___x_4209_;
v___y_4169_ = v___y_4192_;
v___y_4170_ = v___y_4191_;
v___y_4171_ = v___y_4193_;
v___y_4172_ = v___y_4196_;
v___y_4173_ = v___y_4197_;
v___y_4174_ = v___y_4198_;
v___y_4175_ = v___y_4199_;
v___y_4176_ = v___x_4204_;
v___y_4177_ = v___x_4207_;
v___y_4178_ = v___x_4206_;
goto v___jp_4158_;
}
else
{
lean_object* v_val_4210_; 
v_val_4210_ = lean_ctor_get(v___y_4184_, 0);
lean_inc(v_val_4210_);
lean_dec_ref_known(v___y_4184_, 1);
if (lean_obj_tag(v_val_4210_) == 0)
{
v___y_4159_ = v___y_4181_;
v___y_4160_ = v___y_4182_;
v___y_4161_ = v___y_4183_;
v___y_4162_ = v___y_4185_;
v___y_4163_ = v___y_4186_;
v___y_4164_ = v___y_4187_;
v___y_4165_ = v___y_4188_;
v___y_4166_ = v___y_4189_;
v___y_4167_ = v___y_4190_;
v___y_4168_ = v___x_4209_;
v___y_4169_ = v___y_4192_;
v___y_4170_ = v___y_4191_;
v___y_4171_ = v___y_4193_;
v___y_4172_ = v___y_4196_;
v___y_4173_ = v___y_4197_;
v___y_4174_ = v___y_4198_;
v___y_4175_ = v___y_4199_;
v___y_4176_ = v___x_4204_;
v___y_4177_ = v___x_4207_;
v___y_4178_ = v___x_4206_;
goto v___jp_4158_;
}
else
{
lean_object* v_val_4211_; lean_object* v___x_4212_; 
v_val_4211_ = lean_ctor_get(v_val_4210_, 0);
lean_inc(v_val_4211_);
lean_dec_ref_known(v_val_4210_, 1);
v___x_4212_ = l_Lake_expandConfigDecl___lam__0(v_val_4211_);
v___y_4128_ = v___y_4181_;
v___y_4129_ = v___y_4182_;
v___y_4130_ = v___y_4183_;
v___y_4131_ = v___y_4185_;
v___y_4132_ = v___y_4186_;
v___y_4133_ = v___y_4187_;
v___y_4134_ = v___y_4188_;
v___y_4135_ = v___y_4189_;
v___y_4136_ = v___y_4190_;
v___y_4137_ = v___x_4209_;
v___y_4138_ = v___y_4192_;
v___y_4139_ = v___y_4191_;
v___y_4140_ = v___y_4193_;
v___y_4141_ = v___y_4196_;
v___y_4142_ = v___y_4198_;
v___y_4143_ = v___y_4197_;
v___y_4144_ = v___y_4199_;
v___y_4145_ = v___x_4204_;
v___y_4146_ = v___x_4207_;
v___y_4147_ = v___x_4206_;
v___y_4148_ = v___x_4212_;
goto v___jp_4127_;
}
}
}
v___jp_4213_:
{
if (lean_obj_tag(v___y_4225_) == 0)
{
lean_object* v_a_4226_; lean_object* v_a_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; uint8_t v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; size_t v_sz_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; size_t v_sz_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; 
v_a_4226_ = lean_ctor_get(v___y_4225_, 0);
lean_inc(v_a_4226_);
v_a_4227_ = lean_ctor_get(v___y_4225_, 1);
lean_inc(v_a_4227_);
lean_dec_ref_known(v___y_4225_, 2);
v___x_4228_ = lean_array_get_size(v_a_4226_);
v___x_4229_ = l_Array_filterMapM___at___00Lake_expandConfigDecl_spec__2(v_a_4226_, v___x_4008_, v___x_4228_);
v___x_4230_ = 0;
v___x_4231_ = l_Lean_SourceInfo_fromRef(v___y_4214_, v___x_4230_);
lean_dec(v___y_4214_);
v___x_4232_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__53));
v___x_4233_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__4));
v___x_4234_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__5));
v___x_4235_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__7));
lean_inc_n(v___x_4231_, 3);
v___x_4236_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4231_);
lean_ctor_set(v___x_4236_, 1, v___x_4233_);
v___x_4237_ = l_Lean_Syntax_node1(v___x_4231_, v___x_4235_, v___x_4236_);
v___x_4238_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkFieldView___closed__3));
v___x_4239_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__4));
v___x_4240_ = lean_obj_once(&l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5, &l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5_once, _init_l___private_Lake_Config_Meta_0__Lake_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil__lake___lam__0___closed__5);
v_sz_4241_ = lean_array_size(v___y_4224_);
v___x_4242_ = l_unsafeCast___redArg(v___y_4224_);
v___x_4243_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__3(v_sz_4241_, v___y_4216_, v___x_4242_);
v___x_4244_ = l_unsafeCast___redArg(v___x_4243_);
lean_dec_ref(v___x_4243_);
v_sz_4245_ = lean_array_size(v___x_4244_);
v___x_4246_ = l_unsafeCast___redArg(v___x_4244_);
lean_dec(v___x_4244_);
v___x_4247_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__4(v_sz_4245_, v___y_4216_, v___x_4246_);
v___x_4248_ = l_unsafeCast___redArg(v___x_4247_);
lean_dec_ref(v___x_4247_);
v___x_4249_ = l_unsafeCast___redArg(v___x_4248_);
lean_dec(v___x_4248_);
v___x_4250_ = l_Array_append___redArg(v___x_4240_, v___x_4249_);
lean_dec(v___x_4249_);
v___x_4251_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4251_, 0, v___x_4231_);
lean_ctor_set(v___x_4251_, 1, v___x_4239_);
lean_ctor_set(v___x_4251_, 2, v___x_4250_);
if (lean_obj_tag(v___y_4215_) == 1)
{
lean_object* v_val_4252_; lean_object* v___x_4253_; 
v_val_4252_ = lean_ctor_get(v___y_4215_, 0);
lean_inc(v_val_4252_);
lean_dec_ref_known(v___y_4215_, 1);
v___x_4253_ = l_Array_mkArray1___redArg(v_val_4252_);
v___y_4181_ = v___y_4216_;
v___y_4182_ = v_a_4226_;
v___y_4183_ = v___y_4218_;
v___y_4184_ = v___y_4222_;
v___y_4185_ = v___y_4221_;
v___y_4186_ = v___y_4223_;
v___y_4187_ = v_a_4227_;
v___y_4188_ = v___x_4229_;
v___y_4189_ = v___x_4240_;
v___y_4190_ = v___x_4234_;
v___y_4191_ = v___y_4217_;
v___y_4192_ = v___x_4232_;
v___y_4193_ = v___y_4220_;
v___y_4194_ = v___x_4238_;
v___y_4195_ = v___y_4219_;
v___y_4196_ = v___x_4239_;
v___y_4197_ = v___y_4224_;
v___y_4198_ = v___x_4237_;
v___y_4199_ = v___x_4231_;
v___y_4200_ = v___x_4251_;
v___y_4201_ = v___x_4253_;
goto v___jp_4180_;
}
else
{
lean_object* v___x_4254_; 
lean_dec(v___y_4215_);
v___x_4254_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls_spec__2_spec__2___closed__55));
v___y_4181_ = v___y_4216_;
v___y_4182_ = v_a_4226_;
v___y_4183_ = v___y_4218_;
v___y_4184_ = v___y_4222_;
v___y_4185_ = v___y_4221_;
v___y_4186_ = v___y_4223_;
v___y_4187_ = v_a_4227_;
v___y_4188_ = v___x_4229_;
v___y_4189_ = v___x_4240_;
v___y_4190_ = v___x_4234_;
v___y_4191_ = v___y_4217_;
v___y_4192_ = v___x_4232_;
v___y_4193_ = v___y_4220_;
v___y_4194_ = v___x_4238_;
v___y_4195_ = v___y_4219_;
v___y_4196_ = v___x_4239_;
v___y_4197_ = v___y_4224_;
v___y_4198_ = v___x_4237_;
v___y_4199_ = v___x_4231_;
v___y_4200_ = v___x_4251_;
v___y_4201_ = v___x_4254_;
goto v___jp_4180_;
}
}
else
{
lean_object* v_a_4255_; lean_object* v_a_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4263_; 
lean_dec(v___y_4224_);
lean_dec_ref(v___y_4223_);
lean_dec(v___y_4222_);
lean_dec(v___y_4221_);
lean_dec(v___y_4220_);
lean_dec_ref(v___y_4219_);
lean_dec(v___y_4218_);
lean_dec(v___y_4217_);
lean_dec(v___y_4215_);
lean_dec(v___y_4214_);
lean_dec(v___x_4053_);
lean_dec(v___x_4009_);
v_a_4255_ = lean_ctor_get(v___y_4225_, 0);
v_a_4256_ = lean_ctor_get(v___y_4225_, 1);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___y_4225_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4258_ = v___y_4225_;
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
else
{
lean_inc(v_a_4256_);
lean_inc(v_a_4255_);
lean_dec(v___y_4225_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
lean_object* v___x_4261_; 
if (v_isShared_4259_ == 0)
{
v___x_4261_ = v___x_4258_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_a_4255_);
lean_ctor_set(v_reuseFailAlloc_4262_, 1, v_a_4256_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
return v___x_4261_;
}
}
}
}
v___jp_4264_:
{
lean_object* v___x_4279_; lean_object* v___x_4280_; uint8_t v___x_4281_; 
v___x_4279_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___y_4278_);
v___x_4280_ = lean_array_get_size(v___x_4279_);
v___x_4281_ = lean_nat_dec_lt(v___x_4008_, v___x_4280_);
if (v___x_4281_ == 0)
{
lean_dec_ref(v___x_4279_);
lean_dec_ref(v___y_4276_);
lean_dec_ref(v___y_4271_);
v___y_4214_ = v___y_4265_;
v___y_4215_ = v___y_4272_;
v___y_4216_ = v___y_4266_;
v___y_4217_ = v___y_4273_;
v___y_4218_ = v___y_4267_;
v___y_4219_ = v___y_4278_;
v___y_4220_ = v___y_4274_;
v___y_4221_ = v___y_4268_;
v___y_4222_ = v___y_4269_;
v___y_4223_ = v___y_4270_;
v___y_4224_ = v___y_4275_;
v___y_4225_ = v___y_4277_;
goto v___jp_4213_;
}
else
{
uint8_t v___x_4282_; 
v___x_4282_ = lean_nat_dec_le(v___x_4280_, v___x_4280_);
if (v___x_4282_ == 0)
{
if (v___x_4281_ == 0)
{
lean_dec_ref(v___x_4279_);
lean_dec_ref(v___y_4276_);
lean_dec_ref(v___y_4271_);
v___y_4214_ = v___y_4265_;
v___y_4215_ = v___y_4272_;
v___y_4216_ = v___y_4266_;
v___y_4217_ = v___y_4273_;
v___y_4218_ = v___y_4267_;
v___y_4219_ = v___y_4278_;
v___y_4220_ = v___y_4274_;
v___y_4221_ = v___y_4268_;
v___y_4222_ = v___y_4269_;
v___y_4223_ = v___y_4270_;
v___y_4224_ = v___y_4275_;
v___y_4225_ = v___y_4277_;
goto v___jp_4213_;
}
else
{
size_t v___x_4283_; lean_object* v___x_4284_; 
lean_dec(v___y_4277_);
v___x_4283_ = lean_usize_of_nat(v___x_4280_);
v___x_4284_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandConfigDecl_spec__8(v___x_4279_, v___y_4266_, v___x_4283_, v___y_4276_, v___y_4270_, v___y_4271_);
lean_dec_ref(v___x_4279_);
v___y_4214_ = v___y_4265_;
v___y_4215_ = v___y_4272_;
v___y_4216_ = v___y_4266_;
v___y_4217_ = v___y_4273_;
v___y_4218_ = v___y_4267_;
v___y_4219_ = v___y_4278_;
v___y_4220_ = v___y_4274_;
v___y_4221_ = v___y_4268_;
v___y_4222_ = v___y_4269_;
v___y_4223_ = v___y_4270_;
v___y_4224_ = v___y_4275_;
v___y_4225_ = v___x_4284_;
goto v___jp_4213_;
}
}
else
{
size_t v___x_4285_; lean_object* v___x_4286_; 
lean_dec(v___y_4277_);
v___x_4285_ = lean_usize_of_nat(v___x_4280_);
v___x_4286_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_expandConfigDecl_spec__8(v___x_4279_, v___y_4266_, v___x_4285_, v___y_4276_, v___y_4270_, v___y_4271_);
lean_dec_ref(v___x_4279_);
v___y_4214_ = v___y_4265_;
v___y_4215_ = v___y_4272_;
v___y_4216_ = v___y_4266_;
v___y_4217_ = v___y_4273_;
v___y_4218_ = v___y_4267_;
v___y_4219_ = v___y_4278_;
v___y_4220_ = v___y_4274_;
v___y_4221_ = v___y_4268_;
v___y_4222_ = v___y_4269_;
v___y_4223_ = v___y_4270_;
v___y_4224_ = v___y_4275_;
v___y_4225_ = v___x_4286_;
goto v___jp_4213_;
}
}
}
v___jp_4287_:
{
size_t v_sz_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_15713__overap_4306_; lean_object* v___x_4307_; 
v_sz_4301_ = lean_array_size(v___y_4300_);
v___x_4302_ = l_unsafeCast___redArg(v___y_4300_);
lean_dec_ref(v___y_4300_);
v___x_4303_ = lean_box_usize(v_sz_4301_);
v___x_4304_ = lean_box_usize(v___y_4290_);
v___x_4305_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__1___boxed), 5, 3);
lean_closure_set(v___x_4305_, 0, v___x_4303_);
lean_closure_set(v___x_4305_, 1, v___x_4304_);
lean_closure_set(v___x_4305_, 2, v___x_4302_);
v___x_15713__overap_4306_ = l_unsafeCast___redArg(v___x_4305_);
lean_dec_ref(v___x_4305_);
lean_inc_ref(v___y_4297_);
v___x_4307_ = lean_apply_2(v___x_15713__overap_4306_, v___y_4297_, v___y_4296_);
if (lean_obj_tag(v___x_4307_) == 0)
{
if (lean_obj_tag(v___y_4299_) == 0)
{
lean_object* v_a_4308_; lean_object* v_a_4309_; lean_object* v___x_4310_; 
v_a_4308_ = lean_ctor_get(v___x_4307_, 0);
lean_inc(v_a_4308_);
v_a_4309_ = lean_ctor_get(v___x_4307_, 1);
lean_inc(v_a_4309_);
v___x_4310_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__6));
v___y_4265_ = v___y_4288_;
v___y_4266_ = v___y_4290_;
v___y_4267_ = v___y_4292_;
v___y_4268_ = v___y_4295_;
v___y_4269_ = v___y_4294_;
v___y_4270_ = v___y_4297_;
v___y_4271_ = v_a_4309_;
v___y_4272_ = v___y_4289_;
v___y_4273_ = v___y_4291_;
v___y_4274_ = v___y_4293_;
v___y_4275_ = v___y_4298_;
v___y_4276_ = v_a_4308_;
v___y_4277_ = v___x_4307_;
v___y_4278_ = v___x_4310_;
goto v___jp_4264_;
}
else
{
lean_object* v_a_4311_; lean_object* v_a_4312_; lean_object* v_val_4313_; 
v_a_4311_ = lean_ctor_get(v___x_4307_, 0);
lean_inc(v_a_4311_);
v_a_4312_ = lean_ctor_get(v___x_4307_, 1);
lean_inc(v_a_4312_);
v_val_4313_ = lean_ctor_get(v___y_4299_, 0);
lean_inc(v_val_4313_);
lean_dec_ref_known(v___y_4299_, 1);
v___y_4265_ = v___y_4288_;
v___y_4266_ = v___y_4290_;
v___y_4267_ = v___y_4292_;
v___y_4268_ = v___y_4295_;
v___y_4269_ = v___y_4294_;
v___y_4270_ = v___y_4297_;
v___y_4271_ = v_a_4312_;
v___y_4272_ = v___y_4289_;
v___y_4273_ = v___y_4291_;
v___y_4274_ = v___y_4293_;
v___y_4275_ = v___y_4298_;
v___y_4276_ = v_a_4311_;
v___y_4277_ = v___x_4307_;
v___y_4278_ = v_val_4313_;
goto v___jp_4264_;
}
}
else
{
lean_object* v_a_4314_; lean_object* v_a_4315_; lean_object* v___x_4317_; uint8_t v_isShared_4318_; uint8_t v_isSharedCheck_4322_; 
lean_dec(v___y_4299_);
lean_dec(v___y_4298_);
lean_dec_ref(v___y_4297_);
lean_dec(v___y_4295_);
lean_dec(v___y_4294_);
lean_dec(v___y_4293_);
lean_dec(v___y_4292_);
lean_dec(v___y_4291_);
lean_dec(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec(v___x_4053_);
lean_dec(v___x_4009_);
v_a_4314_ = lean_ctor_get(v___x_4307_, 0);
v_a_4315_ = lean_ctor_get(v___x_4307_, 1);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4307_);
if (v_isSharedCheck_4322_ == 0)
{
v___x_4317_ = v___x_4307_;
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
else
{
lean_inc(v_a_4315_);
lean_inc(v_a_4314_);
lean_dec(v___x_4307_);
v___x_4317_ = lean_box(0);
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
v_resetjp_4316_:
{
lean_object* v___x_4320_; 
if (v_isShared_4318_ == 0)
{
v___x_4320_ = v___x_4317_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_a_4314_);
lean_ctor_set(v_reuseFailAlloc_4321_, 1, v_a_4315_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
}
v___jp_4325_:
{
lean_object* v_methods_4333_; lean_object* v_quotContext_4334_; lean_object* v_currMacroScope_4335_; lean_object* v_currRecDepth_4336_; lean_object* v_maxRecDepth_4337_; lean_object* v_ref_4338_; lean_object* v___x_4339_; lean_object* v_bs_4340_; lean_object* v___x_4341_; lean_object* v_ref_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v_methods_4333_ = lean_ctor_get(v___y_4331_, 0);
v_quotContext_4334_ = lean_ctor_get(v___y_4331_, 1);
v_currMacroScope_4335_ = lean_ctor_get(v___y_4331_, 2);
v_currRecDepth_4336_ = lean_ctor_get(v___y_4331_, 3);
v_maxRecDepth_4337_ = lean_ctor_get(v___y_4331_, 4);
v_ref_4338_ = lean_ctor_get(v___y_4331_, 5);
v___x_4339_ = l_Lean_Syntax_getArgs(v___x_4324_);
lean_dec(v___x_4324_);
v_bs_4340_ = l_unsafeCast___redArg(v___x_4339_);
lean_dec_ref(v___x_4339_);
v___x_4341_ = l_unsafeCast___redArg(v_bs_4340_);
v_ref_4342_ = l_Lean_replaceRef(v_tk_4051_, v_ref_4338_);
lean_dec(v_tk_4051_);
lean_inc(v_ref_4342_);
lean_inc(v_maxRecDepth_4337_);
lean_inc(v_currRecDepth_4336_);
lean_inc(v_currMacroScope_4335_);
lean_inc(v_quotContext_4334_);
lean_inc(v_methods_4333_);
v___x_4343_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4343_, 0, v_methods_4333_);
lean_ctor_set(v___x_4343_, 1, v_quotContext_4334_);
lean_ctor_set(v___x_4343_, 2, v_currMacroScope_4335_);
lean_ctor_set(v___x_4343_, 3, v_currRecDepth_4336_);
lean_ctor_set(v___x_4343_, 4, v_maxRecDepth_4337_);
lean_ctor_set(v___x_4343_, 5, v_ref_4342_);
v___x_4344_ = l_Lake_expandBinders(v___x_4341_, v___x_4343_, v___y_4332_);
lean_dec(v___x_4341_);
if (lean_obj_tag(v___x_4344_) == 0)
{
lean_object* v_a_4345_; lean_object* v_a_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; size_t v_sz_4350_; size_t v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; 
v_a_4345_ = lean_ctor_get(v___x_4344_, 0);
lean_inc(v_a_4345_);
v_a_4346_ = lean_ctor_get(v___x_4344_, 1);
lean_inc(v_a_4346_);
lean_dec_ref_known(v___x_4344_, 2);
v___x_4347_ = lean_unsigned_to_nat(7u);
v___x_4348_ = l_Lean_Syntax_getArg(v_stx_4001_, v___x_4347_);
lean_dec(v_stx_4001_);
v___x_4349_ = l_Lean_Syntax_getArg(v___x_4053_, v___x_4008_);
v_sz_4350_ = lean_array_size(v_a_4345_);
v___x_4351_ = ((size_t)0ULL);
v___x_4352_ = l_unsafeCast___redArg(v_a_4345_);
lean_dec(v_a_4345_);
v___x_4353_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_expandConfigDecl_spec__0(v_sz_4350_, v___x_4351_, v___x_4352_);
v___x_4354_ = l_unsafeCast___redArg(v___x_4353_);
lean_dec_ref(v___x_4353_);
lean_inc(v___x_4349_);
v___x_4355_ = l_Lean_Syntax_mkApp(v___x_4349_, v___x_4354_);
lean_dec(v___x_4354_);
if (lean_obj_tag(v_fs_x3f_4330_) == 0)
{
lean_object* v___x_4356_; 
v___x_4356_ = ((lean_object*)(l___private_Lake_Config_Meta_0__Lake_mkConfigAuxDecls___closed__6));
v___y_4288_ = v_ref_4342_;
v___y_4289_ = v___y_4326_;
v___y_4290_ = v___x_4351_;
v___y_4291_ = v___x_4348_;
v___y_4292_ = v___x_4349_;
v___y_4293_ = v_ctor_x3f_4329_;
v___y_4294_ = v___y_4327_;
v___y_4295_ = v___x_4355_;
v___y_4296_ = v_a_4346_;
v___y_4297_ = v___x_4343_;
v___y_4298_ = v_bs_4340_;
v___y_4299_ = v___y_4328_;
v___y_4300_ = v___x_4356_;
goto v___jp_4287_;
}
else
{
lean_object* v_val_4357_; 
v_val_4357_ = lean_ctor_get(v_fs_x3f_4330_, 0);
lean_inc(v_val_4357_);
lean_dec_ref_known(v_fs_x3f_4330_, 1);
v___y_4288_ = v_ref_4342_;
v___y_4289_ = v___y_4326_;
v___y_4290_ = v___x_4351_;
v___y_4291_ = v___x_4348_;
v___y_4292_ = v___x_4349_;
v___y_4293_ = v_ctor_x3f_4329_;
v___y_4294_ = v___y_4327_;
v___y_4295_ = v___x_4355_;
v___y_4296_ = v_a_4346_;
v___y_4297_ = v___x_4343_;
v___y_4298_ = v_bs_4340_;
v___y_4299_ = v___y_4328_;
v___y_4300_ = v_val_4357_;
goto v___jp_4287_;
}
}
else
{
lean_object* v_a_4358_; lean_object* v_a_4359_; lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4366_; 
lean_dec_ref_known(v___x_4343_, 6);
lean_dec(v_ref_4342_);
lean_dec(v_bs_4340_);
lean_dec(v_fs_x3f_4330_);
lean_dec(v_ctor_x3f_4329_);
lean_dec(v___y_4328_);
lean_dec(v___y_4327_);
lean_dec(v___y_4326_);
lean_dec(v___x_4053_);
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v_a_4358_ = lean_ctor_get(v___x_4344_, 0);
v_a_4359_ = lean_ctor_get(v___x_4344_, 1);
v_isSharedCheck_4366_ = !lean_is_exclusive(v___x_4344_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4361_ = v___x_4344_;
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
else
{
lean_inc(v_a_4359_);
lean_inc(v_a_4358_);
lean_dec(v___x_4344_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4364_; 
if (v_isShared_4362_ == 0)
{
v___x_4364_ = v___x_4361_;
goto v_reusejp_4363_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4358_);
lean_ctor_set(v_reuseFailAlloc_4365_, 1, v_a_4359_);
v___x_4364_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4363_;
}
v_reusejp_4363_:
{
return v___x_4364_;
}
}
}
}
v___jp_4367_:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v_fs_x3f_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4375_ = l_Lean_Syntax_getArg(v___y_4371_, v___x_4052_);
lean_dec(v___y_4371_);
v___x_4376_ = l_Lean_Syntax_getArgs(v___x_4375_);
lean_dec(v___x_4375_);
v_fs_x3f_4377_ = l_unsafeCast___redArg(v___x_4376_);
lean_dec_ref(v___x_4376_);
v___x_4378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4378_, 0, v_ctor_x3f_4372_);
v___x_4379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4379_, 0, v_fs_x3f_4377_);
v___y_4326_ = v___y_4368_;
v___y_4327_ = v___y_4369_;
v___y_4328_ = v___y_4370_;
v_ctor_x3f_4329_ = v___x_4378_;
v_fs_x3f_4330_ = v___x_4379_;
v___y_4331_ = v___y_4373_;
v___y_4332_ = v___y_4374_;
goto v___jp_4325_;
}
v___jp_4380_:
{
lean_object* v___x_4386_; lean_object* v___x_4387_; uint8_t v___x_4388_; 
v___x_4386_ = lean_unsigned_to_nat(6u);
v___x_4387_ = l_Lean_Syntax_getArg(v_stx_4001_, v___x_4386_);
v___x_4388_ = l_Lean_Syntax_isNone(v___x_4387_);
if (v___x_4388_ == 0)
{
uint8_t v___x_4389_; 
lean_inc(v___x_4387_);
v___x_4389_ = l_Lean_Syntax_matchesNull(v___x_4387_, v___x_4323_);
if (v___x_4389_ == 0)
{
lean_object* v___x_4390_; lean_object* v___x_4391_; 
lean_dec(v___x_4387_);
lean_dec(v_xty_x3f_4383_);
lean_dec(v_ps_x3f_4382_);
lean_dec(v___y_4381_);
lean_dec(v___x_4324_);
lean_dec(v___x_4053_);
lean_dec(v_tk_4051_);
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v___x_4390_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4391_ = l_Lean_Macro_throwError___redArg(v___x_4390_, v___y_4384_, v___y_4385_);
return v___x_4391_;
}
else
{
lean_object* v___x_4392_; lean_object* v___x_4393_; uint8_t v___x_4394_; 
v___x_4392_ = l_Lean_Syntax_getArg(v___x_4387_, v___x_4008_);
v___x_4393_ = ((lean_object*)(l_Lake_configDecl___closed__45));
v___x_4394_ = l_Lean_Syntax_isOfKind(v___x_4392_, v___x_4393_);
if (v___x_4394_ == 0)
{
lean_object* v___x_4395_; lean_object* v___x_4396_; 
lean_dec(v___x_4387_);
lean_dec(v_xty_x3f_4383_);
lean_dec(v_ps_x3f_4382_);
lean_dec(v___y_4381_);
lean_dec(v___x_4324_);
lean_dec(v___x_4053_);
lean_dec(v_tk_4051_);
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v___x_4395_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4396_ = l_Lean_Macro_throwError___redArg(v___x_4395_, v___y_4384_, v___y_4385_);
return v___x_4396_;
}
else
{
lean_object* v___x_4397_; uint8_t v___x_4398_; 
v___x_4397_ = l_Lean_Syntax_getArg(v___x_4387_, v___x_4014_);
v___x_4398_ = l_Lean_Syntax_isNone(v___x_4397_);
if (v___x_4398_ == 0)
{
uint8_t v___x_4399_; 
lean_inc(v___x_4397_);
v___x_4399_ = l_Lean_Syntax_matchesNull(v___x_4397_, v___x_4014_);
if (v___x_4399_ == 0)
{
lean_object* v___x_4400_; lean_object* v___x_4401_; 
lean_dec(v___x_4397_);
lean_dec(v___x_4387_);
lean_dec(v_xty_x3f_4383_);
lean_dec(v_ps_x3f_4382_);
lean_dec(v___y_4381_);
lean_dec(v___x_4324_);
lean_dec(v___x_4053_);
lean_dec(v_tk_4051_);
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v___x_4400_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4401_ = l_Lean_Macro_throwError___redArg(v___x_4400_, v___y_4384_, v___y_4385_);
return v___x_4401_;
}
else
{
lean_object* v_ctor_x3f_4402_; lean_object* v___x_4403_; 
v_ctor_x3f_4402_ = l_Lean_Syntax_getArg(v___x_4397_, v___x_4008_);
lean_dec(v___x_4397_);
v___x_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4403_, 0, v_ctor_x3f_4402_);
v___y_4368_ = v___y_4381_;
v___y_4369_ = v_xty_x3f_4383_;
v___y_4370_ = v_ps_x3f_4382_;
v___y_4371_ = v___x_4387_;
v_ctor_x3f_4372_ = v___x_4403_;
v___y_4373_ = v___y_4384_;
v___y_4374_ = v___y_4385_;
goto v___jp_4367_;
}
}
else
{
lean_object* v___x_4404_; 
lean_dec(v___x_4397_);
v___x_4404_ = lean_box(0);
v___y_4368_ = v___y_4381_;
v___y_4369_ = v_xty_x3f_4383_;
v___y_4370_ = v_ps_x3f_4382_;
v___y_4371_ = v___x_4387_;
v_ctor_x3f_4372_ = v___x_4404_;
v___y_4373_ = v___y_4384_;
v___y_4374_ = v___y_4385_;
goto v___jp_4367_;
}
}
}
}
else
{
lean_object* v___x_4405_; 
lean_dec(v___x_4387_);
v___x_4405_ = lean_box(0);
v___y_4326_ = v___y_4381_;
v___y_4327_ = v_xty_x3f_4383_;
v___y_4328_ = v_ps_x3f_4382_;
v_ctor_x3f_4329_ = v___x_4405_;
v_fs_x3f_4330_ = v___x_4405_;
v___y_4331_ = v___y_4384_;
v___y_4332_ = v___y_4385_;
goto v___jp_4325_;
}
}
v___jp_4406_:
{
lean_object* v_ps_x3f_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
v_ps_x3f_4412_ = l_Lean_Syntax_getArgs(v___y_4408_);
lean_dec(v___y_4408_);
v___x_4413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4413_, 0, v_ps_x3f_4412_);
v___x_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4414_, 0, v_xty_x3f_4409_);
v___y_4381_ = v___y_4407_;
v_ps_x3f_4382_ = v___x_4413_;
v_xty_x3f_4383_ = v___x_4414_;
v___y_4384_ = v___y_4410_;
v___y_4385_ = v___y_4411_;
goto v___jp_4380_;
}
v___jp_4415_:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; uint8_t v___x_4421_; 
v___x_4419_ = lean_unsigned_to_nat(5u);
v___x_4420_ = l_Lean_Syntax_getArg(v_stx_4001_, v___x_4419_);
v___x_4421_ = l_Lean_Syntax_isNone(v___x_4420_);
if (v___x_4421_ == 0)
{
uint8_t v___x_4422_; 
lean_inc(v___x_4420_);
v___x_4422_ = l_Lean_Syntax_matchesNull(v___x_4420_, v___x_4014_);
if (v___x_4422_ == 0)
{
lean_object* v___x_4423_; lean_object* v___x_4424_; 
lean_dec(v___x_4420_);
lean_dec(v_ty_x3f_4416_);
lean_dec(v___x_4324_);
lean_dec(v___x_4053_);
lean_dec(v_tk_4051_);
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v___x_4423_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4424_ = l_Lean_Macro_throwError___redArg(v___x_4423_, v___y_4417_, v___y_4418_);
return v___x_4424_;
}
else
{
lean_object* v___x_4425_; lean_object* v___x_4426_; uint8_t v___x_4427_; 
v___x_4425_ = l_Lean_Syntax_getArg(v___x_4420_, v___x_4008_);
lean_dec(v___x_4420_);
v___x_4426_ = ((lean_object*)(l_Lake_configDecl___closed__33));
lean_inc(v___x_4425_);
v___x_4427_ = l_Lean_Syntax_isOfKind(v___x_4425_, v___x_4426_);
if (v___x_4427_ == 0)
{
lean_object* v___x_4428_; lean_object* v___x_4429_; 
lean_dec(v___x_4425_);
lean_dec(v_ty_x3f_4416_);
lean_dec(v___x_4324_);
lean_dec(v___x_4053_);
lean_dec(v_tk_4051_);
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v___x_4428_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4429_ = l_Lean_Macro_throwError___redArg(v___x_4428_, v___y_4417_, v___y_4418_);
return v___x_4429_;
}
else
{
lean_object* v___x_4430_; lean_object* v___x_4431_; uint8_t v___x_4432_; 
v___x_4430_ = l_Lean_Syntax_getArg(v___x_4425_, v___x_4014_);
v___x_4431_ = l_Lean_Syntax_getArg(v___x_4425_, v___x_4052_);
lean_dec(v___x_4425_);
v___x_4432_ = l_Lean_Syntax_isNone(v___x_4431_);
if (v___x_4432_ == 0)
{
uint8_t v___x_4433_; 
lean_inc(v___x_4431_);
v___x_4433_ = l_Lean_Syntax_matchesNull(v___x_4431_, v___x_4014_);
if (v___x_4433_ == 0)
{
lean_object* v___x_4434_; lean_object* v___x_4435_; 
lean_dec(v___x_4431_);
lean_dec(v___x_4430_);
lean_dec(v_ty_x3f_4416_);
lean_dec(v___x_4324_);
lean_dec(v___x_4053_);
lean_dec(v_tk_4051_);
lean_dec(v___x_4009_);
lean_dec(v_stx_4001_);
v___x_4434_ = ((lean_object*)(l_Lake_expandConfigDecl___closed__0));
v___x_4435_ = l_Lean_Macro_throwError___redArg(v___x_4434_, v___y_4417_, v___y_4418_);
return v___x_4435_;
}
else
{
lean_object* v_xty_x3f_4436_; lean_object* v___x_4437_; 
v_xty_x3f_4436_ = l_Lean_Syntax_getArg(v___x_4431_, v___x_4008_);
lean_dec(v___x_4431_);
v___x_4437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4437_, 0, v_xty_x3f_4436_);
v___y_4407_ = v_ty_x3f_4416_;
v___y_4408_ = v___x_4430_;
v_xty_x3f_4409_ = v___x_4437_;
v___y_4410_ = v___y_4417_;
v___y_4411_ = v___y_4418_;
goto v___jp_4406_;
}
}
else
{
lean_object* v___x_4438_; 
lean_dec(v___x_4431_);
v___x_4438_ = lean_box(0);
v___y_4407_ = v_ty_x3f_4416_;
v___y_4408_ = v___x_4430_;
v_xty_x3f_4409_ = v___x_4438_;
v___y_4410_ = v___y_4417_;
v___y_4411_ = v___y_4418_;
goto v___jp_4406_;
}
}
}
}
else
{
lean_object* v___x_4439_; 
lean_dec(v___x_4420_);
v___x_4439_ = lean_box(0);
v___y_4381_ = v_ty_x3f_4416_;
v_ps_x3f_4382_ = v___x_4439_;
v_xty_x3f_4383_ = v___x_4439_;
v___y_4384_ = v___y_4417_;
v___y_4385_ = v___y_4418_;
goto v___jp_4380_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_expandConfigDecl___boxed(lean_object* v_stx_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_){
_start:
{
lean_object* v_res_4452_; 
v_res_4452_ = l_Lake_expandConfigDecl(v_stx_4449_, v_a_4450_, v_a_4451_);
lean_dec_ref(v_a_4450_);
return v_res_4452_;
}
}
lean_object* runtime_initialize_Lake_Util_Binder(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_MetaClasses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Meta(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_MetaClasses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Util_Binder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Meta(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Binder(uint8_t builtin);
lean_object* initialize_Lake_Config_MetaClasses(uint8_t builtin);
lean_object* initialize_Lake_Util_Binder(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Meta(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_MetaClasses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Meta(builtin);
}
#ifdef __cplusplus
}
#endif

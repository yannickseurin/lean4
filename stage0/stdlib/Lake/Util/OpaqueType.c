// Lean compiler output
// Module: Lake.Util.OpaqueType
// Imports: public meta import Lake.Util.Binder public import Init.Prelude
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lake_expandBinders(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_BinderSyntaxView_mkBinder(lean_object*);
lean_object* l_Lake_BinderSyntaxView_mkArgument(lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__0 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nonemptyTypeCmd"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__1 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__1_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__2_value_aux_0),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(94, 29, 126, 4, 221, 16, 76, 39)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__2 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__2_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__3 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__3_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__4 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__5 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__5_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__5_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__6 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__6_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__7 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__7_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__7_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__8 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__8_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__8_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__9 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__9_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__6_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__9_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__10 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__10_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "visibility"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__11 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__11_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__11_value),LEAN_SCALAR_PTR_LITERAL(70, 205, 25, 140, 55, 50, 241, 254)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__12 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__12_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__12_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__13 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__13_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__6_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__13_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__14 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__14_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__10_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__14_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__15 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__15_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "nonempty_type "};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__16 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__16_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__16_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__17 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__17_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__15_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__17_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__18 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__18_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__19 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__19_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__19_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__20 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__20_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__20_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__21 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__18_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__22 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__22_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__23 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__23_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__23_value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__24 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__24_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "binder"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__25 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__25_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__26_value_aux_0),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(90, 139, 132, 2, 118, 46, 191, 226)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__26 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__26_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__26_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__27 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__27_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__24_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__27_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__28 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__28_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__22_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__28_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__29 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__29_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__2_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__29_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__30 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__30_value;
LEAN_EXPORT const lean_object* l_Lake_nonemptyTypeCmd = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__30_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nonemptyType"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0(lean_object*);
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instNonempty"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Type"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pipeProj"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "|>."};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(112, 109, 54, 158, 248, 169, 165, 159)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__10_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Nonempty"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(142, 191, 110, 220, 210, 100, 152, 183)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__19 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__19_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__20 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__20_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "property"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(89, 150, 111, 5, 6, 150, 149, 192)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28_value;
static const lean_array_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__35 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__35_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(111, 217, 152, 21, 13, 97, 204, 102)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__44 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__44_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__44_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value;
static const lean_array_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31_value),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "explicitUniv"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(206, 217, 218, 63, 82, 102, 26, 62)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NonemptyType"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(87, 253, 156, 237, 229, 153, 40, 17)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__61 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__61_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59_value),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__61_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".{"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__65 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__65_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__66 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__66_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_hydrateOpaqueTypeCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "hydrateOpaqueTypeCmd"};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__0 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__0_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__1_value_aux_0),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(131, 247, 39, 29, 239, 7, 87, 22)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__1 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__1_value;
static const lean_string_object l_Lake_hydrateOpaqueTypeCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "hydrate_opaque_type "};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__2 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__2_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__2_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__3 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__3_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__14_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__3_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__4 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__4_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__5 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__5_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__5_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__6 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__6_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__24_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__7 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__7_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__6_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__7_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__8 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__8_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__8_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__9 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__9_value;
LEAN_EXPORT const lean_object* l_Lake_hydrateOpaqueTypeCmd = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Coe"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 70, 184, 182, 52, 50, 221, 222)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__5_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__9_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__14_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__15_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__16 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__16_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__17 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__17_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__19 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__19_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Inhabited"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__23 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__23_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(29, 214, 131, 210, 10, 90, 37, 134)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(174, 152, 115, 107, 166, 56, 116, 8)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__28 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__28_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__29 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__29_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__31 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__31_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "unsafeMk"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(17, 66, 223, 134, 53, 49, 169, 208)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instCoeMk"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__36 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__36_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(188, 43, 242, 158, 192, 163, 123, 89)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__39 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__39_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__39_value),LEAN_SCALAR_PTR_LITERAL(149, 195, 233, 5, 41, 184, 182, 9)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "unsafeGet"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__42 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__42_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(172, 192, 107, 19, 95, 77, 28, 221)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__43 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__43_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instCoeGet"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45_value),LEAN_SCALAR_PTR_LITERAL(4, 9, 13, 81, 139, 59, 11, 128)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(84, 17, 124, 142, 243, 161, 231, 243)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__50 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__50_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__57 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__57_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__57_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inline"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59_value),LEAN_SCALAR_PTR_LITERAL(92, 198, 166, 26, 13, 231, 61, 113)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__64 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__64_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(79, 160, 60, 55, 136, 115, 80, 144)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arrow"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71_value),LEAN_SCALAR_PTR_LITERAL(182, 146, 143, 73, 122, 115, 5, 207)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "unsafeCast"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(190, 168, 242, 108, 36, 6, 114, 127)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__78 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__78_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__78_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__79 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__79_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__79_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__80 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__80_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implemented_by"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__82 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__82_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__83;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__82_value),LEAN_SCALAR_PTR_LITERAL(221, 249, 143, 128, 101, 138, 146, 72)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__84 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__84_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0(lean_object* v_x_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0___closed__0));
v___x_72_ = l_Lean_Name_str___override(v_x_70_, v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1(lean_object* v_x_74_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1___closed__0));
v___x_76_ = l_Lean_Name_str___override(v_x_74_, v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1(size_t v_sz_77_, size_t v_i_78_, lean_object* v_bs_79_){
_start:
{
uint8_t v___x_80_; 
v___x_80_ = lean_usize_dec_lt(v_i_78_, v_sz_77_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; 
v___x_81_ = l_unsafeCast___redArg(v_bs_79_);
lean_dec_ref(v_bs_79_);
return v___x_81_;
}
else
{
lean_object* v_v_82_; lean_object* v___x_83_; lean_object* v_bs_x27_84_; lean_object* v___x_85_; size_t v___x_86_; size_t v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v_v_82_ = lean_array_uget(v_bs_79_, v_i_78_);
v___x_83_ = lean_unsigned_to_nat(0u);
v_bs_x27_84_ = lean_array_uset(v_bs_79_, v_i_78_, v___x_83_);
v___x_85_ = l_unsafeCast___redArg(v_v_82_);
lean_dec(v_v_82_);
v___x_86_ = ((size_t)1ULL);
v___x_87_ = lean_usize_add(v_i_78_, v___x_86_);
v___x_88_ = l_unsafeCast___redArg(v___x_85_);
lean_dec(v___x_85_);
v___x_89_ = lean_array_uset(v_bs_x27_84_, v_i_78_, v___x_88_);
v_i_78_ = v___x_87_;
v_bs_79_ = v___x_89_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1___boxed(lean_object* v_sz_91_, lean_object* v_i_92_, lean_object* v_bs_93_){
_start:
{
size_t v_sz_boxed_94_; size_t v_i_boxed_95_; lean_object* v_res_96_; 
v_sz_boxed_94_ = lean_unbox_usize(v_sz_91_);
lean_dec(v_sz_91_);
v_i_boxed_95_ = lean_unbox_usize(v_i_92_);
lean_dec(v_i_92_);
v_res_96_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1(v_sz_boxed_94_, v_i_boxed_95_, v_bs_93_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0(size_t v_sz_97_, size_t v_i_98_, lean_object* v_bs_99_){
_start:
{
uint8_t v___x_100_; 
v___x_100_ = lean_usize_dec_lt(v_i_98_, v_sz_97_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
v___x_101_ = l_unsafeCast___redArg(v_bs_99_);
lean_dec_ref(v_bs_99_);
return v___x_101_;
}
else
{
lean_object* v_v_102_; lean_object* v___x_103_; lean_object* v_bs_x27_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; size_t v___x_109_; size_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_v_102_ = lean_array_uget(v_bs_99_, v_i_98_);
v___x_103_ = lean_unsigned_to_nat(0u);
v_bs_x27_104_ = lean_array_uset(v_bs_99_, v_i_98_, v___x_103_);
v___x_105_ = l_unsafeCast___redArg(v_v_102_);
lean_dec(v_v_102_);
lean_inc(v___x_105_);
v___x_106_ = l_Lake_BinderSyntaxView_mkBinder(v___x_105_);
v___x_107_ = l_Lake_BinderSyntaxView_mkArgument(v___x_105_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = ((size_t)1ULL);
v___x_110_ = lean_usize_add(v_i_98_, v___x_109_);
v___x_111_ = l_unsafeCast___redArg(v___x_108_);
lean_dec_ref_known(v___x_108_, 2);
v___x_112_ = lean_array_uset(v_bs_x27_104_, v_i_98_, v___x_111_);
v_i_98_ = v___x_110_;
v_bs_99_ = v___x_112_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0___boxed(lean_object* v_sz_114_, lean_object* v_i_115_, lean_object* v_bs_116_){
_start:
{
size_t v_sz_boxed_117_; size_t v_i_boxed_118_; lean_object* v_res_119_; 
v_sz_boxed_117_ = lean_unbox_usize(v_sz_114_);
lean_dec(v_sz_114_);
v_i_boxed_118_ = lean_unbox_usize(v_i_115_);
lean_dec(v_i_115_);
v_res_119_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0(v_sz_boxed_117_, v_i_boxed_118_, v_bs_116_);
return v_res_119_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3));
v___x_130_ = l_String_toRawSubstring_x27(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16));
v___x_140_ = l_String_toRawSubstring_x27(v___x_139_);
return v___x_140_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26));
v___x_153_ = l_String_toRawSubstring_x27(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Array_mkArray0___redArg();
return v___x_176_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56));
v___x_223_ = l_String_toRawSubstring_x27(v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1(lean_object* v_x_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v___x_246_; uint8_t v___x_247_; 
v___x_246_ = ((lean_object*)(l_Lake_nonemptyTypeCmd___closed__2));
lean_inc(v_x_243_);
v___x_247_ = l_Lean_Syntax_isOfKind(v_x_243_, v___x_246_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v_x_243_);
v___x_248_ = lean_box(1);
v___x_249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v_a_245_);
return v___x_249_;
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v_id_255_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___y_260_; lean_object* v___y_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___y_268_; lean_object* v___y_269_; lean_object* v___y_270_; lean_object* v___y_271_; lean_object* v___y_272_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___y_275_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_280_; lean_object* v___y_281_; lean_object* v___y_282_; lean_object* v___y_283_; lean_object* v___y_284_; lean_object* v___y_285_; lean_object* v___y_378_; lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___y_389_; lean_object* v___y_390_; lean_object* v___y_391_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_413_; lean_object* v___y_414_; lean_object* v___y_415_; lean_object* v___y_416_; lean_object* v___y_417_; size_t v___y_418_; lean_object* v___y_419_; uint8_t v___y_420_; lean_object* v___y_421_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___y_492_; size_t v___y_493_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v_bs_518_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_561_; lean_object* v___x_572_; 
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = l_Lean_Syntax_getArg(v_x_243_, v___x_250_);
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = l_Lean_Syntax_getArg(v_x_243_, v___x_252_);
v___x_254_ = lean_unsigned_to_nat(3u);
v_id_255_ = l_Lean_Syntax_getArg(v_x_243_, v___x_254_);
v___x_515_ = lean_unsigned_to_nat(4u);
v___x_516_ = l_Lean_Syntax_getArg(v_x_243_, v___x_515_);
lean_dec(v_x_243_);
v___x_517_ = l_Lean_Syntax_getArgs(v___x_516_);
lean_dec(v___x_516_);
v_bs_518_ = l_unsafeCast___redArg(v___x_517_);
lean_dec_ref(v___x_517_);
v___x_572_ = l_Lean_Syntax_getOptional_x3f(v___x_253_);
lean_dec(v___x_253_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v___x_573_; 
v___x_573_ = lean_box(0);
v___y_561_ = v___x_573_;
goto v___jp_560_;
}
else
{
lean_object* v_val_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
v_val_574_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_572_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_val_574_);
lean_dec(v___x_572_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_val_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
v___y_561_ = v___x_579_;
goto v___jp_560_;
}
}
}
v___jp_256_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_286_ = l_Array_append___redArg(v___y_283_, v___y_285_);
lean_dec_ref(v___y_285_);
lean_inc_n(v___y_272_, 5);
lean_inc_n(v___y_261_, 38);
v___x_287_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_287_, 0, v___y_261_);
lean_ctor_set(v___x_287_, 1, v___y_272_);
lean_ctor_set(v___x_287_, 2, v___x_286_);
lean_inc_ref(v___x_287_);
lean_inc_n(v___y_257_, 24);
lean_inc(v___y_276_);
v___x_288_ = l_Lean_Syntax_node7(v___y_261_, v___y_276_, v___y_275_, v___y_257_, v___x_287_, v___y_257_, v___y_257_, v___y_257_, v___y_257_);
v___x_289_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0));
lean_inc_ref_n(v___y_258_, 4);
lean_inc_ref_n(v___y_269_, 13);
lean_inc_ref_n(v___y_270_, 13);
v___x_290_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_258_, v___x_289_);
v___x_291_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1));
v___x_292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_292_, 0, v___y_261_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
lean_inc(v_id_255_);
v___x_293_ = lean_array_push(v___y_279_, v_id_255_);
v___x_294_ = lean_array_push(v___x_293_, v___y_267_);
lean_inc_n(v___y_282_, 2);
lean_inc(v___y_260_);
v___x_295_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_295_, 0, v___y_260_);
lean_ctor_set(v___x_295_, 1, v___y_282_);
lean_ctor_set(v___x_295_, 2, v___x_294_);
v___x_296_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2));
v___x_297_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_258_, v___x_296_);
v___x_298_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3));
lean_inc_ref_n(v___y_280_, 5);
v___x_299_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_280_, v___x_298_);
v___x_300_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__4));
v___x_301_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_301_, 0, v___y_261_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = l_Lean_Syntax_node2(v___y_261_, v___x_299_, v___x_301_, v___y_257_);
lean_inc(v___y_265_);
lean_inc(v___y_273_);
v___x_303_ = l_Lean_Syntax_node2(v___y_261_, v___y_273_, v___y_265_, v___x_302_);
v___x_304_ = l_Lean_Syntax_node1(v___y_261_, v___y_272_, v___x_303_);
v___x_305_ = l_Lean_Syntax_node2(v___y_261_, v___x_297_, v___y_264_, v___x_304_);
v___x_306_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5));
v___x_307_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_258_, v___x_306_);
v___x_308_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6));
v___x_309_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_309_, 0, v___y_261_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v___x_310_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7));
v___x_311_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_280_, v___x_310_);
v___x_312_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8));
v___x_313_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_313_, 0, v___y_261_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9);
v___x_315_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__10));
lean_inc_n(v___y_277_, 2);
lean_inc_n(v___y_262_, 2);
v___x_316_ = l_Lean_addMacroScope(v___y_262_, v___x_315_, v___y_277_);
lean_inc_n(v___y_259_, 3);
v___x_317_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_317_, 0, v___y_261_);
lean_ctor_set(v___x_317_, 1, v___x_314_);
lean_ctor_set(v___x_317_, 2, v___x_316_);
lean_ctor_set(v___x_317_, 3, v___y_259_);
lean_inc_ref(v___x_313_);
lean_inc(v___y_278_);
lean_inc(v___x_311_);
v___x_318_ = l_Lean_Syntax_node5(v___y_261_, v___x_311_, v___y_278_, v___x_313_, v___x_317_, v___y_257_, v___y_257_);
v___x_319_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11));
v___x_320_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12));
v___x_321_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___x_319_, v___x_320_);
v___x_322_ = l_Lean_Syntax_node2(v___y_261_, v___x_321_, v___y_257_, v___y_257_);
lean_inc(v___x_322_);
lean_inc_ref(v___x_309_);
lean_inc(v___x_307_);
v___x_323_ = l_Lean_Syntax_node4(v___y_261_, v___x_307_, v___x_309_, v___x_318_, v___x_322_, v___y_257_);
v___x_324_ = l_Lean_Syntax_node5(v___y_261_, v___x_290_, v___x_292_, v___x_295_, v___x_305_, v___x_323_, v___y_257_);
lean_inc(v___y_271_);
v___x_325_ = l_Lean_Syntax_node2(v___y_261_, v___y_271_, v___x_288_, v___x_324_);
v___x_326_ = l_Lean_Syntax_node7(v___y_261_, v___y_276_, v___y_257_, v___y_257_, v___x_287_, v___y_257_, v___y_257_, v___y_257_, v___y_257_);
v___x_327_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13));
v___x_328_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_258_, v___x_327_);
v___x_329_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14));
v___x_330_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_280_, v___x_329_);
v___x_331_ = l_Lean_Syntax_node1(v___y_261_, v___x_330_, v___y_257_);
v___x_332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_332_, 0, v___y_261_);
lean_ctor_set(v___x_332_, 1, v___x_327_);
v___x_333_ = l_Lean_Syntax_node2(v___y_261_, v___y_282_, v___y_284_, v___y_257_);
v___x_334_ = l_Lean_Syntax_node1(v___y_261_, v___y_272_, v___x_333_);
v___x_335_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15));
v___x_336_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_280_, v___x_335_);
v___x_337_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17);
v___x_338_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18));
v___x_339_ = l_Lean_addMacroScope(v___y_262_, v___x_338_, v___y_277_);
lean_inc(v___y_274_);
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_338_);
lean_ctor_set(v___x_340_, 1, v___y_274_);
v___x_341_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__19));
v___x_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v___y_259_);
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_340_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_344_, 0, v___y_261_);
lean_ctor_set(v___x_344_, 1, v___x_337_);
lean_ctor_set(v___x_344_, 2, v___x_339_);
lean_ctor_set(v___x_344_, 3, v___x_343_);
v___x_345_ = l_Lean_Syntax_mkApp(v_id_255_, v___y_266_);
lean_dec_ref(v___y_266_);
v___x_346_ = l_Lean_Syntax_node1(v___y_261_, v___y_272_, v___x_345_);
v___x_347_ = l_Lean_Syntax_node2(v___y_261_, v___x_336_, v___x_344_, v___x_346_);
v___x_348_ = l_Lean_Syntax_node2(v___y_261_, v___y_273_, v___y_265_, v___x_347_);
v___x_349_ = l_Lean_Syntax_node2(v___y_261_, v___y_281_, v___y_257_, v___x_348_);
v___x_350_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__20));
v___x_351_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___y_280_, v___x_350_);
v___x_352_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21));
v___x_353_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_353_, 0, v___y_261_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22));
v___x_355_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23));
v___x_356_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___x_354_, v___x_355_);
v___x_357_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24));
v___x_358_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___x_354_, v___x_357_);
v___x_359_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25));
v___x_360_ = l_Lean_Name_mkStr4(v___y_270_, v___y_269_, v___x_354_, v___x_359_);
v___x_361_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_361_, 0, v___y_261_);
lean_ctor_set(v___x_361_, 1, v___x_359_);
v___x_362_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27);
v___x_363_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28));
v___x_364_ = l_Lean_addMacroScope(v___y_262_, v___x_363_, v___y_277_);
v___x_365_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_365_, 0, v___y_261_);
lean_ctor_set(v___x_365_, 1, v___x_362_);
lean_ctor_set(v___x_365_, 2, v___x_364_);
lean_ctor_set(v___x_365_, 3, v___y_259_);
v___x_366_ = l_Lean_Syntax_node5(v___y_261_, v___x_311_, v___y_278_, v___x_313_, v___x_365_, v___y_257_, v___y_257_);
v___x_367_ = l_Lean_Syntax_node2(v___y_261_, v___x_360_, v___x_361_, v___x_366_);
v___x_368_ = l_Lean_Syntax_node1(v___y_261_, v___y_272_, v___x_367_);
v___x_369_ = l_Lean_Syntax_node1(v___y_261_, v___x_358_, v___x_368_);
v___x_370_ = l_Lean_Syntax_node1(v___y_261_, v___x_356_, v___x_369_);
v___x_371_ = l_Lean_Syntax_node2(v___y_261_, v___x_351_, v___x_353_, v___x_370_);
v___x_372_ = l_Lean_Syntax_node4(v___y_261_, v___x_307_, v___x_309_, v___x_371_, v___x_322_, v___y_257_);
v___x_373_ = l_Lean_Syntax_node6(v___y_261_, v___x_328_, v___x_331_, v___x_332_, v___y_257_, v___x_334_, v___x_349_, v___x_372_);
v___x_374_ = l_Lean_Syntax_node2(v___y_261_, v___y_271_, v___x_326_, v___x_373_);
v___x_375_ = l_Lean_Syntax_node3(v___y_261_, v___y_272_, v___y_268_, v___x_325_, v___x_374_);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set(v___x_376_, 1, v___y_263_);
return v___x_376_;
}
v___jp_377_:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
lean_inc_ref(v___y_404_);
v___x_407_ = l_Array_append___redArg(v___y_404_, v___y_406_);
lean_dec_ref(v___y_406_);
lean_inc(v___y_393_);
lean_inc(v___y_383_);
v___x_408_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_408_, 0, v___y_383_);
lean_ctor_set(v___x_408_, 1, v___y_393_);
lean_ctor_set(v___x_408_, 2, v___x_407_);
if (lean_obj_tag(v___y_402_) == 1)
{
lean_object* v_val_409_; lean_object* v___x_410_; 
v_val_409_ = lean_ctor_get(v___y_402_, 0);
lean_inc(v_val_409_);
lean_dec_ref_known(v___y_402_, 1);
v___x_410_ = l_Array_mkArray1___redArg(v_val_409_);
v___y_257_ = v___y_378_;
v___y_258_ = v___y_379_;
v___y_259_ = v___y_380_;
v___y_260_ = v___y_381_;
v___y_261_ = v___y_383_;
v___y_262_ = v___y_382_;
v___y_263_ = v___y_385_;
v___y_264_ = v___y_384_;
v___y_265_ = v___y_386_;
v___y_266_ = v___y_387_;
v___y_267_ = v___y_388_;
v___y_268_ = v___y_389_;
v___y_269_ = v___y_390_;
v___y_270_ = v___y_391_;
v___y_271_ = v___y_392_;
v___y_272_ = v___y_393_;
v___y_273_ = v___y_394_;
v___y_274_ = v___y_395_;
v___y_275_ = v___x_408_;
v___y_276_ = v___y_396_;
v___y_277_ = v___y_397_;
v___y_278_ = v___y_398_;
v___y_279_ = v___y_399_;
v___y_280_ = v___y_400_;
v___y_281_ = v___y_401_;
v___y_282_ = v___y_403_;
v___y_283_ = v___y_404_;
v___y_284_ = v___y_405_;
v___y_285_ = v___x_410_;
goto v___jp_256_;
}
else
{
lean_object* v___x_411_; 
lean_dec(v___y_402_);
v___x_411_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29));
v___y_257_ = v___y_378_;
v___y_258_ = v___y_379_;
v___y_259_ = v___y_380_;
v___y_260_ = v___y_381_;
v___y_261_ = v___y_383_;
v___y_262_ = v___y_382_;
v___y_263_ = v___y_385_;
v___y_264_ = v___y_384_;
v___y_265_ = v___y_386_;
v___y_266_ = v___y_387_;
v___y_267_ = v___y_388_;
v___y_268_ = v___y_389_;
v___y_269_ = v___y_390_;
v___y_270_ = v___y_391_;
v___y_271_ = v___y_392_;
v___y_272_ = v___y_393_;
v___y_273_ = v___y_394_;
v___y_274_ = v___y_395_;
v___y_275_ = v___x_408_;
v___y_276_ = v___y_396_;
v___y_277_ = v___y_397_;
v___y_278_ = v___y_398_;
v___y_279_ = v___y_399_;
v___y_280_ = v___y_400_;
v___y_281_ = v___y_401_;
v___y_282_ = v___y_403_;
v___y_283_ = v___y_404_;
v___y_284_ = v___y_405_;
v___y_285_ = v___x_411_;
goto v___jp_256_;
}
}
v___jp_412_:
{
lean_object* v_quotContext_422_; lean_object* v_currMacroScope_423_; lean_object* v_ref_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; size_t v_sz_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_quotContext_422_ = lean_ctor_get(v_a_244_, 1);
v_currMacroScope_423_ = lean_ctor_get(v_a_244_, 2);
v_ref_424_ = lean_ctor_get(v_a_244_, 5);
v___x_425_ = l_Lean_mkIdentFrom(v_id_255_, v___y_421_, v___y_420_);
lean_inc(v___y_413_);
v___x_426_ = l_Lean_Syntax_mkApp(v___y_413_, v___y_419_);
v___x_427_ = l_Lean_SourceInfo_fromRef(v_ref_424_, v___y_420_);
v___x_428_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31));
v___x_429_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32));
v___x_430_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33));
v___x_431_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34));
v___x_432_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36));
v___x_433_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38));
v___x_434_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39);
lean_inc_n(v___x_427_, 19);
v___x_435_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_435_, 0, v___x_427_);
lean_ctor_set(v___x_435_, 1, v___x_428_);
lean_ctor_set(v___x_435_, 2, v___x_434_);
v___x_436_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40));
v___x_437_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41));
v___x_438_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_427_);
lean_ctor_set(v___x_438_, 1, v___x_436_);
v___x_439_ = l_Lean_Syntax_node1(v___x_427_, v___x_437_, v___x_438_);
v___x_440_ = l_Lean_Syntax_node1(v___x_427_, v___x_428_, v___x_439_);
lean_inc_ref_n(v___x_435_, 7);
v___x_441_ = l_Lean_Syntax_node7(v___x_427_, v___x_433_, v___x_435_, v___x_435_, v___x_440_, v___x_435_, v___x_435_, v___x_435_, v___x_435_);
v___x_442_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42));
v___x_443_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43));
v___x_444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_427_);
lean_ctor_set(v___x_444_, 1, v___x_442_);
v___x_445_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45));
v___x_446_ = lean_box(2);
v___x_447_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47));
v___x_448_ = lean_unsigned_to_nat(2u);
v___x_449_ = lean_mk_empty_array_with_capacity(v___x_448_);
lean_inc_ref(v___x_449_);
v___x_450_ = lean_array_push(v___x_449_, v___y_413_);
v___x_451_ = lean_array_push(v___x_450_, v___x_447_);
v___x_452_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_452_, 0, v___x_446_);
lean_ctor_set(v___x_452_, 1, v___x_445_);
lean_ctor_set(v___x_452_, 2, v___x_451_);
v___x_453_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49));
v_sz_454_ = lean_array_size(v___y_415_);
v___x_455_ = l_unsafeCast___redArg(v___y_415_);
lean_dec_ref(v___y_415_);
v___x_456_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1(v_sz_454_, v___y_418_, v___x_455_);
v___x_457_ = l_unsafeCast___redArg(v___x_456_);
lean_dec_ref(v___x_456_);
v___x_458_ = l_Array_append___redArg(v___x_434_, v___x_457_);
lean_dec(v___x_457_);
v___x_459_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_459_, 0, v___x_427_);
lean_ctor_set(v___x_459_, 1, v___x_428_);
lean_ctor_set(v___x_459_, 2, v___x_458_);
v___x_460_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50));
v___x_461_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52));
v___x_462_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53));
v___x_463_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_427_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55));
v___x_465_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57);
v___x_466_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58));
lean_inc(v_currMacroScope_423_);
lean_inc(v_quotContext_422_);
v___x_467_ = l_Lean_addMacroScope(v_quotContext_422_, v___x_466_, v_currMacroScope_423_);
v___x_468_ = lean_box(0);
v___x_469_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62));
v___x_470_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_470_, 0, v___x_427_);
lean_ctor_set(v___x_470_, 1, v___x_465_);
lean_ctor_set(v___x_470_, 2, v___x_467_);
lean_ctor_set(v___x_470_, 3, v___x_469_);
v___x_471_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63));
v___x_472_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_427_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__65));
v___x_474_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__66));
v___x_475_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_427_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = l_Lean_Syntax_node1(v___x_427_, v___x_473_, v___x_475_);
v___x_477_ = l_Lean_Syntax_node1(v___x_427_, v___x_428_, v___x_476_);
v___x_478_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67));
v___x_479_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_427_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = l_Lean_Syntax_node4(v___x_427_, v___x_464_, v___x_470_, v___x_472_, v___x_477_, v___x_479_);
lean_inc_ref(v___x_463_);
v___x_481_ = l_Lean_Syntax_node2(v___x_427_, v___x_461_, v___x_463_, v___x_480_);
lean_inc_ref(v___x_459_);
v___x_482_ = l_Lean_Syntax_node2(v___x_427_, v___x_453_, v___x_459_, v___x_481_);
v___x_483_ = l_Lean_Syntax_node4(v___x_427_, v___x_443_, v___x_444_, v___x_452_, v___x_482_, v___x_435_);
v___x_484_ = l_Lean_Syntax_node2(v___x_427_, v___x_432_, v___x_441_, v___x_483_);
if (lean_obj_tag(v___y_417_) == 1)
{
lean_object* v_val_485_; lean_object* v___x_486_; 
v_val_485_ = lean_ctor_get(v___y_417_, 0);
lean_inc(v_val_485_);
lean_dec_ref_known(v___y_417_, 1);
v___x_486_ = l_Array_mkArray1___redArg(v_val_485_);
lean_inc(v_currMacroScope_423_);
lean_inc(v_quotContext_422_);
v___y_378_ = v___x_435_;
v___y_379_ = v___x_431_;
v___y_380_ = v___x_468_;
v___y_381_ = v___x_446_;
v___y_382_ = v_quotContext_422_;
v___y_383_ = v___x_427_;
v___y_384_ = v___x_459_;
v___y_385_ = v___y_414_;
v___y_386_ = v___x_463_;
v___y_387_ = v___y_419_;
v___y_388_ = v___x_447_;
v___y_389_ = v___x_484_;
v___y_390_ = v___x_430_;
v___y_391_ = v___x_429_;
v___y_392_ = v___x_432_;
v___y_393_ = v___x_428_;
v___y_394_ = v___x_461_;
v___y_395_ = v___x_468_;
v___y_396_ = v___x_433_;
v___y_397_ = v_currMacroScope_423_;
v___y_398_ = v___x_426_;
v___y_399_ = v___x_449_;
v___y_400_ = v___x_460_;
v___y_401_ = v___x_453_;
v___y_402_ = v___y_416_;
v___y_403_ = v___x_445_;
v___y_404_ = v___x_434_;
v___y_405_ = v___x_425_;
v___y_406_ = v___x_486_;
goto v___jp_377_;
}
else
{
lean_object* v___x_487_; 
lean_dec(v___y_417_);
v___x_487_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29));
lean_inc(v_currMacroScope_423_);
lean_inc(v_quotContext_422_);
v___y_378_ = v___x_435_;
v___y_379_ = v___x_431_;
v___y_380_ = v___x_468_;
v___y_381_ = v___x_446_;
v___y_382_ = v_quotContext_422_;
v___y_383_ = v___x_427_;
v___y_384_ = v___x_459_;
v___y_385_ = v___y_414_;
v___y_386_ = v___x_463_;
v___y_387_ = v___y_419_;
v___y_388_ = v___x_447_;
v___y_389_ = v___x_484_;
v___y_390_ = v___x_430_;
v___y_391_ = v___x_429_;
v___y_392_ = v___x_432_;
v___y_393_ = v___x_428_;
v___y_394_ = v___x_461_;
v___y_395_ = v___x_468_;
v___y_396_ = v___x_433_;
v___y_397_ = v_currMacroScope_423_;
v___y_398_ = v___x_426_;
v___y_399_ = v___x_449_;
v___y_400_ = v___x_460_;
v___y_401_ = v___x_453_;
v___y_402_ = v___y_416_;
v___y_403_ = v___x_445_;
v___y_404_ = v___x_434_;
v___y_405_ = v___x_425_;
v___y_406_ = v___x_487_;
goto v___jp_377_;
}
}
v___jp_488_:
{
uint8_t v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_497_ = 0;
v___x_498_ = l_Lean_mkIdentFrom(v_id_255_, v___y_496_, v___x_497_);
v___x_499_ = l_Lean_Name_hasMacroScopes(v___y_495_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; 
v___x_500_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1(v___y_495_);
v___y_413_ = v___x_498_;
v___y_414_ = v___y_489_;
v___y_415_ = v___y_490_;
v___y_416_ = v___y_491_;
v___y_417_ = v___y_492_;
v___y_418_ = v___y_493_;
v___y_419_ = v___y_494_;
v___y_420_ = v___x_497_;
v___y_421_ = v___x_500_;
goto v___jp_412_;
}
else
{
lean_object* v_view_501_; lean_object* v_name_502_; lean_object* v_imported_503_; lean_object* v_ctx_504_; lean_object* v_scopes_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_514_; 
v_view_501_ = l_Lean_extractMacroScopes(v___y_495_);
v_name_502_ = lean_ctor_get(v_view_501_, 0);
v_imported_503_ = lean_ctor_get(v_view_501_, 1);
v_ctx_504_ = lean_ctor_get(v_view_501_, 2);
v_scopes_505_ = lean_ctor_get(v_view_501_, 3);
v_isSharedCheck_514_ = !lean_is_exclusive(v_view_501_);
if (v_isSharedCheck_514_ == 0)
{
v___x_507_ = v_view_501_;
v_isShared_508_ = v_isSharedCheck_514_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_scopes_505_);
lean_inc(v_ctx_504_);
lean_inc(v_imported_503_);
lean_inc(v_name_502_);
lean_dec(v_view_501_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_514_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_509_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1(v_name_502_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_509_);
v___x_511_ = v___x_507_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_imported_503_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v_ctx_504_);
lean_ctor_set(v_reuseFailAlloc_513_, 3, v_scopes_505_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_MacroScopesView_review(v___x_511_);
v___y_413_ = v___x_498_;
v___y_414_ = v___y_489_;
v___y_415_ = v___y_490_;
v___y_416_ = v___y_491_;
v___y_417_ = v___y_492_;
v___y_418_ = v___y_493_;
v___y_419_ = v___y_494_;
v___y_420_ = v___x_497_;
v___y_421_ = v___x_512_;
goto v___jp_412_;
}
}
}
}
v___jp_519_:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = l_unsafeCast___redArg(v_bs_518_);
lean_dec(v_bs_518_);
v___x_523_ = l_Lake_expandBinders(v___x_522_, v_a_244_, v_a_245_);
lean_dec(v___x_522_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v_a_525_; size_t v_sz_526_; size_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v_fst_532_; lean_object* v_snd_533_; lean_object* v___x_534_; uint8_t v___x_535_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_a_524_);
v_a_525_ = lean_ctor_get(v___x_523_, 1);
lean_inc(v_a_525_);
lean_dec_ref_known(v___x_523_, 2);
v_sz_526_ = lean_array_size(v_a_524_);
v___x_527_ = ((size_t)0ULL);
v___x_528_ = l_unsafeCast___redArg(v_a_524_);
lean_dec(v_a_524_);
v___x_529_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0(v_sz_526_, v___x_527_, v___x_528_);
v___x_530_ = l_unsafeCast___redArg(v___x_529_);
lean_dec_ref(v___x_529_);
v___x_531_ = l_Array_unzip___redArg(v___x_530_);
lean_dec(v___x_530_);
v_fst_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_fst_532_);
v_snd_533_ = lean_ctor_get(v___x_531_, 1);
lean_inc(v_snd_533_);
lean_dec_ref(v___x_531_);
v___x_534_ = l_Lean_TSyntax_getId(v_id_255_);
v___x_535_ = l_Lean_Name_hasMacroScopes(v___x_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
lean_inc(v___x_534_);
v___x_536_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0(v___x_534_);
v___y_489_ = v_a_525_;
v___y_490_ = v_fst_532_;
v___y_491_ = v___y_520_;
v___y_492_ = v___y_521_;
v___y_493_ = v___x_527_;
v___y_494_ = v_snd_533_;
v___y_495_ = v___x_534_;
v___y_496_ = v___x_536_;
goto v___jp_488_;
}
else
{
lean_object* v_view_537_; lean_object* v_name_538_; lean_object* v_imported_539_; lean_object* v_ctx_540_; lean_object* v_scopes_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_550_; 
lean_inc(v___x_534_);
v_view_537_ = l_Lean_extractMacroScopes(v___x_534_);
v_name_538_ = lean_ctor_get(v_view_537_, 0);
v_imported_539_ = lean_ctor_get(v_view_537_, 1);
v_ctx_540_ = lean_ctor_get(v_view_537_, 2);
v_scopes_541_ = lean_ctor_get(v_view_537_, 3);
v_isSharedCheck_550_ = !lean_is_exclusive(v_view_537_);
if (v_isSharedCheck_550_ == 0)
{
v___x_543_ = v_view_537_;
v_isShared_544_ = v_isSharedCheck_550_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_scopes_541_);
lean_inc(v_ctx_540_);
lean_inc(v_imported_539_);
lean_inc(v_name_538_);
lean_dec(v_view_537_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_550_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_545_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0(v_name_538_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 0, v___x_545_);
v___x_547_ = v___x_543_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_imported_539_);
lean_ctor_set(v_reuseFailAlloc_549_, 2, v_ctx_540_);
lean_ctor_set(v_reuseFailAlloc_549_, 3, v_scopes_541_);
v___x_547_ = v_reuseFailAlloc_549_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lean_MacroScopesView_review(v___x_547_);
v___y_489_ = v_a_525_;
v___y_490_ = v_fst_532_;
v___y_491_ = v___y_520_;
v___y_492_ = v___y_521_;
v___y_493_ = v___x_527_;
v___y_494_ = v_snd_533_;
v___y_495_ = v___x_534_;
v___y_496_ = v___x_548_;
goto v___jp_488_;
}
}
}
}
else
{
lean_object* v_a_551_; lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
lean_dec(v___y_521_);
lean_dec(v___y_520_);
lean_dec(v_id_255_);
v_a_551_ = lean_ctor_get(v___x_523_, 0);
v_a_552_ = lean_ctor_get(v___x_523_, 1);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_523_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_inc(v_a_551_);
lean_dec(v___x_523_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_551_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
v___jp_560_:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_Syntax_getOptional_x3f(v___x_251_);
lean_dec(v___x_251_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; 
v___x_563_ = lean_box(0);
v___y_520_ = v___y_561_;
v___y_521_ = v___x_563_;
goto v___jp_519_;
}
else
{
lean_object* v_val_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
v_val_564_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_562_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_val_564_);
lean_dec(v___x_562_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_val_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
v___y_520_ = v___y_561_;
v___y_521_ = v___x_569_;
goto v___jp_519_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___boxed(lean_object* v_x_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1(v_x_582_, v_a_583_, v_a_584_);
lean_dec_ref(v_a_583_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0(size_t v_sz_617_, size_t v_i_618_, lean_object* v_bs_619_){
_start:
{
uint8_t v___x_620_; 
v___x_620_ = lean_usize_dec_lt(v_i_618_, v_sz_617_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; 
v___x_621_ = l_unsafeCast___redArg(v_bs_619_);
lean_dec_ref(v_bs_619_);
return v___x_621_;
}
else
{
lean_object* v_v_622_; lean_object* v___x_623_; lean_object* v_bs_x27_624_; lean_object* v___x_625_; size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v_v_622_ = lean_array_uget(v_bs_619_, v_i_618_);
v___x_623_ = lean_unsigned_to_nat(0u);
v_bs_x27_624_ = lean_array_uset(v_bs_619_, v_i_618_, v___x_623_);
v___x_625_ = l_unsafeCast___redArg(v_v_622_);
lean_dec(v_v_622_);
v___x_626_ = ((size_t)1ULL);
v___x_627_ = lean_usize_add(v_i_618_, v___x_626_);
v___x_628_ = l_unsafeCast___redArg(v___x_625_);
lean_dec(v___x_625_);
v___x_629_ = lean_array_uset(v_bs_x27_624_, v_i_618_, v___x_628_);
v_i_618_ = v___x_627_;
v_bs_619_ = v___x_629_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0___boxed(lean_object* v_sz_631_, lean_object* v_i_632_, lean_object* v_bs_633_){
_start:
{
size_t v_sz_boxed_634_; size_t v_i_boxed_635_; lean_object* v_res_636_; 
v_sz_boxed_634_ = lean_unbox_usize(v_sz_631_);
lean_dec(v_sz_631_);
v_i_boxed_635_ = lean_unbox_usize(v_i_632_);
lean_dec(v_i_632_);
v_res_636_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0(v_sz_boxed_634_, v_i_boxed_635_, v_bs_633_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1(size_t v_sz_637_, size_t v_i_638_, lean_object* v_bs_639_){
_start:
{
uint8_t v___x_640_; 
v___x_640_ = lean_usize_dec_lt(v_i_638_, v_sz_637_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; 
v___x_641_ = l_unsafeCast___redArg(v_bs_639_);
lean_dec_ref(v_bs_639_);
return v___x_641_;
}
else
{
lean_object* v_v_642_; lean_object* v___x_643_; lean_object* v_bs_x27_644_; lean_object* v___x_645_; size_t v___x_646_; size_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_v_642_ = lean_array_uget(v_bs_639_, v_i_638_);
v___x_643_ = lean_unsigned_to_nat(0u);
v_bs_x27_644_ = lean_array_uset(v_bs_639_, v_i_638_, v___x_643_);
v___x_645_ = l_unsafeCast___redArg(v_v_642_);
lean_dec(v_v_642_);
v___x_646_ = ((size_t)1ULL);
v___x_647_ = lean_usize_add(v_i_638_, v___x_646_);
v___x_648_ = l_unsafeCast___redArg(v___x_645_);
lean_dec(v___x_645_);
v___x_649_ = lean_array_uset(v_bs_x27_644_, v_i_638_, v___x_648_);
v_i_638_ = v___x_647_;
v_bs_639_ = v___x_649_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1___boxed(lean_object* v_sz_651_, lean_object* v_i_652_, lean_object* v_bs_653_){
_start:
{
size_t v_sz_boxed_654_; size_t v_i_boxed_655_; lean_object* v_res_656_; 
v_sz_boxed_654_ = lean_unbox_usize(v_sz_651_);
lean_dec(v_sz_651_);
v_i_boxed_655_ = lean_unbox_usize(v_i_652_);
lean_dec(v_i_652_);
v_res_656_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1(v_sz_boxed_654_, v_i_boxed_655_, v_bs_653_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2(lean_object* v___x_664_, lean_object* v___x_665_, size_t v_sz_666_, size_t v_i_667_, lean_object* v_bs_668_){
_start:
{
uint8_t v___x_669_; 
v___x_669_ = lean_usize_dec_lt(v_i_667_, v_sz_666_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec(v___x_665_);
lean_dec(v___x_664_);
v___x_670_ = l_unsafeCast___redArg(v_bs_668_);
lean_dec_ref(v_bs_668_);
return v___x_670_;
}
else
{
lean_object* v___x_671_; lean_object* v_v_672_; lean_object* v___x_673_; lean_object* v_bs_x27_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; size_t v___x_683_; size_t v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_671_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31));
v_v_672_ = lean_array_uget(v_bs_668_, v_i_667_);
v___x_673_ = lean_unsigned_to_nat(0u);
v_bs_x27_674_ = lean_array_uset(v_bs_668_, v_i_667_, v___x_673_);
v___x_675_ = l_unsafeCast___redArg(v_v_672_);
lean_dec(v_v_672_);
v___x_676_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1));
v___x_677_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__2));
lean_inc_n(v___x_664_, 4);
v___x_678_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_664_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = l_Lean_Syntax_node1(v___x_664_, v___x_671_, v___x_675_);
v___x_680_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67));
v___x_681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_664_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
lean_inc(v___x_665_);
v___x_682_ = l_Lean_Syntax_node4(v___x_664_, v___x_676_, v___x_678_, v___x_679_, v___x_665_, v___x_681_);
v___x_683_ = ((size_t)1ULL);
v___x_684_ = lean_usize_add(v_i_667_, v___x_683_);
v___x_685_ = l_unsafeCast___redArg(v___x_682_);
lean_dec(v___x_682_);
v___x_686_ = lean_array_uset(v_bs_x27_674_, v_i_667_, v___x_685_);
v_i_667_ = v___x_684_;
v_bs_668_ = v___x_686_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___boxed(lean_object* v___x_688_, lean_object* v___x_689_, lean_object* v_sz_690_, lean_object* v_i_691_, lean_object* v_bs_692_){
_start:
{
size_t v_sz_boxed_693_; size_t v_i_boxed_694_; lean_object* v_res_695_; 
v_sz_boxed_693_ = lean_unbox_usize(v_sz_690_);
lean_dec(v_sz_690_);
v_i_boxed_694_ = lean_unbox_usize(v_i_691_);
lean_dec(v_i_691_);
v_res_695_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2(v___x_688_, v___x_689_, v_sz_boxed_693_, v_i_boxed_694_, v_bs_692_);
return v_res_695_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0));
v___x_698_ = l_String_toRawSubstring_x27(v___x_697_);
return v___x_698_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__9));
v___x_711_ = l_String_toRawSubstring_x27(v___x_710_);
return v___x_711_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11(void){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_712_ = lean_box(0);
v___x_713_ = l_unsafeCast___redArg(v___x_712_);
return v___x_713_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21(void){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20));
v___x_726_ = l_String_toRawSubstring_x27(v___x_725_);
return v___x_726_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24));
v___x_733_ = l_String_toRawSubstring_x27(v___x_732_);
return v___x_733_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32(void){
_start:
{
lean_object* v___x_745_; lean_object* v_mk_746_; 
v___x_745_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__31));
v_mk_746_ = l_Lean_mkIdent(v___x_745_);
return v_mk_746_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35(void){
_start:
{
lean_object* v___x_750_; lean_object* v_unsafeMk_751_; 
v___x_750_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34));
v_unsafeMk_751_ = l_Lean_mkIdent(v___x_750_);
return v_unsafeMk_751_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38(void){
_start:
{
lean_object* v___x_755_; lean_object* v_instCoeMk_756_; 
v___x_755_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37));
v_instCoeMk_756_ = l_Lean_mkIdent(v___x_755_);
return v_instCoeMk_756_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41(void){
_start:
{
lean_object* v___x_760_; lean_object* v_get_761_; 
v___x_760_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40));
v_get_761_ = l_Lean_mkIdent(v___x_760_);
return v_get_761_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44(void){
_start:
{
lean_object* v___x_765_; lean_object* v_unsafeGet_766_; 
v___x_765_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__43));
v_unsafeGet_766_ = l_Lean_mkIdent(v___x_765_);
return v_unsafeGet_766_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47(void){
_start:
{
lean_object* v___x_770_; lean_object* v_instCoeGet_771_; 
v___x_770_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46));
v_instCoeGet_771_ = l_Lean_mkIdent(v___x_770_);
return v_instCoeGet_771_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60(void){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59));
v___x_805_ = l_String_toRawSubstring_x27(v___x_804_);
return v___x_805_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68(void){
_start:
{
lean_object* v___x_826_; lean_object* v_unsafeMk_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_826_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47));
v_unsafeMk_827_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35);
v___x_828_ = lean_unsigned_to_nat(2u);
v___x_829_ = lean_mk_empty_array_with_capacity(v___x_828_);
v___x_830_ = lean_array_push(v___x_829_, v_unsafeMk_827_);
v___x_831_ = lean_array_push(v___x_830_, v___x_826_);
return v___x_831_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_832_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68);
v___x_833_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45));
v___x_834_ = lean_box(2);
v___x_835_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v___x_833_);
lean_ctor_set(v___x_835_, 2, v___x_832_);
return v___x_835_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76));
v___x_860_ = l_String_toRawSubstring_x27(v___x_859_);
return v___x_860_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__83(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__82));
v___x_876_ = l_String_toRawSubstring_x27(v___x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1(lean_object* v_x_879_, lean_object* v_a_880_, lean_object* v_a_881_){
_start:
{
lean_object* v___x_882_; uint8_t v___x_883_; 
v___x_882_ = ((lean_object*)(l_Lake_hydrateOpaqueTypeCmd___closed__1));
lean_inc(v_x_879_);
v___x_883_ = l_Lean_Syntax_isOfKind(v_x_879_, v___x_882_);
if (v___x_883_ == 0)
{
lean_object* v___x_884_; lean_object* v___x_885_; 
lean_dec(v_x_879_);
v___x_884_ = lean_box(1);
v___x_885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
lean_ctor_set(v___x_885_, 1, v_a_881_);
return v___x_885_;
}
else
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; size_t v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v___y_925_; lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; size_t v___y_938_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___y_941_; lean_object* v___y_942_; lean_object* v___y_943_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v_args_1109_; lean_object* v___y_1111_; lean_object* v___x_1223_; 
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = l_Lean_Syntax_getArg(v_x_879_, v___x_886_);
v___x_888_ = lean_unsigned_to_nat(2u);
v___x_889_ = l_Lean_Syntax_getArg(v_x_879_, v___x_888_);
v___x_1104_ = lean_unsigned_to_nat(3u);
v___x_1105_ = l_Lean_Syntax_getArg(v_x_879_, v___x_1104_);
v___x_1106_ = lean_unsigned_to_nat(4u);
v___x_1107_ = l_Lean_Syntax_getArg(v_x_879_, v___x_1106_);
lean_dec(v_x_879_);
v___x_1108_ = l_Lean_Syntax_getArgs(v___x_1107_);
lean_dec(v___x_1107_);
v_args_1109_ = l_unsafeCast___redArg(v___x_1108_);
lean_dec_ref(v___x_1108_);
v___x_1223_ = l_Lean_Syntax_getOptional_x3f(v___x_887_);
lean_dec(v___x_887_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_box(0);
v___y_1111_ = v___x_1224_;
goto v___jp_1110_;
}
else
{
lean_object* v_val_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
v_val_1225_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1223_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_val_1225_);
lean_dec(v___x_1223_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_val_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
v___y_1111_ = v___x_1230_;
goto v___jp_1110_;
}
}
}
v___jp_890_:
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; size_t v_sz_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
lean_inc_ref(v___y_922_);
v___x_944_ = l_Array_append___redArg(v___y_922_, v___y_943_);
lean_dec_ref(v___y_943_);
lean_inc_n(v___y_924_, 18);
lean_inc_n(v___y_899_, 79);
v___x_945_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_945_, 0, v___y_899_);
lean_ctor_set(v___x_945_, 1, v___y_924_);
lean_ctor_set(v___x_945_, 2, v___x_944_);
lean_inc_ref_n(v___x_945_, 2);
lean_inc_n(v___y_920_, 34);
lean_inc_n(v___y_906_, 2);
v___x_946_ = l_Lean_Syntax_node7(v___y_899_, v___y_906_, v___y_920_, v___y_926_, v___x_945_, v___y_920_, v___y_920_, v___y_920_, v___y_920_);
v___x_947_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42));
lean_inc_ref_n(v___y_916_, 4);
lean_inc_ref_n(v___y_931_, 8);
lean_inc_ref_n(v___y_918_, 9);
v___x_948_ = l_Lean_Name_mkStr4(v___y_918_, v___y_931_, v___y_916_, v___x_947_);
v___x_949_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_949_, 0, v___y_899_);
lean_ctor_set(v___x_949_, 1, v___x_947_);
lean_inc_n(v___y_894_, 3);
lean_inc_ref_n(v___y_908_, 2);
v___x_950_ = lean_array_push(v___y_908_, v___y_894_);
lean_inc_n(v___y_915_, 3);
v___x_951_ = lean_array_push(v___x_950_, v___y_915_);
lean_inc_n(v___y_935_, 5);
lean_inc_n(v___y_897_, 3);
v___x_952_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_952_, 0, v___y_897_);
lean_ctor_set(v___x_952_, 1, v___y_935_);
lean_ctor_set(v___x_952_, 2, v___x_951_);
v___x_953_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48));
v___x_954_ = l_Lean_Name_mkStr4(v___y_918_, v___y_931_, v___y_916_, v___x_953_);
lean_inc_n(v___x_954_, 4);
v___x_955_ = l_Lean_Syntax_node2(v___y_899_, v___x_954_, v___y_920_, v___y_902_);
lean_inc_ref(v___x_949_);
lean_inc(v___x_948_);
v___x_956_ = l_Lean_Syntax_node4(v___y_899_, v___x_948_, v___x_949_, v___x_952_, v___x_955_, v___y_920_);
lean_inc_n(v___y_913_, 5);
v___x_957_ = l_Lean_Syntax_node2(v___y_899_, v___y_913_, v___x_946_, v___x_956_);
v___x_958_ = l_Lean_Syntax_node7(v___y_899_, v___y_906_, v___y_920_, v___y_920_, v___x_945_, v___y_920_, v___y_920_, v___y_920_, v___y_920_);
v___x_959_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13));
v___x_960_ = l_Lean_Name_mkStr4(v___y_918_, v___y_931_, v___y_916_, v___x_959_);
v___x_961_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_961_, 0, v___y_899_);
lean_ctor_set(v___x_961_, 1, v___x_959_);
lean_inc(v___y_912_);
v___x_962_ = l_Lean_Syntax_node2(v___y_899_, v___y_935_, v___y_912_, v___y_920_);
v___x_963_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_962_);
v___x_964_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1);
v___x_965_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2));
lean_inc_n(v___y_928_, 3);
lean_inc_n(v___y_903_, 3);
v___x_966_ = l_Lean_addMacroScope(v___y_903_, v___x_965_, v___y_928_);
lean_inc_n(v___y_891_, 3);
v___x_967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_965_);
lean_ctor_set(v___x_967_, 1, v___y_891_);
v___x_968_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__3));
lean_inc_n(v___y_898_, 4);
v___x_969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
lean_ctor_set(v___x_969_, 1, v___y_898_);
v___x_970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_967_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_971_, 0, v___y_899_);
lean_ctor_set(v___x_971_, 1, v___x_964_);
lean_ctor_set(v___x_971_, 2, v___x_966_);
lean_ctor_set(v___x_971_, 3, v___x_970_);
v___x_972_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__4));
lean_inc_ref_n(v___y_936_, 4);
v___x_973_ = l_Lean_Name_mkStr4(v___y_918_, v___y_931_, v___y_936_, v___x_972_);
v___x_974_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__5));
v___x_975_ = l_Lean_Name_mkStr4(v___y_918_, v___y_931_, v___y_936_, v___x_974_);
v___x_976_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6));
v___x_977_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_977_, 0, v___y_899_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8));
v___x_979_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10);
v___x_980_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11);
v___x_981_ = l_Lean_addMacroScope(v___y_903_, v___x_980_, v___y_928_);
v___x_982_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13));
v___x_983_ = l_Lean_Name_mkStr1(v___y_918_);
v___x_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
v___x_985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
lean_ctor_set(v___x_985_, 1, v___y_898_);
v___x_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_982_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_987_, 0, v___y_899_);
lean_ctor_set(v___x_987_, 1, v___x_979_);
lean_ctor_set(v___x_987_, 2, v___x_981_);
lean_ctor_set(v___x_987_, 3, v___x_986_);
v___x_988_ = l_Lean_Syntax_node1(v___y_899_, v___x_978_, v___x_987_);
v___x_989_ = l_Lean_Syntax_node2(v___y_899_, v___x_975_, v___x_977_, v___x_988_);
v___x_990_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__14));
v___x_991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_991_, 0, v___y_899_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
lean_inc_ref(v___x_991_);
lean_inc(v___y_930_);
lean_inc(v___x_989_);
lean_inc(v___x_973_);
v___x_992_ = l_Lean_Syntax_node3(v___y_899_, v___x_973_, v___x_989_, v___y_930_, v___x_991_);
lean_inc(v___y_893_);
v___x_993_ = l_Lean_Syntax_node3(v___y_899_, v___x_973_, v___x_989_, v___y_893_, v___x_991_);
lean_inc_n(v___x_993_, 2);
lean_inc_n(v___x_992_, 2);
v___x_994_ = l_Lean_Syntax_node2(v___y_899_, v___y_924_, v___x_992_, v___x_993_);
lean_inc_ref(v___x_971_);
lean_inc_n(v___y_932_, 4);
v___x_995_ = l_Lean_Syntax_node2(v___y_899_, v___y_932_, v___x_971_, v___x_994_);
lean_inc_n(v___y_900_, 3);
lean_inc_n(v___y_919_, 3);
v___x_996_ = l_Lean_Syntax_node2(v___y_899_, v___y_919_, v___y_900_, v___x_995_);
v___x_997_ = l_Lean_Syntax_node2(v___y_899_, v___x_954_, v___y_920_, v___x_996_);
v___x_998_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__15));
v___x_999_ = l_Lean_Name_mkStr4(v___y_918_, v___y_931_, v___y_936_, v___x_998_);
v___x_1000_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__16));
v___x_1001_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___y_899_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
v___x_1002_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___y_894_);
v___x_1003_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__17));
v___x_1004_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___y_899_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
lean_inc_ref_n(v___x_1004_, 2);
lean_inc_ref_n(v___x_1001_, 2);
lean_inc_n(v___x_999_, 2);
v___x_1005_ = l_Lean_Syntax_node3(v___y_899_, v___x_999_, v___x_1001_, v___x_1002_, v___x_1004_);
lean_inc_n(v___y_896_, 2);
lean_inc_n(v___y_929_, 2);
lean_inc_n(v___y_942_, 2);
v___x_1006_ = l_Lean_Syntax_node4(v___y_899_, v___y_942_, v___y_929_, v___x_1005_, v___y_896_, v___y_920_);
lean_inc_ref_n(v___x_961_, 2);
lean_inc_n(v___y_927_, 3);
lean_inc_n(v___x_960_, 2);
v___x_1007_ = l_Lean_Syntax_node6(v___y_899_, v___x_960_, v___y_927_, v___x_961_, v___y_920_, v___x_963_, v___x_997_, v___x_1006_);
lean_inc_n(v___x_958_, 2);
v___x_1008_ = l_Lean_Syntax_node2(v___y_899_, v___y_913_, v___x_958_, v___x_1007_);
lean_inc_n(v___y_907_, 2);
v___x_1009_ = lean_array_push(v___y_908_, v___y_907_);
v___x_1010_ = lean_array_push(v___x_1009_, v___y_915_);
v___x_1011_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1011_, 0, v___y_897_);
lean_ctor_set(v___x_1011_, 1, v___y_935_);
lean_ctor_set(v___x_1011_, 2, v___x_1010_);
v___x_1012_ = l_Lean_Syntax_node3(v___y_899_, v___y_914_, v___y_893_, v___y_933_, v___y_930_);
v___x_1013_ = l_Lean_Syntax_node2(v___y_899_, v___y_919_, v___y_900_, v___x_1012_);
lean_inc(v___x_1013_);
v___x_1014_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_1013_);
v___x_1015_ = l_Lean_Syntax_node2(v___y_899_, v___y_905_, v___y_920_, v___x_1014_);
v___x_1016_ = l_Lean_Syntax_node5(v___y_899_, v___y_937_, v___y_934_, v___x_1011_, v___x_1015_, v___y_941_, v___y_920_);
v___x_1017_ = l_Lean_Syntax_node2(v___y_899_, v___y_913_, v___y_923_, v___x_1016_);
v___x_1018_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___y_907_);
v___x_1019_ = l_Lean_Syntax_node2(v___y_899_, v___y_911_, v___y_939_, v___x_1018_);
v___x_1020_ = l_Lean_Syntax_node2(v___y_899_, v___y_901_, v___y_927_, v___x_1019_);
v___x_1021_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_1020_);
lean_inc(v___y_917_);
v___x_1022_ = l_Lean_Syntax_node3(v___y_899_, v___y_921_, v___y_925_, v___x_1021_, v___y_917_);
v___x_1023_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_1022_);
v___x_1024_ = l_Lean_Syntax_node7(v___y_899_, v___y_906_, v___y_920_, v___x_1023_, v___x_945_, v___y_920_, v___y_920_, v___y_920_, v___y_920_);
lean_inc_n(v___y_904_, 2);
v___x_1025_ = lean_array_push(v___y_908_, v___y_904_);
v___x_1026_ = lean_array_push(v___x_1025_, v___y_915_);
v___x_1027_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1027_, 0, v___y_897_);
lean_ctor_set(v___x_1027_, 1, v___y_935_);
lean_ctor_set(v___x_1027_, 2, v___x_1026_);
v___x_1028_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1(v___y_938_, v___y_909_, v___y_910_);
v___x_1029_ = l_unsafeCast___redArg(v___x_1028_);
lean_dec_ref(v___x_1028_);
v_sz_1030_ = lean_array_size(v___x_1029_);
v___x_1031_ = l_unsafeCast___redArg(v___x_1029_);
lean_dec(v___x_1029_);
v___x_1032_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2(v___y_899_, v___y_920_, v_sz_1030_, v___y_909_, v___x_1031_);
v___x_1033_ = l_unsafeCast___redArg(v___x_1032_);
lean_dec_ref(v___x_1032_);
v___x_1034_ = l_Array_append___redArg(v___y_922_, v___x_1033_);
lean_dec(v___x_1033_);
v___x_1035_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1035_, 0, v___y_899_);
lean_ctor_set(v___x_1035_, 1, v___y_924_);
lean_ctor_set(v___x_1035_, 2, v___x_1034_);
v___x_1036_ = l_Lean_Syntax_node2(v___y_899_, v___x_954_, v___x_1035_, v___x_1013_);
v___x_1037_ = l_Lean_Syntax_node4(v___y_899_, v___x_948_, v___x_949_, v___x_1027_, v___x_1036_, v___y_920_);
v___x_1038_ = l_Lean_Syntax_node2(v___y_899_, v___y_913_, v___x_1024_, v___x_1037_);
lean_inc(v___y_940_);
v___x_1039_ = l_Lean_Syntax_node2(v___y_899_, v___y_935_, v___y_940_, v___y_920_);
v___x_1040_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_1039_);
v___x_1041_ = l_Lean_Syntax_node2(v___y_899_, v___y_924_, v___x_993_, v___x_992_);
v___x_1042_ = l_Lean_Syntax_node2(v___y_899_, v___y_932_, v___x_971_, v___x_1041_);
v___x_1043_ = l_Lean_Syntax_node2(v___y_899_, v___y_919_, v___y_900_, v___x_1042_);
v___x_1044_ = l_Lean_Syntax_node2(v___y_899_, v___x_954_, v___y_920_, v___x_1043_);
v___x_1045_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___y_904_);
v___x_1046_ = l_Lean_Syntax_node3(v___y_899_, v___x_999_, v___x_1001_, v___x_1045_, v___x_1004_);
v___x_1047_ = l_Lean_Syntax_node4(v___y_899_, v___y_942_, v___y_929_, v___x_1046_, v___y_896_, v___y_920_);
v___x_1048_ = l_Lean_Syntax_node6(v___y_899_, v___x_960_, v___y_927_, v___x_961_, v___y_920_, v___x_1040_, v___x_1044_, v___x_1047_);
v___x_1049_ = l_Lean_Syntax_node2(v___y_899_, v___y_913_, v___x_958_, v___x_1048_);
v___x_1050_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18));
v___x_1051_ = l_Lean_Name_mkStr4(v___y_918_, v___y_931_, v___y_936_, v___x_1050_);
v___x_1052_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__19));
v___x_1053_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___y_899_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21);
v___x_1055_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22));
v___x_1056_ = l_Lean_addMacroScope(v___y_903_, v___x_1055_, v___y_928_);
v___x_1057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___y_891_);
v___x_1058_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__23));
v___x_1059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set(v___x_1059_, 1, v___y_898_);
v___x_1060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1057_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1061_, 0, v___y_899_);
lean_ctor_set(v___x_1061_, 1, v___x_1054_);
lean_ctor_set(v___x_1061_, 2, v___x_1056_);
lean_ctor_set(v___x_1061_, 3, v___x_1060_);
v___x_1062_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_992_);
lean_inc_ref(v___x_1061_);
v___x_1063_ = l_Lean_Syntax_node2(v___y_899_, v___y_932_, v___x_1061_, v___x_1062_);
v___x_1064_ = l_Lean_Syntax_node4(v___y_899_, v___x_1051_, v___x_1053_, v___y_920_, v___x_1063_, v___y_917_);
v___x_1065_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_1064_);
v___x_1066_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_993_);
v___x_1067_ = l_Lean_Syntax_node2(v___y_899_, v___y_932_, v___x_1061_, v___x_1066_);
v___x_1068_ = l_Lean_Syntax_node2(v___y_899_, v___y_919_, v___y_900_, v___x_1067_);
v___x_1069_ = l_Lean_Syntax_node2(v___y_899_, v___x_954_, v___x_1065_, v___x_1068_);
v___x_1070_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25);
v___x_1071_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26));
v___x_1072_ = l_Lean_addMacroScope(v___y_903_, v___x_1071_, v___y_928_);
v___x_1073_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27));
v___x_1074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v___y_891_);
v___x_1075_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__28));
v___x_1076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
lean_ctor_set(v___x_1076_, 1, v___y_898_);
v___x_1077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1074_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1078_, 0, v___y_899_);
lean_ctor_set(v___x_1078_, 1, v___x_1070_);
lean_ctor_set(v___x_1078_, 2, v___x_1072_);
lean_ctor_set(v___x_1078_, 3, v___x_1077_);
v___x_1079_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_1078_);
v___x_1080_ = l_Lean_Syntax_node2(v___y_899_, v___y_932_, v___y_894_, v___x_1079_);
v___x_1081_ = l_Lean_Syntax_node1(v___y_899_, v___y_924_, v___x_1080_);
v___x_1082_ = l_Lean_Syntax_node3(v___y_899_, v___x_999_, v___x_1001_, v___x_1081_, v___x_1004_);
v___x_1083_ = l_Lean_Syntax_node4(v___y_899_, v___y_942_, v___y_929_, v___x_1082_, v___y_896_, v___y_920_);
v___x_1084_ = l_Lean_Syntax_node6(v___y_899_, v___x_960_, v___y_927_, v___x_961_, v___y_920_, v___y_920_, v___x_1069_, v___x_1083_);
v___x_1085_ = l_Lean_Syntax_node2(v___y_899_, v___y_913_, v___x_958_, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__29));
v___x_1087_ = l_Lean_Name_mkStr4(v___y_918_, v___y_931_, v___y_916_, v___x_1086_);
v___x_1088_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___y_899_);
lean_ctor_set(v___x_1088_, 1, v___x_1086_);
v___x_1089_ = l_Lean_Syntax_node2(v___y_899_, v___y_924_, v___x_889_, v___y_920_);
v___x_1090_ = l_Lean_Syntax_node2(v___y_899_, v___x_1087_, v___x_1088_, v___x_1089_);
v___x_1091_ = lean_unsigned_to_nat(9u);
v___x_1092_ = lean_mk_empty_array_with_capacity(v___x_1091_);
v___x_1093_ = lean_array_push(v___x_1092_, v___y_892_);
v___x_1094_ = lean_array_push(v___x_1093_, v___y_895_);
v___x_1095_ = lean_array_push(v___x_1094_, v___x_957_);
v___x_1096_ = lean_array_push(v___x_1095_, v___x_1008_);
v___x_1097_ = lean_array_push(v___x_1096_, v___x_1017_);
v___x_1098_ = lean_array_push(v___x_1097_, v___x_1038_);
v___x_1099_ = lean_array_push(v___x_1098_, v___x_1049_);
v___x_1100_ = lean_array_push(v___x_1099_, v___x_1085_);
v___x_1101_ = lean_array_push(v___x_1100_, v___x_1090_);
v___x_1102_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1102_, 0, v___y_899_);
lean_ctor_set(v___x_1102_, 1, v___y_924_);
lean_ctor_set(v___x_1102_, 2, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
lean_ctor_set(v___x_1103_, 1, v_a_881_);
return v___x_1103_;
}
v___jp_1110_:
{
lean_object* v_quotContext_1112_; lean_object* v_currMacroScope_1113_; lean_object* v_ref_1114_; lean_object* v_mk_1115_; lean_object* v_unsafeMk_1116_; lean_object* v_instCoeMk_1117_; lean_object* v_get_1118_; lean_object* v_unsafeGet_1119_; lean_object* v_instCoeGet_1120_; uint8_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; size_t v_sz_1181_; size_t v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v_quotContext_1112_ = lean_ctor_get(v_a_880_, 1);
v_currMacroScope_1113_ = lean_ctor_get(v_a_880_, 2);
v_ref_1114_ = lean_ctor_get(v_a_880_, 5);
v_mk_1115_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32);
v_unsafeMk_1116_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35);
v_instCoeMk_1117_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38);
v_get_1118_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41);
v_unsafeGet_1119_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44);
v_instCoeGet_1120_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47);
v___x_1121_ = 0;
v___x_1122_ = l_Lean_SourceInfo_fromRef(v_ref_1114_, v___x_1121_);
v___x_1123_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31));
v___x_1124_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32));
v___x_1125_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33));
v___x_1126_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34));
v___x_1127_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48));
v___x_1128_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49));
lean_inc_n(v___x_1122_, 42);
v___x_1129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1122_);
lean_ctor_set(v___x_1129_, 1, v___x_1127_);
lean_inc_n(v___x_889_, 2);
v___x_1130_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1128_, v___x_1129_, v___x_889_);
v___x_1131_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36));
v___x_1132_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38));
v___x_1133_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39);
v___x_1134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1122_);
lean_ctor_set(v___x_1134_, 1, v___x_1123_);
lean_ctor_set(v___x_1134_, 2, v___x_1133_);
v___x_1135_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50));
v___x_1136_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51));
v___x_1137_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52));
v___x_1138_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1122_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54));
v___x_1140_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55));
lean_inc_ref_n(v___x_1134_, 11);
v___x_1141_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1140_, v___x_1134_);
v___x_1142_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58));
v___x_1143_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60);
v___x_1144_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61));
lean_inc_n(v_currMacroScope_1113_, 3);
lean_inc_n(v_quotContext_1112_, 3);
v___x_1145_ = l_Lean_addMacroScope(v_quotContext_1112_, v___x_1144_, v_currMacroScope_1113_);
v___x_1146_ = lean_box(0);
v___x_1147_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63));
v___x_1148_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1122_);
lean_ctor_set(v___x_1148_, 1, v___x_1143_);
lean_ctor_set(v___x_1148_, 2, v___x_1145_);
lean_ctor_set(v___x_1148_, 3, v___x_1147_);
v___x_1149_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1142_, v___x_1148_, v___x_1134_);
lean_inc_n(v___x_1141_, 2);
v___x_1150_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1139_, v___x_1141_, v___x_1149_);
v___x_1151_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1123_, v___x_1150_);
v___x_1152_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__64));
v___x_1153_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1122_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
lean_inc_ref_n(v___x_1153_, 2);
lean_inc_ref_n(v___x_1138_, 2);
v___x_1154_ = l_Lean_Syntax_node3(v___x_1122_, v___x_1136_, v___x_1138_, v___x_1151_, v___x_1153_);
v___x_1155_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1123_, v___x_1154_);
v___x_1156_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40));
v___x_1157_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41));
v___x_1158_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1122_);
lean_ctor_set(v___x_1158_, 1, v___x_1156_);
v___x_1159_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1157_, v___x_1158_);
v___x_1160_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1123_, v___x_1159_);
v___x_1161_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65));
v___x_1162_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66));
v___x_1163_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1122_);
lean_ctor_set(v___x_1163_, 1, v___x_1161_);
v___x_1164_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1162_, v___x_1163_);
v___x_1165_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1123_, v___x_1164_);
v___x_1166_ = l_Lean_Syntax_node7(v___x_1122_, v___x_1132_, v___x_1134_, v___x_1155_, v___x_1160_, v___x_1134_, v___x_1134_, v___x_1165_, v___x_1134_);
v___x_1167_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67));
v___x_1168_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1));
v___x_1169_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1122_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
v___x_1170_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45));
v___x_1171_ = lean_box(2);
v___x_1172_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47));
v___x_1173_ = lean_mk_empty_array_with_capacity(v___x_888_);
v___x_1174_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69);
v___x_1175_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70));
v___x_1176_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52));
v___x_1177_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53));
v___x_1178_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1122_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72));
v___x_1180_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73));
v_sz_1181_ = lean_array_size(v_args_1109_);
v___x_1182_ = ((size_t)0ULL);
v___x_1183_ = l_unsafeCast___redArg(v_args_1109_);
lean_dec(v_args_1109_);
lean_inc(v___x_1183_);
v___x_1184_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0(v_sz_1181_, v___x_1182_, v___x_1183_);
v___x_1185_ = l_unsafeCast___redArg(v___x_1184_);
lean_dec_ref(v___x_1184_);
v___x_1186_ = l_unsafeCast___redArg(v___x_1185_);
lean_dec(v___x_1185_);
v___x_1187_ = l_Array_append___redArg(v___x_1133_, v___x_1186_);
lean_dec(v___x_1186_);
v___x_1188_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1122_);
lean_ctor_set(v___x_1188_, 1, v___x_1123_);
lean_ctor_set(v___x_1188_, 2, v___x_1187_);
lean_inc_ref(v___x_1188_);
v___x_1189_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1180_, v___x_1105_, v___x_1188_);
v___x_1190_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74));
v___x_1191_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1122_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1180_, v___x_889_, v___x_1188_);
lean_inc(v___x_1192_);
lean_inc_ref(v___x_1191_);
lean_inc(v___x_1189_);
v___x_1193_ = l_Lean_Syntax_node3(v___x_1122_, v___x_1179_, v___x_1189_, v___x_1191_, v___x_1192_);
lean_inc_ref(v___x_1178_);
v___x_1194_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1176_, v___x_1178_, v___x_1193_);
lean_inc(v___x_1194_);
v___x_1195_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1123_, v___x_1194_);
v___x_1196_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1175_, v___x_1134_, v___x_1195_);
v___x_1197_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75));
v___x_1198_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6));
v___x_1199_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1122_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77);
v___x_1201_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__78));
v___x_1202_ = l_Lean_addMacroScope(v_quotContext_1112_, v___x_1201_, v_currMacroScope_1113_);
v___x_1203_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__80));
v___x_1204_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1122_);
lean_ctor_set(v___x_1204_, 1, v___x_1200_);
lean_ctor_set(v___x_1204_, 2, v___x_1202_);
lean_ctor_set(v___x_1204_, 3, v___x_1203_);
v___x_1205_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__81));
v___x_1206_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1205_, v___x_1134_, v___x_1134_);
lean_inc(v___x_1206_);
lean_inc_ref(v___x_1199_);
v___x_1207_ = l_Lean_Syntax_node4(v___x_1122_, v___x_1197_, v___x_1199_, v___x_1204_, v___x_1206_, v___x_1134_);
lean_inc(v___x_1207_);
lean_inc_ref(v___x_1169_);
v___x_1208_ = l_Lean_Syntax_node5(v___x_1122_, v___x_1167_, v___x_1169_, v___x_1174_, v___x_1196_, v___x_1207_, v___x_1134_);
lean_inc(v___x_1166_);
v___x_1209_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1131_, v___x_1166_, v___x_1208_);
v___x_1210_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__83, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__83_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__83);
v___x_1211_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__84));
v___x_1212_ = l_Lean_addMacroScope(v_quotContext_1112_, v___x_1211_, v_currMacroScope_1113_);
v___x_1213_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1122_);
lean_ctor_set(v___x_1213_, 1, v___x_1210_);
lean_ctor_set(v___x_1213_, 2, v___x_1212_);
lean_ctor_set(v___x_1213_, 3, v___x_1146_);
v___x_1214_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1123_, v_unsafeMk_1116_);
lean_inc_ref(v___x_1213_);
v___x_1215_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1142_, v___x_1213_, v___x_1214_);
v___x_1216_ = l_Lean_Syntax_node2(v___x_1122_, v___x_1139_, v___x_1141_, v___x_1215_);
v___x_1217_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1123_, v___x_1216_);
v___x_1218_ = l_Lean_Syntax_node3(v___x_1122_, v___x_1136_, v___x_1138_, v___x_1217_, v___x_1153_);
v___x_1219_ = l_Lean_Syntax_node1(v___x_1122_, v___x_1123_, v___x_1218_);
if (lean_obj_tag(v___y_1111_) == 1)
{
lean_object* v_val_1220_; lean_object* v___x_1221_; 
v_val_1220_ = lean_ctor_get(v___y_1111_, 0);
lean_inc(v_val_1220_);
lean_dec_ref_known(v___y_1111_, 1);
v___x_1221_ = l_Array_mkArray1___redArg(v_val_1220_);
lean_inc(v_currMacroScope_1113_);
lean_inc(v_quotContext_1112_);
v___y_891_ = v___x_1146_;
v___y_892_ = v___x_1130_;
v___y_893_ = v___x_1192_;
v___y_894_ = v_mk_1115_;
v___y_895_ = v___x_1209_;
v___y_896_ = v___x_1206_;
v___y_897_ = v___x_1171_;
v___y_898_ = v___x_1146_;
v___y_899_ = v___x_1122_;
v___y_900_ = v___x_1178_;
v___y_901_ = v___x_1139_;
v___y_902_ = v___x_1194_;
v___y_903_ = v_quotContext_1112_;
v___y_904_ = v_get_1118_;
v___y_905_ = v___x_1175_;
v___y_906_ = v___x_1132_;
v___y_907_ = v_unsafeGet_1119_;
v___y_908_ = v___x_1173_;
v___y_909_ = v___x_1182_;
v___y_910_ = v___x_1183_;
v___y_911_ = v___x_1142_;
v___y_912_ = v_instCoeMk_1117_;
v___y_913_ = v___x_1131_;
v___y_914_ = v___x_1179_;
v___y_915_ = v___x_1172_;
v___y_916_ = v___x_1126_;
v___y_917_ = v___x_1153_;
v___y_918_ = v___x_1124_;
v___y_919_ = v___x_1176_;
v___y_920_ = v___x_1134_;
v___y_921_ = v___x_1136_;
v___y_922_ = v___x_1133_;
v___y_923_ = v___x_1166_;
v___y_924_ = v___x_1123_;
v___y_925_ = v___x_1138_;
v___y_926_ = v___x_1219_;
v___y_927_ = v___x_1141_;
v___y_928_ = v_currMacroScope_1113_;
v___y_929_ = v___x_1199_;
v___y_930_ = v___x_1189_;
v___y_931_ = v___x_1125_;
v___y_932_ = v___x_1180_;
v___y_933_ = v___x_1191_;
v___y_934_ = v___x_1169_;
v___y_935_ = v___x_1170_;
v___y_936_ = v___x_1135_;
v___y_937_ = v___x_1167_;
v___y_938_ = v_sz_1181_;
v___y_939_ = v___x_1213_;
v___y_940_ = v_instCoeGet_1120_;
v___y_941_ = v___x_1207_;
v___y_942_ = v___x_1197_;
v___y_943_ = v___x_1221_;
goto v___jp_890_;
}
else
{
lean_object* v___x_1222_; 
lean_dec(v___y_1111_);
v___x_1222_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29));
lean_inc(v_currMacroScope_1113_);
lean_inc(v_quotContext_1112_);
v___y_891_ = v___x_1146_;
v___y_892_ = v___x_1130_;
v___y_893_ = v___x_1192_;
v___y_894_ = v_mk_1115_;
v___y_895_ = v___x_1209_;
v___y_896_ = v___x_1206_;
v___y_897_ = v___x_1171_;
v___y_898_ = v___x_1146_;
v___y_899_ = v___x_1122_;
v___y_900_ = v___x_1178_;
v___y_901_ = v___x_1139_;
v___y_902_ = v___x_1194_;
v___y_903_ = v_quotContext_1112_;
v___y_904_ = v_get_1118_;
v___y_905_ = v___x_1175_;
v___y_906_ = v___x_1132_;
v___y_907_ = v_unsafeGet_1119_;
v___y_908_ = v___x_1173_;
v___y_909_ = v___x_1182_;
v___y_910_ = v___x_1183_;
v___y_911_ = v___x_1142_;
v___y_912_ = v_instCoeMk_1117_;
v___y_913_ = v___x_1131_;
v___y_914_ = v___x_1179_;
v___y_915_ = v___x_1172_;
v___y_916_ = v___x_1126_;
v___y_917_ = v___x_1153_;
v___y_918_ = v___x_1124_;
v___y_919_ = v___x_1176_;
v___y_920_ = v___x_1134_;
v___y_921_ = v___x_1136_;
v___y_922_ = v___x_1133_;
v___y_923_ = v___x_1166_;
v___y_924_ = v___x_1123_;
v___y_925_ = v___x_1138_;
v___y_926_ = v___x_1219_;
v___y_927_ = v___x_1141_;
v___y_928_ = v_currMacroScope_1113_;
v___y_929_ = v___x_1199_;
v___y_930_ = v___x_1189_;
v___y_931_ = v___x_1125_;
v___y_932_ = v___x_1180_;
v___y_933_ = v___x_1191_;
v___y_934_ = v___x_1169_;
v___y_935_ = v___x_1170_;
v___y_936_ = v___x_1135_;
v___y_937_ = v___x_1167_;
v___y_938_ = v_sz_1181_;
v___y_939_ = v___x_1213_;
v___y_940_ = v_instCoeGet_1120_;
v___y_941_ = v___x_1207_;
v___y_942_ = v___x_1197_;
v___y_943_ = v___x_1222_;
goto v___jp_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___boxed(lean_object* v_x_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1(v_x_1233_, v_a_1234_, v_a_1235_);
lean_dec_ref(v_a_1234_);
return v_res_1236_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_OpaqueType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Util_Binder(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_OpaqueType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Binder(uint8_t builtin);
lean_object* initialize_Init_Prelude(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_OpaqueType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_OpaqueType(builtin);
}
#ifdef __cplusplus
}
#endif

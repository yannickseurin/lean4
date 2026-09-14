// Lean compiler output
// Module: Lake.Build.Data
// Imports: public import Lake.Build.Key public import Lake.Util.Family public import Lake.Config.Dynlib public import Lake.Config.Kinds public meta import Lake.Config.Kinds public meta import Lake.Util.Name import all Lake.Config.Kinds import Lake.Util.Name
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lake_Name_quoteFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Macro_resolveNamespace(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lake_Config_Kinds_0__Lake_facetKindForNamespace(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
extern lean_object* l_Lake_Module_keyword;
extern lean_object* l_Lake_Package_keyword;
static lean_once_cell_t l_Lake_OptDataKind_anonymous___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OptDataKind_anonymous___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_OptDataKind_anonymous___redArg();
LEAN_EXPORT lean_object* l_Lake_OptDataKind_anonymous___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lake_OptDataKind_anonymous___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OptDataKind_anonymous___closed__0;
LEAN_EXPORT lean_object* l_Lake_OptDataKind_anonymous(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instInhabited(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OptDataKind_isAnonymous___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_isAnonymous___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OptDataKind_isAnonymous(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_isAnonymous___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_OptDataKind_instCoeOutName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_OptDataKind_instCoeOutName___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_OptDataKind_instCoeOutName___redArg___closed__0 = (const lean_object*)&l_Lake_OptDataKind_instCoeOutName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___redArg();
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lake_OptDataKind_instToString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_OptDataKind_instToString___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_OptDataKind_instToString___redArg___closed__0 = (const lean_object*)&l_Lake_OptDataKind_instToString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString___redArg();
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString(lean_object*);
static const lean_string_object l_Lake_dataTypeDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_dataTypeDecl___closed__0 = (const lean_object*)&l_Lake_dataTypeDecl___closed__0_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dataTypeDecl"};
static const lean_object* l_Lake_dataTypeDecl___closed__1 = (const lean_object*)&l_Lake_dataTypeDecl___closed__1_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_dataTypeDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__2_value_aux_0),((lean_object*)&l_Lake_dataTypeDecl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 208, 230, 96, 184, 13, 30, 26)}};
static const lean_object* l_Lake_dataTypeDecl___closed__2 = (const lean_object*)&l_Lake_dataTypeDecl___closed__2_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lake_dataTypeDecl___closed__3 = (const lean_object*)&l_Lake_dataTypeDecl___closed__3_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lake_dataTypeDecl___closed__4 = (const lean_object*)&l_Lake_dataTypeDecl___closed__4_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lake_dataTypeDecl___closed__5 = (const lean_object*)&l_Lake_dataTypeDecl___closed__5_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lake_dataTypeDecl___closed__6 = (const lean_object*)&l_Lake_dataTypeDecl___closed__6_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lake_dataTypeDecl___closed__7 = (const lean_object*)&l_Lake_dataTypeDecl___closed__7_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__7_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lake_dataTypeDecl___closed__8 = (const lean_object*)&l_Lake_dataTypeDecl___closed__8_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__8_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__9 = (const lean_object*)&l_Lake_dataTypeDecl___closed__9_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__9_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__10 = (const lean_object*)&l_Lake_dataTypeDecl___closed__10_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "data_type "};
static const lean_object* l_Lake_dataTypeDecl___closed__11 = (const lean_object*)&l_Lake_dataTypeDecl___closed__11_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__11_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__12 = (const lean_object*)&l_Lake_dataTypeDecl___closed__12_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_dataTypeDecl___closed__12_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__13 = (const lean_object*)&l_Lake_dataTypeDecl___closed__13_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lake_dataTypeDecl___closed__14 = (const lean_object*)&l_Lake_dataTypeDecl___closed__14_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__14_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lake_dataTypeDecl___closed__15 = (const lean_object*)&l_Lake_dataTypeDecl___closed__15_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__15_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__16 = (const lean_object*)&l_Lake_dataTypeDecl___closed__16_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__13_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__17 = (const lean_object*)&l_Lake_dataTypeDecl___closed__17_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lake_dataTypeDecl___closed__18 = (const lean_object*)&l_Lake_dataTypeDecl___closed__18_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__18_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__19 = (const lean_object*)&l_Lake_dataTypeDecl___closed__19_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__17_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__20 = (const lean_object*)&l_Lake_dataTypeDecl___closed__20_value;
static const lean_string_object l_Lake_dataTypeDecl___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lake_dataTypeDecl___closed__21 = (const lean_object*)&l_Lake_dataTypeDecl___closed__21_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__21_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lake_dataTypeDecl___closed__22 = (const lean_object*)&l_Lake_dataTypeDecl___closed__22_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_dataTypeDecl___closed__23 = (const lean_object*)&l_Lake_dataTypeDecl___closed__23_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__20_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__24 = (const lean_object*)&l_Lake_dataTypeDecl___closed__24_value;
static const lean_ctor_object l_Lake_dataTypeDecl___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__2_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__24_value)}};
static const lean_object* l_Lake_dataTypeDecl___closed__25 = (const lean_object*)&l_Lake_dataTypeDecl___closed__25_value;
LEAN_EXPORT const lean_object* l_Lake_dataTypeDecl = (const lean_object*)&l_Lake_dataTypeDecl___closed__25_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "family_def"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__6_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__8_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(99, 134, 241, 204, 211, 206, 124, 144)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(37, 156, 84, 218, 244, 57, 142, 153)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(22, 101, 130, 251, 183, 19, 113, 82)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "DataKind"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(85, 248, 95, 223, 234, 189, 212, 227)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__25 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__25_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(57, 137, 77, 253, 49, 4, 64, 32)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__27 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__27_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__26_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__28 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__28_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__28_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__29 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__29_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__27_value),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__29_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__30 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__30_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__33 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__33_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__35 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__35_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__37 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__37_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__37_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__39 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__39_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__41 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__41_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__43 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__43_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__43_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__47 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__47_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__47_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__49 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__49_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__50 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__50_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__50_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Name.isAnonymous_iff_eq_anonymous"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__52 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__52_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "isAnonymous_iff_eq_anonymous"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(154, 178, 141, 167, 199, 52, 205, 105)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(10, 45, 172, 138, 28, 252, 34, 255)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(94, 175, 90, 84, 80, 182, 246, 68)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(158, 41, 113, 154, 180, 181, 171, 218)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__57_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__58 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__58_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__58_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__59 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__59_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__61 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__61_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "DataType"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__65 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__65_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__65_value),LEAN_SCALAR_PTR_LITERAL(33, 68, 121, 193, 122, 109, 136, 152)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__67 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__67_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__67_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "familyDef"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69_value),LEAN_SCALAR_PTR_LITERAL(59, 240, 138, 11, 51, 35, 78, 153)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71;
static const lean_array_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instDataKindUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lake_instDataKindUnit___closed__0 = (const lean_object*)&l_Lake_instDataKindUnit___closed__0_value;
static const lean_ctor_object l_Lake_instDataKindUnit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instDataKindUnit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 16, 7, 142, 223, 189, 92, 152)}};
static const lean_object* l_Lake_instDataKindUnit___closed__1 = (const lean_object*)&l_Lake_instDataKindUnit___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instDataKindUnit = (const lean_object*)&l_Lake_instDataKindUnit___closed__1_value;
static const lean_string_object l_Lake_instDataKindBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bool"};
static const lean_object* l_Lake_instDataKindBool___closed__0 = (const lean_object*)&l_Lake_instDataKindBool___closed__0_value;
static const lean_ctor_object l_Lake_instDataKindBool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instDataKindBool___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 123, 29, 106, 21, 111, 175, 162)}};
static const lean_object* l_Lake_instDataKindBool___closed__1 = (const lean_object*)&l_Lake_instDataKindBool___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instDataKindBool = (const lean_object*)&l_Lake_instDataKindBool___closed__1_value;
static const lean_string_object l_Lake_instDataKindFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "filepath"};
static const lean_object* l_Lake_instDataKindFilePath___closed__0 = (const lean_object*)&l_Lake_instDataKindFilePath___closed__0_value;
static const lean_ctor_object l_Lake_instDataKindFilePath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instDataKindFilePath___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 79, 67, 231, 21, 24, 25, 253)}};
static const lean_object* l_Lake_instDataKindFilePath___closed__1 = (const lean_object*)&l_Lake_instDataKindFilePath___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instDataKindFilePath = (const lean_object*)&l_Lake_instDataKindFilePath___closed__1_value;
static const lean_string_object l_Lake_instDataKindDynlib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dynlib"};
static const lean_object* l_Lake_instDataKindDynlib___closed__0 = (const lean_object*)&l_Lake_instDataKindDynlib___closed__0_value;
static const lean_ctor_object l_Lake_instDataKindDynlib___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instDataKindDynlib___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 146, 131, 63, 203, 243, 150, 200)}};
static const lean_object* l_Lake_instDataKindDynlib___closed__1 = (const lean_object*)&l_Lake_instDataKindDynlib___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instDataKindDynlib = (const lean_object*)&l_Lake_instDataKindDynlib___closed__1_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "builtinFacetCommand"};
static const lean_object* l_Lake_builtinFacetCommand___closed__0 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__0_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__1_value_aux_0),((lean_object*)&l_Lake_builtinFacetCommand___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 118, 124, 184, 192, 242, 254, 60)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__1 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__1_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "builtin_facet "};
static const lean_object* l_Lake_builtinFacetCommand___closed__2 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__2_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__2_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__3 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__3_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__3_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__4 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__4_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l_Lake_builtinFacetCommand___closed__5 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__5_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_builtinFacetCommand___closed__5_value),LEAN_SCALAR_PTR_LITERAL(56, 145, 113, 208, 127, 167, 216, 55)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__6 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__6_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lake_builtinFacetCommand___closed__7 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__7_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_builtinFacetCommand___closed__7_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__8 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__8_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " @ "};
static const lean_object* l_Lake_builtinFacetCommand___closed__9 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__9_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__9_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__10 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__10_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__10_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__11 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__11_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__8_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__11_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__12 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__12_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__6_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__12_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__13 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__13_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__6_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__13_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__14 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__14_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__14_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__15 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__15_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__15_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__16 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__16_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__16_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__17 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__17_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__17_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__18 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__18_value;
static const lean_string_object l_Lake_builtinFacetCommand___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l_Lake_builtinFacetCommand___closed__19 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__19_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__19_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__20 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__20_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__18_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__20_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__21 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__21_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_builtinFacetCommand___closed__21_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__22 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__22_value;
static const lean_ctor_object l_Lake_builtinFacetCommand___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_builtinFacetCommand___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_builtinFacetCommand___closed__22_value)}};
static const lean_object* l_Lake_builtinFacetCommand___closed__23 = (const lean_object*)&l_Lake_builtinFacetCommand___closed__23_value;
LEAN_EXPORT const lean_object* l_Lake_builtinFacetCommand = (const lean_object*)&l_Lake_builtinFacetCommand___closed__23_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__0_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__7_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "expose"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(170, 113, 233, 77, 243, 78, 243, 129)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__10_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__11_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__12_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__13_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__14_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "FamilyDef"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(149, 240, 255, 22, 138, 196, 41, 195)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__21 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__21_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__21_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__23 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__23_value;
static lean_once_cell_t l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_++_"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__25 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__25_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(90, 69, 86, 178, 149, 48, 216, 23)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "++"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "inferInstanceAs"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "cannot generate facet declaration name from facet name"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__30 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__30_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Facet"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__31 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__31_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___boxed(lean_object**);
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "FacetOut"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 147, 236, 126, 195, 124, 217, 255)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unknown target namespace `"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "unknown or ambiguous target namespace `"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_facetDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "facetDataDecl"};
static const lean_object* l_Lake_facetDataDecl___closed__0 = (const lean_object*)&l_Lake_facetDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_facetDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_facetDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_facetDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(122, 4, 106, 30, 217, 73, 248, 83)}};
static const lean_object* l_Lake_facetDataDecl___closed__1 = (const lean_object*)&l_Lake_facetDataDecl___closed__1_value;
static const lean_string_object l_Lake_facetDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "facet_data "};
static const lean_object* l_Lake_facetDataDecl___closed__2 = (const lean_object*)&l_Lake_facetDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_facetDataDecl___closed__2_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__3 = (const lean_object*)&l_Lake_facetDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_facetDataDecl___closed__3_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__4 = (const lean_object*)&l_Lake_facetDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_facetDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__5 = (const lean_object*)&l_Lake_facetDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_facetDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__6 = (const lean_object*)&l_Lake_facetDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_facetDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__7 = (const lean_object*)&l_Lake_facetDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_facetDataDecl___closed__7_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__8 = (const lean_object*)&l_Lake_facetDataDecl___closed__8_value;
static const lean_ctor_object l_Lake_facetDataDecl___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_facetDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_facetDataDecl___closed__8_value)}};
static const lean_object* l_Lake_facetDataDecl___closed__9 = (const lean_object*)&l_Lake_facetDataDecl___closed__9_value;
LEAN_EXPORT const lean_object* l_Lake_facetDataDecl = (const lean_object*)&l_Lake_facetDataDecl___closed__9_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(249, 224, 215, 22, 102, 9, 211, 189)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__1_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__0_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__2_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__3_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__1_value),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__3_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__4_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__7_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__7_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__9_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__9_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__11_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8_value),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__11_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__12_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29_value),LEAN_SCALAR_PTR_LITERAL(136, 71, 28, 207, 18, 40, 68, 73)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_packageDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "packageDataDecl"};
static const lean_object* l_Lake_packageDataDecl___closed__0 = (const lean_object*)&l_Lake_packageDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_packageDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_packageDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_packageDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 160, 98, 6, 154, 122, 231, 28)}};
static const lean_object* l_Lake_packageDataDecl___closed__1 = (const lean_object*)&l_Lake_packageDataDecl___closed__1_value;
static const lean_string_object l_Lake_packageDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "package_data "};
static const lean_object* l_Lake_packageDataDecl___closed__2 = (const lean_object*)&l_Lake_packageDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_packageDataDecl___closed__2_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__3 = (const lean_object*)&l_Lake_packageDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_packageDataDecl___closed__3_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__4 = (const lean_object*)&l_Lake_packageDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_packageDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__5 = (const lean_object*)&l_Lake_packageDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_packageDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__6 = (const lean_object*)&l_Lake_packageDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_packageDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__7 = (const lean_object*)&l_Lake_packageDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_packageDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_packageDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_packageDataDecl___closed__7_value)}};
static const lean_object* l_Lake_packageDataDecl___closed__8 = (const lean_object*)&l_Lake_packageDataDecl___closed__8_value;
LEAN_EXPORT const lean_object* l_Lake_packageDataDecl = (const lean_object*)&l_Lake_packageDataDecl___closed__8_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "facet_data"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_moduleDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "moduleDataDecl"};
static const lean_object* l_Lake_moduleDataDecl___closed__0 = (const lean_object*)&l_Lake_moduleDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_moduleDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_moduleDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_moduleDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 236, 99, 131, 4, 228, 74, 185)}};
static const lean_object* l_Lake_moduleDataDecl___closed__1 = (const lean_object*)&l_Lake_moduleDataDecl___closed__1_value;
static const lean_string_object l_Lake_moduleDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "module_data "};
static const lean_object* l_Lake_moduleDataDecl___closed__2 = (const lean_object*)&l_Lake_moduleDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_moduleDataDecl___closed__2_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__3 = (const lean_object*)&l_Lake_moduleDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_moduleDataDecl___closed__3_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__4 = (const lean_object*)&l_Lake_moduleDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_moduleDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__5 = (const lean_object*)&l_Lake_moduleDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_moduleDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__6 = (const lean_object*)&l_Lake_moduleDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_moduleDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__7 = (const lean_object*)&l_Lake_moduleDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_moduleDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_moduleDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_moduleDataDecl___closed__7_value)}};
static const lean_object* l_Lake_moduleDataDecl___closed__8 = (const lean_object*)&l_Lake_moduleDataDecl___closed__8_value;
LEAN_EXPORT const lean_object* l_Lake_moduleDataDecl = (const lean_object*)&l_Lake_moduleDataDecl___closed__8_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_libraryDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "libraryDataDecl"};
static const lean_object* l_Lake_libraryDataDecl___closed__0 = (const lean_object*)&l_Lake_libraryDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_libraryDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_libraryDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_libraryDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 126, 44, 46, 121, 159, 210, 189)}};
static const lean_object* l_Lake_libraryDataDecl___closed__1 = (const lean_object*)&l_Lake_libraryDataDecl___closed__1_value;
static const lean_string_object l_Lake_libraryDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "library_data "};
static const lean_object* l_Lake_libraryDataDecl___closed__2 = (const lean_object*)&l_Lake_libraryDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_libraryDataDecl___closed__2_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__3 = (const lean_object*)&l_Lake_libraryDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_libraryDataDecl___closed__3_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__4 = (const lean_object*)&l_Lake_libraryDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_libraryDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__5 = (const lean_object*)&l_Lake_libraryDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_libraryDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__6 = (const lean_object*)&l_Lake_libraryDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_libraryDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__7 = (const lean_object*)&l_Lake_libraryDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_libraryDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_libraryDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_libraryDataDecl___closed__7_value)}};
static const lean_object* l_Lake_libraryDataDecl___closed__8 = (const lean_object*)&l_Lake_libraryDataDecl___closed__8_value;
LEAN_EXPORT const lean_object* l_Lake_libraryDataDecl = (const lean_object*)&l_Lake_libraryDataDecl___closed__8_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_customDataDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "customDataDecl"};
static const lean_object* l_Lake_customDataDecl___closed__0 = (const lean_object*)&l_Lake_customDataDecl___closed__0_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_customDataDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_customDataDecl___closed__1_value_aux_0),((lean_object*)&l_Lake_customDataDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 51, 251, 114, 214, 40, 109, 65)}};
static const lean_object* l_Lake_customDataDecl___closed__1 = (const lean_object*)&l_Lake_customDataDecl___closed__1_value;
static const lean_string_object l_Lake_customDataDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "custom_data "};
static const lean_object* l_Lake_customDataDecl___closed__2 = (const lean_object*)&l_Lake_customDataDecl___closed__2_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_customDataDecl___closed__2_value)}};
static const lean_object* l_Lake_customDataDecl___closed__3 = (const lean_object*)&l_Lake_customDataDecl___closed__3_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__10_value),((lean_object*)&l_Lake_customDataDecl___closed__3_value)}};
static const lean_object* l_Lake_customDataDecl___closed__4 = (const lean_object*)&l_Lake_customDataDecl___closed__4_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_customDataDecl___closed__4_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_customDataDecl___closed__5 = (const lean_object*)&l_Lake_customDataDecl___closed__5_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_customDataDecl___closed__5_value),((lean_object*)&l_Lake_dataTypeDecl___closed__16_value)}};
static const lean_object* l_Lake_customDataDecl___closed__6 = (const lean_object*)&l_Lake_customDataDecl___closed__6_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_customDataDecl___closed__6_value),((lean_object*)&l_Lake_dataTypeDecl___closed__19_value)}};
static const lean_object* l_Lake_customDataDecl___closed__7 = (const lean_object*)&l_Lake_customDataDecl___closed__7_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_dataTypeDecl___closed__4_value),((lean_object*)&l_Lake_customDataDecl___closed__7_value),((lean_object*)&l_Lake_dataTypeDecl___closed__23_value)}};
static const lean_object* l_Lake_customDataDecl___closed__8 = (const lean_object*)&l_Lake_customDataDecl___closed__8_value;
static const lean_ctor_object l_Lake_customDataDecl___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_customDataDecl___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_customDataDecl___closed__8_value)}};
static const lean_object* l_Lake_customDataDecl___closed__9 = (const lean_object*)&l_Lake_customDataDecl___closed__9_value;
LEAN_EXPORT const lean_object* l_Lake_customDataDecl = (const lean_object*)&l_Lake_customDataDecl___closed__9_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__0_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__2_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__8_value),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__2_value)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "CustomOut"};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__4_value;
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_dataTypeDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(104, 189, 225, 248, 232, 79, 182, 148)}};
static const lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_OptDataKind_anonymous___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_anonymous___redArg(){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Lake_OptDataKind_anonymous___redArg___closed__0, &l_Lake_OptDataKind_anonymous___redArg___closed__0_once, _init_l_Lake_OptDataKind_anonymous___redArg___closed__0);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_anonymous___redArg___boxed(lean_object* v___dummy_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lake_OptDataKind_anonymous___redArg();
return v_res_6_;
}
}
static lean_object* _init_l_Lake_OptDataKind_anonymous___closed__0(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lake_OptDataKind_anonymous___redArg();
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_anonymous(lean_object* v_00_u03b1_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lake_OptDataKind_anonymous___closed__0, &l_Lake_OptDataKind_anonymous___closed__0_once, _init_l_Lake_OptDataKind_anonymous___closed__0);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instInhabited___redArg(){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lake_OptDataKind_anonymous___closed__0, &l_Lake_OptDataKind_anonymous___closed__0_once, _init_l_Lake_OptDataKind_anonymous___closed__0);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instInhabited___redArg___boxed(lean_object* v___dummy_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lake_OptDataKind_instInhabited___redArg();
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instInhabited(lean_object* v_00_u03b1_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lake_OptDataKind_anonymous___closed__0, &l_Lake_OptDataKind_anonymous___closed__0_once, _init_l_Lake_OptDataKind_anonymous___closed__0);
return v___x_15_;
}
}
LEAN_EXPORT uint8_t l_Lake_OptDataKind_isAnonymous___redArg(lean_object* v_self_16_){
_start:
{
uint8_t v___x_17_; 
v___x_17_ = l_Lean_Name_isAnonymous(v_self_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_isAnonymous___redArg___boxed(lean_object* v_self_18_){
_start:
{
uint8_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = l_Lake_OptDataKind_isAnonymous___redArg(v_self_18_);
lean_dec(v_self_18_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT uint8_t l_Lake_OptDataKind_isAnonymous(lean_object* v_00_u03b1_21_, lean_object* v_self_22_){
_start:
{
uint8_t v___x_23_; 
v___x_23_ = l_Lean_Name_isAnonymous(v_self_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_isAnonymous___boxed(lean_object* v_00_u03b1_24_, lean_object* v_self_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_Lake_OptDataKind_isAnonymous(v_00_u03b1_24_, v_self_25_);
lean_dec(v_self_25_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___redArg(lean_object* v_inst_28_){
_start:
{
lean_inc(v_inst_28_);
return v_inst_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___redArg___boxed(lean_object* v_inst_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lake_OptDataKind_instOfDataKind___redArg(v_inst_29_);
lean_dec(v_inst_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind(lean_object* v_00_u03b1_31_, lean_object* v_inst_32_){
_start:
{
lean_inc(v_inst_32_);
return v_inst_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instOfDataKind___boxed(lean_object* v_00_u03b1_33_, lean_object* v_inst_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lake_OptDataKind_instOfDataKind(v_00_u03b1_33_, v_inst_34_);
lean_dec(v_inst_34_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___redArg___lam__0(lean_object* v_x_36_){
_start:
{
lean_inc(v_x_36_);
return v_x_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___redArg___lam__0___boxed(lean_object* v_x_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_OptDataKind_instCoeOutName___redArg___lam__0(v_x_37_);
lean_dec(v_x_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___redArg(){
_start:
{
lean_object* v___f_41_; 
v___f_41_ = ((lean_object*)(l_Lake_OptDataKind_instCoeOutName___redArg___closed__0));
return v___f_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName___redArg___boxed(lean_object* v___dummy_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lake_OptDataKind_instCoeOutName___redArg();
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instCoeOutName(lean_object* v_00_u03b1_44_){
_start:
{
lean_object* v___f_45_; 
v___f_45_ = ((lean_object*)(l_Lake_OptDataKind_instCoeOutName___redArg___closed__0));
return v___f_45_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString___redArg___lam__0(lean_object* v_x_46_){
_start:
{
uint8_t v___x_47_; lean_object* v___x_48_; 
v___x_47_ = 1;
v___x_48_ = l_Lean_Name_toString(v_x_46_, v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString___redArg(){
_start:
{
lean_object* v___f_51_; 
v___f_51_ = ((lean_object*)(l_Lake_OptDataKind_instToString___redArg___closed__0));
return v___f_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString___redArg___boxed(lean_object* v___dummy_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lake_OptDataKind_instToString___redArg();
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lake_OptDataKind_instToString(lean_object* v_00_u03b1_54_){
_start:
{
lean_object* v___f_55_; 
v___f_55_ = ((lean_object*)(l_Lake_OptDataKind_instToString___redArg___closed__0));
return v___f_55_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__23));
v___x_170_ = l_String_toRawSubstring_x27(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__52));
v___x_242_ = l_String_toRawSubstring_x27(v___x_241_);
return v___x_242_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Array_mkArray0___redArg();
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1(lean_object* v_x_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_284_ = ((lean_object*)(l_Lake_dataTypeDecl___closed__2));
lean_inc(v_x_281_);
v___x_285_ = l_Lean_Syntax_isOfKind(v_x_281_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; 
lean_dec(v_x_281_);
v___x_286_ = lean_box(1);
v___x_287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v_a_283_);
return v___x_287_;
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v_kind_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___y_295_; lean_object* v___y_296_; lean_object* v___y_297_; lean_object* v___y_298_; lean_object* v___y_299_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_385_; lean_object* v___x_401_; 
v___x_288_ = lean_unsigned_to_nat(0u);
v___x_289_ = l_Lean_Syntax_getArg(v_x_281_, v___x_288_);
v___x_290_ = lean_unsigned_to_nat(2u);
v_kind_291_ = l_Lean_Syntax_getArg(v_x_281_, v___x_290_);
v___x_292_ = lean_unsigned_to_nat(4u);
v___x_293_ = l_Lean_Syntax_getArg(v_x_281_, v___x_292_);
lean_dec(v_x_281_);
v___x_401_ = l_Lean_Syntax_getOptional_x3f(v___x_289_);
lean_dec(v___x_289_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v___x_402_; 
v___x_402_ = lean_box(0);
v___y_385_ = v___x_402_;
goto v___jp_384_;
}
else
{
lean_object* v_val_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
v_val_403_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_401_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_val_403_);
lean_dec(v___x_401_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_val_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
v___y_385_ = v___x_408_;
goto v___jp_384_;
}
}
}
v___jp_294_:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
lean_inc_ref_n(v___y_296_, 2);
v___x_304_ = l_Array_append___redArg(v___y_296_, v___y_303_);
lean_dec_ref(v___y_303_);
lean_inc_n(v___y_300_, 9);
lean_inc_n(v___y_302_, 40);
v___x_305_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_305_, 0, v___y_302_);
lean_ctor_set(v___x_305_, 1, v___y_300_);
lean_ctor_set(v___x_305_, 2, v___x_304_);
v___x_306_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0));
v___x_307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_307_, 0, v___y_302_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
v___x_309_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_309_, 0, v___y_302_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v___x_310_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2));
v___x_311_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_311_, 0, v___y_302_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
lean_inc(v___x_293_);
lean_inc_ref(v___x_311_);
lean_inc(v___y_298_);
lean_inc_ref(v___x_309_);
lean_inc(v___y_295_);
v___x_312_ = l_Lean_Syntax_node8(v___y_302_, v___y_295_, v___x_305_, v___x_307_, v_kind_291_, v___x_309_, v___y_299_, v___y_298_, v___x_311_, v___x_293_);
v___x_313_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7));
v___x_314_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9));
v___x_315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_315_, 0, v___y_302_);
lean_ctor_set(v___x_315_, 1, v___y_300_);
lean_ctor_set(v___x_315_, 2, v___y_296_);
v___x_316_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10));
v___x_317_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11));
v___x_318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_318_, 0, v___y_302_);
lean_ctor_set(v___x_318_, 1, v___x_316_);
v___x_319_ = l_Lean_Syntax_node1(v___y_302_, v___x_317_, v___x_318_);
v___x_320_ = l_Lean_Syntax_node1(v___y_302_, v___y_300_, v___x_319_);
lean_inc_ref_n(v___x_315_, 18);
v___x_321_ = l_Lean_Syntax_node7(v___y_302_, v___x_314_, v___x_315_, v___x_315_, v___x_320_, v___x_315_, v___x_315_, v___x_315_, v___x_315_);
v___x_322_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12));
v___x_323_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13));
v___x_324_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16));
v___x_325_ = l_Lean_Syntax_node1(v___y_302_, v___x_324_, v___x_315_);
v___x_326_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_326_, 0, v___y_302_);
lean_ctor_set(v___x_326_, 1, v___x_322_);
v___x_327_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18));
v___x_328_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20));
v___x_329_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22));
v___x_330_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__24);
v___x_331_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__25));
lean_inc_n(v___y_297_, 2);
lean_inc_n(v___y_301_, 2);
v___x_332_ = l_Lean_addMacroScope(v___y_301_, v___x_331_, v___y_297_);
v___x_333_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__30));
v___x_334_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_334_, 0, v___y_302_);
lean_ctor_set(v___x_334_, 1, v___x_330_);
lean_ctor_set(v___x_334_, 2, v___x_332_);
lean_ctor_set(v___x_334_, 3, v___x_333_);
v___x_335_ = l_Lean_Syntax_node1(v___y_302_, v___y_300_, v___x_293_);
v___x_336_ = l_Lean_Syntax_node2(v___y_302_, v___x_329_, v___x_334_, v___x_335_);
v___x_337_ = l_Lean_Syntax_node2(v___y_302_, v___x_328_, v___x_309_, v___x_336_);
v___x_338_ = l_Lean_Syntax_node2(v___y_302_, v___x_327_, v___x_315_, v___x_337_);
v___x_339_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32));
v___x_340_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__34));
v___x_341_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__35));
v___x_342_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_342_, 0, v___y_302_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
v___x_343_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36));
v___x_344_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_344_, 0, v___y_302_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__38));
v___x_346_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__39));
v___x_347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_347_, 0, v___y_302_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
v___x_348_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__42));
v___x_349_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__44));
v___x_350_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__45));
v___x_351_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__46));
v___x_352_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_352_, 0, v___y_302_);
lean_ctor_set(v___x_352_, 1, v___x_350_);
v___x_353_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__48));
v___x_354_ = l_Lean_Syntax_node1(v___y_302_, v___x_353_, v___x_315_);
v___x_355_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__49));
v___x_356_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_356_, 0, v___y_302_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
v___x_357_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__51));
v___x_358_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__53);
v___x_359_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__56));
v___x_360_ = l_Lean_addMacroScope(v___y_301_, v___x_359_, v___y_297_);
v___x_361_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__59));
v___x_362_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_362_, 0, v___y_302_);
lean_ctor_set(v___x_362_, 1, v___x_358_);
lean_ctor_set(v___x_362_, 2, v___x_360_);
lean_ctor_set(v___x_362_, 3, v___x_361_);
v___x_363_ = l_Lean_Syntax_node3(v___y_302_, v___x_357_, v___x_315_, v___x_315_, v___x_362_);
v___x_364_ = l_Lean_Syntax_node1(v___y_302_, v___y_300_, v___x_363_);
v___x_365_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60));
v___x_366_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_366_, 0, v___y_302_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = l_Lean_Syntax_node3(v___y_302_, v___y_300_, v___x_356_, v___x_364_, v___x_366_);
v___x_368_ = l_Lean_Syntax_node6(v___y_302_, v___x_351_, v___x_352_, v___x_354_, v___x_315_, v___x_315_, v___x_367_, v___x_315_);
v___x_369_ = l_Lean_Syntax_node1(v___y_302_, v___y_300_, v___x_368_);
v___x_370_ = l_Lean_Syntax_node1(v___y_302_, v___x_349_, v___x_369_);
v___x_371_ = l_Lean_Syntax_node1(v___y_302_, v___x_348_, v___x_370_);
v___x_372_ = l_Lean_Syntax_node2(v___y_302_, v___x_345_, v___x_347_, v___x_371_);
v___x_373_ = l_Lean_Syntax_node3(v___y_302_, v___y_300_, v___y_298_, v___x_344_, v___x_372_);
v___x_374_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__61));
v___x_375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_375_, 0, v___y_302_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = l_Lean_Syntax_node3(v___y_302_, v___x_340_, v___x_342_, v___x_373_, v___x_375_);
v___x_377_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64));
v___x_378_ = l_Lean_Syntax_node2(v___y_302_, v___x_377_, v___x_315_, v___x_315_);
v___x_379_ = l_Lean_Syntax_node4(v___y_302_, v___x_339_, v___x_311_, v___x_376_, v___x_378_, v___x_315_);
v___x_380_ = l_Lean_Syntax_node6(v___y_302_, v___x_323_, v___x_325_, v___x_326_, v___x_315_, v___x_315_, v___x_338_, v___x_379_);
v___x_381_ = l_Lean_Syntax_node2(v___y_302_, v___x_313_, v___x_321_, v___x_380_);
v___x_382_ = l_Lean_Syntax_node2(v___y_302_, v___y_300_, v___x_312_, v___x_381_);
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
lean_ctor_set(v___x_383_, 1, v_a_283_);
return v___x_383_;
}
v___jp_384_:
{
lean_object* v_quotContext_386_; lean_object* v_currMacroScope_387_; lean_object* v_ref_388_; lean_object* v___x_389_; uint8_t v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v_quotContext_386_ = lean_ctor_get(v_a_282_, 1);
v_currMacroScope_387_ = lean_ctor_get(v_a_282_, 2);
v_ref_388_ = lean_ctor_get(v_a_282_, 5);
v___x_389_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__66));
v___x_390_ = 0;
v___x_391_ = l_Lean_mkCIdentFrom(v_ref_388_, v___x_389_, v___x_390_);
v___x_392_ = l_Lean_TSyntax_getId(v_kind_291_);
lean_inc(v_kind_291_);
v___x_393_ = l_Lake_Name_quoteFrom(v_kind_291_, v___x_392_, v___x_390_);
v___x_394_ = l_Lean_SourceInfo_fromRef(v_ref_388_, v___x_390_);
v___x_395_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_396_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70));
v___x_397_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_385_) == 1)
{
lean_object* v_val_398_; lean_object* v___x_399_; 
v_val_398_ = lean_ctor_get(v___y_385_, 0);
lean_inc(v_val_398_);
lean_dec_ref_known(v___y_385_, 1);
v___x_399_ = l_Array_mkArray1___redArg(v_val_398_);
v___y_295_ = v___x_396_;
v___y_296_ = v___x_397_;
v___y_297_ = v_currMacroScope_387_;
v___y_298_ = v___x_393_;
v___y_299_ = v___x_391_;
v___y_300_ = v___x_395_;
v___y_301_ = v_quotContext_386_;
v___y_302_ = v___x_394_;
v___y_303_ = v___x_399_;
goto v___jp_294_;
}
else
{
lean_object* v___x_400_; 
lean_dec(v___y_385_);
v___x_400_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_295_ = v___x_396_;
v___y_296_ = v___x_397_;
v___y_297_ = v_currMacroScope_387_;
v___y_298_ = v___x_393_;
v___y_299_ = v___x_391_;
v___y_300_ = v___x_395_;
v___y_301_ = v_quotContext_386_;
v___y_302_ = v___x_394_;
v___y_303_ = v___x_400_;
goto v___jp_294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___boxed(lean_object* v_x_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1(v_x_411_, v_a_412_, v_a_413_);
lean_dec_ref(v_a_412_);
return v_res_414_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__5));
v___x_503_ = l_String_toRawSubstring_x27(v___x_502_);
return v___x_503_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__8));
v___x_508_ = l_String_toRawSubstring_x27(v___x_507_);
return v___x_508_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15));
v___x_517_ = l_String_toRawSubstring_x27(v___x_516_);
return v___x_517_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__23));
v___x_528_ = l_String_toRawSubstring_x27(v___x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(lean_object* v___x_537_, lean_object* v___x_538_, lean_object* v___x_539_, lean_object* v_fam_540_, lean_object* v___x_541_, lean_object* v___x_542_, lean_object* v___x_543_, uint8_t v___x_544_, lean_object* v___y_545_, lean_object* v_name_546_, lean_object* v_ns_547_, lean_object* v___x_548_, uint8_t v___x_549_, lean_object* v_tk_550_, lean_object* v___y_551_, lean_object* v___x_552_, lean_object* v_____r_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_722_; lean_object* v_id_723_; lean_object* v___y_724_; lean_object* v___y_725_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___x_749_; uint8_t v___y_751_; 
v___x_749_ = l_Lean_TSyntax_getId(v_name_546_);
if (lean_obj_tag(v___y_551_) == 0)
{
v___y_751_ = v___x_544_;
goto v___jp_750_;
}
else
{
v___y_751_ = v___x_549_;
goto v___jp_750_;
}
v___jp_556_:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
lean_inc_ref_n(v___y_566_, 2);
v___x_574_ = l_Array_append___redArg(v___y_566_, v___y_573_);
lean_dec_ref(v___y_573_);
lean_inc_n(v___y_564_, 9);
lean_inc_n(v___y_571_, 53);
v___x_575_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_575_, 0, v___y_571_);
lean_ctor_set(v___x_575_, 1, v___y_564_);
lean_ctor_set(v___x_575_, 2, v___x_574_);
v___x_576_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__14));
v___x_577_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__0));
lean_inc_ref_n(v___y_567_, 17);
lean_inc_ref_n(v___y_558_, 18);
v___x_578_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_576_, v___x_577_);
v___x_579_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__1));
v___x_580_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_580_, 0, v___y_571_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__2));
v___x_582_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_576_, v___x_581_);
v___x_583_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__15));
v___x_584_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_576_, v___x_583_);
v___x_585_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_585_, 0, v___y_571_);
lean_ctor_set(v___x_585_, 1, v___y_564_);
lean_ctor_set(v___x_585_, 2, v___y_566_);
lean_inc_ref_n(v___x_585_, 23);
v___x_586_ = l_Lean_Syntax_node1(v___y_571_, v___x_584_, v___x_585_);
v___x_587_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__3));
v___x_588_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__4));
v___x_589_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_587_, v___x_588_);
v___x_590_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__6);
v___x_591_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__7));
lean_inc_n(v___y_561_, 5);
lean_inc_n(v___y_559_, 5);
v___x_592_ = l_Lean_addMacroScope(v___y_559_, v___x_591_, v___y_561_);
v___x_593_ = lean_box(0);
v___x_594_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_594_, 0, v___y_571_);
lean_ctor_set(v___x_594_, 1, v___x_590_);
lean_ctor_set(v___x_594_, 2, v___x_592_);
lean_ctor_set(v___x_594_, 3, v___x_593_);
lean_inc(v___x_589_);
v___x_595_ = l_Lean_Syntax_node2(v___y_571_, v___x_589_, v___x_594_, v___x_585_);
lean_inc_n(v___x_586_, 2);
lean_inc(v___x_582_);
v___x_596_ = l_Lean_Syntax_node2(v___y_571_, v___x_582_, v___x_586_, v___x_595_);
v___x_597_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36));
v___x_598_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_598_, 0, v___y_571_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__9);
v___x_600_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__10));
v___x_601_ = l_Lean_addMacroScope(v___y_559_, v___x_600_, v___y_561_);
v___x_602_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_602_, 0, v___y_571_);
lean_ctor_set(v___x_602_, 1, v___x_599_);
lean_ctor_set(v___x_602_, 2, v___x_601_);
lean_ctor_set(v___x_602_, 3, v___x_593_);
v___x_603_ = l_Lean_Syntax_node2(v___y_571_, v___x_589_, v___x_602_, v___x_585_);
v___x_604_ = l_Lean_Syntax_node2(v___y_571_, v___x_582_, v___x_586_, v___x_603_);
v___x_605_ = l_Lean_Syntax_node3(v___y_571_, v___y_564_, v___x_596_, v___x_598_, v___x_604_);
v___x_606_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__60));
v___x_607_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_607_, 0, v___y_571_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = l_Lean_Syntax_node3(v___y_571_, v___x_578_, v___x_580_, v___x_605_, v___x_607_);
v___x_609_ = l_Lean_Syntax_node1(v___y_571_, v___y_564_, v___x_608_);
v___x_610_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10));
lean_inc_ref_n(v___y_568_, 7);
v___x_611_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___y_568_, v___x_610_);
v___x_612_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_612_, 0, v___y_571_);
lean_ctor_set(v___x_612_, 1, v___x_610_);
v___x_613_ = l_Lean_Syntax_node1(v___y_571_, v___x_611_, v___x_612_);
v___x_614_ = l_Lean_Syntax_node1(v___y_571_, v___y_564_, v___x_613_);
lean_inc(v___x_614_);
lean_inc_n(v___y_569_, 2);
v___x_615_ = l_Lean_Syntax_node7(v___y_571_, v___y_569_, v___x_575_, v___x_609_, v___x_614_, v___x_585_, v___x_585_, v___x_585_, v___x_585_);
v___x_616_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__11));
v___x_617_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___y_568_, v___x_616_);
v___x_618_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__12));
v___x_619_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_619_, 0, v___y_571_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__13));
v___x_621_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___y_568_, v___x_620_);
v___x_622_ = lean_mk_empty_array_with_capacity(v___x_537_);
v___x_623_ = lean_box(2);
v___x_624_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v___y_564_);
lean_ctor_set(v___x_624_, 2, v___x_622_);
v___x_625_ = lean_mk_empty_array_with_capacity(v___x_538_);
v___x_626_ = lean_array_push(v___x_625_, v___y_572_);
v___x_627_ = lean_array_push(v___x_626_, v___x_624_);
v___x_628_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_628_, 0, v___x_623_);
lean_ctor_set(v___x_628_, 1, v___x_621_);
lean_ctor_set(v___x_628_, 2, v___x_627_);
v___x_629_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__14));
v___x_630_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___y_568_, v___x_629_);
v___x_631_ = l_Lean_Syntax_node2(v___y_571_, v___x_630_, v___x_585_, v___x_585_);
v___x_632_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__31));
v___x_633_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___y_568_, v___x_632_);
v___x_634_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2));
v___x_635_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_635_, 0, v___y_571_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__62));
v___x_637_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__63));
v___x_638_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_636_, v___x_637_);
v___x_639_ = l_Lean_Syntax_node2(v___y_571_, v___x_638_, v___x_585_, v___x_585_);
lean_inc(v___x_639_);
lean_inc_n(v___y_560_, 2);
lean_inc_ref_n(v___x_635_, 2);
lean_inc(v___x_633_);
v___x_640_ = l_Lean_Syntax_node4(v___y_571_, v___x_633_, v___x_635_, v___y_560_, v___x_639_, v___x_585_);
v___x_641_ = l_Lean_Syntax_node5(v___y_571_, v___x_617_, v___x_619_, v___x_628_, v___x_631_, v___x_640_, v___x_585_);
lean_inc_n(v___y_557_, 2);
v___x_642_ = l_Lean_Syntax_node2(v___y_571_, v___y_557_, v___x_615_, v___x_641_);
v___x_643_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__69));
lean_inc_ref_n(v___x_539_, 2);
v___x_644_ = l_Lean_Name_mkStr2(v___x_539_, v___x_643_);
v___x_645_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0));
v___x_646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_646_, 0, v___y_571_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
v___x_648_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_648_, 0, v___y_571_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
lean_inc_n(v___x_541_, 2);
lean_inc_ref(v___x_648_);
v___x_649_ = l_Lean_Syntax_node8(v___y_571_, v___x_644_, v___x_585_, v___x_646_, v___y_562_, v___x_648_, v_fam_540_, v___y_560_, v___x_635_, v___x_541_);
v___x_650_ = l_Lean_Syntax_node7(v___y_571_, v___y_569_, v___x_585_, v___x_585_, v___x_614_, v___x_585_, v___x_585_, v___x_585_, v___x_585_);
v___x_651_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12));
v___x_652_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___y_568_, v___x_651_);
v___x_653_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_653_, 0, v___y_571_);
lean_ctor_set(v___x_653_, 1, v___x_651_);
v___x_654_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__17));
v___x_655_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___y_568_, v___x_654_);
v___x_656_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__19));
v___x_657_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_576_, v___x_656_);
v___x_658_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__21));
v___x_659_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_576_, v___x_658_);
v___x_660_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__15));
v___x_661_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16);
v___x_662_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17));
v___x_663_ = l_Lean_addMacroScope(v___y_559_, v___x_662_, v___y_561_);
v___x_664_ = l_Lean_Name_mkStr2(v___x_539_, v___x_660_);
lean_inc(v___x_664_);
v___x_665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v___x_593_);
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_664_);
v___x_667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___x_593_);
v___x_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_665_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_669_, 0, v___y_571_);
lean_ctor_set(v___x_669_, 1, v___x_661_);
lean_ctor_set(v___x_669_, 2, v___x_663_);
lean_ctor_set(v___x_669_, 3, v___x_668_);
lean_inc_ref(v___x_542_);
v___x_670_ = l_String_toRawSubstring_x27(v___x_542_);
v___x_671_ = l_Lean_Name_mkStr1(v___x_542_);
v___x_672_ = l_Lean_addMacroScope(v___y_559_, v___x_671_, v___y_561_);
v___x_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_543_);
lean_ctor_set(v___x_673_, 1, v___x_593_);
v___x_674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
lean_ctor_set(v___x_674_, 1, v___x_593_);
v___x_675_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_675_, 0, v___y_571_);
lean_ctor_set(v___x_675_, 1, v___x_670_);
lean_ctor_set(v___x_675_, 2, v___x_672_);
lean_ctor_set(v___x_675_, 3, v___x_674_);
v___x_676_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__18));
v___x_677_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_576_, v___x_676_);
v___x_678_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__19));
v___x_679_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_576_, v___x_678_);
v___x_680_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20));
v___x_681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_681_, 0, v___y_571_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22));
v___x_683_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24);
v___x_684_ = lean_obj_once(&l_Lake_OptDataKind_anonymous___redArg___closed__0, &l_Lake_OptDataKind_anonymous___redArg___closed__0_once, _init_l_Lake_OptDataKind_anonymous___redArg___closed__0);
v___x_685_ = l_Lean_addMacroScope(v___y_559_, v___x_684_, v___y_561_);
v___x_686_ = l_Lean_Name_mkStr1(v___x_539_);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
v___x_688_ = l_Lean_Name_mkStr1(v___y_558_);
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
v___x_690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
lean_ctor_set(v___x_690_, 1, v___x_593_);
v___x_691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_687_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
v___x_692_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_692_, 0, v___y_571_);
lean_ctor_set(v___x_692_, 1, v___x_683_);
lean_ctor_set(v___x_692_, 2, v___x_685_);
lean_ctor_set(v___x_692_, 3, v___x_691_);
v___x_693_ = l_Lean_Syntax_node1(v___y_571_, v___x_682_, v___x_692_);
v___x_694_ = l_Lean_Syntax_node2(v___y_571_, v___x_679_, v___x_681_, v___x_693_);
v___x_695_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26));
v___x_696_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27));
v___x_697_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_697_, 0, v___y_571_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = l_Lean_Syntax_node3(v___y_571_, v___x_695_, v___y_563_, v___x_697_, v___y_570_);
v___x_699_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28));
v___x_700_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_700_, 0, v___y_571_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
lean_inc_ref(v___x_700_);
lean_inc(v___x_694_);
lean_inc(v___x_677_);
v___x_701_ = l_Lean_Syntax_node3(v___y_571_, v___x_677_, v___x_694_, v___x_698_, v___x_700_);
lean_inc_ref(v___x_675_);
v___x_702_ = l_Lean_Syntax_node3(v___y_571_, v___y_564_, v___x_675_, v___x_701_, v___x_541_);
lean_inc_ref(v___x_669_);
lean_inc(v___x_659_);
v___x_703_ = l_Lean_Syntax_node2(v___y_571_, v___x_659_, v___x_669_, v___x_702_);
v___x_704_ = l_Lean_Syntax_node2(v___y_571_, v___x_657_, v___x_648_, v___x_703_);
v___x_705_ = l_Lean_Syntax_node2(v___y_571_, v___x_655_, v___x_585_, v___x_704_);
v___x_706_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29));
v___x_707_ = l_Lean_Name_mkStr4(v___y_558_, v___y_567_, v___x_576_, v___x_706_);
v___x_708_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_708_, 0, v___y_571_);
lean_ctor_set(v___x_708_, 1, v___x_706_);
v___x_709_ = l_Lean_Syntax_node3(v___y_571_, v___y_564_, v___x_675_, v___y_560_, v___x_541_);
v___x_710_ = l_Lean_Syntax_node2(v___y_571_, v___x_659_, v___x_669_, v___x_709_);
v___x_711_ = l_Lean_Syntax_node3(v___y_571_, v___x_677_, v___x_694_, v___x_710_, v___x_700_);
v___x_712_ = l_Lean_Syntax_node2(v___y_571_, v___x_707_, v___x_708_, v___x_711_);
v___x_713_ = l_Lean_Syntax_node4(v___y_571_, v___x_633_, v___x_635_, v___x_712_, v___x_639_, v___x_585_);
v___x_714_ = l_Lean_Syntax_node6(v___y_571_, v___x_652_, v___x_586_, v___x_653_, v___x_585_, v___x_585_, v___x_705_, v___x_713_);
v___x_715_ = l_Lean_Syntax_node2(v___y_571_, v___y_557_, v___x_650_, v___x_714_);
v___x_716_ = l_Lean_Syntax_node3(v___y_571_, v___y_564_, v___x_642_, v___x_649_, v___x_715_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
lean_ctor_set(v___x_717_, 1, v___y_565_);
return v___x_717_;
}
v___jp_718_:
{
lean_object* v_quotContext_726_; lean_object* v_currMacroScope_727_; lean_object* v_ref_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v_quotContext_726_ = lean_ctor_get(v___y_724_, 1);
v_currMacroScope_727_ = lean_ctor_get(v___y_724_, 2);
v_ref_728_ = lean_ctor_get(v___y_724_, 5);
v___x_729_ = l_Lean_SourceInfo_fromRef(v_ref_728_, v___x_544_);
v___x_730_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_731_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__3));
v___x_732_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__4));
v___x_733_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__5));
v___x_734_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7));
v___x_735_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9));
v___x_736_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_545_) == 1)
{
lean_object* v_val_737_; lean_object* v___x_738_; 
v_val_737_ = lean_ctor_get(v___y_545_, 0);
lean_inc(v_val_737_);
lean_dec_ref_known(v___y_545_, 1);
v___x_738_ = l_Array_mkArray1___redArg(v_val_737_);
v___y_557_ = v___x_734_;
v___y_558_ = v___x_731_;
v___y_559_ = v_quotContext_726_;
v___y_560_ = v___y_720_;
v___y_561_ = v_currMacroScope_727_;
v___y_562_ = v___y_721_;
v___y_563_ = v___y_719_;
v___y_564_ = v___x_730_;
v___y_565_ = v___y_725_;
v___y_566_ = v___x_736_;
v___y_567_ = v___x_732_;
v___y_568_ = v___x_733_;
v___y_569_ = v___x_735_;
v___y_570_ = v___y_722_;
v___y_571_ = v___x_729_;
v___y_572_ = v_id_723_;
v___y_573_ = v___x_738_;
goto v___jp_556_;
}
else
{
lean_object* v___x_739_; 
lean_dec(v___y_545_);
v___x_739_ = lean_mk_empty_array_with_capacity(v___x_537_);
v___y_557_ = v___x_734_;
v___y_558_ = v___x_731_;
v___y_559_ = v_quotContext_726_;
v___y_560_ = v___y_720_;
v___y_561_ = v_currMacroScope_727_;
v___y_562_ = v___y_721_;
v___y_563_ = v___y_719_;
v___y_564_ = v___x_730_;
v___y_565_ = v___y_725_;
v___y_566_ = v___x_736_;
v___y_567_ = v___x_732_;
v___y_568_ = v___x_733_;
v___y_569_ = v___x_735_;
v___y_570_ = v___y_722_;
v___y_571_ = v___x_729_;
v___y_572_ = v_id_723_;
v___y_573_ = v___x_739_;
goto v___jp_556_;
}
}
v___jp_740_:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__30));
v___x_746_ = l_Lean_Macro_throwErrorAt___redArg(v_name_546_, v___x_745_, v___y_554_, v___y_555_);
lean_dec(v_name_546_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v_a_748_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
v_a_748_ = lean_ctor_get(v___x_746_, 1);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_746_, 2);
v___y_719_ = v___y_741_;
v___y_720_ = v___y_742_;
v___y_721_ = v___y_743_;
v___y_722_ = v___y_744_;
v_id_723_ = v_a_747_;
v___y_724_ = v___y_554_;
v___y_725_ = v_a_748_;
goto v___jp_718_;
}
else
{
lean_dec(v___y_744_);
lean_dec(v___y_743_);
lean_dec(v___y_742_);
lean_dec(v___y_741_);
lean_dec(v___y_545_);
lean_dec(v___x_543_);
lean_dec_ref(v___x_542_);
lean_dec(v___x_541_);
lean_dec(v_fam_540_);
lean_dec_ref(v___x_539_);
return v___x_746_;
}
}
v___jp_750_:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
lean_inc_n(v___x_749_, 2);
lean_inc(v_name_546_);
v___x_752_ = l_Lake_Name_quoteFrom(v_name_546_, v___x_749_, v___y_751_);
lean_inc(v___x_548_);
v___x_753_ = l_Lake_Name_quoteFrom(v_ns_547_, v___x_548_, v___x_549_);
v___x_754_ = l_Lean_Name_append(v___x_548_, v___x_749_);
lean_inc(v___x_754_);
v___x_755_ = l_Lean_mkIdentFrom(v_tk_550_, v___x_754_, v___x_549_);
v___x_756_ = l_Lake_Name_quoteFrom(v_tk_550_, v___x_754_, v___x_544_);
if (lean_obj_tag(v___y_551_) == 1)
{
lean_object* v_val_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
lean_dec(v___x_749_);
lean_dec(v_name_546_);
v_val_757_ = lean_ctor_get(v___y_551_, 0);
v___x_758_ = l_Lean_Syntax_getArg(v_val_757_, v___x_537_);
v___x_759_ = l_Lean_Syntax_getId(v___x_758_);
v___x_760_ = l_Lean_Name_append(v___x_552_, v___x_759_);
v___x_761_ = l_Lean_mkIdentFrom(v___x_758_, v___x_760_, v___x_549_);
lean_dec(v___x_758_);
v___y_719_ = v___x_753_;
v___y_720_ = v___x_756_;
v___y_721_ = v___x_755_;
v___y_722_ = v___x_752_;
v_id_723_ = v___x_761_;
v___y_724_ = v___y_554_;
v___y_725_ = v___y_555_;
goto v___jp_718_;
}
else
{
if (lean_obj_tag(v___x_749_) == 1)
{
lean_object* v_pre_762_; 
v_pre_762_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_pre_762_);
if (lean_obj_tag(v_pre_762_) == 0)
{
lean_object* v_str_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_str_763_ = lean_ctor_get(v___x_749_, 1);
lean_inc_ref(v_str_763_);
lean_dec_ref_known(v___x_749_, 2);
v___x_764_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__31));
v___x_765_ = lean_string_append(v_str_763_, v___x_764_);
v___x_766_ = l_Lean_Name_str___override(v___x_552_, v___x_765_);
v___x_767_ = l_Lean_mkIdentFrom(v_name_546_, v___x_766_, v___x_549_);
lean_dec(v_name_546_);
v___y_719_ = v___x_753_;
v___y_720_ = v___x_756_;
v___y_721_ = v___x_755_;
v___y_722_ = v___x_752_;
v_id_723_ = v___x_767_;
v___y_724_ = v___y_554_;
v___y_725_ = v___y_555_;
goto v___jp_718_;
}
else
{
lean_dec_ref_known(v___x_749_, 2);
lean_dec(v_pre_762_);
lean_dec(v___x_552_);
v___y_741_ = v___x_753_;
v___y_742_ = v___x_756_;
v___y_743_ = v___x_755_;
v___y_744_ = v___x_752_;
goto v___jp_740_;
}
}
else
{
lean_dec(v___x_749_);
lean_dec(v___x_552_);
v___y_741_ = v___x_753_;
v___y_742_ = v___x_756_;
v___y_743_ = v___x_755_;
v___y_744_ = v___x_752_;
goto v___jp_740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___boxed(lean_object** _args){
lean_object* v___x_768_ = _args[0];
lean_object* v___x_769_ = _args[1];
lean_object* v___x_770_ = _args[2];
lean_object* v_fam_771_ = _args[3];
lean_object* v___x_772_ = _args[4];
lean_object* v___x_773_ = _args[5];
lean_object* v___x_774_ = _args[6];
lean_object* v___x_775_ = _args[7];
lean_object* v___y_776_ = _args[8];
lean_object* v_name_777_ = _args[9];
lean_object* v_ns_778_ = _args[10];
lean_object* v___x_779_ = _args[11];
lean_object* v___x_780_ = _args[12];
lean_object* v_tk_781_ = _args[13];
lean_object* v___y_782_ = _args[14];
lean_object* v___x_783_ = _args[15];
lean_object* v_____r_784_ = _args[16];
lean_object* v___y_785_ = _args[17];
lean_object* v___y_786_ = _args[18];
_start:
{
uint8_t v___x_10998__boxed_787_; uint8_t v___x_11001__boxed_788_; lean_object* v_res_789_; 
v___x_10998__boxed_787_ = lean_unbox(v___x_775_);
v___x_11001__boxed_788_ = lean_unbox(v___x_780_);
v_res_789_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(v___x_768_, v___x_769_, v___x_770_, v_fam_771_, v___x_772_, v___x_773_, v___x_774_, v___x_10998__boxed_787_, v___y_776_, v_name_777_, v_ns_778_, v___x_779_, v___x_11001__boxed_788_, v_tk_781_, v___y_782_, v___x_783_, v_____r_784_, v___y_785_, v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_782_);
lean_dec(v___x_769_);
lean_dec(v___x_768_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1(lean_object* v_x_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v___y_801_; lean_object* v___x_820_; lean_object* v___x_821_; uint8_t v___x_822_; 
v___x_820_ = ((lean_object*)(l_Lake_dataTypeDecl___closed__0));
v___x_821_ = ((lean_object*)(l_Lake_builtinFacetCommand___closed__1));
lean_inc(v_x_797_);
v___x_822_ = l_Lean_Syntax_isOfKind(v_x_797_, v___x_821_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec(v_x_797_);
v___x_823_ = lean_box(1);
v___x_824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
lean_ctor_set(v___x_824_, 1, v_a_799_);
return v___x_824_;
}
else
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v_tk_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v_name_832_; lean_object* v___x_833_; lean_object* v_ns_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_896_; lean_object* v___x_907_; 
v___x_825_ = lean_unsigned_to_nat(0u);
v___x_826_ = l_Lean_Syntax_getArg(v_x_797_, v___x_825_);
v___x_827_ = lean_unsigned_to_nat(1u);
v_tk_828_ = l_Lean_Syntax_getArg(v_x_797_, v___x_827_);
v___x_829_ = lean_unsigned_to_nat(2u);
v___x_830_ = l_Lean_Syntax_getArg(v_x_797_, v___x_829_);
v___x_831_ = lean_unsigned_to_nat(3u);
v_name_832_ = l_Lean_Syntax_getArg(v_x_797_, v___x_831_);
v___x_833_ = lean_unsigned_to_nat(5u);
v_ns_834_ = l_Lean_Syntax_getArg(v_x_797_, v___x_833_);
v___x_835_ = lean_unsigned_to_nat(7u);
v___x_836_ = l_Lean_Syntax_getArg(v_x_797_, v___x_835_);
lean_dec(v_x_797_);
v___x_907_ = l_Lean_Syntax_getOptional_x3f(v___x_830_);
lean_dec(v___x_830_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v___x_908_; 
v___x_908_ = lean_box(0);
v___y_896_ = v___x_908_;
goto v___jp_895_;
}
else
{
lean_object* v_val_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_val_909_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_907_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_val_909_);
lean_dec(v___x_907_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_val_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
v___y_896_ = v___x_914_;
goto v___jp_895_;
}
}
}
v___jp_837_:
{
lean_object* v_methods_840_; lean_object* v_quotContext_841_; lean_object* v_currMacroScope_842_; lean_object* v_currRecDepth_843_; lean_object* v_maxRecDepth_844_; lean_object* v_ref_845_; lean_object* v___x_846_; lean_object* v_ref_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_methods_840_ = lean_ctor_get(v_a_798_, 0);
v_quotContext_841_ = lean_ctor_get(v_a_798_, 1);
v_currMacroScope_842_ = lean_ctor_get(v_a_798_, 2);
v_currRecDepth_843_ = lean_ctor_get(v_a_798_, 3);
v_maxRecDepth_844_ = lean_ctor_get(v_a_798_, 4);
v_ref_845_ = lean_ctor_get(v_a_798_, 5);
v___x_846_ = l_Lean_TSyntax_getId(v_ns_834_);
v_ref_847_ = l_Lean_replaceRef(v_tk_828_, v_ref_845_);
lean_inc(v_maxRecDepth_844_);
lean_inc(v_currRecDepth_843_);
lean_inc(v_currMacroScope_842_);
lean_inc(v_quotContext_841_);
lean_inc(v_methods_840_);
v___x_848_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_848_, 0, v_methods_840_);
lean_ctor_set(v___x_848_, 1, v_quotContext_841_);
lean_ctor_set(v___x_848_, 2, v_currMacroScope_842_);
lean_ctor_set(v___x_848_, 3, v_currRecDepth_843_);
lean_ctor_set(v___x_848_, 4, v_maxRecDepth_844_);
lean_ctor_set(v___x_848_, 5, v_ref_847_);
lean_inc(v___x_846_);
v___x_849_ = l_Lean_Macro_resolveNamespace(v___x_846_, v___x_848_, v_a_799_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
if (lean_obj_tag(v_a_850_) == 1)
{
lean_object* v_a_851_; lean_object* v_head_852_; lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; lean_object* v_fam_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v_a_851_ = lean_ctor_get(v___x_849_, 1);
lean_inc(v_a_851_);
lean_dec_ref_known(v___x_849_, 2);
v_head_852_ = lean_ctor_get(v_a_850_, 0);
lean_inc(v_head_852_);
lean_dec_ref_known(v_a_850_, 2);
v___x_853_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0));
v___x_854_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1));
v___x_855_ = 0;
v_fam_856_ = l_Lean_mkCIdentFrom(v_tk_828_, v___x_854_, v___x_855_);
v___x_857_ = l___private_Lake_Config_Kinds_0__Lake_facetKindForNamespace(v_head_852_);
lean_dec(v_head_852_);
v___x_858_ = l_Lean_Name_isAnonymous(v___x_857_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = lean_box(0);
v___x_860_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(v___x_825_, v___x_829_, v___x_820_, v_fam_856_, v___x_836_, v___x_853_, v___x_854_, v___x_855_, v___y_839_, v_name_832_, v_ns_834_, v___x_857_, v___x_822_, v_tk_828_, v___y_838_, v___x_846_, v___x_859_, v___x_848_, v_a_851_);
lean_dec_ref_known(v___x_848_, 6);
lean_dec(v___y_838_);
v___y_801_ = v___x_860_;
goto v___jp_800_;
}
else
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_861_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__2));
lean_inc(v___x_846_);
v___x_862_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_846_, v___x_858_);
v___x_863_ = lean_string_append(v___x_861_, v___x_862_);
lean_dec_ref(v___x_862_);
v___x_864_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3));
v___x_865_ = lean_string_append(v___x_863_, v___x_864_);
v___x_866_ = l_Lean_Macro_throwErrorAt___redArg(v_ns_834_, v___x_865_, v___x_848_, v_a_851_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v_a_868_; lean_object* v___x_869_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
v_a_868_ = lean_ctor_get(v___x_866_, 1);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_866_, 2);
v___x_869_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0(v___x_825_, v___x_829_, v___x_820_, v_fam_856_, v___x_836_, v___x_853_, v___x_854_, v___x_855_, v___y_839_, v_name_832_, v_ns_834_, v___x_857_, v___x_822_, v_tk_828_, v___y_838_, v___x_846_, v_a_867_, v___x_848_, v_a_868_);
lean_dec_ref_known(v___x_848_, 6);
lean_dec(v___y_838_);
v___y_801_ = v___x_869_;
goto v___jp_800_;
}
else
{
lean_object* v_a_870_; lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec(v___x_857_);
lean_dec(v_fam_856_);
lean_dec_ref_known(v___x_848_, 6);
lean_dec(v___x_846_);
lean_dec(v___y_839_);
lean_dec(v___y_838_);
lean_dec(v___x_836_);
lean_dec(v_ns_834_);
lean_dec(v_name_832_);
lean_dec(v_tk_828_);
v_a_870_ = lean_ctor_get(v___x_866_, 0);
v_a_871_ = lean_ctor_get(v___x_866_, 1);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_866_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_inc(v_a_870_);
lean_dec(v___x_866_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_870_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
lean_dec(v_a_850_);
lean_dec(v___y_839_);
lean_dec(v___y_838_);
lean_dec(v___x_836_);
lean_dec(v_name_832_);
lean_dec(v_tk_828_);
v_a_879_ = lean_ctor_get(v___x_849_, 1);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_849_, 2);
v___x_880_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__4));
v___x_881_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_846_, v___x_822_);
v___x_882_ = lean_string_append(v___x_880_, v___x_881_);
lean_dec_ref(v___x_881_);
v___x_883_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__3));
v___x_884_ = lean_string_append(v___x_882_, v___x_883_);
v___x_885_ = l_Lean_Macro_throwErrorAt___redArg(v_ns_834_, v___x_884_, v___x_848_, v_a_879_);
lean_dec_ref_known(v___x_848_, 6);
lean_dec(v_ns_834_);
v___y_801_ = v___x_885_;
goto v___jp_800_;
}
}
else
{
lean_object* v_a_886_; lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
lean_dec_ref_known(v___x_848_, 6);
lean_dec(v___x_846_);
lean_dec(v___y_839_);
lean_dec(v___y_838_);
lean_dec(v___x_836_);
lean_dec(v_ns_834_);
lean_dec(v_name_832_);
lean_dec(v_tk_828_);
v_a_886_ = lean_ctor_get(v___x_849_, 0);
v_a_887_ = lean_ctor_get(v___x_849_, 1);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_849_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_inc(v_a_886_);
lean_dec(v___x_849_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_892_; 
if (v_isShared_890_ == 0)
{
v___x_892_ = v___x_889_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_886_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_a_887_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
v___jp_895_:
{
lean_object* v___x_897_; 
v___x_897_ = l_Lean_Syntax_getOptional_x3f(v___x_826_);
lean_dec(v___x_826_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v___x_898_; 
v___x_898_ = lean_box(0);
v___y_838_ = v___y_896_;
v___y_839_ = v___x_898_;
goto v___jp_837_;
}
else
{
lean_object* v_val_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
v_val_899_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_897_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_val_899_);
lean_dec(v___x_897_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_val_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
v___y_838_ = v___y_896_;
v___y_839_ = v___x_904_;
goto v___jp_837_;
}
}
}
}
}
v___jp_800_:
{
if (lean_obj_tag(v___y_801_) == 0)
{
lean_object* v_a_802_; lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
v_a_802_ = lean_ctor_get(v___y_801_, 0);
v_a_803_ = lean_ctor_get(v___y_801_, 1);
v_isSharedCheck_810_ = !lean_is_exclusive(v___y_801_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___y_801_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_inc(v_a_802_);
lean_dec(v___y_801_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_808_; 
if (v_isShared_806_ == 0)
{
v___x_808_ = v___x_805_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_802_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v_a_803_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
else
{
lean_object* v_a_811_; lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
v_a_811_ = lean_ctor_get(v___y_801_, 0);
v_a_812_ = lean_ctor_get(v___y_801_, 1);
v_isSharedCheck_819_ = !lean_is_exclusive(v___y_801_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___y_801_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_inc(v_a_811_);
lean_dec(v___y_801_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_811_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___boxed(lean_object* v_x_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1(v_x_917_, v_a_918_, v_a_919_);
lean_dec_ref(v_a_918_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1(lean_object* v_x_996_, lean_object* v_a_997_, lean_object* v_a_998_){
_start:
{
lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_999_ = ((lean_object*)(l_Lake_facetDataDecl___closed__1));
lean_inc(v_x_996_);
v___x_1000_ = l_Lean_Syntax_isOfKind(v_x_996_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
lean_dec(v_x_996_);
v___x_1001_ = lean_box(1);
v___x_1002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set(v___x_1002_, 1, v_a_998_);
return v___x_1002_;
}
else
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v_tk_1006_; lean_object* v___x_1007_; lean_object* v_kind_1008_; lean_object* v___x_1009_; lean_object* v_name_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1105_; lean_object* v___x_1128_; 
v___x_1003_ = lean_unsigned_to_nat(0u);
v___x_1004_ = l_Lean_Syntax_getArg(v_x_996_, v___x_1003_);
v___x_1005_ = lean_unsigned_to_nat(1u);
v_tk_1006_ = l_Lean_Syntax_getArg(v_x_996_, v___x_1005_);
v___x_1007_ = lean_unsigned_to_nat(2u);
v_kind_1008_ = l_Lean_Syntax_getArg(v_x_996_, v___x_1007_);
v___x_1009_ = lean_unsigned_to_nat(3u);
v_name_1010_ = l_Lean_Syntax_getArg(v_x_996_, v___x_1009_);
v___x_1011_ = lean_unsigned_to_nat(5u);
v___x_1012_ = l_Lean_Syntax_getArg(v_x_996_, v___x_1011_);
lean_dec(v_x_996_);
v___x_1128_ = l_Lean_Syntax_getOptional_x3f(v___x_1004_);
lean_dec(v___x_1004_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_box(0);
v___y_1105_ = v___x_1129_;
goto v___jp_1104_;
}
else
{
lean_object* v_val_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
v_val_1130_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1128_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_val_1130_);
lean_dec(v___x_1128_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_val_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
v___y_1105_ = v___x_1135_;
goto v___jp_1104_;
}
}
}
v___jp_1013_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
lean_inc_ref_n(v___y_1021_, 2);
v___x_1028_ = l_Array_append___redArg(v___y_1021_, v___y_1027_);
lean_dec_ref(v___y_1027_);
lean_inc_n(v___y_1026_, 6);
lean_inc_n(v___y_1014_, 35);
v___x_1029_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1029_, 0, v___y_1014_);
lean_ctor_set(v___x_1029_, 1, v___y_1026_);
lean_ctor_set(v___x_1029_, 2, v___x_1028_);
v___x_1030_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0));
v___x_1031_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___y_1014_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
v___x_1032_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
v___x_1033_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___y_1014_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
v___x_1034_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2));
v___x_1035_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___y_1014_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
lean_inc_n(v___x_1012_, 2);
lean_inc_ref(v___x_1035_);
lean_inc(v___y_1018_);
lean_inc_ref(v___x_1033_);
lean_inc(v___y_1020_);
v___x_1036_ = l_Lean_Syntax_node8(v___y_1014_, v___y_1020_, v___x_1029_, v___x_1031_, v___y_1023_, v___x_1033_, v___y_1015_, v___y_1018_, v___x_1035_, v___x_1012_);
v___x_1037_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__7));
v___x_1038_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__9));
v___x_1039_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1039_, 0, v___y_1014_);
lean_ctor_set(v___x_1039_, 1, v___y_1026_);
lean_ctor_set(v___x_1039_, 2, v___y_1021_);
v___x_1040_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__10));
v___x_1041_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__11));
v___x_1042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___y_1014_);
lean_ctor_set(v___x_1042_, 1, v___x_1040_);
v___x_1043_ = l_Lean_Syntax_node1(v___y_1014_, v___x_1041_, v___x_1042_);
v___x_1044_ = l_Lean_Syntax_node1(v___y_1014_, v___y_1026_, v___x_1043_);
lean_inc_ref_n(v___x_1039_, 12);
v___x_1045_ = l_Lean_Syntax_node7(v___y_1014_, v___x_1038_, v___x_1039_, v___x_1039_, v___x_1044_, v___x_1039_, v___x_1039_, v___x_1039_, v___x_1039_);
v___x_1046_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__12));
v___x_1047_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__13));
v___x_1048_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__16));
v___x_1049_ = l_Lean_Syntax_node1(v___y_1014_, v___x_1048_, v___x_1039_);
v___x_1050_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___y_1014_);
lean_ctor_set(v___x_1050_, 1, v___x_1046_);
v___x_1051_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__18));
v___x_1052_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__20));
v___x_1053_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__22));
v___x_1054_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__16);
v___x_1055_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__17));
lean_inc_n(v___y_1017_, 3);
lean_inc_n(v___y_1022_, 3);
v___x_1056_ = l_Lean_addMacroScope(v___y_1022_, v___x_1055_, v___y_1017_);
v___x_1057_ = lean_box(0);
v___x_1058_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__4));
v___x_1059_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1059_, 0, v___y_1014_);
lean_ctor_set(v___x_1059_, 1, v___x_1054_);
lean_ctor_set(v___x_1059_, 2, v___x_1056_);
lean_ctor_set(v___x_1059_, 3, v___x_1058_);
lean_inc_ref_n(v___y_1024_, 2);
v___x_1060_ = l_String_toRawSubstring_x27(v___y_1024_);
v___x_1061_ = l_Lean_Name_mkStr1(v___y_1024_);
v___x_1062_ = l_Lean_addMacroScope(v___y_1022_, v___x_1061_, v___y_1017_);
v___x_1063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___y_1016_);
lean_ctor_set(v___x_1063_, 1, v___x_1057_);
v___x_1064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
lean_ctor_set(v___x_1064_, 1, v___x_1057_);
v___x_1065_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1065_, 0, v___y_1014_);
lean_ctor_set(v___x_1065_, 1, v___x_1060_);
lean_ctor_set(v___x_1065_, 2, v___x_1062_);
lean_ctor_set(v___x_1065_, 3, v___x_1064_);
v___x_1066_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__5));
v___x_1067_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6));
v___x_1068_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20));
v___x_1069_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___y_1014_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22));
v___x_1071_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24);
v___x_1072_ = lean_obj_once(&l_Lake_OptDataKind_anonymous___redArg___closed__0, &l_Lake_OptDataKind_anonymous___redArg___closed__0_once, _init_l_Lake_OptDataKind_anonymous___redArg___closed__0);
v___x_1073_ = l_Lean_addMacroScope(v___y_1022_, v___x_1072_, v___y_1017_);
v___x_1074_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__12));
v___x_1075_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1075_, 0, v___y_1014_);
lean_ctor_set(v___x_1075_, 1, v___x_1071_);
lean_ctor_set(v___x_1075_, 2, v___x_1073_);
lean_ctor_set(v___x_1075_, 3, v___x_1074_);
v___x_1076_ = l_Lean_Syntax_node1(v___y_1014_, v___x_1070_, v___x_1075_);
v___x_1077_ = l_Lean_Syntax_node2(v___y_1014_, v___x_1067_, v___x_1069_, v___x_1076_);
v___x_1078_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__26));
v___x_1079_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__27));
v___x_1080_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___y_1014_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = l_Lean_Syntax_node3(v___y_1014_, v___x_1078_, v___y_1025_, v___x_1080_, v___y_1019_);
v___x_1082_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28));
v___x_1083_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___y_1014_);
lean_ctor_set(v___x_1083_, 1, v___x_1082_);
lean_inc_ref(v___x_1083_);
lean_inc(v___x_1077_);
v___x_1084_ = l_Lean_Syntax_node3(v___y_1014_, v___x_1066_, v___x_1077_, v___x_1081_, v___x_1083_);
lean_inc_ref(v___x_1065_);
v___x_1085_ = l_Lean_Syntax_node3(v___y_1014_, v___y_1026_, v___x_1065_, v___x_1084_, v___x_1012_);
lean_inc_ref(v___x_1059_);
v___x_1086_ = l_Lean_Syntax_node2(v___y_1014_, v___x_1053_, v___x_1059_, v___x_1085_);
v___x_1087_ = l_Lean_Syntax_node2(v___y_1014_, v___x_1052_, v___x_1033_, v___x_1086_);
v___x_1088_ = l_Lean_Syntax_node2(v___y_1014_, v___x_1051_, v___x_1039_, v___x_1087_);
v___x_1089_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__32));
v___x_1090_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__29));
v___x_1091_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__13));
v___x_1092_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___y_1014_);
lean_ctor_set(v___x_1092_, 1, v___x_1090_);
v___x_1093_ = l_Lean_Syntax_node3(v___y_1014_, v___y_1026_, v___x_1065_, v___y_1018_, v___x_1012_);
v___x_1094_ = l_Lean_Syntax_node2(v___y_1014_, v___x_1053_, v___x_1059_, v___x_1093_);
v___x_1095_ = l_Lean_Syntax_node3(v___y_1014_, v___x_1066_, v___x_1077_, v___x_1094_, v___x_1083_);
v___x_1096_ = l_Lean_Syntax_node2(v___y_1014_, v___x_1091_, v___x_1092_, v___x_1095_);
v___x_1097_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__64));
v___x_1098_ = l_Lean_Syntax_node2(v___y_1014_, v___x_1097_, v___x_1039_, v___x_1039_);
v___x_1099_ = l_Lean_Syntax_node4(v___y_1014_, v___x_1089_, v___x_1035_, v___x_1096_, v___x_1098_, v___x_1039_);
v___x_1100_ = l_Lean_Syntax_node6(v___y_1014_, v___x_1047_, v___x_1049_, v___x_1050_, v___x_1039_, v___x_1039_, v___x_1088_, v___x_1099_);
v___x_1101_ = l_Lean_Syntax_node2(v___y_1014_, v___x_1037_, v___x_1045_, v___x_1100_);
v___x_1102_ = l_Lean_Syntax_node2(v___y_1014_, v___y_1026_, v___x_1036_, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
lean_ctor_set(v___x_1103_, 1, v_a_998_);
return v___x_1103_;
}
v___jp_1104_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; uint8_t v___x_1108_; lean_object* v_fam_1109_; lean_object* v___x_1110_; lean_object* v_kindLit_1111_; lean_object* v___x_1112_; lean_object* v_nameLit_1113_; lean_object* v_quotContext_1114_; lean_object* v_currMacroScope_1115_; lean_object* v_ref_1116_; lean_object* v_facet_1117_; lean_object* v_facetLit_1118_; lean_object* v_id_1119_; lean_object* v_ref_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1106_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__0));
v___x_1107_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___closed__1));
v___x_1108_ = 0;
v_fam_1109_ = l_Lean_mkCIdentFrom(v_tk_1006_, v___x_1107_, v___x_1108_);
v___x_1110_ = l_Lean_TSyntax_getId(v_kind_1008_);
lean_inc(v___x_1110_);
v_kindLit_1111_ = l_Lake_Name_quoteFrom(v_kind_1008_, v___x_1110_, v___x_1108_);
v___x_1112_ = l_Lean_TSyntax_getId(v_name_1010_);
lean_inc(v___x_1112_);
v_nameLit_1113_ = l_Lake_Name_quoteFrom(v_name_1010_, v___x_1112_, v___x_1108_);
v_quotContext_1114_ = lean_ctor_get(v_a_997_, 1);
v_currMacroScope_1115_ = lean_ctor_get(v_a_997_, 2);
v_ref_1116_ = lean_ctor_get(v_a_997_, 5);
v_facet_1117_ = l_Lean_Name_append(v___x_1110_, v___x_1112_);
lean_inc(v_facet_1117_);
lean_inc(v_tk_1006_);
v_facetLit_1118_ = l_Lake_Name_quoteFrom(v_tk_1006_, v_facet_1117_, v___x_1108_);
v_id_1119_ = l_Lean_mkIdentFrom(v_tk_1006_, v_facet_1117_, v___x_1000_);
v_ref_1120_ = l_Lean_replaceRef(v_tk_1006_, v_ref_1116_);
lean_dec(v_tk_1006_);
v___x_1121_ = l_Lean_SourceInfo_fromRef(v_ref_1120_, v___x_1108_);
lean_dec(v_ref_1120_);
v___x_1122_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1123_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70));
v___x_1124_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1105_) == 1)
{
lean_object* v_val_1125_; lean_object* v___x_1126_; 
v_val_1125_ = lean_ctor_get(v___y_1105_, 0);
lean_inc(v_val_1125_);
lean_dec_ref_known(v___y_1105_, 1);
v___x_1126_ = l_Array_mkArray1___redArg(v_val_1125_);
v___y_1014_ = v___x_1121_;
v___y_1015_ = v_fam_1109_;
v___y_1016_ = v___x_1107_;
v___y_1017_ = v_currMacroScope_1115_;
v___y_1018_ = v_facetLit_1118_;
v___y_1019_ = v_nameLit_1113_;
v___y_1020_ = v___x_1123_;
v___y_1021_ = v___x_1124_;
v___y_1022_ = v_quotContext_1114_;
v___y_1023_ = v_id_1119_;
v___y_1024_ = v___x_1106_;
v___y_1025_ = v_kindLit_1111_;
v___y_1026_ = v___x_1122_;
v___y_1027_ = v___x_1126_;
goto v___jp_1013_;
}
else
{
lean_object* v___x_1127_; 
lean_dec(v___y_1105_);
v___x_1127_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1014_ = v___x_1121_;
v___y_1015_ = v_fam_1109_;
v___y_1016_ = v___x_1107_;
v___y_1017_ = v_currMacroScope_1115_;
v___y_1018_ = v_facetLit_1118_;
v___y_1019_ = v_nameLit_1113_;
v___y_1020_ = v___x_1123_;
v___y_1021_ = v___x_1124_;
v___y_1022_ = v_quotContext_1114_;
v___y_1023_ = v_id_1119_;
v___y_1024_ = v___x_1106_;
v___y_1025_ = v_kindLit_1111_;
v___y_1026_ = v___x_1122_;
v___y_1027_ = v___x_1127_;
goto v___jp_1013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___boxed(lean_object* v_x_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1(v_x_1138_, v_a_1139_, v_a_1140_);
lean_dec_ref(v_a_1139_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1(lean_object* v_x_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v___x_1174_; uint8_t v___x_1175_; 
v___x_1174_ = ((lean_object*)(l_Lake_packageDataDecl___closed__1));
lean_inc(v_x_1171_);
v___x_1175_ = l_Lean_Syntax_isOfKind(v_x_1171_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
lean_dec(v_x_1171_);
v___x_1176_ = lean_box(1);
v___x_1177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v_a_1173_);
return v___x_1177_;
}
else
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v_tk_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; uint8_t v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; lean_object* v___y_1205_; lean_object* v___x_1215_; 
v___x_1178_ = lean_unsigned_to_nat(0u);
v___x_1179_ = l_Lean_Syntax_getArg(v_x_1171_, v___x_1178_);
v___x_1180_ = lean_unsigned_to_nat(1u);
v_tk_1181_ = l_Lean_Syntax_getArg(v_x_1171_, v___x_1180_);
v___x_1182_ = lean_unsigned_to_nat(2u);
v___x_1183_ = l_Lean_Syntax_getArg(v_x_1171_, v___x_1182_);
v___x_1184_ = lean_unsigned_to_nat(4u);
v___x_1185_ = l_Lean_Syntax_getArg(v_x_1171_, v___x_1184_);
lean_dec(v_x_1171_);
v___x_1215_ = l_Lean_Syntax_getOptional_x3f(v___x_1179_);
lean_dec(v___x_1179_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v___x_1216_; 
v___x_1216_ = lean_box(0);
v___y_1205_ = v___x_1216_;
goto v___jp_1204_;
}
else
{
lean_object* v_val_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_val_1217_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1215_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_val_1217_);
lean_dec(v___x_1215_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_val_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
v___y_1205_ = v___x_1222_;
goto v___jp_1204_;
}
}
}
v___jp_1186_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_inc_ref(v___y_1191_);
v___x_1193_ = l_Array_append___redArg(v___y_1191_, v___y_1192_);
lean_dec_ref(v___y_1192_);
lean_inc(v___y_1187_);
lean_inc_n(v___y_1189_, 2);
v___x_1194_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1194_, 0, v___y_1189_);
lean_ctor_set(v___x_1194_, 1, v___y_1187_);
lean_ctor_set(v___x_1194_, 2, v___x_1193_);
v___x_1195_ = l_Lean_SourceInfo_fromRef(v_tk_1181_, v___x_1175_);
v___x_1196_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0));
v___x_1197_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1195_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = l_Lake_Package_keyword;
v___x_1199_ = l_Lean_mkIdentFrom(v_tk_1181_, v___x_1198_, v___y_1190_);
lean_dec(v_tk_1181_);
v___x_1200_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
v___x_1201_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___y_1189_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
lean_inc(v___y_1188_);
v___x_1202_ = l_Lean_Syntax_node6(v___y_1189_, v___y_1188_, v___x_1194_, v___x_1197_, v___x_1199_, v___x_1183_, v___x_1201_, v___x_1185_);
v___x_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
lean_ctor_set(v___x_1203_, 1, v_a_1173_);
return v___x_1203_;
}
v___jp_1204_:
{
lean_object* v_ref_1206_; uint8_t v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_ref_1206_ = lean_ctor_get(v_a_1172_, 5);
v___x_1207_ = 0;
v___x_1208_ = l_Lean_SourceInfo_fromRef(v_ref_1206_, v___x_1207_);
v___x_1209_ = ((lean_object*)(l_Lake_facetDataDecl___closed__1));
v___x_1210_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1211_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1205_) == 1)
{
lean_object* v_val_1212_; lean_object* v___x_1213_; 
v_val_1212_ = lean_ctor_get(v___y_1205_, 0);
lean_inc(v_val_1212_);
lean_dec_ref_known(v___y_1205_, 1);
v___x_1213_ = l_Array_mkArray1___redArg(v_val_1212_);
v___y_1187_ = v___x_1210_;
v___y_1188_ = v___x_1209_;
v___y_1189_ = v___x_1208_;
v___y_1190_ = v___x_1207_;
v___y_1191_ = v___x_1211_;
v___y_1192_ = v___x_1213_;
goto v___jp_1186_;
}
else
{
lean_object* v___x_1214_; 
lean_dec(v___y_1205_);
v___x_1214_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1187_ = v___x_1210_;
v___y_1188_ = v___x_1209_;
v___y_1189_ = v___x_1208_;
v___y_1190_ = v___x_1207_;
v___y_1191_ = v___x_1211_;
v___y_1192_ = v___x_1214_;
goto v___jp_1186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___boxed(lean_object* v_x_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1(v_x_1225_, v_a_1226_, v_a_1227_);
lean_dec_ref(v_a_1226_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1(lean_object* v_x_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v___x_1260_; uint8_t v___x_1261_; 
v___x_1260_ = ((lean_object*)(l_Lake_moduleDataDecl___closed__1));
lean_inc(v_x_1257_);
v___x_1261_ = l_Lean_Syntax_isOfKind(v_x_1257_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec(v_x_1257_);
v___x_1262_ = lean_box(1);
v___x_1263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
lean_ctor_set(v___x_1263_, 1, v_a_1259_);
return v___x_1263_;
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v_tk_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___y_1273_; lean_object* v___y_1274_; uint8_t v___y_1275_; lean_object* v___y_1276_; lean_object* v___y_1277_; lean_object* v___y_1278_; lean_object* v___y_1291_; lean_object* v___x_1301_; 
v___x_1264_ = lean_unsigned_to_nat(0u);
v___x_1265_ = l_Lean_Syntax_getArg(v_x_1257_, v___x_1264_);
v___x_1266_ = lean_unsigned_to_nat(1u);
v_tk_1267_ = l_Lean_Syntax_getArg(v_x_1257_, v___x_1266_);
v___x_1268_ = lean_unsigned_to_nat(2u);
v___x_1269_ = l_Lean_Syntax_getArg(v_x_1257_, v___x_1268_);
v___x_1270_ = lean_unsigned_to_nat(4u);
v___x_1271_ = l_Lean_Syntax_getArg(v_x_1257_, v___x_1270_);
lean_dec(v_x_1257_);
v___x_1301_ = l_Lean_Syntax_getOptional_x3f(v___x_1265_);
lean_dec(v___x_1265_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v___x_1302_; 
v___x_1302_ = lean_box(0);
v___y_1291_ = v___x_1302_;
goto v___jp_1290_;
}
else
{
lean_object* v_val_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
v_val_1303_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1301_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_val_1303_);
lean_dec(v___x_1301_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_val_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
v___y_1291_ = v___x_1308_;
goto v___jp_1290_;
}
}
}
v___jp_1272_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
lean_inc_ref(v___y_1276_);
v___x_1279_ = l_Array_append___redArg(v___y_1276_, v___y_1278_);
lean_dec_ref(v___y_1278_);
lean_inc(v___y_1274_);
lean_inc_n(v___y_1277_, 2);
v___x_1280_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1280_, 0, v___y_1277_);
lean_ctor_set(v___x_1280_, 1, v___y_1274_);
lean_ctor_set(v___x_1280_, 2, v___x_1279_);
v___x_1281_ = l_Lean_SourceInfo_fromRef(v_tk_1267_, v___x_1261_);
v___x_1282_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0));
v___x_1283_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = l_Lake_Module_keyword;
v___x_1285_ = l_Lean_mkIdentFrom(v_tk_1267_, v___x_1284_, v___y_1275_);
lean_dec(v_tk_1267_);
v___x_1286_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
v___x_1287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___y_1277_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
lean_inc(v___y_1273_);
v___x_1288_ = l_Lean_Syntax_node6(v___y_1277_, v___y_1273_, v___x_1280_, v___x_1283_, v___x_1285_, v___x_1269_, v___x_1287_, v___x_1271_);
v___x_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v_a_1259_);
return v___x_1289_;
}
v___jp_1290_:
{
lean_object* v_ref_1292_; uint8_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v_ref_1292_ = lean_ctor_get(v_a_1258_, 5);
v___x_1293_ = 0;
v___x_1294_ = l_Lean_SourceInfo_fromRef(v_ref_1292_, v___x_1293_);
v___x_1295_ = ((lean_object*)(l_Lake_facetDataDecl___closed__1));
v___x_1296_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1297_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1291_) == 1)
{
lean_object* v_val_1298_; lean_object* v___x_1299_; 
v_val_1298_ = lean_ctor_get(v___y_1291_, 0);
lean_inc(v_val_1298_);
lean_dec_ref_known(v___y_1291_, 1);
v___x_1299_ = l_Array_mkArray1___redArg(v_val_1298_);
v___y_1273_ = v___x_1295_;
v___y_1274_ = v___x_1296_;
v___y_1275_ = v___x_1293_;
v___y_1276_ = v___x_1297_;
v___y_1277_ = v___x_1294_;
v___y_1278_ = v___x_1299_;
goto v___jp_1272_;
}
else
{
lean_object* v___x_1300_; 
lean_dec(v___y_1291_);
v___x_1300_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1273_ = v___x_1295_;
v___y_1274_ = v___x_1296_;
v___y_1275_ = v___x_1293_;
v___y_1276_ = v___x_1297_;
v___y_1277_ = v___x_1294_;
v___y_1278_ = v___x_1300_;
goto v___jp_1272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1___boxed(lean_object* v_x_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__moduleDataDecl__1(v_x_1311_, v_a_1312_, v_a_1313_);
lean_dec_ref(v_a_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1(lean_object* v_x_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_){
_start:
{
lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = ((lean_object*)(l_Lake_libraryDataDecl___closed__1));
lean_inc(v_x_1346_);
v___x_1350_ = l_Lean_Syntax_isOfKind(v_x_1346_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec(v_x_1346_);
v___x_1351_ = lean_box(1);
v___x_1352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
lean_ctor_set(v___x_1352_, 1, v_a_1348_);
return v___x_1352_;
}
else
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v_tk_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1365_; uint8_t v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1380_; lean_object* v___x_1390_; 
v___x_1353_ = lean_unsigned_to_nat(0u);
v___x_1354_ = l_Lean_Syntax_getArg(v_x_1346_, v___x_1353_);
v___x_1355_ = lean_unsigned_to_nat(1u);
v_tk_1356_ = l_Lean_Syntax_getArg(v_x_1346_, v___x_1355_);
v___x_1357_ = lean_unsigned_to_nat(2u);
v___x_1358_ = l_Lean_Syntax_getArg(v_x_1346_, v___x_1357_);
v___x_1359_ = lean_unsigned_to_nat(4u);
v___x_1360_ = l_Lean_Syntax_getArg(v_x_1346_, v___x_1359_);
lean_dec(v_x_1346_);
v___x_1390_ = l_Lean_Syntax_getOptional_x3f(v___x_1354_);
lean_dec(v___x_1354_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_box(0);
v___y_1380_ = v___x_1391_;
goto v___jp_1379_;
}
else
{
lean_object* v_val_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1399_; 
v_val_1392_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1399_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1399_ == 0)
{
v___x_1394_ = v___x_1390_;
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_val_1392_);
lean_dec(v___x_1390_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1397_; 
if (v_isShared_1395_ == 0)
{
v___x_1397_ = v___x_1394_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_val_1392_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
v___y_1380_ = v___x_1397_;
goto v___jp_1379_;
}
}
}
v___jp_1361_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_inc_ref(v___y_1364_);
v___x_1368_ = l_Array_append___redArg(v___y_1364_, v___y_1367_);
lean_dec_ref(v___y_1367_);
lean_inc(v___y_1365_);
lean_inc_n(v___y_1362_, 2);
v___x_1369_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1369_, 0, v___y_1362_);
lean_ctor_set(v___x_1369_, 1, v___y_1365_);
lean_ctor_set(v___x_1369_, 2, v___x_1368_);
v___x_1370_ = l_Lean_SourceInfo_fromRef(v_tk_1356_, v___x_1350_);
v___x_1371_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__packageDataDecl__1___closed__0));
v___x_1372_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1370_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1373_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___closed__1));
v___x_1374_ = l_Lean_mkIdentFrom(v_tk_1356_, v___x_1373_, v___y_1366_);
lean_dec(v_tk_1356_);
v___x_1375_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
v___x_1376_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___y_1362_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
lean_inc(v___y_1363_);
v___x_1377_ = l_Lean_Syntax_node6(v___y_1362_, v___y_1363_, v___x_1369_, v___x_1372_, v___x_1374_, v___x_1358_, v___x_1376_, v___x_1360_);
v___x_1378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
lean_ctor_set(v___x_1378_, 1, v_a_1348_);
return v___x_1378_;
}
v___jp_1379_:
{
lean_object* v_ref_1381_; uint8_t v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v_ref_1381_ = lean_ctor_get(v_a_1347_, 5);
v___x_1382_ = 0;
v___x_1383_ = l_Lean_SourceInfo_fromRef(v_ref_1381_, v___x_1382_);
v___x_1384_ = ((lean_object*)(l_Lake_facetDataDecl___closed__1));
v___x_1385_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1386_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1380_) == 1)
{
lean_object* v_val_1387_; lean_object* v___x_1388_; 
v_val_1387_ = lean_ctor_get(v___y_1380_, 0);
lean_inc(v_val_1387_);
lean_dec_ref_known(v___y_1380_, 1);
v___x_1388_ = l_Array_mkArray1___redArg(v_val_1387_);
v___y_1362_ = v___x_1383_;
v___y_1363_ = v___x_1384_;
v___y_1364_ = v___x_1386_;
v___y_1365_ = v___x_1385_;
v___y_1366_ = v___x_1382_;
v___y_1367_ = v___x_1388_;
goto v___jp_1361_;
}
else
{
lean_object* v___x_1389_; 
lean_dec(v___y_1380_);
v___x_1389_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1362_ = v___x_1383_;
v___y_1363_ = v___x_1384_;
v___y_1364_ = v___x_1386_;
v___y_1365_ = v___x_1385_;
v___y_1366_ = v___x_1382_;
v___y_1367_ = v___x_1389_;
goto v___jp_1361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1___boxed(lean_object* v_x_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__libraryDataDecl__1(v_x_1400_, v_a_1401_, v_a_1402_);
lean_dec_ref(v_a_1401_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1(lean_object* v_x_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_){
_start:
{
lean_object* v___x_1455_; uint8_t v___x_1456_; 
v___x_1455_ = ((lean_object*)(l_Lake_customDataDecl___closed__1));
lean_inc(v_x_1452_);
v___x_1456_ = l_Lean_Syntax_isOfKind(v_x_1452_, v___x_1455_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
lean_dec(v_x_1452_);
v___x_1457_ = lean_box(1);
v___x_1458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
lean_ctor_set(v___x_1458_, 1, v_a_1454_);
return v___x_1458_;
}
else
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v_tk_1462_; lean_object* v___x_1463_; lean_object* v_pkg_1464_; lean_object* v___x_1465_; lean_object* v_tgt_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1511_; lean_object* v___x_1532_; 
v___x_1459_ = lean_unsigned_to_nat(0u);
v___x_1460_ = l_Lean_Syntax_getArg(v_x_1452_, v___x_1459_);
v___x_1461_ = lean_unsigned_to_nat(1u);
v_tk_1462_ = l_Lean_Syntax_getArg(v_x_1452_, v___x_1461_);
v___x_1463_ = lean_unsigned_to_nat(2u);
v_pkg_1464_ = l_Lean_Syntax_getArg(v_x_1452_, v___x_1463_);
v___x_1465_ = lean_unsigned_to_nat(3u);
v_tgt_1466_ = l_Lean_Syntax_getArg(v_x_1452_, v___x_1465_);
v___x_1467_ = lean_unsigned_to_nat(5u);
v___x_1468_ = l_Lean_Syntax_getArg(v_x_1452_, v___x_1467_);
lean_dec(v_x_1452_);
v___x_1532_ = l_Lean_Syntax_getOptional_x3f(v___x_1460_);
lean_dec(v___x_1460_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v___x_1533_; 
v___x_1533_ = lean_box(0);
v___y_1511_ = v___x_1533_;
goto v___jp_1510_;
}
else
{
lean_object* v_val_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
v_val_1534_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1532_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_val_1534_);
lean_dec(v___x_1532_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_val_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
v___y_1511_ = v___x_1539_;
goto v___jp_1510_;
}
}
}
v___jp_1469_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
lean_inc_ref(v___y_1478_);
v___x_1481_ = l_Array_append___redArg(v___y_1478_, v___y_1480_);
lean_dec_ref(v___y_1480_);
lean_inc_n(v___y_1475_, 3);
lean_inc_n(v___y_1476_, 13);
v___x_1482_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1482_, 0, v___y_1476_);
lean_ctor_set(v___x_1482_, 1, v___y_1475_);
lean_ctor_set(v___x_1482_, 2, v___x_1481_);
v___x_1483_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__0));
v___x_1484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___y_1476_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v___x_1485_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__1));
v___x_1486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___y_1476_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
v___x_1487_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__1));
v___x_1488_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__facetDataDecl__1___closed__6));
v___x_1489_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__20));
v___x_1490_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___y_1476_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
v___x_1491_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__22));
v___x_1492_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__24);
v___x_1493_ = lean_obj_once(&l_Lake_OptDataKind_anonymous___redArg___closed__0, &l_Lake_OptDataKind_anonymous___redArg___closed__0_once, _init_l_Lake_OptDataKind_anonymous___redArg___closed__0);
lean_inc(v___y_1473_);
lean_inc(v___y_1472_);
v___x_1494_ = l_Lean_addMacroScope(v___y_1472_, v___x_1493_, v___y_1473_);
v___x_1495_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__3));
v___x_1496_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1496_, 0, v___y_1476_);
lean_ctor_set(v___x_1496_, 1, v___x_1492_);
lean_ctor_set(v___x_1496_, 2, v___x_1494_);
lean_ctor_set(v___x_1496_, 3, v___x_1495_);
v___x_1497_ = l_Lean_Syntax_node1(v___y_1476_, v___x_1491_, v___x_1496_);
v___x_1498_ = l_Lean_Syntax_node2(v___y_1476_, v___x_1488_, v___x_1490_, v___x_1497_);
v___x_1499_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__36));
v___x_1500_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___y_1476_);
lean_ctor_set(v___x_1500_, 1, v___x_1499_);
v___x_1501_ = l_Lean_Syntax_node1(v___y_1476_, v___y_1475_, v___y_1477_);
v___x_1502_ = l_Lean_Syntax_node3(v___y_1476_, v___y_1475_, v___y_1479_, v___x_1500_, v___x_1501_);
v___x_1503_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__builtinFacetCommand__1___lam__0___closed__28));
v___x_1504_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___y_1476_);
lean_ctor_set(v___x_1504_, 1, v___x_1503_);
v___x_1505_ = l_Lean_Syntax_node3(v___y_1476_, v___x_1487_, v___x_1498_, v___x_1502_, v___x_1504_);
v___x_1506_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__2));
v___x_1507_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___y_1476_);
lean_ctor_set(v___x_1507_, 1, v___x_1506_);
lean_inc(v___y_1471_);
v___x_1508_ = l_Lean_Syntax_node8(v___y_1476_, v___y_1471_, v___x_1482_, v___x_1484_, v___y_1470_, v___x_1486_, v___y_1474_, v___x_1505_, v___x_1507_, v___x_1468_);
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
lean_ctor_set(v___x_1509_, 1, v_a_1454_);
return v___x_1509_;
}
v___jp_1510_:
{
lean_object* v_quotContext_1512_; lean_object* v_currMacroScope_1513_; lean_object* v_ref_1514_; lean_object* v_ref_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_quotContext_1512_ = lean_ctor_get(v_a_1453_, 1);
v_currMacroScope_1513_ = lean_ctor_get(v_a_1453_, 2);
v_ref_1514_ = lean_ctor_get(v_a_1453_, 5);
v_ref_1515_ = l_Lean_replaceRef(v_tk_1462_, v_ref_1514_);
lean_dec(v_tk_1462_);
v___x_1516_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___closed__5));
v___x_1517_ = 0;
v___x_1518_ = l_Lean_mkCIdentFrom(v_ref_1515_, v___x_1516_, v___x_1517_);
v___x_1519_ = l_Lean_TSyntax_getId(v_pkg_1464_);
v___x_1520_ = l_Lean_TSyntax_getId(v_tgt_1466_);
lean_inc(v___x_1520_);
lean_inc(v___x_1519_);
v___x_1521_ = l_Lean_Name_append(v___x_1519_, v___x_1520_);
v___x_1522_ = l_Lean_mkIdentFrom(v_tgt_1466_, v___x_1521_, v___x_1517_);
lean_dec(v_tgt_1466_);
v___x_1523_ = l_Lake_Name_quoteFrom(v_pkg_1464_, v___x_1519_, v___x_1517_);
lean_inc(v___x_1523_);
v___x_1524_ = l_Lake_Name_quoteFrom(v___x_1523_, v___x_1520_, v___x_1517_);
v___x_1525_ = l_Lean_SourceInfo_fromRef(v_ref_1515_, v___x_1517_);
lean_dec(v_ref_1515_);
v___x_1526_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__70));
v___x_1527_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__68));
v___x_1528_ = lean_obj_once(&l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71, &l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71_once, _init_l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__71);
if (lean_obj_tag(v___y_1511_) == 1)
{
lean_object* v_val_1529_; lean_object* v___x_1530_; 
v_val_1529_ = lean_ctor_get(v___y_1511_, 0);
lean_inc(v_val_1529_);
lean_dec_ref_known(v___y_1511_, 1);
v___x_1530_ = l_Array_mkArray1___redArg(v_val_1529_);
v___y_1470_ = v___x_1522_;
v___y_1471_ = v___x_1526_;
v___y_1472_ = v_quotContext_1512_;
v___y_1473_ = v_currMacroScope_1513_;
v___y_1474_ = v___x_1518_;
v___y_1475_ = v___x_1527_;
v___y_1476_ = v___x_1525_;
v___y_1477_ = v___x_1524_;
v___y_1478_ = v___x_1528_;
v___y_1479_ = v___x_1523_;
v___y_1480_ = v___x_1530_;
goto v___jp_1469_;
}
else
{
lean_object* v___x_1531_; 
lean_dec(v___y_1511_);
v___x_1531_ = ((lean_object*)(l_Lake___aux__Lake__Build__Data______macroRules__Lake__dataTypeDecl__1___closed__72));
v___y_1470_ = v___x_1522_;
v___y_1471_ = v___x_1526_;
v___y_1472_ = v_quotContext_1512_;
v___y_1473_ = v_currMacroScope_1513_;
v___y_1474_ = v___x_1518_;
v___y_1475_ = v___x_1527_;
v___y_1476_ = v___x_1525_;
v___y_1477_ = v___x_1524_;
v___y_1478_ = v___x_1528_;
v___y_1479_ = v___x_1523_;
v___y_1480_ = v___x_1531_;
goto v___jp_1469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1___boxed(lean_object* v_x_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lake___aux__Lake__Build__Data______macroRules__Lake__customDataDecl__1(v_x_1542_, v_a_1543_, v_a_1544_);
lean_dec_ref(v_a_1543_);
return v_res_1545_;
}
}
lean_object* runtime_initialize_Lake_Build_Key(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Family(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Dynlib(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Data(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Family(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Dynlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Data(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Key(uint8_t builtin);
lean_object* initialize_Lake_Util_Family(uint8_t builtin);
lean_object* initialize_Lake_Config_Dynlib(uint8_t builtin);
lean_object* initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
lean_object* initialize_Lake_Config_Kinds(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Data(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Family(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Dynlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Kinds(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Data(builtin);
}
#ifdef __cplusplus
}
#endif

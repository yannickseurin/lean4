// Lean compiler output
// Module: Lean.Elab.AuxDef
// Imports: public import Lean.Elab.Command
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
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_DeclNameGenerator_ofPrefix(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__0 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__1 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__2 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aux_def"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__3 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__3_value),LEAN_SCALAR_PTR_LITERAL(83, 33, 36, 212, 17, 187, 86, 94)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__4 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__5 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__5_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__6 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__7 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__7_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__8 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__9 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__9_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__10 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__10_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__11 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__8_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__11_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__12 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__13 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__14 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__15 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__15_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__16 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__16_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__17 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__8_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__17_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__18 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__12_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__18_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__19 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__19_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "visibility"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__20 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__20_value),LEAN_SCALAR_PTR_LITERAL(70, 205, 25, 140, 55, 50, 241, 254)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__21 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__21_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__22 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__19_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__22_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__23 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__23_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__3_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__24 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__23_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__24_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__25 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__25_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__26 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__26_value),LEAN_SCALAR_PTR_LITERAL(55, 136, 52, 6, 12, 19, 78, 239)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__27 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__27_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__28 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__29_value_aux_2),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__28_value),LEAN_SCALAR_PTR_LITERAL(36, 143, 235, 174, 172, 186, 143, 206)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__29 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__29_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__29_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__30 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__27_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__30_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__31 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__31_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__25_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__31_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__32 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__32_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__33 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__33_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__33_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__34 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__32_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__34_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__35 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__35_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__36 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__36_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__37 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__37_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__38 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__35_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__38_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__39 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__39_value;
static const lean_string_object l_Lean_Elab_Command_aux__def___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__40 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__40_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__40_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__41 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__41_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__39_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__41_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__42 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__42_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__6_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__42_value),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__38_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__43 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Command_aux__def___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_aux__def___closed__4_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__43_value)}};
static const lean_object* l_Lean_Elab_Command_aux__def___closed__44 = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__44_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_aux__def = (const lean_object*)&l_Lean_Elab_Command_aux__def___closed__44_value;
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Command_elabAuxDef_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__8_value;
static const lean_array_object l_Lean_Elab_Command_elabAuxDef___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Command_elabAuxDef___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__14;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_aux"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_elabAuxDef___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__15_value),LEAN_SCALAR_PTR_LITERAL(239, 43, 245, 0, 252, 151, 26, 151)}};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__16 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__16_value;
static const lean_string_object l_Lean_Elab_Command_elabAuxDef___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__17 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Command_elabAuxDef___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__17_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__18 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__19;
static const lean_ctor_object l_Lean_Elab_Command_elabAuxDef___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabAuxDef___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabAuxDef___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabAuxDef___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__20_value_aux_2),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__9_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Command_elabAuxDef___closed__20 = (const lean_object*)&l_Lean_Elab_Command_elabAuxDef___closed__20_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAuxDef(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAuxDef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabAuxDef"};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_aux__def___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 19, 161, 49, 27, 65, 68, 32)}};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4_value),((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_box(0);
v___x_108_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg(){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0);
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___boxed(lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0(lean_object* v_00_u03b1_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___boxed(lean_object* v_00_u03b1_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0(v_00_u03b1_120_, v___y_121_, v___y_122_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(lean_object* v___y_125_){
_start:
{
lean_object* v___x_127_; lean_object* v_env_128_; lean_object* v___x_129_; lean_object* v_mainModule_130_; lean_object* v___x_131_; 
v___x_127_ = lean_st_ref_get(v___y_125_);
v_env_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc_ref(v_env_128_);
lean_dec(v___x_127_);
v___x_129_ = l_Lean_Environment_header(v_env_128_);
lean_dec_ref(v_env_128_);
v_mainModule_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_mainModule_130_);
lean_dec_ref(v___x_129_);
v___x_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_131_, 0, v_mainModule_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg___boxed(lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(v___y_132_);
lean_dec(v___y_132_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1(lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(v___y_136_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___boxed(lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1(v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3(size_t v_sz_143_, size_t v_i_144_, lean_object* v_bs_145_){
_start:
{
uint8_t v___x_146_; 
v___x_146_ = lean_usize_dec_lt(v_i_144_, v_sz_143_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
v___x_147_ = l_unsafeCast___redArg(v_bs_145_);
lean_dec_ref(v_bs_145_);
return v___x_147_;
}
else
{
lean_object* v_v_148_; lean_object* v___x_149_; lean_object* v_bs_x27_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; size_t v___x_154_; size_t v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_v_148_ = lean_array_uget(v_bs_145_, v_i_144_);
v___x_149_ = lean_unsigned_to_nat(0u);
v_bs_x27_150_ = lean_array_uset(v_bs_145_, v_i_144_, v___x_149_);
v___x_151_ = l_unsafeCast___redArg(v_v_148_);
lean_dec(v_v_148_);
v___x_152_ = l_Lean_TSyntax_getId(v___x_151_);
lean_dec(v___x_151_);
v___x_153_ = l_Lean_Name_eraseMacroScopes(v___x_152_);
lean_dec(v___x_152_);
v___x_154_ = ((size_t)1ULL);
v___x_155_ = lean_usize_add(v_i_144_, v___x_154_);
v___x_156_ = l_unsafeCast___redArg(v___x_153_);
lean_dec(v___x_153_);
v___x_157_ = lean_array_uset(v_bs_x27_150_, v_i_144_, v___x_156_);
v_i_144_ = v___x_155_;
v_bs_145_ = v___x_157_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3___boxed(lean_object* v_sz_159_, lean_object* v_i_160_, lean_object* v_bs_161_){
_start:
{
size_t v_sz_boxed_162_; size_t v_i_boxed_163_; lean_object* v_res_164_; 
v_sz_boxed_162_ = lean_unbox_usize(v_sz_159_);
lean_dec(v_sz_159_);
v_i_boxed_163_ = lean_unbox_usize(v_i_160_);
lean_dec(v_i_160_);
v_res_164_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3(v_sz_boxed_162_, v_i_boxed_163_, v_bs_161_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(lean_object* v_as_165_, size_t v_i_166_, size_t v_stop_167_, lean_object* v_b_168_){
_start:
{
uint8_t v___x_169_; 
v___x_169_ = lean_usize_dec_eq(v_i_166_, v_stop_167_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; lean_object* v___x_171_; size_t v___x_172_; size_t v___x_173_; 
v___x_170_ = lean_array_uget_borrowed(v_as_165_, v_i_166_);
lean_inc(v___x_170_);
v___x_171_ = l_Lean_Name_append(v_b_168_, v___x_170_);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = lean_usize_add(v_i_166_, v___x_172_);
v_i_166_ = v___x_173_;
v_b_168_ = v___x_171_;
goto _start;
}
else
{
return v_b_168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4___boxed(lean_object* v_as_175_, lean_object* v_i_176_, lean_object* v_stop_177_, lean_object* v_b_178_){
_start:
{
size_t v_i_boxed_179_; size_t v_stop_boxed_180_; lean_object* v_res_181_; 
v_i_boxed_179_ = lean_unbox_usize(v_i_176_);
lean_dec(v_i_176_);
v_stop_boxed_180_ = lean_unbox_usize(v_stop_177_);
lean_dec(v_stop_177_);
v_res_181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(v_as_175_, v_i_boxed_179_, v_stop_boxed_180_, v_b_178_);
lean_dec_ref(v_as_175_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Command_elabAuxDef_spec__2(lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
if (lean_obj_tag(v_a_182_) == 0)
{
lean_object* v___x_184_; 
v___x_184_ = l_List_reverse___redArg(v_a_183_);
return v___x_184_;
}
else
{
lean_object* v_head_185_; lean_object* v_tail_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_196_; 
v_head_185_ = lean_ctor_get(v_a_182_, 0);
v_tail_186_ = lean_ctor_get(v_a_182_, 1);
v_isSharedCheck_196_ = !lean_is_exclusive(v_a_182_);
if (v_isSharedCheck_196_ == 0)
{
v___x_188_ = v_a_182_;
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_tail_186_);
lean_inc(v_head_185_);
lean_dec(v_a_182_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
uint8_t v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_190_ = 0;
v___x_191_ = l_Lean_Name_toString(v_head_185_, v___x_190_);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 1, v_a_183_);
lean_ctor_set(v___x_188_, 0, v___x_191_);
v___x_193_ = v___x_188_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_a_183_);
v___x_193_ = v_reuseFailAlloc_195_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
v_a_182_ = v_tail_186_;
v_a_183_ = v___x_193_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__14(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Array_mkArray0___redArg();
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__19(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_box(0);
v___x_221_ = l_unsafeCast___redArg(v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAuxDef(lean_object* v_x_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; lean_object* v___y_236_; lean_object* v___y_237_; lean_object* v___y_238_; lean_object* v___y_239_; lean_object* v___y_240_; lean_object* v___y_241_; lean_object* v___y_242_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_250_; 
v___x_231_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__0));
v___x_232_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__2));
v___x_233_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__4));
lean_inc(v_x_227_);
v___x_234_ = l_Lean_Syntax_isOfKind(v_x_227_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_294_; 
lean_dec(v_x_227_);
v___x_294_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_294_;
}
else
{
lean_object* v___x_295_; lean_object* v___y_297_; lean_object* v___y_298_; lean_object* v___y_299_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_318_; lean_object* v___y_319_; lean_object* v___y_320_; lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___y_325_; lean_object* v___y_326_; lean_object* v___y_327_; lean_object* v___y_328_; lean_object* v___y_339_; lean_object* v___y_340_; lean_object* v___y_341_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v___y_346_; lean_object* v___y_347_; lean_object* v___y_348_; lean_object* v___y_349_; lean_object* v___y_405_; lean_object* v_attrs_x3f_406_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___y_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v_doc_x3f_440_; lean_object* v___y_441_; lean_object* v___y_442_; lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_453_ = l_Lean_Syntax_getArg(v_x_227_, v___x_295_);
v___x_454_ = l_Lean_Syntax_isNone(v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_453_);
v___x_456_ = l_Lean_Syntax_matchesNull(v___x_453_, v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; 
lean_dec(v___x_453_);
lean_dec(v_x_227_);
v___x_457_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_457_;
}
else
{
lean_object* v_doc_x3f_458_; 
v_doc_x3f_458_ = l_Lean_Syntax_getArg(v___x_453_, v___x_295_);
lean_dec(v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_461_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__20));
lean_inc(v_doc_x3f_458_);
v___x_462_ = l_Lean_Syntax_isOfKind(v_doc_x3f_458_, v___x_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; 
lean_dec(v_doc_x3f_458_);
lean_dec(v_x_227_);
v___x_463_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_463_;
}
else
{
goto v___jp_459_;
}
}
else
{
goto v___jp_459_;
}
v___jp_459_:
{
lean_object* v___x_460_; 
v___x_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_460_, 0, v_doc_x3f_458_);
v_doc_x3f_440_ = v___x_460_;
v___y_441_ = v_a_228_;
v___y_442_ = v_a_229_;
goto v___jp_439_;
}
}
}
else
{
lean_object* v___x_464_; 
lean_dec(v___x_453_);
v___x_464_ = lean_box(0);
v_doc_x3f_440_ = v___x_464_;
v___y_441_ = v_a_228_;
v___y_442_ = v_a_229_;
goto v___jp_439_;
}
v___jp_296_:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_inc_ref(v___y_307_);
v___x_312_ = l_Array_append___redArg(v___y_307_, v___y_311_);
lean_dec_ref(v___y_311_);
lean_inc(v___y_297_);
lean_inc(v___y_306_);
v___x_313_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_313_, 0, v___y_306_);
lean_ctor_set(v___x_313_, 1, v___y_297_);
lean_ctor_set(v___x_313_, 2, v___x_312_);
if (lean_obj_tag(v___y_299_) == 1)
{
lean_object* v_val_314_; lean_object* v___x_315_; 
v_val_314_ = lean_ctor_get(v___y_299_, 0);
lean_inc(v_val_314_);
lean_dec_ref_known(v___y_299_, 1);
v___x_315_ = l_Array_mkArray1___redArg(v_val_314_);
v___y_236_ = v___y_297_;
v___y_237_ = v___y_298_;
v___y_238_ = v___y_300_;
v___y_239_ = v___y_301_;
v___y_240_ = v___y_302_;
v___y_241_ = v___y_303_;
v___y_242_ = v___x_313_;
v___y_243_ = v___y_304_;
v___y_244_ = v___y_305_;
v___y_245_ = v___y_306_;
v___y_246_ = v___y_307_;
v___y_247_ = v___y_308_;
v___y_248_ = v___y_309_;
v___y_249_ = v___y_310_;
v___y_250_ = v___x_315_;
goto v___jp_235_;
}
else
{
lean_object* v___x_316_; 
lean_dec(v___y_299_);
v___x_316_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__9));
v___y_236_ = v___y_297_;
v___y_237_ = v___y_298_;
v___y_238_ = v___y_300_;
v___y_239_ = v___y_301_;
v___y_240_ = v___y_302_;
v___y_241_ = v___y_303_;
v___y_242_ = v___x_313_;
v___y_243_ = v___y_304_;
v___y_244_ = v___y_305_;
v___y_245_ = v___y_306_;
v___y_246_ = v___y_307_;
v___y_247_ = v___y_308_;
v___y_248_ = v___y_309_;
v___y_249_ = v___y_310_;
v___y_250_ = v___x_316_;
goto v___jp_235_;
}
}
v___jp_317_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_329_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__10));
lean_inc_ref_n(v___y_322_, 2);
v___x_330_ = l_Lean_Name_mkStr4(v___x_231_, v___y_322_, v___x_232_, v___x_329_);
v___x_331_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__11));
v___x_332_ = l_Lean_Name_mkStr4(v___x_231_, v___y_322_, v___x_232_, v___x_331_);
v___x_333_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__13));
v___x_334_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__14, &l_Lean_Elab_Command_elabAuxDef___closed__14_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__14);
if (lean_obj_tag(v___y_327_) == 1)
{
lean_object* v_val_335_; lean_object* v___x_336_; 
v_val_335_ = lean_ctor_get(v___y_327_, 0);
lean_inc(v_val_335_);
lean_dec_ref_known(v___y_327_, 1);
v___x_336_ = l_Array_mkArray1___redArg(v_val_335_);
v___y_297_ = v___x_333_;
v___y_298_ = v___y_318_;
v___y_299_ = v___y_321_;
v___y_300_ = v___y_320_;
v___y_301_ = v___y_322_;
v___y_302_ = v___y_323_;
v___y_303_ = v___y_324_;
v___y_304_ = v___y_328_;
v___y_305_ = v___x_332_;
v___y_306_ = v___y_319_;
v___y_307_ = v___x_334_;
v___y_308_ = v___y_326_;
v___y_309_ = v___y_325_;
v___y_310_ = v___x_330_;
v___y_311_ = v___x_336_;
goto v___jp_296_;
}
else
{
lean_object* v___x_337_; 
lean_dec(v___y_327_);
v___x_337_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__9));
v___y_297_ = v___x_333_;
v___y_298_ = v___y_318_;
v___y_299_ = v___y_321_;
v___y_300_ = v___y_320_;
v___y_301_ = v___y_322_;
v___y_302_ = v___y_323_;
v___y_303_ = v___y_324_;
v___y_304_ = v___y_328_;
v___y_305_ = v___x_332_;
v___y_306_ = v___y_319_;
v___y_307_ = v___x_334_;
v___y_308_ = v___y_326_;
v___y_309_ = v___y_325_;
v___y_310_ = v___x_330_;
v___y_311_ = v___x_337_;
goto v___jp_296_;
}
}
v___jp_338_:
{
lean_object* v___x_350_; lean_object* v_a_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_350_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(v___y_345_);
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref(v___x_350_);
v___x_352_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__16));
v___x_353_ = l_Lean_Name_append(v___x_352_, v_a_351_);
v___x_354_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__17));
v___x_355_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__18));
v___x_356_ = l_Lean_Name_append(v___x_353_, v___x_355_);
v___x_357_ = l_Lean_Name_append(v___x_356_, v___y_349_);
v___x_358_ = l_Lean_Name_components(v___x_357_);
v___x_359_ = lean_box(0);
v___x_360_ = l_List_mapTR_loop___at___00Lean_Elab_Command_elabAuxDef_spec__2(v___x_358_, v___x_359_);
v___x_361_ = l_String_intercalate(v___x_354_, v___x_360_);
v___x_362_ = l_Lean_Elab_Command_getScope___redArg(v___y_345_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v_currNamespace_364_; lean_object* v___x_365_; lean_object* v_env_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v_fst_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_363_);
lean_dec_ref_known(v___x_362_, 1);
v_currNamespace_364_ = lean_ctor_get(v_a_363_, 2);
lean_inc_n(v_currNamespace_364_, 2);
lean_dec(v_a_363_);
v___x_365_ = lean_st_ref_get(v___y_345_);
v_env_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc_ref(v_env_366_);
lean_dec(v___x_365_);
v___x_367_ = l_Lean_Environment_setExporting(v_env_366_, v___x_234_);
v___x_368_ = l_Lean_DeclNameGenerator_ofPrefix(v_currNamespace_364_);
lean_inc(v___y_340_);
v___x_369_ = l_Lean_Name_str___override(v___y_340_, v___x_361_);
v___x_370_ = l_Lean_DeclNameGenerator_mkUniqueName(v___x_367_, v___x_368_, v___x_369_);
v_fst_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_fst_371_);
lean_dec_ref(v___x_370_);
v___x_372_ = l_Lean_Name_replacePrefix(v_fst_371_, v_currNamespace_364_, v___y_340_);
lean_dec(v___y_340_);
lean_dec(v_currNamespace_364_);
v___x_373_ = l_Lean_Elab_Command_getRef___redArg(v___y_348_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; uint8_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
v___x_375_ = 0;
v___x_376_ = l_Lean_SourceInfo_fromRef(v_a_374_, v___x_375_);
lean_dec(v_a_374_);
v___x_377_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_348_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v_quotContext_x3f_378_; 
lean_dec_ref_known(v___x_377_, 1);
v_quotContext_x3f_378_ = lean_ctor_get(v___y_348_, 5);
if (lean_obj_tag(v_quotContext_x3f_378_) == 0)
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(v___y_345_);
lean_dec_ref(v___x_379_);
v___y_318_ = v___y_339_;
v___y_319_ = v___x_376_;
v___y_320_ = v___y_343_;
v___y_321_ = v___y_342_;
v___y_322_ = v___y_341_;
v___y_323_ = v___y_344_;
v___y_324_ = v___y_345_;
v___y_325_ = v___y_346_;
v___y_326_ = v___x_372_;
v___y_327_ = v___y_347_;
v___y_328_ = v___y_348_;
goto v___jp_317_;
}
else
{
v___y_318_ = v___y_339_;
v___y_319_ = v___x_376_;
v___y_320_ = v___y_343_;
v___y_321_ = v___y_342_;
v___y_322_ = v___y_341_;
v___y_323_ = v___y_344_;
v___y_324_ = v___y_345_;
v___y_325_ = v___y_346_;
v___y_326_ = v___x_372_;
v___y_327_ = v___y_347_;
v___y_328_ = v___y_348_;
goto v___jp_317_;
}
}
else
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
lean_dec(v___x_376_);
lean_dec(v___x_372_);
lean_dec(v___y_347_);
lean_dec(v___y_346_);
lean_dec(v___y_344_);
lean_dec(v___y_343_);
lean_dec(v___y_342_);
lean_dec(v___y_339_);
v_a_380_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_377_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_377_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
lean_dec(v___x_372_);
lean_dec(v___y_347_);
lean_dec(v___y_346_);
lean_dec(v___y_344_);
lean_dec(v___y_343_);
lean_dec(v___y_342_);
lean_dec(v___y_339_);
v_a_388_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_373_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_373_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
lean_dec_ref(v___x_361_);
lean_dec(v___y_347_);
lean_dec(v___y_346_);
lean_dec(v___y_344_);
lean_dec(v___y_343_);
lean_dec(v___y_342_);
lean_dec(v___y_340_);
lean_dec(v___y_339_);
v_a_396_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_362_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_362_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
v___jp_404_:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v_suggestion_418_; lean_object* v___x_419_; lean_object* v___x_420_; size_t v_sz_421_; size_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_409_ = lean_unsigned_to_nat(2u);
v___x_410_ = l_Lean_Syntax_getArg(v_x_227_, v___x_409_);
v___x_411_ = lean_unsigned_to_nat(4u);
v___x_412_ = l_Lean_Syntax_getArg(v_x_227_, v___x_411_);
v___x_413_ = lean_unsigned_to_nat(6u);
v___x_414_ = l_Lean_Syntax_getArg(v_x_227_, v___x_413_);
v___x_415_ = lean_unsigned_to_nat(8u);
v___x_416_ = l_Lean_Syntax_getArg(v_x_227_, v___x_415_);
lean_dec(v_x_227_);
v___x_417_ = l_Lean_Syntax_getArgs(v___x_412_);
lean_dec(v___x_412_);
v_suggestion_418_ = l_unsafeCast___redArg(v___x_417_);
lean_dec_ref(v___x_417_);
v___x_419_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__13));
v___x_420_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__19, &l_Lean_Elab_Command_elabAuxDef___closed__19_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__19);
v_sz_421_ = lean_array_size(v_suggestion_418_);
v___x_422_ = ((size_t)0ULL);
v___x_423_ = l_unsafeCast___redArg(v_suggestion_418_);
v___x_424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3(v_sz_421_, v___x_422_, v___x_423_);
v___x_425_ = l_unsafeCast___redArg(v___x_424_);
lean_dec_ref(v___x_424_);
v___x_426_ = lean_array_get_size(v___x_425_);
v___x_427_ = lean_nat_dec_lt(v___x_295_, v___x_426_);
if (v___x_427_ == 0)
{
lean_dec(v___x_425_);
v___y_339_ = v_suggestion_418_;
v___y_340_ = v___x_420_;
v___y_341_ = v___x_419_;
v___y_342_ = v_attrs_x3f_406_;
v___y_343_ = v___x_410_;
v___y_344_ = v___x_416_;
v___y_345_ = v___y_408_;
v___y_346_ = v___x_414_;
v___y_347_ = v___y_405_;
v___y_348_ = v___y_407_;
v___y_349_ = v___x_420_;
goto v___jp_338_;
}
else
{
uint8_t v___x_428_; 
v___x_428_ = lean_nat_dec_le(v___x_426_, v___x_426_);
if (v___x_428_ == 0)
{
if (v___x_427_ == 0)
{
lean_dec(v___x_425_);
v___y_339_ = v_suggestion_418_;
v___y_340_ = v___x_420_;
v___y_341_ = v___x_419_;
v___y_342_ = v_attrs_x3f_406_;
v___y_343_ = v___x_410_;
v___y_344_ = v___x_416_;
v___y_345_ = v___y_408_;
v___y_346_ = v___x_414_;
v___y_347_ = v___y_405_;
v___y_348_ = v___y_407_;
v___y_349_ = v___x_420_;
goto v___jp_338_;
}
else
{
size_t v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_usize_of_nat(v___x_426_);
v___x_430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(v___x_425_, v___x_422_, v___x_429_, v___x_420_);
lean_dec(v___x_425_);
v___y_339_ = v_suggestion_418_;
v___y_340_ = v___x_420_;
v___y_341_ = v___x_419_;
v___y_342_ = v_attrs_x3f_406_;
v___y_343_ = v___x_410_;
v___y_344_ = v___x_416_;
v___y_345_ = v___y_408_;
v___y_346_ = v___x_414_;
v___y_347_ = v___y_405_;
v___y_348_ = v___y_407_;
v___y_349_ = v___x_430_;
goto v___jp_338_;
}
}
else
{
size_t v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lean_usize_of_nat(v___x_426_);
v___x_432_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(v___x_425_, v___x_422_, v___x_431_, v___x_420_);
lean_dec(v___x_425_);
v___y_339_ = v_suggestion_418_;
v___y_340_ = v___x_420_;
v___y_341_ = v___x_419_;
v___y_342_ = v_attrs_x3f_406_;
v___y_343_ = v___x_410_;
v___y_344_ = v___x_416_;
v___y_345_ = v___y_408_;
v___y_346_ = v___x_414_;
v___y_347_ = v___y_405_;
v___y_348_ = v___y_407_;
v___y_349_ = v___x_432_;
goto v___jp_338_;
}
}
}
v___jp_433_:
{
lean_object* v___x_438_; 
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v___y_434_);
v___y_405_ = v___y_436_;
v_attrs_x3f_406_ = v___x_438_;
v___y_407_ = v___y_437_;
v___y_408_ = v___y_435_;
goto v___jp_404_;
}
v___jp_439_:
{
lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_443_ = lean_unsigned_to_nat(1u);
v___x_444_ = l_Lean_Syntax_getArg(v_x_227_, v___x_443_);
v___x_445_ = l_Lean_Syntax_isNone(v___x_444_);
if (v___x_445_ == 0)
{
uint8_t v___x_446_; 
lean_inc(v___x_444_);
v___x_446_ = l_Lean_Syntax_matchesNull(v___x_444_, v___x_443_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
lean_dec(v___x_444_);
lean_dec(v_doc_x3f_440_);
lean_dec(v_x_227_);
v___x_447_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_447_;
}
else
{
lean_object* v_attrs_x3f_448_; 
v_attrs_x3f_448_ = l_Lean_Syntax_getArg(v___x_444_, v___x_295_);
lean_dec(v___x_444_);
if (v___x_445_ == 0)
{
lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_449_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__16));
lean_inc(v_attrs_x3f_448_);
v___x_450_ = l_Lean_Syntax_isOfKind(v_attrs_x3f_448_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; 
lean_dec(v_attrs_x3f_448_);
lean_dec(v_doc_x3f_440_);
lean_dec(v_x_227_);
v___x_451_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_451_;
}
else
{
v___y_434_ = v_attrs_x3f_448_;
v___y_435_ = v___y_442_;
v___y_436_ = v_doc_x3f_440_;
v___y_437_ = v___y_441_;
goto v___jp_433_;
}
}
else
{
v___y_434_ = v_attrs_x3f_448_;
v___y_435_ = v___y_442_;
v___y_436_ = v_doc_x3f_440_;
v___y_437_ = v___y_441_;
goto v___jp_433_;
}
}
}
else
{
lean_object* v___x_452_; 
lean_dec(v___x_444_);
v___x_452_ = lean_box(0);
v___y_405_ = v_doc_x3f_440_;
v_attrs_x3f_406_ = v___x_452_;
v___y_407_ = v___y_441_;
v___y_408_ = v___y_442_;
goto v___jp_404_;
}
}
}
v___jp_235_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
lean_inc_ref_n(v___y_246_, 2);
v___x_251_ = l_Array_append___redArg(v___y_246_, v___y_250_);
lean_dec_ref(v___y_250_);
lean_inc_n(v___y_236_, 6);
lean_inc_n(v___y_245_, 17);
v___x_252_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_252_, 0, v___y_245_);
lean_ctor_set(v___x_252_, 1, v___y_236_);
lean_ctor_set(v___x_252_, 2, v___x_251_);
v___x_253_ = l_Lean_Syntax_node1(v___y_245_, v___y_236_, v___y_238_);
v___x_254_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_254_, 0, v___y_245_);
lean_ctor_set(v___x_254_, 1, v___y_236_);
lean_ctor_set(v___x_254_, 2, v___y_246_);
v___x_255_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__0));
lean_inc_ref_n(v___y_239_, 7);
v___x_256_ = l_Lean_Name_mkStr4(v___x_231_, v___y_239_, v___x_232_, v___x_255_);
v___x_257_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_257_, 0, v___y_245_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
v___x_258_ = l_Lean_Syntax_node1(v___y_245_, v___x_256_, v___x_257_);
v___x_259_ = l_Lean_Syntax_node1(v___y_245_, v___y_236_, v___x_258_);
lean_inc_ref_n(v___x_254_, 8);
v___x_260_ = l_Lean_Syntax_node7(v___y_245_, v___y_244_, v___y_242_, v___x_252_, v___x_253_, v___x_254_, v___x_259_, v___x_254_, v___x_254_);
v___x_261_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__1));
v___x_262_ = l_Lean_Name_mkStr4(v___x_231_, v___y_239_, v___x_232_, v___x_261_);
v___x_263_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__2));
v___x_264_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_264_, 0, v___y_245_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__3));
v___x_266_ = l_Lean_Name_mkStr4(v___x_231_, v___y_239_, v___x_232_, v___x_265_);
v___x_267_ = l_unsafeCast___redArg(v___y_237_);
lean_dec(v___y_237_);
v___x_268_ = lean_box(2);
v___x_269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v___y_236_);
lean_ctor_set(v___x_269_, 2, v___x_267_);
v___x_270_ = l_Lean_mkIdentFrom(v___x_269_, v___y_247_, v___x_234_);
lean_dec_ref_known(v___x_269_, 3);
v___x_271_ = l_Lean_Syntax_node2(v___y_245_, v___x_266_, v___x_270_, v___x_254_);
v___x_272_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__4));
v___x_273_ = l_Lean_Name_mkStr4(v___x_231_, v___y_239_, v___x_232_, v___x_272_);
v___x_274_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__14));
v___x_275_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__5));
v___x_276_ = l_Lean_Name_mkStr4(v___x_231_, v___y_239_, v___x_274_, v___x_275_);
v___x_277_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__33));
v___x_278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_278_, 0, v___y_245_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = l_Lean_Syntax_node2(v___y_245_, v___x_276_, v___x_278_, v___y_248_);
v___x_280_ = l_Lean_Syntax_node1(v___y_245_, v___y_236_, v___x_279_);
v___x_281_ = l_Lean_Syntax_node2(v___y_245_, v___x_273_, v___x_254_, v___x_280_);
v___x_282_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__6));
v___x_283_ = l_Lean_Name_mkStr4(v___x_231_, v___y_239_, v___x_232_, v___x_282_);
v___x_284_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__40));
v___x_285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_285_, 0, v___y_245_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__7));
v___x_287_ = ((lean_object*)(l_Lean_Elab_Command_elabAuxDef___closed__8));
v___x_288_ = l_Lean_Name_mkStr4(v___x_231_, v___y_239_, v___x_286_, v___x_287_);
v___x_289_ = l_Lean_Syntax_node2(v___y_245_, v___x_288_, v___x_254_, v___x_254_);
v___x_290_ = l_Lean_Syntax_node4(v___y_245_, v___x_283_, v___x_285_, v___y_240_, v___x_289_, v___x_254_);
v___x_291_ = l_Lean_Syntax_node5(v___y_245_, v___x_262_, v___x_264_, v___x_271_, v___x_281_, v___x_290_, v___x_254_);
v___x_292_ = l_Lean_Syntax_node2(v___y_245_, v___y_249_, v___x_260_, v___x_291_);
v___x_293_ = l_Lean_Elab_Command_elabCommand(v___x_292_, v___y_243_, v___y_241_);
return v___x_293_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAuxDef___boxed(lean_object* v_x_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_Elab_Command_elabAuxDef(v_x_465_, v_a_466_, v_a_467_);
lean_dec(v_a_467_);
lean_dec_ref(v_a_466_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1(){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_477_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_478_ = ((lean_object*)(l_Lean_Elab_Command_aux__def___closed__4));
v___x_479_ = ((lean_object*)(l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1));
v___x_480_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAuxDef___boxed), 4, 0);
v___x_481_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_477_, v___x_478_, v___x_479_, v___x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___boxed(lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1();
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3(){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = ((lean_object*)(l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1));
v___x_511_ = ((lean_object*)(l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6));
v___x_512_ = l_Lean_addBuiltinDeclarationRanges(v___x_510_, v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___boxed(lean_object* v_a_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3();
return v_res_514_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_AuxDef(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_AuxDef(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_AuxDef(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_AuxDef(builtin);
}
#ifdef __cplusplus
}
#endif

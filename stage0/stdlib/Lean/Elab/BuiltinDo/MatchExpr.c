// Lean compiler output
// Module: Lean.Elab.BuiltinDo.MatchExpr
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.Do.PatternVar import Lean.Elab.BuiltinDo.Basic import Init.Omega
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
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArgs(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_checkMutVarsForShadowing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_withDuplicableCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoIdDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(68, 239, 85, 151, 235, 111, 29, 229)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprPat"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__5_value),LEAN_SCALAR_PTR_LITERAL(34, 152, 68, 102, 242, 224, 57, 35)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doMatchExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__7_value),LEAN_SCALAR_PTR_LITERAL(72, 0, 49, 218, 206, 236, 229, 165)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "match_expr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__9_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__10_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__11_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__12_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__13 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__13_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__14 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__14_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__15_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__16 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__16_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__17 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__17_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "matchExprAlts"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__18 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__18_value),LEAN_SCALAR_PTR_LITERAL(88, 158, 245, 158, 91, 207, 89, 187)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprAlt"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__20 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__20_value),LEAN_SCALAR_PTR_LITERAL(156, 165, 255, 22, 123, 199, 70, 61)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__22 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__22_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__23 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__23_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "matchExprElseAlt"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__24 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__24_value),LEAN_SCALAR_PTR_LITERAL(249, 132, 98, 23, 98, 205, 167, 22)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__26 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__26_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__28 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__28_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__0;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__3;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__5;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "BuiltinDo"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__7;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MatchExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__9;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__10;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__11;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__12;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "expandDoLetExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__15_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__16;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doLetMetaExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(231, 210, 172, 145, 91, 221, 30, 22)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expandDoLetMetaExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "match_expr else alternative"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__1___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "match_expr alternative "};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "__x"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 215, 60, 46, 39, 217, 189, 106)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "instantiateMVarsIfMVarApp"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__7;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__6_value),LEAN_SCALAR_PTR_LITERAL(180, 221, 231, 68, 33, 162, 30, 45)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__8_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__6_value),LEAN_SCALAR_PTR_LITERAL(97, 89, 84, 0, 241, 26, 4, 203)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "elabDoMatchExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr(lean_object* v_stx_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4));
lean_inc(v_stx_59_);
v___x_63_ = l_Lean_Syntax_isOfKind(v_stx_59_, v___x_62_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; 
lean_dec(v_stx_59_);
v___x_64_ = l_Lean_Macro_throwUnsupported___redArg(v_a_61_);
return v___x_64_;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_65_ = lean_unsigned_to_nat(1u);
v___x_66_ = l_Lean_Syntax_getArg(v_stx_59_, v___x_65_);
v___x_67_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6));
lean_inc(v___x_66_);
v___x_68_ = l_Lean_Syntax_isOfKind(v___x_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; 
lean_dec(v___x_66_);
lean_dec(v_stx_59_);
v___x_69_ = l_Lean_Macro_throwUnsupported___redArg(v_a_61_);
return v___x_69_;
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_70_ = lean_unsigned_to_nat(6u);
v___x_71_ = l_Lean_Syntax_getArg(v_stx_59_, v___x_70_);
lean_inc(v___x_71_);
v___x_72_ = l_Lean_Syntax_matchesNull(v___x_71_, v___x_65_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
lean_dec(v___x_71_);
lean_dec(v___x_66_);
lean_dec(v_stx_59_);
v___x_73_ = l_Lean_Macro_throwUnsupported___redArg(v_a_61_);
return v___x_73_;
}
else
{
lean_object* v_ref_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_ref_74_ = lean_ctor_get(v_a_60_, 5);
v___x_75_ = lean_unsigned_to_nat(0u);
v___x_76_ = lean_unsigned_to_nat(3u);
v___x_77_ = l_Lean_Syntax_getArg(v_stx_59_, v___x_76_);
v___x_78_ = lean_unsigned_to_nat(5u);
v___x_79_ = l_Lean_Syntax_getArg(v_stx_59_, v___x_78_);
lean_dec(v_stx_59_);
v___x_80_ = l_Lean_Syntax_getArg(v___x_71_, v___x_75_);
lean_dec(v___x_71_);
v___x_81_ = 0;
v___x_82_ = l_Lean_SourceInfo_fromRef(v_ref_74_, v___x_81_);
v___x_83_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8));
v___x_84_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__9));
lean_inc_n(v___x_82_, 16);
v___x_85_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_82_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__11));
v___x_87_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__12));
v___x_88_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_82_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__13));
v___x_90_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_82_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__14));
v___x_92_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_82_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__15));
v___x_94_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_82_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__16));
v___x_96_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_82_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = l_Lean_Syntax_node5(v___x_82_, v___x_86_, v___x_88_, v___x_90_, v___x_92_, v___x_94_, v___x_96_);
v___x_98_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__17));
v___x_99_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_82_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19));
v___x_101_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21));
v___x_102_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__22));
v___x_103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_82_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__23));
v___x_105_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_82_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
lean_inc_ref(v___x_105_);
lean_inc_ref(v___x_103_);
v___x_106_ = l_Lean_Syntax_node4(v___x_82_, v___x_101_, v___x_103_, v___x_66_, v___x_105_, v___x_80_);
v___x_107_ = l_Lean_Syntax_node1(v___x_82_, v___x_86_, v___x_106_);
v___x_108_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25));
v___x_109_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27));
v___x_110_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__28));
v___x_111_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_82_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = l_Lean_Syntax_node1(v___x_82_, v___x_109_, v___x_111_);
v___x_113_ = l_Lean_Syntax_node4(v___x_82_, v___x_108_, v___x_103_, v___x_112_, v___x_105_, v___x_79_);
v___x_114_ = l_Lean_Syntax_node2(v___x_82_, v___x_100_, v___x_107_, v___x_113_);
v___x_115_ = l_Lean_Syntax_node5(v___x_82_, v___x_83_, v___x_85_, v___x_97_, v___x_77_, v___x_99_, v___x_114_);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v_a_61_);
return v___x_116_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___boxed(lean_object* v_stx_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr(v_stx_117_, v_a_118_, v_a_119_);
lean_dec_ref(v_a_118_);
return v_res_120_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__0(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_box(0);
v___x_122_ = l_unsafeCast___redArg(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__2(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__1));
v___x_125_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__0, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__0);
v___x_126_ = l_Lean_Name_str___override(v___x_125_, v___x_124_);
return v___x_126_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__3(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_127_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0));
v___x_128_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__2, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__2);
v___x_129_ = l_Lean_Name_str___override(v___x_128_, v___x_127_);
return v___x_129_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__5(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__4));
v___x_132_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__3, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__3);
v___x_133_ = l_Lean_Name_str___override(v___x_132_, v___x_131_);
return v___x_133_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__7(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__6));
v___x_136_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__5, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__5_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__5);
v___x_137_ = l_Lean_Name_str___override(v___x_136_, v___x_135_);
return v___x_137_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__9(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__8));
v___x_140_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__7, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__7_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__7);
v___x_141_ = l_Lean_Name_str___override(v___x_140_, v___x_139_);
return v___x_141_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__10(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__9, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__9);
v___x_144_ = l_Lean_Name_num___override(v___x_143_, v___x_142_);
return v___x_144_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__11(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0));
v___x_146_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__10, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__10_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__10);
v___x_147_ = l_Lean_Name_str___override(v___x_146_, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__12(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__4));
v___x_149_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__11, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__11_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__11);
v___x_150_ = l_Lean_Name_str___override(v___x_149_, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__13));
v___x_153_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__12, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__12);
v___x_154_ = l_Lean_Name_str___override(v___x_153_, v___x_152_);
return v___x_154_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__16(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__15));
v___x_157_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14);
v___x_158_ = l_Lean_Name_str___override(v___x_157_, v___x_156_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1(){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_160_ = l_Lean_Elab_macroAttribute;
v___x_161_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__4));
v___x_162_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__16, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__16_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__16);
v___x_163_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___boxed), 3, 0);
v___x_164_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_160_, v___x_161_, v___x_162_, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___boxed(lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1();
return v_res_166_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__2(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Array_mkArray0___redArg();
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr(lean_object* v_stx_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1));
lean_inc(v_stx_174_);
v___x_178_ = l_Lean_Syntax_isOfKind(v_stx_174_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; 
lean_dec(v_stx_174_);
v___x_179_ = l_Lean_Macro_throwUnsupported___redArg(v_a_176_);
return v___x_179_;
}
else
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = l_Lean_Syntax_getArg(v_stx_174_, v___x_180_);
v___x_182_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__6));
lean_inc(v___x_181_);
v___x_183_ = l_Lean_Syntax_isOfKind(v___x_181_, v___x_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; 
lean_dec(v___x_181_);
lean_dec(v_stx_174_);
v___x_184_ = l_Lean_Macro_throwUnsupported___redArg(v_a_176_);
return v___x_184_;
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_185_ = lean_unsigned_to_nat(6u);
v___x_186_ = l_Lean_Syntax_getArg(v_stx_174_, v___x_185_);
lean_inc(v___x_186_);
v___x_187_ = l_Lean_Syntax_matchesNull(v___x_186_, v___x_180_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; 
lean_dec(v___x_186_);
lean_dec(v___x_181_);
lean_dec(v_stx_174_);
v___x_188_ = l_Lean_Macro_throwUnsupported___redArg(v_a_176_);
return v___x_188_;
}
else
{
lean_object* v_ref_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_ref_189_ = lean_ctor_get(v_a_175_, 5);
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = lean_unsigned_to_nat(3u);
v___x_192_ = l_Lean_Syntax_getArg(v_stx_174_, v___x_191_);
v___x_193_ = lean_unsigned_to_nat(5u);
v___x_194_ = l_Lean_Syntax_getArg(v_stx_174_, v___x_193_);
lean_dec(v_stx_174_);
v___x_195_ = l_Lean_Syntax_getArg(v___x_186_, v___x_190_);
lean_dec(v___x_186_);
v___x_196_ = 0;
v___x_197_ = l_Lean_SourceInfo_fromRef(v_ref_189_, v___x_196_);
v___x_198_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8));
v___x_199_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__9));
lean_inc_n(v___x_197_, 11);
v___x_200_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_197_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__11));
v___x_202_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__2, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__2);
v___x_203_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_203_, 0, v___x_197_);
lean_ctor_set(v___x_203_, 1, v___x_201_);
lean_ctor_set(v___x_203_, 2, v___x_202_);
v___x_204_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__17));
v___x_205_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_197_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__19));
v___x_207_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21));
v___x_208_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__22));
v___x_209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_197_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__23));
v___x_211_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_197_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
lean_inc_ref(v___x_211_);
lean_inc_ref(v___x_209_);
v___x_212_ = l_Lean_Syntax_node4(v___x_197_, v___x_207_, v___x_209_, v___x_181_, v___x_211_, v___x_195_);
v___x_213_ = l_Lean_Syntax_node1(v___x_197_, v___x_201_, v___x_212_);
v___x_214_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__25));
v___x_215_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__27));
v___x_216_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__28));
v___x_217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_197_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = l_Lean_Syntax_node1(v___x_197_, v___x_215_, v___x_217_);
v___x_219_ = l_Lean_Syntax_node4(v___x_197_, v___x_214_, v___x_209_, v___x_218_, v___x_211_, v___x_194_);
v___x_220_ = l_Lean_Syntax_node2(v___x_197_, v___x_206_, v___x_213_, v___x_219_);
v___x_221_ = l_Lean_Syntax_node5(v___x_197_, v___x_198_, v___x_200_, v___x_203_, v___x_192_, v___x_205_, v___x_220_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v_a_176_);
return v___x_222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___boxed(lean_object* v_stx_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr(v_stx_223_, v_a_224_, v_a_225_);
lean_dec_ref(v_a_224_);
return v_res_226_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__1(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__0));
v___x_229_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14);
v___x_230_ = l_Lean_Name_str___override(v___x_229_, v___x_228_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1(){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_232_ = l_Lean_Elab_macroAttribute;
v___x_233_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___closed__1));
v___x_234_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__1, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___closed__1);
v___x_235_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___boxed), 3, 0);
v___x_236_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_232_, v___x_233_, v___x_234_, v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1___boxed(lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1();
return v_res_238_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = lean_box(0);
v___x_240_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_239_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg(){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg___closed__0);
v___x_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg___boxed(lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg();
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0(lean_object* v_00_u03b1_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg();
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___boxed(lean_object* v_00_u03b1_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0(v_00_u03b1_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec_ref(v___y_258_);
return v_res_266_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_box(0);
v___x_269_ = l_unsafeCast___redArg(v___x_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0(uint8_t v___x_270_, lean_object* v___x_271_, lean_object* v___x_272_, lean_object* v___x_273_, lean_object* v_discr_274_, uint8_t v___x_275_, lean_object* v___x_276_, lean_object* v___x_277_, lean_object* v_alts_278_, lean_object* v_altsArr_279_, lean_object* v_rhs_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v___y_290_; lean_object* v___y_312_; lean_object* v_info_313_; lean_object* v_kind_314_; lean_object* v_args_315_; 
if (lean_obj_tag(v_alts_278_) == 1)
{
lean_object* v_info_324_; lean_object* v_kind_325_; lean_object* v_args_326_; lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_info_324_ = lean_ctor_get(v_alts_278_, 0);
lean_inc(v_info_324_);
v_kind_325_ = lean_ctor_get(v_alts_278_, 1);
lean_inc(v_kind_325_);
v_args_326_ = lean_ctor_get(v_alts_278_, 2);
lean_inc_ref(v_args_326_);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_array_get_size(v_args_326_);
v___x_329_ = lean_nat_dec_lt(v___x_327_, v___x_328_);
if (v___x_329_ == 0)
{
v___y_312_ = v_alts_278_;
v_info_313_ = v_info_324_;
v_kind_314_ = v_kind_325_;
v_args_315_ = v_args_326_;
goto v___jp_311_;
}
else
{
lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_342_; 
v_isSharedCheck_342_ = !lean_is_exclusive(v_alts_278_);
if (v_isSharedCheck_342_ == 0)
{
lean_object* v_unused_343_; lean_object* v_unused_344_; lean_object* v_unused_345_; 
v_unused_343_ = lean_ctor_get(v_alts_278_, 2);
lean_dec(v_unused_343_);
v_unused_344_ = lean_ctor_get(v_alts_278_, 1);
lean_dec(v_unused_344_);
v_unused_345_ = lean_ctor_get(v_alts_278_, 0);
lean_dec(v_unused_345_);
v___x_331_ = v_alts_278_;
v_isShared_332_ = v_isSharedCheck_342_;
goto v_resetjp_330_;
}
else
{
lean_dec(v_alts_278_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_342_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v_v_333_; lean_object* v___x_334_; lean_object* v_xs_x27_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v_v_333_ = lean_array_fget(v_args_326_, v___x_327_);
v___x_334_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1);
v_xs_x27_335_ = lean_array_fset(v_args_326_, v___x_327_, v___x_334_);
v___x_336_ = l_unsafeCast___redArg(v_altsArr_279_);
v___x_337_ = l_Lean_Syntax_setArgs(v_v_333_, v___x_336_);
v___x_338_ = lean_array_fset(v_xs_x27_335_, v___x_327_, v___x_337_);
lean_inc_ref(v___x_338_);
lean_inc(v_kind_325_);
lean_inc(v_info_324_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 2, v___x_338_);
v___x_340_ = v___x_331_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_info_324_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_kind_325_);
lean_ctor_set(v_reuseFailAlloc_341_, 2, v___x_338_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
v___y_312_ = v___x_340_;
v_info_313_ = v_info_324_;
v_kind_314_ = v_kind_325_;
v_args_315_ = v___x_338_;
goto v___jp_311_;
}
}
}
}
else
{
if (lean_obj_tag(v_alts_278_) == 1)
{
lean_object* v_info_346_; lean_object* v_kind_347_; lean_object* v_args_348_; 
v_info_346_ = lean_ctor_get(v_alts_278_, 0);
lean_inc(v_info_346_);
v_kind_347_ = lean_ctor_get(v_alts_278_, 1);
lean_inc(v_kind_347_);
v_args_348_ = lean_ctor_get(v_alts_278_, 2);
lean_inc_ref(v_args_348_);
v___y_312_ = v_alts_278_;
v_info_313_ = v_info_346_;
v_kind_314_ = v_kind_347_;
v_args_315_ = v_args_348_;
goto v___jp_311_;
}
else
{
lean_dec(v_rhs_280_);
v___y_290_ = v_alts_278_;
goto v___jp_289_;
}
}
v___jp_289_:
{
lean_object* v_doBlockResultType_291_; lean_object* v___x_292_; 
v_doBlockResultType_291_ = lean_ctor_get(v___y_281_, 3);
lean_inc_ref(v_doBlockResultType_291_);
v___x_292_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_291_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_310_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_310_ == 0)
{
v___x_295_ = v___x_292_;
v_isShared_296_ = v_isSharedCheck_310_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_292_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_310_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v_ref_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_307_; 
v_ref_297_ = lean_ctor_get(v___y_286_, 2);
v___x_298_ = l_Lean_SourceInfo_fromRef(v_ref_297_, v___x_270_);
v___x_299_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__0));
v___x_300_ = l_Lean_Name_mkStr4(v___x_271_, v___x_272_, v___x_273_, v___x_299_);
v___x_301_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__9));
lean_inc_n(v___x_298_, 2);
v___x_302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_298_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__17));
v___x_304_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_298_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = l_Lean_Syntax_node4(v___x_298_, v___x_300_, v___x_302_, v_discr_274_, v___x_304_, v___y_290_);
if (v_isShared_296_ == 0)
{
lean_ctor_set_tag(v___x_295_, 1);
v___x_307_ = v___x_295_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_293_);
v___x_307_ = v_reuseFailAlloc_309_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Elab_Term_elabTerm(v___x_305_, v___x_307_, v___x_275_, v___x_275_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
return v___x_308_;
}
}
}
else
{
lean_dec(v___y_290_);
lean_dec(v_discr_274_);
lean_dec_ref(v___x_273_);
lean_dec_ref(v___x_272_);
lean_dec_ref(v___x_271_);
return v___x_292_;
}
}
v___jp_311_:
{
lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_316_ = lean_array_get_size(v_args_315_);
v___x_317_ = lean_nat_dec_lt(v___x_276_, v___x_316_);
if (v___x_317_ == 0)
{
lean_dec_ref(v_args_315_);
lean_dec(v_kind_314_);
lean_dec(v_info_313_);
lean_dec(v_rhs_280_);
v___y_290_ = v___y_312_;
goto v___jp_289_;
}
else
{
lean_object* v_v_318_; lean_object* v___x_319_; lean_object* v_xs_x27_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
lean_dec(v___y_312_);
v_v_318_ = lean_array_fget(v_args_315_, v___x_276_);
v___x_319_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___closed__1);
v_xs_x27_320_ = lean_array_fset(v_args_315_, v___x_276_, v___x_319_);
v___x_321_ = l_Lean_Syntax_setArg(v_v_318_, v___x_277_, v_rhs_280_);
v___x_322_ = lean_array_fset(v_xs_x27_320_, v___x_276_, v___x_321_);
v___x_323_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_323_, 0, v_info_313_);
lean_ctor_set(v___x_323_, 1, v_kind_314_);
lean_ctor_set(v___x_323_, 2, v___x_322_);
v___y_290_ = v___x_323_;
goto v___jp_289_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___boxed(lean_object** _args){
lean_object* v___x_349_ = _args[0];
lean_object* v___x_350_ = _args[1];
lean_object* v___x_351_ = _args[2];
lean_object* v___x_352_ = _args[3];
lean_object* v_discr_353_ = _args[4];
lean_object* v___x_354_ = _args[5];
lean_object* v___x_355_ = _args[6];
lean_object* v___x_356_ = _args[7];
lean_object* v_alts_357_ = _args[8];
lean_object* v_altsArr_358_ = _args[9];
lean_object* v_rhs_359_ = _args[10];
lean_object* v___y_360_ = _args[11];
lean_object* v___y_361_ = _args[12];
lean_object* v___y_362_ = _args[13];
lean_object* v___y_363_ = _args[14];
lean_object* v___y_364_ = _args[15];
lean_object* v___y_365_ = _args[16];
lean_object* v___y_366_ = _args[17];
lean_object* v___y_367_ = _args[18];
_start:
{
uint8_t v___x_6786__boxed_368_; uint8_t v___x_6790__boxed_369_; lean_object* v_res_370_; 
v___x_6786__boxed_368_ = lean_unbox(v___x_349_);
v___x_6790__boxed_369_ = lean_unbox(v___x_354_);
v_res_370_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0(v___x_6786__boxed_368_, v___x_350_, v___x_351_, v___x_352_, v_discr_353_, v___x_6790__boxed_369_, v___x_355_, v___x_356_, v_alts_357_, v_altsArr_358_, v_rhs_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec_ref(v_altsArr_358_);
lean_dec(v___x_356_);
lean_dec(v___x_355_);
return v_res_370_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__1(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__0));
v___x_373_ = l_Lean_stringToMessageData(v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__1___boxed(lean_object** _args){
lean_object* v___x_374_ = _args[0];
lean_object* v_pattern_375_ = _args[1];
lean_object* v_i_376_ = _args[2];
lean_object* v___x_377_ = _args[3];
lean_object* v_altsArr_378_ = _args[4];
lean_object* v_discr_379_ = _args[5];
lean_object* v_alts_380_ = _args[6];
lean_object* v_dec_381_ = _args[7];
lean_object* v_rhs_382_ = _args[8];
lean_object* v___y_383_ = _args[9];
lean_object* v___y_384_ = _args[10];
lean_object* v___y_385_ = _args[11];
lean_object* v___y_386_ = _args[12];
lean_object* v___y_387_ = _args[13];
lean_object* v___y_388_ = _args[14];
lean_object* v___y_389_ = _args[15];
lean_object* v___y_390_ = _args[16];
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__1(v___x_374_, v_pattern_375_, v_i_376_, v___x_377_, v_altsArr_378_, v_discr_379_, v_alts_380_, v_dec_381_, v_rhs_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___x_377_);
lean_dec(v_i_376_);
return v_res_391_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__3(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__2));
v___x_394_ = l_Lean_stringToMessageData(v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch(lean_object* v_discr_395_, lean_object* v_alts_396_, lean_object* v_dec_397_, lean_object* v_i_398_, lean_object* v_altsArr_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = lean_array_get_size(v_altsArr_399_);
v___x_409_ = lean_nat_dec_lt(v_i_398_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v_elseSeq_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; uint8_t v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___f_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec(v_i_398_);
v___x_410_ = lean_unsigned_to_nat(1u);
v___x_411_ = l_Lean_Syntax_getArg(v_alts_396_, v___x_410_);
v___x_412_ = lean_unsigned_to_nat(3u);
v_elseSeq_413_ = l_Lean_Syntax_getArg(v___x_411_, v___x_412_);
lean_dec(v___x_411_);
v___x_414_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__1, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__1);
v___x_415_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__0));
v___x_416_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__1));
v___x_417_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__2));
v___x_418_ = 1;
v___x_419_ = lean_box(v___x_409_);
v___x_420_ = lean_box(v___x_418_);
v___f_421_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__0___boxed), 19, 10);
lean_closure_set(v___f_421_, 0, v___x_419_);
lean_closure_set(v___f_421_, 1, v___x_415_);
lean_closure_set(v___f_421_, 2, v___x_416_);
lean_closure_set(v___f_421_, 3, v___x_417_);
lean_closure_set(v___f_421_, 4, v_discr_395_);
lean_closure_set(v___f_421_, 5, v___x_420_);
lean_closure_set(v___f_421_, 6, v___x_410_);
lean_closure_set(v___f_421_, 7, v___x_412_);
lean_closure_set(v___f_421_, 8, v_alts_396_);
lean_closure_set(v___f_421_, 9, v_altsArr_399_);
v___x_422_ = lean_box(v___x_418_);
lean_inc(v_elseSeq_413_);
v___x_423_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_423_, 0, v_elseSeq_413_);
lean_closure_set(v___x_423_, 1, v_dec_397_);
lean_closure_set(v___x_423_, 2, v___x_422_);
v___x_424_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_414_, v___x_423_, v___f_421_, v_elseSeq_413_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
lean_dec(v_elseSeq_413_);
return v___x_424_;
}
else
{
lean_object* v___x_425_; lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_425_ = lean_array_fget(v_altsArr_399_, v_i_398_);
v___x_426_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__21));
lean_inc(v___x_425_);
v___x_427_ = l_Lean_Syntax_isOfKind(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
lean_dec(v___x_425_);
lean_dec_ref(v_altsArr_399_);
lean_dec(v_i_398_);
lean_dec_ref(v_dec_397_);
lean_dec(v_alts_396_);
lean_dec(v_discr_395_);
v___x_428_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg();
return v___x_428_;
}
else
{
lean_object* v___x_429_; lean_object* v_pattern_430_; lean_object* v___f_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_429_ = lean_unsigned_to_nat(1u);
v_pattern_430_ = l_Lean_Syntax_getArg(v___x_425_, v___x_429_);
lean_inc_ref(v_dec_397_);
lean_inc_n(v_pattern_430_, 2);
v___f_431_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__1___boxed), 17, 8);
lean_closure_set(v___f_431_, 0, v___x_426_);
lean_closure_set(v___f_431_, 1, v_pattern_430_);
lean_closure_set(v___f_431_, 2, v_i_398_);
lean_closure_set(v___f_431_, 3, v___x_429_);
lean_closure_set(v___f_431_, 4, v_altsArr_399_);
lean_closure_set(v___f_431_, 5, v_discr_395_);
lean_closure_set(v___f_431_, 6, v_alts_396_);
lean_closure_set(v___f_431_, 7, v_dec_397_);
v___x_432_ = lean_unsigned_to_nat(3u);
v___x_433_ = l_Lean_Syntax_getArg(v___x_425_, v___x_432_);
lean_dec(v___x_425_);
v___x_434_ = l_Lean_Elab_Do_getExprPatternVarsEx___redArg(v_pattern_430_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_436_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_a_435_);
lean_dec_ref_known(v___x_434_, 1);
v___x_436_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v_a_435_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
lean_dec(v_a_435_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
lean_dec_ref_known(v___x_436_, 1);
v___x_437_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__3, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___closed__3);
v___x_438_ = l_Lean_MessageData_ofSyntax(v_pattern_430_);
v___x_439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = lean_box(v___x_409_);
lean_inc(v___x_433_);
v___x_441_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_441_, 0, v___x_433_);
lean_closure_set(v___x_441_, 1, v_dec_397_);
lean_closure_set(v___x_441_, 2, v___x_440_);
v___x_442_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_439_, v___x_441_, v___f_431_, v___x_433_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
lean_dec(v___x_433_);
return v___x_442_;
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_dec(v___x_433_);
lean_dec_ref(v___f_431_);
lean_dec(v_pattern_430_);
lean_dec_ref(v_dec_397_);
v_a_443_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_436_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_436_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
lean_dec(v___x_433_);
lean_dec_ref(v___f_431_);
lean_dec(v_pattern_430_);
lean_dec_ref(v_dec_397_);
v_a_451_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_434_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_434_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___lam__1(lean_object* v___x_459_, lean_object* v_pattern_460_, lean_object* v_i_461_, lean_object* v___x_462_, lean_object* v_altsArr_463_, lean_object* v_discr_464_, lean_object* v_alts_465_, lean_object* v_dec_466_, lean_object* v_rhs_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_ref_476_; uint8_t v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v_ref_476_ = lean_ctor_get(v___y_473_, 2);
v___x_477_ = 0;
v___x_478_ = l_Lean_SourceInfo_fromRef(v_ref_476_, v___x_477_);
v___x_479_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__22));
lean_inc_n(v___x_478_, 2);
v___x_480_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_478_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__23));
v___x_482_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_478_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
v___x_483_ = l_Lean_Syntax_node4(v___x_478_, v___x_459_, v___x_480_, v_pattern_460_, v___x_482_, v_rhs_467_);
v___x_484_ = lean_nat_add(v_i_461_, v___x_462_);
v___x_485_ = lean_array_fset(v_altsArr_463_, v_i_461_, v___x_483_);
v___x_486_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch(v_discr_464_, v_alts_465_, v_dec_466_, v___x_484_, v___x_485_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch___boxed(lean_object* v_discr_487_, lean_object* v_alts_488_, lean_object* v_dec_489_, lean_object* v_i_490_, lean_object* v_altsArr_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch(v_discr_487_, v_alts_488_, v_dec_489_, v_i_490_, v_altsArr_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
lean_dec_ref(v_a_492_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_spec__0(size_t v_sz_501_, size_t v_i_502_, lean_object* v_bs_503_){
_start:
{
uint8_t v___x_504_; 
v___x_504_ = lean_usize_dec_lt(v_i_502_, v_sz_501_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
v___x_505_ = l_unsafeCast___redArg(v_bs_503_);
lean_dec_ref(v_bs_503_);
return v___x_505_;
}
else
{
lean_object* v_v_506_; lean_object* v___x_507_; lean_object* v_bs_x27_508_; lean_object* v___x_509_; size_t v___x_510_; size_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v_v_506_ = lean_array_uget(v_bs_503_, v_i_502_);
v___x_507_ = lean_unsigned_to_nat(0u);
v_bs_x27_508_ = lean_array_uset(v_bs_503_, v_i_502_, v___x_507_);
v___x_509_ = l_unsafeCast___redArg(v_v_506_);
lean_dec(v_v_506_);
v___x_510_ = ((size_t)1ULL);
v___x_511_ = lean_usize_add(v_i_502_, v___x_510_);
v___x_512_ = l_unsafeCast___redArg(v___x_509_);
lean_dec(v___x_509_);
v___x_513_ = lean_array_uset(v_bs_x27_508_, v_i_502_, v___x_512_);
v_i_502_ = v___x_511_;
v_bs_503_ = v___x_513_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_spec__0___boxed(lean_object* v_sz_515_, lean_object* v_i_516_, lean_object* v_bs_517_){
_start:
{
size_t v_sz_boxed_518_; size_t v_i_boxed_519_; lean_object* v_res_520_; 
v_sz_boxed_518_ = lean_unbox_usize(v_sz_515_);
lean_dec(v_sz_515_);
v_i_boxed_519_ = lean_unbox_usize(v_i_516_);
lean_dec(v_i_516_);
v_res_520_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_spec__0(v_sz_boxed_518_, v_i_boxed_519_, v_bs_517_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___lam__0(lean_object* v_alts_521_, lean_object* v_discr_522_, lean_object* v_dec_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; size_t v_sz_535_; size_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_532_ = lean_unsigned_to_nat(0u);
v___x_533_ = l_Lean_Syntax_getArg(v_alts_521_, v___x_532_);
v___x_534_ = l_Lean_Syntax_getArgs(v___x_533_);
lean_dec(v___x_533_);
v_sz_535_ = lean_array_size(v___x_534_);
v___x_536_ = ((size_t)0ULL);
v___x_537_ = l_unsafeCast___redArg(v___x_534_);
lean_dec_ref(v___x_534_);
v___x_538_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_spec__0(v_sz_535_, v___x_536_, v___x_537_);
v___x_539_ = l_unsafeCast___redArg(v___x_538_);
lean_dec_ref(v___x_538_);
v___x_540_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch(v_discr_522_, v_alts_521_, v_dec_523_, v___x_532_, v___x_539_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___lam__0___boxed(lean_object* v_alts_541_, lean_object* v_discr_542_, lean_object* v_dec_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___lam__0(v_alts_541_, v_discr_542_, v_dec_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta(lean_object* v_info_553_, lean_object* v_discr_554_, lean_object* v_alts_555_, lean_object* v_dec_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_){
_start:
{
lean_object* v___f_565_; lean_object* v___x_566_; 
v___f_565_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___lam__0___boxed), 11, 2);
lean_closure_set(v___f_565_, 0, v_alts_555_);
lean_closure_set(v___f_565_, 1, v_discr_554_);
v___x_566_ = l_Lean_Elab_Do_DoElemCont_withDuplicableCont(v_dec_556_, v_info_553_, v___f_565_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___boxed(lean_object* v_info_567_, lean_object* v_discr_568_, lean_object* v_alts_569_, lean_object* v_dec_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta(v_info_567_, v_discr_568_, v_alts_569_, v_dec_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
lean_dec(v_a_575_);
lean_dec_ref(v_a_574_);
lean_dec(v_a_573_);
lean_dec_ref(v_a_572_);
lean_dec_ref(v_a_571_);
return v_res_579_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__7(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__6));
v___x_597_ = l_String_toRawSubstring_x27(v___x_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr(lean_object* v_stx_611_, lean_object* v_dec_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_){
_start:
{
lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v_metaFalseTk_x3f_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; 
v___x_621_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8));
lean_inc(v_stx_611_);
v___x_622_ = l_Lean_Syntax_isOfKind(v_stx_611_, v___x_621_);
if (v___x_622_ == 0)
{
lean_object* v___x_683_; 
lean_dec_ref(v_dec_612_);
lean_dec(v_stx_611_);
v___x_683_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg();
return v___x_683_;
}
else
{
lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_684_ = lean_unsigned_to_nat(1u);
v___x_685_ = l_Lean_Syntax_getArg(v_stx_611_, v___x_684_);
v___x_686_ = l_Lean_Syntax_isNone(v___x_685_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_687_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_685_);
v___x_688_ = l_Lean_Syntax_matchesNull(v___x_685_, v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; 
lean_dec(v___x_685_);
lean_dec_ref(v_dec_612_);
lean_dec(v_stx_611_);
v___x_689_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta_elabMatch_spec__0___redArg();
return v___x_689_;
}
else
{
lean_object* v___x_690_; lean_object* v_metaFalseTk_x3f_691_; lean_object* v___x_692_; 
v___x_690_ = lean_unsigned_to_nat(4u);
v_metaFalseTk_x3f_691_ = l_Lean_Syntax_getArg(v___x_685_, v___x_690_);
lean_dec(v___x_685_);
v___x_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_692_, 0, v_metaFalseTk_x3f_691_);
v_metaFalseTk_x3f_624_ = v___x_692_;
v___y_625_ = v_a_613_;
v___y_626_ = v_a_614_;
v___y_627_ = v_a_615_;
v___y_628_ = v_a_616_;
v___y_629_ = v_a_617_;
v___y_630_ = v_a_618_;
v___y_631_ = v_a_619_;
goto v___jp_623_;
}
}
else
{
lean_object* v___x_693_; 
lean_dec(v___x_685_);
v___x_693_ = lean_box(0);
v_metaFalseTk_x3f_624_ = v___x_693_;
v___y_625_ = v_a_613_;
v___y_626_ = v_a_614_;
v___y_627_ = v_a_615_;
v___y_628_ = v_a_616_;
v___y_629_ = v_a_617_;
v___y_630_ = v_a_618_;
v___y_631_ = v_a_619_;
goto v___jp_623_;
}
}
v___jp_623_:
{
lean_object* v___x_632_; lean_object* v_discr_633_; lean_object* v___x_634_; lean_object* v_alts_635_; lean_object* v___x_636_; 
v___x_632_ = lean_unsigned_to_nat(2u);
v_discr_633_ = l_Lean_Syntax_getArg(v_stx_611_, v___x_632_);
v___x_634_ = lean_unsigned_to_nat(4u);
v_alts_635_ = l_Lean_Syntax_getArg(v_stx_611_, v___x_634_);
v___x_636_ = l_Lean_Elab_Do_inferControlInfoElem(v_stx_611_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_636_) == 0)
{
if (lean_obj_tag(v_metaFalseTk_x3f_624_) == 0)
{
if (v___x_622_ == 0)
{
lean_object* v_a_637_; lean_object* v___x_638_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
lean_inc(v_a_637_);
lean_dec_ref_known(v___x_636_, 1);
v___x_638_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta(v_a_637_, v_discr_633_, v_alts_635_, v_dec_612_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_638_;
}
else
{
lean_object* v_a_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v_a_639_ = lean_ctor_get(v___x_636_, 0);
lean_inc(v_a_639_);
lean_dec_ref_known(v___x_636_, 1);
v___x_640_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__1));
v___x_641_ = l_Lean_Core_mkFreshUserName(v___x_640_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_toCold_642_; lean_object* v_a_643_; lean_object* v_ref_644_; lean_object* v_quotContext_645_; lean_object* v_currMacroScope_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; lean_object* v___x_664_; 
v_toCold_642_ = lean_ctor_get(v___y_630_, 0);
v_a_643_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_641_, 1);
v_ref_644_ = lean_ctor_get(v___y_630_, 2);
v_quotContext_645_ = lean_ctor_get(v_toCold_642_, 8);
v_currMacroScope_646_ = lean_ctor_get(v_toCold_642_, 9);
v___x_647_ = 0;
v___x_648_ = l_Lean_mkIdentFrom(v_discr_633_, v_a_643_, v___x_647_);
v___x_649_ = l_Lean_SourceInfo_fromRef(v_ref_644_, v___x_647_);
v___x_650_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__3));
v___x_651_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__5));
v___x_652_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__7, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__7_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__7);
v___x_653_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__8));
lean_inc(v_currMacroScope_646_);
lean_inc(v_quotContext_645_);
v___x_654_ = l_Lean_addMacroScope(v_quotContext_645_, v___x_653_, v_currMacroScope_646_);
v___x_655_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___closed__12));
lean_inc_n(v___x_649_, 3);
v___x_656_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_656_, 0, v___x_649_);
lean_ctor_set(v___x_656_, 1, v___x_652_);
lean_ctor_set(v___x_656_, 2, v___x_654_);
lean_ctor_set(v___x_656_, 3, v___x_655_);
v___x_657_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__11));
v___x_658_ = l_Lean_Syntax_node1(v___x_649_, v___x_657_, v_discr_633_);
v___x_659_ = l_Lean_Syntax_node2(v___x_649_, v___x_651_, v___x_656_, v___x_658_);
v___x_660_ = l_Lean_Syntax_node1(v___x_649_, v___x_650_, v___x_659_);
v___x_661_ = lean_box(0);
lean_inc(v___x_648_);
v___x_662_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta___boxed), 12, 4);
lean_closure_set(v___x_662_, 0, v_a_639_);
lean_closure_set(v___x_662_, 1, v___x_648_);
lean_closure_set(v___x_662_, 2, v_alts_635_);
lean_closure_set(v___x_662_, 3, v_dec_612_);
v___x_663_ = 0;
v___x_664_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_648_, v___x_661_, v___x_660_, v___x_662_, v___x_663_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_664_;
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
lean_dec(v_a_639_);
lean_dec(v_alts_635_);
lean_dec(v_discr_633_);
lean_dec_ref(v_dec_612_);
v_a_665_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_641_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_641_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
}
else
{
lean_object* v_a_673_; lean_object* v___x_674_; 
lean_dec_ref_known(v_metaFalseTk_x3f_624_, 1);
v_a_673_ = lean_ctor_get(v___x_636_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_636_, 1);
v___x_674_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr_elabDoMatchExprNoMeta(v_a_673_, v_discr_633_, v_alts_635_, v_dec_612_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_674_;
}
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
lean_dec(v_alts_635_);
lean_dec(v_discr_633_);
lean_dec(v_metaFalseTk_x3f_624_);
lean_dec_ref(v_dec_612_);
v_a_675_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_636_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_636_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___boxed(lean_object* v_stx_694_, lean_object* v_dec_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr(v_stx_694_, v_dec_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
lean_dec(v_a_698_);
lean_dec_ref(v_a_697_);
lean_dec_ref(v_a_696_);
return v_res_704_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__1(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_706_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__0));
v___x_707_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1___closed__14);
v___x_708_ = l_Lean_Name_str___override(v___x_707_, v___x_706_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1(){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_710_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_711_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___closed__8));
v___x_712_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__1, &l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___closed__1);
v___x_713_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___boxed), 10, 0);
v___x_714_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_710_, v___x_711_, v___x_712_, v___x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1___boxed(lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1();
return v_res_716_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_MatchExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetExpr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_expandDoLetMetaExpr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr___regBuiltin___private_Lean_Elab_BuiltinDo_MatchExpr_0__Lean_Elab_Do_elabDoMatchExpr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_MatchExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_MatchExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_MatchExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_MatchExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_MatchExpr(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.ConfigEval.Builtins
// Imports: public import Lean.Elab.ConfigEval.Commands public import Lean.Elab.ConfigEval.DeriveEvalConfigItem import Lean.Linter.MissingDocs
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_MissingDocs_mkSimpleHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_MissingDocs_addBuiltinHandler(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Term_elabTermAndSynthesize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_deriveEvalExprUsingMetaEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*, uint8_t);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Elab_ConfigEval_defEvalConfigItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ensureEvalTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ensureEvalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ConfigEval"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ensureEvalTermInstance"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__7_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__7_value),LEAN_SCALAR_PTR_LITERAL(188, 241, 114, 217, 47, 253, 4, 219)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "elabEnsureEvalTermInstance"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(200, 194, 196, 169, 20, 95, 98, 52)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ensureEvalExprInstance"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(170, 108, 175, 10, 248, 93, 94, 3)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "elabEnsureEvalExprInstance"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 24, 116, 13, 80, 232, 32, 92)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "ensureEvalTermExprInstances"};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 66, 158, 168, 204, 221, 79, 184)}};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ensure_eval_term_instance"};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ensure_eval_expr_instance"};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6;
static const lean_array_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "expandEnsureEvalTermExprInstance"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(210, 5, 152, 25, 120, 11, 48, 44)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "deriveEvalExprUsingMeta"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 116, 75, 98, 130, 21, 177, 80)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "elabDeriveEvalExprUsingMeta"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 91, 14, 102, 74, 139, 51, 157)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "configEntry"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 149, 160, 204, 146, 200, 218, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "configEntryOmit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 140, 111, 202, 251, 168, 170, 75)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "configEntryHandler"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(78, 145, 34, 65, 77, 53, 67, 42)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "configEntryHandlerKey"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(25, 190, 73, 235, 170, 184, 39, 210)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "configEntryHandlerKeyPrefix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(165, 45, 37, 228, 14, 221, 193, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "configEntryHandlerKeyWildcard"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(81, 192, 13, 21, 20, 44, 232, 93)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0_value),((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0_value)}};
static const lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "configEntries"};
static const lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__2_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 127, 108, 166, 156, 181, 170, 30)}};
static const lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "defEvalConfigItemCmd"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 50, 201, 157, 117, 233, 235, 218)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__3_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "elabDefEvalConfigItemCmd"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(170, 139, 45, 169, 210, 187, 151, 127)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "config elab"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__2 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__2_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "strictImplicitBinder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__4 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__4_value),LEAN_SCALAR_PTR_LITERAL(125, 223, 215, 186, 222, 17, 242, 189)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__6 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__6_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unsupported binder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__0_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__1_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__2 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__2_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__3 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__3_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__4 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__4_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__5 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__5_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.Syntax"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__6 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__8 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__8_value),LEAN_SCALAR_PTR_LITERAL(45, 144, 98, 72, 115, 31, 20, 74)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__10 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__10_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "binderDefault"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__11 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__11_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 97, 198, 223, 242, 31)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__13 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__13_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__14 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__14_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "term{}"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__15 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__15_value),LEAN_SCALAR_PTR_LITERAL(44, 141, 217, 101, 193, 131, 35, 71)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__16 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__16_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__17 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__17_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__18 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__18_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__19 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__19_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__21 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__21_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__23 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__23_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__23_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__27 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value_aux_0),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(155, 20, 163, 238, 100, 115, 187, 44)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__29 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__29_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__30 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__30_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__32 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__32_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__35 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__35_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__35_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__37 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__37_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__37_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__39 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__39_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__39_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__41 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__41_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__42 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__42_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__42_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__44 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__44_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__44_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__46 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__46_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__46_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__48 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__48_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__48_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__50 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__50_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__50_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__52 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__52_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "EvalConfigItem.defaultOnErr"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__53 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__53_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "defaultOnErr"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__55 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__55_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cfgType\?"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56_value),LEAN_SCALAR_PTR_LITERAL(58, 117, 29, 104, 229, 209, 250, 101)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__58 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__58_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkConst"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59_value),LEAN_SCALAR_PTR_LITERAL(37, 117, 8, 90, 26, 147, 93, 249)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__61 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__61_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62_value_aux_0),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59_value),LEAN_SCALAR_PTR_LITERAL(28, 38, 193, 74, 165, 73, 8, 119)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doubleQuotedName"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__63 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__63_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__63_value),LEAN_SCALAR_PTR_LITERAL(194, 121, 78, 150, 98, 156, 35, 157)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__65 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__65_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__68 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__68_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__69 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__69_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_1),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__68_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__69_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__71 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__71_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__72 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__72_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "logExceptions"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73_value),LEAN_SCALAR_PTR_LITERAL(118, 86, 185, 206, 146, 131, 198, 232)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cfg"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__76 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__76_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__76_value),LEAN_SCALAR_PTR_LITERAL(193, 249, 49, 54, 148, 135, 57, 21)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__77 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__77_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "init"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__79 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__79_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__79_value),LEAN_SCALAR_PTR_LITERAL(72, 5, 38, 228, 229, 249, 19, 211)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__80 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__80_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "EvalConfigItem.setConfig'"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__84 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__84_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "EvalConfigItem"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "setConfig'"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86_value),LEAN_SCALAR_PTR_LITERAL(22, 247, 23, 93, 100, 235, 111, 189)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88_value_aux_0),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87_value),LEAN_SCALAR_PTR_LITERAL(64, 183, 169, 121, 35, 91, 151, 47)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86_value),LEAN_SCALAR_PTR_LITERAL(16, 84, 54, 65, 212, 237, 250, 172)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_3),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87_value),LEAN_SCALAR_PTR_LITERAL(190, 187, 222, 86, 238, 13, 118, 125)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__90 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__90_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__90_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__91 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__91_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eval"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92_value),LEAN_SCALAR_PTR_LITERAL(12, 151, 53, 232, 164, 85, 213, 132)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__94 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__94_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__95 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__95_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__95_value),LEAN_SCALAR_PTR_LITERAL(226, 89, 129, 113, 173, 121, 169, 188)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "onErr"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98_value),LEAN_SCALAR_PTR_LITERAL(228, 46, 52, 217, 218, 46, 201, 51)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__100 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__100_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__101 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__101_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "evalConfigItem"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__104 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__104_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__104_value),LEAN_SCALAR_PTR_LITERAL(180, 209, 241, 176, 164, 63, 27, 216)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__105 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__105_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108_value),LEAN_SCALAR_PTR_LITERAL(136, 104, 45, 91, 146, 14, 86, 4)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "def_eval_config_item"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__110 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__110_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "for"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__111 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__111_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "declareCoreConfigElab"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 30, 123, 201, 158, 66, 128, 147)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Core"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "CoreM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__5_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__4_value),LEAN_SCALAR_PTR_LITERAL(194, 126, 120, 188, 150, 235, 117, 203)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__5_value),LEAN_SCALAR_PTR_LITERAL(115, 114, 191, 177, 45, 189, 121, 141)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__8_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__8_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "elabDeclareCoreConfigElab"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 169, 247, 122, 199, 9, 42, 189)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_&&_"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 195, 203, 117, 177, 125, 57, 22)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "&&"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "read"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(190, 16, 165, 175, 2, 23, 214, 231)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MonadReader"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__16 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__16_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(11, 173, 117, 41, 17, 79, 142, 168)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(46, 74, 177, 199, 30, 224, 37, 71)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__18 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__18_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "errToSorry"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(167, 166, 138, 245, 152, 171, 48, 109)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__23 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__23_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "declareTermConfigElab"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__0_value),LEAN_SCALAR_PTR_LITERAL(145, 108, 165, 103, 249, 154, 177, 123)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___boxed, .m_arity = 8, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value)} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "TermElabM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__3_value),LEAN_SCALAR_PTR_LITERAL(85, 85, 78, 208, 80, 136, 131, 165)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__6_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "elabDeclareTermConfigElab"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 129, 201, 91, 36, 24, 34, 115)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "recover"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 177, 38, 2, 101, 67, 237, 158)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "declareTacticConfig"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 17, 172, 247, 161, 0, 3, 195)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___boxed, .m_arity = 8, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value)} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TacticM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 63, 151, 54, 27, 84, 190, 214)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "elabDeclareTacticConfig"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 103, 219, 85, 28, 93, 217, 46)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Command.liftTermElabM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "liftTermElabM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "declareCommandConfig"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 49, 172, 65, 140, 146, 127, 103)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___boxed, .m_arity = 8, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value)} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "CommandElabM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(8, 183, 159, 6, 104, 246, 8, 218)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "elabDeclareCommandConfig"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 75, 209, 24, 31, 135, 140, 54)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___boxed(lean_object* v_00_u03b1_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0(v_00_u03b1_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg(lean_object* v_a_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg___boxed(lean_object* v_a_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg(v_a_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1(lean_object* v_00_u03b1_37_, lean_object* v_a_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed(lean_object* v_00_u03b1_47_, lean_object* v_a_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1(v_00_u03b1_47_, v_a_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance(lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_vis_x3f_79_; lean_object* v___y_80_; lean_object* v___y_81_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8));
lean_inc(v_x_74_);
v___x_106_ = l_Lean_Syntax_isOfKind(v_x_74_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
lean_dec(v_x_74_);
v___x_107_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_107_;
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_109_ = l_Lean_Syntax_getArg(v_x_74_, v___x_108_);
v___x_110_ = l_Lean_Syntax_isNone(v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_109_);
v___x_112_ = l_Lean_Syntax_matchesNull(v___x_109_, v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; 
lean_dec(v___x_109_);
lean_dec(v_x_74_);
v___x_113_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_113_;
}
else
{
lean_object* v_vis_x3f_114_; lean_object* v___x_115_; 
v_vis_x3f_114_ = l_Lean_Syntax_getArg(v___x_109_, v___x_108_);
lean_dec(v___x_109_);
v___x_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_115_, 0, v_vis_x3f_114_);
v_vis_x3f_79_ = v___x_115_;
v___y_80_ = v_a_75_;
v___y_81_ = v_a_76_;
goto v___jp_78_;
}
}
else
{
lean_object* v___x_116_; 
lean_dec(v___x_109_);
v___x_116_ = lean_box(0);
v_vis_x3f_79_ = v___x_116_;
v___y_80_ = v_a_75_;
v___y_81_ = v_a_76_;
goto v___jp_78_;
}
}
v___jp_78_:
{
lean_object* v___x_82_; lean_object* v_kind_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_82_ = lean_unsigned_to_nat(1u);
v_kind_83_ = l_Lean_Syntax_getArg(v_x_74_, v___x_82_);
v___x_84_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v_kind_83_);
v___x_85_ = l_Lean_Syntax_isOfKind(v_kind_83_, v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
lean_dec(v_kind_83_);
lean_dec(v_vis_x3f_79_);
lean_dec(v_x_74_);
v___x_86_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_86_;
}
else
{
lean_object* v___x_87_; lean_object* v_tk_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_87_ = lean_unsigned_to_nat(2u);
v_tk_88_ = l_Lean_Syntax_getArg(v_x_74_, v___x_87_);
v___x_89_ = lean_unsigned_to_nat(3u);
v___x_90_ = l_Lean_Syntax_getArg(v_x_74_, v___x_89_);
lean_dec(v_x_74_);
v___x_91_ = lean_box(0);
lean_inc(v___x_90_);
v___x_92_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_92_, 0, v___x_90_);
lean_closure_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed), 9, 2);
lean_closure_set(v___x_93_, 0, lean_box(0));
lean_closure_set(v___x_93_, 1, v___x_92_);
v___x_94_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_93_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_96_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc(v_a_95_);
lean_dec_ref_known(v___x_94_, 1);
v___x_96_ = l_Lean_Elab_ConfigEval_ensureEvalTerm(v_vis_x3f_79_, v_kind_83_, v_tk_88_, v___x_90_, v_a_95_, v___y_80_, v___y_81_);
return v___x_96_;
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
lean_dec(v___x_90_);
lean_dec(v_tk_88_);
lean_dec(v_kind_83_);
lean_dec(v_vis_x3f_79_);
v_a_97_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_94_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_94_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___boxed(lean_object* v_x_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance(v_x_117_, v_a_118_, v_a_119_);
lean_dec(v_a_119_);
lean_dec_ref(v_a_118_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1(){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_129_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_130_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8));
v___x_131_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1));
v___x_132_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___boxed), 4, 0);
v___x_133_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_129_, v___x_130_, v___x_131_, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___boxed(lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1();
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance(lean_object* v_x_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_vis_x3f_147_; lean_object* v___y_148_; lean_object* v___y_149_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1));
lean_inc(v_x_142_);
v___x_174_ = l_Lean_Syntax_isOfKind(v_x_142_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
lean_dec(v_x_142_);
v___x_175_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_175_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = l_Lean_Syntax_getArg(v_x_142_, v___x_176_);
v___x_178_ = l_Lean_Syntax_isNone(v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_177_);
v___x_180_ = l_Lean_Syntax_matchesNull(v___x_177_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; 
lean_dec(v___x_177_);
lean_dec(v_x_142_);
v___x_181_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_181_;
}
else
{
lean_object* v_vis_x3f_182_; lean_object* v___x_183_; 
v_vis_x3f_182_ = l_Lean_Syntax_getArg(v___x_177_, v___x_176_);
lean_dec(v___x_177_);
v___x_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_183_, 0, v_vis_x3f_182_);
v_vis_x3f_147_ = v___x_183_;
v___y_148_ = v_a_143_;
v___y_149_ = v_a_144_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_184_; 
lean_dec(v___x_177_);
v___x_184_ = lean_box(0);
v_vis_x3f_147_ = v___x_184_;
v___y_148_ = v_a_143_;
v___y_149_ = v_a_144_;
goto v___jp_146_;
}
}
v___jp_146_:
{
lean_object* v___x_150_; lean_object* v_kind_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_150_ = lean_unsigned_to_nat(1u);
v_kind_151_ = l_Lean_Syntax_getArg(v_x_142_, v___x_150_);
v___x_152_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v_kind_151_);
v___x_153_ = l_Lean_Syntax_isOfKind(v_kind_151_, v___x_152_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; 
lean_dec(v_kind_151_);
lean_dec(v_vis_x3f_147_);
lean_dec(v_x_142_);
v___x_154_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_154_;
}
else
{
lean_object* v___x_155_; lean_object* v_tk_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_155_ = lean_unsigned_to_nat(2u);
v_tk_156_ = l_Lean_Syntax_getArg(v_x_142_, v___x_155_);
v___x_157_ = lean_unsigned_to_nat(3u);
v___x_158_ = l_Lean_Syntax_getArg(v_x_142_, v___x_157_);
lean_dec(v_x_142_);
v___x_159_ = lean_box(0);
lean_inc(v___x_158_);
v___x_160_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_160_, 0, v___x_158_);
lean_closure_set(v___x_160_, 1, v___x_159_);
v___x_161_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed), 9, 2);
lean_closure_set(v___x_161_, 0, lean_box(0));
lean_closure_set(v___x_161_, 1, v___x_160_);
v___x_162_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_161_, v___y_148_, v___y_149_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_164_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_162_, 1);
v___x_164_ = l_Lean_Elab_ConfigEval_ensureEvalExpr(v_vis_x3f_147_, v_kind_151_, v_tk_156_, v___x_158_, v_a_163_, v___y_148_, v___y_149_);
return v___x_164_;
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
lean_dec(v___x_158_);
lean_dec(v_tk_156_);
lean_dec(v_kind_151_);
lean_dec(v_vis_x3f_147_);
v_a_165_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_162_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_162_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___boxed(lean_object* v_x_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance(v_x_185_, v_a_186_, v_a_187_);
lean_dec(v_a_187_);
lean_dec_ref(v_a_186_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1(){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_197_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_198_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1));
v___x_199_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1));
v___x_200_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___boxed), 4, 0);
v___x_201_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_197_, v___x_198_, v___x_199_, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___boxed(lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1();
return v_res_203_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6(void){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l_Array_mkArray0___redArg();
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance(lean_object* v_x_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___y_224_; lean_object* v___y_225_; lean_object* v___y_226_; lean_object* v___y_227_; lean_object* v___y_228_; lean_object* v___y_229_; lean_object* v___y_230_; lean_object* v___y_231_; lean_object* v___y_232_; lean_object* v_vis_x3f_246_; lean_object* v___y_247_; lean_object* v___y_248_; 
v___x_221_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1));
lean_inc(v_x_218_);
v___x_222_ = l_Lean_Syntax_isOfKind(v_x_218_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_267_; 
lean_dec(v_x_218_);
v___x_267_ = l_Lean_Macro_throwUnsupported___redArg(v_a_220_);
return v___x_267_;
}
else
{
lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_268_ = lean_unsigned_to_nat(0u);
v___x_269_ = l_Lean_Syntax_getArg(v_x_218_, v___x_268_);
v___x_270_ = l_Lean_Syntax_isNone(v___x_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_269_);
v___x_272_ = l_Lean_Syntax_matchesNull(v___x_269_, v___x_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; 
lean_dec(v___x_269_);
lean_dec(v_x_218_);
v___x_273_ = l_Lean_Macro_throwUnsupported___redArg(v_a_220_);
return v___x_273_;
}
else
{
lean_object* v_vis_x3f_274_; lean_object* v___x_275_; 
v_vis_x3f_274_ = l_Lean_Syntax_getArg(v___x_269_, v___x_268_);
lean_dec(v___x_269_);
v___x_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_275_, 0, v_vis_x3f_274_);
v_vis_x3f_246_ = v___x_275_;
v___y_247_ = v_a_219_;
v___y_248_ = v_a_220_;
goto v___jp_245_;
}
}
else
{
lean_object* v___x_276_; 
lean_dec(v___x_269_);
v___x_276_ = lean_box(0);
v_vis_x3f_246_ = v___x_276_;
v___y_247_ = v_a_219_;
v___y_248_ = v_a_220_;
goto v___jp_245_;
}
}
v___jp_223_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_inc_ref(v___y_225_);
v___x_233_ = l_Array_append___redArg(v___y_225_, v___y_232_);
lean_dec_ref(v___y_232_);
lean_inc_n(v___y_230_, 2);
lean_inc_n(v___y_224_, 3);
v___x_234_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_234_, 0, v___y_224_);
lean_ctor_set(v___x_234_, 1, v___y_230_);
lean_ctor_set(v___x_234_, 2, v___x_233_);
v___x_235_ = l_Lean_SourceInfo_fromRef(v___y_229_, v___x_222_);
lean_dec(v___y_229_);
v___x_236_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__2));
lean_inc(v___x_235_);
v___x_237_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
lean_inc(v___y_226_);
lean_inc(v___y_227_);
lean_inc_ref(v___x_234_);
lean_inc(v___y_231_);
v___x_238_ = l_Lean_Syntax_node4(v___y_224_, v___y_231_, v___x_234_, v___y_227_, v___x_237_, v___y_226_);
v___x_239_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1));
v___x_240_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3));
v___x_241_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_235_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = l_Lean_Syntax_node4(v___y_224_, v___x_239_, v___x_234_, v___y_227_, v___x_241_, v___y_226_);
v___x_243_ = l_Lean_Syntax_node2(v___y_224_, v___y_230_, v___x_238_, v___x_242_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
lean_ctor_set(v___x_244_, 1, v___y_228_);
return v___x_244_;
}
v___jp_245_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_249_ = lean_unsigned_to_nat(1u);
v___x_250_ = l_Lean_Syntax_getArg(v_x_218_, v___x_249_);
v___x_251_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v___x_250_);
v___x_252_ = l_Lean_Syntax_isOfKind(v___x_250_, v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
lean_dec(v___x_250_);
lean_dec(v_vis_x3f_246_);
lean_dec(v_x_218_);
v___x_253_ = l_Lean_Macro_throwUnsupported___redArg(v___y_248_);
return v___x_253_;
}
else
{
lean_object* v_ref_254_; lean_object* v___x_255_; lean_object* v_tk_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_ref_254_ = lean_ctor_get(v___y_247_, 5);
v___x_255_ = lean_unsigned_to_nat(2u);
v_tk_256_ = l_Lean_Syntax_getArg(v_x_218_, v___x_255_);
v___x_257_ = lean_unsigned_to_nat(3u);
v___x_258_ = l_Lean_Syntax_getArg(v_x_218_, v___x_257_);
lean_dec(v_x_218_);
v___x_259_ = 0;
v___x_260_ = l_Lean_SourceInfo_fromRef(v_ref_254_, v___x_259_);
v___x_261_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
v___x_262_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8));
v___x_263_ = lean_obj_once(&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6, &l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6_once, _init_l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6);
if (lean_obj_tag(v_vis_x3f_246_) == 1)
{
lean_object* v_val_264_; lean_object* v___x_265_; 
v_val_264_ = lean_ctor_get(v_vis_x3f_246_, 0);
lean_inc(v_val_264_);
lean_dec_ref_known(v_vis_x3f_246_, 1);
v___x_265_ = l_Array_mkArray1___redArg(v_val_264_);
v___y_224_ = v___x_260_;
v___y_225_ = v___x_263_;
v___y_226_ = v___x_258_;
v___y_227_ = v___x_250_;
v___y_228_ = v___y_248_;
v___y_229_ = v_tk_256_;
v___y_230_ = v___x_261_;
v___y_231_ = v___x_262_;
v___y_232_ = v___x_265_;
goto v___jp_223_;
}
else
{
lean_object* v___x_266_; 
lean_dec(v_vis_x3f_246_);
v___x_266_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7));
v___y_224_ = v___x_260_;
v___y_225_ = v___x_263_;
v___y_226_ = v___x_258_;
v___y_227_ = v___x_250_;
v___y_228_ = v___y_248_;
v___y_229_ = v_tk_256_;
v___y_230_ = v___x_261_;
v___y_231_ = v___x_262_;
v___y_232_ = v___x_266_;
goto v___jp_223_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___boxed(lean_object* v_x_277_, lean_object* v_a_278_, lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance(v_x_277_, v_a_278_, v_a_279_);
lean_dec_ref(v_a_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1(){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_288_ = l_Lean_Elab_macroAttribute;
v___x_289_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1));
v___x_290_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1));
v___x_291_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___boxed), 3, 0);
v___x_292_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_288_, v___x_289_, v___x_290_, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___boxed(lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1();
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta(lean_object* v_x_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v_vis_x3f_306_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_332_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1));
lean_inc(v_x_301_);
v___x_333_ = l_Lean_Syntax_isOfKind(v_x_301_, v___x_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v_x_301_);
v___x_334_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_334_;
}
else
{
lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = l_Lean_Syntax_getArg(v_x_301_, v___x_335_);
v___x_337_ = l_Lean_Syntax_isNone(v___x_336_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_336_);
v___x_339_ = l_Lean_Syntax_matchesNull(v___x_336_, v___x_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; 
lean_dec(v___x_336_);
lean_dec(v_x_301_);
v___x_340_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_340_;
}
else
{
lean_object* v_vis_x3f_341_; lean_object* v___x_342_; 
v_vis_x3f_341_ = l_Lean_Syntax_getArg(v___x_336_, v___x_335_);
lean_dec(v___x_336_);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v_vis_x3f_341_);
v_vis_x3f_306_ = v___x_342_;
v___y_307_ = v_a_302_;
v___y_308_ = v_a_303_;
goto v___jp_305_;
}
}
else
{
lean_object* v___x_343_; 
lean_dec(v___x_336_);
v___x_343_ = lean_box(0);
v_vis_x3f_306_ = v___x_343_;
v___y_307_ = v_a_302_;
v___y_308_ = v_a_303_;
goto v___jp_305_;
}
}
v___jp_305_:
{
lean_object* v___x_309_; lean_object* v_kind_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_309_ = lean_unsigned_to_nat(1u);
v_kind_310_ = l_Lean_Syntax_getArg(v_x_301_, v___x_309_);
v___x_311_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v_kind_310_);
v___x_312_ = l_Lean_Syntax_isOfKind(v_kind_310_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; 
lean_dec(v_kind_310_);
lean_dec(v_vis_x3f_306_);
lean_dec(v_x_301_);
v___x_313_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_313_;
}
else
{
lean_object* v___x_314_; lean_object* v_tk_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_314_ = lean_unsigned_to_nat(2u);
v_tk_315_ = l_Lean_Syntax_getArg(v_x_301_, v___x_314_);
v___x_316_ = lean_unsigned_to_nat(3u);
v___x_317_ = l_Lean_Syntax_getArg(v_x_301_, v___x_316_);
lean_dec(v_x_301_);
v___x_318_ = lean_box(0);
lean_inc(v___x_317_);
v___x_319_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_319_, 0, v___x_317_);
lean_closure_set(v___x_319_, 1, v___x_318_);
v___x_320_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed), 9, 2);
lean_closure_set(v___x_320_, 0, lean_box(0));
lean_closure_set(v___x_320_, 1, v___x_319_);
v___x_321_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_320_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_321_) == 0)
{
lean_object* v_a_322_; lean_object* v___x_323_; 
v_a_322_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_a_322_);
lean_dec_ref_known(v___x_321_, 1);
v___x_323_ = l_Lean_Elab_ConfigEval_deriveEvalExprUsingMetaEval(v_vis_x3f_306_, v_kind_310_, v_tk_315_, v___x_317_, v_a_322_, v___y_307_, v___y_308_);
return v___x_323_;
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec(v___x_317_);
lean_dec(v_tk_315_);
lean_dec(v_kind_310_);
lean_dec(v_vis_x3f_306_);
v_a_324_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_321_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_321_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___boxed(lean_object* v_x_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta(v_x_344_, v_a_345_, v_a_346_);
lean_dec(v_a_346_);
lean_dec_ref(v_a_345_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1(){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_356_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_357_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1));
v___x_358_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1));
v___x_359_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___boxed), 4, 0);
v___x_360_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_356_, v___x_357_, v___x_358_, v___x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___boxed(lean_object* v_a_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1();
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0(size_t v_sz_363_, size_t v_i_364_, lean_object* v_bs_365_){
_start:
{
uint8_t v___x_366_; 
v___x_366_ = lean_usize_dec_lt(v_i_364_, v_sz_363_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = l_unsafeCast___redArg(v_bs_365_);
lean_dec_ref(v_bs_365_);
v___x_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
return v___x_368_;
}
else
{
lean_object* v_v_369_; lean_object* v___x_370_; lean_object* v_bs_x27_371_; lean_object* v___x_372_; size_t v___x_373_; size_t v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v_v_369_ = lean_array_uget(v_bs_365_, v_i_364_);
v___x_370_ = lean_unsigned_to_nat(0u);
v_bs_x27_371_ = lean_array_uset(v_bs_365_, v_i_364_, v___x_370_);
v___x_372_ = l_unsafeCast___redArg(v_v_369_);
lean_dec(v_v_369_);
v___x_373_ = ((size_t)1ULL);
v___x_374_ = lean_usize_add(v_i_364_, v___x_373_);
v___x_375_ = l_unsafeCast___redArg(v___x_372_);
lean_dec(v___x_372_);
v___x_376_ = lean_array_uset(v_bs_x27_371_, v_i_364_, v___x_375_);
v_i_364_ = v___x_374_;
v_bs_365_ = v___x_376_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0___boxed(lean_object* v_sz_378_, lean_object* v_i_379_, lean_object* v_bs_380_){
_start:
{
size_t v_sz_boxed_381_; size_t v_i_boxed_382_; lean_object* v_res_383_; 
v_sz_boxed_381_ = lean_unbox_usize(v_sz_378_);
lean_dec(v_sz_378_);
v_i_boxed_382_ = lean_unbox_usize(v_i_379_);
lean_dec(v_i_379_);
v_res_383_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0(v_sz_boxed_381_, v_i_boxed_382_, v_bs_380_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1(size_t v_sz_384_, size_t v_i_385_, lean_object* v_bs_386_){
_start:
{
uint8_t v___x_387_; 
v___x_387_ = lean_usize_dec_lt(v_i_385_, v_sz_384_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; 
v___x_388_ = l_unsafeCast___redArg(v_bs_386_);
lean_dec_ref(v_bs_386_);
return v___x_388_;
}
else
{
lean_object* v_v_389_; lean_object* v___x_390_; lean_object* v_bs_x27_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; size_t v___x_396_; size_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v_v_389_ = lean_array_uget(v_bs_386_, v_i_385_);
v___x_390_ = lean_unsigned_to_nat(0u);
v_bs_x27_391_ = lean_array_uset(v_bs_386_, v_i_385_, v___x_390_);
v___x_392_ = l_unsafeCast___redArg(v_v_389_);
lean_dec(v_v_389_);
v___x_393_ = l_Lean_TSyntax_getId(v___x_392_);
v___x_394_ = l_Lean_Name_eraseMacroScopes(v___x_393_);
lean_dec(v___x_393_);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_392_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = ((size_t)1ULL);
v___x_397_ = lean_usize_add(v_i_385_, v___x_396_);
v___x_398_ = l_unsafeCast___redArg(v___x_395_);
lean_dec_ref_known(v___x_395_, 2);
v___x_399_ = lean_array_uset(v_bs_x27_391_, v_i_385_, v___x_398_);
v_i_385_ = v___x_397_;
v_bs_386_ = v___x_399_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1___boxed(lean_object* v_sz_401_, lean_object* v_i_402_, lean_object* v_bs_403_){
_start:
{
size_t v_sz_boxed_404_; size_t v_i_boxed_405_; lean_object* v_res_406_; 
v_sz_boxed_404_ = lean_unbox_usize(v_sz_401_);
lean_dec(v_sz_401_);
v_i_boxed_405_ = lean_unbox_usize(v_i_402_);
lean_dec(v_i_402_);
v_res_406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1(v_sz_boxed_404_, v_i_boxed_405_, v_bs_403_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(uint8_t v___x_407_, lean_object* v_as_408_, size_t v_i_409_, size_t v_stop_410_, lean_object* v_b_411_){
_start:
{
lean_object* v___y_413_; uint8_t v___x_417_; 
v___x_417_ = lean_usize_dec_eq(v_i_409_, v_stop_410_);
if (v___x_417_ == 0)
{
lean_object* v_fst_418_; uint8_t v___x_419_; 
v_fst_418_ = lean_ctor_get(v_b_411_, 0);
v___x_419_ = lean_unbox(v_fst_418_);
if (v___x_419_ == 0)
{
lean_object* v_snd_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_428_; 
v_snd_420_ = lean_ctor_get(v_b_411_, 1);
v_isSharedCheck_428_ = !lean_is_exclusive(v_b_411_);
if (v_isSharedCheck_428_ == 0)
{
lean_object* v_unused_429_; 
v_unused_429_ = lean_ctor_get(v_b_411_, 0);
lean_dec(v_unused_429_);
v___x_422_ = v_b_411_;
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_snd_420_);
lean_dec(v_b_411_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_424_ = lean_box(v___x_407_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_424_);
v___x_426_ = v___x_422_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_snd_420_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
v___y_413_ = v___x_426_;
goto v___jp_412_;
}
}
}
else
{
lean_object* v_snd_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_440_; 
v_snd_430_ = lean_ctor_get(v_b_411_, 1);
v_isSharedCheck_440_ = !lean_is_exclusive(v_b_411_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; 
v_unused_441_ = lean_ctor_get(v_b_411_, 0);
lean_dec(v_unused_441_);
v___x_432_ = v_b_411_;
v_isShared_433_ = v_isSharedCheck_440_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_snd_430_);
lean_dec(v_b_411_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_440_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_434_ = lean_array_uget_borrowed(v_as_408_, v_i_409_);
lean_inc(v___x_434_);
v___x_435_ = lean_array_push(v_snd_430_, v___x_434_);
v___x_436_ = lean_box(v___x_417_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 1, v___x_435_);
lean_ctor_set(v___x_432_, 0, v___x_436_);
v___x_438_ = v___x_432_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v___x_435_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
v___y_413_ = v___x_438_;
goto v___jp_412_;
}
}
}
}
else
{
return v_b_411_;
}
v___jp_412_:
{
size_t v___x_414_; size_t v___x_415_; 
v___x_414_ = ((size_t)1ULL);
v___x_415_ = lean_usize_add(v_i_409_, v___x_414_);
v_i_409_ = v___x_415_;
v_b_411_ = v___y_413_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2___boxed(lean_object* v___x_442_, lean_object* v_as_443_, lean_object* v_i_444_, lean_object* v_stop_445_, lean_object* v_b_446_){
_start:
{
uint8_t v___x_4764__boxed_447_; size_t v_i_boxed_448_; size_t v_stop_boxed_449_; lean_object* v_res_450_; 
v___x_4764__boxed_447_ = lean_unbox(v___x_442_);
v_i_boxed_448_ = lean_unbox_usize(v_i_444_);
lean_dec(v_i_444_);
v_stop_boxed_449_ = lean_unbox_usize(v_stop_445_);
lean_dec(v_stop_445_);
v_res_450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(v___x_4764__boxed_447_, v_as_443_, v_i_boxed_448_, v_stop_boxed_449_, v_b_446_);
lean_dec_ref(v_as_443_);
return v_res_450_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_box(0);
v___x_488_ = l_unsafeCast___redArg(v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(lean_object* v_as_492_, size_t v_sz_493_, size_t v_i_494_, lean_object* v_b_495_){
_start:
{
lean_object* v_a_498_; uint8_t v___x_502_; 
v___x_502_ = lean_usize_dec_lt(v_i_494_, v_sz_493_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
v___x_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_503_, 0, v_b_495_);
return v___x_503_;
}
else
{
lean_object* v_fst_504_; lean_object* v_snd_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_675_; 
v_fst_504_ = lean_ctor_get(v_b_495_, 0);
v_snd_505_ = lean_ctor_get(v_b_495_, 1);
v_isSharedCheck_675_ = !lean_is_exclusive(v_b_495_);
if (v_isSharedCheck_675_ == 0)
{
v___x_507_ = v_b_495_;
v_isShared_508_ = v_isSharedCheck_675_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_snd_505_);
lean_inc(v_fst_504_);
lean_dec(v_b_495_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_675_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___y_510_; lean_object* v_a_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v_a_537_ = lean_array_uget_borrowed(v_as_492_, v_i_494_);
v___x_538_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1));
lean_inc(v_a_537_);
v___x_539_ = l_Lean_Syntax_isOfKind(v_a_537_, v___x_538_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; 
lean_del_object(v___x_507_);
v___x_540_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v___x_541_; 
lean_dec_ref_known(v___x_540_, 1);
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v_fst_504_);
lean_ctor_set(v___x_541_, 1, v_snd_505_);
v_a_498_ = v___x_541_;
goto v___jp_497_;
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_542_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_540_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_540_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
else
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = lean_unsigned_to_nat(1u);
v___x_552_ = l_Lean_Syntax_getArg(v_a_537_, v___x_550_);
v___x_553_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3));
lean_inc(v___x_552_);
v___x_554_ = l_Lean_Syntax_isOfKind(v___x_552_, v___x_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; uint8_t v___x_556_; 
lean_del_object(v___x_507_);
v___x_555_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5));
lean_inc(v___x_552_);
v___x_556_ = l_Lean_Syntax_isOfKind(v___x_552_, v___x_555_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; 
lean_dec(v___x_552_);
v___x_557_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v___x_558_; 
lean_dec_ref_known(v___x_557_, 1);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v_fst_504_);
lean_ctor_set(v___x_558_, 1, v_snd_505_);
v_a_498_ = v___x_558_;
goto v___jp_497_;
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_559_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_557_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_557_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
else
{
lean_object* v___x_567_; lean_object* v___y_569_; lean_object* v_fst_570_; uint8_t v_snd_571_; lean_object* v___y_577_; lean_object* v_____x_578_; lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___y_586_; 
v___x_567_ = l_Lean_Syntax_getArg(v___x_552_, v___x_551_);
if (v___x_554_ == 0)
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7));
lean_inc(v___x_567_);
v___x_653_ = l_Lean_Syntax_isOfKind(v___x_567_, v___x_652_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; 
lean_dec(v___x_567_);
lean_dec(v___x_552_);
v___x_654_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v___x_655_; 
lean_dec_ref_known(v___x_654_, 1);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v_fst_504_);
lean_ctor_set(v___x_655_, 1, v_snd_505_);
v_a_498_ = v___x_655_;
goto v___jp_497_;
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_656_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_654_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_654_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
else
{
goto v___jp_606_;
}
}
else
{
goto v___jp_606_;
}
v___jp_568_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_572_ = lean_box(0);
v___x_573_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_573_, 0, v___x_567_);
lean_ctor_set(v___x_573_, 1, v_fst_570_);
lean_ctor_set(v___x_573_, 2, v___y_569_);
lean_ctor_set(v___x_573_, 3, v___x_572_);
lean_ctor_set(v___x_573_, 4, v___x_572_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*5, v_snd_571_);
v___x_574_ = lean_array_push(v_snd_505_, v___x_573_);
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v_fst_504_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v_a_498_ = v___x_575_;
goto v___jp_497_;
}
v___jp_576_:
{
lean_object* v_fst_579_; lean_object* v_snd_580_; uint8_t v___x_581_; 
v_fst_579_ = lean_ctor_get(v_____x_578_, 0);
lean_inc(v_fst_579_);
v_snd_580_ = lean_ctor_get(v_____x_578_, 1);
lean_inc(v_snd_580_);
lean_dec_ref(v_____x_578_);
v___x_581_ = lean_unbox(v_snd_580_);
lean_dec(v_snd_580_);
v___y_569_ = v___y_577_;
v_fst_570_ = v_fst_579_;
v_snd_571_ = v___x_581_;
goto v___jp_568_;
}
v___jp_582_:
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = l_Lean_Syntax_getArg(v___y_585_, v___x_551_);
lean_dec(v___y_585_);
lean_inc(v___x_587_);
v___x_588_ = l_Lean_Syntax_matchesNull(v___x_587_, v___x_550_);
if (v___x_588_ == 0)
{
uint8_t v___x_589_; 
v___x_589_ = l_Lean_Syntax_matchesNull(v___x_587_, v___y_586_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; 
lean_dec(v___y_584_);
v___x_590_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_590_, 1);
v___y_577_ = v___y_583_;
v_____x_578_ = v_a_591_;
goto v___jp_576_;
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec(v___y_583_);
lean_dec(v___x_567_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_592_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_590_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_590_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_600_ = l_Lean_TSyntax_getId(v___y_584_);
lean_dec(v___y_584_);
v___x_601_ = l_Lean_Name_eraseMacroScopes(v___x_600_);
lean_dec(v___x_600_);
v___x_602_ = 1;
v___y_569_ = v___y_583_;
v_fst_570_ = v___x_601_;
v_snd_571_ = v___x_602_;
goto v___jp_568_;
}
}
else
{
lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
lean_dec(v___x_587_);
v___x_603_ = l_Lean_TSyntax_getId(v___y_584_);
lean_dec(v___y_584_);
v___x_604_ = l_Lean_Name_eraseMacroScopes(v___x_603_);
lean_dec(v___x_603_);
v___x_605_ = 0;
v___y_569_ = v___y_583_;
v_fst_570_ = v___x_604_;
v_snd_571_ = v___x_605_;
goto v___jp_568_;
}
}
v___jp_606_:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_607_ = lean_unsigned_to_nat(3u);
v___x_608_ = l_Lean_Syntax_getArg(v___x_552_, v___x_607_);
lean_dec(v___x_552_);
v___x_609_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7));
lean_inc(v___x_567_);
v___x_610_ = l_Lean_Syntax_isOfKind(v___x_567_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
v___x_611_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v___y_577_ = v___x_608_;
v_____x_578_ = v_a_612_;
goto v___jp_576_;
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v___x_608_);
lean_dec(v___x_567_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_613_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_611_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_621_ = l_Lean_Syntax_getArg(v___x_567_, v___x_550_);
v___x_622_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9));
lean_inc(v___x_621_);
v___x_623_ = l_Lean_Syntax_isOfKind(v___x_621_, v___x_622_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_624_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11));
v___x_625_ = l_Lean_Syntax_isOfKind(v___x_621_, v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; 
v___x_626_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_a_627_);
lean_dec_ref_known(v___x_626_, 1);
v___y_577_ = v___x_608_;
v_____x_578_ = v_a_627_;
goto v___jp_576_;
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_dec(v___x_608_);
lean_dec(v___x_567_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_628_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_626_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_626_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
else
{
lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_636_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12);
v___x_637_ = 1;
v___y_569_ = v___x_608_;
v_fst_570_ = v___x_636_;
v_snd_571_ = v___x_637_;
goto v___jp_568_;
}
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_unsigned_to_nat(2u);
v___x_639_ = l_Lean_Syntax_getArg(v___x_621_, v___x_550_);
if (v___x_554_ == 0)
{
lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_640_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14));
lean_inc(v___x_639_);
v___x_641_ = l_Lean_Syntax_isOfKind(v___x_639_, v___x_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; 
lean_dec(v___x_639_);
lean_dec(v___x_621_);
v___x_642_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_642_, 1);
v___y_577_ = v___x_608_;
v_____x_578_ = v_a_643_;
goto v___jp_576_;
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
lean_dec(v___x_608_);
lean_dec(v___x_567_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_644_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_642_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_642_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
else
{
v___y_583_ = v___x_608_;
v___y_584_ = v___x_639_;
v___y_585_ = v___x_621_;
v___y_586_ = v___x_638_;
goto v___jp_582_;
}
}
else
{
v___y_583_ = v___x_608_;
v___y_584_ = v___x_639_;
v___y_585_ = v___x_621_;
v___y_586_ = v___x_638_;
goto v___jp_582_;
}
}
}
}
}
}
else
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_664_ = l_Lean_Syntax_getArg(v___x_552_, v___x_551_);
lean_dec(v___x_552_);
v___x_665_ = l_Lean_Syntax_getArgs(v___x_664_);
lean_dec(v___x_664_);
v___x_666_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7));
v___x_667_ = lean_array_get_size(v___x_665_);
v___x_668_ = lean_nat_dec_lt(v___x_550_, v___x_667_);
if (v___x_668_ == 0)
{
lean_dec_ref(v___x_665_);
v___y_510_ = v___x_666_;
goto v___jp_509_;
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; size_t v___x_671_; size_t v___x_672_; lean_object* v___x_673_; lean_object* v_snd_674_; 
v___x_669_ = lean_box(v___x_668_);
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v___x_666_);
v___x_671_ = ((size_t)0ULL);
v___x_672_ = lean_usize_of_nat(v___x_667_);
v___x_673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(v___x_554_, v___x_665_, v___x_671_, v___x_672_, v___x_670_);
lean_dec_ref(v___x_665_);
v_snd_674_ = lean_ctor_get(v___x_673_, 1);
lean_inc(v_snd_674_);
lean_dec_ref(v___x_673_);
v___y_510_ = v_snd_674_;
goto v___jp_509_;
}
}
}
v___jp_509_:
{
size_t v_sz_511_; size_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_sz_511_ = lean_array_size(v___y_510_);
v___x_512_ = ((size_t)0ULL);
v___x_513_ = l_unsafeCast___redArg(v___y_510_);
lean_dec_ref(v___y_510_);
v___x_514_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0(v_sz_511_, v___x_512_, v___x_513_);
v___x_515_ = l_unsafeCast___redArg(v___x_514_);
lean_dec(v___x_514_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v___x_518_; 
lean_dec_ref_known(v___x_516_, 1);
if (v_isShared_508_ == 0)
{
v___x_518_ = v___x_507_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_fst_504_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_snd_505_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
v_a_498_ = v___x_518_;
goto v___jp_497_;
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_del_object(v___x_507_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_520_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_516_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_516_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
else
{
lean_object* v_val_528_; size_t v_sz_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_535_; 
v_val_528_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_val_528_);
lean_dec_ref_known(v___x_515_, 1);
v_sz_529_ = lean_array_size(v_val_528_);
v___x_530_ = l_unsafeCast___redArg(v_val_528_);
lean_dec(v_val_528_);
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1(v_sz_529_, v___x_512_, v___x_530_);
v___x_532_ = l_unsafeCast___redArg(v___x_531_);
lean_dec_ref(v___x_531_);
v___x_533_ = l_Array_append___redArg(v_fst_504_, v___x_532_);
lean_dec(v___x_532_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_533_);
v___x_535_ = v___x_507_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_536_, 1, v_snd_505_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
v_a_498_ = v___x_535_;
goto v___jp_497_;
}
}
}
}
}
v___jp_497_:
{
size_t v___x_499_; size_t v___x_500_; 
v___x_499_ = ((size_t)1ULL);
v___x_500_ = lean_usize_add(v_i_494_, v___x_499_);
v_i_494_ = v___x_500_;
v_b_495_ = v_a_498_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___boxed(lean_object* v_as_676_, lean_object* v_sz_677_, lean_object* v_i_678_, lean_object* v_b_679_, lean_object* v___y_680_){
_start:
{
size_t v_sz_boxed_681_; size_t v_i_boxed_682_; lean_object* v_res_683_; 
v_sz_boxed_681_ = lean_unbox_usize(v_sz_677_);
lean_dec(v_sz_677_);
v_i_boxed_682_ = lean_unbox_usize(v_i_678_);
lean_dec(v_i_678_);
v_res_683_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(v_as_676_, v_sz_boxed_681_, v_i_boxed_682_, v_b_679_);
lean_dec_ref(v_as_676_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3(size_t v_sz_684_, size_t v_i_685_, lean_object* v_bs_686_){
_start:
{
uint8_t v___x_687_; 
v___x_687_ = lean_usize_dec_lt(v_i_685_, v_sz_684_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = l_unsafeCast___redArg(v_bs_686_);
lean_dec_ref(v_bs_686_);
v___x_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
else
{
lean_object* v_v_690_; lean_object* v_entries_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v_v_690_ = lean_array_uget_borrowed(v_bs_686_, v_i_685_);
v_entries_691_ = l_unsafeCast___redArg(v_v_690_);
v___x_692_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1));
lean_inc(v_entries_691_);
v___x_693_ = l_Lean_Syntax_isOfKind(v_entries_691_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; 
lean_dec(v_entries_691_);
lean_dec_ref(v_bs_686_);
v___x_694_ = lean_box(0);
return v___x_694_;
}
else
{
lean_object* v___x_695_; lean_object* v_bs_x27_696_; size_t v___x_697_; size_t v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_695_ = lean_unsigned_to_nat(0u);
v_bs_x27_696_ = lean_array_uset(v_bs_686_, v_i_685_, v___x_695_);
v___x_697_ = ((size_t)1ULL);
v___x_698_ = lean_usize_add(v_i_685_, v___x_697_);
v___x_699_ = l_unsafeCast___redArg(v_entries_691_);
lean_dec(v_entries_691_);
v___x_700_ = lean_array_uset(v_bs_x27_696_, v_i_685_, v___x_699_);
v_i_685_ = v___x_698_;
v_bs_686_ = v___x_700_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3___boxed(lean_object* v_sz_702_, lean_object* v_i_703_, lean_object* v_bs_704_){
_start:
{
size_t v_sz_boxed_705_; size_t v_i_boxed_706_; lean_object* v_res_707_; 
v_sz_boxed_705_ = lean_unbox_usize(v_sz_702_);
lean_dec(v_sz_702_);
v_i_boxed_706_ = lean_unbox_usize(v_i_703_);
lean_dec(v_i_703_);
v_res_707_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3(v_sz_boxed_705_, v_i_boxed_706_, v_bs_704_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView(lean_object* v_entries_x3f_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_omitFields_723_; lean_object* v_handlers_724_; lean_object* v___x_727_; lean_object* v_omitFields_728_; lean_object* v___y_730_; 
v___x_727_ = lean_unsigned_to_nat(0u);
v_omitFields_728_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0));
if (lean_obj_tag(v_entries_x3f_718_) == 1)
{
lean_object* v_val_760_; lean_object* v___x_761_; uint8_t v___x_762_; 
v_val_760_ = lean_ctor_get(v_entries_x3f_718_, 0);
lean_inc_n(v_val_760_, 2);
lean_dec_ref_known(v_entries_x3f_718_, 1);
v___x_761_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
v___x_762_ = l_Lean_Syntax_isOfKind(v_val_760_, v___x_761_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec(v_val_760_);
v___x_763_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_772_ = lean_unsigned_to_nat(1u);
v___x_773_ = l_Lean_Syntax_getArg(v_val_760_, v___x_772_);
lean_dec(v_val_760_);
v___x_774_ = l_Lean_Syntax_getArgs(v___x_773_);
lean_dec(v___x_773_);
v___x_775_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7));
v___x_776_ = lean_array_get_size(v___x_774_);
v___x_777_ = lean_nat_dec_lt(v___x_727_, v___x_776_);
if (v___x_777_ == 0)
{
lean_dec_ref(v___x_774_);
v___y_730_ = v___x_775_;
goto v___jp_729_;
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; size_t v___x_780_; size_t v___x_781_; lean_object* v___x_782_; lean_object* v_snd_783_; 
v___x_778_ = lean_box(v___x_777_);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v___x_775_);
v___x_780_ = ((size_t)0ULL);
v___x_781_ = lean_usize_of_nat(v___x_776_);
v___x_782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(v___x_762_, v___x_774_, v___x_780_, v___x_781_, v___x_779_);
lean_dec_ref(v___x_774_);
v_snd_783_ = lean_ctor_get(v___x_782_, 1);
lean_inc(v_snd_783_);
lean_dec_ref(v___x_782_);
v___y_730_ = v_snd_783_;
goto v___jp_729_;
}
}
}
else
{
lean_dec(v_entries_x3f_718_);
v_omitFields_723_ = v_omitFields_728_;
v_handlers_724_ = v_omitFields_728_;
goto v___jp_722_;
}
v___jp_722_:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_725_, 0, v_omitFields_723_);
lean_ctor_set(v___x_725_, 1, v_handlers_724_);
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
return v___x_726_;
}
v___jp_729_:
{
size_t v_sz_731_; size_t v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_sz_731_ = lean_array_size(v___y_730_);
v___x_732_ = ((size_t)0ULL);
v___x_733_ = l_unsafeCast___redArg(v___y_730_);
lean_dec_ref(v___y_730_);
v___x_734_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3(v_sz_731_, v___x_732_, v___x_733_);
v___x_735_ = l_unsafeCast___redArg(v___x_734_);
lean_dec(v___x_734_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v___x_736_; lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
v___x_736_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
v_a_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
else
{
lean_object* v_val_745_; lean_object* v___x_746_; size_t v_sz_747_; lean_object* v___x_748_; 
v_val_745_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_val_745_);
lean_dec_ref_known(v___x_735_, 1);
v___x_746_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__1));
v_sz_747_ = lean_array_size(v_val_745_);
v___x_748_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(v_val_745_, v_sz_747_, v___x_732_, v___x_746_);
lean_dec(v_val_745_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v_fst_750_; lean_object* v_snd_751_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v_fst_750_ = lean_ctor_get(v_a_749_, 0);
lean_inc(v_fst_750_);
v_snd_751_ = lean_ctor_get(v_a_749_, 1);
lean_inc(v_snd_751_);
lean_dec(v_a_749_);
v_omitFields_723_ = v_fst_750_;
v_handlers_724_ = v_snd_751_;
goto v___jp_722_;
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
v_a_752_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_748_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_748_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___boxed(lean_object* v_entries_x3f_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lean_Elab_ConfigEval_mkEvalConfigItemView(v_entries_x3f_784_, v_a_785_, v_a_786_);
lean_dec(v_a_786_);
lean_dec_ref(v_a_785_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4(lean_object* v_as_789_, size_t v_sz_790_, size_t v_i_791_, lean_object* v_b_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(v_as_789_, v_sz_790_, v_i_791_, v_b_792_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___boxed(lean_object* v_as_797_, lean_object* v_sz_798_, lean_object* v_i_799_, lean_object* v_b_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
size_t v_sz_boxed_804_; size_t v_i_boxed_805_; lean_object* v_res_806_; 
v_sz_boxed_804_ = lean_unbox_usize(v_sz_798_);
lean_dec(v_sz_798_);
v_i_boxed_805_ = lean_unbox_usize(v_i_799_);
lean_dec(v_i_799_);
v_res_806_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4(v_as_797_, v_sz_boxed_804_, v_i_boxed_805_, v_b_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec_ref(v_as_797_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd(lean_object* v_x_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v_entries_x3f_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_849_; lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_860_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1));
lean_inc(v_x_820_);
v___x_861_ = l_Lean_Syntax_isOfKind(v_x_820_, v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
lean_dec(v_x_820_);
v___x_862_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_862_;
}
else
{
lean_object* v___x_863_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v_vis_x3f_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v_doc_x3f_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___x_910_; uint8_t v___x_911_; 
v___x_863_ = lean_unsigned_to_nat(0u);
v___x_910_ = l_Lean_Syntax_getArg(v_x_820_, v___x_863_);
v___x_911_ = l_Lean_Syntax_isNone(v___x_910_);
if (v___x_911_ == 0)
{
lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_912_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_910_);
v___x_913_ = l_Lean_Syntax_matchesNull(v___x_910_, v___x_912_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; 
lean_dec(v___x_910_);
lean_dec(v_x_820_);
v___x_914_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_914_;
}
else
{
lean_object* v_doc_x3f_915_; 
v_doc_x3f_915_ = l_Lean_Syntax_getArg(v___x_910_, v___x_863_);
lean_dec(v___x_910_);
if (v___x_911_ == 0)
{
lean_object* v___x_918_; uint8_t v___x_919_; 
v___x_918_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_915_);
v___x_919_ = l_Lean_Syntax_isOfKind(v_doc_x3f_915_, v___x_918_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; 
lean_dec(v_doc_x3f_915_);
lean_dec(v_x_820_);
v___x_920_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_920_;
}
else
{
goto v___jp_916_;
}
}
else
{
goto v___jp_916_;
}
v___jp_916_:
{
lean_object* v___x_917_; 
v___x_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_917_, 0, v_doc_x3f_915_);
v_doc_x3f_899_ = v___x_917_;
v___y_900_ = v_a_821_;
v___y_901_ = v_a_822_;
goto v___jp_898_;
}
}
}
else
{
lean_object* v___x_921_; 
lean_dec(v___x_910_);
v___x_921_ = lean_box(0);
v_doc_x3f_899_ = v___x_921_;
v___y_900_ = v_a_821_;
v___y_901_ = v_a_822_;
goto v___jp_898_;
}
v___jp_864_:
{
lean_object* v___x_870_; lean_object* v_kind_871_; lean_object* v___x_872_; uint8_t v___x_873_; 
v___x_870_ = lean_unsigned_to_nat(2u);
v_kind_871_ = l_Lean_Syntax_getArg(v_x_820_, v___x_870_);
v___x_872_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v_kind_871_);
v___x_873_ = l_Lean_Syntax_isOfKind(v_kind_871_, v___x_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
lean_dec(v_kind_871_);
lean_dec(v_vis_x3f_867_);
lean_dec(v___y_866_);
lean_dec(v_x_820_);
v___x_874_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_874_;
}
else
{
lean_object* v___x_875_; lean_object* v_fn_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_875_ = lean_unsigned_to_nat(4u);
v_fn_876_ = l_Lean_Syntax_getArg(v_x_820_, v___x_875_);
v___x_877_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14));
lean_inc(v_fn_876_);
v___x_878_ = l_Lean_Syntax_isOfKind(v_fn_876_, v___x_877_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
lean_dec(v_fn_876_);
lean_dec(v_kind_871_);
lean_dec(v_vis_x3f_867_);
lean_dec(v___y_866_);
lean_dec(v_x_820_);
v___x_879_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_879_;
}
else
{
lean_object* v___x_880_; lean_object* v_struct_881_; uint8_t v___x_882_; 
v___x_880_ = lean_unsigned_to_nat(7u);
v_struct_881_ = l_Lean_Syntax_getArg(v_x_820_, v___x_880_);
lean_inc(v_struct_881_);
v___x_882_ = l_Lean_Syntax_isOfKind(v_struct_881_, v___x_877_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; 
lean_dec(v_struct_881_);
lean_dec(v_fn_876_);
lean_dec(v_kind_871_);
lean_dec(v_vis_x3f_867_);
lean_dec(v___y_866_);
lean_dec(v_x_820_);
v___x_883_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_883_;
}
else
{
lean_object* v___x_884_; lean_object* v_tk_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_884_ = lean_unsigned_to_nat(3u);
v_tk_885_ = l_Lean_Syntax_getArg(v_x_820_, v___x_884_);
v___x_886_ = lean_unsigned_to_nat(5u);
v___x_887_ = l_Lean_Syntax_getArg(v_x_820_, v___x_886_);
v___x_888_ = lean_unsigned_to_nat(8u);
v___x_889_ = l_Lean_Syntax_getArg(v_x_820_, v___x_888_);
lean_dec(v_x_820_);
v___x_890_ = l_Lean_Syntax_isNone(v___x_889_);
if (v___x_890_ == 0)
{
uint8_t v___x_891_; 
lean_inc(v___x_889_);
v___x_891_ = l_Lean_Syntax_matchesNull(v___x_889_, v___y_865_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; 
lean_dec(v___x_889_);
lean_dec(v___x_887_);
lean_dec(v_tk_885_);
lean_dec(v_struct_881_);
lean_dec(v_fn_876_);
lean_dec(v_kind_871_);
lean_dec(v_vis_x3f_867_);
lean_dec(v___y_866_);
v___x_892_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_892_;
}
else
{
lean_object* v_entries_x3f_893_; 
v_entries_x3f_893_ = l_Lean_Syntax_getArg(v___x_889_, v___x_863_);
lean_dec(v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_894_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_893_);
v___x_895_ = l_Lean_Syntax_isOfKind(v_entries_x3f_893_, v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
lean_dec(v_entries_x3f_893_);
lean_dec(v___x_887_);
lean_dec(v_tk_885_);
lean_dec(v_struct_881_);
lean_dec(v_fn_876_);
lean_dec(v_kind_871_);
lean_dec(v_vis_x3f_867_);
lean_dec(v___y_866_);
v___x_896_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_896_;
}
else
{
v___y_849_ = v_fn_876_;
v___y_850_ = v_kind_871_;
v___y_851_ = v___y_866_;
v___y_852_ = v___y_868_;
v___y_853_ = v_struct_881_;
v___y_854_ = v___x_887_;
v___y_855_ = v_vis_x3f_867_;
v___y_856_ = v_tk_885_;
v___y_857_ = v_entries_x3f_893_;
v___y_858_ = v___y_869_;
goto v___jp_848_;
}
}
else
{
v___y_849_ = v_fn_876_;
v___y_850_ = v_kind_871_;
v___y_851_ = v___y_866_;
v___y_852_ = v___y_868_;
v___y_853_ = v_struct_881_;
v___y_854_ = v___x_887_;
v___y_855_ = v_vis_x3f_867_;
v___y_856_ = v_tk_885_;
v___y_857_ = v_entries_x3f_893_;
v___y_858_ = v___y_869_;
goto v___jp_848_;
}
}
}
else
{
lean_object* v___x_897_; 
lean_dec(v___x_889_);
v___x_897_ = lean_box(0);
v___y_825_ = v_fn_876_;
v___y_826_ = v_kind_871_;
v___y_827_ = v___y_866_;
v___y_828_ = v_struct_881_;
v___y_829_ = v_tk_885_;
v___y_830_ = v_vis_x3f_867_;
v___y_831_ = v___x_887_;
v_entries_x3f_832_ = v___x_897_;
v___y_833_ = v___y_868_;
v___y_834_ = v___y_869_;
goto v___jp_824_;
}
}
}
}
}
v___jp_898_:
{
lean_object* v___x_902_; lean_object* v___x_903_; uint8_t v___x_904_; 
v___x_902_ = lean_unsigned_to_nat(1u);
v___x_903_ = l_Lean_Syntax_getArg(v_x_820_, v___x_902_);
v___x_904_ = l_Lean_Syntax_isNone(v___x_903_);
if (v___x_904_ == 0)
{
uint8_t v___x_905_; 
lean_inc(v___x_903_);
v___x_905_ = l_Lean_Syntax_matchesNull(v___x_903_, v___x_902_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; 
lean_dec(v___x_903_);
lean_dec(v_doc_x3f_899_);
lean_dec(v_x_820_);
v___x_906_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_906_;
}
else
{
lean_object* v_vis_x3f_907_; lean_object* v___x_908_; 
v_vis_x3f_907_ = l_Lean_Syntax_getArg(v___x_903_, v___x_863_);
lean_dec(v___x_903_);
v___x_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_908_, 0, v_vis_x3f_907_);
v___y_865_ = v___x_902_;
v___y_866_ = v_doc_x3f_899_;
v_vis_x3f_867_ = v___x_908_;
v___y_868_ = v___y_900_;
v___y_869_ = v___y_901_;
goto v___jp_864_;
}
}
else
{
lean_object* v___x_909_; 
lean_dec(v___x_903_);
v___x_909_ = lean_box(0);
v___y_865_ = v___x_902_;
v___y_866_ = v_doc_x3f_899_;
v_vis_x3f_867_ = v___x_909_;
v___y_868_ = v___y_900_;
v___y_869_ = v___y_901_;
goto v___jp_864_;
}
}
}
v___jp_824_:
{
lean_object* v___x_835_; lean_object* v_binders_836_; lean_object* v___x_837_; 
v___x_835_ = l_Lean_Syntax_getArgs(v___y_831_);
lean_dec(v___y_831_);
v_binders_836_ = l_unsafeCast___redArg(v___x_835_);
lean_dec_ref(v___x_835_);
v___x_837_ = l_Lean_Elab_ConfigEval_mkEvalConfigItemView(v_entries_x3f_832_, v___y_833_, v___y_834_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_839_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref_known(v___x_837_, 1);
v___x_839_ = l_Lean_Elab_ConfigEval_defEvalConfigItem(v___y_827_, v___y_830_, v___y_826_, v___y_829_, v___y_828_, v___y_825_, v_binders_836_, v_a_838_, v___y_833_, v___y_834_);
return v___x_839_;
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec(v_binders_836_);
lean_dec(v___y_830_);
lean_dec(v___y_829_);
lean_dec(v___y_828_);
lean_dec(v___y_827_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
v_a_840_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_837_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_837_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
v___jp_848_:
{
lean_object* v___x_859_; 
v___x_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_859_, 0, v___y_857_);
v___y_825_ = v___y_849_;
v___y_826_ = v___y_850_;
v___y_827_ = v___y_851_;
v___y_828_ = v___y_853_;
v___y_829_ = v___y_856_;
v___y_830_ = v___y_855_;
v___y_831_ = v___y_854_;
v_entries_x3f_832_ = v___x_859_;
v___y_833_ = v___y_852_;
v___y_834_ = v___y_858_;
goto v___jp_824_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___boxed(lean_object* v_x_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd(v_x_922_, v_a_923_, v_a_924_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1(){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_934_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_935_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1));
v___x_936_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1));
v___x_937_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___boxed), 4, 0);
v___x_938_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_934_, v___x_935_, v___x_936_, v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___boxed(lean_object* v_a_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1();
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd(lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_946_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_947_ = lean_unsigned_to_nat(2u);
v___x_948_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_946_, v___x_947_, v_a_942_, v_a_943_, v_a_944_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___boxed(lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd(v_a_949_, v_a_950_, v_a_951_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec(v_a_949_);
return v_res_953_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___boxed), 4, 0);
v___x_955_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_955_, 0, v___x_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1(){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_957_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1));
v___x_958_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0);
v___x_959_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_957_, v___x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___boxed(lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1();
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(size_t v_sz_962_, size_t v_i_963_, lean_object* v_bs_964_){
_start:
{
uint8_t v___x_965_; 
v___x_965_ = lean_usize_dec_lt(v_i_963_, v_sz_962_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
v___x_966_ = l_unsafeCast___redArg(v_bs_964_);
lean_dec_ref(v_bs_964_);
return v___x_966_;
}
else
{
lean_object* v_v_967_; lean_object* v___x_968_; lean_object* v_bs_x27_969_; lean_object* v___x_970_; size_t v___x_971_; size_t v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v_v_967_ = lean_array_uget(v_bs_964_, v_i_963_);
v___x_968_ = lean_unsigned_to_nat(0u);
v_bs_x27_969_ = lean_array_uset(v_bs_964_, v_i_963_, v___x_968_);
v___x_970_ = l_unsafeCast___redArg(v_v_967_);
lean_dec(v_v_967_);
v___x_971_ = ((size_t)1ULL);
v___x_972_ = lean_usize_add(v_i_963_, v___x_971_);
v___x_973_ = l_unsafeCast___redArg(v___x_970_);
lean_dec(v___x_970_);
v___x_974_ = lean_array_uset(v_bs_x27_969_, v_i_963_, v___x_973_);
v_i_963_ = v___x_972_;
v_bs_964_ = v___x_974_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0___boxed(lean_object* v_sz_976_, lean_object* v_i_977_, lean_object* v_bs_978_){
_start:
{
size_t v_sz_boxed_979_; size_t v_i_boxed_980_; lean_object* v_res_981_; 
v_sz_boxed_979_ = lean_unbox_usize(v_sz_976_);
lean_dec(v_sz_976_);
v_i_boxed_980_ = lean_unbox_usize(v_i_977_);
lean_dec(v_i_977_);
v_res_981_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(v_sz_boxed_979_, v_i_boxed_980_, v_bs_978_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs(lean_object* v_stx_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_){
_start:
{
lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1010_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1));
lean_inc(v_stx_1007_);
v___x_1011_ = l_Lean_Syntax_isOfKind(v_stx_1007_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3));
lean_inc(v_stx_1007_);
v___x_1013_ = l_Lean_Syntax_isOfKind(v_stx_1007_, v___x_1012_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5));
lean_inc(v_stx_1007_);
v___x_1015_ = l_Lean_Syntax_isOfKind(v_stx_1007_, v___x_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1016_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7));
lean_inc(v_stx_1007_);
v___x_1017_ = l_Lean_Syntax_isOfKind(v_stx_1007_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_1019_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_1007_, v___x_1018_, v_a_1008_, v_a_1009_);
lean_dec(v_stx_1007_);
return v___x_1019_;
}
else
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; uint8_t v___x_1024_; 
v___x_1020_ = lean_unsigned_to_nat(0u);
v___x_1021_ = lean_unsigned_to_nat(1u);
v___x_1022_ = l_Lean_Syntax_getArg(v_stx_1007_, v___x_1021_);
v___x_1023_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1022_);
v___x_1024_ = l_Lean_Syntax_matchesNull(v___x_1022_, v___x_1023_);
if (v___x_1024_ == 0)
{
uint8_t v___x_1025_; 
v___x_1025_ = l_Lean_Syntax_matchesNull(v___x_1022_, v___x_1020_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_1027_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_1007_, v___x_1026_, v_a_1008_, v_a_1009_);
lean_dec(v_stx_1007_);
return v___x_1027_;
}
else
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1028_ = l_Lean_mkHole(v_stx_1007_, v___x_1024_);
lean_dec(v_stx_1007_);
v___x_1029_ = lean_mk_empty_array_with_capacity(v___x_1021_);
v___x_1030_ = lean_array_push(v___x_1029_, v___x_1028_);
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set(v___x_1031_, 1, v_a_1009_);
return v___x_1031_;
}
}
else
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Lean_Syntax_getArg(v___x_1022_, v___x_1020_);
lean_dec(v___x_1022_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1037_; uint8_t v___x_1038_; 
v___x_1037_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14));
lean_inc(v___x_1032_);
v___x_1038_ = l_Lean_Syntax_isOfKind(v___x_1032_, v___x_1037_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
lean_dec(v___x_1032_);
v___x_1039_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_1040_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_1007_, v___x_1039_, v_a_1008_, v_a_1009_);
lean_dec(v_stx_1007_);
return v___x_1040_;
}
else
{
lean_dec(v_stx_1007_);
goto v___jp_1033_;
}
}
else
{
lean_dec(v_stx_1007_);
goto v___jp_1033_;
}
v___jp_1033_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1034_ = lean_mk_empty_array_with_capacity(v___x_1021_);
v___x_1035_ = lean_array_push(v___x_1034_, v___x_1032_);
v___x_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
lean_ctor_set(v___x_1036_, 1, v_a_1009_);
return v___x_1036_;
}
}
}
}
else
{
lean_object* v___x_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; 
v___x_1041_ = lean_unsigned_to_nat(2u);
v___x_1042_ = l_Lean_Syntax_getArg(v_stx_1007_, v___x_1041_);
v___x_1043_ = l_Lean_Syntax_matchesNull(v___x_1042_, v___x_1041_);
if (v___x_1043_ == 0)
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_1045_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_1007_, v___x_1044_, v_a_1008_, v_a_1009_);
lean_dec(v_stx_1007_);
return v___x_1045_;
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v_ids_1049_; size_t v_sz_1050_; size_t v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1046_ = lean_unsigned_to_nat(1u);
v___x_1047_ = l_Lean_Syntax_getArg(v_stx_1007_, v___x_1046_);
lean_dec(v_stx_1007_);
v___x_1048_ = l_Lean_Syntax_getArgs(v___x_1047_);
lean_dec(v___x_1047_);
v_ids_1049_ = l_unsafeCast___redArg(v___x_1048_);
lean_dec_ref(v___x_1048_);
v_sz_1050_ = lean_array_size(v_ids_1049_);
v___x_1051_ = ((size_t)0ULL);
v___x_1052_ = l_unsafeCast___redArg(v_ids_1049_);
lean_dec(v_ids_1049_);
v___x_1053_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(v_sz_1050_, v___x_1051_, v___x_1052_);
v___x_1054_ = l_unsafeCast___redArg(v___x_1053_);
lean_dec_ref(v___x_1053_);
v___x_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
lean_ctor_set(v___x_1055_, 1, v_a_1009_);
return v___x_1055_;
}
}
}
else
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___y_1059_; lean_object* v___x_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1056_ = lean_unsigned_to_nat(1u);
v___x_1057_ = l_Lean_Syntax_getArg(v_stx_1007_, v___x_1056_);
v___x_1068_ = lean_unsigned_to_nat(2u);
v___x_1069_ = l_Lean_Syntax_getArg(v_stx_1007_, v___x_1068_);
v___x_1070_ = l_Lean_Syntax_isNone(v___x_1069_);
if (v___x_1070_ == 0)
{
uint8_t v___x_1071_; 
v___x_1071_ = l_Lean_Syntax_matchesNull(v___x_1069_, v___x_1068_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_dec(v___x_1057_);
v___x_1072_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_1073_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_1007_, v___x_1072_, v_a_1008_, v_a_1009_);
lean_dec(v_stx_1007_);
return v___x_1073_;
}
else
{
lean_dec(v_stx_1007_);
v___y_1059_ = v_a_1009_;
goto v___jp_1058_;
}
}
else
{
lean_dec(v___x_1069_);
lean_dec(v_stx_1007_);
v___y_1059_ = v_a_1009_;
goto v___jp_1058_;
}
v___jp_1058_:
{
lean_object* v___x_1060_; lean_object* v_ids_1061_; size_t v_sz_1062_; size_t v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1060_ = l_Lean_Syntax_getArgs(v___x_1057_);
lean_dec(v___x_1057_);
v_ids_1061_ = l_unsafeCast___redArg(v___x_1060_);
lean_dec_ref(v___x_1060_);
v_sz_1062_ = lean_array_size(v_ids_1061_);
v___x_1063_ = ((size_t)0ULL);
v___x_1064_ = l_unsafeCast___redArg(v_ids_1061_);
lean_dec(v_ids_1061_);
v___x_1065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(v_sz_1062_, v___x_1063_, v___x_1064_);
v___x_1066_ = l_unsafeCast___redArg(v___x_1065_);
lean_dec_ref(v___x_1065_);
v___x_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
lean_ctor_set(v___x_1067_, 1, v___y_1059_);
return v___x_1067_;
}
}
}
else
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___y_1077_; lean_object* v___x_1086_; lean_object* v___x_1087_; uint8_t v___x_1088_; 
v___x_1074_ = lean_unsigned_to_nat(1u);
v___x_1075_ = l_Lean_Syntax_getArg(v_stx_1007_, v___x_1074_);
v___x_1086_ = lean_unsigned_to_nat(2u);
v___x_1087_ = l_Lean_Syntax_getArg(v_stx_1007_, v___x_1086_);
v___x_1088_ = l_Lean_Syntax_isNone(v___x_1087_);
if (v___x_1088_ == 0)
{
uint8_t v___x_1089_; 
v___x_1089_ = l_Lean_Syntax_matchesNull(v___x_1087_, v___x_1086_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
lean_dec(v___x_1075_);
v___x_1090_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_1091_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_1007_, v___x_1090_, v_a_1008_, v_a_1009_);
lean_dec(v_stx_1007_);
return v___x_1091_;
}
else
{
lean_dec(v_stx_1007_);
v___y_1077_ = v_a_1009_;
goto v___jp_1076_;
}
}
else
{
lean_dec(v___x_1087_);
lean_dec(v_stx_1007_);
v___y_1077_ = v_a_1009_;
goto v___jp_1076_;
}
v___jp_1076_:
{
lean_object* v___x_1078_; lean_object* v_ids_1079_; size_t v_sz_1080_; size_t v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1078_ = l_Lean_Syntax_getArgs(v___x_1075_);
lean_dec(v___x_1075_);
v_ids_1079_ = l_unsafeCast___redArg(v___x_1078_);
lean_dec_ref(v___x_1078_);
v_sz_1080_ = lean_array_size(v_ids_1079_);
v___x_1081_ = ((size_t)0ULL);
v___x_1082_ = l_unsafeCast___redArg(v_ids_1079_);
lean_dec(v_ids_1079_);
v___x_1083_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(v_sz_1080_, v___x_1081_, v___x_1082_);
v___x_1084_ = l_unsafeCast___redArg(v___x_1083_);
lean_dec_ref(v___x_1083_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v___y_1077_);
return v___x_1085_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___boxed(lean_object* v_stx_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs(v_stx_1092_, v_a_1093_, v_a_1094_);
lean_dec_ref(v_a_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(lean_object* v_as_1096_, size_t v_i_1097_, size_t v_stop_1098_, lean_object* v_b_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_a_1103_; lean_object* v_a_1104_; uint8_t v___x_1108_; 
v___x_1108_ = lean_usize_dec_eq(v_i_1097_, v_stop_1098_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_array_uget_borrowed(v_as_1096_, v_i_1097_);
lean_inc(v___x_1109_);
v___x_1110_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs(v___x_1109_, v___y_1100_, v___y_1101_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v_a_1112_; lean_object* v___x_1113_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1111_);
v_a_1112_ = lean_ctor_get(v___x_1110_, 1);
lean_inc(v_a_1112_);
lean_dec_ref_known(v___x_1110_, 2);
v___x_1113_ = l_Array_append___redArg(v_b_1099_, v_a_1111_);
lean_dec(v_a_1111_);
v_a_1103_ = v___x_1113_;
v_a_1104_ = v_a_1112_;
goto v___jp_1102_;
}
else
{
lean_dec_ref(v_b_1099_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1114_; lean_object* v_a_1115_; 
v_a_1114_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1114_);
v_a_1115_ = lean_ctor_get(v___x_1110_, 1);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1110_, 2);
v_a_1103_ = v_a_1114_;
v_a_1104_ = v_a_1115_;
goto v___jp_1102_;
}
else
{
return v___x_1110_;
}
}
}
else
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v_b_1099_);
lean_ctor_set(v___x_1116_, 1, v___y_1101_);
return v___x_1116_;
}
v___jp_1102_:
{
size_t v___x_1105_; size_t v___x_1106_; 
v___x_1105_ = ((size_t)1ULL);
v___x_1106_ = lean_usize_add(v_i_1097_, v___x_1105_);
v_i_1097_ = v___x_1106_;
v_b_1099_ = v_a_1103_;
v___y_1101_ = v_a_1104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3___boxed(lean_object* v_as_1117_, lean_object* v_i_1118_, lean_object* v_stop_1119_, lean_object* v_b_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
size_t v_i_boxed_1123_; size_t v_stop_boxed_1124_; lean_object* v_res_1125_; 
v_i_boxed_1123_ = lean_unbox_usize(v_i_1118_);
lean_dec(v_i_1118_);
v_stop_boxed_1124_ = lean_unbox_usize(v_stop_1119_);
lean_dec(v_stop_1119_);
v_res_1125_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(v_as_1117_, v_i_boxed_1123_, v_stop_boxed_1124_, v_b_1120_, v___y_1121_, v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec_ref(v_as_1117_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2(size_t v_sz_1126_, size_t v_i_1127_, lean_object* v_bs_1128_){
_start:
{
uint8_t v___x_1129_; 
v___x_1129_ = lean_usize_dec_lt(v_i_1127_, v_sz_1126_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; 
v___x_1130_ = l_unsafeCast___redArg(v_bs_1128_);
lean_dec_ref(v_bs_1128_);
return v___x_1130_;
}
else
{
lean_object* v_v_1131_; lean_object* v___x_1132_; lean_object* v_bs_x27_1133_; lean_object* v___x_1134_; size_t v___x_1135_; size_t v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v_v_1131_ = lean_array_uget(v_bs_1128_, v_i_1127_);
v___x_1132_ = lean_unsigned_to_nat(0u);
v_bs_x27_1133_ = lean_array_uset(v_bs_1128_, v_i_1127_, v___x_1132_);
v___x_1134_ = l_unsafeCast___redArg(v_v_1131_);
lean_dec(v_v_1131_);
v___x_1135_ = ((size_t)1ULL);
v___x_1136_ = lean_usize_add(v_i_1127_, v___x_1135_);
v___x_1137_ = l_unsafeCast___redArg(v___x_1134_);
lean_dec(v___x_1134_);
v___x_1138_ = lean_array_uset(v_bs_x27_1133_, v_i_1127_, v___x_1137_);
v_i_1127_ = v___x_1136_;
v_bs_1128_ = v___x_1138_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2___boxed(lean_object* v_sz_1140_, lean_object* v_i_1141_, lean_object* v_bs_1142_){
_start:
{
size_t v_sz_boxed_1143_; size_t v_i_boxed_1144_; lean_object* v_res_1145_; 
v_sz_boxed_1143_ = lean_unbox_usize(v_sz_1140_);
lean_dec(v_sz_1140_);
v_i_boxed_1144_ = lean_unbox_usize(v_i_1141_);
lean_dec(v_i_1141_);
v_res_1145_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2(v_sz_boxed_1143_, v_i_boxed_1144_, v_bs_1142_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(size_t v_sz_1146_, size_t v_i_1147_, lean_object* v_bs_1148_){
_start:
{
uint8_t v___x_1149_; 
v___x_1149_ = lean_usize_dec_lt(v_i_1147_, v_sz_1146_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; 
v___x_1150_ = l_unsafeCast___redArg(v_bs_1148_);
lean_dec_ref(v_bs_1148_);
return v___x_1150_;
}
else
{
lean_object* v_v_1151_; lean_object* v___x_1152_; lean_object* v_bs_x27_1153_; lean_object* v___x_1154_; size_t v___x_1155_; size_t v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v_v_1151_ = lean_array_uget(v_bs_1148_, v_i_1147_);
v___x_1152_ = lean_unsigned_to_nat(0u);
v_bs_x27_1153_ = lean_array_uset(v_bs_1148_, v_i_1147_, v___x_1152_);
v___x_1154_ = l_unsafeCast___redArg(v_v_1151_);
lean_dec(v_v_1151_);
v___x_1155_ = ((size_t)1ULL);
v___x_1156_ = lean_usize_add(v_i_1147_, v___x_1155_);
v___x_1157_ = l_unsafeCast___redArg(v___x_1154_);
lean_dec(v___x_1154_);
v___x_1158_ = lean_array_uset(v_bs_x27_1153_, v_i_1147_, v___x_1157_);
v_i_1147_ = v___x_1156_;
v_bs_1148_ = v___x_1158_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0___boxed(lean_object* v_sz_1160_, lean_object* v_i_1161_, lean_object* v_bs_1162_){
_start:
{
size_t v_sz_boxed_1163_; size_t v_i_boxed_1164_; lean_object* v_res_1165_; 
v_sz_boxed_1163_ = lean_unbox_usize(v_sz_1160_);
lean_dec(v_sz_1160_);
v_i_boxed_1164_ = lean_unbox_usize(v_i_1161_);
lean_dec(v_i_1161_);
v_res_1165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(v_sz_boxed_1163_, v_i_boxed_1164_, v_bs_1162_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1(size_t v_sz_1166_, size_t v_i_1167_, lean_object* v_bs_1168_){
_start:
{
uint8_t v___x_1169_; 
v___x_1169_ = lean_usize_dec_lt(v_i_1167_, v_sz_1166_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; 
v___x_1170_ = l_unsafeCast___redArg(v_bs_1168_);
lean_dec_ref(v_bs_1168_);
return v___x_1170_;
}
else
{
lean_object* v_v_1171_; lean_object* v___x_1172_; lean_object* v_bs_x27_1173_; lean_object* v___x_1174_; size_t v___x_1175_; size_t v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v_v_1171_ = lean_array_uget(v_bs_1168_, v_i_1167_);
v___x_1172_ = lean_unsigned_to_nat(0u);
v_bs_x27_1173_ = lean_array_uset(v_bs_1168_, v_i_1167_, v___x_1172_);
v___x_1174_ = l_unsafeCast___redArg(v_v_1171_);
lean_dec(v_v_1171_);
v___x_1175_ = ((size_t)1ULL);
v___x_1176_ = lean_usize_add(v_i_1167_, v___x_1175_);
v___x_1177_ = l_unsafeCast___redArg(v___x_1174_);
lean_dec(v___x_1174_);
v___x_1178_ = lean_array_uset(v_bs_x27_1173_, v_i_1167_, v___x_1177_);
v_i_1167_ = v___x_1176_;
v_bs_1168_ = v___x_1178_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1___boxed(lean_object* v_sz_1180_, lean_object* v_i_1181_, lean_object* v_bs_1182_){
_start:
{
size_t v_sz_boxed_1183_; size_t v_i_boxed_1184_; lean_object* v_res_1185_; 
v_sz_boxed_1183_ = lean_unbox_usize(v_sz_1180_);
lean_dec(v_sz_1180_);
v_i_boxed_1184_ = lean_unbox_usize(v_i_1181_);
lean_dec(v_i_1181_);
v_res_1185_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1(v_sz_boxed_1183_, v_i_boxed_1184_, v_bs_1182_);
return v_res_1185_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__6));
v___x_1195_ = l_String_toRawSubstring_x27(v___x_1194_);
return v___x_1195_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25));
v___x_1236_ = l_String_toRawSubstring_x27(v___x_1235_);
return v___x_1236_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1308_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__53));
v___x_1309_ = l_String_toRawSubstring_x27(v___x_1308_);
return v___x_1309_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56));
v___x_1313_ = l_String_toRawSubstring_x27(v___x_1312_);
return v___x_1313_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59));
v___x_1318_ = l_String_toRawSubstring_x27(v___x_1317_);
return v___x_1318_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75(void){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74));
v___x_1350_ = l_Lean_mkIdent(v___x_1349_);
return v___x_1350_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78(void){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__77));
v___x_1355_ = l_Lean_mkIdent(v___x_1354_);
return v___x_1355_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__80));
v___x_1360_ = l_Lean_mkIdent(v___x_1359_);
return v___x_1360_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85(void){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__84));
v___x_1369_ = l_String_toRawSubstring_x27(v___x_1368_);
return v___x_1369_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92));
v___x_1389_ = l_String_toRawSubstring_x27(v___x_1388_);
return v___x_1389_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99(void){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1400_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98));
v___x_1401_ = l_String_toRawSubstring_x27(v___x_1400_);
return v___x_1401_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103(void){
_start:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1406_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73));
v___x_1407_ = l_String_toRawSubstring_x27(v___x_1406_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(lean_object* v_monad_1425_, lean_object* v_mkMonadAdapt_1426_, lean_object* v_logExceptionsDefault_1427_, lean_object* v_mkLogExceptionsTerm_1428_, lean_object* v_doc_x3f_1429_, lean_object* v_vis_x3f_1430_, lean_object* v_tk_1431_, lean_object* v_elabName_1432_, lean_object* v_type_1433_, lean_object* v_binders_1434_, lean_object* v_entries_x3f_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___y_1451_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; size_t v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v___y_1463_; lean_object* v___y_1464_; size_t v___y_1465_; lean_object* v___y_1466_; lean_object* v___y_1467_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; size_t v___y_1671_; lean_object* v___y_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v___y_1677_; size_t v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; size_t v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; size_t v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v___y_1733_; lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v_a_1760_; lean_object* v_a_1761_; lean_object* v___y_1866_; lean_object* v___x_1878_; lean_object* v___x_1879_; uint8_t v___x_1880_; 
v___x_1438_ = lean_unsigned_to_nat(0u);
v___x_1439_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__0));
v___x_1440_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0));
v___x_1441_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1));
v___x_1878_ = l_unsafeCast___redArg(v_binders_1434_);
v___x_1879_ = lean_array_get_size(v___x_1878_);
v___x_1880_ = lean_nat_dec_lt(v___x_1438_, v___x_1879_);
if (v___x_1880_ == 0)
{
lean_dec(v___x_1878_);
v_a_1760_ = v___x_1439_;
v_a_1761_ = v_a_1437_;
goto v___jp_1759_;
}
else
{
uint8_t v___x_1881_; 
v___x_1881_ = lean_nat_dec_le(v___x_1879_, v___x_1879_);
if (v___x_1881_ == 0)
{
if (v___x_1880_ == 0)
{
lean_dec(v___x_1878_);
v_a_1760_ = v___x_1439_;
v_a_1761_ = v_a_1437_;
goto v___jp_1759_;
}
else
{
size_t v___x_1882_; size_t v___x_1883_; lean_object* v___x_1884_; 
v___x_1882_ = ((size_t)0ULL);
v___x_1883_ = lean_usize_of_nat(v___x_1879_);
v___x_1884_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(v___x_1878_, v___x_1882_, v___x_1883_, v___x_1439_, v_a_1436_, v_a_1437_);
lean_dec(v___x_1878_);
v___y_1866_ = v___x_1884_;
goto v___jp_1865_;
}
}
else
{
size_t v___x_1885_; size_t v___x_1886_; lean_object* v___x_1887_; 
v___x_1885_ = ((size_t)0ULL);
v___x_1886_ = lean_usize_of_nat(v___x_1879_);
v___x_1887_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(v___x_1878_, v___x_1885_, v___x_1886_, v___x_1439_, v_a_1436_, v_a_1437_);
lean_dec(v___x_1878_);
v___y_1866_ = v___x_1887_;
goto v___jp_1865_;
}
}
v___jp_1442_:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; size_t v_sz_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; size_t v_sz_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
lean_inc_ref_n(v___y_1470_, 2);
v___x_1480_ = l_Array_append___redArg(v___y_1470_, v___y_1479_);
lean_dec_ref(v___y_1479_);
lean_inc_n(v___y_1472_, 18);
lean_inc_n(v___y_1477_, 77);
v___x_1481_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1481_, 0, v___y_1477_);
lean_ctor_set(v___x_1481_, 1, v___y_1472_);
lean_ctor_set(v___x_1481_, 2, v___x_1480_);
lean_inc_n(v___y_1448_, 22);
v___x_1482_ = l_Lean_Syntax_node7(v___y_1477_, v___y_1469_, v___y_1445_, v___y_1448_, v___x_1481_, v___y_1448_, v___y_1448_, v___y_1448_, v___y_1448_);
v___x_1483_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__1));
lean_inc_ref_n(v___y_1452_, 4);
v___x_1484_ = l_Lean_Name_mkStr4(v___x_1440_, v___x_1441_, v___y_1452_, v___x_1483_);
v___x_1485_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__2));
v___x_1486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___y_1477_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
v___x_1487_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__3));
v___x_1488_ = l_Lean_Name_mkStr4(v___x_1440_, v___x_1441_, v___y_1452_, v___x_1487_);
lean_inc_n(v___y_1462_, 2);
v___x_1489_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1489_, 0, v___y_1462_);
lean_ctor_set(v___x_1489_, 1, v___y_1472_);
lean_ctor_set(v___x_1489_, 2, v___x_1439_);
v___x_1490_ = lean_unsigned_to_nat(2u);
v___x_1491_ = lean_mk_empty_array_with_capacity(v___x_1490_);
v___x_1492_ = lean_array_push(v___x_1491_, v_elabName_1432_);
v___x_1493_ = lean_array_push(v___x_1492_, v___x_1489_);
v___x_1494_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1494_, 0, v___y_1462_);
lean_ctor_set(v___x_1494_, 1, v___x_1488_);
lean_ctor_set(v___x_1494_, 2, v___x_1493_);
v___x_1495_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__4));
v___x_1496_ = l_Lean_Name_mkStr4(v___x_1440_, v___x_1441_, v___y_1452_, v___x_1495_);
v___x_1497_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1(v___y_1458_, v___y_1465_, v___y_1467_);
v___x_1498_ = l_unsafeCast___redArg(v___x_1497_);
lean_dec_ref(v___x_1497_);
v_sz_1499_ = lean_array_size(v___x_1498_);
v___x_1500_ = l_unsafeCast___redArg(v___x_1498_);
lean_dec(v___x_1498_);
v___x_1501_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2(v_sz_1499_, v___y_1465_, v___x_1500_);
v___x_1502_ = l_unsafeCast___redArg(v___x_1501_);
lean_dec_ref(v___x_1501_);
v_sz_1503_ = lean_array_size(v___x_1502_);
v___x_1504_ = l_unsafeCast___redArg(v___x_1502_);
lean_dec(v___x_1502_);
v___x_1505_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(v_sz_1503_, v___y_1465_, v___x_1504_);
v___x_1506_ = l_unsafeCast___redArg(v___x_1505_);
lean_dec_ref(v___x_1505_);
v___x_1507_ = l_Array_append___redArg(v___y_1470_, v___x_1506_);
lean_dec(v___x_1506_);
v___x_1508_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1));
lean_inc_ref(v___y_1450_);
v___x_1509_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___y_1477_);
lean_ctor_set(v___x_1509_, 1, v___y_1450_);
v___x_1510_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___y_1466_);
v___x_1511_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__5));
v___x_1512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___y_1477_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7);
v___x_1514_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9));
lean_inc_n(v___y_1443_, 5);
lean_inc_n(v___y_1447_, 5);
v___x_1515_ = l_Lean_addMacroScope(v___y_1447_, v___x_1514_, v___y_1443_);
lean_inc_n(v___y_1468_, 5);
v___x_1516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1514_);
lean_ctor_set(v___x_1516_, 1, v___y_1468_);
v___x_1517_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__10));
lean_inc_n(v___y_1459_, 8);
v___x_1518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1517_);
lean_ctor_set(v___x_1518_, 1, v___y_1459_);
v___x_1519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1516_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1520_, 0, v___y_1477_);
lean_ctor_set(v___x_1520_, 1, v___x_1513_);
lean_ctor_set(v___x_1520_, 2, v___x_1515_);
lean_ctor_set(v___x_1520_, 3, v___x_1519_);
lean_inc_ref_n(v___x_1512_, 4);
v___x_1521_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1472_, v___x_1512_, v___x_1520_);
lean_inc_ref(v___y_1478_);
v___x_1522_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___y_1477_);
lean_ctor_set(v___x_1522_, 1, v___y_1478_);
lean_inc_ref_n(v___x_1522_, 3);
lean_inc_ref_n(v___x_1509_, 3);
v___x_1523_ = l_Lean_Syntax_node5(v___y_1477_, v___x_1508_, v___x_1509_, v___x_1510_, v___x_1521_, v___y_1448_, v___x_1522_);
v___x_1524_ = lean_array_push(v___x_1507_, v___x_1523_);
v___x_1525_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___y_1463_);
lean_inc_n(v_type_1433_, 2);
v___x_1526_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1472_, v___x_1512_, v_type_1433_);
v___x_1527_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12));
lean_inc_ref(v___y_1473_);
v___x_1528_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___y_1477_);
lean_ctor_set(v___x_1528_, 1, v___y_1473_);
v___x_1529_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__14));
v___x_1530_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__16));
v___x_1531_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__17));
v___x_1532_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___y_1477_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
v___x_1533_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__18));
v___x_1534_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___y_1477_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
lean_inc_ref(v___x_1534_);
lean_inc_ref(v___x_1532_);
v___x_1535_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1530_, v___x_1532_, v___x_1534_);
v___x_1536_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20));
v___x_1537_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22));
v___x_1538_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1537_, v___y_1448_);
v___x_1539_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24));
v___x_1540_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1539_, v___y_1448_);
v___x_1541_ = l_Lean_Syntax_node6(v___y_1477_, v___x_1536_, v___x_1532_, v___y_1448_, v___x_1538_, v___x_1540_, v___y_1448_, v___x_1534_);
v___x_1542_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1529_, v___x_1535_, v___x_1541_);
lean_inc_ref_n(v___x_1528_, 5);
v___x_1543_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1527_, v___x_1528_, v___x_1542_);
v___x_1544_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___x_1543_);
v___x_1545_ = l_Lean_Syntax_node5(v___y_1477_, v___x_1508_, v___x_1509_, v___x_1525_, v___x_1526_, v___x_1544_, v___x_1522_);
v___x_1546_ = lean_array_push(v___x_1524_, v___x_1545_);
v___x_1547_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___y_1461_);
v___x_1548_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26);
v___x_1549_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__27));
v___x_1550_ = l_Lean_addMacroScope(v___y_1447_, v___x_1549_, v___y_1443_);
v___x_1551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___y_1468_);
v___x_1552_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__29));
v___x_1553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
lean_ctor_set(v___x_1553_, 1, v___y_1459_);
v___x_1554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1551_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1555_, 0, v___y_1477_);
lean_ctor_set(v___x_1555_, 1, v___x_1548_);
lean_ctor_set(v___x_1555_, 2, v___x_1550_);
lean_ctor_set(v___x_1555_, 3, v___x_1554_);
v___x_1556_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1472_, v___x_1512_, v___x_1555_);
v___x_1557_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1527_, v___x_1528_, v_logExceptionsDefault_1427_);
v___x_1558_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___x_1557_);
v___x_1559_ = l_Lean_Syntax_node5(v___y_1477_, v___x_1508_, v___x_1509_, v___x_1547_, v___x_1556_, v___x_1558_, v___x_1522_);
v___x_1560_ = lean_array_push(v___x_1546_, v___x_1559_);
v___x_1561_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1561_, 0, v___y_1477_);
lean_ctor_set(v___x_1561_, 1, v___y_1472_);
lean_ctor_set(v___x_1561_, 2, v___x_1560_);
v___x_1562_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31));
v___x_1563_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v_type_1433_);
lean_inc(v___x_1563_);
lean_inc_n(v___y_1474_, 4);
v___x_1564_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1474_, v_monad_1425_, v___x_1563_);
v___x_1565_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1562_, v___x_1512_, v___x_1564_);
v___x_1566_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___x_1565_);
v___x_1567_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1496_, v___x_1561_, v___x_1566_);
v___x_1568_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__32));
v___x_1569_ = l_Lean_Name_mkStr4(v___x_1440_, v___x_1441_, v___y_1452_, v___x_1568_);
v___x_1570_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33));
v___x_1571_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34));
v___x_1572_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___y_1477_);
lean_ctor_set(v___x_1572_, 1, v___x_1570_);
v___x_1573_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36));
v___x_1574_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38));
v___x_1575_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40));
v___x_1576_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__41));
v___x_1577_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___y_1477_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43));
v___x_1579_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1578_, v___y_1448_);
v___x_1580_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45));
v___x_1581_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47));
v___x_1582_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49));
lean_inc_ref(v___y_1444_);
v___x_1583_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1583_, 0, v___y_1477_);
lean_ctor_set(v___x_1583_, 1, v___y_1444_);
lean_ctor_set(v___x_1583_, 2, v___y_1455_);
lean_ctor_set(v___x_1583_, 3, v___y_1459_);
v___x_1584_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1582_, v___x_1583_);
lean_inc_ref_n(v___y_1453_, 5);
v___x_1585_ = l_String_toRawSubstring_x27(v___y_1453_);
v___x_1586_ = l_Lean_Name_mkStr1(v___y_1453_);
v___x_1587_ = l_Lean_addMacroScope(v___y_1447_, v___x_1586_, v___y_1443_);
lean_inc_ref_n(v___y_1464_, 2);
lean_inc_ref_n(v___y_1446_, 2);
v___x_1588_ = l_Lean_Name_mkStr4(v___x_1440_, v___y_1446_, v___y_1464_, v___y_1453_);
lean_inc(v___x_1588_);
v___x_1589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
lean_ctor_set(v___x_1589_, 1, v___y_1468_);
v___x_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1588_);
v___x_1591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
lean_ctor_set(v___x_1591_, 1, v___y_1459_);
v___x_1592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1589_);
lean_ctor_set(v___x_1592_, 1, v___x_1591_);
v___x_1593_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1593_, 0, v___y_1477_);
lean_ctor_set(v___x_1593_, 1, v___x_1585_);
lean_ctor_set(v___x_1593_, 2, v___x_1587_);
lean_ctor_set(v___x_1593_, 3, v___x_1592_);
v___x_1594_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1474_, v___x_1593_, v___x_1563_);
v___x_1595_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1562_, v___x_1512_, v___x_1594_);
v___x_1596_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___x_1595_);
v___x_1597_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51));
v___x_1598_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__52));
v___x_1599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___y_1477_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1597_, v___x_1599_, v___y_1449_);
v___x_1601_ = l_unsafeCast___redArg(v___y_1457_);
lean_dec_ref(v___y_1457_);
v___x_1602_ = l_Array_append___redArg(v___y_1470_, v___x_1601_);
lean_dec(v___x_1601_);
v___x_1603_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1603_, 0, v___y_1477_);
lean_ctor_set(v___x_1603_, 1, v___y_1472_);
lean_ctor_set(v___x_1603_, 2, v___x_1602_);
v___x_1604_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1474_, v___x_1600_, v___x_1603_);
v___x_1605_ = l_Lean_Syntax_node5(v___y_1477_, v___x_1581_, v___x_1584_, v___y_1448_, v___x_1596_, v___x_1528_, v___x_1604_);
v___x_1606_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1580_, v___x_1605_);
lean_inc(v___x_1579_);
lean_inc_ref(v___x_1577_);
v___x_1607_ = l_Lean_Syntax_node4(v___y_1477_, v___x_1575_, v___x_1577_, v___y_1448_, v___x_1579_, v___x_1606_);
v___x_1608_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1574_, v___x_1607_, v___y_1448_);
lean_inc_ref(v___y_1475_);
v___x_1609_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1609_, 0, v___y_1477_);
lean_ctor_set(v___x_1609_, 1, v___y_1475_);
lean_ctor_set(v___x_1609_, 2, v___y_1454_);
lean_ctor_set(v___x_1609_, 3, v___y_1459_);
v___x_1610_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1582_, v___x_1609_);
v___x_1611_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54);
v___x_1612_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__55));
v___x_1613_ = l_Lean_Name_mkStr2(v___y_1453_, v___x_1612_);
v___x_1614_ = l_Lean_addMacroScope(v___y_1447_, v___x_1613_, v___y_1443_);
v___x_1615_ = l_Lean_Name_mkStr5(v___x_1440_, v___y_1446_, v___y_1464_, v___y_1453_, v___x_1612_);
v___x_1616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
lean_ctor_set(v___x_1616_, 1, v___y_1468_);
v___x_1617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
lean_ctor_set(v___x_1617_, 1, v___y_1459_);
v___x_1618_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1618_, 0, v___y_1477_);
lean_ctor_set(v___x_1618_, 1, v___x_1611_);
lean_ctor_set(v___x_1618_, 2, v___x_1614_);
lean_ctor_set(v___x_1618_, 3, v___x_1617_);
v___x_1619_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57);
v___x_1620_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__58));
v___x_1621_ = l_Lean_addMacroScope(v___y_1447_, v___x_1620_, v___y_1443_);
v___x_1622_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1622_, 0, v___y_1477_);
lean_ctor_set(v___x_1622_, 1, v___x_1619_);
lean_ctor_set(v___x_1622_, 2, v___x_1621_);
lean_ctor_set(v___x_1622_, 3, v___y_1459_);
v___x_1623_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60);
v___x_1624_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__61));
v___x_1625_ = l_Lean_addMacroScope(v___y_1447_, v___x_1624_, v___y_1443_);
v___x_1626_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62));
v___x_1627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
lean_ctor_set(v___x_1627_, 1, v___y_1468_);
v___x_1628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_ctor_set(v___x_1628_, 1, v___y_1459_);
v___x_1629_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1629_, 0, v___y_1477_);
lean_ctor_set(v___x_1629_, 1, v___x_1623_);
lean_ctor_set(v___x_1629_, 2, v___x_1625_);
lean_ctor_set(v___x_1629_, 3, v___x_1628_);
v___x_1630_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64));
v___x_1631_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__65));
v___x_1632_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___y_1477_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
lean_inc_ref(v___x_1632_);
v___x_1633_ = l_Lean_Syntax_node3(v___y_1477_, v___x_1630_, v___x_1632_, v___x_1632_, v_type_1433_);
v___x_1634_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___x_1633_);
v___x_1635_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1474_, v___x_1629_, v___x_1634_);
v___x_1636_ = l_Lean_Syntax_node5(v___y_1477_, v___y_1456_, v___x_1509_, v___x_1622_, v___x_1528_, v___x_1635_, v___x_1522_);
v___x_1637_ = l_Lean_Syntax_node1(v___y_1477_, v___y_1472_, v___x_1636_);
v___x_1638_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1474_, v___x_1618_, v___x_1637_);
v___x_1639_ = l_Lean_Syntax_node5(v___y_1477_, v___x_1581_, v___x_1610_, v___y_1448_, v___y_1448_, v___x_1528_, v___x_1638_);
v___x_1640_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1580_, v___x_1639_);
v___x_1641_ = l_Lean_Syntax_node4(v___y_1477_, v___x_1575_, v___x_1577_, v___y_1448_, v___x_1579_, v___x_1640_);
v___x_1642_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1574_, v___x_1641_, v___y_1448_);
v___x_1643_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67));
v___x_1644_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1643_, v___y_1451_);
v___x_1645_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1574_, v___x_1644_, v___y_1448_);
v___x_1646_ = l_Lean_Syntax_node3(v___y_1477_, v___y_1472_, v___x_1608_, v___x_1642_, v___x_1645_);
v___x_1647_ = l_Lean_Syntax_node1(v___y_1477_, v___x_1573_, v___x_1646_);
v___x_1648_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1571_, v___x_1572_, v___x_1647_);
v___x_1649_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70));
v___x_1650_ = l_Lean_Syntax_node2(v___y_1477_, v___x_1649_, v___y_1448_, v___y_1448_);
v___x_1651_ = l_Lean_Syntax_node4(v___y_1477_, v___x_1569_, v___x_1528_, v___x_1648_, v___x_1650_, v___y_1448_);
v___x_1652_ = l_Lean_Syntax_node5(v___y_1477_, v___x_1484_, v___x_1486_, v___x_1494_, v___x_1567_, v___x_1651_, v___y_1448_);
v___x_1653_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1460_, v___x_1482_, v___x_1652_);
v___x_1654_ = l_Lean_Syntax_node2(v___y_1477_, v___y_1472_, v___y_1471_, v___x_1653_);
v___x_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
lean_ctor_set(v___x_1655_, 1, v___y_1476_);
return v___x_1655_;
}
v___jp_1656_:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
lean_inc_ref(v___y_1683_);
v___x_1693_ = l_Array_append___redArg(v___y_1683_, v___y_1692_);
lean_dec_ref(v___y_1692_);
lean_inc(v___y_1686_);
lean_inc(v___y_1690_);
v___x_1694_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1694_, 0, v___y_1690_);
lean_ctor_set(v___x_1694_, 1, v___y_1686_);
lean_ctor_set(v___x_1694_, 2, v___x_1693_);
if (lean_obj_tag(v_vis_x3f_1430_) == 1)
{
lean_object* v_val_1695_; lean_object* v___x_1696_; 
v_val_1695_ = lean_ctor_get(v_vis_x3f_1430_, 0);
lean_inc(v_val_1695_);
lean_dec_ref_known(v_vis_x3f_1430_, 1);
v___x_1696_ = l_Array_mkArray1___redArg(v_val_1695_);
v___y_1443_ = v___y_1658_;
v___y_1444_ = v___y_1657_;
v___y_1445_ = v___x_1694_;
v___y_1446_ = v___y_1659_;
v___y_1447_ = v___y_1660_;
v___y_1448_ = v___y_1661_;
v___y_1449_ = v___y_1663_;
v___y_1450_ = v___y_1662_;
v___y_1451_ = v___y_1666_;
v___y_1452_ = v___y_1665_;
v___y_1453_ = v___y_1664_;
v___y_1454_ = v___y_1667_;
v___y_1455_ = v___y_1668_;
v___y_1456_ = v___y_1669_;
v___y_1457_ = v___y_1670_;
v___y_1458_ = v___y_1671_;
v___y_1459_ = v___y_1672_;
v___y_1460_ = v___y_1673_;
v___y_1461_ = v___y_1674_;
v___y_1462_ = v___y_1675_;
v___y_1463_ = v___y_1676_;
v___y_1464_ = v___y_1677_;
v___y_1465_ = v___y_1678_;
v___y_1466_ = v___y_1679_;
v___y_1467_ = v___y_1680_;
v___y_1468_ = v___y_1681_;
v___y_1469_ = v___y_1682_;
v___y_1470_ = v___y_1683_;
v___y_1471_ = v___y_1684_;
v___y_1472_ = v___y_1686_;
v___y_1473_ = v___y_1685_;
v___y_1474_ = v___y_1687_;
v___y_1475_ = v___y_1688_;
v___y_1476_ = v___y_1689_;
v___y_1477_ = v___y_1690_;
v___y_1478_ = v___y_1691_;
v___y_1479_ = v___x_1696_;
goto v___jp_1442_;
}
else
{
lean_object* v___x_1697_; 
lean_dec(v_vis_x3f_1430_);
v___x_1697_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7));
v___y_1443_ = v___y_1658_;
v___y_1444_ = v___y_1657_;
v___y_1445_ = v___x_1694_;
v___y_1446_ = v___y_1659_;
v___y_1447_ = v___y_1660_;
v___y_1448_ = v___y_1661_;
v___y_1449_ = v___y_1663_;
v___y_1450_ = v___y_1662_;
v___y_1451_ = v___y_1666_;
v___y_1452_ = v___y_1665_;
v___y_1453_ = v___y_1664_;
v___y_1454_ = v___y_1667_;
v___y_1455_ = v___y_1668_;
v___y_1456_ = v___y_1669_;
v___y_1457_ = v___y_1670_;
v___y_1458_ = v___y_1671_;
v___y_1459_ = v___y_1672_;
v___y_1460_ = v___y_1673_;
v___y_1461_ = v___y_1674_;
v___y_1462_ = v___y_1675_;
v___y_1463_ = v___y_1676_;
v___y_1464_ = v___y_1677_;
v___y_1465_ = v___y_1678_;
v___y_1466_ = v___y_1679_;
v___y_1467_ = v___y_1680_;
v___y_1468_ = v___y_1681_;
v___y_1469_ = v___y_1682_;
v___y_1470_ = v___y_1683_;
v___y_1471_ = v___y_1684_;
v___y_1472_ = v___y_1686_;
v___y_1473_ = v___y_1685_;
v___y_1474_ = v___y_1687_;
v___y_1475_ = v___y_1688_;
v___y_1476_ = v___y_1689_;
v___y_1477_ = v___y_1690_;
v___y_1478_ = v___y_1691_;
v___y_1479_ = v___x_1697_;
goto v___jp_1442_;
}
}
v___jp_1698_:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_inc_ref(v___y_1728_);
v___x_1738_ = l_Array_append___redArg(v___y_1728_, v___y_1737_);
lean_dec_ref(v___y_1737_);
lean_inc(v___y_1730_);
lean_inc_n(v___y_1735_, 2);
v___x_1739_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1739_, 0, v___y_1735_);
lean_ctor_set(v___x_1739_, 1, v___y_1730_);
lean_ctor_set(v___x_1739_, 2, v___x_1738_);
v___x_1740_ = lean_unsigned_to_nat(9u);
v___x_1741_ = lean_mk_empty_array_with_capacity(v___x_1740_);
lean_inc(v___y_1704_);
v___x_1742_ = lean_array_push(v___x_1741_, v___y_1704_);
v___x_1743_ = lean_array_push(v___x_1742_, v___y_1718_);
v___x_1744_ = lean_array_push(v___x_1743_, v___y_1716_);
v___x_1745_ = lean_array_push(v___x_1744_, v___y_1701_);
lean_inc(v___y_1705_);
v___x_1746_ = lean_array_push(v___x_1745_, v___y_1705_);
v___x_1747_ = lean_array_push(v___x_1746_, v___y_1712_);
v___x_1748_ = lean_array_push(v___x_1747_, v___y_1723_);
lean_inc(v_type_1433_);
v___x_1749_ = lean_array_push(v___x_1748_, v_type_1433_);
v___x_1750_ = lean_array_push(v___x_1749_, v___x_1739_);
lean_inc(v___y_1732_);
v___x_1751_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1751_, 0, v___y_1735_);
lean_ctor_set(v___x_1751_, 1, v___y_1732_);
lean_ctor_set(v___x_1751_, 2, v___x_1750_);
v___x_1752_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__71));
lean_inc_ref_n(v___y_1707_, 2);
v___x_1753_ = l_Lean_Name_mkStr4(v___x_1440_, v___x_1441_, v___y_1707_, v___x_1752_);
v___x_1754_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__72));
v___x_1755_ = l_Lean_Name_mkStr4(v___x_1440_, v___x_1441_, v___y_1707_, v___x_1754_);
if (lean_obj_tag(v_doc_x3f_1429_) == 1)
{
lean_object* v_val_1756_; lean_object* v___x_1757_; 
v_val_1756_ = lean_ctor_get(v_doc_x3f_1429_, 0);
lean_inc(v_val_1756_);
lean_dec_ref_known(v_doc_x3f_1429_, 1);
v___x_1757_ = l_Array_mkArray1___redArg(v_val_1756_);
v___y_1657_ = v___y_1699_;
v___y_1658_ = v___y_1700_;
v___y_1659_ = v___y_1702_;
v___y_1660_ = v___y_1703_;
v___y_1661_ = v___y_1704_;
v___y_1662_ = v___y_1706_;
v___y_1663_ = v___y_1705_;
v___y_1664_ = v___y_1708_;
v___y_1665_ = v___y_1707_;
v___y_1666_ = v___y_1709_;
v___y_1667_ = v___y_1710_;
v___y_1668_ = v___y_1711_;
v___y_1669_ = v___y_1713_;
v___y_1670_ = v___y_1714_;
v___y_1671_ = v___y_1715_;
v___y_1672_ = v___y_1717_;
v___y_1673_ = v___x_1753_;
v___y_1674_ = v___y_1719_;
v___y_1675_ = v___y_1721_;
v___y_1676_ = v___y_1720_;
v___y_1677_ = v___y_1722_;
v___y_1678_ = v___y_1724_;
v___y_1679_ = v___y_1725_;
v___y_1680_ = v___y_1726_;
v___y_1681_ = v___y_1727_;
v___y_1682_ = v___x_1755_;
v___y_1683_ = v___y_1728_;
v___y_1684_ = v___x_1751_;
v___y_1685_ = v___y_1729_;
v___y_1686_ = v___y_1730_;
v___y_1687_ = v___y_1731_;
v___y_1688_ = v___y_1733_;
v___y_1689_ = v___y_1734_;
v___y_1690_ = v___y_1735_;
v___y_1691_ = v___y_1736_;
v___y_1692_ = v___x_1757_;
goto v___jp_1656_;
}
else
{
lean_object* v___x_1758_; 
lean_dec(v_doc_x3f_1429_);
v___x_1758_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7));
v___y_1657_ = v___y_1699_;
v___y_1658_ = v___y_1700_;
v___y_1659_ = v___y_1702_;
v___y_1660_ = v___y_1703_;
v___y_1661_ = v___y_1704_;
v___y_1662_ = v___y_1706_;
v___y_1663_ = v___y_1705_;
v___y_1664_ = v___y_1708_;
v___y_1665_ = v___y_1707_;
v___y_1666_ = v___y_1709_;
v___y_1667_ = v___y_1710_;
v___y_1668_ = v___y_1711_;
v___y_1669_ = v___y_1713_;
v___y_1670_ = v___y_1714_;
v___y_1671_ = v___y_1715_;
v___y_1672_ = v___y_1717_;
v___y_1673_ = v___x_1753_;
v___y_1674_ = v___y_1719_;
v___y_1675_ = v___y_1721_;
v___y_1676_ = v___y_1720_;
v___y_1677_ = v___y_1722_;
v___y_1678_ = v___y_1724_;
v___y_1679_ = v___y_1725_;
v___y_1680_ = v___y_1726_;
v___y_1681_ = v___y_1727_;
v___y_1682_ = v___x_1755_;
v___y_1683_ = v___y_1728_;
v___y_1684_ = v___x_1751_;
v___y_1685_ = v___y_1729_;
v___y_1686_ = v___y_1730_;
v___y_1687_ = v___y_1731_;
v___y_1688_ = v___y_1733_;
v___y_1689_ = v___y_1734_;
v___y_1690_ = v___y_1735_;
v___y_1691_ = v___y_1736_;
v___y_1692_ = v___x_1758_;
goto v___jp_1656_;
}
}
v___jp_1759_:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1762_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74));
v___x_1763_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75);
lean_inc_ref(v_a_1436_);
v___x_1764_ = lean_apply_3(v_mkLogExceptionsTerm_1428_, v___x_1763_, v_a_1436_, v_a_1761_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v_a_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1864_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
v_a_1766_ = lean_ctor_get(v___x_1764_, 1);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1768_ = v___x_1764_;
v_isShared_1769_ = v_isSharedCheck_1864_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_a_1766_);
lean_inc(v_a_1765_);
lean_dec(v___x_1764_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1864_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v_quotContext_1770_; lean_object* v_currMacroScope_1771_; lean_object* v_ref_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1795_; 
v_quotContext_1770_ = lean_ctor_get(v_a_1436_, 1);
v_currMacroScope_1771_ = lean_ctor_get(v_a_1436_, 2);
v_ref_1772_ = lean_ctor_get(v_a_1436_, 5);
v___x_1773_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78);
v___x_1774_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81);
v___x_1775_ = 0;
v___x_1776_ = l_Lean_SourceInfo_fromRef(v_ref_1772_, v___x_1775_);
v___x_1777_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83));
v___x_1778_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85);
v___x_1779_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86));
v___x_1780_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88));
lean_inc_n(v_currMacroScope_1771_, 2);
lean_inc_n(v_quotContext_1770_, 2);
v___x_1781_ = l_Lean_addMacroScope(v_quotContext_1770_, v___x_1780_, v_currMacroScope_1771_);
v___x_1782_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5));
v___x_1783_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6));
v___x_1784_ = lean_box(0);
v___x_1785_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__91));
lean_inc_n(v___x_1776_, 3);
v___x_1786_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1776_);
lean_ctor_set(v___x_1786_, 1, v___x_1778_);
lean_ctor_set(v___x_1786_, 2, v___x_1781_);
lean_ctor_set(v___x_1786_, 3, v___x_1785_);
v___x_1787_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
v___x_1788_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93);
v___x_1789_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__94));
v___x_1790_ = l_Lean_addMacroScope(v_quotContext_1770_, v___x_1789_, v_currMacroScope_1771_);
lean_inc(v___x_1790_);
v___x_1791_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1776_);
lean_ctor_set(v___x_1791_, 1, v___x_1788_);
lean_ctor_set(v___x_1791_, 2, v___x_1790_);
lean_ctor_set(v___x_1791_, 3, v___x_1784_);
v___x_1792_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96));
v___x_1793_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97));
if (v_isShared_1769_ == 0)
{
lean_ctor_set_tag(v___x_1768_, 2);
lean_ctor_set(v___x_1768_, 1, v___x_1793_);
lean_ctor_set(v___x_1768_, 0, v___x_1776_);
v___x_1795_ = v___x_1768_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1776_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1796_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99);
v___x_1797_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__100));
lean_inc_n(v_currMacroScope_1771_, 2);
lean_inc_n(v_quotContext_1770_, 2);
v___x_1798_ = l_Lean_addMacroScope(v_quotContext_1770_, v___x_1797_, v_currMacroScope_1771_);
lean_inc(v___x_1798_);
lean_inc_n(v___x_1776_, 7);
v___x_1799_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1776_);
lean_ctor_set(v___x_1799_, 1, v___x_1796_);
lean_ctor_set(v___x_1799_, 2, v___x_1798_);
lean_ctor_set(v___x_1799_, 3, v___x_1784_);
v___x_1800_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__101));
v___x_1801_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1776_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102));
v___x_1803_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1776_);
lean_ctor_set(v___x_1803_, 1, v___x_1802_);
lean_inc_ref(v___x_1803_);
lean_inc_ref(v___x_1801_);
lean_inc_ref(v___x_1799_);
lean_inc_ref(v___x_1795_);
v___x_1804_ = l_Lean_Syntax_node5(v___x_1776_, v___x_1792_, v___x_1795_, v___x_1799_, v___x_1801_, v___x_1799_, v___x_1803_);
v___x_1805_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103);
v___x_1806_ = l_Lean_addMacroScope(v_quotContext_1770_, v___x_1762_, v_currMacroScope_1771_);
v___x_1807_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1776_);
lean_ctor_set(v___x_1807_, 1, v___x_1805_);
lean_ctor_set(v___x_1807_, 2, v___x_1806_);
lean_ctor_set(v___x_1807_, 3, v___x_1784_);
v___x_1808_ = l_Lean_Syntax_node5(v___x_1776_, v___x_1792_, v___x_1795_, v___x_1807_, v___x_1801_, v_a_1765_, v___x_1803_);
v___x_1809_ = l_Lean_Syntax_node5(v___x_1776_, v___x_1787_, v___x_1791_, v___x_1774_, v___x_1773_, v___x_1804_, v___x_1808_);
v___x_1810_ = l_Lean_Syntax_node2(v___x_1776_, v___x_1777_, v___x_1786_, v___x_1809_);
lean_inc_ref(v_a_1436_);
v___x_1811_ = lean_apply_3(v_mkMonadAdapt_1426_, v___x_1810_, v_a_1436_, v_a_1766_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1862_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
v_a_1813_ = lean_ctor_get(v___x_1811_, 1);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1815_ = v___x_1811_;
v_isShared_1816_ = v_isSharedCheck_1862_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_inc(v_a_1812_);
lean_dec(v___x_1811_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1862_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v_fnName_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v_ref_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1837_; 
v___x_1817_ = l_Lean_TSyntax_getId(v_elabName_1432_);
v___x_1818_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__105));
v___x_1819_ = l_Lean_Name_append(v___x_1817_, v___x_1818_);
v_fnName_1820_ = l_Lean_mkIdentFrom(v_elabName_1432_, v___x_1819_, v___x_1775_);
v___x_1821_ = lean_unsigned_to_nat(3u);
v___x_1822_ = lean_mk_empty_array_with_capacity(v___x_1821_);
v___x_1823_ = lean_array_push(v___x_1822_, v_tk_1431_);
lean_inc(v_elabName_1432_);
v___x_1824_ = lean_array_push(v___x_1823_, v_elabName_1432_);
lean_inc(v_type_1433_);
v___x_1825_ = lean_array_push(v___x_1824_, v_type_1433_);
v___x_1826_ = lean_box(2);
v___x_1827_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
lean_ctor_set(v___x_1827_, 1, v___x_1787_);
lean_ctor_set(v___x_1827_, 2, v___x_1825_);
v_ref_1828_ = l_Lean_replaceRef(v___x_1827_, v_ref_1772_);
lean_dec_ref_known(v___x_1827_, 3);
v___x_1829_ = l_Lean_SourceInfo_fromRef(v_ref_1828_, v___x_1775_);
lean_dec(v_ref_1828_);
v___x_1830_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1));
v___x_1831_ = lean_obj_once(&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6, &l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6_once, _init_l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6);
lean_inc_n(v___x_1829_, 2);
v___x_1832_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1829_);
lean_ctor_set(v___x_1832_, 1, v___x_1787_);
lean_ctor_set(v___x_1832_, 2, v___x_1831_);
v___x_1833_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2));
v___x_1834_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106));
v___x_1835_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107));
if (v_isShared_1816_ == 0)
{
lean_ctor_set_tag(v___x_1815_, 2);
lean_ctor_set(v___x_1815_, 1, v___x_1834_);
lean_ctor_set(v___x_1815_, 0, v___x_1829_);
v___x_1837_ = v___x_1815_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1829_);
lean_ctor_set(v_reuseFailAlloc_1861_, 1, v___x_1834_);
v___x_1837_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; size_t v_sz_1849_; size_t v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
lean_inc_n(v___x_1829_, 9);
v___x_1838_ = l_Lean_Syntax_node1(v___x_1829_, v___x_1835_, v___x_1837_);
v___x_1839_ = l_Lean_Syntax_node1(v___x_1829_, v___x_1787_, v___x_1838_);
v___x_1840_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
v___x_1841_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108));
v___x_1842_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109));
v___x_1843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1829_);
lean_ctor_set(v___x_1843_, 1, v___x_1841_);
v___x_1844_ = l_Lean_Syntax_node1(v___x_1829_, v___x_1842_, v___x_1843_);
v___x_1845_ = l_Lean_Syntax_node1(v___x_1829_, v___x_1787_, v___x_1844_);
v___x_1846_ = l_Lean_Syntax_node1(v___x_1829_, v___x_1840_, v___x_1845_);
v___x_1847_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__110));
v___x_1848_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1829_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
v_sz_1849_ = lean_array_size(v_binders_1434_);
v___x_1850_ = ((size_t)0ULL);
v___x_1851_ = l_unsafeCast___redArg(v_binders_1434_);
lean_inc(v___x_1851_);
v___x_1852_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(v_sz_1849_, v___x_1850_, v___x_1851_);
v___x_1853_ = l_unsafeCast___redArg(v___x_1852_);
lean_dec_ref(v___x_1852_);
v___x_1854_ = l_Array_append___redArg(v___x_1831_, v___x_1853_);
lean_dec(v___x_1853_);
v___x_1855_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1829_);
lean_ctor_set(v___x_1855_, 1, v___x_1787_);
lean_ctor_set(v___x_1855_, 2, v___x_1854_);
v___x_1856_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__111));
v___x_1857_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1829_);
lean_ctor_set(v___x_1857_, 1, v___x_1856_);
if (lean_obj_tag(v_entries_x3f_1435_) == 1)
{
lean_object* v_val_1858_; lean_object* v___x_1859_; 
v_val_1858_ = lean_ctor_get(v_entries_x3f_1435_, 0);
lean_inc(v_val_1858_);
lean_dec_ref_known(v_entries_x3f_1435_, 1);
v___x_1859_ = l_Array_mkArray1___redArg(v_val_1858_);
lean_inc(v_quotContext_1770_);
lean_inc(v_currMacroScope_1771_);
v___y_1699_ = v___x_1788_;
v___y_1700_ = v_currMacroScope_1771_;
v___y_1701_ = v___x_1848_;
v___y_1702_ = v___x_1782_;
v___y_1703_ = v_quotContext_1770_;
v___y_1704_ = v___x_1832_;
v___y_1705_ = v_fnName_1820_;
v___y_1706_ = v___x_1793_;
v___y_1707_ = v___x_1833_;
v___y_1708_ = v___x_1779_;
v___y_1709_ = v_a_1812_;
v___y_1710_ = v___x_1798_;
v___y_1711_ = v___x_1790_;
v___y_1712_ = v___x_1855_;
v___y_1713_ = v___x_1792_;
v___y_1714_ = v_a_1760_;
v___y_1715_ = v_sz_1849_;
v___y_1716_ = v___x_1846_;
v___y_1717_ = v___x_1784_;
v___y_1718_ = v___x_1839_;
v___y_1719_ = v___x_1763_;
v___y_1720_ = v___x_1774_;
v___y_1721_ = v___x_1826_;
v___y_1722_ = v___x_1783_;
v___y_1723_ = v___x_1857_;
v___y_1724_ = v___x_1850_;
v___y_1725_ = v___x_1773_;
v___y_1726_ = v___x_1851_;
v___y_1727_ = v___x_1784_;
v___y_1728_ = v___x_1831_;
v___y_1729_ = v___x_1800_;
v___y_1730_ = v___x_1787_;
v___y_1731_ = v___x_1777_;
v___y_1732_ = v___x_1830_;
v___y_1733_ = v___x_1796_;
v___y_1734_ = v_a_1813_;
v___y_1735_ = v___x_1829_;
v___y_1736_ = v___x_1802_;
v___y_1737_ = v___x_1859_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1860_; 
lean_dec(v_entries_x3f_1435_);
v___x_1860_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7));
lean_inc(v_quotContext_1770_);
lean_inc(v_currMacroScope_1771_);
v___y_1699_ = v___x_1788_;
v___y_1700_ = v_currMacroScope_1771_;
v___y_1701_ = v___x_1848_;
v___y_1702_ = v___x_1782_;
v___y_1703_ = v_quotContext_1770_;
v___y_1704_ = v___x_1832_;
v___y_1705_ = v_fnName_1820_;
v___y_1706_ = v___x_1793_;
v___y_1707_ = v___x_1833_;
v___y_1708_ = v___x_1779_;
v___y_1709_ = v_a_1812_;
v___y_1710_ = v___x_1798_;
v___y_1711_ = v___x_1790_;
v___y_1712_ = v___x_1855_;
v___y_1713_ = v___x_1792_;
v___y_1714_ = v_a_1760_;
v___y_1715_ = v_sz_1849_;
v___y_1716_ = v___x_1846_;
v___y_1717_ = v___x_1784_;
v___y_1718_ = v___x_1839_;
v___y_1719_ = v___x_1763_;
v___y_1720_ = v___x_1774_;
v___y_1721_ = v___x_1826_;
v___y_1722_ = v___x_1783_;
v___y_1723_ = v___x_1857_;
v___y_1724_ = v___x_1850_;
v___y_1725_ = v___x_1773_;
v___y_1726_ = v___x_1851_;
v___y_1727_ = v___x_1784_;
v___y_1728_ = v___x_1831_;
v___y_1729_ = v___x_1800_;
v___y_1730_ = v___x_1787_;
v___y_1731_ = v___x_1777_;
v___y_1732_ = v___x_1830_;
v___y_1733_ = v___x_1796_;
v___y_1734_ = v_a_1813_;
v___y_1735_ = v___x_1829_;
v___y_1736_ = v___x_1802_;
v___y_1737_ = v___x_1860_;
goto v___jp_1698_;
}
}
}
}
else
{
lean_dec(v___x_1798_);
lean_dec(v___x_1790_);
lean_dec_ref(v_a_1760_);
lean_dec(v_entries_x3f_1435_);
lean_dec(v_type_1433_);
lean_dec(v_elabName_1432_);
lean_dec(v_tk_1431_);
lean_dec(v_vis_x3f_1430_);
lean_dec(v_doc_x3f_1429_);
lean_dec(v_logExceptionsDefault_1427_);
lean_dec(v_monad_1425_);
return v___x_1811_;
}
}
}
}
else
{
lean_dec_ref(v_a_1760_);
lean_dec(v_entries_x3f_1435_);
lean_dec(v_type_1433_);
lean_dec(v_elabName_1432_);
lean_dec(v_tk_1431_);
lean_dec(v_vis_x3f_1430_);
lean_dec(v_doc_x3f_1429_);
lean_dec(v_logExceptionsDefault_1427_);
lean_dec_ref(v_mkMonadAdapt_1426_);
lean_dec(v_monad_1425_);
return v___x_1764_;
}
}
v___jp_1865_:
{
if (lean_obj_tag(v___y_1866_) == 0)
{
lean_object* v_a_1867_; lean_object* v_a_1868_; 
v_a_1867_ = lean_ctor_get(v___y_1866_, 0);
lean_inc(v_a_1867_);
v_a_1868_ = lean_ctor_get(v___y_1866_, 1);
lean_inc(v_a_1868_);
lean_dec_ref_known(v___y_1866_, 2);
v_a_1760_ = v_a_1867_;
v_a_1761_ = v_a_1868_;
goto v___jp_1759_;
}
else
{
lean_object* v_a_1869_; lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
lean_dec(v_entries_x3f_1435_);
lean_dec(v_type_1433_);
lean_dec(v_elabName_1432_);
lean_dec(v_tk_1431_);
lean_dec(v_vis_x3f_1430_);
lean_dec(v_doc_x3f_1429_);
lean_dec_ref(v_mkLogExceptionsTerm_1428_);
lean_dec(v_logExceptionsDefault_1427_);
lean_dec_ref(v_mkMonadAdapt_1426_);
lean_dec(v_monad_1425_);
v_a_1869_ = lean_ctor_get(v___y_1866_, 0);
v_a_1870_ = lean_ctor_get(v___y_1866_, 1);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___y_1866_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___y_1866_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_inc(v_a_1869_);
lean_dec(v___y_1866_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1869_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___boxed(lean_object* v_monad_1888_, lean_object* v_mkMonadAdapt_1889_, lean_object* v_logExceptionsDefault_1890_, lean_object* v_mkLogExceptionsTerm_1891_, lean_object* v_doc_x3f_1892_, lean_object* v_vis_x3f_1893_, lean_object* v_tk_1894_, lean_object* v_elabName_1895_, lean_object* v_type_1896_, lean_object* v_binders_1897_, lean_object* v_entries_x3f_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v_monad_1888_, v_mkMonadAdapt_1889_, v_logExceptionsDefault_1890_, v_mkLogExceptionsTerm_1891_, v_doc_x3f_1892_, v_vis_x3f_1893_, v_tk_1894_, v_elabName_1895_, v_type_1896_, v_binders_1897_, v_entries_x3f_1898_, v_a_1899_, v_a_1900_);
lean_dec_ref(v_a_1899_);
lean_dec_ref(v_binders_1897_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0(lean_object* v_logExceptions_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1905_, 0, v_logExceptions_1902_);
lean_ctor_set(v___x_1905_, 1, v___y_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0___boxed(lean_object* v_logExceptions_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0(v_logExceptions_1906_, v___y_1907_, v___y_1908_);
lean_dec_ref(v___y_1907_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1(lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___y_1910_);
lean_ctor_set(v___x_1913_, 1, v___y_1912_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1___boxed(lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1(v___y_1914_, v___y_1915_, v___y_1916_);
lean_dec_ref(v___y_1915_);
return v_res_1917_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7(void){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1932_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6));
v___x_1933_ = l_Lean_mkCIdent(v___x_1932_);
return v___x_1933_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10(void){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1938_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9));
v___x_1939_ = l_Lean_mkCIdent(v___x_1938_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab(lean_object* v_x_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_){
_start:
{
lean_object* v___x_1943_; uint8_t v___x_1944_; 
v___x_1943_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1));
lean_inc(v_x_1940_);
v___x_1944_ = l_Lean_Syntax_isOfKind(v_x_1940_, v___x_1943_);
if (v___x_1944_ == 0)
{
lean_object* v___x_1945_; 
lean_dec(v_x_1940_);
v___x_1945_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1942_);
return v___x_1945_;
}
else
{
lean_object* v___f_1946_; lean_object* v___f_1947_; lean_object* v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v_entries_x3f_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1982_; lean_object* v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___x_1992_; lean_object* v___y_1994_; lean_object* v___y_1995_; lean_object* v_vis_x3f_1996_; lean_object* v___y_1997_; lean_object* v___y_1998_; lean_object* v_doc_x3f_2023_; lean_object* v___y_2024_; lean_object* v___y_2025_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v___f_1946_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2));
v___f_1947_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3));
v___x_1992_ = lean_unsigned_to_nat(0u);
v___x_2034_ = l_Lean_Syntax_getArg(v_x_1940_, v___x_1992_);
v___x_2035_ = l_Lean_Syntax_isNone(v___x_2034_);
if (v___x_2035_ == 0)
{
lean_object* v___x_2036_; uint8_t v___x_2037_; 
v___x_2036_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2034_);
v___x_2037_ = l_Lean_Syntax_matchesNull(v___x_2034_, v___x_2036_);
if (v___x_2037_ == 0)
{
lean_object* v___x_2038_; 
lean_dec(v___x_2034_);
lean_dec(v_x_1940_);
v___x_2038_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1942_);
return v___x_2038_;
}
else
{
lean_object* v_doc_x3f_2039_; 
v_doc_x3f_2039_ = l_Lean_Syntax_getArg(v___x_2034_, v___x_1992_);
lean_dec(v___x_2034_);
if (v___x_2035_ == 0)
{
lean_object* v___x_2042_; uint8_t v___x_2043_; 
v___x_2042_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_2039_);
v___x_2043_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2039_, v___x_2042_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; 
lean_dec(v_doc_x3f_2039_);
lean_dec(v_x_1940_);
v___x_2044_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1942_);
return v___x_2044_;
}
else
{
goto v___jp_2040_;
}
}
else
{
goto v___jp_2040_;
}
v___jp_2040_:
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2041_, 0, v_doc_x3f_2039_);
v_doc_x3f_2023_ = v___x_2041_;
v___y_2024_ = v_a_1941_;
v___y_2025_ = v_a_1942_;
goto v___jp_2022_;
}
}
}
else
{
lean_object* v___x_2045_; 
lean_dec(v___x_2034_);
v___x_2045_ = lean_box(0);
v_doc_x3f_2023_ = v___x_2045_;
v___y_2024_ = v_a_1941_;
v___y_2025_ = v_a_1942_;
goto v___jp_2022_;
}
v___jp_1948_:
{
lean_object* v___x_1958_; lean_object* v_binders_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1958_ = l_Lean_Syntax_getArgs(v___y_1951_);
lean_dec(v___y_1951_);
v_binders_1959_ = l_unsafeCast___redArg(v___x_1958_);
lean_dec_ref(v___x_1958_);
v___x_1960_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7, &l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7_once, _init_l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7);
v___x_1961_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10, &l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10_once, _init_l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10);
v___x_1962_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v___x_1960_, v___f_1947_, v___x_1961_, v___f_1946_, v___y_1949_, v___y_1954_, v___y_1952_, v___y_1953_, v___y_1950_, v_binders_1959_, v_entries_x3f_1955_, v___y_1956_, v___y_1957_);
lean_dec(v_binders_1959_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v_a_1963_; lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
v_a_1964_ = lean_ctor_get(v___x_1962_, 1);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1962_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_inc(v_a_1963_);
lean_dec(v___x_1962_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1963_);
lean_ctor_set(v_reuseFailAlloc_1970_, 1, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
else
{
lean_object* v_a_1972_; lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
v_a_1972_ = lean_ctor_get(v___x_1962_, 0);
v_a_1973_ = lean_ctor_get(v___x_1962_, 1);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1962_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_inc(v_a_1972_);
lean_dec(v___x_1962_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1972_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
v___jp_1981_:
{
lean_object* v___x_1991_; 
v___x_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1991_, 0, v___y_1983_);
v___y_1949_ = v___y_1982_;
v___y_1950_ = v___y_1984_;
v___y_1951_ = v___y_1985_;
v___y_1952_ = v___y_1986_;
v___y_1953_ = v___y_1989_;
v___y_1954_ = v___y_1988_;
v_entries_x3f_1955_ = v___x_1991_;
v___y_1956_ = v___y_1990_;
v___y_1957_ = v___y_1987_;
goto v___jp_1948_;
}
v___jp_1993_:
{
lean_object* v___x_1999_; lean_object* v_elabName_2000_; lean_object* v___x_2001_; uint8_t v___x_2002_; 
v___x_1999_ = lean_unsigned_to_nat(3u);
v_elabName_2000_ = l_Lean_Syntax_getArg(v_x_1940_, v___x_1999_);
v___x_2001_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14));
lean_inc(v_elabName_2000_);
v___x_2002_ = l_Lean_Syntax_isOfKind(v_elabName_2000_, v___x_2001_);
if (v___x_2002_ == 0)
{
lean_object* v___x_2003_; 
lean_dec(v_elabName_2000_);
lean_dec(v_vis_x3f_1996_);
lean_dec(v___y_1994_);
lean_dec(v_x_1940_);
v___x_2003_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1998_);
return v___x_2003_;
}
else
{
lean_object* v___x_2004_; lean_object* v_type_2005_; uint8_t v___x_2006_; 
v___x_2004_ = lean_unsigned_to_nat(4u);
v_type_2005_ = l_Lean_Syntax_getArg(v_x_1940_, v___x_2004_);
lean_inc(v_type_2005_);
v___x_2006_ = l_Lean_Syntax_isOfKind(v_type_2005_, v___x_2001_);
if (v___x_2006_ == 0)
{
lean_object* v___x_2007_; 
lean_dec(v_type_2005_);
lean_dec(v_elabName_2000_);
lean_dec(v_vis_x3f_1996_);
lean_dec(v___y_1994_);
lean_dec(v_x_1940_);
v___x_2007_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1998_);
return v___x_2007_;
}
else
{
lean_object* v___x_2008_; lean_object* v_tk_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; uint8_t v___x_2014_; 
v___x_2008_ = lean_unsigned_to_nat(2u);
v_tk_2009_ = l_Lean_Syntax_getArg(v_x_1940_, v___x_2008_);
v___x_2010_ = lean_unsigned_to_nat(5u);
v___x_2011_ = l_Lean_Syntax_getArg(v_x_1940_, v___x_2010_);
v___x_2012_ = lean_unsigned_to_nat(6u);
v___x_2013_ = l_Lean_Syntax_getArg(v_x_1940_, v___x_2012_);
lean_dec(v_x_1940_);
v___x_2014_ = l_Lean_Syntax_isNone(v___x_2013_);
if (v___x_2014_ == 0)
{
uint8_t v___x_2015_; 
lean_inc(v___x_2013_);
v___x_2015_ = l_Lean_Syntax_matchesNull(v___x_2013_, v___y_1995_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; 
lean_dec(v___x_2013_);
lean_dec(v___x_2011_);
lean_dec(v_tk_2009_);
lean_dec(v_type_2005_);
lean_dec(v_elabName_2000_);
lean_dec(v_vis_x3f_1996_);
lean_dec(v___y_1994_);
v___x_2016_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1998_);
return v___x_2016_;
}
else
{
lean_object* v_entries_x3f_2017_; 
v_entries_x3f_2017_ = l_Lean_Syntax_getArg(v___x_2013_, v___x_1992_);
lean_dec(v___x_2013_);
if (v___x_2014_ == 0)
{
lean_object* v___x_2018_; uint8_t v___x_2019_; 
v___x_2018_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_2017_);
v___x_2019_ = l_Lean_Syntax_isOfKind(v_entries_x3f_2017_, v___x_2018_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2020_; 
lean_dec(v_entries_x3f_2017_);
lean_dec(v___x_2011_);
lean_dec(v_tk_2009_);
lean_dec(v_type_2005_);
lean_dec(v_elabName_2000_);
lean_dec(v_vis_x3f_1996_);
lean_dec(v___y_1994_);
v___x_2020_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1998_);
return v___x_2020_;
}
else
{
v___y_1982_ = v___y_1994_;
v___y_1983_ = v_entries_x3f_2017_;
v___y_1984_ = v_type_2005_;
v___y_1985_ = v___x_2011_;
v___y_1986_ = v_tk_2009_;
v___y_1987_ = v___y_1998_;
v___y_1988_ = v_vis_x3f_1996_;
v___y_1989_ = v_elabName_2000_;
v___y_1990_ = v___y_1997_;
goto v___jp_1981_;
}
}
else
{
v___y_1982_ = v___y_1994_;
v___y_1983_ = v_entries_x3f_2017_;
v___y_1984_ = v_type_2005_;
v___y_1985_ = v___x_2011_;
v___y_1986_ = v_tk_2009_;
v___y_1987_ = v___y_1998_;
v___y_1988_ = v_vis_x3f_1996_;
v___y_1989_ = v_elabName_2000_;
v___y_1990_ = v___y_1997_;
goto v___jp_1981_;
}
}
}
else
{
lean_object* v___x_2021_; 
lean_dec(v___x_2013_);
v___x_2021_ = lean_box(0);
v___y_1949_ = v___y_1994_;
v___y_1950_ = v_type_2005_;
v___y_1951_ = v___x_2011_;
v___y_1952_ = v_tk_2009_;
v___y_1953_ = v_elabName_2000_;
v___y_1954_ = v_vis_x3f_1996_;
v_entries_x3f_1955_ = v___x_2021_;
v___y_1956_ = v___y_1997_;
v___y_1957_ = v___y_1998_;
goto v___jp_1948_;
}
}
}
}
v___jp_2022_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; uint8_t v___x_2028_; 
v___x_2026_ = lean_unsigned_to_nat(1u);
v___x_2027_ = l_Lean_Syntax_getArg(v_x_1940_, v___x_2026_);
v___x_2028_ = l_Lean_Syntax_isNone(v___x_2027_);
if (v___x_2028_ == 0)
{
uint8_t v___x_2029_; 
lean_inc(v___x_2027_);
v___x_2029_ = l_Lean_Syntax_matchesNull(v___x_2027_, v___x_2026_);
if (v___x_2029_ == 0)
{
lean_object* v___x_2030_; 
lean_dec(v___x_2027_);
lean_dec(v_doc_x3f_2023_);
lean_dec(v_x_1940_);
v___x_2030_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2025_);
return v___x_2030_;
}
else
{
lean_object* v_vis_x3f_2031_; lean_object* v___x_2032_; 
v_vis_x3f_2031_ = l_Lean_Syntax_getArg(v___x_2027_, v___x_1992_);
lean_dec(v___x_2027_);
v___x_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2032_, 0, v_vis_x3f_2031_);
v___y_1994_ = v_doc_x3f_2023_;
v___y_1995_ = v___x_2026_;
v_vis_x3f_1996_ = v___x_2032_;
v___y_1997_ = v___y_2024_;
v___y_1998_ = v___y_2025_;
goto v___jp_1993_;
}
}
else
{
lean_object* v___x_2033_; 
lean_dec(v___x_2027_);
v___x_2033_ = lean_box(0);
v___y_1994_ = v_doc_x3f_2023_;
v___y_1995_ = v___x_2026_;
v_vis_x3f_1996_ = v___x_2033_;
v___y_1997_ = v___y_2024_;
v___y_1998_ = v___y_2025_;
goto v___jp_1993_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___boxed(lean_object* v_x_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_){
_start:
{
lean_object* v_res_2049_; 
v_res_2049_ = l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab(v_x_2046_, v_a_2047_, v_a_2048_);
lean_dec_ref(v_a_2047_);
return v_res_2049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1(){
_start:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2057_ = l_Lean_Elab_macroAttribute;
v___x_2058_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1));
v___x_2059_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1));
v___x_2060_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___boxed), 3, 0);
v___x_2061_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2057_, v___x_2058_, v___x_2059_, v___x_2060_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___boxed(lean_object* v_a_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1();
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab(lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2068_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_2069_ = lean_unsigned_to_nat(2u);
v___x_2070_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_2068_, v___x_2069_, v_a_2064_, v_a_2065_, v_a_2066_);
return v___x_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___boxed(lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab(v_a_2071_, v_a_2072_, v_a_2073_);
lean_dec(v_a_2073_);
lean_dec_ref(v_a_2072_);
lean_dec(v_a_2071_);
return v_res_2075_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0(void){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2076_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___boxed), 4, 0);
v___x_2077_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_2077_, 0, v___x_2076_);
return v___x_2077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1(){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2079_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1));
v___x_2080_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0);
v___x_2081_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_2079_, v___x_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___boxed(lean_object* v_a_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1();
return v_res_2083_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9(void){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__8));
v___x_2096_ = l_String_toRawSubstring_x27(v___x_2095_);
return v___x_2096_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14(void){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13));
v___x_2102_ = l_String_toRawSubstring_x27(v___x_2101_);
return v___x_2102_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22(void){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21));
v___x_2118_ = l_String_toRawSubstring_x27(v___x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1(lean_object* v___x_2121_, lean_object* v___x_2122_, lean_object* v___x_2123_, lean_object* v___x_2124_, lean_object* v___x_2125_, lean_object* v_logExceptions_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v_quotContext_2129_; lean_object* v_currMacroScope_2130_; lean_object* v_ref_2131_; uint8_t v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v_quotContext_2129_ = lean_ctor_get(v___y_2127_, 1);
v_currMacroScope_2130_ = lean_ctor_get(v___y_2127_, 2);
v_ref_2131_ = lean_ctor_get(v___y_2127_, 5);
v___x_2132_ = 0;
v___x_2133_ = l_Lean_SourceInfo_fromRef(v_ref_2131_, v___x_2132_);
v___x_2134_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1));
v___x_2135_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2));
lean_inc_n(v___x_2133_, 14);
v___x_2136_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2133_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3));
lean_inc_ref_n(v___x_2123_, 5);
lean_inc_ref_n(v___x_2122_, 4);
lean_inc_ref_n(v___x_2121_, 9);
v___x_2138_ = l_Lean_Name_mkStr4(v___x_2121_, v___x_2122_, v___x_2123_, v___x_2137_);
v___x_2139_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4));
v___x_2140_ = l_Lean_Name_mkStr4(v___x_2121_, v___x_2122_, v___x_2123_, v___x_2139_);
v___x_2141_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5));
v___x_2142_ = l_Lean_Name_mkStr4(v___x_2121_, v___x_2122_, v___x_2123_, v___x_2141_);
v___x_2143_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97));
v___x_2144_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2133_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7));
v___x_2146_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9);
v___x_2147_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12);
lean_inc_n(v_currMacroScope_2130_, 3);
lean_inc_n(v_quotContext_2129_, 3);
v___x_2148_ = l_Lean_addMacroScope(v_quotContext_2129_, v___x_2147_, v_currMacroScope_2130_);
lean_inc_ref_n(v___x_2124_, 2);
v___x_2149_ = l_Lean_Name_mkStr3(v___x_2121_, v___x_2124_, v___x_2125_);
v___x_2150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2150_, 0, v___x_2149_);
v___x_2151_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10));
v___x_2152_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2));
v___x_2153_ = l_Lean_Name_mkStr3(v___x_2121_, v___x_2151_, v___x_2152_);
v___x_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
v___x_2155_ = l_Lean_Name_mkStr3(v___x_2121_, v___x_2124_, v___x_2152_);
v___x_2156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2156_, 0, v___x_2155_);
v___x_2157_ = l_Lean_Name_mkStr3(v___x_2121_, v___x_2124_, v___x_2123_);
v___x_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2157_);
v___x_2159_ = l_Lean_Name_mkStr2(v___x_2121_, v___x_2151_);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
v___x_2161_ = lean_box(0);
v___x_2162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2160_);
lean_ctor_set(v___x_2162_, 1, v___x_2161_);
v___x_2163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2158_);
lean_ctor_set(v___x_2163_, 1, v___x_2162_);
v___x_2164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2156_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
v___x_2165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2154_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2150_);
lean_ctor_set(v___x_2166_, 1, v___x_2165_);
v___x_2167_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2133_);
lean_ctor_set(v___x_2167_, 1, v___x_2146_);
lean_ctor_set(v___x_2167_, 2, v___x_2148_);
lean_ctor_set(v___x_2167_, 3, v___x_2166_);
v___x_2168_ = l_Lean_Syntax_node1(v___x_2133_, v___x_2145_, v___x_2167_);
v___x_2169_ = l_Lean_Syntax_node2(v___x_2133_, v___x_2142_, v___x_2144_, v___x_2168_);
v___x_2170_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11));
v___x_2171_ = l_Lean_Name_mkStr4(v___x_2121_, v___x_2122_, v___x_2123_, v___x_2170_);
v___x_2172_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12));
v___x_2173_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2133_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66));
v___x_2175_ = l_Lean_Name_mkStr4(v___x_2121_, v___x_2122_, v___x_2123_, v___x_2174_);
v___x_2176_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14);
v___x_2177_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15));
v___x_2178_ = l_Lean_addMacroScope(v_quotContext_2129_, v___x_2177_, v_currMacroScope_2130_);
v___x_2179_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19));
v___x_2180_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2133_);
lean_ctor_set(v___x_2180_, 1, v___x_2176_);
lean_ctor_set(v___x_2180_, 2, v___x_2178_);
lean_ctor_set(v___x_2180_, 3, v___x_2179_);
v___x_2181_ = l_Lean_Syntax_node1(v___x_2133_, v___x_2175_, v___x_2180_);
v___x_2182_ = l_Lean_Syntax_node2(v___x_2133_, v___x_2171_, v___x_2173_, v___x_2181_);
v___x_2183_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102));
v___x_2184_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2133_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
v___x_2185_ = l_Lean_Syntax_node3(v___x_2133_, v___x_2140_, v___x_2169_, v___x_2182_, v___x_2184_);
v___x_2186_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20));
v___x_2187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2133_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
v___x_2188_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22);
v___x_2189_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__23));
v___x_2190_ = l_Lean_addMacroScope(v_quotContext_2129_, v___x_2189_, v_currMacroScope_2130_);
v___x_2191_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2133_);
lean_ctor_set(v___x_2191_, 1, v___x_2188_);
lean_ctor_set(v___x_2191_, 2, v___x_2190_);
lean_ctor_set(v___x_2191_, 3, v___x_2161_);
v___x_2192_ = l_Lean_Syntax_node3(v___x_2133_, v___x_2138_, v___x_2185_, v___x_2187_, v___x_2191_);
v___x_2193_ = l_Lean_Syntax_node3(v___x_2133_, v___x_2134_, v_logExceptions_2126_, v___x_2136_, v___x_2192_);
v___x_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
lean_ctor_set(v___x_2194_, 1, v___y_2128_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___boxed(lean_object* v___x_2195_, lean_object* v___x_2196_, lean_object* v___x_2197_, lean_object* v___x_2198_, lean_object* v___x_2199_, lean_object* v_logExceptions_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1(v___x_2195_, v___x_2196_, v___x_2197_, v___x_2198_, v___x_2199_, v_logExceptions_2200_, v___y_2201_, v___y_2202_);
lean_dec_ref(v___y_2201_);
return v_res_2203_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5(void){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2222_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4));
v___x_2223_ = l_Lean_mkCIdent(v___x_2222_);
return v___x_2223_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8(void){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7));
v___x_2229_ = l_Lean_mkCIdent(v___x_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab(lean_object* v_x_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_){
_start:
{
lean_object* v___x_2233_; uint8_t v___x_2234_; 
v___x_2233_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1));
lean_inc(v_x_2230_);
v___x_2234_ = l_Lean_Syntax_isOfKind(v_x_2230_, v___x_2233_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; 
lean_dec(v_x_2230_);
v___x_2235_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2232_);
return v___x_2235_;
}
else
{
lean_object* v___f_2236_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v___y_2242_; lean_object* v___y_2243_; lean_object* v_entries_x3f_2244_; lean_object* v___y_2245_; lean_object* v___y_2246_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___x_2282_; lean_object* v___y_2284_; lean_object* v___y_2285_; lean_object* v_vis_x3f_2286_; lean_object* v___y_2287_; lean_object* v___y_2288_; lean_object* v_doc_x3f_2313_; lean_object* v___y_2314_; lean_object* v___y_2315_; lean_object* v___x_2324_; uint8_t v___x_2325_; 
v___f_2236_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3));
v___x_2282_ = lean_unsigned_to_nat(0u);
v___x_2324_ = l_Lean_Syntax_getArg(v_x_2230_, v___x_2282_);
v___x_2325_ = l_Lean_Syntax_isNone(v___x_2324_);
if (v___x_2325_ == 0)
{
lean_object* v___x_2326_; uint8_t v___x_2327_; 
v___x_2326_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2324_);
v___x_2327_ = l_Lean_Syntax_matchesNull(v___x_2324_, v___x_2326_);
if (v___x_2327_ == 0)
{
lean_object* v___x_2328_; 
lean_dec(v___x_2324_);
lean_dec(v_x_2230_);
v___x_2328_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2232_);
return v___x_2328_;
}
else
{
lean_object* v_doc_x3f_2329_; 
v_doc_x3f_2329_ = l_Lean_Syntax_getArg(v___x_2324_, v___x_2282_);
lean_dec(v___x_2324_);
if (v___x_2325_ == 0)
{
lean_object* v___x_2332_; uint8_t v___x_2333_; 
v___x_2332_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_2329_);
v___x_2333_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2329_, v___x_2332_);
if (v___x_2333_ == 0)
{
lean_object* v___x_2334_; 
lean_dec(v_doc_x3f_2329_);
lean_dec(v_x_2230_);
v___x_2334_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2232_);
return v___x_2334_;
}
else
{
goto v___jp_2330_;
}
}
else
{
goto v___jp_2330_;
}
v___jp_2330_:
{
lean_object* v___x_2331_; 
v___x_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2331_, 0, v_doc_x3f_2329_);
v_doc_x3f_2313_ = v___x_2331_;
v___y_2314_ = v_a_2231_;
v___y_2315_ = v_a_2232_;
goto v___jp_2312_;
}
}
}
else
{
lean_object* v___x_2335_; 
lean_dec(v___x_2324_);
v___x_2335_ = lean_box(0);
v_doc_x3f_2313_ = v___x_2335_;
v___y_2314_ = v_a_2231_;
v___y_2315_ = v_a_2232_;
goto v___jp_2312_;
}
v___jp_2237_:
{
lean_object* v___f_2247_; lean_object* v___x_2248_; lean_object* v_binders_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___f_2247_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__2));
v___x_2248_ = l_Lean_Syntax_getArgs(v___y_2242_);
lean_dec(v___y_2242_);
v_binders_2249_ = l_unsafeCast___redArg(v___x_2248_);
lean_dec_ref(v___x_2248_);
v___x_2250_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5);
v___x_2251_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8);
v___x_2252_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v___x_2250_, v___f_2236_, v___x_2251_, v___f_2247_, v___y_2243_, v___y_2240_, v___y_2241_, v___y_2239_, v___y_2238_, v_binders_2249_, v_entries_x3f_2244_, v___y_2245_, v___y_2246_);
lean_dec(v_binders_2249_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v_a_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2261_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
v_a_2254_ = lean_ctor_get(v___x_2252_, 1);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2256_ = v___x_2252_;
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_a_2254_);
lean_inc(v_a_2253_);
lean_dec(v___x_2252_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2259_; 
if (v_isShared_2257_ == 0)
{
v___x_2259_ = v___x_2256_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_a_2253_);
lean_ctor_set(v_reuseFailAlloc_2260_, 1, v_a_2254_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
else
{
lean_object* v_a_2262_; lean_object* v_a_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2270_; 
v_a_2262_ = lean_ctor_get(v___x_2252_, 0);
v_a_2263_ = lean_ctor_get(v___x_2252_, 1);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2265_ = v___x_2252_;
v_isShared_2266_ = v_isSharedCheck_2270_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_a_2263_);
lean_inc(v_a_2262_);
lean_dec(v___x_2252_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2270_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
lean_object* v___x_2268_; 
if (v_isShared_2266_ == 0)
{
v___x_2268_ = v___x_2265_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_a_2262_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v_a_2263_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
return v___x_2268_;
}
}
}
}
v___jp_2271_:
{
lean_object* v___x_2281_; 
v___x_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___y_2279_);
v___y_2238_ = v___y_2272_;
v___y_2239_ = v___y_2273_;
v___y_2240_ = v___y_2275_;
v___y_2241_ = v___y_2277_;
v___y_2242_ = v___y_2276_;
v___y_2243_ = v___y_2280_;
v_entries_x3f_2244_ = v___x_2281_;
v___y_2245_ = v___y_2278_;
v___y_2246_ = v___y_2274_;
goto v___jp_2237_;
}
v___jp_2283_:
{
lean_object* v___x_2289_; lean_object* v_elabName_2290_; lean_object* v___x_2291_; uint8_t v___x_2292_; 
v___x_2289_ = lean_unsigned_to_nat(3u);
v_elabName_2290_ = l_Lean_Syntax_getArg(v_x_2230_, v___x_2289_);
v___x_2291_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14));
lean_inc(v_elabName_2290_);
v___x_2292_ = l_Lean_Syntax_isOfKind(v_elabName_2290_, v___x_2291_);
if (v___x_2292_ == 0)
{
lean_object* v___x_2293_; 
lean_dec(v_elabName_2290_);
lean_dec(v_vis_x3f_2286_);
lean_dec(v___y_2285_);
lean_dec(v_x_2230_);
v___x_2293_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2288_);
return v___x_2293_;
}
else
{
lean_object* v___x_2294_; lean_object* v_type_2295_; uint8_t v___x_2296_; 
v___x_2294_ = lean_unsigned_to_nat(4u);
v_type_2295_ = l_Lean_Syntax_getArg(v_x_2230_, v___x_2294_);
lean_inc(v_type_2295_);
v___x_2296_ = l_Lean_Syntax_isOfKind(v_type_2295_, v___x_2291_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; 
lean_dec(v_type_2295_);
lean_dec(v_elabName_2290_);
lean_dec(v_vis_x3f_2286_);
lean_dec(v___y_2285_);
lean_dec(v_x_2230_);
v___x_2297_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2288_);
return v___x_2297_;
}
else
{
lean_object* v___x_2298_; lean_object* v_tk_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; uint8_t v___x_2304_; 
v___x_2298_ = lean_unsigned_to_nat(2u);
v_tk_2299_ = l_Lean_Syntax_getArg(v_x_2230_, v___x_2298_);
v___x_2300_ = lean_unsigned_to_nat(5u);
v___x_2301_ = l_Lean_Syntax_getArg(v_x_2230_, v___x_2300_);
v___x_2302_ = lean_unsigned_to_nat(6u);
v___x_2303_ = l_Lean_Syntax_getArg(v_x_2230_, v___x_2302_);
lean_dec(v_x_2230_);
v___x_2304_ = l_Lean_Syntax_isNone(v___x_2303_);
if (v___x_2304_ == 0)
{
uint8_t v___x_2305_; 
lean_inc(v___x_2303_);
v___x_2305_ = l_Lean_Syntax_matchesNull(v___x_2303_, v___y_2284_);
if (v___x_2305_ == 0)
{
lean_object* v___x_2306_; 
lean_dec(v___x_2303_);
lean_dec(v___x_2301_);
lean_dec(v_tk_2299_);
lean_dec(v_type_2295_);
lean_dec(v_elabName_2290_);
lean_dec(v_vis_x3f_2286_);
lean_dec(v___y_2285_);
v___x_2306_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2288_);
return v___x_2306_;
}
else
{
lean_object* v_entries_x3f_2307_; 
v_entries_x3f_2307_ = l_Lean_Syntax_getArg(v___x_2303_, v___x_2282_);
lean_dec(v___x_2303_);
if (v___x_2304_ == 0)
{
lean_object* v___x_2308_; uint8_t v___x_2309_; 
v___x_2308_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_2307_);
v___x_2309_ = l_Lean_Syntax_isOfKind(v_entries_x3f_2307_, v___x_2308_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; 
lean_dec(v_entries_x3f_2307_);
lean_dec(v___x_2301_);
lean_dec(v_tk_2299_);
lean_dec(v_type_2295_);
lean_dec(v_elabName_2290_);
lean_dec(v_vis_x3f_2286_);
lean_dec(v___y_2285_);
v___x_2310_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2288_);
return v___x_2310_;
}
else
{
v___y_2272_ = v_type_2295_;
v___y_2273_ = v_elabName_2290_;
v___y_2274_ = v___y_2288_;
v___y_2275_ = v_vis_x3f_2286_;
v___y_2276_ = v___x_2301_;
v___y_2277_ = v_tk_2299_;
v___y_2278_ = v___y_2287_;
v___y_2279_ = v_entries_x3f_2307_;
v___y_2280_ = v___y_2285_;
goto v___jp_2271_;
}
}
else
{
v___y_2272_ = v_type_2295_;
v___y_2273_ = v_elabName_2290_;
v___y_2274_ = v___y_2288_;
v___y_2275_ = v_vis_x3f_2286_;
v___y_2276_ = v___x_2301_;
v___y_2277_ = v_tk_2299_;
v___y_2278_ = v___y_2287_;
v___y_2279_ = v_entries_x3f_2307_;
v___y_2280_ = v___y_2285_;
goto v___jp_2271_;
}
}
}
else
{
lean_object* v___x_2311_; 
lean_dec(v___x_2303_);
v___x_2311_ = lean_box(0);
v___y_2238_ = v_type_2295_;
v___y_2239_ = v_elabName_2290_;
v___y_2240_ = v_vis_x3f_2286_;
v___y_2241_ = v_tk_2299_;
v___y_2242_ = v___x_2301_;
v___y_2243_ = v___y_2285_;
v_entries_x3f_2244_ = v___x_2311_;
v___y_2245_ = v___y_2287_;
v___y_2246_ = v___y_2288_;
goto v___jp_2237_;
}
}
}
}
v___jp_2312_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; uint8_t v___x_2318_; 
v___x_2316_ = lean_unsigned_to_nat(1u);
v___x_2317_ = l_Lean_Syntax_getArg(v_x_2230_, v___x_2316_);
v___x_2318_ = l_Lean_Syntax_isNone(v___x_2317_);
if (v___x_2318_ == 0)
{
uint8_t v___x_2319_; 
lean_inc(v___x_2317_);
v___x_2319_ = l_Lean_Syntax_matchesNull(v___x_2317_, v___x_2316_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; 
lean_dec(v___x_2317_);
lean_dec(v_doc_x3f_2313_);
lean_dec(v_x_2230_);
v___x_2320_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2315_);
return v___x_2320_;
}
else
{
lean_object* v_vis_x3f_2321_; lean_object* v___x_2322_; 
v_vis_x3f_2321_ = l_Lean_Syntax_getArg(v___x_2317_, v___x_2282_);
lean_dec(v___x_2317_);
v___x_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2322_, 0, v_vis_x3f_2321_);
v___y_2284_ = v___x_2316_;
v___y_2285_ = v_doc_x3f_2313_;
v_vis_x3f_2286_ = v___x_2322_;
v___y_2287_ = v___y_2314_;
v___y_2288_ = v___y_2315_;
goto v___jp_2283_;
}
}
else
{
lean_object* v___x_2323_; 
lean_dec(v___x_2317_);
v___x_2323_ = lean_box(0);
v___y_2284_ = v___x_2316_;
v___y_2285_ = v_doc_x3f_2313_;
v_vis_x3f_2286_ = v___x_2323_;
v___y_2287_ = v___y_2314_;
v___y_2288_ = v___y_2315_;
goto v___jp_2283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___boxed(lean_object* v_x_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab(v_x_2336_, v_a_2337_, v_a_2338_);
lean_dec_ref(v_a_2337_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1(){
_start:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2347_ = l_Lean_Elab_macroAttribute;
v___x_2348_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1));
v___x_2349_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1));
v___x_2350_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___boxed), 3, 0);
v___x_2351_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2347_, v___x_2348_, v___x_2349_, v___x_2350_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___boxed(lean_object* v_a_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1();
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab(lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_){
_start:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2358_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_2359_ = lean_unsigned_to_nat(2u);
v___x_2360_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_2358_, v___x_2359_, v_a_2354_, v_a_2355_, v_a_2356_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___boxed(lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab(v_a_2361_, v_a_2362_, v_a_2363_);
lean_dec(v_a_2363_);
lean_dec_ref(v_a_2362_);
lean_dec(v_a_2361_);
return v_res_2365_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0(void){
_start:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___boxed), 4, 0);
v___x_2367_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_2367_, 0, v___x_2366_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1(){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2369_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1));
v___x_2370_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0);
v___x_2371_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_2369_, v___x_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___boxed(lean_object* v_a_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1();
return v_res_2373_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2375_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0));
v___x_2376_ = l_String_toRawSubstring_x27(v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1(lean_object* v___x_2379_, lean_object* v___x_2380_, lean_object* v___x_2381_, lean_object* v___x_2382_, lean_object* v___x_2383_, lean_object* v_logExceptions_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_quotContext_2387_; lean_object* v_currMacroScope_2388_; lean_object* v_ref_2389_; uint8_t v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v_quotContext_2387_ = lean_ctor_get(v___y_2385_, 1);
v_currMacroScope_2388_ = lean_ctor_get(v___y_2385_, 2);
v_ref_2389_ = lean_ctor_get(v___y_2385_, 5);
v___x_2390_ = 0;
v___x_2391_ = l_Lean_SourceInfo_fromRef(v_ref_2389_, v___x_2390_);
v___x_2392_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1));
v___x_2393_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2));
lean_inc_n(v___x_2391_, 14);
v___x_2394_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2391_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3));
lean_inc_ref_n(v___x_2381_, 5);
lean_inc_ref_n(v___x_2380_, 4);
lean_inc_ref_n(v___x_2379_, 9);
v___x_2396_ = l_Lean_Name_mkStr4(v___x_2379_, v___x_2380_, v___x_2381_, v___x_2395_);
v___x_2397_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4));
v___x_2398_ = l_Lean_Name_mkStr4(v___x_2379_, v___x_2380_, v___x_2381_, v___x_2397_);
v___x_2399_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5));
v___x_2400_ = l_Lean_Name_mkStr4(v___x_2379_, v___x_2380_, v___x_2381_, v___x_2399_);
v___x_2401_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97));
v___x_2402_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2391_);
lean_ctor_set(v___x_2402_, 1, v___x_2401_);
v___x_2403_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7));
v___x_2404_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9);
v___x_2405_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12);
lean_inc_n(v_currMacroScope_2388_, 3);
lean_inc_n(v_quotContext_2387_, 3);
v___x_2406_ = l_Lean_addMacroScope(v_quotContext_2387_, v___x_2405_, v_currMacroScope_2388_);
lean_inc_ref_n(v___x_2382_, 2);
v___x_2407_ = l_Lean_Name_mkStr3(v___x_2379_, v___x_2382_, v___x_2383_);
v___x_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
v___x_2409_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10));
v___x_2410_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2));
v___x_2411_ = l_Lean_Name_mkStr3(v___x_2379_, v___x_2409_, v___x_2410_);
v___x_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
v___x_2413_ = l_Lean_Name_mkStr3(v___x_2379_, v___x_2382_, v___x_2410_);
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
v___x_2415_ = l_Lean_Name_mkStr3(v___x_2379_, v___x_2382_, v___x_2381_);
v___x_2416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2415_);
v___x_2417_ = l_Lean_Name_mkStr2(v___x_2379_, v___x_2409_);
v___x_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2417_);
v___x_2419_ = lean_box(0);
v___x_2420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2418_);
lean_ctor_set(v___x_2420_, 1, v___x_2419_);
v___x_2421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2416_);
lean_ctor_set(v___x_2421_, 1, v___x_2420_);
v___x_2422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2414_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2412_);
lean_ctor_set(v___x_2423_, 1, v___x_2422_);
v___x_2424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2408_);
lean_ctor_set(v___x_2424_, 1, v___x_2423_);
v___x_2425_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2391_);
lean_ctor_set(v___x_2425_, 1, v___x_2404_);
lean_ctor_set(v___x_2425_, 2, v___x_2406_);
lean_ctor_set(v___x_2425_, 3, v___x_2424_);
v___x_2426_ = l_Lean_Syntax_node1(v___x_2391_, v___x_2403_, v___x_2425_);
v___x_2427_ = l_Lean_Syntax_node2(v___x_2391_, v___x_2400_, v___x_2402_, v___x_2426_);
v___x_2428_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11));
v___x_2429_ = l_Lean_Name_mkStr4(v___x_2379_, v___x_2380_, v___x_2381_, v___x_2428_);
v___x_2430_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12));
v___x_2431_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2391_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66));
v___x_2433_ = l_Lean_Name_mkStr4(v___x_2379_, v___x_2380_, v___x_2381_, v___x_2432_);
v___x_2434_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14);
v___x_2435_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15));
v___x_2436_ = l_Lean_addMacroScope(v_quotContext_2387_, v___x_2435_, v_currMacroScope_2388_);
v___x_2437_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19));
v___x_2438_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2391_);
lean_ctor_set(v___x_2438_, 1, v___x_2434_);
lean_ctor_set(v___x_2438_, 2, v___x_2436_);
lean_ctor_set(v___x_2438_, 3, v___x_2437_);
v___x_2439_ = l_Lean_Syntax_node1(v___x_2391_, v___x_2433_, v___x_2438_);
v___x_2440_ = l_Lean_Syntax_node2(v___x_2391_, v___x_2429_, v___x_2431_, v___x_2439_);
v___x_2441_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102));
v___x_2442_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2391_);
lean_ctor_set(v___x_2442_, 1, v___x_2441_);
v___x_2443_ = l_Lean_Syntax_node3(v___x_2391_, v___x_2398_, v___x_2427_, v___x_2440_, v___x_2442_);
v___x_2444_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20));
v___x_2445_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2391_);
lean_ctor_set(v___x_2445_, 1, v___x_2444_);
v___x_2446_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1, &l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1);
v___x_2447_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__2));
v___x_2448_ = l_Lean_addMacroScope(v_quotContext_2387_, v___x_2447_, v_currMacroScope_2388_);
v___x_2449_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2391_);
lean_ctor_set(v___x_2449_, 1, v___x_2446_);
lean_ctor_set(v___x_2449_, 2, v___x_2448_);
lean_ctor_set(v___x_2449_, 3, v___x_2419_);
v___x_2450_ = l_Lean_Syntax_node3(v___x_2391_, v___x_2396_, v___x_2443_, v___x_2445_, v___x_2449_);
v___x_2451_ = l_Lean_Syntax_node3(v___x_2391_, v___x_2392_, v_logExceptions_2384_, v___x_2394_, v___x_2450_);
v___x_2452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2451_);
lean_ctor_set(v___x_2452_, 1, v___y_2386_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___boxed(lean_object* v___x_2453_, lean_object* v___x_2454_, lean_object* v___x_2455_, lean_object* v___x_2456_, lean_object* v___x_2457_, lean_object* v_logExceptions_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1(v___x_2453_, v___x_2454_, v___x_2455_, v___x_2456_, v___x_2457_, v_logExceptions_2458_, v___y_2459_, v___y_2460_);
lean_dec_ref(v___y_2459_);
return v_res_2461_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5));
v___x_2482_ = l_Lean_mkCIdent(v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig(lean_object* v_x_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_){
_start:
{
lean_object* v___x_2486_; uint8_t v___x_2487_; 
v___x_2486_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1));
lean_inc(v_x_2483_);
v___x_2487_ = l_Lean_Syntax_isOfKind(v_x_2483_, v___x_2486_);
if (v___x_2487_ == 0)
{
lean_object* v___x_2488_; 
lean_dec(v_x_2483_);
v___x_2488_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2485_);
return v___x_2488_;
}
else
{
lean_object* v___f_2489_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v_entries_x3f_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___x_2535_; lean_object* v___y_2537_; lean_object* v___y_2538_; lean_object* v_vis_x3f_2539_; lean_object* v___y_2540_; lean_object* v___y_2541_; lean_object* v_doc_x3f_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___x_2577_; uint8_t v___x_2578_; 
v___f_2489_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3));
v___x_2535_ = lean_unsigned_to_nat(0u);
v___x_2577_ = l_Lean_Syntax_getArg(v_x_2483_, v___x_2535_);
v___x_2578_ = l_Lean_Syntax_isNone(v___x_2577_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; uint8_t v___x_2580_; 
v___x_2579_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2577_);
v___x_2580_ = l_Lean_Syntax_matchesNull(v___x_2577_, v___x_2579_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; 
lean_dec(v___x_2577_);
lean_dec(v_x_2483_);
v___x_2581_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2485_);
return v___x_2581_;
}
else
{
lean_object* v_doc_x3f_2582_; 
v_doc_x3f_2582_ = l_Lean_Syntax_getArg(v___x_2577_, v___x_2535_);
lean_dec(v___x_2577_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2585_; uint8_t v___x_2586_; 
v___x_2585_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_2582_);
v___x_2586_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2582_, v___x_2585_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; 
lean_dec(v_doc_x3f_2582_);
lean_dec(v_x_2483_);
v___x_2587_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2485_);
return v___x_2587_;
}
else
{
goto v___jp_2583_;
}
}
else
{
goto v___jp_2583_;
}
v___jp_2583_:
{
lean_object* v___x_2584_; 
v___x_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_doc_x3f_2582_);
v_doc_x3f_2566_ = v___x_2584_;
v___y_2567_ = v_a_2484_;
v___y_2568_ = v_a_2485_;
goto v___jp_2565_;
}
}
}
else
{
lean_object* v___x_2588_; 
lean_dec(v___x_2577_);
v___x_2588_ = lean_box(0);
v_doc_x3f_2566_ = v___x_2588_;
v___y_2567_ = v_a_2484_;
v___y_2568_ = v_a_2485_;
goto v___jp_2565_;
}
v___jp_2490_:
{
lean_object* v___f_2500_; lean_object* v___x_2501_; lean_object* v_binders_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___f_2500_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__2));
v___x_2501_ = l_Lean_Syntax_getArgs(v___y_2492_);
lean_dec(v___y_2492_);
v_binders_2502_ = l_unsafeCast___redArg(v___x_2501_);
lean_dec_ref(v___x_2501_);
v___x_2503_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6, &l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6);
v___x_2504_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8);
v___x_2505_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v___x_2503_, v___f_2489_, v___x_2504_, v___f_2500_, v___y_2491_, v___y_2495_, v___y_2494_, v___y_2496_, v___y_2493_, v_binders_2502_, v_entries_x3f_2497_, v___y_2498_, v___y_2499_);
lean_dec(v_binders_2502_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
v_a_2507_ = lean_ctor_get(v___x_2505_, 1);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2505_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_inc(v_a_2506_);
lean_dec(v___x_2505_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2506_);
lean_ctor_set(v_reuseFailAlloc_2513_, 1, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
else
{
lean_object* v_a_2515_; lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
v_a_2515_ = lean_ctor_get(v___x_2505_, 0);
v_a_2516_ = lean_ctor_get(v___x_2505_, 1);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v___x_2505_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_inc(v_a_2515_);
lean_dec(v___x_2505_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2515_);
lean_ctor_set(v_reuseFailAlloc_2522_, 1, v_a_2516_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
}
v___jp_2524_:
{
lean_object* v___x_2534_; 
v___x_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2534_, 0, v___y_2528_);
v___y_2491_ = v___y_2525_;
v___y_2492_ = v___y_2526_;
v___y_2493_ = v___y_2527_;
v___y_2494_ = v___y_2529_;
v___y_2495_ = v___y_2531_;
v___y_2496_ = v___y_2533_;
v_entries_x3f_2497_ = v___x_2534_;
v___y_2498_ = v___y_2530_;
v___y_2499_ = v___y_2532_;
goto v___jp_2490_;
}
v___jp_2536_:
{
lean_object* v___x_2542_; lean_object* v_elabName_2543_; lean_object* v___x_2544_; uint8_t v___x_2545_; 
v___x_2542_ = lean_unsigned_to_nat(3u);
v_elabName_2543_ = l_Lean_Syntax_getArg(v_x_2483_, v___x_2542_);
v___x_2544_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14));
lean_inc(v_elabName_2543_);
v___x_2545_ = l_Lean_Syntax_isOfKind(v_elabName_2543_, v___x_2544_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2546_; 
lean_dec(v_elabName_2543_);
lean_dec(v_vis_x3f_2539_);
lean_dec(v___y_2537_);
lean_dec(v_x_2483_);
v___x_2546_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2541_);
return v___x_2546_;
}
else
{
lean_object* v___x_2547_; lean_object* v_type_2548_; uint8_t v___x_2549_; 
v___x_2547_ = lean_unsigned_to_nat(4u);
v_type_2548_ = l_Lean_Syntax_getArg(v_x_2483_, v___x_2547_);
lean_inc(v_type_2548_);
v___x_2549_ = l_Lean_Syntax_isOfKind(v_type_2548_, v___x_2544_);
if (v___x_2549_ == 0)
{
lean_object* v___x_2550_; 
lean_dec(v_type_2548_);
lean_dec(v_elabName_2543_);
lean_dec(v_vis_x3f_2539_);
lean_dec(v___y_2537_);
lean_dec(v_x_2483_);
v___x_2550_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2541_);
return v___x_2550_;
}
else
{
lean_object* v___x_2551_; lean_object* v_tk_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; uint8_t v___x_2557_; 
v___x_2551_ = lean_unsigned_to_nat(2u);
v_tk_2552_ = l_Lean_Syntax_getArg(v_x_2483_, v___x_2551_);
v___x_2553_ = lean_unsigned_to_nat(5u);
v___x_2554_ = l_Lean_Syntax_getArg(v_x_2483_, v___x_2553_);
v___x_2555_ = lean_unsigned_to_nat(6u);
v___x_2556_ = l_Lean_Syntax_getArg(v_x_2483_, v___x_2555_);
lean_dec(v_x_2483_);
v___x_2557_ = l_Lean_Syntax_isNone(v___x_2556_);
if (v___x_2557_ == 0)
{
uint8_t v___x_2558_; 
lean_inc(v___x_2556_);
v___x_2558_ = l_Lean_Syntax_matchesNull(v___x_2556_, v___y_2538_);
if (v___x_2558_ == 0)
{
lean_object* v___x_2559_; 
lean_dec(v___x_2556_);
lean_dec(v___x_2554_);
lean_dec(v_tk_2552_);
lean_dec(v_type_2548_);
lean_dec(v_elabName_2543_);
lean_dec(v_vis_x3f_2539_);
lean_dec(v___y_2537_);
v___x_2559_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2541_);
return v___x_2559_;
}
else
{
lean_object* v_entries_x3f_2560_; 
v_entries_x3f_2560_ = l_Lean_Syntax_getArg(v___x_2556_, v___x_2535_);
lean_dec(v___x_2556_);
if (v___x_2557_ == 0)
{
lean_object* v___x_2561_; uint8_t v___x_2562_; 
v___x_2561_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_2560_);
v___x_2562_ = l_Lean_Syntax_isOfKind(v_entries_x3f_2560_, v___x_2561_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; 
lean_dec(v_entries_x3f_2560_);
lean_dec(v___x_2554_);
lean_dec(v_tk_2552_);
lean_dec(v_type_2548_);
lean_dec(v_elabName_2543_);
lean_dec(v_vis_x3f_2539_);
lean_dec(v___y_2537_);
v___x_2563_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2541_);
return v___x_2563_;
}
else
{
v___y_2525_ = v___y_2537_;
v___y_2526_ = v___x_2554_;
v___y_2527_ = v_type_2548_;
v___y_2528_ = v_entries_x3f_2560_;
v___y_2529_ = v_tk_2552_;
v___y_2530_ = v___y_2540_;
v___y_2531_ = v_vis_x3f_2539_;
v___y_2532_ = v___y_2541_;
v___y_2533_ = v_elabName_2543_;
goto v___jp_2524_;
}
}
else
{
v___y_2525_ = v___y_2537_;
v___y_2526_ = v___x_2554_;
v___y_2527_ = v_type_2548_;
v___y_2528_ = v_entries_x3f_2560_;
v___y_2529_ = v_tk_2552_;
v___y_2530_ = v___y_2540_;
v___y_2531_ = v_vis_x3f_2539_;
v___y_2532_ = v___y_2541_;
v___y_2533_ = v_elabName_2543_;
goto v___jp_2524_;
}
}
}
else
{
lean_object* v___x_2564_; 
lean_dec(v___x_2556_);
v___x_2564_ = lean_box(0);
v___y_2491_ = v___y_2537_;
v___y_2492_ = v___x_2554_;
v___y_2493_ = v_type_2548_;
v___y_2494_ = v_tk_2552_;
v___y_2495_ = v_vis_x3f_2539_;
v___y_2496_ = v_elabName_2543_;
v_entries_x3f_2497_ = v___x_2564_;
v___y_2498_ = v___y_2540_;
v___y_2499_ = v___y_2541_;
goto v___jp_2490_;
}
}
}
}
v___jp_2565_:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; uint8_t v___x_2571_; 
v___x_2569_ = lean_unsigned_to_nat(1u);
v___x_2570_ = l_Lean_Syntax_getArg(v_x_2483_, v___x_2569_);
v___x_2571_ = l_Lean_Syntax_isNone(v___x_2570_);
if (v___x_2571_ == 0)
{
uint8_t v___x_2572_; 
lean_inc(v___x_2570_);
v___x_2572_ = l_Lean_Syntax_matchesNull(v___x_2570_, v___x_2569_);
if (v___x_2572_ == 0)
{
lean_object* v___x_2573_; 
lean_dec(v___x_2570_);
lean_dec(v_doc_x3f_2566_);
lean_dec(v_x_2483_);
v___x_2573_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2568_);
return v___x_2573_;
}
else
{
lean_object* v_vis_x3f_2574_; lean_object* v___x_2575_; 
v_vis_x3f_2574_ = l_Lean_Syntax_getArg(v___x_2570_, v___x_2535_);
lean_dec(v___x_2570_);
v___x_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2575_, 0, v_vis_x3f_2574_);
v___y_2537_ = v_doc_x3f_2566_;
v___y_2538_ = v___x_2569_;
v_vis_x3f_2539_ = v___x_2575_;
v___y_2540_ = v___y_2567_;
v___y_2541_ = v___y_2568_;
goto v___jp_2536_;
}
}
else
{
lean_object* v___x_2576_; 
lean_dec(v___x_2570_);
v___x_2576_ = lean_box(0);
v___y_2537_ = v_doc_x3f_2566_;
v___y_2538_ = v___x_2569_;
v_vis_x3f_2539_ = v___x_2576_;
v___y_2540_ = v___y_2567_;
v___y_2541_ = v___y_2568_;
goto v___jp_2536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___boxed(lean_object* v_x_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Lean_Elab_ConfigEval_elabDeclareTacticConfig(v_x_2589_, v_a_2590_, v_a_2591_);
lean_dec_ref(v_a_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1(){
_start:
{
lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2600_ = l_Lean_Elab_macroAttribute;
v___x_2601_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1));
v___x_2602_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1));
v___x_2603_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___boxed), 3, 0);
v___x_2604_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2600_, v___x_2601_, v___x_2602_, v___x_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___boxed(lean_object* v_a_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1();
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig(lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2611_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_2612_ = lean_unsigned_to_nat(2u);
v___x_2613_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_2611_, v___x_2612_, v_a_2607_, v_a_2608_, v_a_2609_);
return v___x_2613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___boxed(lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_){
_start:
{
lean_object* v_res_2618_; 
v_res_2618_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig(v_a_2614_, v_a_2615_, v_a_2616_);
lean_dec(v_a_2616_);
lean_dec_ref(v_a_2615_);
lean_dec(v_a_2614_);
return v_res_2618_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0(void){
_start:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2619_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___boxed), 4, 0);
v___x_2620_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_2620_, 0, v___x_2619_);
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1(){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2622_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1));
v___x_2623_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0);
v___x_2624_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_2622_, v___x_2623_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___boxed(lean_object* v_a_2625_){
_start:
{
lean_object* v_res_2626_; 
v_res_2626_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1();
return v_res_2626_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2628_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__0));
v___x_2629_ = l_String_toRawSubstring_x27(v___x_2628_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1(lean_object* v___x_2631_, lean_object* v___x_2632_, lean_object* v___x_2633_, lean_object* v___x_2634_, lean_object* v___x_2635_, lean_object* v_eval_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_quotContext_2639_; lean_object* v_currMacroScope_2640_; lean_object* v_ref_2641_; uint8_t v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v_quotContext_2639_ = lean_ctor_get(v___y_2637_, 1);
v_currMacroScope_2640_ = lean_ctor_get(v___y_2637_, 2);
v_ref_2641_ = lean_ctor_get(v___y_2637_, 5);
v___x_2642_ = 0;
v___x_2643_ = l_Lean_SourceInfo_fromRef(v_ref_2641_, v___x_2642_);
v___x_2644_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82));
lean_inc_ref(v___x_2631_);
v___x_2645_ = l_Lean_Name_mkStr4(v___x_2631_, v___x_2632_, v___x_2633_, v___x_2644_);
v___x_2646_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1, &l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1_once, _init_l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1);
v___x_2647_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__2));
lean_inc_ref(v___x_2634_);
v___x_2648_ = l_Lean_Name_mkStr2(v___x_2634_, v___x_2647_);
lean_inc(v_currMacroScope_2640_);
lean_inc(v_quotContext_2639_);
v___x_2649_ = l_Lean_addMacroScope(v_quotContext_2639_, v___x_2648_, v_currMacroScope_2640_);
v___x_2650_ = l_Lean_Name_mkStr4(v___x_2631_, v___x_2635_, v___x_2634_, v___x_2647_);
v___x_2651_ = lean_box(0);
lean_inc(v___x_2650_);
v___x_2652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2650_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2650_);
v___x_2654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2653_);
lean_ctor_set(v___x_2654_, 1, v___x_2651_);
v___x_2655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2652_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
lean_inc_n(v___x_2643_, 2);
v___x_2656_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2643_);
lean_ctor_set(v___x_2656_, 1, v___x_2646_);
lean_ctor_set(v___x_2656_, 2, v___x_2649_);
lean_ctor_set(v___x_2656_, 3, v___x_2655_);
v___x_2657_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
v___x_2658_ = l_Lean_Syntax_node1(v___x_2643_, v___x_2657_, v_eval_2636_);
v___x_2659_ = l_Lean_Syntax_node2(v___x_2643_, v___x_2645_, v___x_2656_, v___x_2658_);
v___x_2660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2659_);
lean_ctor_set(v___x_2660_, 1, v___y_2638_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___boxed(lean_object* v___x_2661_, lean_object* v___x_2662_, lean_object* v___x_2663_, lean_object* v___x_2664_, lean_object* v___x_2665_, lean_object* v_eval_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1(v___x_2661_, v___x_2662_, v___x_2663_, v___x_2664_, v___x_2665_, v_eval_2666_, v___y_2667_, v___y_2668_);
lean_dec_ref(v___y_2667_);
return v_res_2669_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5(void){
_start:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; 
v___x_2688_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4));
v___x_2689_ = l_Lean_mkCIdent(v___x_2688_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig(lean_object* v_x_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_){
_start:
{
lean_object* v___x_2693_; uint8_t v___x_2694_; 
v___x_2693_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1));
lean_inc(v_x_2690_);
v___x_2694_ = l_Lean_Syntax_isOfKind(v_x_2690_, v___x_2693_);
if (v___x_2694_ == 0)
{
lean_object* v___x_2695_; 
lean_dec(v_x_2690_);
v___x_2695_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2692_);
return v___x_2695_;
}
else
{
lean_object* v___f_2696_; lean_object* v___y_2698_; lean_object* v___y_2699_; lean_object* v___y_2700_; lean_object* v___y_2701_; lean_object* v___y_2702_; lean_object* v___y_2703_; lean_object* v_entries_x3f_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___x_2742_; lean_object* v___y_2744_; lean_object* v___y_2745_; lean_object* v_vis_x3f_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v_doc_x3f_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___x_2784_; uint8_t v___x_2785_; 
v___f_2696_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2));
v___x_2742_ = lean_unsigned_to_nat(0u);
v___x_2784_ = l_Lean_Syntax_getArg(v_x_2690_, v___x_2742_);
v___x_2785_ = l_Lean_Syntax_isNone(v___x_2784_);
if (v___x_2785_ == 0)
{
lean_object* v___x_2786_; uint8_t v___x_2787_; 
v___x_2786_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2784_);
v___x_2787_ = l_Lean_Syntax_matchesNull(v___x_2784_, v___x_2786_);
if (v___x_2787_ == 0)
{
lean_object* v___x_2788_; 
lean_dec(v___x_2784_);
lean_dec(v_x_2690_);
v___x_2788_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2692_);
return v___x_2788_;
}
else
{
lean_object* v_doc_x3f_2789_; 
v_doc_x3f_2789_ = l_Lean_Syntax_getArg(v___x_2784_, v___x_2742_);
lean_dec(v___x_2784_);
if (v___x_2785_ == 0)
{
lean_object* v___x_2792_; uint8_t v___x_2793_; 
v___x_2792_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_2789_);
v___x_2793_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2789_, v___x_2792_);
if (v___x_2793_ == 0)
{
lean_object* v___x_2794_; 
lean_dec(v_doc_x3f_2789_);
lean_dec(v_x_2690_);
v___x_2794_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2692_);
return v___x_2794_;
}
else
{
goto v___jp_2790_;
}
}
else
{
goto v___jp_2790_;
}
v___jp_2790_:
{
lean_object* v___x_2791_; 
v___x_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2791_, 0, v_doc_x3f_2789_);
v_doc_x3f_2773_ = v___x_2791_;
v___y_2774_ = v_a_2691_;
v___y_2775_ = v_a_2692_;
goto v___jp_2772_;
}
}
}
else
{
lean_object* v___x_2795_; 
lean_dec(v___x_2784_);
v___x_2795_ = lean_box(0);
v_doc_x3f_2773_ = v___x_2795_;
v___y_2774_ = v_a_2691_;
v___y_2775_ = v_a_2692_;
goto v___jp_2772_;
}
v___jp_2697_:
{
lean_object* v___x_2707_; lean_object* v_binders_2708_; lean_object* v___f_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2707_ = l_Lean_Syntax_getArgs(v___y_2703_);
lean_dec(v___y_2703_);
v_binders_2708_ = l_unsafeCast___redArg(v___x_2707_);
lean_dec_ref(v___x_2707_);
v___f_2709_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__2));
v___x_2710_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5, &l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5_once, _init_l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5);
v___x_2711_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8);
v___x_2712_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v___x_2710_, v___f_2709_, v___x_2711_, v___f_2696_, v___y_2701_, v___y_2702_, v___y_2699_, v___y_2698_, v___y_2700_, v_binders_2708_, v_entries_x3f_2704_, v___y_2705_, v___y_2706_);
lean_dec(v_binders_2708_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v_a_2713_; lean_object* v_a_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2721_; 
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
v_a_2714_ = lean_ctor_get(v___x_2712_, 1);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2716_ = v___x_2712_;
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_a_2714_);
lean_inc(v_a_2713_);
lean_dec(v___x_2712_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v___x_2719_; 
if (v_isShared_2717_ == 0)
{
v___x_2719_ = v___x_2716_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_a_2713_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v_a_2714_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
else
{
lean_object* v_a_2722_; lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
v_a_2722_ = lean_ctor_get(v___x_2712_, 0);
v_a_2723_ = lean_ctor_get(v___x_2712_, 1);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2712_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_inc(v_a_2722_);
lean_dec(v___x_2712_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2722_);
lean_ctor_set(v_reuseFailAlloc_2729_, 1, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
v___jp_2731_:
{
lean_object* v___x_2741_; 
v___x_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2741_, 0, v___y_2733_);
v___y_2698_ = v___y_2732_;
v___y_2699_ = v___y_2734_;
v___y_2700_ = v___y_2738_;
v___y_2701_ = v___y_2737_;
v___y_2702_ = v___y_2739_;
v___y_2703_ = v___y_2740_;
v_entries_x3f_2704_ = v___x_2741_;
v___y_2705_ = v___y_2736_;
v___y_2706_ = v___y_2735_;
goto v___jp_2697_;
}
v___jp_2743_:
{
lean_object* v___x_2749_; lean_object* v_elabName_2750_; lean_object* v___x_2751_; uint8_t v___x_2752_; 
v___x_2749_ = lean_unsigned_to_nat(3u);
v_elabName_2750_ = l_Lean_Syntax_getArg(v_x_2690_, v___x_2749_);
v___x_2751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__14));
lean_inc(v_elabName_2750_);
v___x_2752_ = l_Lean_Syntax_isOfKind(v_elabName_2750_, v___x_2751_);
if (v___x_2752_ == 0)
{
lean_object* v___x_2753_; 
lean_dec(v_elabName_2750_);
lean_dec(v_vis_x3f_2746_);
lean_dec(v___y_2744_);
lean_dec(v_x_2690_);
v___x_2753_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2748_);
return v___x_2753_;
}
else
{
lean_object* v___x_2754_; lean_object* v_type_2755_; uint8_t v___x_2756_; 
v___x_2754_ = lean_unsigned_to_nat(4u);
v_type_2755_ = l_Lean_Syntax_getArg(v_x_2690_, v___x_2754_);
lean_inc(v_type_2755_);
v___x_2756_ = l_Lean_Syntax_isOfKind(v_type_2755_, v___x_2751_);
if (v___x_2756_ == 0)
{
lean_object* v___x_2757_; 
lean_dec(v_type_2755_);
lean_dec(v_elabName_2750_);
lean_dec(v_vis_x3f_2746_);
lean_dec(v___y_2744_);
lean_dec(v_x_2690_);
v___x_2757_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2748_);
return v___x_2757_;
}
else
{
lean_object* v___x_2758_; lean_object* v_tk_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; uint8_t v___x_2764_; 
v___x_2758_ = lean_unsigned_to_nat(2u);
v_tk_2759_ = l_Lean_Syntax_getArg(v_x_2690_, v___x_2758_);
v___x_2760_ = lean_unsigned_to_nat(5u);
v___x_2761_ = l_Lean_Syntax_getArg(v_x_2690_, v___x_2760_);
v___x_2762_ = lean_unsigned_to_nat(6u);
v___x_2763_ = l_Lean_Syntax_getArg(v_x_2690_, v___x_2762_);
lean_dec(v_x_2690_);
v___x_2764_ = l_Lean_Syntax_isNone(v___x_2763_);
if (v___x_2764_ == 0)
{
uint8_t v___x_2765_; 
lean_inc(v___x_2763_);
v___x_2765_ = l_Lean_Syntax_matchesNull(v___x_2763_, v___y_2745_);
if (v___x_2765_ == 0)
{
lean_object* v___x_2766_; 
lean_dec(v___x_2763_);
lean_dec(v___x_2761_);
lean_dec(v_tk_2759_);
lean_dec(v_type_2755_);
lean_dec(v_elabName_2750_);
lean_dec(v_vis_x3f_2746_);
lean_dec(v___y_2744_);
v___x_2766_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2748_);
return v___x_2766_;
}
else
{
lean_object* v_entries_x3f_2767_; 
v_entries_x3f_2767_ = l_Lean_Syntax_getArg(v___x_2763_, v___x_2742_);
lean_dec(v___x_2763_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2768_; uint8_t v___x_2769_; 
v___x_2768_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_2767_);
v___x_2769_ = l_Lean_Syntax_isOfKind(v_entries_x3f_2767_, v___x_2768_);
if (v___x_2769_ == 0)
{
lean_object* v___x_2770_; 
lean_dec(v_entries_x3f_2767_);
lean_dec(v___x_2761_);
lean_dec(v_tk_2759_);
lean_dec(v_type_2755_);
lean_dec(v_elabName_2750_);
lean_dec(v_vis_x3f_2746_);
lean_dec(v___y_2744_);
v___x_2770_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2748_);
return v___x_2770_;
}
else
{
v___y_2732_ = v_elabName_2750_;
v___y_2733_ = v_entries_x3f_2767_;
v___y_2734_ = v_tk_2759_;
v___y_2735_ = v___y_2748_;
v___y_2736_ = v___y_2747_;
v___y_2737_ = v___y_2744_;
v___y_2738_ = v_type_2755_;
v___y_2739_ = v_vis_x3f_2746_;
v___y_2740_ = v___x_2761_;
goto v___jp_2731_;
}
}
else
{
v___y_2732_ = v_elabName_2750_;
v___y_2733_ = v_entries_x3f_2767_;
v___y_2734_ = v_tk_2759_;
v___y_2735_ = v___y_2748_;
v___y_2736_ = v___y_2747_;
v___y_2737_ = v___y_2744_;
v___y_2738_ = v_type_2755_;
v___y_2739_ = v_vis_x3f_2746_;
v___y_2740_ = v___x_2761_;
goto v___jp_2731_;
}
}
}
else
{
lean_object* v___x_2771_; 
lean_dec(v___x_2763_);
v___x_2771_ = lean_box(0);
v___y_2698_ = v_elabName_2750_;
v___y_2699_ = v_tk_2759_;
v___y_2700_ = v_type_2755_;
v___y_2701_ = v___y_2744_;
v___y_2702_ = v_vis_x3f_2746_;
v___y_2703_ = v___x_2761_;
v_entries_x3f_2704_ = v___x_2771_;
v___y_2705_ = v___y_2747_;
v___y_2706_ = v___y_2748_;
goto v___jp_2697_;
}
}
}
}
v___jp_2772_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; uint8_t v___x_2778_; 
v___x_2776_ = lean_unsigned_to_nat(1u);
v___x_2777_ = l_Lean_Syntax_getArg(v_x_2690_, v___x_2776_);
v___x_2778_ = l_Lean_Syntax_isNone(v___x_2777_);
if (v___x_2778_ == 0)
{
uint8_t v___x_2779_; 
lean_inc(v___x_2777_);
v___x_2779_ = l_Lean_Syntax_matchesNull(v___x_2777_, v___x_2776_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2780_; 
lean_dec(v___x_2777_);
lean_dec(v_doc_x3f_2773_);
lean_dec(v_x_2690_);
v___x_2780_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2775_);
return v___x_2780_;
}
else
{
lean_object* v_vis_x3f_2781_; lean_object* v___x_2782_; 
v_vis_x3f_2781_ = l_Lean_Syntax_getArg(v___x_2777_, v___x_2742_);
lean_dec(v___x_2777_);
v___x_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2782_, 0, v_vis_x3f_2781_);
v___y_2744_ = v_doc_x3f_2773_;
v___y_2745_ = v___x_2776_;
v_vis_x3f_2746_ = v___x_2782_;
v___y_2747_ = v___y_2774_;
v___y_2748_ = v___y_2775_;
goto v___jp_2743_;
}
}
else
{
lean_object* v___x_2783_; 
lean_dec(v___x_2777_);
v___x_2783_ = lean_box(0);
v___y_2744_ = v_doc_x3f_2773_;
v___y_2745_ = v___x_2776_;
v_vis_x3f_2746_ = v___x_2783_;
v___y_2747_ = v___y_2774_;
v___y_2748_ = v___y_2775_;
goto v___jp_2743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___boxed(lean_object* v_x_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_){
_start:
{
lean_object* v_res_2799_; 
v_res_2799_ = l_Lean_Elab_ConfigEval_elabDeclareCommandConfig(v_x_2796_, v_a_2797_, v_a_2798_);
lean_dec_ref(v_a_2797_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1(){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2807_ = l_Lean_Elab_macroAttribute;
v___x_2808_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1));
v___x_2809_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1));
v___x_2810_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___boxed), 3, 0);
v___x_2811_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2807_, v___x_2808_, v___x_2809_, v___x_2810_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___boxed(lean_object* v_a_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1();
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab(lean_object* v_a_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_){
_start:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2818_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_2819_ = lean_unsigned_to_nat(2u);
v___x_2820_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_2818_, v___x_2819_, v_a_2814_, v_a_2815_, v_a_2816_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___boxed(lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab(v_a_2821_, v_a_2822_, v_a_2823_);
lean_dec(v_a_2823_);
lean_dec_ref(v_a_2822_);
lean_dec(v_a_2821_);
return v_res_2825_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0(void){
_start:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2826_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___boxed), 4, 0);
v___x_2827_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_2827_, 0, v___x_2826_);
return v___x_2827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1(){
_start:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2829_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1));
v___x_2830_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0);
v___x_2831_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_2829_, v___x_2830_);
return v___x_2831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___boxed(lean_object* v_a_2832_){
_start:
{
lean_object* v_res_2833_; 
v_res_2833_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1();
return v_res_2833_;
}
}
lean_object* runtime_initialize_Lean_Elab_ConfigEval_Commands(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ConfigEval_DeriveEvalConfigItem(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_MissingDocs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ConfigEval_Builtins(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_ConfigEval_Commands(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval_DeriveEvalConfigItem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_MissingDocs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ConfigEval_Builtins(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_ConfigEval_Commands(uint8_t builtin);
lean_object* initialize_Lean_Elab_ConfigEval_DeriveEvalConfigItem(uint8_t builtin);
lean_object* initialize_Lean_Linter_MissingDocs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ConfigEval_Builtins(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_ConfigEval_Commands(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ConfigEval_DeriveEvalConfigItem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_MissingDocs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval_Builtins(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ConfigEval_Builtins(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ConfigEval_Builtins(builtin);
}
#ifdef __cplusplus
}
#endif

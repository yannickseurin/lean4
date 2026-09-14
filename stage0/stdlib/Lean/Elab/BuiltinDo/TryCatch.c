// Lean compiler output
// Module: Lean.Elab.BuiltinDo.TryCatch
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.Do.Control
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Do_EffectForwarder_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinder___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Do_EffectForwarder_restoreCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_withDeadCodeFromInfo(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkFreshResultType___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Term_registerMVarErrorHoleInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_mkPure___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_enterFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_EffectForwarder_ofCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Do_checkMutVarsForShadowing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MonadExcept"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(162, 154, 253, 120, 110, 153, 103, 113)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tryCatch"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(162, 154, 253, 120, 110, 153, 103, 113)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(167, 129, 71, 246, 198, 229, 11, 131)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "MonadExceptOf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(190, 1, 119, 34, 204, 224, 173, 252)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tryCatchThe"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(34, 194, 87, 82, 168, 232, 231, 97)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doCatch"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 196, 191, 146, 79, 230, 20, 8)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "doCatchMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 106, 10, 98, 177, 11, 181, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "catch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__4;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__8;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__19_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoTry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doTry"};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 105, 89, 167, 131, 32, 5, 203)}};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoTry___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "β"};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__2_value),LEAN_SCALAR_PTR_LITERAL(163, 67, 89, 131, 111, 186, 232, 248)}};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoTry___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "MonadFinally"};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__4_value),LEAN_SCALAR_PTR_LITERAL(83, 34, 97, 149, 212, 54, 5, 166)}};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_elabDoTry___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Functor"};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__6_value),LEAN_SCALAR_PTR_LITERAL(39, 234, 35, 88, 204, 30, 230, 30)}};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_elabDoTry___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tryFinally"};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__8_value),LEAN_SCALAR_PTR_LITERAL(98, 44, 194, 252, 68, 153, 47, 79)}};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_elabDoTry___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Invalid `try`. There must be a `catch` or `finally`."};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__11;
static const lean_string_object l_Lean_Elab_Do_elabDoTry___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doFinally"};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoTry___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__12_value),LEAN_SCALAR_PTR_LITERAL(94, 201, 209, 4, 148, 58, 33, 223)}};
static const lean_object* l_Lean_Elab_Do_elabDoTry___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoTry___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabDoTry"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(67, 47, 35, 48, 51, 128, 204, 231)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___boxed(lean_object* v_00_u03b1_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0(v_00_u03b1_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0(lean_object* v___x_29_, uint8_t v___x_30_, lean_object* v_cont_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Elab_Do_elabDoSeq(v___x_29_, v_cont_31_, v___x_30_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0___boxed(lean_object* v___x_41_, lean_object* v___x_42_, lean_object* v_cont_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
uint8_t v___x_3893__boxed_52_; lean_object* v_res_53_; 
v___x_3893__boxed_52_ = lean_unbox(v___x_42_);
v_res_53_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0(v___x_41_, v___x_3893__boxed_52_, v_cont_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1(lean_object* v_lifter_67_, lean_object* v___f_68_, lean_object* v___x_69_, uint8_t v___x_70_, lean_object* v_monadInfo_71_, lean_object* v_body_72_, lean_object* v___y_73_, lean_object* v_eType_x3f_74_, lean_object* v_x_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_catcher_84_; lean_object* v___y_85_; lean_object* v___x_102_; 
lean_inc(v___y_81_);
lean_inc_ref(v___y_80_);
lean_inc(v___y_79_);
lean_inc_ref(v___y_78_);
lean_inc_ref(v_x_75_);
v___x_102_ = lean_infer_type(v_x_75_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v___x_104_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc_n(v_a_103_, 2);
lean_dec_ref_known(v___x_102_, 1);
v___x_104_ = l_Lean_Meta_getDecLevel(v_a_103_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; 
v_a_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_a_105_);
lean_dec_ref_known(v___x_104_, 1);
if (lean_obj_tag(v_eType_x3f_74_) == 0)
{
goto v___jp_106_;
}
else
{
if (v___x_70_ == 0)
{
goto v___jp_106_;
}
else
{
lean_object* v_m_124_; lean_object* v_u_125_; lean_object* v_v_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v_m_124_ = lean_ctor_get(v_monadInfo_71_, 0);
lean_inc_ref_n(v_m_124_, 2);
v_u_125_ = lean_ctor_get(v_monadInfo_71_, 1);
lean_inc(v_u_125_);
v_v_126_ = lean_ctor_get(v_monadInfo_71_, 2);
lean_inc(v_v_126_);
lean_dec_ref(v_monadInfo_71_);
v___x_127_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5));
v___x_128_ = lean_box(0);
v___x_129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_129_, 0, v_v_126_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_130_, 0, v_u_125_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_131_, 0, v_a_105_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
lean_inc_ref(v___x_131_);
v___x_132_ = l_Lean_mkConst(v___x_127_, v___x_131_);
lean_inc(v_a_103_);
v___x_133_ = l_Lean_mkAppB(v___x_132_, v_a_103_, v_m_124_);
v___x_134_ = lean_box(0);
v___x_135_ = l_Lean_Elab_Term_mkInstMVar(v___x_133_, v___x_134_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v_a_136_; lean_object* v_liftedDoBlockResultType_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v_a_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc(v_a_136_);
lean_dec_ref_known(v___x_135_, 1);
v_liftedDoBlockResultType_137_ = lean_ctor_get(v_lifter_67_, 5);
v___x_138_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7));
v___x_139_ = l_Lean_mkConst(v___x_138_, v___x_131_);
lean_inc_ref(v_liftedDoBlockResultType_137_);
v___x_140_ = lean_alloc_closure((void*)(l_Lean_mkApp6), 7, 6);
lean_closure_set(v___x_140_, 0, v___x_139_);
lean_closure_set(v___x_140_, 1, v_a_103_);
lean_closure_set(v___x_140_, 2, v_m_124_);
lean_closure_set(v___x_140_, 3, v_a_136_);
lean_closure_set(v___x_140_, 4, v_liftedDoBlockResultType_137_);
lean_closure_set(v___x_140_, 5, v_body_72_);
v_catcher_84_ = v___x_140_;
v___y_85_ = v___y_73_;
goto v___jp_83_;
}
else
{
lean_dec_ref_known(v___x_131_, 2);
lean_dec_ref(v_m_124_);
lean_dec(v_a_103_);
lean_dec_ref(v_x_75_);
lean_dec_ref(v_body_72_);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_lifter_67_);
return v___x_135_;
}
}
}
v___jp_106_:
{
lean_object* v_m_107_; lean_object* v_u_108_; lean_object* v_v_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v_m_107_ = lean_ctor_get(v_monadInfo_71_, 0);
lean_inc_ref_n(v_m_107_, 2);
v_u_108_ = lean_ctor_get(v_monadInfo_71_, 1);
lean_inc(v_u_108_);
v_v_109_ = lean_ctor_get(v_monadInfo_71_, 2);
lean_inc(v_v_109_);
lean_dec_ref(v_monadInfo_71_);
v___x_110_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1));
v___x_111_ = lean_box(0);
v___x_112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_112_, 0, v_v_109_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_113_, 0, v_u_108_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_114_, 0, v_a_105_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
lean_inc_ref(v___x_114_);
v___x_115_ = l_Lean_mkConst(v___x_110_, v___x_114_);
lean_inc(v_a_103_);
v___x_116_ = l_Lean_mkAppB(v___x_115_, v_a_103_, v_m_107_);
v___x_117_ = lean_box(0);
v___x_118_ = l_Lean_Elab_Term_mkInstMVar(v___x_116_, v___x_117_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v_a_119_; lean_object* v_liftedDoBlockResultType_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v_a_119_ = lean_ctor_get(v___x_118_, 0);
lean_inc(v_a_119_);
lean_dec_ref_known(v___x_118_, 1);
v_liftedDoBlockResultType_120_ = lean_ctor_get(v_lifter_67_, 5);
v___x_121_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3));
v___x_122_ = l_Lean_mkConst(v___x_121_, v___x_114_);
lean_inc_ref(v_liftedDoBlockResultType_120_);
v___x_123_ = lean_alloc_closure((void*)(l_Lean_mkApp6), 7, 6);
lean_closure_set(v___x_123_, 0, v___x_122_);
lean_closure_set(v___x_123_, 1, v_a_103_);
lean_closure_set(v___x_123_, 2, v_m_107_);
lean_closure_set(v___x_123_, 3, v_a_119_);
lean_closure_set(v___x_123_, 4, v_liftedDoBlockResultType_120_);
lean_closure_set(v___x_123_, 5, v_body_72_);
v_catcher_84_ = v___x_123_;
v___y_85_ = v___y_73_;
goto v___jp_83_;
}
else
{
lean_dec_ref_known(v___x_114_, 2);
lean_dec_ref(v_m_107_);
lean_dec(v_a_103_);
lean_dec_ref(v_x_75_);
lean_dec_ref(v_body_72_);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_lifter_67_);
return v___x_118_;
}
}
}
else
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_148_; 
lean_dec(v_a_103_);
lean_dec_ref(v_x_75_);
lean_dec_ref(v_body_72_);
lean_dec_ref(v_monadInfo_71_);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_lifter_67_);
v_a_141_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_148_ == 0)
{
v___x_143_ = v___x_104_;
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_104_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
else
{
lean_dec_ref(v_x_75_);
lean_dec_ref(v_body_72_);
lean_dec_ref(v_monadInfo_71_);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_lifter_67_);
return v___x_102_;
}
v___jp_83_:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_Elab_Do_EffectForwarder_lift(v_lifter_67_, v___f_68_, v___y_85_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref_known(v___x_86_, 1);
v___x_88_ = lean_mk_empty_array_with_capacity(v___x_69_);
v___x_89_ = lean_array_push(v___x_88_, v_x_75_);
v___x_90_ = 0;
v___x_91_ = 1;
v___x_92_ = l_Lean_Meta_mkLambdaFVars(v___x_89_, v_a_87_, v___x_90_, v___x_70_, v___x_90_, v___x_70_, v___x_91_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
v_a_93_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_101_ == 0)
{
v___x_95_ = v___x_92_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_92_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_97_ = lean_apply_1(v_catcher_84_, v_a_93_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 0, v___x_97_);
v___x_99_ = v___x_95_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_97_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
else
{
lean_dec_ref(v_catcher_84_);
return v___x_92_;
}
}
else
{
lean_dec_ref(v_catcher_84_);
lean_dec_ref(v_x_75_);
return v___x_86_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___boxed(lean_object* v_lifter_149_, lean_object* v___f_150_, lean_object* v___x_151_, lean_object* v___x_152_, lean_object* v_monadInfo_153_, lean_object* v_body_154_, lean_object* v___y_155_, lean_object* v_eType_x3f_156_, lean_object* v_x_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
uint8_t v___x_3952__boxed_165_; lean_object* v_res_166_; 
v___x_3952__boxed_165_ = lean_unbox(v___x_152_);
v_res_166_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1(v_lifter_149_, v___f_150_, v___x_151_, v___x_3952__boxed_165_, v_monadInfo_153_, v_body_154_, v___y_155_, v_eType_x3f_156_, v_x_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v_eType_x3f_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___x_151_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(lean_object* v_lifter_176_, lean_object* v_body_177_, lean_object* v_catch___178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4));
lean_inc(v_catch___178_);
v___x_188_ = l_Lean_Syntax_isOfKind(v_catch___178_, v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; 
lean_dec(v_catch___178_);
lean_dec_ref(v_body_177_);
lean_dec_ref(v_lifter_176_);
v___x_189_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_189_;
}
else
{
lean_object* v_monadInfo_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v___y_197_; lean_object* v___y_198_; lean_object* v___y_199_; lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v_eType_x3f_205_; lean_object* v___y_206_; lean_object* v___y_207_; lean_object* v___y_208_; lean_object* v___y_209_; lean_object* v___y_210_; lean_object* v___y_211_; lean_object* v___y_212_; lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_monadInfo_190_ = lean_ctor_get(v_a_179_, 0);
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = l_Lean_Syntax_getArg(v_catch___178_, v___x_191_);
v___x_222_ = lean_unsigned_to_nat(2u);
v___x_223_ = l_Lean_Syntax_getArg(v_catch___178_, v___x_222_);
v___x_224_ = l_Lean_Syntax_isNone(v___x_223_);
if (v___x_224_ == 0)
{
uint8_t v___x_225_; 
lean_inc(v___x_223_);
v___x_225_ = l_Lean_Syntax_matchesNull(v___x_223_, v___x_222_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; 
lean_dec(v___x_223_);
lean_dec(v___x_192_);
lean_dec(v_catch___178_);
lean_dec_ref(v_body_177_);
lean_dec_ref(v_lifter_176_);
v___x_226_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_226_;
}
else
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = l_Lean_Syntax_getArg(v___x_223_, v___x_191_);
lean_dec(v___x_223_);
v___x_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
v_eType_x3f_205_ = v___x_228_;
v___y_206_ = v_a_179_;
v___y_207_ = v_a_180_;
v___y_208_ = v_a_181_;
v___y_209_ = v_a_182_;
v___y_210_ = v_a_183_;
v___y_211_ = v_a_184_;
v___y_212_ = v_a_185_;
goto v___jp_204_;
}
}
else
{
lean_object* v___x_229_; 
lean_dec(v___x_223_);
v___x_229_ = lean_box(0);
v_eType_x3f_205_ = v___x_229_;
v___y_206_ = v_a_179_;
v___y_207_ = v_a_180_;
v___y_208_ = v_a_181_;
v___y_209_ = v_a_182_;
v___y_210_ = v_a_183_;
v___y_211_ = v_a_184_;
v___y_212_ = v_a_185_;
goto v___jp_204_;
}
v___jp_193_:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = l_Lean_Elab_Term_mkExplicitBinder(v___x_192_, v___y_201_);
v___x_203_ = l_Lean_Elab_Term_elabBinder___redArg(v___x_202_, v___y_197_, v___y_198_, v___y_195_, v___y_194_, v___y_200_, v___y_199_, v___y_196_);
return v___x_203_;
}
v___jp_204_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___f_216_; lean_object* v___x_217_; lean_object* v___f_218_; 
v___x_213_ = lean_unsigned_to_nat(4u);
v___x_214_ = l_Lean_Syntax_getArg(v_catch___178_, v___x_213_);
lean_dec(v_catch___178_);
v___x_215_ = lean_box(v___x_188_);
v___f_216_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0___boxed), 11, 2);
lean_closure_set(v___f_216_, 0, v___x_214_);
lean_closure_set(v___f_216_, 1, v___x_215_);
v___x_217_ = lean_box(v___x_188_);
lean_inc(v_eType_x3f_205_);
lean_inc_ref(v___y_206_);
lean_inc_ref(v_monadInfo_190_);
v___f_218_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___boxed), 16, 8);
lean_closure_set(v___f_218_, 0, v_lifter_176_);
lean_closure_set(v___f_218_, 1, v___f_216_);
lean_closure_set(v___f_218_, 2, v___x_191_);
lean_closure_set(v___f_218_, 3, v___x_217_);
lean_closure_set(v___f_218_, 4, v_monadInfo_190_);
lean_closure_set(v___f_218_, 5, v_body_177_);
lean_closure_set(v___f_218_, 6, v___y_206_);
lean_closure_set(v___f_218_, 7, v_eType_x3f_205_);
if (lean_obj_tag(v_eType_x3f_205_) == 0)
{
uint8_t v___x_219_; lean_object* v___x_220_; 
v___x_219_ = 0;
v___x_220_ = l_Lean_mkHole(v___x_192_, v___x_219_);
v___y_194_ = v___y_209_;
v___y_195_ = v___y_208_;
v___y_196_ = v___y_212_;
v___y_197_ = v___f_218_;
v___y_198_ = v___y_207_;
v___y_199_ = v___y_211_;
v___y_200_ = v___y_210_;
v___y_201_ = v___x_220_;
goto v___jp_193_;
}
else
{
lean_object* v_val_221_; 
v_val_221_ = lean_ctor_get(v_eType_x3f_205_, 0);
lean_inc(v_val_221_);
lean_dec_ref_known(v_eType_x3f_205_, 1);
v___y_194_ = v___y_209_;
v___y_195_ = v___y_208_;
v___y_196_ = v___y_212_;
v___y_197_ = v___f_218_;
v___y_198_ = v___y_207_;
v___y_199_ = v___y_211_;
v___y_200_ = v___y_210_;
v___y_201_ = v_val_221_;
goto v___jp_193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___boxed(lean_object* v_lifter_230_, lean_object* v_body_231_, lean_object* v_catch___232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(v_lifter_230_, v_body_231_, v_catch___232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec_ref(v_a_233_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___lam__0(lean_object* v_trySeq_242_, uint8_t v___x_243_, lean_object* v_cont_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Lean_Elab_Do_elabDoSeq(v_trySeq_242_, v_cont_244_, v___x_243_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___lam__0___boxed(lean_object* v_trySeq_254_, lean_object* v___x_255_, lean_object* v_cont_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
uint8_t v___x_14190__boxed_265_; lean_object* v_res_266_; 
v___x_14190__boxed_265_ = lean_unbox(v___x_255_);
v_res_266_ = l_Lean_Elab_Do_elabDoTry___lam__0(v_trySeq_254_, v___x_14190__boxed_265_, v_cont_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec_ref(v___y_257_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2(lean_object* v_as_270_, size_t v_i_271_, size_t v_stop_272_, lean_object* v_b_273_){
_start:
{
lean_object* v___y_275_; uint8_t v___x_279_; 
v___x_279_ = lean_usize_dec_eq(v_i_271_, v_stop_272_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = lean_array_uget_borrowed(v_as_270_, v_i_271_);
v___x_281_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4));
lean_inc(v___x_280_);
v___x_282_ = l_Lean_Syntax_isOfKind(v___x_280_, v___x_281_);
if (v___x_282_ == 0)
{
v___y_275_ = v_b_273_;
goto v___jp_274_;
}
else
{
lean_object* v___x_283_; lean_object* v_x_284_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_283_ = lean_unsigned_to_nat(1u);
v_x_284_ = l_Lean_Syntax_getArg(v___x_280_, v___x_283_);
v___x_287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___closed__1));
lean_inc(v_x_284_);
v___x_288_ = l_Lean_Syntax_isOfKind(v_x_284_, v___x_287_);
if (v___x_288_ == 0)
{
lean_dec(v_x_284_);
v___y_275_ = v_b_273_;
goto v___jp_274_;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_289_ = lean_unsigned_to_nat(2u);
v___x_290_ = l_Lean_Syntax_getArg(v___x_280_, v___x_289_);
v___x_291_ = l_Lean_Syntax_isNone(v___x_290_);
if (v___x_291_ == 0)
{
uint8_t v___x_292_; 
v___x_292_ = l_Lean_Syntax_matchesNull(v___x_290_, v___x_289_);
if (v___x_292_ == 0)
{
lean_dec(v_x_284_);
v___y_275_ = v_b_273_;
goto v___jp_274_;
}
else
{
goto v___jp_285_;
}
}
else
{
lean_dec(v___x_290_);
goto v___jp_285_;
}
}
v___jp_285_:
{
lean_object* v___x_286_; 
v___x_286_ = lean_array_push(v_b_273_, v_x_284_);
v___y_275_ = v___x_286_;
goto v___jp_274_;
}
}
}
else
{
return v_b_273_;
}
v___jp_274_:
{
size_t v___x_276_; size_t v___x_277_; 
v___x_276_ = ((size_t)1ULL);
v___x_277_ = lean_usize_add(v_i_271_, v___x_276_);
v_i_271_ = v___x_277_;
v_b_273_ = v___y_275_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2___boxed(lean_object* v_as_293_, lean_object* v_i_294_, lean_object* v_stop_295_, lean_object* v_b_296_){
_start:
{
size_t v_i_boxed_297_; size_t v_stop_boxed_298_; lean_object* v_res_299_; 
v_i_boxed_297_ = lean_unbox_usize(v_i_294_);
lean_dec(v_i_294_);
v_stop_boxed_298_ = lean_unbox_usize(v_stop_295_);
lean_dec(v_stop_295_);
v_res_299_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2(v_as_293_, v_i_boxed_297_, v_stop_boxed_298_, v_b_296_);
lean_dec_ref(v_as_293_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2(lean_object* v_as_302_, lean_object* v_start_303_, lean_object* v_stop_304_){
_start:
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0));
v___x_306_ = lean_nat_dec_lt(v_start_303_, v_stop_304_);
if (v___x_306_ == 0)
{
return v___x_305_;
}
else
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = lean_array_get_size(v_as_302_);
v___x_308_ = lean_nat_dec_le(v_stop_304_, v___x_307_);
if (v___x_308_ == 0)
{
uint8_t v___x_309_; 
v___x_309_ = lean_nat_dec_lt(v_start_303_, v___x_307_);
if (v___x_309_ == 0)
{
return v___x_305_;
}
else
{
size_t v___x_310_; size_t v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_usize_of_nat(v_start_303_);
v___x_311_ = lean_usize_of_nat(v___x_307_);
v___x_312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2(v_as_302_, v___x_310_, v___x_311_, v___x_305_);
return v___x_312_;
}
}
else
{
size_t v___x_313_; size_t v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_usize_of_nat(v_start_303_);
v___x_314_ = lean_usize_of_nat(v_stop_304_);
v___x_315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2_spec__2(v_as_302_, v___x_313_, v___x_314_, v___x_305_);
return v___x_315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2___boxed(lean_object* v_as_316_, lean_object* v_start_317_, lean_object* v_stop_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2(v_as_316_, v_start_317_, v_stop_318_);
lean_dec(v_stop_318_);
lean_dec(v_start_317_);
lean_dec_ref(v_as_316_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4(lean_object* v_msgData_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v___x_326_; lean_object* v_env_327_; lean_object* v___x_328_; lean_object* v_toCold_329_; lean_object* v_mctx_330_; lean_object* v_lctx_331_; lean_object* v_options_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_326_ = lean_st_ref_get(v___y_324_);
v_env_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc_ref(v_env_327_);
lean_dec(v___x_326_);
v___x_328_ = lean_st_ref_get(v___y_322_);
v_toCold_329_ = lean_ctor_get(v___y_323_, 0);
v_mctx_330_ = lean_ctor_get(v___x_328_, 0);
lean_inc_ref(v_mctx_330_);
lean_dec(v___x_328_);
v_lctx_331_ = lean_ctor_get(v___y_321_, 2);
v_options_332_ = lean_ctor_get(v_toCold_329_, 2);
lean_inc_ref(v_options_332_);
lean_inc_ref(v_lctx_331_);
v___x_333_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_333_, 0, v_env_327_);
lean_ctor_set(v___x_333_, 1, v_mctx_330_);
lean_ctor_set(v___x_333_, 2, v_lctx_331_);
lean_ctor_set(v___x_333_, 3, v_options_332_);
v___x_334_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v_msgData_320_);
v___x_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4___boxed(lean_object* v_msgData_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4(v_msgData_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(lean_object* v_msg_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_ref_349_; lean_object* v___x_350_; lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_359_; 
v_ref_349_ = lean_ctor_get(v___y_346_, 2);
v___x_350_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4(v_msg_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
v_a_351_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_359_ == 0)
{
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_357_; 
lean_inc(v_ref_349_);
v___x_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_355_, 0, v_ref_349_);
lean_ctor_set(v___x_355_, 1, v_a_351_);
if (v_isShared_354_ == 0)
{
lean_ctor_set_tag(v___x_353_, 1);
lean_ctor_set(v___x_353_, 0, v___x_355_);
v___x_357_ = v___x_353_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg___boxed(lean_object* v_msg_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(v_msg_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
return v_res_366_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__4(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__3));
v___x_376_ = l_String_toRawSubstring_x27(v___x_375_);
return v___x_376_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__8(void){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Array_mkArray0___redArg();
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1(lean_object* v_a_410_, lean_object* v_as_411_, size_t v_i_412_, size_t v_stop_413_, lean_object* v_b_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___y_424_; uint8_t v___x_429_; 
v___x_429_ = lean_usize_dec_eq(v_i_412_, v_stop_413_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; uint8_t v___x_432_; 
v___x_430_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__1));
v___x_431_ = lean_array_uget_borrowed(v_as_411_, v_i_412_);
lean_inc(v___x_431_);
v___x_432_ = l_Lean_Syntax_isOfKind(v___x_431_, v___x_430_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; 
lean_inc(v___x_431_);
lean_inc_ref(v_a_410_);
v___x_433_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(v_a_410_, v_b_414_, v___x_431_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
v___y_424_ = v___x_433_;
goto v___jp_423_;
}
else
{
lean_object* v_toCold_434_; lean_object* v_ref_435_; lean_object* v_quotContext_436_; lean_object* v_currMacroScope_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_toCold_434_ = lean_ctor_get(v___y_420_, 0);
v_ref_435_ = lean_ctor_get(v___y_420_, 2);
v_quotContext_436_ = lean_ctor_get(v_toCold_434_, 8);
v_currMacroScope_437_ = lean_ctor_get(v_toCold_434_, 9);
v___x_438_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4));
v___x_439_ = lean_unsigned_to_nat(1u);
v___x_440_ = l_Lean_Syntax_getArg(v___x_431_, v___x_439_);
v___x_441_ = l_Lean_SourceInfo_fromRef(v_ref_435_, v___x_429_);
v___x_442_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__2));
lean_inc_n(v___x_441_, 12);
v___x_443_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__4);
v___x_445_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__5));
lean_inc(v_currMacroScope_437_);
lean_inc(v_quotContext_436_);
v___x_446_ = l_Lean_addMacroScope(v_quotContext_436_, v___x_445_, v_currMacroScope_437_);
v___x_447_ = lean_box(0);
v___x_448_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_448_, 0, v___x_441_);
lean_ctor_set(v___x_448_, 1, v___x_444_);
lean_ctor_set(v___x_448_, 2, v___x_446_);
lean_ctor_set(v___x_448_, 3, v___x_447_);
v___x_449_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__7));
v___x_450_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__8, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__8);
v___x_451_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_451_, 0, v___x_441_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
lean_ctor_set(v___x_451_, 2, v___x_450_);
v___x_452_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__9));
v___x_453_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_441_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__11));
v___x_455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__13));
v___x_456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__15));
v___x_457_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__16));
v___x_458_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_441_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__18));
lean_inc_ref(v___x_448_);
lean_inc_ref_n(v___x_451_, 5);
v___x_460_ = l_Lean_Syntax_node2(v___x_441_, v___x_459_, v___x_451_, v___x_448_);
v___x_461_ = l_Lean_Syntax_node1(v___x_441_, v___x_449_, v___x_460_);
v___x_462_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__19));
v___x_463_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_441_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = l_Lean_Syntax_node7(v___x_441_, v___x_456_, v___x_458_, v___x_451_, v___x_451_, v___x_451_, v___x_461_, v___x_463_, v___x_440_);
v___x_465_ = l_Lean_Syntax_node2(v___x_441_, v___x_455_, v___x_464_, v___x_451_);
v___x_466_ = l_Lean_Syntax_node1(v___x_441_, v___x_449_, v___x_465_);
v___x_467_ = l_Lean_Syntax_node1(v___x_441_, v___x_454_, v___x_466_);
v___x_468_ = l_Lean_Syntax_node5(v___x_441_, v___x_438_, v___x_443_, v___x_448_, v___x_451_, v___x_453_, v___x_467_);
lean_inc_ref(v_a_410_);
v___x_469_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(v_a_410_, v_b_414_, v___x_468_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
v___y_424_ = v___x_469_;
goto v___jp_423_;
}
}
else
{
lean_object* v___x_470_; 
lean_dec_ref(v_a_410_);
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v_b_414_);
return v___x_470_;
}
v___jp_423_:
{
if (lean_obj_tag(v___y_424_) == 0)
{
lean_object* v_a_425_; size_t v___x_426_; size_t v___x_427_; 
v_a_425_ = lean_ctor_get(v___y_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___y_424_, 1);
v___x_426_ = ((size_t)1ULL);
v___x_427_ = lean_usize_add(v_i_412_, v___x_426_);
v_i_412_ = v___x_427_;
v_b_414_ = v_a_425_;
goto _start;
}
else
{
lean_dec_ref(v_a_410_);
return v___y_424_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1___boxed(lean_object* v_a_471_, lean_object* v_as_472_, lean_object* v_i_473_, lean_object* v_stop_474_, lean_object* v_b_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
size_t v_i_boxed_484_; size_t v_stop_boxed_485_; lean_object* v_res_486_; 
v_i_boxed_484_ = lean_unbox_usize(v_i_473_);
lean_dec(v_i_473_);
v_stop_boxed_485_ = lean_unbox_usize(v_stop_474_);
lean_dec(v_stop_474_);
v_res_486_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1(v_a_471_, v_as_472_, v_i_boxed_484_, v_stop_boxed_485_, v_b_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec_ref(v_as_472_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0(size_t v_sz_487_, size_t v_i_488_, lean_object* v_bs_489_){
_start:
{
uint8_t v___x_490_; 
v___x_490_ = lean_usize_dec_lt(v_i_488_, v_sz_487_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = l_unsafeCast___redArg(v_bs_489_);
lean_dec_ref(v_bs_489_);
v___x_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
return v___x_492_;
}
else
{
lean_object* v_v_493_; lean_object* v___x_494_; lean_object* v_bs_x27_495_; lean_object* v_catches_496_; size_t v___x_497_; size_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v_v_493_ = lean_array_uget(v_bs_489_, v_i_488_);
v___x_494_ = lean_unsigned_to_nat(0u);
v_bs_x27_495_ = lean_array_uset(v_bs_489_, v_i_488_, v___x_494_);
v_catches_496_ = l_unsafeCast___redArg(v_v_493_);
lean_dec(v_v_493_);
v___x_497_ = ((size_t)1ULL);
v___x_498_ = lean_usize_add(v_i_488_, v___x_497_);
v___x_499_ = l_unsafeCast___redArg(v_catches_496_);
lean_dec(v_catches_496_);
v___x_500_ = lean_array_uset(v_bs_x27_495_, v_i_488_, v___x_499_);
v_i_488_ = v___x_498_;
v_bs_489_ = v___x_500_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0___boxed(lean_object* v_sz_502_, lean_object* v_i_503_, lean_object* v_bs_504_){
_start:
{
size_t v_sz_boxed_505_; size_t v_i_boxed_506_; lean_object* v_res_507_; 
v_sz_boxed_505_ = lean_unbox_usize(v_sz_502_);
lean_dec(v_sz_502_);
v_i_boxed_506_ = lean_unbox_usize(v_i_503_);
lean_dec(v_i_503_);
v_res_507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0(v_sz_boxed_505_, v_i_boxed_506_, v_bs_504_);
return v_res_507_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__11(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = ((lean_object*)(l_Lean_Elab_Do_elabDoTry___closed__10));
v___x_528_ = l_Lean_stringToMessageData(v___x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry(lean_object* v_stx_535_, lean_object* v_dec_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v_body_548_; lean_object* v___y_549_; lean_object* v___y_550_; lean_object* v___y_551_; lean_object* v___y_552_; lean_object* v___y_553_; lean_object* v___y_554_; lean_object* v___y_555_; lean_object* v___x_568_; uint8_t v___x_569_; lean_object* v___y_571_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v___y_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; 
v___x_568_ = ((lean_object*)(l_Lean_Elab_Do_elabDoTry___closed__1));
lean_inc(v_stx_535_);
v___x_569_ = l_Lean_Syntax_isOfKind(v_stx_535_, v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_635_; 
lean_dec_ref(v_dec_536_);
lean_dec(v_stx_535_);
v___x_635_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_635_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; size_t v_sz_639_; size_t v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_636_ = lean_unsigned_to_nat(2u);
v___x_637_ = l_Lean_Syntax_getArg(v_stx_535_, v___x_636_);
v___x_638_ = l_Lean_Syntax_getArgs(v___x_637_);
lean_dec(v___x_637_);
v_sz_639_ = lean_array_size(v___x_638_);
v___x_640_ = ((size_t)0ULL);
v___x_641_ = l_unsafeCast___redArg(v___x_638_);
lean_dec_ref(v___x_638_);
v___x_642_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0(v_sz_639_, v___x_640_, v___x_641_);
v___x_643_ = l_unsafeCast___redArg(v___x_642_);
lean_dec(v___x_642_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v___x_644_; 
lean_dec_ref(v_dec_536_);
lean_dec(v_stx_535_);
v___x_644_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_644_;
}
else
{
lean_object* v_val_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_742_; 
v_val_645_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_742_ == 0)
{
v___x_647_ = v___x_643_;
v_isShared_648_ = v_isSharedCheck_742_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_val_645_);
lean_dec(v___x_643_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_742_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___x_691_; lean_object* v_trySeq_692_; lean_object* v___x_693_; lean_object* v___f_694_; lean_object* v_finSeq_x3f_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_649_ = lean_unsigned_to_nat(0u);
v___x_691_ = lean_unsigned_to_nat(1u);
v_trySeq_692_ = l_Lean_Syntax_getArg(v_stx_535_, v___x_691_);
v___x_693_ = lean_box(v___x_569_);
v___f_694_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoTry___lam__0___boxed), 11, 2);
lean_closure_set(v___f_694_, 0, v_trySeq_692_);
lean_closure_set(v___f_694_, 1, v___x_693_);
v___x_728_ = lean_unsigned_to_nat(3u);
v___x_729_ = l_Lean_Syntax_getArg(v_stx_535_, v___x_728_);
v___x_730_ = l_Lean_Syntax_isNone(v___x_729_);
if (v___x_730_ == 0)
{
uint8_t v___x_731_; 
lean_inc(v___x_729_);
v___x_731_ = l_Lean_Syntax_matchesNull(v___x_729_, v___x_691_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; 
lean_dec(v___x_729_);
lean_dec_ref(v___f_694_);
lean_del_object(v___x_647_);
lean_dec(v_val_645_);
lean_dec_ref(v_dec_536_);
lean_dec(v_stx_535_);
v___x_732_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_732_;
}
else
{
lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_733_ = l_Lean_Syntax_getArg(v___x_729_, v___x_649_);
lean_dec(v___x_729_);
v___x_734_ = ((lean_object*)(l_Lean_Elab_Do_elabDoTry___closed__13));
lean_inc(v___x_733_);
v___x_735_ = l_Lean_Syntax_isOfKind(v___x_733_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; 
lean_dec(v___x_733_);
lean_dec_ref(v___f_694_);
lean_del_object(v___x_647_);
lean_dec(v_val_645_);
lean_dec_ref(v_dec_536_);
lean_dec(v_stx_535_);
v___x_736_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_736_;
}
else
{
lean_object* v_finSeq_x3f_737_; lean_object* v___x_739_; 
v_finSeq_x3f_737_ = l_Lean_Syntax_getArg(v___x_733_, v___x_691_);
lean_dec(v___x_733_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v_finSeq_x3f_737_);
v___x_739_ = v___x_647_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_finSeq_x3f_737_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
v_finSeq_x3f_696_ = v___x_739_;
v___y_697_ = v_a_537_;
v___y_698_ = v_a_538_;
v___y_699_ = v_a_539_;
v___y_700_ = v_a_540_;
v___y_701_ = v_a_541_;
v___y_702_ = v_a_542_;
v___y_703_ = v_a_543_;
goto v___jp_695_;
}
}
}
}
else
{
lean_object* v___x_741_; 
lean_dec(v___x_729_);
lean_del_object(v___x_647_);
v___x_741_ = lean_box(0);
v_finSeq_x3f_696_ = v___x_741_;
v___y_697_ = v_a_537_;
v___y_698_ = v_a_538_;
v___y_699_ = v_a_539_;
v___y_700_ = v_a_540_;
v___y_701_ = v_a_541_;
v___y_702_ = v_a_542_;
v___y_703_ = v_a_543_;
goto v___jp_695_;
}
v___jp_650_:
{
lean_object* v_monadInfo_662_; lean_object* v___x_663_; 
v_monadInfo_662_ = lean_ctor_get(v___y_655_, 0);
v___x_663_ = l_Lean_Elab_Do_inferControlInfoElem(v_stx_535_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_665_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_a_664_);
lean_dec_ref_known(v___x_663_, 1);
v___x_665_ = l_Lean_Elab_Do_EffectForwarder_ofCont(v_a_664_, v_dec_536_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_667_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc_n(v_a_666_, 2);
lean_dec_ref_known(v___x_665_, 1);
v___x_667_ = l_Lean_Elab_Do_EffectForwarder_lift(v_a_666_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; uint8_t v___x_669_; 
v_a_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_668_);
v___x_669_ = lean_nat_dec_lt(v___x_649_, v___y_652_);
if (v___x_669_ == 0)
{
lean_dec(v_a_668_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
v___y_571_ = v___y_651_;
v___y_572_ = v_monadInfo_662_;
v___y_573_ = v___y_658_;
v___y_574_ = v___y_656_;
v___y_575_ = v___y_659_;
v___y_576_ = v___y_655_;
v___y_577_ = v_a_666_;
v___y_578_ = v___y_661_;
v___y_579_ = v_a_664_;
v___y_580_ = v___y_660_;
v___y_581_ = v___y_657_;
v___y_582_ = v___x_667_;
goto v___jp_570_;
}
else
{
uint8_t v___x_670_; 
v___x_670_ = lean_nat_dec_le(v___y_652_, v___y_652_);
if (v___x_670_ == 0)
{
if (v___x_669_ == 0)
{
lean_dec(v_a_668_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
v___y_571_ = v___y_651_;
v___y_572_ = v_monadInfo_662_;
v___y_573_ = v___y_658_;
v___y_574_ = v___y_656_;
v___y_575_ = v___y_659_;
v___y_576_ = v___y_655_;
v___y_577_ = v_a_666_;
v___y_578_ = v___y_661_;
v___y_579_ = v_a_664_;
v___y_580_ = v___y_660_;
v___y_581_ = v___y_657_;
v___y_582_ = v___x_667_;
goto v___jp_570_;
}
else
{
size_t v___x_671_; lean_object* v___x_672_; 
lean_dec_ref_known(v___x_667_, 1);
v___x_671_ = lean_usize_of_nat(v___y_652_);
lean_dec(v___y_652_);
lean_inc(v_a_666_);
v___x_672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1(v_a_666_, v___y_653_, v___x_640_, v___x_671_, v_a_668_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
lean_dec(v___y_653_);
v___y_571_ = v___y_651_;
v___y_572_ = v_monadInfo_662_;
v___y_573_ = v___y_658_;
v___y_574_ = v___y_656_;
v___y_575_ = v___y_659_;
v___y_576_ = v___y_655_;
v___y_577_ = v_a_666_;
v___y_578_ = v___y_661_;
v___y_579_ = v_a_664_;
v___y_580_ = v___y_660_;
v___y_581_ = v___y_657_;
v___y_582_ = v___x_672_;
goto v___jp_570_;
}
}
else
{
size_t v___x_673_; lean_object* v___x_674_; 
lean_dec_ref_known(v___x_667_, 1);
v___x_673_ = lean_usize_of_nat(v___y_652_);
lean_dec(v___y_652_);
lean_inc(v_a_666_);
v___x_674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__1(v_a_666_, v___y_653_, v___x_640_, v___x_673_, v_a_668_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
lean_dec(v___y_653_);
v___y_571_ = v___y_651_;
v___y_572_ = v_monadInfo_662_;
v___y_573_ = v___y_658_;
v___y_574_ = v___y_656_;
v___y_575_ = v___y_659_;
v___y_576_ = v___y_655_;
v___y_577_ = v_a_666_;
v___y_578_ = v___y_661_;
v___y_579_ = v_a_664_;
v___y_580_ = v___y_660_;
v___y_581_ = v___y_657_;
v___y_582_ = v___x_674_;
goto v___jp_570_;
}
}
}
else
{
lean_dec(v_a_666_);
lean_dec(v_a_664_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
lean_dec(v___y_651_);
return v___x_667_;
}
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
lean_dec(v_a_664_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
lean_dec(v___y_651_);
v_a_675_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_665_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_665_);
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
else
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v_dec_536_);
v_a_683_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_663_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_663_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
v___jp_695_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_704_ = l_unsafeCast___redArg(v_val_645_);
v___x_705_ = lean_array_get_size(v___x_704_);
v___x_706_ = l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__2(v___x_704_, v___x_649_, v___x_705_);
v___x_707_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v___x_706_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_);
lean_dec_ref(v___x_706_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v___x_708_; uint8_t v___x_709_; 
lean_dec_ref_known(v___x_707_, 1);
v___x_708_ = lean_array_get_size(v_val_645_);
lean_dec(v_val_645_);
v___x_709_ = lean_nat_dec_eq(v___x_708_, v___x_649_);
if (v___x_709_ == 0)
{
v___y_651_ = v_finSeq_x3f_696_;
v___y_652_ = v___x_705_;
v___y_653_ = v___x_704_;
v___y_654_ = v___f_694_;
v___y_655_ = v___y_697_;
v___y_656_ = v___y_698_;
v___y_657_ = v___y_699_;
v___y_658_ = v___y_700_;
v___y_659_ = v___y_701_;
v___y_660_ = v___y_702_;
v___y_661_ = v___y_703_;
goto v___jp_650_;
}
else
{
if (lean_obj_tag(v_finSeq_x3f_696_) == 0)
{
if (v___x_569_ == 0)
{
v___y_651_ = v_finSeq_x3f_696_;
v___y_652_ = v___x_705_;
v___y_653_ = v___x_704_;
v___y_654_ = v___f_694_;
v___y_655_ = v___y_697_;
v___y_656_ = v___y_698_;
v___y_657_ = v___y_699_;
v___y_658_ = v___y_700_;
v___y_659_ = v___y_701_;
v___y_660_ = v___y_702_;
v___y_661_ = v___y_703_;
goto v___jp_650_;
}
else
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec(v___x_704_);
lean_dec_ref(v___f_694_);
lean_dec_ref(v_dec_536_);
lean_dec(v_stx_535_);
v___x_710_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__11, &l_Lean_Elab_Do_elabDoTry___closed__11_once, _init_l_Lean_Elab_Do_elabDoTry___closed__11);
v___x_711_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(v___x_710_, v___y_700_, v___y_701_, v___y_702_, v___y_703_);
v_a_712_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_711_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_711_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
else
{
v___y_651_ = v_finSeq_x3f_696_;
v___y_652_ = v___x_705_;
v___y_653_ = v___x_704_;
v___y_654_ = v___f_694_;
v___y_655_ = v___y_697_;
v___y_656_ = v___y_698_;
v___y_657_ = v___y_699_;
v___y_658_ = v___y_700_;
v___y_659_ = v___y_701_;
v___y_660_ = v___y_702_;
v___y_661_ = v___y_703_;
goto v___jp_650_;
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_dec(v___x_704_);
lean_dec(v_finSeq_x3f_696_);
lean_dec_ref(v___f_694_);
lean_dec(v_val_645_);
lean_dec_ref(v_dec_536_);
lean_dec(v_stx_535_);
v_a_720_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_707_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_707_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
}
}
v___jp_545_:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lean_Elab_Do_EffectForwarder_restoreCont(v___y_546_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_a_557_);
lean_dec_ref_known(v___x_556_, 1);
v___x_558_ = l_Lean_Elab_Do_DoElemCont_withDeadCodeFromInfo(v_a_557_, v___y_547_);
lean_dec_ref(v___y_547_);
v___x_559_ = l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(v___x_558_, v_body_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
return v___x_559_;
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
lean_dec_ref(v_body_548_);
lean_dec_ref(v___y_547_);
v_a_560_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_556_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_556_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
v___jp_570_:
{
if (lean_obj_tag(v___y_582_) == 0)
{
if (lean_obj_tag(v___y_571_) == 0)
{
lean_object* v_a_583_; 
v_a_583_ = lean_ctor_get(v___y_582_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___y_582_, 1);
v___y_546_ = v___y_577_;
v___y_547_ = v___y_579_;
v_body_548_ = v_a_583_;
v___y_549_ = v___y_576_;
v___y_550_ = v___y_574_;
v___y_551_ = v___y_581_;
v___y_552_ = v___y_573_;
v___y_553_ = v___y_575_;
v___y_554_ = v___y_580_;
v___y_555_ = v___y_578_;
goto v___jp_545_;
}
else
{
lean_object* v_a_584_; lean_object* v_val_585_; lean_object* v___x_586_; uint8_t v___x_587_; lean_object* v___x_588_; 
v_a_584_ = lean_ctor_get(v___y_582_, 0);
lean_inc(v_a_584_);
lean_dec_ref_known(v___y_582_, 1);
v_val_585_ = lean_ctor_get(v___y_571_, 0);
lean_inc(v_val_585_);
lean_dec_ref_known(v___y_571_, 1);
v___x_586_ = ((lean_object*)(l_Lean_Elab_Do_elabDoTry___closed__3));
v___x_587_ = 0;
v___x_588_ = l_Lean_Elab_Do_mkFreshResultType___redArg(v___x_586_, v___x_587_, v___y_576_, v___y_573_, v___y_575_, v___y_580_, v___y_578_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v_a_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v_a_589_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_a_589_);
lean_dec_ref_known(v___x_588_, 1);
v___x_590_ = l_Lean_Expr_mvarId_x21(v_a_589_);
lean_inc(v_val_585_);
v___x_591_ = l_Lean_Elab_Term_registerMVarErrorHoleInfo___redArg(v___x_590_, v_val_585_, v___y_581_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v___x_592_; 
lean_dec_ref_known(v___x_591_, 1);
lean_inc(v_a_589_);
v___x_592_ = l_Lean_Elab_Do_DoElemCont_mkPure___redArg(v_a_589_, v___y_580_, v___y_578_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_593_);
lean_dec_ref_known(v___x_592_, 1);
v___x_594_ = lean_box(v___x_569_);
v___x_595_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_595_, 0, v_val_585_);
lean_closure_set(v___x_595_, 1, v_a_593_);
lean_closure_set(v___x_595_, 2, v___x_594_);
lean_inc(v_a_589_);
v___x_596_ = l_Lean_Elab_Do_enterFinally(v_a_589_, v___x_595_, v___y_576_, v___y_574_, v___y_581_, v___y_573_, v___y_575_, v___y_580_, v___y_578_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v_m_598_; lean_object* v_u_599_; lean_object* v_v_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v_a_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_597_);
lean_dec_ref_known(v___x_596_, 1);
v_m_598_ = lean_ctor_get(v___y_572_, 0);
v_u_599_ = lean_ctor_get(v___y_572_, 1);
v_v_600_ = lean_ctor_get(v___y_572_, 2);
v___x_601_ = ((lean_object*)(l_Lean_Elab_Do_elabDoTry___closed__5));
v___x_602_ = lean_box(0);
lean_inc(v_v_600_);
v___x_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_603_, 0, v_v_600_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
lean_inc(v_u_599_);
v___x_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_604_, 0, v_u_599_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
lean_inc_ref(v___x_604_);
v___x_605_ = l_Lean_mkConst(v___x_601_, v___x_604_);
lean_inc_ref(v_m_598_);
v___x_606_ = l_Lean_Expr_app___override(v___x_605_, v_m_598_);
v___x_607_ = lean_box(0);
v___x_608_ = l_Lean_Elab_Term_mkInstMVar(v___x_606_, v___x_607_, v___y_574_, v___y_581_, v___y_573_, v___y_575_, v___y_580_, v___y_578_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_609_);
lean_dec_ref_known(v___x_608_, 1);
v___x_610_ = ((lean_object*)(l_Lean_Elab_Do_elabDoTry___closed__7));
lean_inc_ref(v___x_604_);
v___x_611_ = l_Lean_mkConst(v___x_610_, v___x_604_);
lean_inc_ref(v_m_598_);
v___x_612_ = l_Lean_Expr_app___override(v___x_611_, v_m_598_);
v___x_613_ = l_Lean_Elab_Term_mkInstMVar(v___x_612_, v___x_607_, v___y_574_, v___y_581_, v___y_573_, v___y_575_, v___y_580_, v___y_578_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v_liftedDoBlockResultType_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
lean_inc(v_a_614_);
lean_dec_ref_known(v___x_613_, 1);
v_liftedDoBlockResultType_615_ = lean_ctor_get(v___y_577_, 5);
v___x_616_ = ((lean_object*)(l_Lean_Elab_Do_elabDoTry___closed__9));
v___x_617_ = l_Lean_mkConst(v___x_616_, v___x_604_);
lean_inc_ref(v_liftedDoBlockResultType_615_);
lean_inc_ref(v_m_598_);
v___x_618_ = l_Lean_mkApp7(v___x_617_, v_m_598_, v_liftedDoBlockResultType_615_, v_a_589_, v_a_609_, v_a_614_, v_a_584_, v_a_597_);
v___y_546_ = v___y_577_;
v___y_547_ = v___y_579_;
v_body_548_ = v___x_618_;
v___y_549_ = v___y_576_;
v___y_550_ = v___y_574_;
v___y_551_ = v___y_581_;
v___y_552_ = v___y_573_;
v___y_553_ = v___y_575_;
v___y_554_ = v___y_580_;
v___y_555_ = v___y_578_;
goto v___jp_545_;
}
else
{
lean_dec(v_a_609_);
lean_dec_ref_known(v___x_604_, 2);
lean_dec(v_a_597_);
lean_dec(v_a_589_);
lean_dec(v_a_584_);
lean_dec_ref(v___y_579_);
lean_dec_ref(v___y_577_);
return v___x_613_;
}
}
else
{
lean_dec_ref_known(v___x_604_, 2);
lean_dec(v_a_597_);
lean_dec(v_a_589_);
lean_dec(v_a_584_);
lean_dec_ref(v___y_579_);
lean_dec_ref(v___y_577_);
return v___x_608_;
}
}
else
{
lean_dec(v_a_589_);
lean_dec(v_a_584_);
lean_dec_ref(v___y_579_);
lean_dec_ref(v___y_577_);
return v___x_596_;
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
lean_dec(v_a_589_);
lean_dec(v_val_585_);
lean_dec(v_a_584_);
lean_dec_ref(v___y_579_);
lean_dec_ref(v___y_577_);
v_a_619_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_592_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_592_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec(v_a_589_);
lean_dec(v_val_585_);
lean_dec(v_a_584_);
lean_dec_ref(v___y_579_);
lean_dec_ref(v___y_577_);
v_a_627_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_591_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_591_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
else
{
lean_dec(v_val_585_);
lean_dec(v_a_584_);
lean_dec_ref(v___y_579_);
lean_dec_ref(v___y_577_);
return v___x_588_;
}
}
}
else
{
lean_dec_ref(v___y_579_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_571_);
return v___y_582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___boxed(lean_object* v_stx_743_, lean_object* v_dec_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Elab_Do_elabDoTry(v_stx_743_, v_dec_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
lean_dec(v_a_751_);
lean_dec_ref(v_a_750_);
lean_dec(v_a_749_);
lean_dec_ref(v_a_748_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
lean_dec_ref(v_a_745_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3(lean_object* v_00_u03b1_754_, lean_object* v_msg_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(v_msg_755_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___boxed(lean_object* v_00_u03b1_765_, lean_object* v_msg_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3(v_00_u03b1_765_, v_msg_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec_ref(v___y_767_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1(){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_785_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_786_ = ((lean_object*)(l_Lean_Elab_Do_elabDoTry___closed__1));
v___x_787_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3));
v___x_788_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoTry___boxed), 10, 0);
v___x_789_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_785_, v___x_786_, v___x_787_, v___x_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___boxed(lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1();
return v_res_791_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_Control(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_TryCatch(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_TryCatch(uint8_t builtin) {
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
lean_object* initialize_Lean_Elab_Do_Control(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_TryCatch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_TryCatch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_TryCatch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_TryCatch(builtin);
}
#ifdef __cplusplus
}
#endif

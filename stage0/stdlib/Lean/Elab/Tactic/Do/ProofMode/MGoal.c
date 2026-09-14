// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.MGoal
// Imports: public import Std.Do.SPred.DerivedLaws public import Std.Tactic.Do.ProofMode public import Lean.Elab.Tactic.Basic
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLevel;
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
extern lean_object* l_Lean_SubExpr_Pos_root;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uniq"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 18, 161, 16, 33, 3, 130, 7)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 183, 133, 62, 214, 202, 136, 98)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_isPure_x3f(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "emptyHyp"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 250, 151, 172, 110, 227, 35, 108)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 97, 27, 109, 96, 85, 230, 202)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "true_and"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 45, 192, 15, 224, 238, 244, 30)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "and_true"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(96, 80, 32, 98, 134, 56, 69, 160)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bientails"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__4_value),LEAN_SCALAR_PTR_LITERAL(201, 51, 221, 5, 242, 131, 169, 118)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__5_value),LEAN_SCALAR_PTR_LITERAL(6, 95, 37, 108, 69, 205, 235, 200)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__0_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "MGoalEntails"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 32, 213, 253, 69, 208, 115, 14)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(203, 9, 83, 52, 40, 85, 31, 178)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 181, 97, 38, 147, 213, 38, 7)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.Tactic.Do.ProofMode.MGoal"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "_private.Lean.Elab.Tactic.Do.ProofMode.MGoal.0.Lean.Elab.Tactic.Do.ProofMode.MGoal.findHyp\?.go"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "MGoal.findHyp\?: hypothesis without proper metadata: {e}"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "stray checkHasType "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 96, .m_capacity = 96, .m_length = 95, .m_data = "checkHasType: the expression's inferred type and its expected type did not match.\n\n      expr: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "\n\n      has inferred type: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "\n\n      but the expected type was: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Ambient state list not a cons "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_dropStateList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_dropStateList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "mrename_i: Could not find inaccessible hypotheses for "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "MGoalHypMarker"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 32, 213, 253, 69, 208, 115, 14)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 11, 247, 78, 187, 24, 251, 112)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 10)
{
lean_object* v_data_10_; 
v_data_10_ = lean_ctor_get(v_x_9_, 0);
lean_inc(v_data_10_);
if (lean_obj_tag(v_data_10_) == 1)
{
lean_object* v_head_11_; lean_object* v_fst_12_; 
v_head_11_ = lean_ctor_get(v_data_10_, 0);
lean_inc(v_head_11_);
v_fst_12_ = lean_ctor_get(v_head_11_, 0);
lean_inc(v_fst_12_);
if (lean_obj_tag(v_fst_12_) == 1)
{
lean_object* v_pre_13_; 
v_pre_13_ = lean_ctor_get(v_fst_12_, 0);
if (lean_obj_tag(v_pre_13_) == 0)
{
lean_object* v_expr_14_; lean_object* v_tail_15_; lean_object* v_snd_16_; lean_object* v_str_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v_expr_14_ = lean_ctor_get(v_x_9_, 1);
lean_inc_ref(v_expr_14_);
lean_dec_ref_known(v_x_9_, 2);
v_tail_15_ = lean_ctor_get(v_data_10_, 1);
lean_inc(v_tail_15_);
lean_dec_ref_known(v_data_10_, 2);
v_snd_16_ = lean_ctor_get(v_head_11_, 1);
lean_inc(v_snd_16_);
lean_dec(v_head_11_);
v_str_17_ = lean_ctor_get(v_fst_12_, 1);
lean_inc_ref(v_str_17_);
lean_dec_ref_known(v_fst_12_, 2);
v___x_18_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0));
v___x_19_ = lean_string_dec_eq(v_str_17_, v___x_18_);
lean_dec_ref(v_str_17_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
lean_dec(v_snd_16_);
lean_dec(v_tail_15_);
lean_dec_ref(v_expr_14_);
v___x_20_ = lean_box(0);
return v___x_20_;
}
else
{
if (lean_obj_tag(v_snd_16_) == 2)
{
if (lean_obj_tag(v_tail_15_) == 1)
{
lean_object* v_head_21_; lean_object* v_fst_22_; 
v_head_21_ = lean_ctor_get(v_tail_15_, 0);
lean_inc(v_head_21_);
v_fst_22_ = lean_ctor_get(v_head_21_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v_fst_22_) == 1)
{
lean_object* v_pre_23_; 
v_pre_23_ = lean_ctor_get(v_fst_22_, 0);
if (lean_obj_tag(v_pre_23_) == 0)
{
lean_object* v_v_24_; lean_object* v_tail_25_; lean_object* v_snd_26_; lean_object* v_str_27_; lean_object* v___x_28_; uint8_t v___x_29_; 
v_v_24_ = lean_ctor_get(v_snd_16_, 0);
lean_inc(v_v_24_);
lean_dec_ref_known(v_snd_16_, 1);
v_tail_25_ = lean_ctor_get(v_tail_15_, 1);
lean_inc(v_tail_25_);
lean_dec_ref_known(v_tail_15_, 2);
v_snd_26_ = lean_ctor_get(v_head_21_, 1);
lean_inc(v_snd_26_);
lean_dec(v_head_21_);
v_str_27_ = lean_ctor_get(v_fst_22_, 1);
lean_inc_ref(v_str_27_);
lean_dec_ref_known(v_fst_22_, 2);
v___x_28_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0));
v___x_29_ = lean_string_dec_eq(v_str_27_, v___x_28_);
lean_dec_ref(v_str_27_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; 
lean_dec(v_snd_26_);
lean_dec(v_tail_25_);
lean_dec(v_v_24_);
lean_dec_ref(v_expr_14_);
v___x_30_ = lean_box(0);
return v___x_30_;
}
else
{
if (lean_obj_tag(v_snd_26_) == 2)
{
if (lean_obj_tag(v_tail_25_) == 0)
{
lean_object* v_v_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_39_; 
v_v_31_ = lean_ctor_get(v_snd_26_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v_snd_26_);
if (v_isSharedCheck_39_ == 0)
{
v___x_33_ = v_snd_26_;
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_v_31_);
lean_dec(v_snd_26_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_35_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_35_, 0, v_v_24_);
lean_ctor_set(v___x_35_, 1, v_v_31_);
lean_ctor_set(v___x_35_, 2, v_expr_14_);
if (v_isShared_34_ == 0)
{
lean_ctor_set_tag(v___x_33_, 1);
lean_ctor_set(v___x_33_, 0, v___x_35_);
v___x_37_ = v___x_33_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_35_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
else
{
lean_object* v___x_40_; 
lean_dec_ref_known(v_snd_26_, 1);
lean_dec(v_tail_25_);
lean_dec(v_v_24_);
lean_dec_ref(v_expr_14_);
v___x_40_ = lean_box(0);
return v___x_40_;
}
}
else
{
lean_object* v___x_41_; 
lean_dec(v_snd_26_);
lean_dec(v_tail_25_);
lean_dec(v_v_24_);
lean_dec_ref(v_expr_14_);
v___x_41_ = lean_box(0);
return v___x_41_;
}
}
}
else
{
lean_object* v___x_42_; 
lean_dec_ref_known(v_fst_22_, 2);
lean_dec(v_head_21_);
lean_dec_ref_known(v_tail_15_, 2);
lean_dec_ref_known(v_snd_16_, 1);
lean_dec_ref(v_expr_14_);
v___x_42_ = lean_box(0);
return v___x_42_;
}
}
else
{
lean_object* v___x_43_; 
lean_dec(v_fst_22_);
lean_dec(v_head_21_);
lean_dec_ref_known(v_tail_15_, 2);
lean_dec_ref_known(v_snd_16_, 1);
lean_dec_ref(v_expr_14_);
v___x_43_ = lean_box(0);
return v___x_43_;
}
}
else
{
lean_object* v___x_44_; 
lean_dec_ref_known(v_snd_16_, 1);
lean_dec(v_tail_15_);
lean_dec_ref(v_expr_14_);
v___x_44_ = lean_box(0);
return v___x_44_;
}
}
else
{
lean_object* v___x_45_; 
lean_dec(v_snd_16_);
lean_dec(v_tail_15_);
lean_dec_ref(v_expr_14_);
v___x_45_ = lean_box(0);
return v___x_45_;
}
}
}
else
{
lean_object* v___x_46_; 
lean_dec_ref_known(v_fst_12_, 2);
lean_dec_ref_known(v_data_10_, 2);
lean_dec(v_head_11_);
lean_dec_ref_known(v_x_9_, 2);
v___x_46_ = lean_box(0);
return v___x_46_;
}
}
else
{
lean_object* v___x_47_; 
lean_dec(v_fst_12_);
lean_dec_ref_known(v_data_10_, 2);
lean_dec(v_head_11_);
lean_dec_ref_known(v_x_9_, 2);
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
else
{
lean_object* v___x_48_; 
lean_dec(v_data_10_);
lean_dec_ref_known(v_x_9_, 2);
v___x_48_ = lean_box(0);
return v___x_48_;
}
}
else
{
lean_object* v___x_49_; 
lean_dec_ref(v_x_9_);
v___x_49_ = lean_box(0);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object* v_hyp_50_){
_start:
{
lean_object* v_name_51_; lean_object* v_uniq_52_; lean_object* v_p_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_name_51_ = lean_ctor_get(v_hyp_50_, 0);
lean_inc(v_name_51_);
v_uniq_52_ = lean_ctor_get(v_hyp_50_, 1);
lean_inc(v_uniq_52_);
v_p_53_ = lean_ctor_get(v_hyp_50_, 2);
lean_inc_ref(v_p_53_);
lean_dec_ref(v_hyp_50_);
v___x_54_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation));
v___x_55_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_55_, 0, v_name_51_);
v___x_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_54_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation));
v___x_58_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_58_, 0, v_uniq_52_);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = lean_box(0);
v___x_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_59_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_56_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = l_Lean_Expr_mdata___override(v___x_62_, v_p_53_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType(lean_object* v_u_71_, lean_object* v_00_u03c3s_72_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_73_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3));
v___x_74_ = lean_box(0);
v___x_75_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_75_, 0, v_u_71_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = l_Lean_mkConst(v___x_73_, v___x_75_);
v___x_77_ = l_Lean_Expr_app___override(v___x_76_, v_00_u03c3s_72_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object* v_u_84_, lean_object* v_00_u03c3s_85_, lean_object* v_p_86_){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_87_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1));
v___x_88_ = lean_box(0);
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v_u_84_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = l_Lean_mkConst(v___x_87_, v___x_89_);
v___x_91_ = l_Lean_mkAppB(v___x_90_, v_00_u03c3s_85_, v_p_86_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_isPure_x3f(lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_92_) == 5)
{
lean_object* v_fn_93_; 
v_fn_93_ = lean_ctor_get(v_x_92_, 0);
lean_inc_ref(v_fn_93_);
if (lean_obj_tag(v_fn_93_) == 5)
{
lean_object* v_fn_94_; 
v_fn_94_ = lean_ctor_get(v_fn_93_, 0);
lean_inc_ref(v_fn_94_);
if (lean_obj_tag(v_fn_94_) == 4)
{
lean_object* v_declName_95_; 
v_declName_95_ = lean_ctor_get(v_fn_94_, 0);
lean_inc(v_declName_95_);
if (lean_obj_tag(v_declName_95_) == 1)
{
lean_object* v_pre_96_; 
v_pre_96_ = lean_ctor_get(v_declName_95_, 0);
lean_inc(v_pre_96_);
if (lean_obj_tag(v_pre_96_) == 1)
{
lean_object* v_pre_97_; 
v_pre_97_ = lean_ctor_get(v_pre_96_, 0);
lean_inc(v_pre_97_);
if (lean_obj_tag(v_pre_97_) == 1)
{
lean_object* v_pre_98_; 
v_pre_98_ = lean_ctor_get(v_pre_97_, 0);
lean_inc(v_pre_98_);
if (lean_obj_tag(v_pre_98_) == 1)
{
lean_object* v_pre_99_; 
v_pre_99_ = lean_ctor_get(v_pre_98_, 0);
if (lean_obj_tag(v_pre_99_) == 0)
{
lean_object* v_arg_100_; lean_object* v_arg_101_; lean_object* v_us_102_; lean_object* v_str_103_; lean_object* v_str_104_; lean_object* v_str_105_; lean_object* v_str_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v_arg_100_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_arg_100_);
lean_dec_ref_known(v_x_92_, 2);
v_arg_101_ = lean_ctor_get(v_fn_93_, 1);
lean_inc_ref(v_arg_101_);
lean_dec_ref_known(v_fn_93_, 2);
v_us_102_ = lean_ctor_get(v_fn_94_, 1);
lean_inc(v_us_102_);
lean_dec_ref_known(v_fn_94_, 2);
v_str_103_ = lean_ctor_get(v_declName_95_, 1);
lean_inc_ref(v_str_103_);
lean_dec_ref_known(v_declName_95_, 2);
v_str_104_ = lean_ctor_get(v_pre_96_, 1);
lean_inc_ref(v_str_104_);
lean_dec_ref_known(v_pre_96_, 2);
v_str_105_ = lean_ctor_get(v_pre_97_, 1);
lean_inc_ref(v_str_105_);
lean_dec_ref_known(v_pre_97_, 2);
v_str_106_ = lean_ctor_get(v_pre_98_, 1);
lean_inc_ref(v_str_106_);
lean_dec_ref_known(v_pre_98_, 2);
v___x_107_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0));
v___x_108_ = lean_string_dec_eq(v_str_106_, v___x_107_);
lean_dec_ref(v_str_106_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
lean_dec_ref(v_str_105_);
lean_dec_ref(v_str_104_);
lean_dec_ref(v_str_103_);
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_109_ = lean_box(0);
return v___x_109_;
}
else
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1));
v___x_111_ = lean_string_dec_eq(v_str_105_, v___x_110_);
lean_dec_ref(v_str_105_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; 
lean_dec_ref(v_str_104_);
lean_dec_ref(v_str_103_);
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_112_ = lean_box(0);
return v___x_112_;
}
else
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2));
v___x_114_ = lean_string_dec_eq(v_str_104_, v___x_113_);
lean_dec_ref(v_str_104_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; 
lean_dec_ref(v_str_103_);
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_115_ = lean_box(0);
return v___x_115_;
}
else
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0));
v___x_117_ = lean_string_dec_eq(v_str_103_, v___x_116_);
lean_dec_ref(v_str_103_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; 
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_118_ = lean_box(0);
return v___x_118_;
}
else
{
if (lean_obj_tag(v_us_102_) == 1)
{
lean_object* v_tail_119_; 
v_tail_119_ = lean_ctor_get(v_us_102_, 1);
if (lean_obj_tag(v_tail_119_) == 0)
{
lean_object* v_head_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_129_; 
v_head_120_ = lean_ctor_get(v_us_102_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v_us_102_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v_us_102_, 1);
lean_dec(v_unused_130_);
v___x_122_ = v_us_102_;
v_isShared_123_ = v_isSharedCheck_129_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_head_120_);
lean_dec(v_us_102_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_129_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
lean_ctor_set_tag(v___x_122_, 0);
lean_ctor_set(v___x_122_, 1, v_arg_100_);
lean_ctor_set(v___x_122_, 0, v_arg_101_);
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_arg_101_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_arg_100_);
v___x_125_ = v_reuseFailAlloc_128_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v_head_120_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
v___x_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
}
else
{
lean_object* v___x_131_; 
lean_dec_ref_known(v_us_102_, 2);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_131_ = lean_box(0);
return v___x_131_;
}
}
else
{
lean_object* v___x_132_; 
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_132_ = lean_box(0);
return v___x_132_;
}
}
}
}
}
}
else
{
lean_object* v___x_133_; 
lean_dec_ref_known(v_pre_98_, 2);
lean_dec_ref_known(v_pre_97_, 2);
lean_dec_ref_known(v_pre_96_, 2);
lean_dec_ref_known(v_declName_95_, 2);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_133_ = lean_box(0);
return v___x_133_;
}
}
else
{
lean_object* v___x_134_; 
lean_dec_ref_known(v_pre_97_, 2);
lean_dec(v_pre_98_);
lean_dec_ref_known(v_pre_96_, 2);
lean_dec_ref_known(v_declName_95_, 2);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_134_ = lean_box(0);
return v___x_134_;
}
}
else
{
lean_object* v___x_135_; 
lean_dec(v_pre_97_);
lean_dec_ref_known(v_pre_96_, 2);
lean_dec_ref_known(v_declName_95_, 2);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_135_ = lean_box(0);
return v___x_135_;
}
}
else
{
lean_object* v___x_136_; 
lean_dec_ref_known(v_declName_95_, 2);
lean_dec(v_pre_96_);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_136_ = lean_box(0);
return v___x_136_;
}
}
else
{
lean_object* v___x_137_; 
lean_dec_ref_known(v_fn_94_, 2);
lean_dec(v_declName_95_);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_137_ = lean_box(0);
return v___x_137_;
}
}
else
{
lean_object* v___x_138_; 
lean_dec_ref(v_fn_94_);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_138_ = lean_box(0);
return v___x_138_;
}
}
else
{
lean_object* v___x_139_; 
lean_dec_ref(v_fn_93_);
lean_dec_ref_known(v_x_92_, 2);
v___x_139_ = lean_box(0);
return v___x_139_;
}
}
else
{
lean_object* v___x_140_; 
lean_dec_ref(v_x_92_);
v___x_140_ = lean_box(0);
return v___x_140_;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_box(0);
v___x_149_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__1));
v___x_150_ = l_Lean_mkConst(v___x_149_, v___x_148_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(lean_object* v_u_151_, lean_object* v_00_u03c3s_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_153_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName));
v___x_154_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2);
v___x_155_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_u_151_, v_00_u03c3s_152_, v___x_154_);
v___x_156_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_156_, 0, v___x_153_);
lean_ctor_set(v___x_156_, 1, v___x_153_);
lean_ctor_set(v___x_156_, 2, v___x_155_);
v___x_157_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(lean_object* v_e_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_e_158_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v___x_160_; 
v___x_160_ = lean_box(0);
return v___x_160_;
}
else
{
lean_object* v_val_161_; lean_object* v_name_162_; lean_object* v_p_163_; uint8_t v___y_165_; lean_object* v___x_198_; uint8_t v___x_199_; 
v_val_161_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_val_161_);
lean_dec_ref_known(v___x_159_, 1);
v_name_162_ = lean_ctor_get(v_val_161_, 0);
lean_inc(v_name_162_);
v_p_163_ = lean_ctor_get(v_val_161_, 2);
lean_inc_ref(v_p_163_);
lean_dec(v_val_161_);
v___x_198_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName));
v___x_199_ = lean_name_eq(v_name_162_, v___x_198_);
if (v___x_199_ == 0)
{
uint8_t v___x_200_; 
v___x_200_ = l_Lean_Name_hasMacroScopes(v_name_162_);
lean_dec(v_name_162_);
v___y_165_ = v___x_200_;
goto v___jp_164_;
}
else
{
lean_dec(v_name_162_);
v___y_165_ = v___x_199_;
goto v___jp_164_;
}
v___jp_164_:
{
if (v___y_165_ == 0)
{
lean_object* v___x_166_; 
lean_dec_ref(v_p_163_);
v___x_166_ = lean_box(0);
return v___x_166_;
}
else
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_isPure_x3f(v_p_163_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v___x_168_; 
v___x_168_ = lean_box(0);
return v___x_168_;
}
else
{
lean_object* v_val_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_197_; 
v_val_169_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_197_ == 0)
{
v___x_171_ = v___x_167_;
v_isShared_172_ = v_isSharedCheck_197_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_val_169_);
lean_dec(v___x_167_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_197_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v_snd_173_; lean_object* v_snd_174_; 
v_snd_173_ = lean_ctor_get(v_val_169_, 1);
lean_inc(v_snd_173_);
v_snd_174_ = lean_ctor_get(v_snd_173_, 1);
if (lean_obj_tag(v_snd_174_) == 4)
{
lean_object* v_declName_175_; 
v_declName_175_ = lean_ctor_get(v_snd_174_, 0);
lean_inc(v_declName_175_);
if (lean_obj_tag(v_declName_175_) == 1)
{
lean_object* v_pre_176_; 
v_pre_176_ = lean_ctor_get(v_declName_175_, 0);
if (lean_obj_tag(v_pre_176_) == 0)
{
lean_object* v_fst_177_; lean_object* v_fst_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_192_; 
v_fst_177_ = lean_ctor_get(v_val_169_, 0);
lean_inc(v_fst_177_);
lean_dec(v_val_169_);
v_fst_178_ = lean_ctor_get(v_snd_173_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v_snd_173_);
if (v_isSharedCheck_192_ == 0)
{
lean_object* v_unused_193_; 
v_unused_193_ = lean_ctor_get(v_snd_173_, 1);
lean_dec(v_unused_193_);
v___x_180_ = v_snd_173_;
v_isShared_181_ = v_isSharedCheck_192_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_fst_178_);
lean_dec(v_snd_173_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_192_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v_str_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v_str_182_ = lean_ctor_get(v_declName_175_, 1);
lean_inc_ref(v_str_182_);
lean_dec_ref_known(v_declName_175_, 2);
v___x_183_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0));
v___x_184_ = lean_string_dec_eq(v_str_182_, v___x_183_);
lean_dec_ref(v_str_182_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
lean_del_object(v___x_180_);
lean_dec(v_fst_178_);
lean_dec(v_fst_177_);
lean_del_object(v___x_171_);
v___x_185_ = lean_box(0);
return v___x_185_;
}
else
{
lean_object* v___x_187_; 
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 1, v_fst_178_);
lean_ctor_set(v___x_180_, 0, v_fst_177_);
v___x_187_ = v___x_180_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_fst_177_);
lean_ctor_set(v_reuseFailAlloc_191_, 1, v_fst_178_);
v___x_187_ = v_reuseFailAlloc_191_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_187_);
v___x_189_ = v___x_171_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_187_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
}
else
{
lean_object* v___x_194_; 
lean_dec_ref_known(v_declName_175_, 2);
lean_dec(v_snd_173_);
lean_del_object(v___x_171_);
lean_dec(v_val_169_);
v___x_194_ = lean_box(0);
return v___x_194_;
}
}
else
{
lean_object* v___x_195_; 
lean_dec(v_declName_175_);
lean_dec(v_snd_173_);
lean_del_object(v___x_171_);
lean_dec(v_val_169_);
v___x_195_ = lean_box(0);
return v___x_195_;
}
}
else
{
lean_object* v___x_196_; 
lean_dec(v_snd_173_);
lean_del_object(v___x_171_);
lean_dec(v_val_169_);
v___x_196_ = lean_box(0);
return v___x_196_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct(lean_object* v_pos_201_){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_202_ = lean_unsigned_to_nat(3u);
v___x_203_ = lean_unsigned_to_nat(1u);
v___x_204_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_202_, v___x_203_, v_pos_201_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct___boxed(lean_object* v_pos_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct(v_pos_205_);
lean_dec(v_pos_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct(lean_object* v_pos_207_){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_unsigned_to_nat(3u);
v___x_209_ = lean_unsigned_to_nat(2u);
v___x_210_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_208_, v___x_209_, v_pos_207_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct___boxed(lean_object* v_pos_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct(v_pos_211_);
lean_dec(v_pos_211_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object* v_u_219_, lean_object* v_00_u03c3s_220_, lean_object* v_lhs_221_, lean_object* v_rhs_222_){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_223_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1));
v___x_224_ = lean_box(0);
v___x_225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_225_, 0, v_u_219_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = l_Lean_mkConst(v___x_223_, v___x_225_);
v___x_227_ = l_Lean_mkApp3(v___x_226_, v_00_u03c3s_220_, v_lhs_221_, v_rhs_222_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object* v_u_248_, lean_object* v_00_u03c3s_249_, lean_object* v_lhs_250_, lean_object* v_rhs_251_){
_start:
{
lean_object* v___x_252_; 
lean_inc_ref(v_lhs_250_);
v___x_252_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_lhs_250_);
if (lean_obj_tag(v___x_252_) == 1)
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec_ref_known(v___x_252_, 1);
lean_dec_ref(v_lhs_250_);
v___x_253_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1));
v___x_254_ = lean_box(0);
v___x_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_255_, 0, v_u_248_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = l_Lean_mkConst(v___x_253_, v___x_255_);
lean_inc_ref(v_rhs_251_);
v___x_257_ = l_Lean_mkAppB(v___x_256_, v_00_u03c3s_249_, v_rhs_251_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v_rhs_251_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
return v___x_258_;
}
else
{
lean_object* v___x_259_; 
lean_dec(v___x_252_);
lean_inc_ref(v_rhs_251_);
v___x_259_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_rhs_251_);
if (lean_obj_tag(v___x_259_) == 1)
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec_ref_known(v___x_259_, 1);
lean_dec_ref(v_rhs_251_);
v___x_260_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3));
v___x_261_ = lean_box(0);
v___x_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_262_, 0, v_u_248_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = l_Lean_mkConst(v___x_260_, v___x_262_);
lean_inc_ref(v_lhs_250_);
v___x_264_ = l_Lean_mkAppB(v___x_263_, v_00_u03c3s_249_, v_lhs_250_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v_lhs_250_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
return v___x_265_;
}
else
{
lean_object* v_result_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec(v___x_259_);
lean_inc_ref(v_00_u03c3s_249_);
lean_inc(v_u_248_);
v_result_266_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_248_, v_00_u03c3s_249_, v_lhs_250_, v_rhs_251_);
v___x_267_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6));
v___x_268_ = lean_box(0);
v___x_269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_269_, 0, v_u_248_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = l_Lean_mkConst(v___x_267_, v___x_269_);
lean_inc_ref(v_result_266_);
v___x_271_ = l_Lean_mkAppB(v___x_270_, v_00_u03c3s_249_, v_result_266_);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v_result_266_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
return v___x_272_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType(lean_object* v_u_276_){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_277_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__1));
v___x_278_ = l_Lean_Level_succ___override(v_u_276_);
v___x_279_ = lean_box(0);
lean_inc(v___x_278_);
v___x_280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = l_Lean_mkConst(v___x_277_, v___x_280_);
v___x_282_ = l_Lean_mkSort(v___x_278_);
v___x_283_ = l_Lean_Expr_app___override(v___x_281_, v___x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(lean_object* v_u_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_289_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1));
v___x_290_ = l_Lean_Level_succ___override(v_u_288_);
v___x_291_ = lean_box(0);
lean_inc(v___x_290_);
v___x_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = l_Lean_mkConst(v___x_289_, v___x_292_);
v___x_294_ = l_Lean_mkSort(v___x_290_);
v___x_295_ = l_Lean_Expr_app___override(v___x_293_, v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(lean_object* v_u_300_, lean_object* v_hd_301_, lean_object* v_tl_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_303_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1));
v___x_304_ = l_Lean_Level_succ___override(v_u_300_);
v___x_305_ = lean_box(0);
lean_inc(v___x_304_);
v___x_306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_304_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
v___x_307_ = l_Lean_mkConst(v___x_303_, v___x_306_);
v___x_308_ = l_Lean_mkSort(v___x_304_);
v___x_309_ = l_Lean_mkApp3(v___x_307_, v___x_308_, v_hd_301_, v_tl_302_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(lean_object* v_a_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_fst_316_; lean_object* v_snd_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_349_; 
v_fst_316_ = lean_ctor_get(v_a_310_, 0);
v_snd_317_ = lean_ctor_get(v_a_310_, 1);
v_isSharedCheck_349_ = !lean_is_exclusive(v_a_310_);
if (v_isSharedCheck_349_ == 0)
{
v___x_319_ = v_a_310_;
v_isShared_320_ = v_isSharedCheck_349_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_snd_317_);
lean_inc(v_fst_316_);
lean_dec(v_a_310_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_349_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_321_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1));
v___x_322_ = lean_unsigned_to_nat(3u);
v___x_323_ = l_Lean_Expr_isAppOfArity(v_fst_316_, v___x_321_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_325_; 
if (v_isShared_320_ == 0)
{
v___x_325_ = v___x_319_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_fst_316_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_snd_317_);
v___x_325_ = v_reuseFailAlloc_327_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_326_; 
v___x_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
return v___x_326_;
}
}
else
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_328_ = lean_unsigned_to_nat(1u);
v___x_329_ = lean_nat_add(v_snd_317_, v___x_328_);
lean_dec(v_snd_317_);
v___x_330_ = lean_unsigned_to_nat(2u);
v___x_331_ = l_Lean_Expr_getAppNumArgs(v_fst_316_);
v___x_332_ = lean_nat_sub(v___x_331_, v___x_330_);
lean_dec(v___x_331_);
v___x_333_ = lean_nat_sub(v___x_332_, v___x_328_);
lean_dec(v___x_332_);
v___x_334_ = l_Lean_Expr_getRevArg_x21(v_fst_316_, v___x_333_);
lean_dec(v_fst_316_);
v___x_335_ = l_Lean_Meta_whnfR(v___x_334_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_336_);
lean_dec_ref_known(v___x_335_, 1);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 1, v___x_329_);
lean_ctor_set(v___x_319_, 0, v_a_336_);
v___x_338_ = v___x_319_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_336_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_329_);
v___x_338_ = v_reuseFailAlloc_340_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
v_a_310_ = v___x_338_;
goto _start;
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
lean_dec(v___x_329_);
lean_del_object(v___x_319_);
v_a_341_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_335_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_335_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg___boxed(lean_object* v_a_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(v_a_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(lean_object* v_00_u03c3s_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_Meta_whnfR(v_00_u03c3s_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_363_, 1);
v___x_365_ = lean_unsigned_to_nat(0u);
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v_a_364_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(v___x_366_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_376_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_376_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v_snd_372_; lean_object* v___x_374_; 
v_snd_372_ = lean_ctor_get(v_a_368_, 1);
lean_inc(v_snd_372_);
lean_dec(v_a_368_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v_snd_372_);
v___x_374_ = v___x_370_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_snd_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
v_a_377_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_367_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_367_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
v_a_385_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_363_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_363_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length___boxed(lean_object* v_00_u03c3s_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(v_00_u03c3s_393_, v_a_394_, v_a_395_, v_a_396_, v_a_397_);
lean_dec(v_a_397_);
lean_dec_ref(v_a_396_);
lean_dec(v_a_395_);
lean_dec_ref(v_a_394_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0(lean_object* v_inst_400_, lean_object* v_a_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(v_a_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___boxed(lean_object* v_inst_408_, lean_object* v_a_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0(v_inst_408_, v_a_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(lean_object* v_e_416_){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_417_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1));
v___x_418_ = lean_unsigned_to_nat(3u);
v___x_419_ = l_Lean_Expr_isAppOfArity(v_e_416_, v___x_417_, v___x_418_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; 
v___x_420_ = lean_box(0);
return v___x_420_;
}
else
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_421_ = l_Lean_instInhabitedLevel;
v___x_422_ = l_Lean_Expr_appFn_x21(v_e_416_);
v___x_423_ = l_Lean_Expr_appFn_x21(v___x_422_);
v___x_424_ = l_Lean_Expr_appArg_x21(v___x_423_);
lean_dec_ref(v___x_423_);
v___x_425_ = l_Lean_Expr_appArg_x21(v___x_422_);
lean_dec_ref(v___x_422_);
v___x_426_ = l_Lean_Expr_appArg_x21(v_e_416_);
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_425_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_424_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
v___x_429_ = l_Lean_Expr_getAppFn(v_e_416_);
v___x_430_ = l_Lean_Expr_constLevels_x21(v___x_429_);
lean_dec_ref(v___x_429_);
v___x_431_ = lean_unsigned_to_nat(0u);
v___x_432_ = l_List_get_x21Internal___redArg(v___x_421_, v___x_430_, v___x_431_);
lean_dec(v___x_430_);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v___x_428_);
v___x_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
return v___x_434_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f___boxed(lean_object* v_e_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_e_435_);
lean_dec_ref(v_e_435_);
return v_res_436_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_box(0);
v___x_438_ = l_unsafeCast___redArg(v___x_437_);
return v___x_438_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_box(0);
v___x_443_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2));
v___x_444_ = l_Lean_Expr_const___override(v___x_443_, v___x_442_);
return v___x_444_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__4(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_445_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3);
v___x_446_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0);
v___x_447_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
lean_ctor_set(v___x_447_, 1, v___x_445_);
lean_ctor_set(v___x_447_, 2, v___x_445_);
lean_ctor_set(v___x_447_, 3, v___x_445_);
return v___x_447_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default(void){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__4);
return v___x_448_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal(void){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default;
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object* v_expr_457_){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_458_ = l_Lean_Expr_consumeMData(v_expr_457_);
v___x_459_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2));
v___x_460_ = lean_unsigned_to_nat(3u);
v___x_461_ = l_Lean_Expr_isAppOfArity(v___x_458_, v___x_459_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
lean_dec_ref(v___x_458_);
v___x_462_ = lean_box(0);
return v___x_462_;
}
else
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_463_ = l_Lean_instInhabitedLevel;
v___x_464_ = l_Lean_Expr_appFn_x21(v___x_458_);
v___x_465_ = l_Lean_Expr_appFn_x21(v___x_464_);
v___x_466_ = l_Lean_Expr_appArg_x21(v___x_465_);
lean_dec_ref(v___x_465_);
v___x_467_ = l_Lean_Expr_appArg_x21(v___x_464_);
lean_dec_ref(v___x_464_);
v___x_468_ = l_Lean_Expr_appArg_x21(v___x_458_);
lean_dec_ref(v___x_458_);
v___x_469_ = l_Lean_Expr_getAppFn_x27(v_expr_457_);
v___x_470_ = l_Lean_Expr_constLevels_x21(v___x_469_);
lean_dec_ref(v___x_469_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = l_List_get_x21Internal___redArg(v___x_463_, v___x_470_, v___x_471_);
lean_dec(v___x_470_);
v___x_473_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set(v___x_473_, 1, v___x_466_);
lean_ctor_set(v___x_473_, 2, v___x_467_);
lean_ctor_set(v___x_473_, 3, v___x_468_);
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___boxed(lean_object* v_expr_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_expr_475_);
lean_dec_ref(v_expr_475_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(lean_object* v_e_477_, lean_object* v___y_478_){
_start:
{
uint8_t v___x_480_; 
v___x_480_ = l_Lean_Expr_hasMVar(v_e_477_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; 
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v_e_477_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; lean_object* v_mctx_483_; lean_object* v___x_484_; lean_object* v_fst_485_; lean_object* v_snd_486_; lean_object* v___x_487_; lean_object* v_cache_488_; lean_object* v_zetaDeltaFVarIds_489_; lean_object* v_postponed_490_; lean_object* v_diag_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_500_; 
v___x_482_ = lean_st_ref_get(v___y_478_);
v_mctx_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc_ref(v_mctx_483_);
lean_dec(v___x_482_);
v___x_484_ = l_Lean_instantiateMVarsCore(v_mctx_483_, v_e_477_);
v_fst_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_fst_485_);
v_snd_486_ = lean_ctor_get(v___x_484_, 1);
lean_inc(v_snd_486_);
lean_dec_ref(v___x_484_);
v___x_487_ = lean_st_ref_take(v___y_478_);
v_cache_488_ = lean_ctor_get(v___x_487_, 1);
v_zetaDeltaFVarIds_489_ = lean_ctor_get(v___x_487_, 2);
v_postponed_490_ = lean_ctor_get(v___x_487_, 3);
v_diag_491_ = lean_ctor_get(v___x_487_, 4);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_500_ == 0)
{
lean_object* v_unused_501_; 
v_unused_501_ = lean_ctor_get(v___x_487_, 0);
lean_dec(v_unused_501_);
v___x_493_ = v___x_487_;
v_isShared_494_ = v_isSharedCheck_500_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_diag_491_);
lean_inc(v_postponed_490_);
lean_inc(v_zetaDeltaFVarIds_489_);
lean_inc(v_cache_488_);
lean_dec(v___x_487_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_500_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v_snd_486_);
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_snd_486_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_cache_488_);
lean_ctor_set(v_reuseFailAlloc_499_, 2, v_zetaDeltaFVarIds_489_);
lean_ctor_set(v_reuseFailAlloc_499_, 3, v_postponed_490_);
lean_ctor_set(v_reuseFailAlloc_499_, 4, v_diag_491_);
v___x_496_ = v_reuseFailAlloc_499_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = lean_st_ref_put(v___y_478_, v___x_496_);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v_fst_485_);
return v___x_498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg___boxed(lean_object* v_e_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(v_e_502_, v___y_503_);
lean_dec(v___y_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0(lean_object* v_e_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(v_e_506_, v___y_512_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___boxed(lean_object* v_e_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0(v_e_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(lean_object* v_msgData_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; lean_object* v_env_535_; lean_object* v___x_536_; lean_object* v_toCold_537_; lean_object* v_mctx_538_; lean_object* v_lctx_539_; lean_object* v_options_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_534_ = lean_st_ref_get(v___y_532_);
v_env_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc_ref(v_env_535_);
lean_dec(v___x_534_);
v___x_536_ = lean_st_ref_get(v___y_530_);
v_toCold_537_ = lean_ctor_get(v___y_531_, 0);
v_mctx_538_ = lean_ctor_get(v___x_536_, 0);
lean_inc_ref(v_mctx_538_);
lean_dec(v___x_536_);
v_lctx_539_ = lean_ctor_get(v___y_529_, 2);
v_options_540_ = lean_ctor_get(v_toCold_537_, 2);
lean_inc_ref(v_options_540_);
lean_inc_ref(v_lctx_539_);
v___x_541_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_541_, 0, v_env_535_);
lean_ctor_set(v___x_541_, 1, v_mctx_538_);
lean_ctor_set(v___x_541_, 2, v_lctx_539_);
lean_ctor_set(v___x_541_, 3, v_options_540_);
v___x_542_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
lean_ctor_set(v___x_542_, 1, v_msgData_528_);
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1___boxed(lean_object* v_msgData_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(v_msgData_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(lean_object* v_msg_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v_ref_557_; lean_object* v___x_558_; lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_567_; 
v_ref_557_ = lean_ctor_get(v___y_554_, 2);
v___x_558_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(v_msg_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_567_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_565_; 
lean_inc(v_ref_557_);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v_ref_557_);
lean_ctor_set(v___x_563_, 1, v_a_559_);
if (v_isShared_562_ == 0)
{
lean_ctor_set_tag(v___x_561_, 1);
lean_ctor_set(v___x_561_, 0, v___x_563_);
v___x_565_ = v___x_561_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg___boxed(lean_object* v_msg_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(v_msg_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
return v_res_574_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__0));
v___x_577_ = l_Lean_stringToMessageData(v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_579_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc_n(v_a_588_, 2);
lean_dec_ref_known(v___x_587_, 1);
v___x_589_ = l_Lean_MVarId_getType(v_a_588_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_591_; lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_604_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(v_a_590_, v_a_583_);
v_a_592_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_604_ == 0)
{
v___x_594_ = v___x_591_;
v_isShared_595_ = v_isSharedCheck_604_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_591_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_604_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_592_);
lean_dec(v_a_592_);
if (lean_obj_tag(v___x_596_) == 1)
{
lean_object* v_val_597_; lean_object* v___x_598_; lean_object* v___x_600_; 
v_val_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_val_597_);
lean_dec_ref_known(v___x_596_, 1);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v_a_588_);
lean_ctor_set(v___x_598_, 1, v_val_597_);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 0, v___x_598_);
v___x_600_ = v___x_594_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
else
{
lean_object* v___x_602_; lean_object* v___x_603_; 
lean_dec(v___x_596_);
lean_del_object(v___x_594_);
lean_dec(v_a_588_);
v___x_602_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1);
v___x_603_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(v___x_602_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_603_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_a_588_);
v_a_605_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_589_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_589_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
v_a_613_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_587_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_587_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___boxed(lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(v_a_621_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_);
lean_dec(v_a_628_);
lean_dec_ref(v_a_627_);
lean_dec(v_a_626_);
lean_dec_ref(v_a_625_);
lean_dec(v_a_624_);
lean_dec_ref(v_a_623_);
lean_dec(v_a_622_);
lean_dec_ref(v_a_621_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1(lean_object* v_00_u03b1_631_, lean_object* v_msg_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(v_msg_632_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___boxed(lean_object* v_00_u03b1_643_, lean_object* v_msg_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1(v_00_u03b1_643_, v_msg_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip(lean_object* v_goal_661_){
_start:
{
lean_object* v_u_662_; lean_object* v_00_u03c3s_663_; lean_object* v_hyps_664_; lean_object* v_target_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_u_662_ = lean_ctor_get(v_goal_661_, 0);
lean_inc(v_u_662_);
v_00_u03c3s_663_ = lean_ctor_get(v_goal_661_, 1);
lean_inc_ref(v_00_u03c3s_663_);
v_hyps_664_ = lean_ctor_get(v_goal_661_, 2);
lean_inc_ref(v_hyps_664_);
v_target_665_ = lean_ctor_get(v_goal_661_, 3);
lean_inc_ref(v_target_665_);
lean_dec_ref(v_goal_661_);
v___x_666_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1));
v___x_667_ = lean_box(0);
v___x_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_668_, 0, v_u_662_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = l_Lean_mkConst(v___x_666_, v___x_668_);
v___x_670_ = l_Lean_mkApp3(v___x_669_, v_00_u03c3s_663_, v_hyps_664_, v_target_665_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object* v_goal_671_){
_start:
{
lean_object* v_u_672_; lean_object* v_00_u03c3s_673_; lean_object* v_hyps_674_; lean_object* v_target_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v_u_672_ = lean_ctor_get(v_goal_671_, 0);
lean_inc(v_u_672_);
v_00_u03c3s_673_ = lean_ctor_get(v_goal_671_, 1);
lean_inc_ref(v_00_u03c3s_673_);
v_hyps_674_ = lean_ctor_get(v_goal_671_, 2);
lean_inc_ref(v_hyps_674_);
v_target_675_ = lean_ctor_get(v_goal_671_, 3);
lean_inc_ref(v_target_675_);
lean_dec_ref(v_goal_671_);
v___x_676_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2));
v___x_677_ = lean_box(0);
v___x_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_678_, 0, v_u_672_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = l_Lean_mkConst(v___x_676_, v___x_678_);
v___x_680_ = l_Lean_mkApp3(v___x_679_, v_00_u03c3s_673_, v_hyps_674_, v_target_675_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go_spec__0(lean_object* v_msg_681_){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = lean_box(0);
v___x_683_ = lean_panic_fn_borrowed(v___x_682_, v_msg_681_);
return v___x_683_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_687_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__2));
v___x_688_ = lean_unsigned_to_nat(8u);
v___x_689_ = lean_unsigned_to_nat(141u);
v___x_690_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__1));
v___x_691_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__0));
v___x_692_ = l_mkPanicMessageWithDecl(v___x_691_, v___x_690_, v___x_689_, v___x_688_, v___x_687_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(lean_object* v_name_693_, lean_object* v_e_694_, lean_object* v_p_695_){
_start:
{
lean_object* v___x_696_; 
lean_inc_ref(v_e_694_);
v___x_696_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_e_694_);
if (lean_obj_tag(v___x_696_) == 1)
{
lean_object* v_val_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_708_; 
lean_dec_ref(v_e_694_);
v_val_697_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_708_ == 0)
{
v___x_699_ = v___x_696_;
v_isShared_700_ = v_isSharedCheck_708_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_val_697_);
lean_dec(v___x_696_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_708_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v_name_701_; uint8_t v___x_702_; 
v_name_701_ = lean_ctor_get(v_val_697_, 0);
v___x_702_ = lean_name_eq(v_name_701_, v_name_693_);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; 
lean_del_object(v___x_699_);
lean_dec(v_val_697_);
lean_dec(v_p_695_);
v___x_703_ = lean_box(0);
return v___x_703_;
}
else
{
lean_object* v___x_704_; lean_object* v___x_706_; 
v___x_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_704_, 0, v_p_695_);
lean_ctor_set(v___x_704_, 1, v_val_697_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v___x_704_);
v___x_706_ = v___x_699_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_704_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
else
{
lean_object* v___x_709_; 
lean_dec(v___x_696_);
v___x_709_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_e_694_);
if (lean_obj_tag(v___x_709_) == 1)
{
lean_object* v_val_710_; lean_object* v_snd_711_; lean_object* v_snd_712_; lean_object* v_fst_713_; lean_object* v_snd_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec_ref(v_e_694_);
v_val_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_val_710_);
lean_dec_ref_known(v___x_709_, 1);
v_snd_711_ = lean_ctor_get(v_val_710_, 1);
lean_inc(v_snd_711_);
lean_dec(v_val_710_);
v_snd_712_ = lean_ctor_get(v_snd_711_, 1);
lean_inc(v_snd_712_);
lean_dec(v_snd_711_);
v_fst_713_ = lean_ctor_get(v_snd_712_, 0);
lean_inc(v_fst_713_);
v_snd_714_ = lean_ctor_get(v_snd_712_, 1);
lean_inc(v_snd_714_);
lean_dec(v_snd_712_);
v___x_715_ = l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct(v_p_695_);
v___x_716_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(v_name_693_, v_snd_714_, v___x_715_);
if (lean_obj_tag(v___x_716_) == 0)
{
lean_object* v___x_717_; 
v___x_717_ = l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct(v_p_695_);
lean_dec(v_p_695_);
v_e_694_ = v_fst_713_;
v_p_695_ = v___x_717_;
goto _start;
}
else
{
lean_dec(v_fst_713_);
lean_dec(v_p_695_);
return v___x_716_;
}
}
else
{
lean_object* v___x_719_; 
lean_dec(v___x_709_);
lean_dec(v_p_695_);
v___x_719_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_e_694_);
if (lean_obj_tag(v___x_719_) == 1)
{
lean_object* v___x_720_; 
lean_dec_ref_known(v___x_719_, 1);
v___x_720_ = lean_box(0);
return v___x_720_;
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; 
lean_dec(v___x_719_);
v___x_721_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3);
v___x_722_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go_spec__0(v___x_721_);
return v___x_722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___boxed(lean_object* v_name_723_, lean_object* v_e_724_, lean_object* v_p_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(v_name_723_, v_e_724_, v_p_725_);
lean_dec(v_name_723_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f(lean_object* v_goal_727_, lean_object* v_name_728_){
_start:
{
lean_object* v_hyps_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_hyps_729_ = lean_ctor_get(v_goal_727_, 2);
lean_inc_ref(v_hyps_729_);
lean_dec_ref(v_goal_727_);
v___x_730_ = l_Lean_SubExpr_Pos_root;
v___x_731_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(v_name_728_, v_hyps_729_, v___x_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f___boxed(lean_object* v_goal_732_, lean_object* v_name_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f(v_goal_732_, v_name_733_);
lean_dec(v_name_733_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(lean_object* v_msg_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_ref_741_; lean_object* v___x_742_; lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_751_; 
v_ref_741_ = lean_ctor_get(v___y_738_, 2);
v___x_742_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(v_msg_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
v_a_743_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_751_ == 0)
{
v___x_745_ = v___x_742_;
v_isShared_746_ = v_isSharedCheck_751_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_742_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_751_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; lean_object* v___x_749_; 
lean_inc(v_ref_741_);
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v_ref_741_);
lean_ctor_set(v___x_747_, 1, v_a_743_);
if (v_isShared_746_ == 0)
{
lean_ctor_set_tag(v___x_745_, 1);
lean_ctor_set(v___x_745_, 0, v___x_747_);
v___x_749_ = v___x_745_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg___boxed(lean_object* v_msg_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v_msg_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
return v_res_758_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0(uint8_t v_suppressElabErrors_766_, uint8_t v___y_767_, lean_object* v_x_768_){
_start:
{
if (lean_obj_tag(v_x_768_) == 1)
{
lean_object* v_pre_769_; 
v_pre_769_ = lean_ctor_get(v_x_768_, 0);
switch(lean_obj_tag(v_pre_769_))
{
case 1:
{
lean_object* v_pre_770_; 
v_pre_770_ = lean_ctor_get(v_pre_769_, 0);
switch(lean_obj_tag(v_pre_770_))
{
case 0:
{
lean_object* v_str_771_; lean_object* v_str_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
v_str_771_ = lean_ctor_get(v_x_768_, 1);
v_str_772_ = lean_ctor_get(v_pre_769_, 1);
v___x_773_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_774_ = lean_string_dec_eq(v_str_772_, v___x_773_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0));
v___x_776_ = lean_string_dec_eq(v_str_772_, v___x_775_);
if (v___x_776_ == 0)
{
return v___x_776_;
}
else
{
lean_object* v___x_777_; uint8_t v___x_778_; 
v___x_777_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_778_ = lean_string_dec_eq(v_str_771_, v___x_777_);
if (v___x_778_ == 0)
{
return v___x_778_;
}
else
{
return v_suppressElabErrors_766_;
}
}
}
else
{
lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_779_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_780_ = lean_string_dec_eq(v_str_771_, v___x_779_);
if (v___x_780_ == 0)
{
return v___x_780_;
}
else
{
return v_suppressElabErrors_766_;
}
}
}
case 1:
{
lean_object* v_pre_781_; 
v_pre_781_ = lean_ctor_get(v_pre_770_, 0);
if (lean_obj_tag(v_pre_781_) == 0)
{
lean_object* v_str_782_; lean_object* v_str_783_; lean_object* v_str_784_; lean_object* v___x_785_; uint8_t v___x_786_; 
v_str_782_ = lean_ctor_get(v_x_768_, 1);
v_str_783_ = lean_ctor_get(v_pre_769_, 1);
v_str_784_ = lean_ctor_get(v_pre_770_, 1);
v___x_785_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_786_ = lean_string_dec_eq(v_str_784_, v___x_785_);
if (v___x_786_ == 0)
{
return v___x_786_;
}
else
{
lean_object* v___x_787_; uint8_t v___x_788_; 
v___x_787_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_788_ = lean_string_dec_eq(v_str_783_, v___x_787_);
if (v___x_788_ == 0)
{
return v___x_788_;
}
else
{
lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_789_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_790_ = lean_string_dec_eq(v_str_782_, v___x_789_);
if (v___x_790_ == 0)
{
return v___x_790_;
}
else
{
return v_suppressElabErrors_766_;
}
}
}
}
else
{
return v___y_767_;
}
}
default: 
{
return v___y_767_;
}
}
}
case 0:
{
lean_object* v_str_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v_str_791_ = lean_ctor_get(v_x_768_, 1);
v___x_792_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_793_ = lean_string_dec_eq(v_str_791_, v___x_792_);
if (v___x_793_ == 0)
{
return v___x_793_;
}
else
{
return v_suppressElabErrors_766_;
}
}
default: 
{
return v___y_767_;
}
}
}
else
{
return v___y_767_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_suppressElabErrors_794_, lean_object* v___y_795_, lean_object* v_x_796_){
_start:
{
uint8_t v_suppressElabErrors_boxed_797_; uint8_t v___y_4409__boxed_798_; uint8_t v_res_799_; lean_object* v_r_800_; 
v_suppressElabErrors_boxed_797_ = lean_unbox(v_suppressElabErrors_794_);
v___y_4409__boxed_798_ = lean_unbox(v___y_795_);
v_res_799_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0(v_suppressElabErrors_boxed_797_, v___y_4409__boxed_798_, v_x_796_);
lean_dec(v_x_796_);
v_r_800_ = lean_box(v_res_799_);
return v_r_800_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3(lean_object* v_opts_801_, lean_object* v_opt_802_){
_start:
{
lean_object* v_name_803_; lean_object* v_defValue_804_; lean_object* v_map_805_; lean_object* v___x_806_; 
v_name_803_ = lean_ctor_get(v_opt_802_, 0);
v_defValue_804_ = lean_ctor_get(v_opt_802_, 1);
v_map_805_ = lean_ctor_get(v_opts_801_, 0);
v___x_806_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_805_, v_name_803_);
if (lean_obj_tag(v___x_806_) == 0)
{
uint8_t v___x_807_; 
v___x_807_ = lean_unbox(v_defValue_804_);
return v___x_807_;
}
else
{
lean_object* v_val_808_; 
v_val_808_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_val_808_);
lean_dec_ref_known(v___x_806_, 1);
if (lean_obj_tag(v_val_808_) == 1)
{
uint8_t v_v_809_; 
v_v_809_ = lean_ctor_get_uint8(v_val_808_, 0);
lean_dec_ref_known(v_val_808_, 0);
return v_v_809_;
}
else
{
uint8_t v___x_810_; 
lean_dec(v_val_808_);
v___x_810_ = lean_unbox(v_defValue_804_);
return v___x_810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_opts_811_, lean_object* v_opt_812_){
_start:
{
uint8_t v_res_813_; lean_object* v_r_814_; 
v_res_813_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3(v_opts_811_, v_opt_812_);
lean_dec_ref(v_opt_812_);
lean_dec_ref(v_opts_811_);
v_r_814_ = lean_box(v_res_813_);
return v_r_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1(lean_object* v_ref_816_, lean_object* v_msgData_817_, uint8_t v_severity_818_, uint8_t v_isSilent_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v___y_826_; lean_object* v___y_827_; uint8_t v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; uint8_t v___y_832_; lean_object* v_currNamespace_833_; lean_object* v_openDecls_834_; lean_object* v___y_835_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; uint8_t v___y_866_; lean_object* v___y_867_; uint8_t v___y_868_; uint8_t v___y_869_; lean_object* v___y_870_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; uint8_t v___y_892_; lean_object* v___y_893_; uint8_t v___y_894_; lean_object* v___y_895_; uint8_t v___y_896_; lean_object* v___y_897_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; uint8_t v___y_906_; lean_object* v___y_907_; uint8_t v___y_908_; uint8_t v___y_909_; uint8_t v___x_914_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; uint8_t v___y_921_; lean_object* v___y_922_; uint8_t v___y_923_; uint8_t v___y_924_; uint8_t v___y_926_; uint8_t v___x_944_; 
v___x_914_ = 2;
v___x_944_ = l_Lean_instBEqMessageSeverity_beq(v_severity_818_, v___x_914_);
if (v___x_944_ == 0)
{
v___y_926_ = v___x_944_;
goto v___jp_925_;
}
else
{
uint8_t v___x_945_; 
lean_inc_ref(v_msgData_817_);
v___x_945_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_817_);
v___y_926_ = v___x_945_;
goto v___jp_925_;
}
v___jp_825_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v_env_840_; lean_object* v_nextMacroScope_841_; lean_object* v_ngen_842_; lean_object* v_auxDeclNGen_843_; lean_object* v_traceState_844_; lean_object* v_cache_845_; lean_object* v_messages_846_; lean_object* v_infoState_847_; lean_object* v_snapshotTasks_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_859_; 
lean_inc(v_openDecls_834_);
lean_inc(v_currNamespace_833_);
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v_currNamespace_833_);
lean_ctor_set(v___x_836_, 1, v_openDecls_834_);
v___x_837_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set(v___x_837_, 1, v___y_827_);
lean_inc_ref(v___y_826_);
lean_inc_ref(v___y_830_);
v___x_838_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_838_, 0, v___y_830_);
lean_ctor_set(v___x_838_, 1, v___y_829_);
lean_ctor_set(v___x_838_, 2, v___y_831_);
lean_ctor_set(v___x_838_, 3, v___y_826_);
lean_ctor_set(v___x_838_, 4, v___x_837_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*5, v___y_828_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*5 + 1, v___y_832_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*5 + 2, v_isSilent_819_);
v___x_839_ = lean_st_ref_take(v___y_835_);
v_env_840_ = lean_ctor_get(v___x_839_, 0);
v_nextMacroScope_841_ = lean_ctor_get(v___x_839_, 1);
v_ngen_842_ = lean_ctor_get(v___x_839_, 2);
v_auxDeclNGen_843_ = lean_ctor_get(v___x_839_, 3);
v_traceState_844_ = lean_ctor_get(v___x_839_, 4);
v_cache_845_ = lean_ctor_get(v___x_839_, 5);
v_messages_846_ = lean_ctor_get(v___x_839_, 6);
v_infoState_847_ = lean_ctor_get(v___x_839_, 7);
v_snapshotTasks_848_ = lean_ctor_get(v___x_839_, 8);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_859_ == 0)
{
v___x_850_ = v___x_839_;
v_isShared_851_ = v_isSharedCheck_859_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_snapshotTasks_848_);
lean_inc(v_infoState_847_);
lean_inc(v_messages_846_);
lean_inc(v_cache_845_);
lean_inc(v_traceState_844_);
lean_inc(v_auxDeclNGen_843_);
lean_inc(v_ngen_842_);
lean_inc(v_nextMacroScope_841_);
lean_inc(v_env_840_);
lean_dec(v___x_839_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_859_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_852_ = lean_box(0);
v___x_853_ = l_Lean_MessageLog_add(v___x_838_, v_messages_846_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 6, v___x_853_);
v___x_855_ = v___x_850_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_env_840_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_nextMacroScope_841_);
lean_ctor_set(v_reuseFailAlloc_858_, 2, v_ngen_842_);
lean_ctor_set(v_reuseFailAlloc_858_, 3, v_auxDeclNGen_843_);
lean_ctor_set(v_reuseFailAlloc_858_, 4, v_traceState_844_);
lean_ctor_set(v_reuseFailAlloc_858_, 5, v_cache_845_);
lean_ctor_set(v_reuseFailAlloc_858_, 6, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_858_, 7, v_infoState_847_);
lean_ctor_set(v_reuseFailAlloc_858_, 8, v_snapshotTasks_848_);
v___x_855_ = v_reuseFailAlloc_858_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_st_ref_put(v___y_835_, v___x_855_);
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_852_);
return v___x_857_;
}
}
}
v___jp_860_:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_886_; 
v___x_871_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_817_);
v___x_872_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(v___x_871_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_886_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_886_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_886_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
lean_inc_ref_n(v___y_864_, 2);
v___x_877_ = l_Lean_FileMap_toPosition(v___y_864_, v___y_867_);
lean_dec(v___y_867_);
v___x_878_ = l_Lean_FileMap_toPosition(v___y_864_, v___y_870_);
lean_dec(v___y_870_);
v___x_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
v___x_880_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__0));
if (v___y_868_ == 0)
{
lean_del_object(v___x_875_);
lean_dec_ref(v___y_862_);
v___y_826_ = v___x_880_;
v___y_827_ = v_a_873_;
v___y_828_ = v___y_866_;
v___y_829_ = v___x_877_;
v___y_830_ = v___y_865_;
v___y_831_ = v___x_879_;
v___y_832_ = v___y_869_;
v_currNamespace_833_ = v___y_863_;
v_openDecls_834_ = v___y_861_;
v___y_835_ = v___y_823_;
goto v___jp_825_;
}
else
{
uint8_t v___x_881_; 
lean_inc(v_a_873_);
v___x_881_ = l_Lean_MessageData_hasTag(v___y_862_, v_a_873_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; lean_object* v___x_884_; 
lean_dec_ref_known(v___x_879_, 1);
lean_dec_ref(v___x_877_);
lean_dec(v_a_873_);
v___x_882_ = lean_box(0);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_882_);
v___x_884_ = v___x_875_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_882_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
else
{
lean_del_object(v___x_875_);
v___y_826_ = v___x_880_;
v___y_827_ = v_a_873_;
v___y_828_ = v___y_866_;
v___y_829_ = v___x_877_;
v___y_830_ = v___y_865_;
v___y_831_ = v___x_879_;
v___y_832_ = v___y_869_;
v_currNamespace_833_ = v___y_863_;
v_openDecls_834_ = v___y_861_;
v___y_835_ = v___y_823_;
goto v___jp_825_;
}
}
}
}
v___jp_887_:
{
lean_object* v___x_898_; 
v___x_898_ = l_Lean_Syntax_getTailPos_x3f(v___y_895_, v___y_892_);
lean_dec(v___y_895_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_inc(v___y_897_);
v___y_861_ = v___y_888_;
v___y_862_ = v___y_889_;
v___y_863_ = v___y_890_;
v___y_864_ = v___y_891_;
v___y_865_ = v___y_893_;
v___y_866_ = v___y_892_;
v___y_867_ = v___y_897_;
v___y_868_ = v___y_894_;
v___y_869_ = v___y_896_;
v___y_870_ = v___y_897_;
goto v___jp_860_;
}
else
{
lean_object* v_val_899_; 
v_val_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v___x_898_, 1);
v___y_861_ = v___y_888_;
v___y_862_ = v___y_889_;
v___y_863_ = v___y_890_;
v___y_864_ = v___y_891_;
v___y_865_ = v___y_893_;
v___y_866_ = v___y_892_;
v___y_867_ = v___y_897_;
v___y_868_ = v___y_894_;
v___y_869_ = v___y_896_;
v___y_870_ = v_val_899_;
goto v___jp_860_;
}
}
v___jp_900_:
{
lean_object* v_ref_910_; lean_object* v___x_911_; 
v_ref_910_ = l_Lean_replaceRef(v_ref_816_, v___y_907_);
v___x_911_ = l_Lean_Syntax_getPos_x3f(v_ref_910_, v___y_906_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v___x_912_; 
v___x_912_ = lean_unsigned_to_nat(0u);
v___y_888_ = v___y_901_;
v___y_889_ = v___y_902_;
v___y_890_ = v___y_903_;
v___y_891_ = v___y_904_;
v___y_892_ = v___y_906_;
v___y_893_ = v___y_905_;
v___y_894_ = v___y_908_;
v___y_895_ = v_ref_910_;
v___y_896_ = v___y_909_;
v___y_897_ = v___x_912_;
goto v___jp_887_;
}
else
{
lean_object* v_val_913_; 
v_val_913_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_val_913_);
lean_dec_ref_known(v___x_911_, 1);
v___y_888_ = v___y_901_;
v___y_889_ = v___y_902_;
v___y_890_ = v___y_903_;
v___y_891_ = v___y_904_;
v___y_892_ = v___y_906_;
v___y_893_ = v___y_905_;
v___y_894_ = v___y_908_;
v___y_895_ = v_ref_910_;
v___y_896_ = v___y_909_;
v___y_897_ = v_val_913_;
goto v___jp_887_;
}
}
v___jp_915_:
{
if (v___y_924_ == 0)
{
v___y_901_ = v___y_916_;
v___y_902_ = v___y_918_;
v___y_903_ = v___y_920_;
v___y_904_ = v___y_917_;
v___y_905_ = v___y_919_;
v___y_906_ = v___y_921_;
v___y_907_ = v___y_922_;
v___y_908_ = v___y_923_;
v___y_909_ = v_severity_818_;
goto v___jp_900_;
}
else
{
v___y_901_ = v___y_916_;
v___y_902_ = v___y_918_;
v___y_903_ = v___y_920_;
v___y_904_ = v___y_917_;
v___y_905_ = v___y_919_;
v___y_906_ = v___y_921_;
v___y_907_ = v___y_922_;
v___y_908_ = v___y_923_;
v___y_909_ = v___x_914_;
goto v___jp_900_;
}
}
v___jp_925_:
{
if (v___y_926_ == 0)
{
lean_object* v_toCold_927_; lean_object* v_ref_928_; uint8_t v_suppressElabErrors_929_; lean_object* v_fileName_930_; lean_object* v_fileMap_931_; lean_object* v_options_932_; lean_object* v_currNamespace_933_; lean_object* v_openDecls_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___f_937_; uint8_t v___x_938_; uint8_t v___x_939_; 
v_toCold_927_ = lean_ctor_get(v___y_822_, 0);
v_ref_928_ = lean_ctor_get(v___y_822_, 2);
v_suppressElabErrors_929_ = lean_ctor_get_uint8(v___y_822_, sizeof(void*)*3 + 1);
v_fileName_930_ = lean_ctor_get(v_toCold_927_, 0);
v_fileMap_931_ = lean_ctor_get(v_toCold_927_, 1);
v_options_932_ = lean_ctor_get(v_toCold_927_, 2);
v_currNamespace_933_ = lean_ctor_get(v_toCold_927_, 4);
v_openDecls_934_ = lean_ctor_get(v_toCold_927_, 5);
v___x_935_ = lean_box(v_suppressElabErrors_929_);
v___x_936_ = lean_box(v___y_926_);
v___f_937_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_937_, 0, v___x_935_);
lean_closure_set(v___f_937_, 1, v___x_936_);
v___x_938_ = 1;
v___x_939_ = l_Lean_instBEqMessageSeverity_beq(v_severity_818_, v___x_938_);
if (v___x_939_ == 0)
{
v___y_916_ = v_openDecls_934_;
v___y_917_ = v_fileMap_931_;
v___y_918_ = v___f_937_;
v___y_919_ = v_fileName_930_;
v___y_920_ = v_currNamespace_933_;
v___y_921_ = v___y_926_;
v___y_922_ = v_ref_928_;
v___y_923_ = v_suppressElabErrors_929_;
v___y_924_ = v___x_939_;
goto v___jp_915_;
}
else
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = l_Lean_warningAsError;
v___x_941_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3(v_options_932_, v___x_940_);
v___y_916_ = v_openDecls_934_;
v___y_917_ = v_fileMap_931_;
v___y_918_ = v___f_937_;
v___y_919_ = v_fileName_930_;
v___y_920_ = v_currNamespace_933_;
v___y_921_ = v___y_926_;
v___y_922_ = v_ref_928_;
v___y_923_ = v_suppressElabErrors_929_;
v___y_924_ = v___x_941_;
goto v___jp_915_;
}
}
else
{
lean_object* v___x_942_; lean_object* v___x_943_; 
lean_dec_ref(v_msgData_817_);
v___x_942_ = lean_box(0);
v___x_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
return v___x_943_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_946_, lean_object* v_msgData_947_, lean_object* v_severity_948_, lean_object* v_isSilent_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
uint8_t v_severity_boxed_955_; uint8_t v_isSilent_boxed_956_; lean_object* v_res_957_; 
v_severity_boxed_955_ = lean_unbox(v_severity_948_);
v_isSilent_boxed_956_ = lean_unbox(v_isSilent_949_);
v_res_957_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1(v_ref_946_, v_msgData_947_, v_severity_boxed_955_, v_isSilent_boxed_956_, v___y_950_, v___y_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v_ref_946_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0(lean_object* v_msgData_958_, uint8_t v_severity_959_, uint8_t v_isSilent_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_ref_966_; lean_object* v___x_967_; 
v_ref_966_ = lean_ctor_get(v___y_963_, 2);
v___x_967_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1(v_ref_966_, v_msgData_958_, v_severity_959_, v_isSilent_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0___boxed(lean_object* v_msgData_968_, lean_object* v_severity_969_, lean_object* v_isSilent_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
uint8_t v_severity_boxed_976_; uint8_t v_isSilent_boxed_977_; lean_object* v_res_978_; 
v_severity_boxed_976_ = lean_unbox(v_severity_969_);
v_isSilent_boxed_977_ = lean_unbox(v_isSilent_970_);
v_res_978_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0(v_msgData_968_, v_severity_boxed_976_, v_isSilent_boxed_977_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0(lean_object* v_msgData_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
uint8_t v___x_985_; uint8_t v___x_986_; lean_object* v___x_987_; 
v___x_985_ = 1;
v___x_986_ = 0;
v___x_987_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0(v_msgData_979_, v___x_985_, v___x_986_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0___boxed(lean_object* v_msgData_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0(v_msgData_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
return v_res_994_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__0));
v___x_997_ = l_Lean_stringToMessageData(v___x_996_);
return v___x_997_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__2));
v___x_1000_ = l_Lean_stringToMessageData(v___x_999_);
return v___x_1000_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__4));
v___x_1003_ = l_Lean_stringToMessageData(v___x_1002_);
return v___x_1003_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__6));
v___x_1006_ = l_Lean_stringToMessageData(v___x_1005_);
return v___x_1006_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9(void){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__8));
v___x_1009_ = l_Lean_stringToMessageData(v___x_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType(lean_object* v_expr_1010_, lean_object* v_expectedType_1011_, uint8_t v_suppressWarning_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; uint8_t v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = 0;
lean_inc_ref(v_expr_1010_);
v___x_1034_ = l_Lean_Meta_check(v_expr_1010_, v___x_1033_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v___x_1035_; 
lean_dec_ref_known(v___x_1034_, 1);
lean_inc_ref(v_expectedType_1011_);
v___x_1035_ = l_Lean_Meta_check(v_expectedType_1011_, v___x_1033_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v___x_1036_; 
lean_dec_ref_known(v___x_1035_, 1);
lean_inc(v_a_1016_);
lean_inc_ref(v_a_1015_);
lean_inc(v_a_1014_);
lean_inc_ref(v_a_1013_);
lean_inc_ref(v_expr_1010_);
v___x_1036_ = lean_infer_type(v_expr_1010_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1038_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc_n(v_a_1037_, 2);
lean_dec_ref_known(v___x_1036_, 1);
lean_inc_ref(v_expectedType_1011_);
v___x_1038_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1037_, v_expectedType_1011_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; uint8_t v___x_1040_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref_known(v___x_1038_, 1);
v___x_1040_ = lean_unbox(v_a_1039_);
lean_dec(v_a_1039_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1041_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5);
v___x_1042_ = l_Lean_indentExpr(v_expr_1010_);
v___x_1043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1041_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
v___x_1044_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7);
v___x_1045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1043_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = l_Lean_indentExpr(v_a_1037_);
v___x_1047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1045_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9);
v___x_1049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = l_Lean_indentExpr(v_expectedType_1011_);
v___x_1051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v___x_1051_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
return v___x_1052_;
}
else
{
lean_dec(v_a_1037_);
v___y_1019_ = v_a_1013_;
v___y_1020_ = v_a_1014_;
v___y_1021_ = v_a_1015_;
v___y_1022_ = v_a_1016_;
goto v___jp_1018_;
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
lean_dec(v_a_1037_);
lean_dec_ref(v_expectedType_1011_);
lean_dec_ref(v_expr_1010_);
v_a_1053_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v___x_1038_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1038_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1053_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
lean_dec_ref(v_expectedType_1011_);
lean_dec_ref(v_expr_1010_);
v_a_1061_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1036_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1036_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
else
{
lean_dec_ref(v_expectedType_1011_);
lean_dec_ref(v_expr_1010_);
return v___x_1035_;
}
}
else
{
lean_dec_ref(v_expectedType_1011_);
lean_dec_ref(v_expr_1010_);
return v___x_1034_;
}
v___jp_1018_:
{
if (v_suppressWarning_1012_ == 0)
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1023_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1);
v___x_1024_ = l_Lean_MessageData_ofExpr(v_expr_1010_);
v___x_1025_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1023_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3);
v___x_1027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1025_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
v___x_1028_ = l_Lean_MessageData_ofExpr(v_expectedType_1011_);
v___x_1029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0(v___x_1029_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_);
return v___x_1030_;
}
else
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_dec_ref(v_expectedType_1011_);
lean_dec_ref(v_expr_1010_);
v___x_1031_ = lean_box(0);
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___boxed(lean_object* v_expr_1069_, lean_object* v_expectedType_1070_, lean_object* v_suppressWarning_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
uint8_t v_suppressWarning_boxed_1077_; lean_object* v_res_1078_; 
v_suppressWarning_boxed_1077_ = lean_unbox(v_suppressWarning_1071_);
v_res_1078_ = l_Lean_Elab_Tactic_Do_ProofMode_checkHasType(v_expr_1069_, v_expectedType_1070_, v_suppressWarning_boxed_1077_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1(lean_object* v_00_u03b1_1079_, lean_object* v_msg_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v_msg_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___boxed(lean_object* v_00_u03b1_1087_, lean_object* v_msg_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1(v_00_u03b1_1087_, v_msg_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
lean_dec(v___y_1090_);
lean_dec_ref(v___y_1089_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof(lean_object* v_goal_1095_, lean_object* v_prf_1096_, uint8_t v_suppressWarning_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_1095_);
v___x_1104_ = l_Lean_Elab_Tactic_Do_ProofMode_checkHasType(v_prf_1096_, v___x_1103_, v_suppressWarning_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof___boxed(lean_object* v_goal_1105_, lean_object* v_prf_1106_, lean_object* v_suppressWarning_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_){
_start:
{
uint8_t v_suppressWarning_boxed_1113_; lean_object* v_res_1114_; 
v_suppressWarning_boxed_1113_ = lean_unbox(v_suppressWarning_1107_);
v_res_1114_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof(v_goal_1105_, v_prf_1106_, v_suppressWarning_boxed_1113_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec_ref(v_a_1108_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(lean_object* v_x_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2));
lean_inc(v_x_1126_);
v___x_1131_ = l_Lean_Syntax_isOfKind(v_x_1126_, v___x_1130_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4));
v___x_1133_ = l_Lean_Core_mkFreshUserName(v___x_1132_, v_a_1127_, v_a_1128_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1142_; 
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1136_ = v___x_1133_;
v_isShared_1137_ = v_isSharedCheck_1142_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1133_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1142_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; lean_object* v___x_1140_; 
v___x_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1138_, 0, v_a_1134_);
lean_ctor_set(v___x_1138_, 1, v_x_1126_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 0, v___x_1138_);
v___x_1140_ = v___x_1136_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
else
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
lean_dec(v_x_1126_);
v_a_1143_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1133_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1133_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
}
else
{
lean_object* v___x_1151_; lean_object* v_name_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; 
v___x_1151_ = lean_unsigned_to_nat(0u);
v_name_1152_ = l_Lean_Syntax_getArg(v_x_1126_, v___x_1151_);
v___x_1153_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6));
lean_inc(v_name_1152_);
v___x_1154_ = l_Lean_Syntax_isOfKind(v_name_1152_, v___x_1153_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
lean_dec(v_name_1152_);
v___x_1155_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4));
v___x_1156_ = l_Lean_Core_mkFreshUserName(v___x_1155_, v_a_1127_, v_a_1128_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1165_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_a_1157_);
lean_ctor_set(v___x_1161_, 1, v_x_1126_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1161_);
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
lean_dec(v_x_1126_);
v_a_1166_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1156_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1156_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
else
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
lean_dec(v_x_1126_);
v___x_1174_ = l_Lean_TSyntax_getId(v_name_1152_);
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v_name_1152_);
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
return v___x_1176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___boxed(lean_object* v_x_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(v_x_1177_, v_a_1178_, v_a_1179_);
lean_dec(v_a_1179_);
lean_dec_ref(v_a_1178_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0(lean_object* v_as_1182_, size_t v_i_1183_, size_t v_stop_1184_, lean_object* v_b_1185_){
_start:
{
uint8_t v___x_1186_; 
v___x_1186_ = lean_usize_dec_eq(v_i_1183_, v_stop_1184_);
if (v___x_1186_ == 0)
{
size_t v___x_1187_; size_t v___x_1188_; lean_object* v___x_1189_; lean_object* v_snd_1190_; lean_object* v_fst_1191_; lean_object* v_fst_1192_; lean_object* v_snd_1193_; uint8_t v___x_1194_; lean_object* v___x_1195_; 
v___x_1187_ = ((size_t)1ULL);
v___x_1188_ = lean_usize_sub(v_i_1183_, v___x_1187_);
v___x_1189_ = lean_array_uget_borrowed(v_as_1182_, v___x_1188_);
v_snd_1190_ = lean_ctor_get(v___x_1189_, 1);
v_fst_1191_ = lean_ctor_get(v___x_1189_, 0);
v_fst_1192_ = lean_ctor_get(v_snd_1190_, 0);
v_snd_1193_ = lean_ctor_get(v_snd_1190_, 1);
v___x_1194_ = lean_unbox(v_snd_1193_);
lean_inc(v_fst_1192_);
lean_inc(v_fst_1191_);
v___x_1195_ = l_Lean_Expr_lam___override(v_fst_1191_, v_fst_1192_, v_b_1185_, v___x_1194_);
v_i_1183_ = v___x_1188_;
v_b_1185_ = v___x_1195_;
goto _start;
}
else
{
return v_b_1185_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0___boxed(lean_object* v_as_1197_, lean_object* v_i_1198_, lean_object* v_stop_1199_, lean_object* v_b_1200_){
_start:
{
size_t v_i_boxed_1201_; size_t v_stop_boxed_1202_; lean_object* v_res_1203_; 
v_i_boxed_1201_ = lean_unbox_usize(v_i_1198_);
lean_dec(v_i_1198_);
v_stop_boxed_1202_ = lean_unbox_usize(v_stop_1199_);
lean_dec(v_stop_1199_);
v_res_1203_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0(v_as_1197_, v_i_boxed_1201_, v_stop_boxed_1202_, v_b_1200_);
lean_dec_ref(v_as_1197_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(lean_object* v_revLams_1204_, lean_object* v_revAppArgs_1205_, lean_object* v_body_1206_){
_start:
{
uint8_t v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1207_ = 0;
v___x_1208_ = l_Lean_Expr_betaRev(v_body_1206_, v_revAppArgs_1205_, v___x_1207_, v___x_1207_);
v___x_1209_ = lean_array_get_size(v_revLams_1204_);
v___x_1210_ = lean_unsigned_to_nat(0u);
v___x_1211_ = lean_nat_dec_lt(v___x_1210_, v___x_1209_);
if (v___x_1211_ == 0)
{
return v___x_1208_;
}
else
{
size_t v___x_1212_; size_t v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = lean_usize_of_nat(v___x_1209_);
v___x_1213_ = ((size_t)0ULL);
v___x_1214_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0(v_revLams_1204_, v___x_1212_, v___x_1213_, v___x_1208_);
return v___x_1214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap___boxed(lean_object* v_revLams_1215_, lean_object* v_revAppArgs_1216_, lean_object* v_body_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(v_revLams_1215_, v_revAppArgs_1216_, v_body_1217_);
lean_dec_ref(v_revAppArgs_1216_);
lean_dec_ref(v_revLams_1215_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(lean_object* v_00_u03c3s_1219_, lean_object* v_revLams_1220_, lean_object* v_revAppArgs_1221_, lean_object* v_e_1222_){
_start:
{
lean_object* v___x_1223_; 
lean_inc_ref(v_e_1222_);
v___x_1223_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_e_1222_);
if (lean_obj_tag(v___x_1223_) == 1)
{
lean_object* v_val_1224_; lean_object* v_fst_1225_; lean_object* v___x_1226_; 
lean_dec_ref(v_e_1222_);
lean_dec_ref(v_revAppArgs_1221_);
lean_dec_ref(v_revLams_1220_);
v_val_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_val_1224_);
lean_dec_ref_known(v___x_1223_, 1);
v_fst_1225_ = lean_ctor_get(v_val_1224_, 0);
lean_inc(v_fst_1225_);
lean_dec(v_val_1224_);
v___x_1226_ = l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(v_fst_1225_, v_00_u03c3s_1219_);
return v___x_1226_;
}
else
{
lean_object* v___x_1227_; 
lean_dec(v___x_1223_);
lean_inc_ref(v_e_1222_);
v___x_1227_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_e_1222_);
if (lean_obj_tag(v___x_1227_) == 1)
{
lean_object* v_val_1228_; lean_object* v_name_1229_; lean_object* v_uniq_1230_; lean_object* v_p_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1240_; 
lean_dec_ref(v_e_1222_);
lean_dec_ref(v_00_u03c3s_1219_);
v_val_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_val_1228_);
lean_dec_ref_known(v___x_1227_, 1);
v_name_1229_ = lean_ctor_get(v_val_1228_, 0);
v_uniq_1230_ = lean_ctor_get(v_val_1228_, 1);
v_p_1231_ = lean_ctor_get(v_val_1228_, 2);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_val_1228_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1233_ = v_val_1228_;
v_isShared_1234_ = v_isSharedCheck_1240_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_p_1231_);
lean_inc(v_uniq_1230_);
lean_inc(v_name_1229_);
lean_dec(v_val_1228_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1240_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
v___x_1235_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(v_revLams_1220_, v_revAppArgs_1221_, v_p_1231_);
lean_dec_ref(v_revAppArgs_1221_);
lean_dec_ref(v_revLams_1220_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 2, v___x_1235_);
v___x_1237_ = v___x_1233_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_name_1229_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v_uniq_1230_);
lean_ctor_set(v_reuseFailAlloc_1239_, 2, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
lean_object* v___x_1238_; 
v___x_1238_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_1237_);
return v___x_1238_;
}
}
}
else
{
lean_object* v___x_1241_; 
lean_dec(v___x_1227_);
v___x_1241_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_e_1222_);
if (lean_obj_tag(v___x_1241_) == 1)
{
lean_object* v_val_1242_; lean_object* v_snd_1243_; lean_object* v_snd_1244_; lean_object* v_fst_1245_; lean_object* v_fst_1246_; lean_object* v_snd_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_dec_ref(v_e_1222_);
v_val_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_val_1242_);
lean_dec_ref_known(v___x_1241_, 1);
v_snd_1243_ = lean_ctor_get(v_val_1242_, 1);
v_snd_1244_ = lean_ctor_get(v_snd_1243_, 1);
lean_inc(v_snd_1244_);
v_fst_1245_ = lean_ctor_get(v_val_1242_, 0);
lean_inc(v_fst_1245_);
lean_dec(v_val_1242_);
v_fst_1246_ = lean_ctor_get(v_snd_1244_, 0);
lean_inc(v_fst_1246_);
v_snd_1247_ = lean_ctor_get(v_snd_1244_, 1);
lean_inc(v_snd_1247_);
lean_dec(v_snd_1244_);
lean_inc_ref(v_revAppArgs_1221_);
lean_inc_ref(v_revLams_1220_);
lean_inc_ref_n(v_00_u03c3s_1219_, 2);
v___x_1248_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(v_00_u03c3s_1219_, v_revLams_1220_, v_revAppArgs_1221_, v_fst_1246_);
v___x_1249_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(v_00_u03c3s_1219_, v_revLams_1220_, v_revAppArgs_1221_, v_snd_1247_);
v___x_1250_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_fst_1245_, v_00_u03c3s_1219_, v___x_1248_, v___x_1249_);
return v___x_1250_;
}
else
{
lean_dec(v___x_1241_);
if (lean_obj_tag(v_e_1222_) == 6)
{
lean_object* v_binderName_1251_; lean_object* v_binderType_1252_; lean_object* v_body_1253_; uint8_t v_binderInfo_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; 
v_binderName_1251_ = lean_ctor_get(v_e_1222_, 0);
lean_inc(v_binderName_1251_);
v_binderType_1252_ = lean_ctor_get(v_e_1222_, 1);
lean_inc_ref(v_binderType_1252_);
v_body_1253_ = lean_ctor_get(v_e_1222_, 2);
lean_inc_ref(v_body_1253_);
v_binderInfo_1254_ = lean_ctor_get_uint8(v_e_1222_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1222_, 3);
v___x_1255_ = lean_array_get_size(v_revAppArgs_1221_);
v___x_1256_ = lean_unsigned_to_nat(1u);
v___x_1257_ = lean_nat_sub(v___x_1255_, v___x_1256_);
v___x_1258_ = lean_nat_dec_lt(v___x_1257_, v___x_1255_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
lean_dec(v___x_1257_);
v___x_1259_ = lean_box(v_binderInfo_1254_);
v___x_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1260_, 0, v_binderType_1252_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1261_, 0, v_binderName_1251_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = lean_array_push(v_revLams_1220_, v___x_1261_);
v_revLams_1220_ = v___x_1262_;
v_e_1222_ = v_body_1253_;
goto _start;
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
lean_dec_ref(v_binderType_1252_);
lean_dec(v_binderName_1251_);
v___x_1264_ = lean_array_fget(v_revAppArgs_1221_, v___x_1257_);
lean_dec(v___x_1257_);
v___x_1265_ = lean_array_pop(v_revAppArgs_1221_);
v___x_1266_ = lean_expr_instantiate1(v_body_1253_, v___x_1264_);
lean_dec(v___x_1264_);
lean_dec_ref(v_body_1253_);
v_revAppArgs_1221_ = v___x_1265_;
v_e_1222_ = v___x_1266_;
goto _start;
}
}
else
{
if (lean_obj_tag(v_e_1222_) == 5)
{
lean_object* v_fn_1268_; lean_object* v_arg_1269_; lean_object* v___x_1270_; 
v_fn_1268_ = lean_ctor_get(v_e_1222_, 0);
lean_inc_ref(v_fn_1268_);
v_arg_1269_ = lean_ctor_get(v_e_1222_, 1);
lean_inc_ref(v_arg_1269_);
lean_dec_ref_known(v_e_1222_, 2);
v___x_1270_ = lean_array_push(v_revAppArgs_1221_, v_arg_1269_);
v_revAppArgs_1221_ = v___x_1270_;
v_e_1222_ = v_fn_1268_;
goto _start;
}
else
{
lean_object* v___x_1272_; 
lean_dec_ref(v_00_u03c3s_1219_);
v___x_1272_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(v_revLams_1220_, v_revAppArgs_1221_, v_e_1222_);
lean_dec_ref(v_revAppArgs_1221_);
lean_dec_ref(v_revLams_1220_);
return v___x_1272_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(lean_object* v_00_u03c3s_1275_, lean_object* v_hyps_1276_){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps___closed__0));
v___x_1278_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(v_00_u03c3s_1275_, v___x_1277_, v___x_1277_, v_hyps_1276_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames(lean_object* v_00_u03c3s_x27_1279_, lean_object* v_e_1280_, lean_object* v_args_1281_){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = l_Lean_mkAppN(v_e_1280_, v_args_1281_);
v___x_1283_ = l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(v_00_u03c3s_x27_1279_, v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames___boxed(lean_object* v_00_u03c3s_x27_1284_, lean_object* v_e_1285_, lean_object* v_args_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames(v_00_u03c3s_x27_1284_, v_e_1285_, v_args_1286_);
lean_dec_ref(v_args_1286_);
return v_res_1287_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__0));
v___x_1290_ = l_Lean_stringToMessageData(v___x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(lean_object* v_upperBound_1291_, lean_object* v_a_1292_, lean_object* v_b_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v_a_1300_; uint8_t v___x_1304_; 
v___x_1304_ = lean_nat_dec_lt(v_a_1292_, v_upperBound_1291_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1305_; 
lean_dec(v_a_1292_);
v___x_1305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1305_, 0, v_b_1293_);
return v___x_1305_;
}
else
{
lean_object* v___x_1306_; 
lean_inc_ref(v_b_1293_);
v___x_1306_ = l_Lean_Meta_whnfR(v_b_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; uint8_t v___x_1310_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1306_, 1);
v___x_1308_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1));
v___x_1309_ = lean_unsigned_to_nat(3u);
v___x_1310_ = l_Lean_Expr_isAppOfArity(v_a_1307_, v___x_1308_, v___x_1309_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
lean_dec(v_a_1307_);
v___x_1311_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1);
lean_inc_ref(v_b_1293_);
v___x_1312_ = l_Lean_MessageData_ofExpr(v_b_1293_);
v___x_1313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1311_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v___x_1313_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_dec_ref_known(v___x_1314_, 1);
v_a_1300_ = v_b_1293_;
goto v___jp_1299_;
}
else
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1322_; 
lean_dec_ref(v_b_1293_);
lean_dec(v_a_1292_);
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1317_ = v___x_1314_;
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1314_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_a_1315_);
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
else
{
lean_object* v___x_1323_; 
lean_dec_ref(v_b_1293_);
v___x_1323_ = l_Lean_Expr_appArg_x21(v_a_1307_);
lean_dec(v_a_1307_);
v_a_1300_ = v___x_1323_;
goto v___jp_1299_;
}
}
else
{
lean_dec_ref(v_b_1293_);
lean_dec(v_a_1292_);
return v___x_1306_;
}
}
v___jp_1299_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = lean_unsigned_to_nat(1u);
v___x_1302_ = lean_nat_add(v_a_1292_, v___x_1301_);
lean_dec(v_a_1292_);
v_a_1292_ = v___x_1302_;
v_b_1293_ = v_a_1300_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___boxed(lean_object* v_upperBound_1324_, lean_object* v_a_1325_, lean_object* v_b_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(v_upperBound_1324_, v_a_1325_, v_b_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v_upperBound_1324_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_dropStateList(lean_object* v_00_u03c3s_1333_, lean_object* v_n_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_){
_start:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(v_n_1334_, v___x_1340_, v_00_u03c3s_1333_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_dropStateList___boxed(lean_object* v_00_u03c3s_1342_, lean_object* v_n_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_Lean_Elab_Tactic_Do_ProofMode_dropStateList(v_00_u03c3s_1342_, v_n_1343_, v_a_1344_, v_a_1345_, v_a_1346_, v_a_1347_);
lean_dec(v_a_1347_);
lean_dec_ref(v_a_1346_);
lean_dec(v_a_1345_);
lean_dec_ref(v_a_1344_);
lean_dec(v_n_1343_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0(lean_object* v_upperBound_1350_, lean_object* v_inst_1351_, lean_object* v_R_1352_, lean_object* v_a_1353_, lean_object* v_b_1354_, lean_object* v_c_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(v_upperBound_1350_, v_a_1353_, v_b_1354_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___boxed(lean_object* v_upperBound_1362_, lean_object* v_inst_1363_, lean_object* v_R_1364_, lean_object* v_a_1365_, lean_object* v_b_1366_, lean_object* v_c_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0(v_upperBound_1362_, v_inst_1363_, v_R_1364_, v_a_1365_, v_b_1366_, v_c_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v_upperBound_1362_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(lean_object* v_H_1374_, lean_object* v_a_1375_){
_start:
{
lean_object* v_fst_1377_; lean_object* v_snd_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; 
v_fst_1377_ = lean_ctor_get(v_a_1375_, 0);
v_snd_1378_ = lean_ctor_get(v_a_1375_, 1);
v___x_1379_ = lean_array_get_size(v_snd_1378_);
v___x_1380_ = lean_unsigned_to_nat(0u);
v___x_1381_ = lean_nat_dec_eq(v___x_1379_, v___x_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; 
lean_inc_ref(v_H_1374_);
v___x_1382_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_H_1374_);
if (lean_obj_tag(v___x_1382_) == 1)
{
lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1390_; 
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1390_ == 0)
{
lean_object* v_unused_1391_; 
v_unused_1391_ = lean_ctor_get(v___x_1382_, 0);
lean_dec(v_unused_1391_);
v___x_1384_ = v___x_1382_;
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
else
{
lean_dec(v___x_1382_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v_H_1374_);
lean_ctor_set(v___x_1386_, 1, v_a_1375_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1386_);
v___x_1388_ = v___x_1384_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
else
{
lean_object* v___x_1392_; 
lean_dec(v___x_1382_);
lean_inc_ref(v_H_1374_);
v___x_1392_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_H_1374_);
if (lean_obj_tag(v___x_1392_) == 1)
{
lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1441_; 
lean_inc(v_snd_1378_);
lean_inc(v_fst_1377_);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_a_1375_);
if (v_isSharedCheck_1441_ == 0)
{
lean_object* v_unused_1442_; lean_object* v_unused_1443_; 
v_unused_1442_ = lean_ctor_get(v_a_1375_, 1);
lean_dec(v_unused_1442_);
v_unused_1443_ = lean_ctor_get(v_a_1375_, 0);
lean_dec(v_unused_1443_);
v___x_1394_ = v_a_1375_;
v_isShared_1395_ = v_isSharedCheck_1441_;
goto v_resetjp_1393_;
}
else
{
lean_dec(v_a_1375_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1441_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v_val_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1440_; 
v_val_1396_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1398_ = v___x_1392_;
v_isShared_1399_ = v_isSharedCheck_1440_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_val_1396_);
lean_dec(v___x_1392_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1440_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v_name_1400_; lean_object* v_uniq_1401_; lean_object* v_p_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1439_; 
v_name_1400_ = lean_ctor_get(v_val_1396_, 0);
v_uniq_1401_ = lean_ctor_get(v_val_1396_, 1);
v_p_1402_ = lean_ctor_get(v_val_1396_, 2);
v_isSharedCheck_1439_ = !lean_is_exclusive(v_val_1396_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1404_ = v_val_1396_;
v_isShared_1405_ = v_isSharedCheck_1439_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_p_1402_);
lean_inc(v_uniq_1401_);
lean_inc(v_name_1400_);
lean_dec(v_val_1396_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1439_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v_idents_1407_; uint8_t v___x_1437_; 
v___x_1437_ = l_Lean_Name_hasMacroScopes(v_name_1400_);
if (v___x_1437_ == 0)
{
uint8_t v___x_1438_; 
v___x_1438_ = l_Lean_NameSet_contains(v_fst_1377_, v_name_1400_);
if (v___x_1438_ == 0)
{
lean_del_object(v___x_1404_);
lean_dec_ref(v_p_1402_);
lean_dec(v_uniq_1401_);
v_idents_1407_ = v_snd_1378_;
goto v___jp_1406_;
}
else
{
goto v___jp_1416_;
}
}
else
{
goto v___jp_1416_;
}
v___jp_1406_:
{
lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1408_ = l_Lean_NameSet_insert(v_fst_1377_, v_name_1400_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 1, v_idents_1407_);
lean_ctor_set(v___x_1394_, 0, v___x_1408_);
v___x_1410_ = v___x_1394_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1408_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_idents_1407_);
v___x_1410_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v_H_1374_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set_tag(v___x_1398_, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1411_);
v___x_1413_ = v___x_1398_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
v___jp_1416_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; uint8_t v___x_1422_; 
v___x_1417_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2));
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_unsigned_to_nat(1u);
v___x_1420_ = lean_nat_sub(v___x_1379_, v___x_1419_);
v___x_1421_ = lean_array_get_borrowed(v___x_1418_, v_snd_1378_, v___x_1420_);
lean_dec(v___x_1420_);
lean_inc(v___x_1421_);
v___x_1422_ = l_Lean_Syntax_isOfKind(v___x_1421_, v___x_1417_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; 
lean_del_object(v___x_1404_);
lean_dec_ref(v_p_1402_);
lean_dec(v_uniq_1401_);
v___x_1423_ = lean_array_pop(v_snd_1378_);
v_idents_1407_ = v___x_1423_;
goto v___jp_1406_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1424_ = l_Lean_Syntax_getArg(v___x_1421_, v___x_1380_);
v___x_1425_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6));
lean_inc(v___x_1424_);
v___x_1426_ = l_Lean_Syntax_isOfKind(v___x_1424_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; 
lean_dec(v___x_1424_);
lean_del_object(v___x_1404_);
lean_dec_ref(v_p_1402_);
lean_dec(v_uniq_1401_);
v___x_1427_ = lean_array_pop(v_snd_1378_);
v_idents_1407_ = v___x_1427_;
goto v___jp_1406_;
}
else
{
lean_object* v___x_1428_; lean_object* v___x_1430_; 
lean_dec(v_name_1400_);
lean_del_object(v___x_1398_);
lean_del_object(v___x_1394_);
lean_dec_ref(v_H_1374_);
v___x_1428_ = l_Lean_TSyntax_getId(v___x_1424_);
lean_dec(v___x_1424_);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v___x_1428_);
v___x_1430_ = v___x_1404_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1428_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v_uniq_1401_);
lean_ctor_set(v_reuseFailAlloc_1436_, 2, v_p_1402_);
v___x_1430_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1431_ = lean_array_pop(v_snd_1378_);
v___x_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1432_, 0, v_fst_1377_);
lean_ctor_set(v___x_1432_, 1, v___x_1431_);
v___x_1433_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_1430_);
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
lean_ctor_set(v___x_1434_, 1, v___x_1432_);
v___x_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1434_);
return v___x_1435_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1444_; 
lean_dec(v___x_1392_);
v___x_1444_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_H_1374_);
if (lean_obj_tag(v___x_1444_) == 1)
{
lean_object* v_val_1445_; lean_object* v_snd_1446_; lean_object* v_snd_1447_; lean_object* v_fst_1448_; lean_object* v_fst_1449_; lean_object* v_fst_1450_; lean_object* v_snd_1451_; lean_object* v___x_1452_; 
lean_dec_ref(v_H_1374_);
v_val_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_val_1445_);
lean_dec_ref_known(v___x_1444_, 1);
v_snd_1446_ = lean_ctor_get(v_val_1445_, 1);
lean_inc(v_snd_1446_);
v_snd_1447_ = lean_ctor_get(v_snd_1446_, 1);
lean_inc(v_snd_1447_);
v_fst_1448_ = lean_ctor_get(v_val_1445_, 0);
lean_inc(v_fst_1448_);
lean_dec(v_val_1445_);
v_fst_1449_ = lean_ctor_get(v_snd_1446_, 0);
lean_inc(v_fst_1449_);
lean_dec(v_snd_1446_);
v_fst_1450_ = lean_ctor_get(v_snd_1447_, 0);
lean_inc(v_fst_1450_);
v_snd_1451_ = lean_ctor_get(v_snd_1447_, 1);
lean_inc(v_snd_1451_);
lean_dec(v_snd_1447_);
v___x_1452_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_snd_1451_, v_a_1375_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v_fst_1454_; lean_object* v_snd_1455_; lean_object* v___x_1456_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v_fst_1454_ = lean_ctor_get(v_a_1453_, 0);
lean_inc(v_fst_1454_);
v_snd_1455_ = lean_ctor_get(v_a_1453_, 1);
lean_inc(v_snd_1455_);
lean_dec(v_a_1453_);
v___x_1456_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_fst_1450_, v_snd_1455_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1474_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1459_ = v___x_1456_;
v_isShared_1460_ = v_isSharedCheck_1474_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1456_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1474_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v_fst_1461_; lean_object* v_snd_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1473_; 
v_fst_1461_ = lean_ctor_get(v_a_1457_, 0);
v_snd_1462_ = lean_ctor_get(v_a_1457_, 1);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_a_1457_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1464_ = v_a_1457_;
v_isShared_1465_ = v_isSharedCheck_1473_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_snd_1462_);
lean_inc(v_fst_1461_);
lean_dec(v_a_1457_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1473_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1468_; 
v___x_1466_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_fst_1448_, v_fst_1449_, v_fst_1461_, v_fst_1454_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1466_);
v___x_1468_ = v___x_1464_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v___x_1466_);
lean_ctor_set(v_reuseFailAlloc_1472_, 1, v_snd_1462_);
v___x_1468_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
lean_object* v___x_1470_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v___x_1468_);
v___x_1470_ = v___x_1459_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1468_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
else
{
lean_dec(v_fst_1454_);
lean_dec(v_fst_1449_);
lean_dec(v_fst_1448_);
return v___x_1456_;
}
}
else
{
lean_dec(v_fst_1450_);
lean_dec(v_fst_1449_);
lean_dec(v_fst_1448_);
return v___x_1452_;
}
}
else
{
lean_object* v___x_1475_; lean_object* v___x_1476_; 
lean_dec(v___x_1444_);
v___x_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1475_, 0, v_H_1374_);
lean_ctor_set(v___x_1475_, 1, v_a_1375_);
v___x_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1475_);
return v___x_1476_;
}
}
}
}
else
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1477_, 0, v_H_1374_);
lean_ctor_set(v___x_1477_, 1, v_a_1375_);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg___boxed(lean_object* v_H_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_H_1479_, v_a_1480_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go(lean_object* v_H_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_H_1483_, v_a_1484_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___boxed(lean_object* v_H_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go(v_H_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_);
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_a_1494_);
lean_dec_ref(v_a_1493_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_spec__0(lean_object* v_a_1499_, lean_object* v_a_1500_){
_start:
{
if (lean_obj_tag(v_a_1499_) == 0)
{
lean_object* v___x_1501_; 
v___x_1501_ = l_List_reverse___redArg(v_a_1500_);
return v___x_1501_;
}
else
{
lean_object* v_head_1502_; lean_object* v_tail_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1512_; 
v_head_1502_ = lean_ctor_get(v_a_1499_, 0);
v_tail_1503_ = lean_ctor_get(v_a_1499_, 1);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_a_1499_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1505_ = v_a_1499_;
v_isShared_1506_ = v_isSharedCheck_1512_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_tail_1503_);
lean_inc(v_head_1502_);
lean_dec(v_a_1499_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1512_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1507_ = l_Lean_MessageData_ofSyntax(v_head_1502_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 1, v_a_1500_);
lean_ctor_set(v___x_1505_, 0, v___x_1507_);
v___x_1509_ = v___x_1505_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1507_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v_a_1500_);
v___x_1509_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
v_a_1499_ = v_tail_1503_;
v_a_1500_ = v___x_1509_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1(void){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__0));
v___x_1515_ = l_Lean_stringToMessageData(v___x_1514_);
return v___x_1515_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__2));
v___x_1518_ = l_Lean_stringToMessageData(v___x_1517_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps(lean_object* v_goal_1519_, lean_object* v_idents_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_){
_start:
{
lean_object* v_u_1526_; lean_object* v_00_u03c3s_1527_; lean_object* v_hyps_1528_; lean_object* v_target_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_u_1526_ = lean_ctor_get(v_goal_1519_, 0);
v_00_u03c3s_1527_ = lean_ctor_get(v_goal_1519_, 1);
v_hyps_1528_ = lean_ctor_get(v_goal_1519_, 2);
v_target_1529_ = lean_ctor_get(v_goal_1519_, 3);
v___x_1530_ = l_Lean_NameSet_empty;
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
lean_ctor_set(v___x_1531_, 1, v_idents_1520_);
lean_inc_ref(v_hyps_1528_);
v___x_1532_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_hyps_1528_, v___x_1531_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1581_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1535_ = v___x_1532_;
v_isShared_1536_ = v_isSharedCheck_1581_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1532_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1581_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v_fst_1537_; lean_object* v_snd_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1580_; 
v_fst_1537_ = lean_ctor_get(v_a_1533_, 0);
v_snd_1538_ = lean_ctor_get(v_a_1533_, 1);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_a_1533_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1540_ = v_a_1533_;
v_isShared_1541_ = v_isSharedCheck_1580_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_snd_1538_);
lean_inc(v_fst_1537_);
lean_dec(v_a_1533_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1580_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v_snd_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1578_; 
v_snd_1547_ = lean_ctor_get(v_snd_1538_, 1);
v_isSharedCheck_1578_ = !lean_is_exclusive(v_snd_1538_);
if (v_isSharedCheck_1578_ == 0)
{
lean_object* v_unused_1579_; 
v_unused_1579_ = lean_ctor_get(v_snd_1538_, 0);
lean_dec(v_unused_1579_);
v___x_1549_ = v_snd_1538_;
v_isShared_1550_ = v_isSharedCheck_1578_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_snd_1547_);
lean_dec(v_snd_1538_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1578_;
goto v_resetjp_1548_;
}
v___jp_1542_:
{
lean_object* v___x_1543_; lean_object* v___x_1545_; 
v___x_1543_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1543_, 0, v_u_1526_);
lean_ctor_set(v___x_1543_, 1, v_00_u03c3s_1527_);
lean_ctor_set(v___x_1543_, 2, v_fst_1537_);
lean_ctor_set(v___x_1543_, 3, v_target_1529_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v___x_1543_);
v___x_1545_ = v___x_1535_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1543_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; uint8_t v___x_1553_; 
v___x_1551_ = lean_array_get_size(v_snd_1547_);
v___x_1552_ = lean_unsigned_to_nat(0u);
v___x_1553_ = lean_nat_dec_eq(v___x_1551_, v___x_1552_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1560_; 
lean_dec(v_fst_1537_);
lean_del_object(v___x_1535_);
v___x_1554_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1);
v___x_1555_ = lean_array_to_list(v_snd_1547_);
v___x_1556_ = lean_box(0);
v___x_1557_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_spec__0(v___x_1555_, v___x_1556_);
v___x_1558_ = l_Lean_MessageData_ofList(v___x_1557_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set_tag(v___x_1549_, 7);
lean_ctor_set(v___x_1549_, 1, v___x_1558_);
lean_ctor_set(v___x_1549_, 0, v___x_1554_);
v___x_1560_ = v___x_1549_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v___x_1554_);
lean_ctor_set(v_reuseFailAlloc_1577_, 1, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1561_; lean_object* v___x_1563_; 
v___x_1561_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3);
if (v_isShared_1541_ == 0)
{
lean_ctor_set_tag(v___x_1540_, 7);
lean_ctor_set(v___x_1540_, 1, v___x_1561_);
lean_ctor_set(v___x_1540_, 0, v___x_1560_);
v___x_1563_ = v___x_1540_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1560_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v___x_1561_);
v___x_1563_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
v___x_1564_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_1519_);
v___x_1565_ = l_Lean_MessageData_ofExpr(v___x_1564_);
v___x_1566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1563_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v___x_1566_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_);
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1567_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1567_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
}
else
{
lean_inc_ref(v_target_1529_);
lean_inc_ref(v_00_u03c3s_1527_);
lean_inc(v_u_1526_);
lean_del_object(v___x_1549_);
lean_dec(v_snd_1547_);
lean_del_object(v___x_1540_);
lean_dec_ref(v_goal_1519_);
goto v___jp_1542_;
}
}
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v_goal_1519_);
v_a_1582_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1532_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1532_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___boxed(lean_object* v_goal_1590_, lean_object* v_idents_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps(v_goal_1590_, v_idents_1591_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_);
lean_dec(v_a_1595_);
lean_dec_ref(v_a_1594_);
lean_dec(v_a_1593_);
lean_dec_ref(v_a_1592_);
return v_res_1597_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = lean_box(0);
v___x_1599_ = l_unsafeCast___redArg(v___x_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0(lean_object* v_stx_1600_, lean_object* v_lctx_1601_, lean_object* v_expectedType_x3f_1602_, lean_object* v_expr_1603_, uint8_t v_isBinder_1604_, lean_object* v_x_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1611_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1611_);
lean_ctor_set(v___x_1612_, 1, v_stx_1600_);
v___x_1613_ = 0;
v___x_1614_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v_lctx_1601_);
lean_ctor_set(v___x_1614_, 2, v_expectedType_x3f_1602_);
lean_ctor_set(v___x_1614_, 3, v_expr_1603_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*4, v_isBinder_1604_);
lean_ctor_set_uint8(v___x_1614_, sizeof(void*)*4 + 1, v___x_1613_);
v___x_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
v___x_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
v___x_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___boxed(lean_object* v_stx_1618_, lean_object* v_lctx_1619_, lean_object* v_expectedType_x3f_1620_, lean_object* v_expr_1621_, lean_object* v_isBinder_1622_, lean_object* v_x_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
uint8_t v_isBinder_boxed_1629_; lean_object* v_res_1630_; 
v_isBinder_boxed_1629_ = lean_unbox(v_isBinder_1622_);
v_res_1630_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0(v_stx_1618_, v_lctx_1619_, v_expectedType_x3f_1620_, v_expr_1621_, v_isBinder_boxed_1629_, v_x_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1(lean_object* v___x_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1631_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1___boxed(lean_object* v___x_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1(v___x_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2(lean_object* v___x_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v___x_1651_; 
v___x_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1645_);
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2___boxed(lean_object* v___x_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2(v___x_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
return v_res_1658_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1659_ = lean_unsigned_to_nat(32u);
v___x_1660_ = lean_mk_empty_array_with_capacity(v___x_1659_);
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
return v___x_1661_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1662_ = ((size_t)5ULL);
v___x_1663_ = lean_unsigned_to_nat(0u);
v___x_1664_ = lean_unsigned_to_nat(32u);
v___x_1665_ = lean_mk_empty_array_with_capacity(v___x_1664_);
v___x_1666_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0);
v___x_1667_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1667_, 0, v___x_1666_);
lean_ctor_set(v___x_1667_, 1, v___x_1665_);
lean_ctor_set(v___x_1667_, 2, v___x_1663_);
lean_ctor_set(v___x_1667_, 3, v___x_1663_);
lean_ctor_set_usize(v___x_1667_, 4, v___x_1662_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; lean_object* v_infoState_1671_; lean_object* v_trees_1672_; lean_object* v___x_1673_; lean_object* v_infoState_1674_; lean_object* v_env_1675_; lean_object* v_nextMacroScope_1676_; lean_object* v_ngen_1677_; lean_object* v_auxDeclNGen_1678_; lean_object* v_traceState_1679_; lean_object* v_cache_1680_; lean_object* v_messages_1681_; lean_object* v_snapshotTasks_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1703_; 
v___x_1670_ = lean_st_ref_get(v___y_1668_);
v_infoState_1671_ = lean_ctor_get(v___x_1670_, 7);
lean_inc_ref(v_infoState_1671_);
lean_dec(v___x_1670_);
v_trees_1672_ = lean_ctor_get(v_infoState_1671_, 2);
lean_inc_ref(v_trees_1672_);
lean_dec_ref(v_infoState_1671_);
v___x_1673_ = lean_st_ref_take(v___y_1668_);
v_infoState_1674_ = lean_ctor_get(v___x_1673_, 7);
v_env_1675_ = lean_ctor_get(v___x_1673_, 0);
v_nextMacroScope_1676_ = lean_ctor_get(v___x_1673_, 1);
v_ngen_1677_ = lean_ctor_get(v___x_1673_, 2);
v_auxDeclNGen_1678_ = lean_ctor_get(v___x_1673_, 3);
v_traceState_1679_ = lean_ctor_get(v___x_1673_, 4);
v_cache_1680_ = lean_ctor_get(v___x_1673_, 5);
v_messages_1681_ = lean_ctor_get(v___x_1673_, 6);
v_snapshotTasks_1682_ = lean_ctor_get(v___x_1673_, 8);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1684_ = v___x_1673_;
v_isShared_1685_ = v_isSharedCheck_1703_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_snapshotTasks_1682_);
lean_inc(v_infoState_1674_);
lean_inc(v_messages_1681_);
lean_inc(v_cache_1680_);
lean_inc(v_traceState_1679_);
lean_inc(v_auxDeclNGen_1678_);
lean_inc(v_ngen_1677_);
lean_inc(v_nextMacroScope_1676_);
lean_inc(v_env_1675_);
lean_dec(v___x_1673_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1703_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
uint8_t v_enabled_1686_; lean_object* v_assignment_1687_; lean_object* v_lazyAssignment_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1701_; 
v_enabled_1686_ = lean_ctor_get_uint8(v_infoState_1674_, sizeof(void*)*3);
v_assignment_1687_ = lean_ctor_get(v_infoState_1674_, 0);
v_lazyAssignment_1688_ = lean_ctor_get(v_infoState_1674_, 1);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_infoState_1674_);
if (v_isSharedCheck_1701_ == 0)
{
lean_object* v_unused_1702_; 
v_unused_1702_ = lean_ctor_get(v_infoState_1674_, 2);
lean_dec(v_unused_1702_);
v___x_1690_ = v_infoState_1674_;
v_isShared_1691_ = v_isSharedCheck_1701_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_lazyAssignment_1688_);
lean_inc(v_assignment_1687_);
lean_dec(v_infoState_1674_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1701_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1692_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1);
if (v_isShared_1691_ == 0)
{
lean_ctor_set(v___x_1690_, 2, v___x_1692_);
v___x_1694_ = v___x_1690_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_assignment_1687_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_lazyAssignment_1688_);
lean_ctor_set(v_reuseFailAlloc_1700_, 2, v___x_1692_);
lean_ctor_set_uint8(v_reuseFailAlloc_1700_, sizeof(void*)*3, v_enabled_1686_);
v___x_1694_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
lean_object* v___x_1696_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 7, v___x_1694_);
v___x_1696_ = v___x_1684_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_env_1675_);
lean_ctor_set(v_reuseFailAlloc_1699_, 1, v_nextMacroScope_1676_);
lean_ctor_set(v_reuseFailAlloc_1699_, 2, v_ngen_1677_);
lean_ctor_set(v_reuseFailAlloc_1699_, 3, v_auxDeclNGen_1678_);
lean_ctor_set(v_reuseFailAlloc_1699_, 4, v_traceState_1679_);
lean_ctor_set(v_reuseFailAlloc_1699_, 5, v_cache_1680_);
lean_ctor_set(v_reuseFailAlloc_1699_, 6, v_messages_1681_);
lean_ctor_set(v_reuseFailAlloc_1699_, 7, v___x_1694_);
lean_ctor_set(v_reuseFailAlloc_1699_, 8, v_snapshotTasks_1682_);
v___x_1696_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1697_ = lean_st_ref_put(v___y_1668_, v___x_1696_);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_trees_1672_);
return v___x_1698_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___boxed(lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(v___y_1704_);
lean_dec(v___y_1704_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(lean_object* v_mkInfoOnError_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___f_1712_, lean_object* v_mkInfo_1713_, lean_object* v_a_x3f_1714_){
_start:
{
if (lean_obj_tag(v_a_x3f_1714_) == 0)
{
lean_object* v___x_1716_; 
lean_dec_ref(v_mkInfo_1713_);
lean_inc(v___y_1711_);
lean_inc_ref(v___y_1710_);
lean_inc(v___y_1709_);
lean_inc_ref(v___y_1708_);
v___x_1716_ = lean_apply_5(v_mkInfoOnError_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, lean_box(0));
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc(v_a_1717_);
lean_dec_ref_known(v___x_1716_, 1);
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_a_1717_);
lean_inc(v___y_1711_);
lean_inc_ref(v___y_1710_);
lean_inc(v___y_1709_);
lean_inc_ref(v___y_1708_);
v___x_1719_ = lean_apply_6(v___f_1712_, v___x_1718_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, lean_box(0));
return v___x_1719_;
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
lean_dec_ref(v___f_1712_);
v_a_1720_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1722_ = v___x_1716_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___x_1716_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
}
else
{
lean_object* v_val_1728_; lean_object* v___x_1729_; 
lean_dec_ref(v_mkInfoOnError_1707_);
v_val_1728_ = lean_ctor_get(v_a_x3f_1714_, 0);
lean_inc(v_val_1728_);
lean_dec_ref_known(v_a_x3f_1714_, 1);
lean_inc(v___y_1711_);
lean_inc_ref(v___y_1710_);
lean_inc(v___y_1709_);
lean_inc_ref(v___y_1708_);
v___x_1729_ = lean_apply_6(v_mkInfo_1713_, v_val_1728_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, lean_box(0));
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; lean_object* v___x_1731_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1729_, 1);
lean_inc(v___y_1711_);
lean_inc_ref(v___y_1710_);
lean_inc(v___y_1709_);
lean_inc_ref(v___y_1708_);
v___x_1731_ = lean_apply_6(v___f_1712_, v_a_1730_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, lean_box(0));
return v___x_1731_;
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
lean_dec_ref(v___f_1712_);
v_a_1732_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v___x_1729_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1729_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1___boxed(lean_object* v_mkInfoOnError_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___f_1745_, lean_object* v_mkInfo_1746_, lean_object* v_a_x3f_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(v_mkInfoOnError_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___f_1745_, v_mkInfo_1746_, v_a_x3f_1747_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0(lean_object* v_a_1750_, lean_object* v_info_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; lean_object* v_infoState_1758_; lean_object* v_env_1759_; lean_object* v_nextMacroScope_1760_; lean_object* v_ngen_1761_; lean_object* v_auxDeclNGen_1762_; lean_object* v_traceState_1763_; lean_object* v_cache_1764_; lean_object* v_messages_1765_; lean_object* v_snapshotTasks_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1804_; 
v___x_1757_ = lean_st_ref_take(v___y_1755_);
v_infoState_1758_ = lean_ctor_get(v___x_1757_, 7);
v_env_1759_ = lean_ctor_get(v___x_1757_, 0);
v_nextMacroScope_1760_ = lean_ctor_get(v___x_1757_, 1);
v_ngen_1761_ = lean_ctor_get(v___x_1757_, 2);
v_auxDeclNGen_1762_ = lean_ctor_get(v___x_1757_, 3);
v_traceState_1763_ = lean_ctor_get(v___x_1757_, 4);
v_cache_1764_ = lean_ctor_get(v___x_1757_, 5);
v_messages_1765_ = lean_ctor_get(v___x_1757_, 6);
v_snapshotTasks_1766_ = lean_ctor_get(v___x_1757_, 8);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1768_ = v___x_1757_;
v_isShared_1769_ = v_isSharedCheck_1804_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_snapshotTasks_1766_);
lean_inc(v_infoState_1758_);
lean_inc(v_messages_1765_);
lean_inc(v_cache_1764_);
lean_inc(v_traceState_1763_);
lean_inc(v_auxDeclNGen_1762_);
lean_inc(v_ngen_1761_);
lean_inc(v_nextMacroScope_1760_);
lean_inc(v_env_1759_);
lean_dec(v___x_1757_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1804_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
uint8_t v_enabled_1770_; lean_object* v_assignment_1771_; lean_object* v_lazyAssignment_1772_; lean_object* v_trees_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1803_; 
v_enabled_1770_ = lean_ctor_get_uint8(v_infoState_1758_, sizeof(void*)*3);
v_assignment_1771_ = lean_ctor_get(v_infoState_1758_, 0);
v_lazyAssignment_1772_ = lean_ctor_get(v_infoState_1758_, 1);
v_trees_1773_ = lean_ctor_get(v_infoState_1758_, 2);
v_isSharedCheck_1803_ = !lean_is_exclusive(v_infoState_1758_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1775_ = v_infoState_1758_;
v_isShared_1776_ = v_isSharedCheck_1803_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_trees_1773_);
lean_inc(v_lazyAssignment_1772_);
lean_inc(v_assignment_1771_);
lean_dec(v_infoState_1758_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1803_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1777_; lean_object* v___y_1779_; 
v___x_1777_ = lean_box(0);
if (lean_obj_tag(v_info_1751_) == 0)
{
lean_object* v_val_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1789_; 
v_val_1785_ = lean_ctor_get(v_info_1751_, 0);
lean_inc(v_val_1785_);
lean_dec_ref_known(v_info_1751_, 1);
v___x_1786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1786_, 0, v_val_1785_);
lean_ctor_set(v___x_1786_, 1, v_trees_1773_);
v___x_1787_ = l_Lean_PersistentArray_push___redArg(v_a_1750_, v___x_1786_);
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 2, v___x_1787_);
v___x_1789_ = v___x_1775_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_assignment_1771_);
lean_ctor_set(v_reuseFailAlloc_1790_, 1, v_lazyAssignment_1772_);
lean_ctor_set(v_reuseFailAlloc_1790_, 2, v___x_1787_);
lean_ctor_set_uint8(v_reuseFailAlloc_1790_, sizeof(void*)*3, v_enabled_1770_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
v___y_1779_ = v___x_1789_;
goto v___jp_1778_;
}
}
else
{
lean_object* v_val_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1802_; 
lean_dec_ref(v_trees_1773_);
v_val_1791_ = lean_ctor_get(v_info_1751_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v_info_1751_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1793_ = v_info_1751_;
v_isShared_1794_ = v_isSharedCheck_1802_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_val_1791_);
lean_dec(v_info_1751_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1802_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
lean_ctor_set_tag(v___x_1793_, 2);
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_val_1791_);
v___x_1796_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1797_ = l_Lean_PersistentArray_push___redArg(v_a_1750_, v___x_1796_);
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 2, v___x_1797_);
v___x_1799_ = v___x_1775_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_assignment_1771_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v_lazyAssignment_1772_);
lean_ctor_set(v_reuseFailAlloc_1800_, 2, v___x_1797_);
lean_ctor_set_uint8(v_reuseFailAlloc_1800_, sizeof(void*)*3, v_enabled_1770_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
v___y_1779_ = v___x_1799_;
goto v___jp_1778_;
}
}
}
}
v___jp_1778_:
{
lean_object* v___x_1781_; 
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 7, v___y_1779_);
v___x_1781_ = v___x_1768_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_env_1759_);
lean_ctor_set(v_reuseFailAlloc_1784_, 1, v_nextMacroScope_1760_);
lean_ctor_set(v_reuseFailAlloc_1784_, 2, v_ngen_1761_);
lean_ctor_set(v_reuseFailAlloc_1784_, 3, v_auxDeclNGen_1762_);
lean_ctor_set(v_reuseFailAlloc_1784_, 4, v_traceState_1763_);
lean_ctor_set(v_reuseFailAlloc_1784_, 5, v_cache_1764_);
lean_ctor_set(v_reuseFailAlloc_1784_, 6, v_messages_1765_);
lean_ctor_set(v_reuseFailAlloc_1784_, 7, v___y_1779_);
lean_ctor_set(v_reuseFailAlloc_1784_, 8, v_snapshotTasks_1766_);
v___x_1781_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1782_ = lean_st_ref_put(v___y_1755_, v___x_1781_);
v___x_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1777_);
return v___x_1783_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0___boxed(lean_object* v_a_1805_, lean_object* v_info_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0(v_a_1805_, v_info_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(lean_object* v_x_1813_, lean_object* v_mkInfo_1814_, lean_object* v_mkInfoOnError_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v___x_1821_; lean_object* v_infoState_1822_; uint8_t v_enabled_1823_; 
v___x_1821_ = lean_st_ref_get(v___y_1819_);
v_infoState_1822_ = lean_ctor_get(v___x_1821_, 7);
lean_inc_ref(v_infoState_1822_);
lean_dec(v___x_1821_);
v_enabled_1823_ = lean_ctor_get_uint8(v_infoState_1822_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1822_);
if (v_enabled_1823_ == 0)
{
lean_object* v___x_1824_; 
lean_dec_ref(v_mkInfoOnError_1815_);
lean_dec_ref(v_mkInfo_1814_);
lean_inc(v___y_1819_);
lean_inc_ref(v___y_1818_);
lean_inc(v___y_1817_);
lean_inc_ref(v___y_1816_);
v___x_1824_ = lean_apply_5(v_x_1813_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, lean_box(0));
return v___x_1824_;
}
else
{
lean_object* v___x_1825_; lean_object* v_a_1826_; lean_object* v___f_1827_; lean_object* v_r_1828_; 
v___x_1825_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(v___y_1819_);
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_a_1826_);
lean_dec_ref(v___x_1825_);
v___f_1827_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1827_, 0, v_a_1826_);
lean_inc(v___y_1819_);
lean_inc_ref(v___y_1818_);
lean_inc(v___y_1817_);
lean_inc_ref(v___y_1816_);
v_r_1828_ = lean_apply_5(v_x_1813_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, lean_box(0));
if (lean_obj_tag(v_r_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1853_; 
v_a_1829_ = lean_ctor_get(v_r_1828_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v_r_1828_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1831_ = v_r_1828_;
v_isShared_1832_ = v_isSharedCheck_1853_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v_r_1828_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1853_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
lean_inc(v_a_1829_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set_tag(v___x_1831_, 1);
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
lean_object* v___x_1835_; 
v___x_1835_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(v_mkInfoOnError_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___f_1827_, v_mkInfo_1814_, v___x_1834_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1842_; 
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1842_ == 0)
{
lean_object* v_unused_1843_; 
v_unused_1843_ = lean_ctor_get(v___x_1835_, 0);
lean_dec(v_unused_1843_);
v___x_1837_ = v___x_1835_;
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
else
{
lean_dec(v___x_1835_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1840_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v_a_1829_);
v___x_1840_ = v___x_1837_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_a_1829_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
lean_dec(v_a_1829_);
v_a_1844_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1835_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1835_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v_a_1854_ = lean_ctor_get(v_r_1828_, 0);
lean_inc(v_a_1854_);
lean_dec_ref_known(v_r_1828_, 1);
v___x_1855_ = lean_box(0);
v___x_1856_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(v_mkInfoOnError_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___f_1827_, v_mkInfo_1814_, v___x_1855_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1863_ == 0)
{
lean_object* v_unused_1864_; 
v_unused_1864_ = lean_ctor_get(v___x_1856_, 0);
lean_dec(v_unused_1864_);
v___x_1858_ = v___x_1856_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_dec(v___x_1856_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
lean_ctor_set_tag(v___x_1858_, 1);
lean_ctor_set(v___x_1858_, 0, v_a_1854_);
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1854_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
else
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
lean_dec(v_a_1854_);
v_a_1865_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1856_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1856_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___boxed(lean_object* v_x_1873_, lean_object* v_mkInfo_1874_, lean_object* v_mkInfoOnError_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(v_x_1873_, v_mkInfo_1874_, v_mkInfoOnError_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(lean_object* v_stx_1884_, lean_object* v_lctx_1885_, lean_object* v_expr_1886_, lean_object* v_expectedType_x3f_1887_, uint8_t v_isBinder_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_){
_start:
{
lean_object* v___x_1894_; lean_object* v___f_1895_; lean_object* v___f_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___f_1901_; lean_object* v___x_1902_; 
v___x_1894_ = lean_box(v_isBinder_1888_);
lean_inc(v_expectedType_x3f_1887_);
lean_inc_ref(v_lctx_1885_);
lean_inc(v_stx_1884_);
v___f_1895_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1895_, 0, v_stx_1884_);
lean_closure_set(v___f_1895_, 1, v_lctx_1885_);
lean_closure_set(v___f_1895_, 2, v_expectedType_x3f_1887_);
lean_closure_set(v___f_1895_, 3, v_expr_1886_);
lean_closure_set(v___f_1895_, 4, v___x_1894_);
v___f_1896_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___closed__0));
v___x_1897_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___closed__0);
v___x_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
lean_ctor_set(v___x_1898_, 1, v_stx_1884_);
v___x_1899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1898_);
lean_ctor_set(v___x_1899_, 1, v_lctx_1885_);
lean_ctor_set(v___x_1899_, 2, v_expectedType_x3f_1887_);
v___x_1900_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
v___f_1901_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1901_, 0, v___x_1900_);
v___x_1902_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(v___f_1896_, v___f_1895_, v___f_1901_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed(lean_object* v_stx_1903_, lean_object* v_lctx_1904_, lean_object* v_expr_1905_, lean_object* v_expectedType_x3f_1906_, lean_object* v_isBinder_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_){
_start:
{
uint8_t v_isBinder_boxed_1913_; lean_object* v_res_1914_; 
v_isBinder_boxed_1913_ = lean_unbox(v_isBinder_1907_);
v_res_1914_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(v_stx_1903_, v_lctx_1904_, v_expr_1905_, v_expectedType_x3f_1906_, v_isBinder_boxed_1913_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_);
lean_dec(v_a_1911_);
lean_dec_ref(v_a_1910_);
lean_dec(v_a_1909_);
lean_dec_ref(v_a_1908_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0(lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(v___y_1918_);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___boxed(lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0(v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0(lean_object* v_00_u03b1_1927_, lean_object* v_x_1928_, lean_object* v_mkInfo_1929_, lean_object* v_mkInfoOnError_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v___x_1936_; 
v___x_1936_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(v_x_1928_, v_mkInfo_1929_, v_mkInfoOnError_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___boxed(lean_object* v_00_u03b1_1937_, lean_object* v_x_1938_, lean_object* v_mkInfo_1939_, lean_object* v_mkInfoOnError_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0(v_00_u03b1_1937_, v_x_1938_, v_mkInfo_1939_, v_mkInfoOnError_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(lean_object* v_stx_1953_, lean_object* v_00_u03c3s_1954_, lean_object* v_hyp_1955_, uint8_t v_isBinder_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v_lctx_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v_lctx_1962_ = lean_ctor_get(v_a_1957_, 2);
v___x_1963_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1));
v___x_1964_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v___x_1963_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_object* v_a_1965_; lean_object* v_name_1966_; lean_object* v_uniq_1967_; lean_object* v_p_1968_; lean_object* v___x_1969_; uint8_t v___x_1970_; uint8_t v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
lean_inc(v_a_1965_);
lean_dec_ref_known(v___x_1964_, 1);
v_name_1966_ = lean_ctor_get(v_hyp_1955_, 0);
lean_inc(v_name_1966_);
v_uniq_1967_ = lean_ctor_get(v_hyp_1955_, 1);
lean_inc_n(v_uniq_1967_, 2);
v_p_1968_ = lean_ctor_get(v_hyp_1955_, 2);
lean_inc_ref(v_p_1968_);
lean_dec_ref(v_hyp_1955_);
v___x_1969_ = l_Lean_mkAppB(v_a_1965_, v_00_u03c3s_1954_, v_p_1968_);
v___x_1970_ = 0;
v___x_1971_ = 0;
lean_inc_ref(v___x_1969_);
lean_inc_ref(v_lctx_1962_);
v___x_1972_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_1962_, v_uniq_1967_, v_name_1966_, v___x_1969_, v___x_1970_, v___x_1971_);
v___x_1973_ = l_Lean_Expr_fvar___override(v_uniq_1967_);
v___x_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1969_);
v___x_1975_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(v_stx_1953_, v___x_1972_, v___x_1973_, v___x_1974_, v_isBinder_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_);
return v___x_1975_;
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_dec_ref(v_hyp_1955_);
lean_dec_ref(v_00_u03c3s_1954_);
lean_dec(v_stx_1953_);
v_a_1976_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1964_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1964_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___boxed(lean_object* v_stx_1984_, lean_object* v_00_u03c3s_1985_, lean_object* v_hyp_1986_, lean_object* v_isBinder_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_){
_start:
{
uint8_t v_isBinder_boxed_1993_; lean_object* v_res_1994_; 
v_isBinder_boxed_1993_ = lean_unbox(v_isBinder_1987_);
v_res_1994_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v_stx_1984_, v_00_u03c3s_1985_, v_hyp_1986_, v_isBinder_boxed_1993_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_);
lean_dec(v_a_1991_);
lean_dec_ref(v_a_1990_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1988_);
return v_res_1994_;
}
}
lean_object* runtime_initialize_Std_Do_SPred_DerivedLaws(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_Do_ProofMode(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_SPred_DerivedLaws(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do_ProofMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default = _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default);
l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal = _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_SPred_DerivedLaws(uint8_t builtin);
lean_object* initialize_Std_Tactic_Do_ProofMode(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_SPred_DerivedLaws(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_Do_ProofMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Revert
// Imports: public import Lean.Elab.Tactic.Do.ProofMode.Focus public import Lean.Elab.Tactic.Do.ProofMode.Basic
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
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkAndN(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAndIntroN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsDND___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAndIntroN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Revert"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "revert"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "imp"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(254, 180, 127, 119, 35, 232, 80, 131)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "impossible; res.focusHyp not a hypothesis"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__12_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__13_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__14_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 235, 49, 11, 232, 138, 137, 74)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "and_pure_intro_r"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(71, 102, 82, 181, 251, 135, 109, 75)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 18, 141, 40, 4, 84, 240, 126)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_mkEqRefl___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_inferType___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "mrevert: expected "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " excess arguments in "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", got "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__0 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__1 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(71, 102, 82, 181, 251, 135, 109, 75)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(184, 151, 230, 187, 161, 145, 194, 84)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mrevert"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(82, 105, 168, 208, 87, 76, 255, 172)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mrevertPat_"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4_value),LEAN_SCALAR_PTR_LITERAL(237, 56, 253, 143, 81, 27, 28, 109)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 12, .m_data = "mrevertPat∀_"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6_value),LEAN_SCALAR_PTR_LITERAL(191, 101, 4, 189, 225, 175, 44, 14)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabMRevert"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(44, 153, 154, 234, 0, 151, 169, 237)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0(lean_object* v___x_4_, lean_object* v___x_5_, lean_object* v___x_6_, lean_object* v___x_7_, lean_object* v_00_u03c3s_8_, lean_object* v_hyps_9_, lean_object* v_restHyps_10_, lean_object* v_focusHyp_11_, lean_object* v_target_12_, lean_object* v_proof_13_, lean_object* v_toPure_14_, lean_object* v_prf_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v_prf_21_; lean_object* v___x_22_; 
v___x_16_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0));
v___x_17_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1));
v___x_18_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2));
v___x_19_ = l_Lean_Name_mkStr6(v___x_4_, v___x_5_, v___x_6_, v___x_16_, v___x_17_, v___x_18_);
v___x_20_ = l_Lean_mkConst(v___x_19_, v___x_7_);
v_prf_21_ = l_Lean_mkApp7(v___x_20_, v_00_u03c3s_8_, v_hyps_9_, v_restHyps_10_, v_focusHyp_11_, v_target_12_, v_proof_13_, v_prf_15_);
v___x_22_ = lean_apply_2(v_toPure_14_, lean_box(0), v_prf_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__5));
v___x_34_ = l_Lean_stringToMessageData(v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1(lean_object* v_goal_35_, lean_object* v_toPure_36_, lean_object* v_k_37_, lean_object* v_toBind_38_, lean_object* v___x_39_, lean_object* v___x_40_, lean_object* v_inst_41_, lean_object* v_res_42_){
_start:
{
lean_object* v_focusHyp_43_; lean_object* v_restHyps_44_; lean_object* v_proof_45_; lean_object* v___x_46_; 
v_focusHyp_43_ = lean_ctor_get(v_res_42_, 0);
lean_inc_ref_n(v_focusHyp_43_, 2);
v_restHyps_44_ = lean_ctor_get(v_res_42_, 1);
lean_inc_ref(v_restHyps_44_);
v_proof_45_ = lean_ctor_get(v_res_42_, 2);
lean_inc_ref(v_proof_45_);
lean_dec_ref(v_res_42_);
v___x_46_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_focusHyp_43_);
if (lean_obj_tag(v___x_46_) == 1)
{
lean_object* v_val_47_; lean_object* v_u_48_; lean_object* v_00_u03c3s_49_; lean_object* v_hyps_50_; lean_object* v_target_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_70_; 
lean_dec(v_inst_41_);
lean_dec_ref(v___x_40_);
lean_dec_ref(v___x_39_);
v_val_47_ = lean_ctor_get(v___x_46_, 0);
lean_inc(v_val_47_);
lean_dec_ref_known(v___x_46_, 1);
v_u_48_ = lean_ctor_get(v_goal_35_, 0);
v_00_u03c3s_49_ = lean_ctor_get(v_goal_35_, 1);
v_hyps_50_ = lean_ctor_get(v_goal_35_, 2);
v_target_51_ = lean_ctor_get(v_goal_35_, 3);
v_isSharedCheck_70_ = !lean_is_exclusive(v_goal_35_);
if (v_isSharedCheck_70_ == 0)
{
v___x_53_ = v_goal_35_;
v_isShared_54_ = v_isSharedCheck_70_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_target_51_);
lean_inc(v_hyps_50_);
lean_inc(v_00_u03c3s_49_);
lean_inc(v_u_48_);
lean_dec(v_goal_35_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_70_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v_p_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___f_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v_p_55_ = lean_ctor_get(v_val_47_, 2);
lean_inc_ref(v_p_55_);
lean_dec(v_val_47_);
v___x_56_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0));
v___x_57_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1));
v___x_58_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2));
v___x_59_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4));
v___x_60_ = lean_box(0);
lean_inc(v_u_48_);
v___x_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_61_, 0, v_u_48_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
lean_inc_ref(v_target_51_);
lean_inc_ref(v_restHyps_44_);
lean_inc_ref_n(v_00_u03c3s_49_, 2);
lean_inc_ref(v___x_61_);
v___f_62_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0), 12, 11);
lean_closure_set(v___f_62_, 0, v___x_56_);
lean_closure_set(v___f_62_, 1, v___x_57_);
lean_closure_set(v___f_62_, 2, v___x_58_);
lean_closure_set(v___f_62_, 3, v___x_61_);
lean_closure_set(v___f_62_, 4, v_00_u03c3s_49_);
lean_closure_set(v___f_62_, 5, v_hyps_50_);
lean_closure_set(v___f_62_, 6, v_restHyps_44_);
lean_closure_set(v___f_62_, 7, v_focusHyp_43_);
lean_closure_set(v___f_62_, 8, v_target_51_);
lean_closure_set(v___f_62_, 9, v_proof_45_);
lean_closure_set(v___f_62_, 10, v_toPure_36_);
v___x_63_ = l_Lean_mkConst(v___x_59_, v___x_61_);
v___x_64_ = l_Lean_mkApp3(v___x_63_, v_00_u03c3s_49_, v_p_55_, v_target_51_);
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 3, v___x_64_);
lean_ctor_set(v___x_53_, 2, v_restHyps_44_);
v___x_66_ = v___x_53_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_u_48_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_00_u03c3s_49_);
lean_ctor_set(v_reuseFailAlloc_69_, 2, v_restHyps_44_);
lean_ctor_set(v_reuseFailAlloc_69_, 3, v___x_64_);
v___x_66_ = v_reuseFailAlloc_69_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_apply_1(v_k_37_, v___x_66_);
v___x_68_ = lean_apply_4(v_toBind_38_, lean_box(0), lean_box(0), v___x_67_, v___f_62_);
return v___x_68_;
}
}
}
else
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec(v___x_46_);
lean_dec_ref(v_proof_45_);
lean_dec_ref(v_restHyps_44_);
lean_dec_ref(v_focusHyp_43_);
lean_dec(v_toBind_38_);
lean_dec(v_k_37_);
lean_dec(v_toPure_36_);
lean_dec_ref(v_goal_35_);
v___x_71_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6);
v___x_72_ = l_Lean_throwError___redArg(v___x_39_, v___x_40_, v___x_71_);
v___x_73_ = lean_apply_2(v_inst_41_, lean_box(0), v___x_72_);
return v___x_73_;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_instMonadEIO___redArg();
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0);
v___x_76_ = l_StateRefT_x27_instMonad___redArg(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6(void){
_start:
{
lean_object* v___x_81_; lean_object* v___f_82_; 
v___x_81_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_82_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_82_, 0, v___x_81_);
return v___f_82_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7(void){
_start:
{
lean_object* v___x_83_; lean_object* v___f_84_; 
v___x_83_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_84_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_84_, 0, v___x_83_);
return v___f_84_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8(void){
_start:
{
lean_object* v___f_85_; lean_object* v___f_86_; lean_object* v___x_87_; 
v___f_85_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7);
v___f_86_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6);
v___x_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_87_, 0, v___f_86_);
lean_ctor_set(v___x_87_, 1, v___f_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9(void){
_start:
{
lean_object* v___x_88_; lean_object* v___f_89_; 
v___x_88_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8);
v___f_89_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_89_, 0, v___x_88_);
return v___f_89_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10(void){
_start:
{
lean_object* v___x_90_; lean_object* v___f_91_; 
v___x_90_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8);
v___f_91_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_91_, 0, v___x_90_);
return v___f_91_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11(void){
_start:
{
lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___x_94_; 
v___f_92_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10);
v___f_93_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v___f_93_);
lean_ctor_set(v___x_94_, 1, v___f_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_99_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_100_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__15));
v___x_101_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__14));
v___x_102_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_101_, v___x_100_, v___x_99_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17(void){
_start:
{
lean_object* v___x_103_; lean_object* v___f_104_; lean_object* v___f_105_; lean_object* v___x_106_; 
v___x_103_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16);
v___f_104_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__13));
v___f_105_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__12));
v___x_106_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_105_, v___f_104_, v___x_103_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg(lean_object* v_inst_107_, lean_object* v_inst_108_, lean_object* v_goal_109_, lean_object* v_ref_110_, lean_object* v_k_111_){
_start:
{
lean_object* v___x_112_; lean_object* v_toApplicative_113_; lean_object* v_toFunctor_114_; lean_object* v_toSeq_115_; lean_object* v_toSeqLeft_116_; lean_object* v_toSeqRight_117_; lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___f_123_; lean_object* v___f_124_; lean_object* v___f_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v_toApplicative_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_169_; 
v___x_112_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_113_ = lean_ctor_get(v___x_112_, 0);
v_toFunctor_114_ = lean_ctor_get(v_toApplicative_113_, 0);
v_toSeq_115_ = lean_ctor_get(v_toApplicative_113_, 2);
v_toSeqLeft_116_ = lean_ctor_get(v_toApplicative_113_, 3);
v_toSeqRight_117_ = lean_ctor_get(v_toApplicative_113_, 4);
v___f_118_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_119_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_114_, 2);
v___f_120_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_120_, 0, v_toFunctor_114_);
v___f_121_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_121_, 0, v_toFunctor_114_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___f_120_);
lean_ctor_set(v___x_122_, 1, v___f_121_);
lean_inc(v_toSeqRight_117_);
v___f_123_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_123_, 0, v_toSeqRight_117_);
lean_inc(v_toSeqLeft_116_);
v___f_124_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_124_, 0, v_toSeqLeft_116_);
lean_inc(v_toSeq_115_);
v___f_125_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_125_, 0, v_toSeq_115_);
v___x_126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_126_, 0, v___x_122_);
lean_ctor_set(v___x_126_, 1, v___f_118_);
lean_ctor_set(v___x_126_, 2, v___f_125_);
lean_ctor_set(v___x_126_, 3, v___f_124_);
lean_ctor_set(v___x_126_, 4, v___f_123_);
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___f_119_);
v___x_128_ = l_StateRefT_x27_instMonad___redArg(v___x_127_);
v_toApplicative_129_ = lean_ctor_get(v___x_128_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_128_);
if (v_isSharedCheck_169_ == 0)
{
lean_object* v_unused_170_; 
v_unused_170_ = lean_ctor_get(v___x_128_, 1);
lean_dec(v_unused_170_);
v___x_131_ = v___x_128_;
v_isShared_132_ = v_isSharedCheck_169_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_toApplicative_129_);
lean_dec(v___x_128_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_169_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v_toFunctor_133_; lean_object* v_toSeq_134_; lean_object* v_toSeqLeft_135_; lean_object* v_toSeqRight_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_167_; 
v_toFunctor_133_ = lean_ctor_get(v_toApplicative_129_, 0);
v_toSeq_134_ = lean_ctor_get(v_toApplicative_129_, 2);
v_toSeqLeft_135_ = lean_ctor_get(v_toApplicative_129_, 3);
v_toSeqRight_136_ = lean_ctor_get(v_toApplicative_129_, 4);
v_isSharedCheck_167_ = !lean_is_exclusive(v_toApplicative_129_);
if (v_isSharedCheck_167_ == 0)
{
lean_object* v_unused_168_; 
v_unused_168_ = lean_ctor_get(v_toApplicative_129_, 1);
lean_dec(v_unused_168_);
v___x_138_ = v_toApplicative_129_;
v_isShared_139_ = v_isSharedCheck_167_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_toSeqRight_136_);
lean_inc(v_toSeqLeft_135_);
lean_inc(v_toSeq_134_);
lean_inc(v_toFunctor_133_);
lean_dec(v_toApplicative_129_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_167_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___f_142_; lean_object* v___f_143_; lean_object* v___x_144_; lean_object* v___f_145_; lean_object* v___f_146_; lean_object* v___f_147_; lean_object* v___x_149_; 
v___f_140_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_141_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_133_);
v___f_142_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_142_, 0, v_toFunctor_133_);
v___f_143_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_143_, 0, v_toFunctor_133_);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___f_142_);
lean_ctor_set(v___x_144_, 1, v___f_143_);
v___f_145_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_145_, 0, v_toSeqRight_136_);
v___f_146_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_146_, 0, v_toSeqLeft_135_);
v___f_147_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_147_, 0, v_toSeq_134_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 4, v___f_145_);
lean_ctor_set(v___x_138_, 3, v___f_146_);
lean_ctor_set(v___x_138_, 2, v___f_147_);
lean_ctor_set(v___x_138_, 1, v___f_140_);
lean_ctor_set(v___x_138_, 0, v___x_144_);
v___x_149_ = v___x_138_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_144_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___f_140_);
lean_ctor_set(v_reuseFailAlloc_166_, 2, v___f_147_);
lean_ctor_set(v_reuseFailAlloc_166_, 3, v___f_146_);
lean_ctor_set(v_reuseFailAlloc_166_, 4, v___f_145_);
v___x_149_ = v_reuseFailAlloc_166_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_151_; 
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 1, v___f_141_);
lean_ctor_set(v___x_131_, 0, v___x_149_);
v___x_151_ = v___x_131_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_149_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v___f_141_);
v___x_151_ = v_reuseFailAlloc_165_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v_toMonadRef_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_toApplicative_158_; lean_object* v_toBind_159_; lean_object* v_toPure_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___f_163_; lean_object* v___x_164_; 
v___x_152_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11);
v___x_153_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17);
v_toMonadRef_154_ = lean_ctor_get(v___x_153_, 0);
v___x_155_ = l_Lean_Meta_instAddMessageContextMetaM;
lean_inc_ref(v___x_151_);
v___x_156_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_155_, v___x_151_);
lean_inc_ref(v_toMonadRef_154_);
v___x_157_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_157_, 0, v___x_152_);
lean_ctor_set(v___x_157_, 1, v_toMonadRef_154_);
lean_ctor_set(v___x_157_, 2, v___x_156_);
v_toApplicative_158_ = lean_ctor_get(v_inst_107_, 0);
lean_inc_ref(v_toApplicative_158_);
v_toBind_159_ = lean_ctor_get(v_inst_107_, 1);
lean_inc_n(v_toBind_159_, 2);
lean_dec_ref(v_inst_107_);
v_toPure_160_ = lean_ctor_get(v_toApplicative_158_, 1);
lean_inc(v_toPure_160_);
lean_dec_ref(v_toApplicative_158_);
lean_inc_ref(v_goal_109_);
v___x_161_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo___boxed), 7, 2);
lean_closure_set(v___x_161_, 0, v_goal_109_);
lean_closure_set(v___x_161_, 1, v_ref_110_);
lean_inc(v_inst_108_);
v___x_162_ = lean_apply_2(v_inst_108_, lean_box(0), v___x_161_);
v___f_163_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1), 8, 7);
lean_closure_set(v___f_163_, 0, v_goal_109_);
lean_closure_set(v___f_163_, 1, v_toPure_160_);
lean_closure_set(v___f_163_, 2, v_k_111_);
lean_closure_set(v___f_163_, 3, v_toBind_159_);
lean_closure_set(v___f_163_, 4, v___x_151_);
lean_closure_set(v___f_163_, 5, v___x_157_);
lean_closure_set(v___f_163_, 6, v_inst_108_);
v___x_164_ = lean_apply_4(v_toBind_159_, lean_box(0), lean_box(0), v___x_162_, v___f_163_);
return v___x_164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert(lean_object* v_m_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_goal_174_, lean_object* v_ref_175_, lean_object* v_k_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg(v_inst_172_, v_inst_173_, v_goal_174_, v_ref_175_, v_k_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0(lean_object* v_it_178_, lean_object* v_acc_179_, lean_object* v_recur_180_){
_start:
{
lean_object* v_array_181_; lean_object* v_start_182_; lean_object* v_stop_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_196_; 
v_array_181_ = lean_ctor_get(v_it_178_, 0);
v_start_182_ = lean_ctor_get(v_it_178_, 1);
v_stop_183_ = lean_ctor_get(v_it_178_, 2);
v_isSharedCheck_196_ = !lean_is_exclusive(v_it_178_);
if (v_isSharedCheck_196_ == 0)
{
v___x_185_ = v_it_178_;
v_isShared_186_ = v_isSharedCheck_196_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_stop_183_);
lean_inc(v_start_182_);
lean_inc(v_array_181_);
lean_dec(v_it_178_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_196_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
uint8_t v___x_187_; 
v___x_187_ = lean_nat_dec_lt(v_start_182_, v_stop_183_);
if (v___x_187_ == 0)
{
lean_del_object(v___x_185_);
lean_dec(v_stop_183_);
lean_dec(v_start_182_);
lean_dec_ref(v_array_181_);
lean_dec_ref(v_recur_180_);
return v_acc_179_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = lean_nat_add(v_start_182_, v___x_188_);
lean_inc_ref(v_array_181_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v___x_189_);
v___x_191_ = v___x_185_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_array_181_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_195_, 2, v_stop_183_);
v___x_191_ = v_reuseFailAlloc_195_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_array_fget(v_array_181_, v_start_182_);
lean_dec(v_start_182_);
lean_dec_ref(v_array_181_);
v___x_193_ = lean_array_push(v_acc_179_, v___x_192_);
v___x_194_ = lean_apply_3(v_recur_180_, v___x_191_, v___x_193_, lean_box(0));
return v___x_194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1(lean_object* v_inst_197_, lean_object* v_x_198_){
_start:
{
lean_object* v_fst_199_; lean_object* v_snd_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_fst_199_ = lean_ctor_get(v_x_198_, 0);
lean_inc(v_fst_199_);
v_snd_200_ = lean_ctor_get(v_x_198_, 1);
lean_inc(v_snd_200_);
lean_dec_ref(v_x_198_);
v___x_201_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_201_, 0, v_snd_200_);
lean_closure_set(v___x_201_, 1, v_fst_199_);
v___x_202_ = lean_apply_2(v_inst_197_, lean_box(0), v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2(lean_object* v_hypName_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_Core_mkFreshUserName(v_hypName_203_, v___y_206_, v___y_207_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2___boxed(lean_object* v_hypName_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2(v_hypName_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3(lean_object* v_i_217_, lean_object* v_a_218_, lean_object* v_toPure_219_, lean_object* v_____do__lift_220_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = lean_nat_add(v_i_217_, v___x_221_);
v___x_223_ = lean_name_append_index_after(v_____do__lift_220_, v___x_222_);
v___x_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set(v___x_224_, 1, v_a_218_);
v___x_225_ = lean_apply_2(v_toPure_219_, lean_box(0), v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3___boxed(lean_object* v_i_226_, lean_object* v_a_227_, lean_object* v_toPure_228_, lean_object* v_____do__lift_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3(v_i_226_, v_a_227_, v_toPure_228_, v_____do__lift_229_);
lean_dec(v_i_226_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4(lean_object* v___x_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_Core_mkFreshUserName(v___x_231_, v___y_234_, v___y_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed(lean_object* v___x_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4(v___x_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5(lean_object* v_toPure_250_, lean_object* v_inst_251_, lean_object* v_toBind_252_, lean_object* v_i_253_, lean_object* v_a_254_, lean_object* v_x_255_){
_start:
{
lean_object* v___f_256_; lean_object* v___f_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___f_256_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_256_, 0, v_i_253_);
lean_closure_set(v___f_256_, 1, v_a_254_);
lean_closure_set(v___f_256_, 2, v_toPure_250_);
v___f_257_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__2));
v___x_258_ = lean_apply_2(v_inst_251_, lean_box(0), v___f_257_);
v___x_259_ = lean_apply_4(v_toBind_252_, lean_box(0), lean_box(0), v___x_258_, v___f_256_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6(lean_object* v_u_260_, lean_object* v_x1_261_, lean_object* v_x2_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(v_u_260_, v_x1_261_, v_x2_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7(lean_object* v_00_u03c6_264_, lean_object* v_toPure_265_, lean_object* v_____do__lift_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v_____do__lift_266_);
lean_ctor_set(v___x_267_, 1, v_00_u03c6_264_);
v___x_268_ = lean_apply_2(v_toPure_265_, lean_box(0), v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8(lean_object* v_hypName_269_, lean_object* v_uniq_270_, lean_object* v_toPure_271_, lean_object* v_ss_272_, lean_object* v_hyps_273_, uint8_t v___x_274_, uint8_t v___x_275_, uint8_t v___x_276_, lean_object* v_inst_277_, lean_object* v_toBind_278_, lean_object* v_____do__lift_279_){
_start:
{
lean_object* v___x_280_; lean_object* v_00_u03c6_281_; lean_object* v___f_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_280_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_280_, 0, v_hypName_269_);
lean_ctor_set(v___x_280_, 1, v_uniq_270_);
lean_ctor_set(v___x_280_, 2, v_____do__lift_279_);
v_00_u03c6_281_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_280_);
v___f_282_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7), 3, 2);
lean_closure_set(v___f_282_, 0, v_00_u03c6_281_);
lean_closure_set(v___f_282_, 1, v_toPure_271_);
v___x_283_ = lean_box(v___x_274_);
v___x_284_ = lean_box(v___x_275_);
v___x_285_ = lean_box(v___x_274_);
v___x_286_ = lean_box(v___x_275_);
v___x_287_ = lean_box(v___x_276_);
v___x_288_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_288_, 0, v_ss_272_);
lean_closure_set(v___x_288_, 1, v_hyps_273_);
lean_closure_set(v___x_288_, 2, v___x_283_);
lean_closure_set(v___x_288_, 3, v___x_284_);
lean_closure_set(v___x_288_, 4, v___x_285_);
lean_closure_set(v___x_288_, 5, v___x_286_);
lean_closure_set(v___x_288_, 6, v___x_287_);
v___x_289_ = lean_apply_2(v_inst_277_, lean_box(0), v___x_288_);
v___x_290_ = lean_apply_4(v_toBind_278_, lean_box(0), lean_box(0), v___x_289_, v___f_282_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed(lean_object* v_hypName_291_, lean_object* v_uniq_292_, lean_object* v_toPure_293_, lean_object* v_ss_294_, lean_object* v_hyps_295_, lean_object* v___x_296_, lean_object* v___x_297_, lean_object* v___x_298_, lean_object* v_inst_299_, lean_object* v_toBind_300_, lean_object* v_____do__lift_301_){
_start:
{
uint8_t v___x_1100__boxed_302_; uint8_t v___x_1101__boxed_303_; uint8_t v___x_1102__boxed_304_; lean_object* v_res_305_; 
v___x_1100__boxed_302_ = lean_unbox(v___x_296_);
v___x_1101__boxed_303_ = lean_unbox(v___x_297_);
v___x_1102__boxed_304_ = lean_unbox(v___x_298_);
v_res_305_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8(v_hypName_291_, v_uniq_292_, v_toPure_293_, v_ss_294_, v_hyps_295_, v___x_1100__boxed_302_, v___x_1101__boxed_303_, v___x_1102__boxed_304_, v_inst_299_, v_toBind_300_, v_____do__lift_301_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9(lean_object* v_hypName_306_, lean_object* v_toPure_307_, lean_object* v_ss_308_, lean_object* v_hyps_309_, uint8_t v___x_310_, lean_object* v_inst_311_, lean_object* v_toBind_312_, lean_object* v_00_u03c6_313_, lean_object* v_uniq_314_){
_start:
{
uint8_t v___x_315_; uint8_t v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___f_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_315_ = 1;
v___x_316_ = 1;
v___x_317_ = lean_box(v___x_310_);
v___x_318_ = lean_box(v___x_315_);
v___x_319_ = lean_box(v___x_316_);
lean_inc(v_toBind_312_);
lean_inc(v_inst_311_);
lean_inc_ref(v_ss_308_);
v___f_320_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed), 11, 10);
lean_closure_set(v___f_320_, 0, v_hypName_306_);
lean_closure_set(v___f_320_, 1, v_uniq_314_);
lean_closure_set(v___f_320_, 2, v_toPure_307_);
lean_closure_set(v___f_320_, 3, v_ss_308_);
lean_closure_set(v___f_320_, 4, v_hyps_309_);
lean_closure_set(v___f_320_, 5, v___x_317_);
lean_closure_set(v___f_320_, 6, v___x_318_);
lean_closure_set(v___f_320_, 7, v___x_319_);
lean_closure_set(v___f_320_, 8, v_inst_311_);
lean_closure_set(v___f_320_, 9, v_toBind_312_);
v___x_321_ = lean_box(v___x_310_);
v___x_322_ = lean_box(v___x_315_);
v___x_323_ = lean_box(v___x_310_);
v___x_324_ = lean_box(v___x_315_);
v___x_325_ = lean_box(v___x_316_);
v___x_326_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_326_, 0, v_ss_308_);
lean_closure_set(v___x_326_, 1, v_00_u03c6_313_);
lean_closure_set(v___x_326_, 2, v___x_321_);
lean_closure_set(v___x_326_, 3, v___x_322_);
lean_closure_set(v___x_326_, 4, v___x_323_);
lean_closure_set(v___x_326_, 5, v___x_324_);
lean_closure_set(v___x_326_, 6, v___x_325_);
v___x_327_ = lean_apply_2(v_inst_311_, lean_box(0), v___x_326_);
v___x_328_ = lean_apply_4(v_toBind_312_, lean_box(0), lean_box(0), v___x_327_, v___f_320_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed(lean_object* v_hypName_329_, lean_object* v_toPure_330_, lean_object* v_ss_331_, lean_object* v_hyps_332_, lean_object* v___x_333_, lean_object* v_inst_334_, lean_object* v_toBind_335_, lean_object* v_00_u03c6_336_, lean_object* v_uniq_337_){
_start:
{
uint8_t v___x_1135__boxed_338_; lean_object* v_res_339_; 
v___x_1135__boxed_338_ = lean_unbox(v___x_333_);
v_res_339_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9(v_hypName_329_, v_toPure_330_, v_ss_331_, v_hyps_332_, v___x_1135__boxed_338_, v_inst_334_, v_toBind_335_, v_00_u03c6_336_, v_uniq_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10(lean_object* v_u_340_, lean_object* v_00_u03c3s_341_, lean_object* v_hypName_342_, lean_object* v_toPure_343_, lean_object* v_ss_344_, lean_object* v_hyps_345_, uint8_t v___x_346_, lean_object* v_inst_347_, lean_object* v_toBind_348_, lean_object* v___f_349_, lean_object* v_eqs_350_){
_start:
{
lean_object* v_eqs_351_; lean_object* v_00_u03c6_352_; lean_object* v_00_u03c6_353_; lean_object* v___x_354_; lean_object* v___f_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_eqs_351_ = lean_array_to_list(v_eqs_350_);
v_00_u03c6_352_ = l_Lean_mkAndN(v_eqs_351_);
v_00_u03c6_353_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_u_340_, v_00_u03c3s_341_, v_00_u03c6_352_);
v___x_354_ = lean_box(v___x_346_);
lean_inc(v_toBind_348_);
lean_inc(v_inst_347_);
v___f_355_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed), 9, 8);
lean_closure_set(v___f_355_, 0, v_hypName_342_);
lean_closure_set(v___f_355_, 1, v_toPure_343_);
lean_closure_set(v___f_355_, 2, v_ss_344_);
lean_closure_set(v___f_355_, 3, v_hyps_345_);
lean_closure_set(v___f_355_, 4, v___x_354_);
lean_closure_set(v___f_355_, 5, v_inst_347_);
lean_closure_set(v___f_355_, 6, v_toBind_348_);
lean_closure_set(v___f_355_, 7, v_00_u03c6_353_);
v___x_356_ = lean_apply_2(v_inst_347_, lean_box(0), v___f_349_);
v___x_357_ = lean_apply_4(v_toBind_348_, lean_box(0), lean_box(0), v___x_356_, v___f_355_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed(lean_object* v_u_358_, lean_object* v_00_u03c3s_359_, lean_object* v_hypName_360_, lean_object* v_toPure_361_, lean_object* v_ss_362_, lean_object* v_hyps_363_, lean_object* v___x_364_, lean_object* v_inst_365_, lean_object* v_toBind_366_, lean_object* v___f_367_, lean_object* v_eqs_368_){
_start:
{
uint8_t v___x_1169__boxed_369_; lean_object* v_res_370_; 
v___x_1169__boxed_369_ = lean_unbox(v___x_364_);
v_res_370_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10(v_u_358_, v_00_u03c3s_359_, v_hypName_360_, v_toPure_361_, v_ss_362_, v_hyps_363_, v___x_1169__boxed_369_, v_inst_365_, v_toBind_366_, v___f_367_, v_eqs_368_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11(lean_object* v_u_371_, lean_object* v_00_u03c3s_372_, lean_object* v_hypName_373_, lean_object* v_toPure_374_, lean_object* v_hyps_375_, uint8_t v___x_376_, lean_object* v_inst_377_, lean_object* v_toBind_378_, lean_object* v___f_379_, lean_object* v_revertArgs_380_, lean_object* v_inst_381_, lean_object* v___f_382_, lean_object* v_ss_383_){
_start:
{
lean_object* v___x_384_; lean_object* v___f_385_; lean_object* v___x_386_; size_t v_sz_387_; size_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_384_ = lean_box(v___x_376_);
lean_inc(v_toBind_378_);
lean_inc_ref(v_ss_383_);
v___f_385_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed), 11, 10);
lean_closure_set(v___f_385_, 0, v_u_371_);
lean_closure_set(v___f_385_, 1, v_00_u03c3s_372_);
lean_closure_set(v___f_385_, 2, v_hypName_373_);
lean_closure_set(v___f_385_, 3, v_toPure_374_);
lean_closure_set(v___f_385_, 4, v_ss_383_);
lean_closure_set(v___f_385_, 5, v_hyps_375_);
lean_closure_set(v___f_385_, 6, v___x_384_);
lean_closure_set(v___f_385_, 7, v_inst_377_);
lean_closure_set(v___f_385_, 8, v_toBind_378_);
lean_closure_set(v___f_385_, 9, v___f_379_);
v___x_386_ = l_Array_zip___redArg(v_revertArgs_380_, v_ss_383_);
lean_dec_ref(v_ss_383_);
v_sz_387_ = lean_array_size(v___x_386_);
v___x_388_ = ((size_t)0ULL);
v___x_389_ = l_unsafeCast___redArg(v___x_386_);
lean_dec_ref(v___x_386_);
v___x_390_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_381_, v___f_382_, v_sz_387_, v___x_388_, v___x_389_);
v___x_391_ = l_unsafeCast___redArg(v___x_390_);
lean_dec(v___x_390_);
v___x_392_ = lean_apply_4(v_toBind_378_, lean_box(0), lean_box(0), v___x_391_, v___f_385_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed(lean_object* v_u_393_, lean_object* v_00_u03c3s_394_, lean_object* v_hypName_395_, lean_object* v_toPure_396_, lean_object* v_hyps_397_, lean_object* v___x_398_, lean_object* v_inst_399_, lean_object* v_toBind_400_, lean_object* v___f_401_, lean_object* v_revertArgs_402_, lean_object* v_inst_403_, lean_object* v___f_404_, lean_object* v_ss_405_){
_start:
{
uint8_t v___x_1186__boxed_406_; lean_object* v_res_407_; 
v___x_1186__boxed_406_ = lean_unbox(v___x_398_);
v_res_407_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11(v_u_393_, v_00_u03c3s_394_, v_hypName_395_, v_toPure_396_, v_hyps_397_, v___x_1186__boxed_406_, v_inst_399_, v_toBind_400_, v___f_401_, v_revertArgs_402_, v_inst_403_, v___f_404_, v_ss_405_);
lean_dec_ref(v_revertArgs_402_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(lean_object* v_u_416_, lean_object* v_fst_417_, lean_object* v_revertArgs_418_, lean_object* v_snd_419_, lean_object* v_prf_420_, lean_object* v_00_u03c3s_421_, lean_object* v_hyps_422_, lean_object* v_target_423_, lean_object* v_h_424_, lean_object* v_toPure_425_, lean_object* v_____do__lift_426_){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v_prf_434_; lean_object* v___x_435_; 
v___x_427_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1));
v___x_428_ = lean_box(0);
v___x_429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_429_, 0, v_u_416_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v___x_430_ = l_Lean_mkConst(v___x_427_, v___x_429_);
v___x_431_ = l_Lean_mkAppN(v_fst_417_, v_revertArgs_418_);
v___x_432_ = l_Lean_mkAppN(v_snd_419_, v_revertArgs_418_);
v___x_433_ = l_Lean_mkAppN(v_prf_420_, v_revertArgs_418_);
v_prf_434_ = l_Lean_mkApp8(v___x_430_, v_00_u03c3s_421_, v_____do__lift_426_, v_hyps_422_, v___x_431_, v_target_423_, v_h_424_, v___x_432_, v___x_433_);
v___x_435_ = lean_apply_2(v_toPure_425_, lean_box(0), v_prf_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed(lean_object* v_u_436_, lean_object* v_fst_437_, lean_object* v_revertArgs_438_, lean_object* v_snd_439_, lean_object* v_prf_440_, lean_object* v_00_u03c3s_441_, lean_object* v_hyps_442_, lean_object* v_target_443_, lean_object* v_h_444_, lean_object* v_toPure_445_, lean_object* v_____do__lift_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(v_u_436_, v_fst_437_, v_revertArgs_438_, v_snd_439_, v_prf_440_, v_00_u03c3s_441_, v_hyps_442_, v_target_443_, v_h_444_, v_toPure_445_, v_____do__lift_446_);
lean_dec_ref(v_revertArgs_438_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13(lean_object* v_u_448_, lean_object* v_fst_449_, lean_object* v_revertArgs_450_, lean_object* v_snd_451_, lean_object* v_00_u03c3s_452_, lean_object* v_hyps_453_, lean_object* v_target_454_, lean_object* v_h_455_, lean_object* v_toPure_456_, lean_object* v_inst_457_, lean_object* v_toBind_458_, lean_object* v_prf_459_){
_start:
{
lean_object* v___f_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
lean_inc_ref(v_h_455_);
v___f_460_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed), 11, 10);
lean_closure_set(v___f_460_, 0, v_u_448_);
lean_closure_set(v___f_460_, 1, v_fst_449_);
lean_closure_set(v___f_460_, 2, v_revertArgs_450_);
lean_closure_set(v___f_460_, 3, v_snd_451_);
lean_closure_set(v___f_460_, 4, v_prf_459_);
lean_closure_set(v___f_460_, 5, v_00_u03c3s_452_);
lean_closure_set(v___f_460_, 6, v_hyps_453_);
lean_closure_set(v___f_460_, 7, v_target_454_);
lean_closure_set(v___f_460_, 8, v_h_455_);
lean_closure_set(v___f_460_, 9, v_toPure_456_);
v___x_461_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_461_, 0, v_h_455_);
v___x_462_ = lean_apply_2(v_inst_457_, lean_box(0), v___x_461_);
v___x_463_ = lean_apply_4(v_toBind_458_, lean_box(0), lean_box(0), v___x_462_, v___f_460_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14(lean_object* v___y_464_, lean_object* v_u_465_, lean_object* v_snd_466_, lean_object* v_revertArgs_467_, lean_object* v_00_u03c3s_468_, lean_object* v_hyps_469_, lean_object* v_target_470_, lean_object* v_h_471_, lean_object* v_toPure_472_, lean_object* v_inst_473_, lean_object* v_toBind_474_, lean_object* v_a_475_, lean_object* v_n_476_, lean_object* v_f_477_, lean_object* v_k_478_, lean_object* v_H_479_){
_start:
{
lean_object* v_H_480_; lean_object* v___x_481_; lean_object* v_fst_482_; lean_object* v_snd_483_; lean_object* v___f_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_goal_x27_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
lean_inc_ref_n(v___y_464_, 2);
v_H_480_ = l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(v___y_464_, v_H_479_);
lean_inc_n(v_u_465_, 2);
v___x_481_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_465_, v___y_464_, v_H_480_, v_snd_466_);
v_fst_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc_n(v_fst_482_, 2);
v_snd_483_ = lean_ctor_get(v___x_481_, 1);
lean_inc(v_snd_483_);
lean_dec_ref(v___x_481_);
lean_inc(v_toBind_474_);
v___f_484_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13), 12, 11);
lean_closure_set(v___f_484_, 0, v_u_465_);
lean_closure_set(v___f_484_, 1, v_fst_482_);
lean_closure_set(v___f_484_, 2, v_revertArgs_467_);
lean_closure_set(v___f_484_, 3, v_snd_483_);
lean_closure_set(v___f_484_, 4, v_00_u03c3s_468_);
lean_closure_set(v___f_484_, 5, v_hyps_469_);
lean_closure_set(v___f_484_, 6, v_target_470_);
lean_closure_set(v___f_484_, 7, v_h_471_);
lean_closure_set(v___f_484_, 8, v_toPure_472_);
lean_closure_set(v___f_484_, 9, v_inst_473_);
lean_closure_set(v___f_484_, 10, v_toBind_474_);
v___x_485_ = lean_array_get_size(v_a_475_);
v___x_486_ = l_Array_toSubarray___redArg(v_a_475_, v_n_476_, v___x_485_);
v___x_487_ = l_Subarray_copy___redArg(v___x_486_);
v___x_488_ = l_Lean_mkAppRev(v_f_477_, v___x_487_);
lean_dec_ref(v___x_487_);
v_goal_x27_489_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_goal_x27_489_, 0, v_u_465_);
lean_ctor_set(v_goal_x27_489_, 1, v___y_464_);
lean_ctor_set(v_goal_x27_489_, 2, v_fst_482_);
lean_ctor_set(v_goal_x27_489_, 3, v___x_488_);
v___x_490_ = lean_apply_1(v_k_478_, v_goal_x27_489_);
v___x_491_ = lean_apply_4(v_toBind_474_, lean_box(0), lean_box(0), v___x_490_, v___f_484_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(lean_object* v_u_511_, lean_object* v_snd_512_, lean_object* v_revertArgs_513_, lean_object* v_00_u03c3s_514_, lean_object* v_hyps_515_, lean_object* v_target_516_, lean_object* v_toPure_517_, lean_object* v_inst_518_, lean_object* v_toBind_519_, lean_object* v_a_520_, lean_object* v_n_521_, lean_object* v_f_522_, lean_object* v_k_523_, lean_object* v_fst_524_, lean_object* v_revertArgsTypes_525_, lean_object* v___x_526_, lean_object* v___f_527_, lean_object* v_h_528_){
_start:
{
lean_object* v___y_530_; lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; 
v___x_535_ = lean_array_get_size(v_revertArgsTypes_525_);
v___x_536_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9));
v___x_537_ = lean_nat_dec_lt(v___x_526_, v___x_535_);
if (v___x_537_ == 0)
{
lean_dec_ref(v___f_527_);
lean_dec_ref(v_revertArgsTypes_525_);
lean_inc_ref(v_00_u03c3s_514_);
v___y_530_ = v_00_u03c3s_514_;
goto v___jp_529_;
}
else
{
size_t v___x_538_; size_t v___x_539_; lean_object* v___x_540_; 
v___x_538_ = lean_usize_of_nat(v___x_535_);
v___x_539_ = ((size_t)0ULL);
lean_inc_ref(v_00_u03c3s_514_);
v___x_540_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_536_, v___f_527_, v_revertArgsTypes_525_, v___x_538_, v___x_539_, v_00_u03c3s_514_);
v___y_530_ = v___x_540_;
goto v___jp_529_;
}
v___jp_529_:
{
lean_object* v___f_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
lean_inc(v_toBind_519_);
lean_inc(v_inst_518_);
v___f_531_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14), 16, 15);
lean_closure_set(v___f_531_, 0, v___y_530_);
lean_closure_set(v___f_531_, 1, v_u_511_);
lean_closure_set(v___f_531_, 2, v_snd_512_);
lean_closure_set(v___f_531_, 3, v_revertArgs_513_);
lean_closure_set(v___f_531_, 4, v_00_u03c3s_514_);
lean_closure_set(v___f_531_, 5, v_hyps_515_);
lean_closure_set(v___f_531_, 6, v_target_516_);
lean_closure_set(v___f_531_, 7, v_h_528_);
lean_closure_set(v___f_531_, 8, v_toPure_517_);
lean_closure_set(v___f_531_, 9, v_inst_518_);
lean_closure_set(v___f_531_, 10, v_toBind_519_);
lean_closure_set(v___f_531_, 11, v_a_520_);
lean_closure_set(v___f_531_, 12, v_n_521_);
lean_closure_set(v___f_531_, 13, v_f_522_);
lean_closure_set(v___f_531_, 14, v_k_523_);
v___x_532_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVarsIfMVarApp___boxed), 6, 1);
lean_closure_set(v___x_532_, 0, v_fst_524_);
v___x_533_ = lean_apply_2(v_inst_518_, lean_box(0), v___x_532_);
v___x_534_ = lean_apply_4(v_toBind_519_, lean_box(0), lean_box(0), v___x_533_, v___f_531_);
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed(lean_object** _args){
lean_object* v_u_541_ = _args[0];
lean_object* v_snd_542_ = _args[1];
lean_object* v_revertArgs_543_ = _args[2];
lean_object* v_00_u03c3s_544_ = _args[3];
lean_object* v_hyps_545_ = _args[4];
lean_object* v_target_546_ = _args[5];
lean_object* v_toPure_547_ = _args[6];
lean_object* v_inst_548_ = _args[7];
lean_object* v_toBind_549_ = _args[8];
lean_object* v_a_550_ = _args[9];
lean_object* v_n_551_ = _args[10];
lean_object* v_f_552_ = _args[11];
lean_object* v_k_553_ = _args[12];
lean_object* v_fst_554_ = _args[13];
lean_object* v_revertArgsTypes_555_ = _args[14];
lean_object* v___x_556_ = _args[15];
lean_object* v___f_557_ = _args[16];
lean_object* v_h_558_ = _args[17];
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(v_u_541_, v_snd_542_, v_revertArgs_543_, v_00_u03c3s_544_, v_hyps_545_, v_target_546_, v_toPure_547_, v_inst_548_, v_toBind_549_, v_a_550_, v_n_551_, v_f_552_, v_k_553_, v_fst_554_, v_revertArgsTypes_555_, v___x_556_, v___f_557_, v_h_558_);
lean_dec(v___x_556_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16(lean_object* v_inst_560_, lean_object* v_toBind_561_, lean_object* v___f_562_, lean_object* v_prfs_563_){
_start:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_564_ = lean_array_to_list(v_prfs_563_);
v___x_565_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAndIntroN___boxed), 6, 1);
lean_closure_set(v___x_565_, 0, v___x_564_);
v___x_566_ = lean_apply_2(v_inst_560_, lean_box(0), v___x_565_);
v___x_567_ = lean_apply_4(v_toBind_561_, lean_box(0), lean_box(0), v___x_566_, v___f_562_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(lean_object* v_u_569_, lean_object* v_revertArgs_570_, lean_object* v_00_u03c3s_571_, lean_object* v_hyps_572_, lean_object* v_target_573_, lean_object* v_toPure_574_, lean_object* v_inst_575_, lean_object* v_toBind_576_, lean_object* v_a_577_, lean_object* v_n_578_, lean_object* v_f_579_, lean_object* v_k_580_, lean_object* v_revertArgsTypes_581_, lean_object* v___x_582_, lean_object* v___f_583_, lean_object* v___x_584_, lean_object* v_____x_585_){
_start:
{
lean_object* v_fst_586_; lean_object* v_snd_587_; lean_object* v___f_588_; lean_object* v___f_589_; lean_object* v___x_590_; size_t v_sz_591_; size_t v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_fst_586_ = lean_ctor_get(v_____x_585_, 0);
lean_inc(v_fst_586_);
v_snd_587_ = lean_ctor_get(v_____x_585_, 1);
lean_inc(v_snd_587_);
lean_dec_ref(v_____x_585_);
lean_inc_n(v_toBind_576_, 2);
lean_inc_n(v_inst_575_, 2);
lean_inc_ref(v_revertArgs_570_);
v___f_588_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed), 18, 17);
lean_closure_set(v___f_588_, 0, v_u_569_);
lean_closure_set(v___f_588_, 1, v_snd_587_);
lean_closure_set(v___f_588_, 2, v_revertArgs_570_);
lean_closure_set(v___f_588_, 3, v_00_u03c3s_571_);
lean_closure_set(v___f_588_, 4, v_hyps_572_);
lean_closure_set(v___f_588_, 5, v_target_573_);
lean_closure_set(v___f_588_, 6, v_toPure_574_);
lean_closure_set(v___f_588_, 7, v_inst_575_);
lean_closure_set(v___f_588_, 8, v_toBind_576_);
lean_closure_set(v___f_588_, 9, v_a_577_);
lean_closure_set(v___f_588_, 10, v_n_578_);
lean_closure_set(v___f_588_, 11, v_f_579_);
lean_closure_set(v___f_588_, 12, v_k_580_);
lean_closure_set(v___f_588_, 13, v_fst_586_);
lean_closure_set(v___f_588_, 14, v_revertArgsTypes_581_);
lean_closure_set(v___f_588_, 15, v___x_582_);
lean_closure_set(v___f_588_, 16, v___f_583_);
v___f_589_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16), 4, 3);
lean_closure_set(v___f_589_, 0, v_inst_575_);
lean_closure_set(v___f_589_, 1, v_toBind_576_);
lean_closure_set(v___f_589_, 2, v___f_588_);
v___x_590_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0));
v_sz_591_ = lean_array_size(v_revertArgs_570_);
v___x_592_ = ((size_t)0ULL);
v___x_593_ = l_unsafeCast___redArg(v_revertArgs_570_);
lean_dec_ref(v_revertArgs_570_);
v___x_594_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_584_, v___x_590_, v_sz_591_, v___x_592_, v___x_593_);
v___x_595_ = l_unsafeCast___redArg(v___x_594_);
lean_dec(v___x_594_);
v___x_596_ = lean_apply_2(v_inst_575_, lean_box(0), v___x_595_);
v___x_597_ = lean_apply_4(v_toBind_576_, lean_box(0), lean_box(0), v___x_596_, v___f_589_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed(lean_object** _args){
lean_object* v_u_598_ = _args[0];
lean_object* v_revertArgs_599_ = _args[1];
lean_object* v_00_u03c3s_600_ = _args[2];
lean_object* v_hyps_601_ = _args[3];
lean_object* v_target_602_ = _args[4];
lean_object* v_toPure_603_ = _args[5];
lean_object* v_inst_604_ = _args[6];
lean_object* v_toBind_605_ = _args[7];
lean_object* v_a_606_ = _args[8];
lean_object* v_n_607_ = _args[9];
lean_object* v_f_608_ = _args[10];
lean_object* v_k_609_ = _args[11];
lean_object* v_revertArgsTypes_610_ = _args[12];
lean_object* v___x_611_ = _args[13];
lean_object* v___f_612_ = _args[14];
lean_object* v___x_613_ = _args[15];
lean_object* v_____x_614_ = _args[16];
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(v_u_598_, v_revertArgs_599_, v_00_u03c3s_600_, v_hyps_601_, v_target_602_, v_toPure_603_, v_inst_604_, v_toBind_605_, v_a_606_, v_n_607_, v_f_608_, v_k_609_, v_revertArgsTypes_610_, v___x_611_, v___f_612_, v___x_613_, v_____x_614_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18(lean_object* v_inst_616_, lean_object* v_inst_617_, lean_object* v___f_618_, lean_object* v_toBind_619_, lean_object* v___f_620_, lean_object* v_declInfos_621_){
_start:
{
uint8_t v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_622_ = 0;
v___x_623_ = l_Lean_Meta_withLocalDeclsDND___redArg(v_inst_616_, v_inst_617_, v_declInfos_621_, v___f_618_, v___x_622_);
v___x_624_ = lean_apply_4(v_toBind_619_, lean_box(0), lean_box(0), v___x_623_, v___f_620_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18___boxed(lean_object* v_inst_625_, lean_object* v_inst_626_, lean_object* v___f_627_, lean_object* v_toBind_628_, lean_object* v___f_629_, lean_object* v_declInfos_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18(v_inst_625_, v_inst_626_, v___f_627_, v_toBind_628_, v___f_629_, v_declInfos_630_);
lean_dec_ref(v_declInfos_630_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(lean_object* v_u_632_, lean_object* v_revertArgs_633_, lean_object* v_00_u03c3s_634_, lean_object* v_hyps_635_, lean_object* v_target_636_, lean_object* v_toPure_637_, lean_object* v_inst_638_, lean_object* v_toBind_639_, lean_object* v_a_640_, lean_object* v_n_641_, lean_object* v_f_642_, lean_object* v_k_643_, lean_object* v___x_644_, lean_object* v___f_645_, lean_object* v___x_646_, lean_object* v_inst_647_, lean_object* v_inst_648_, lean_object* v___f_649_, lean_object* v___f_650_, lean_object* v_revertArgsTypes_651_){
_start:
{
lean_object* v___f_652_; lean_object* v___f_653_; size_t v_sz_654_; size_t v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
lean_inc_ref(v_revertArgsTypes_651_);
lean_inc_n(v_toBind_639_, 2);
v___f_652_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed), 17, 16);
lean_closure_set(v___f_652_, 0, v_u_632_);
lean_closure_set(v___f_652_, 1, v_revertArgs_633_);
lean_closure_set(v___f_652_, 2, v_00_u03c3s_634_);
lean_closure_set(v___f_652_, 3, v_hyps_635_);
lean_closure_set(v___f_652_, 4, v_target_636_);
lean_closure_set(v___f_652_, 5, v_toPure_637_);
lean_closure_set(v___f_652_, 6, v_inst_638_);
lean_closure_set(v___f_652_, 7, v_toBind_639_);
lean_closure_set(v___f_652_, 8, v_a_640_);
lean_closure_set(v___f_652_, 9, v_n_641_);
lean_closure_set(v___f_652_, 10, v_f_642_);
lean_closure_set(v___f_652_, 11, v_k_643_);
lean_closure_set(v___f_652_, 12, v_revertArgsTypes_651_);
lean_closure_set(v___f_652_, 13, v___x_644_);
lean_closure_set(v___f_652_, 14, v___f_645_);
lean_closure_set(v___f_652_, 15, v___x_646_);
lean_inc_ref(v_inst_648_);
v___f_653_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18___boxed), 6, 5);
lean_closure_set(v___f_653_, 0, v_inst_647_);
lean_closure_set(v___f_653_, 1, v_inst_648_);
lean_closure_set(v___f_653_, 2, v___f_649_);
lean_closure_set(v___f_653_, 3, v_toBind_639_);
lean_closure_set(v___f_653_, 4, v___f_652_);
v_sz_654_ = lean_array_size(v_revertArgsTypes_651_);
v___x_655_ = ((size_t)0ULL);
v___x_656_ = l_unsafeCast___redArg(v_revertArgsTypes_651_);
v___x_657_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_648_, v_revertArgsTypes_651_, v___f_650_, v_sz_654_, v___x_655_, v___x_656_);
lean_dec_ref(v_revertArgsTypes_651_);
v___x_658_ = l_unsafeCast___redArg(v___x_657_);
lean_dec(v___x_657_);
v___x_659_ = lean_apply_4(v_toBind_639_, lean_box(0), lean_box(0), v___x_658_, v___f_653_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_u_660_ = _args[0];
lean_object* v_revertArgs_661_ = _args[1];
lean_object* v_00_u03c3s_662_ = _args[2];
lean_object* v_hyps_663_ = _args[3];
lean_object* v_target_664_ = _args[4];
lean_object* v_toPure_665_ = _args[5];
lean_object* v_inst_666_ = _args[6];
lean_object* v_toBind_667_ = _args[7];
lean_object* v_a_668_ = _args[8];
lean_object* v_n_669_ = _args[9];
lean_object* v_f_670_ = _args[10];
lean_object* v_k_671_ = _args[11];
lean_object* v___x_672_ = _args[12];
lean_object* v___f_673_ = _args[13];
lean_object* v___x_674_ = _args[14];
lean_object* v_inst_675_ = _args[15];
lean_object* v_inst_676_ = _args[16];
lean_object* v___f_677_ = _args[17];
lean_object* v___f_678_ = _args[18];
lean_object* v_revertArgsTypes_679_ = _args[19];
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(v_u_660_, v_revertArgs_661_, v_00_u03c3s_662_, v_hyps_663_, v_target_664_, v_toPure_665_, v_inst_666_, v_toBind_667_, v_a_668_, v_n_669_, v_f_670_, v_k_671_, v___x_672_, v___f_673_, v___x_674_, v_inst_675_, v_inst_676_, v___f_677_, v___f_678_, v_revertArgsTypes_679_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(lean_object* v_revertArgs_682_, lean_object* v___x_683_, lean_object* v_inst_684_, lean_object* v_toBind_685_, lean_object* v___f_686_, lean_object* v_____r_687_){
_start:
{
lean_object* v___x_688_; size_t v_sz_689_; size_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_688_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0));
v_sz_689_ = lean_array_size(v_revertArgs_682_);
v___x_690_ = ((size_t)0ULL);
v___x_691_ = l_unsafeCast___redArg(v_revertArgs_682_);
v___x_692_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_683_, v___x_688_, v_sz_689_, v___x_690_, v___x_691_);
v___x_693_ = l_unsafeCast___redArg(v___x_692_);
lean_dec(v___x_692_);
v___x_694_ = lean_apply_2(v_inst_684_, lean_box(0), v___x_693_);
v___x_695_ = lean_apply_4(v_toBind_685_, lean_box(0), lean_box(0), v___x_694_, v___f_686_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed(lean_object* v_revertArgs_696_, lean_object* v___x_697_, lean_object* v_inst_698_, lean_object* v_toBind_699_, lean_object* v___f_700_, lean_object* v_____r_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(v_revertArgs_696_, v___x_697_, v_inst_698_, v_toBind_699_, v___f_700_, v_____r_701_);
lean_dec_ref(v_revertArgs_696_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21(lean_object* v___f_703_, lean_object* v_____r_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = lean_apply_1(v___f_703_, v_____r_704_);
return v___x_705_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2));
v___x_711_ = l_Lean_stringToMessageData(v___x_710_);
return v___x_711_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4));
v___x_714_ = l_Lean_stringToMessageData(v___x_713_);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6));
v___x_717_ = l_Lean_stringToMessageData(v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg(lean_object* v_inst_718_, lean_object* v_inst_719_, lean_object* v_inst_720_, lean_object* v_goal_721_, lean_object* v_n_722_, lean_object* v_hypName_723_, lean_object* v_k_724_){
_start:
{
lean_object* v___x_725_; lean_object* v_toApplicative_726_; lean_object* v_toFunctor_727_; lean_object* v_toSeq_728_; lean_object* v_toSeqLeft_729_; lean_object* v_toSeqRight_730_; lean_object* v___f_731_; lean_object* v___f_732_; lean_object* v___f_733_; lean_object* v___f_734_; lean_object* v___x_735_; lean_object* v___f_736_; lean_object* v___f_737_; lean_object* v___f_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v_toApplicative_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_826_; 
v___x_725_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_726_ = lean_ctor_get(v___x_725_, 0);
v_toFunctor_727_ = lean_ctor_get(v_toApplicative_726_, 0);
v_toSeq_728_ = lean_ctor_get(v_toApplicative_726_, 2);
v_toSeqLeft_729_ = lean_ctor_get(v_toApplicative_726_, 3);
v_toSeqRight_730_ = lean_ctor_get(v_toApplicative_726_, 4);
v___f_731_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_732_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_727_, 2);
v___f_733_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_733_, 0, v_toFunctor_727_);
v___f_734_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_734_, 0, v_toFunctor_727_);
v___x_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_735_, 0, v___f_733_);
lean_ctor_set(v___x_735_, 1, v___f_734_);
lean_inc(v_toSeqRight_730_);
v___f_736_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_736_, 0, v_toSeqRight_730_);
lean_inc(v_toSeqLeft_729_);
v___f_737_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_737_, 0, v_toSeqLeft_729_);
lean_inc(v_toSeq_728_);
v___f_738_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_738_, 0, v_toSeq_728_);
v___x_739_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_739_, 0, v___x_735_);
lean_ctor_set(v___x_739_, 1, v___f_731_);
lean_ctor_set(v___x_739_, 2, v___f_738_);
lean_ctor_set(v___x_739_, 3, v___f_737_);
lean_ctor_set(v___x_739_, 4, v___f_736_);
v___x_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v___f_732_);
v___x_741_ = l_StateRefT_x27_instMonad___redArg(v___x_740_);
v_toApplicative_742_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_826_ == 0)
{
lean_object* v_unused_827_; 
v_unused_827_ = lean_ctor_get(v___x_741_, 1);
lean_dec(v_unused_827_);
v___x_744_ = v___x_741_;
v_isShared_745_ = v_isSharedCheck_826_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_toApplicative_742_);
lean_dec(v___x_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_826_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v_toFunctor_746_; lean_object* v_toSeq_747_; lean_object* v_toSeqLeft_748_; lean_object* v_toSeqRight_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_824_; 
v_toFunctor_746_ = lean_ctor_get(v_toApplicative_742_, 0);
v_toSeq_747_ = lean_ctor_get(v_toApplicative_742_, 2);
v_toSeqLeft_748_ = lean_ctor_get(v_toApplicative_742_, 3);
v_toSeqRight_749_ = lean_ctor_get(v_toApplicative_742_, 4);
v_isSharedCheck_824_ = !lean_is_exclusive(v_toApplicative_742_);
if (v_isSharedCheck_824_ == 0)
{
lean_object* v_unused_825_; 
v_unused_825_ = lean_ctor_get(v_toApplicative_742_, 1);
lean_dec(v_unused_825_);
v___x_751_ = v_toApplicative_742_;
v_isShared_752_ = v_isSharedCheck_824_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_toSeqRight_749_);
lean_inc(v_toSeqLeft_748_);
lean_inc(v_toSeq_747_);
lean_inc(v_toFunctor_746_);
lean_dec(v_toApplicative_742_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_824_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___f_753_; lean_object* v___f_754_; lean_object* v___f_755_; lean_object* v___f_756_; lean_object* v___x_757_; lean_object* v___f_758_; lean_object* v___f_759_; lean_object* v___f_760_; lean_object* v___x_762_; 
v___f_753_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_754_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_746_);
v___f_755_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_755_, 0, v_toFunctor_746_);
v___f_756_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_756_, 0, v_toFunctor_746_);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v___f_755_);
lean_ctor_set(v___x_757_, 1, v___f_756_);
v___f_758_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_758_, 0, v_toSeqRight_749_);
v___f_759_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_759_, 0, v_toSeqLeft_748_);
v___f_760_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_760_, 0, v_toSeq_747_);
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 4, v___f_758_);
lean_ctor_set(v___x_751_, 3, v___f_759_);
lean_ctor_set(v___x_751_, 2, v___f_760_);
lean_ctor_set(v___x_751_, 1, v___f_753_);
lean_ctor_set(v___x_751_, 0, v___x_757_);
v___x_762_ = v___x_751_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v___f_753_);
lean_ctor_set(v_reuseFailAlloc_823_, 2, v___f_760_);
lean_ctor_set(v_reuseFailAlloc_823_, 3, v___f_759_);
lean_ctor_set(v_reuseFailAlloc_823_, 4, v___f_758_);
v___x_762_ = v_reuseFailAlloc_823_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
lean_object* v___x_764_; 
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v___f_754_);
lean_ctor_set(v___x_744_, 0, v___x_762_);
v___x_764_ = v___x_744_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_762_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v___f_754_);
v___x_764_ = v_reuseFailAlloc_822_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v_toMonadRef_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v_toApplicative_771_; lean_object* v_toBind_772_; lean_object* v_toPure_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_765_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11);
v___x_766_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17);
v_toMonadRef_767_ = lean_ctor_get(v___x_766_, 0);
v___x_768_ = l_Lean_Meta_instAddMessageContextMetaM;
lean_inc_ref(v___x_764_);
v___x_769_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_768_, v___x_764_);
lean_inc_ref(v_toMonadRef_767_);
v___x_770_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_770_, 0, v___x_765_);
lean_ctor_set(v___x_770_, 1, v_toMonadRef_767_);
lean_ctor_set(v___x_770_, 2, v___x_769_);
v_toApplicative_771_ = lean_ctor_get(v_inst_718_, 0);
v_toBind_772_ = lean_ctor_get(v_inst_718_, 1);
lean_inc(v_toBind_772_);
v_toPure_773_ = lean_ctor_get(v_toApplicative_771_, 1);
lean_inc(v_toPure_773_);
v___x_774_ = lean_unsigned_to_nat(0u);
v___x_775_ = lean_nat_dec_eq(v_n_722_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v_u_776_; lean_object* v_00_u03c3s_777_; lean_object* v_hyps_778_; lean_object* v_target_779_; lean_object* v___f_780_; lean_object* v___f_781_; lean_object* v___f_782_; lean_object* v___f_783_; lean_object* v___f_784_; lean_object* v_T_785_; lean_object* v_f_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v_a_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v_revertArgs_793_; lean_object* v___x_794_; lean_object* v___f_795_; lean_object* v___f_796_; lean_object* v___f_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v_u_776_ = lean_ctor_get(v_goal_721_, 0);
lean_inc_n(v_u_776_, 3);
v_00_u03c3s_777_ = lean_ctor_get(v_goal_721_, 1);
lean_inc_ref_n(v_00_u03c3s_777_, 2);
v_hyps_778_ = lean_ctor_get(v_goal_721_, 2);
lean_inc_ref_n(v_hyps_778_, 2);
v_target_779_ = lean_ctor_get(v_goal_721_, 3);
lean_inc_ref(v_target_779_);
lean_dec_ref(v_goal_721_);
v___f_780_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0));
lean_inc_n(v_inst_720_, 5);
v___f_781_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1), 2, 1);
lean_closure_set(v___f_781_, 0, v_inst_720_);
lean_inc(v_hypName_723_);
v___f_782_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_782_, 0, v_hypName_723_);
lean_inc_n(v_toBind_772_, 4);
lean_inc_n(v_toPure_773_, 2);
v___f_783_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5), 6, 3);
lean_closure_set(v___f_783_, 0, v_toPure_773_);
lean_closure_set(v___f_783_, 1, v_inst_720_);
lean_closure_set(v___f_783_, 2, v_toBind_772_);
v___f_784_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6), 3, 1);
lean_closure_set(v___f_784_, 0, v_u_776_);
v_T_785_ = l_Lean_Expr_consumeMData(v_target_779_);
v_f_786_ = l_Lean_Expr_getAppFn(v_T_785_);
v___x_787_ = l_Lean_Expr_getAppNumArgs(v_T_785_);
v___x_788_ = lean_mk_empty_array_with_capacity(v___x_787_);
lean_dec(v___x_787_);
lean_inc_ref(v_T_785_);
v_a_789_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_T_785_, v___x_788_);
lean_inc_n(v_n_722_, 2);
lean_inc_ref(v_a_789_);
v___x_790_ = l_Array_toSubarray___redArg(v_a_789_, v___x_774_, v_n_722_);
v___x_791_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1));
v___x_792_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_780_, v___x_790_, v___x_791_);
v_revertArgs_793_ = l_Array_reverse___redArg(v___x_792_);
v___x_794_ = lean_box(v___x_775_);
lean_inc_ref(v_inst_718_);
lean_inc_ref_n(v_revertArgs_793_, 3);
v___f_795_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed), 13, 12);
lean_closure_set(v___f_795_, 0, v_u_776_);
lean_closure_set(v___f_795_, 1, v_00_u03c3s_777_);
lean_closure_set(v___f_795_, 2, v_hypName_723_);
lean_closure_set(v___f_795_, 3, v_toPure_773_);
lean_closure_set(v___f_795_, 4, v_hyps_778_);
lean_closure_set(v___f_795_, 5, v___x_794_);
lean_closure_set(v___f_795_, 6, v_inst_720_);
lean_closure_set(v___f_795_, 7, v_toBind_772_);
lean_closure_set(v___f_795_, 8, v___f_782_);
lean_closure_set(v___f_795_, 9, v_revertArgs_793_);
lean_closure_set(v___f_795_, 10, v_inst_718_);
lean_closure_set(v___f_795_, 11, v___f_781_);
lean_inc_ref_n(v___x_764_, 2);
v___f_796_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed), 20, 19);
lean_closure_set(v___f_796_, 0, v_u_776_);
lean_closure_set(v___f_796_, 1, v_revertArgs_793_);
lean_closure_set(v___f_796_, 2, v_00_u03c3s_777_);
lean_closure_set(v___f_796_, 3, v_hyps_778_);
lean_closure_set(v___f_796_, 4, v_target_779_);
lean_closure_set(v___f_796_, 5, v_toPure_773_);
lean_closure_set(v___f_796_, 6, v_inst_720_);
lean_closure_set(v___f_796_, 7, v_toBind_772_);
lean_closure_set(v___f_796_, 8, v_a_789_);
lean_closure_set(v___f_796_, 9, v_n_722_);
lean_closure_set(v___f_796_, 10, v_f_786_);
lean_closure_set(v___f_796_, 11, v_k_724_);
lean_closure_set(v___f_796_, 12, v___x_774_);
lean_closure_set(v___f_796_, 13, v___f_784_);
lean_closure_set(v___f_796_, 14, v___x_764_);
lean_closure_set(v___f_796_, 15, v_inst_719_);
lean_closure_set(v___f_796_, 16, v_inst_718_);
lean_closure_set(v___f_796_, 17, v___f_795_);
lean_closure_set(v___f_796_, 18, v___f_783_);
lean_inc_ref(v___f_796_);
v___f_797_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed), 6, 5);
lean_closure_set(v___f_797_, 0, v_revertArgs_793_);
lean_closure_set(v___f_797_, 1, v___x_764_);
lean_closure_set(v___f_797_, 2, v_inst_720_);
lean_closure_set(v___f_797_, 3, v_toBind_772_);
lean_closure_set(v___f_797_, 4, v___f_796_);
v___x_798_ = lean_array_get_size(v_revertArgs_793_);
v___x_799_ = lean_nat_dec_eq(v___x_798_, v_n_722_);
if (v___x_799_ == 0)
{
lean_object* v___f_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
lean_dec_ref(v___f_796_);
lean_dec_ref(v_revertArgs_793_);
v___f_800_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21), 2, 1);
lean_closure_set(v___f_800_, 0, v___f_797_);
v___x_801_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3);
v___x_802_ = l_Nat_reprFast(v_n_722_);
v___x_803_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
v___x_804_ = l_Lean_MessageData_ofFormat(v___x_803_);
v___x_805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_801_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5);
v___x_807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_805_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = l_Lean_MessageData_ofExpr(v_T_785_);
v___x_809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_807_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7);
v___x_811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_809_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = l_Nat_reprFast(v___x_798_);
v___x_813_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
v___x_814_ = l_Lean_MessageData_ofFormat(v___x_813_);
v___x_815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_811_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___x_816_ = l_Lean_throwError___redArg(v___x_764_, v___x_770_, v___x_815_);
v___x_817_ = lean_apply_2(v_inst_720_, lean_box(0), v___x_816_);
v___x_818_ = lean_apply_4(v_toBind_772_, lean_box(0), lean_box(0), v___x_817_, v___f_800_);
return v___x_818_;
}
else
{
lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec_ref(v___f_797_);
lean_dec_ref(v_T_785_);
lean_dec_ref_known(v___x_770_, 3);
lean_dec(v_n_722_);
v___x_819_ = lean_box(0);
v___x_820_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(v_revertArgs_793_, v___x_764_, v_inst_720_, v_toBind_772_, v___f_796_, v___x_819_);
lean_dec_ref(v_revertArgs_793_);
return v___x_820_;
}
}
else
{
lean_object* v___x_821_; 
lean_dec(v_toPure_773_);
lean_dec(v_toBind_772_);
lean_dec_ref_known(v___x_770_, 3);
lean_dec_ref(v___x_764_);
lean_dec(v_hypName_723_);
lean_dec(v_n_722_);
lean_dec(v_inst_720_);
lean_dec_ref(v_inst_719_);
lean_dec_ref(v_inst_718_);
v___x_821_ = lean_apply_1(v_k_724_, v_goal_721_);
return v___x_821_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN(lean_object* v_m_828_, lean_object* v_inst_829_, lean_object* v_inst_830_, lean_object* v_inst_831_, lean_object* v_goal_832_, lean_object* v_n_833_, lean_object* v_hypName_834_, lean_object* v_k_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg(v_inst_829_, v_inst_830_, v_inst_831_, v_goal_832_, v_n_833_, v_hypName_834_, v_k_835_);
return v___x_836_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = lean_box(0);
v___x_838_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
lean_ctor_set(v___x_839_, 1, v___x_837_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg(){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0);
v___x_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___boxed(lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0(lean_object* v_00_u03b1_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___boxed(lean_object* v_00_u03b1_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0(v_00_u03b1_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0(lean_object* v_x_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; 
lean_inc(v___y_871_);
lean_inc_ref(v___y_870_);
lean_inc(v___y_869_);
lean_inc_ref(v___y_868_);
v___x_877_ = lean_apply_9(v_x_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, lean_box(0));
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0___boxed(lean_object* v_x_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0(v_x_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(lean_object* v_mvarId_889_, lean_object* v_x_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v___f_900_; lean_object* v___x_901_; 
lean_inc(v___y_894_);
lean_inc_ref(v___y_893_);
lean_inc(v___y_892_);
lean_inc_ref(v___y_891_);
v___f_900_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_900_, 0, v_x_890_);
lean_closure_set(v___f_900_, 1, v___y_891_);
lean_closure_set(v___f_900_, 2, v___y_892_);
lean_closure_set(v___f_900_, 3, v___y_893_);
lean_closure_set(v___f_900_, 4, v___y_894_);
v___x_901_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_889_, v___f_900_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
if (lean_obj_tag(v___x_901_) == 0)
{
return v___x_901_;
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_901_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_901_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___boxed(lean_object* v_mvarId_910_, lean_object* v_x_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_mvarId_910_, v_x_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3(lean_object* v_00_u03b1_922_, lean_object* v_mvarId_923_, lean_object* v_x_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_mvarId_923_, v_x_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___boxed(lean_object* v_00_u03b1_935_, lean_object* v_mvarId_936_, lean_object* v_x_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3(v_00_u03b1_935_, v_mvarId_936_, v_x_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
return v_res_947_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___closed__0(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = lean_box(0);
v___x_949_ = l_unsafeCast___redArg(v___x_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(lean_object* v_val_950_, lean_object* v_newGoal_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_961_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_newGoal_951_);
v___x_962_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___closed__0);
v___x_963_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_961_, v___x_962_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_975_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_975_ == 0)
{
v___x_966_ = v___x_963_;
v_isShared_967_ = v_isSharedCheck_975_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_963_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_975_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_968_ = lean_st_ref_take(v_val_950_);
v___x_969_ = l_Lean_Expr_mvarId_x21(v_a_964_);
v___x_970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
lean_ctor_set(v___x_970_, 1, v___x_968_);
v___x_971_ = lean_st_ref_put(v_val_950_, v___x_970_);
if (v_isShared_967_ == 0)
{
v___x_973_ = v___x_966_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_964_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
else
{
return v___x_963_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed(lean_object* v_val_976_, lean_object* v_newGoal_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(v_val_976_, v_newGoal_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v_val_976_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22___redArg(lean_object* v_x_988_, lean_object* v_x_989_, lean_object* v_x_990_, lean_object* v_x_991_){
_start:
{
lean_object* v_ks_992_; lean_object* v_vs_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1017_; 
v_ks_992_ = lean_ctor_get(v_x_988_, 0);
v_vs_993_ = lean_ctor_get(v_x_988_, 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_x_988_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_995_ = v_x_988_;
v_isShared_996_ = v_isSharedCheck_1017_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_vs_993_);
lean_inc(v_ks_992_);
lean_dec(v_x_988_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1017_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_997_; uint8_t v___x_998_; 
v___x_997_ = lean_array_get_size(v_ks_992_);
v___x_998_ = lean_nat_dec_lt(v_x_989_, v___x_997_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
lean_dec(v_x_989_);
v___x_999_ = lean_array_push(v_ks_992_, v_x_990_);
v___x_1000_ = lean_array_push(v_vs_993_, v_x_991_);
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 1, v___x_1000_);
lean_ctor_set(v___x_995_, 0, v___x_999_);
v___x_1002_ = v___x_995_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v___x_1000_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
else
{
lean_object* v_k_x27_1004_; uint8_t v___x_1005_; 
v_k_x27_1004_ = lean_array_fget_borrowed(v_ks_992_, v_x_989_);
v___x_1005_ = l_Lean_instBEqMVarId_beq(v_x_990_, v_k_x27_1004_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1007_; 
if (v_isShared_996_ == 0)
{
v___x_1007_ = v___x_995_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_ks_992_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v_vs_993_);
v___x_1007_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lean_unsigned_to_nat(1u);
v___x_1009_ = lean_nat_add(v_x_989_, v___x_1008_);
lean_dec(v_x_989_);
v_x_988_ = v___x_1007_;
v_x_989_ = v___x_1009_;
goto _start;
}
}
else
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1015_; 
v___x_1012_ = lean_array_fset(v_ks_992_, v_x_989_, v_x_990_);
v___x_1013_ = lean_array_fset(v_vs_993_, v_x_989_, v_x_991_);
lean_dec(v_x_989_);
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 1, v___x_1013_);
lean_ctor_set(v___x_995_, 0, v___x_1012_);
v___x_1015_ = v___x_995_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v___x_1013_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20___redArg(lean_object* v_n_1018_, lean_object* v_k_1019_, lean_object* v_v_1020_){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = lean_unsigned_to_nat(0u);
v___x_1022_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22___redArg(v_n_1018_, v___x_1021_, v_k_1019_, v_v_1020_);
return v___x_1022_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_box(0);
v___x_1024_ = l_unsafeCast___redArg(v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1(void){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(lean_object* v_x_1026_, size_t v_x_1027_, size_t v_x_1028_, lean_object* v_x_1029_, lean_object* v_x_1030_){
_start:
{
if (lean_obj_tag(v_x_1026_) == 0)
{
lean_object* v_es_1031_; size_t v___x_1032_; size_t v___x_1033_; lean_object* v_j_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v_es_1031_ = lean_ctor_get(v_x_1026_, 0);
v___x_1032_ = ((size_t)31ULL);
v___x_1033_ = lean_usize_land(v_x_1027_, v___x_1032_);
v_j_1034_ = lean_usize_to_nat(v___x_1033_);
v___x_1035_ = lean_array_get_size(v_es_1031_);
v___x_1036_ = lean_nat_dec_lt(v_j_1034_, v___x_1035_);
if (v___x_1036_ == 0)
{
lean_dec(v_j_1034_);
lean_dec(v_x_1030_);
lean_dec(v_x_1029_);
return v_x_1026_;
}
else
{
lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1075_; 
lean_inc_ref(v_es_1031_);
v_isSharedCheck_1075_ = !lean_is_exclusive(v_x_1026_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; 
v_unused_1076_ = lean_ctor_get(v_x_1026_, 0);
lean_dec(v_unused_1076_);
v___x_1038_ = v_x_1026_;
v_isShared_1039_ = v_isSharedCheck_1075_;
goto v_resetjp_1037_;
}
else
{
lean_dec(v_x_1026_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1075_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v_v_1040_; lean_object* v___x_1041_; lean_object* v_xs_x27_1042_; lean_object* v___y_1044_; 
v_v_1040_ = lean_array_fget(v_es_1031_, v_j_1034_);
v___x_1041_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0);
v_xs_x27_1042_ = lean_array_fset(v_es_1031_, v_j_1034_, v___x_1041_);
switch(lean_obj_tag(v_v_1040_))
{
case 0:
{
lean_object* v_key_1049_; lean_object* v_val_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1060_; 
v_key_1049_ = lean_ctor_get(v_v_1040_, 0);
v_val_1050_ = lean_ctor_get(v_v_1040_, 1);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_v_1040_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1052_ = v_v_1040_;
v_isShared_1053_ = v_isSharedCheck_1060_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_val_1050_);
lean_inc(v_key_1049_);
lean_dec(v_v_1040_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1060_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
uint8_t v___x_1054_; 
v___x_1054_ = l_Lean_instBEqMVarId_beq(v_x_1029_, v_key_1049_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
lean_del_object(v___x_1052_);
v___x_1055_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1049_, v_val_1050_, v_x_1029_, v_x_1030_);
v___x_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
v___y_1044_ = v___x_1056_;
goto v___jp_1043_;
}
else
{
lean_object* v___x_1058_; 
lean_dec(v_val_1050_);
lean_dec(v_key_1049_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 1, v_x_1030_);
lean_ctor_set(v___x_1052_, 0, v_x_1029_);
v___x_1058_ = v___x_1052_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_x_1029_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v_x_1030_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
v___y_1044_ = v___x_1058_;
goto v___jp_1043_;
}
}
}
}
case 1:
{
lean_object* v_node_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1073_; 
v_node_1061_ = lean_ctor_get(v_v_1040_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_v_1040_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1063_ = v_v_1040_;
v_isShared_1064_ = v_isSharedCheck_1073_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_node_1061_);
lean_dec(v_v_1040_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1073_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
size_t v___x_1065_; size_t v___x_1066_; size_t v___x_1067_; size_t v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1071_; 
v___x_1065_ = ((size_t)5ULL);
v___x_1066_ = lean_usize_shift_right(v_x_1027_, v___x_1065_);
v___x_1067_ = ((size_t)1ULL);
v___x_1068_ = lean_usize_add(v_x_1028_, v___x_1067_);
v___x_1069_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_node_1061_, v___x_1066_, v___x_1068_, v_x_1029_, v_x_1030_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v___x_1069_);
v___x_1071_ = v___x_1063_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
v___y_1044_ = v___x_1071_;
goto v___jp_1043_;
}
}
}
default: 
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v_x_1029_);
lean_ctor_set(v___x_1074_, 1, v_x_1030_);
v___y_1044_ = v___x_1074_;
goto v___jp_1043_;
}
}
v___jp_1043_:
{
lean_object* v___x_1045_; lean_object* v___x_1047_; 
v___x_1045_ = lean_array_fset(v_xs_x27_1042_, v_j_1034_, v___y_1044_);
lean_dec(v_j_1034_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 0, v___x_1045_);
v___x_1047_ = v___x_1038_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
else
{
lean_object* v_ks_1077_; lean_object* v_vs_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1096_; 
v_ks_1077_ = lean_ctor_get(v_x_1026_, 0);
v_vs_1078_ = lean_ctor_get(v_x_1026_, 1);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_x_1026_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1080_ = v_x_1026_;
v_isShared_1081_ = v_isSharedCheck_1096_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_vs_1078_);
lean_inc(v_ks_1077_);
lean_dec(v_x_1026_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1096_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_ks_1077_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_vs_1078_);
v___x_1083_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v_newNode_1084_; size_t v___x_1085_; uint8_t v___x_1086_; 
v_newNode_1084_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20___redArg(v___x_1083_, v_x_1029_, v_x_1030_);
v___x_1085_ = ((size_t)7ULL);
v___x_1086_ = lean_usize_dec_le(v___x_1085_, v_x_1028_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1087_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1084_);
v___x_1088_ = lean_unsigned_to_nat(4u);
v___x_1089_ = lean_nat_dec_lt(v___x_1087_, v___x_1088_);
lean_dec(v___x_1087_);
if (v___x_1089_ == 0)
{
lean_object* v_ks_1090_; lean_object* v_vs_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_ks_1090_ = lean_ctor_get(v_newNode_1084_, 0);
lean_inc_ref(v_ks_1090_);
v_vs_1091_ = lean_ctor_get(v_newNode_1084_, 1);
lean_inc_ref(v_vs_1091_);
lean_dec_ref(v_newNode_1084_);
v___x_1092_ = lean_unsigned_to_nat(0u);
v___x_1093_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1);
v___x_1094_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(v_x_1028_, v_ks_1090_, v_vs_1091_, v___x_1092_, v___x_1093_);
lean_dec_ref(v_vs_1091_);
lean_dec_ref(v_ks_1090_);
return v___x_1094_;
}
else
{
return v_newNode_1084_;
}
}
else
{
return v_newNode_1084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(size_t v_depth_1097_, lean_object* v_keys_1098_, lean_object* v_vals_1099_, lean_object* v_i_1100_, lean_object* v_entries_1101_){
_start:
{
lean_object* v___x_1102_; uint8_t v___x_1103_; 
v___x_1102_ = lean_array_get_size(v_keys_1098_);
v___x_1103_ = lean_nat_dec_lt(v_i_1100_, v___x_1102_);
if (v___x_1103_ == 0)
{
lean_dec(v_i_1100_);
return v_entries_1101_;
}
else
{
lean_object* v_k_1104_; lean_object* v_v_1105_; uint64_t v___x_1106_; size_t v_h_1107_; size_t v___x_1108_; lean_object* v___x_1109_; size_t v___x_1110_; size_t v___x_1111_; size_t v___x_1112_; size_t v_h_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v_k_1104_ = lean_array_fget_borrowed(v_keys_1098_, v_i_1100_);
v_v_1105_ = lean_array_fget_borrowed(v_vals_1099_, v_i_1100_);
v___x_1106_ = l_Lean_instHashableMVarId_hash(v_k_1104_);
v_h_1107_ = lean_uint64_to_usize(v___x_1106_);
v___x_1108_ = ((size_t)5ULL);
v___x_1109_ = lean_unsigned_to_nat(1u);
v___x_1110_ = ((size_t)1ULL);
v___x_1111_ = lean_usize_sub(v_depth_1097_, v___x_1110_);
v___x_1112_ = lean_usize_mul(v___x_1108_, v___x_1111_);
v_h_1113_ = lean_usize_shift_right(v_h_1107_, v___x_1112_);
v___x_1114_ = lean_nat_add(v_i_1100_, v___x_1109_);
lean_dec(v_i_1100_);
lean_inc(v_v_1105_);
lean_inc(v_k_1104_);
v___x_1115_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_entries_1101_, v_h_1113_, v_depth_1097_, v_k_1104_, v_v_1105_);
v_i_1100_ = v___x_1114_;
v_entries_1101_ = v___x_1115_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg___boxed(lean_object* v_depth_1117_, lean_object* v_keys_1118_, lean_object* v_vals_1119_, lean_object* v_i_1120_, lean_object* v_entries_1121_){
_start:
{
size_t v_depth_boxed_1122_; lean_object* v_res_1123_; 
v_depth_boxed_1122_ = lean_unbox_usize(v_depth_1117_);
lean_dec(v_depth_1117_);
v_res_1123_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(v_depth_boxed_1122_, v_keys_1118_, v_vals_1119_, v_i_1120_, v_entries_1121_);
lean_dec_ref(v_vals_1119_);
lean_dec_ref(v_keys_1118_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___boxed(lean_object* v_x_1124_, lean_object* v_x_1125_, lean_object* v_x_1126_, lean_object* v_x_1127_, lean_object* v_x_1128_){
_start:
{
size_t v_x_17103__boxed_1129_; size_t v_x_17104__boxed_1130_; lean_object* v_res_1131_; 
v_x_17103__boxed_1129_ = lean_unbox_usize(v_x_1125_);
lean_dec(v_x_1125_);
v_x_17104__boxed_1130_ = lean_unbox_usize(v_x_1126_);
lean_dec(v_x_1126_);
v_res_1131_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_x_1124_, v_x_17103__boxed_1129_, v_x_17104__boxed_1130_, v_x_1127_, v_x_1128_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(lean_object* v_x_1132_, lean_object* v_x_1133_, lean_object* v_x_1134_){
_start:
{
uint64_t v___x_1135_; size_t v___x_1136_; size_t v___x_1137_; lean_object* v___x_1138_; 
v___x_1135_ = l_Lean_instHashableMVarId_hash(v_x_1133_);
v___x_1136_ = lean_uint64_to_usize(v___x_1135_);
v___x_1137_ = ((size_t)1ULL);
v___x_1138_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_x_1132_, v___x_1136_, v___x_1137_, v_x_1133_, v_x_1134_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(lean_object* v_mvarId_1139_, lean_object* v_val_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1143_; lean_object* v_mctx_1144_; lean_object* v_cache_1145_; lean_object* v_zetaDeltaFVarIds_1146_; lean_object* v_postponed_1147_; lean_object* v_diag_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1177_; 
v___x_1143_ = lean_st_ref_take(v___y_1141_);
v_mctx_1144_ = lean_ctor_get(v___x_1143_, 0);
v_cache_1145_ = lean_ctor_get(v___x_1143_, 1);
v_zetaDeltaFVarIds_1146_ = lean_ctor_get(v___x_1143_, 2);
v_postponed_1147_ = lean_ctor_get(v___x_1143_, 3);
v_diag_1148_ = lean_ctor_get(v___x_1143_, 4);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1150_ = v___x_1143_;
v_isShared_1151_ = v_isSharedCheck_1177_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_diag_1148_);
lean_inc(v_postponed_1147_);
lean_inc(v_zetaDeltaFVarIds_1146_);
lean_inc(v_cache_1145_);
lean_inc(v_mctx_1144_);
lean_dec(v___x_1143_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1177_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v_depth_1152_; lean_object* v_levelAssignDepth_1153_; lean_object* v_lmvarCounter_1154_; lean_object* v_mvarCounter_1155_; lean_object* v_lDecls_1156_; lean_object* v_decls_1157_; lean_object* v_userNames_1158_; lean_object* v_lAssignment_1159_; lean_object* v_eAssignment_1160_; lean_object* v_dAssignment_1161_; lean_object* v_instanceTypedMVars_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1176_; 
v_depth_1152_ = lean_ctor_get(v_mctx_1144_, 0);
v_levelAssignDepth_1153_ = lean_ctor_get(v_mctx_1144_, 1);
v_lmvarCounter_1154_ = lean_ctor_get(v_mctx_1144_, 2);
v_mvarCounter_1155_ = lean_ctor_get(v_mctx_1144_, 3);
v_lDecls_1156_ = lean_ctor_get(v_mctx_1144_, 4);
v_decls_1157_ = lean_ctor_get(v_mctx_1144_, 5);
v_userNames_1158_ = lean_ctor_get(v_mctx_1144_, 6);
v_lAssignment_1159_ = lean_ctor_get(v_mctx_1144_, 7);
v_eAssignment_1160_ = lean_ctor_get(v_mctx_1144_, 8);
v_dAssignment_1161_ = lean_ctor_get(v_mctx_1144_, 9);
v_instanceTypedMVars_1162_ = lean_ctor_get(v_mctx_1144_, 10);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_mctx_1144_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1164_ = v_mctx_1144_;
v_isShared_1165_ = v_isSharedCheck_1176_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_instanceTypedMVars_1162_);
lean_inc(v_dAssignment_1161_);
lean_inc(v_eAssignment_1160_);
lean_inc(v_lAssignment_1159_);
lean_inc(v_userNames_1158_);
lean_inc(v_decls_1157_);
lean_inc(v_lDecls_1156_);
lean_inc(v_mvarCounter_1155_);
lean_inc(v_lmvarCounter_1154_);
lean_inc(v_levelAssignDepth_1153_);
lean_inc(v_depth_1152_);
lean_dec(v_mctx_1144_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1176_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1166_ = lean_box(0);
v___x_1167_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(v_eAssignment_1160_, v_mvarId_1139_, v_val_1140_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 8, v___x_1167_);
v___x_1169_ = v___x_1164_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_depth_1152_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_levelAssignDepth_1153_);
lean_ctor_set(v_reuseFailAlloc_1175_, 2, v_lmvarCounter_1154_);
lean_ctor_set(v_reuseFailAlloc_1175_, 3, v_mvarCounter_1155_);
lean_ctor_set(v_reuseFailAlloc_1175_, 4, v_lDecls_1156_);
lean_ctor_set(v_reuseFailAlloc_1175_, 5, v_decls_1157_);
lean_ctor_set(v_reuseFailAlloc_1175_, 6, v_userNames_1158_);
lean_ctor_set(v_reuseFailAlloc_1175_, 7, v_lAssignment_1159_);
lean_ctor_set(v_reuseFailAlloc_1175_, 8, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1175_, 9, v_dAssignment_1161_);
lean_ctor_set(v_reuseFailAlloc_1175_, 10, v_instanceTypedMVars_1162_);
v___x_1169_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
lean_object* v___x_1171_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v___x_1169_);
v___x_1171_ = v___x_1150_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1169_);
lean_ctor_set(v_reuseFailAlloc_1174_, 1, v_cache_1145_);
lean_ctor_set(v_reuseFailAlloc_1174_, 2, v_zetaDeltaFVarIds_1146_);
lean_ctor_set(v_reuseFailAlloc_1174_, 3, v_postponed_1147_);
lean_ctor_set(v_reuseFailAlloc_1174_, 4, v_diag_1148_);
v___x_1171_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_st_ref_put(v___y_1141_, v___x_1171_);
v___x_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1166_);
return v___x_1173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg___boxed(lean_object* v_mvarId_1178_, lean_object* v_val_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_mvarId_1178_, v_val_1179_, v___y_1180_);
lean_dec(v___y_1180_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(lean_object* v_msgData_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1189_; lean_object* v_env_1190_; lean_object* v___x_1191_; lean_object* v_toCold_1192_; lean_object* v_mctx_1193_; lean_object* v_lctx_1194_; lean_object* v_options_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1189_ = lean_st_ref_get(v___y_1187_);
v_env_1190_ = lean_ctor_get(v___x_1189_, 0);
lean_inc_ref(v_env_1190_);
lean_dec(v___x_1189_);
v___x_1191_ = lean_st_ref_get(v___y_1185_);
v_toCold_1192_ = lean_ctor_get(v___y_1186_, 0);
v_mctx_1193_ = lean_ctor_get(v___x_1191_, 0);
lean_inc_ref(v_mctx_1193_);
lean_dec(v___x_1191_);
v_lctx_1194_ = lean_ctor_get(v___y_1184_, 2);
v_options_1195_ = lean_ctor_get(v_toCold_1192_, 2);
lean_inc_ref(v_options_1195_);
lean_inc_ref(v_lctx_1194_);
v___x_1196_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1196_, 0, v_env_1190_);
lean_ctor_set(v___x_1196_, 1, v_mctx_1193_);
lean_ctor_set(v___x_1196_, 2, v_lctx_1194_);
lean_ctor_set(v___x_1196_, 3, v_options_1195_);
v___x_1197_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
lean_ctor_set(v___x_1197_, 1, v_msgData_1183_);
v___x_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14___boxed(lean_object* v_msgData_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msgData_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(lean_object* v_msg_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_ref_1212_; lean_object* v___x_1213_; lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1222_; 
v_ref_1212_ = lean_ctor_get(v___y_1209_, 2);
v___x_1213_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msg_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1216_ = v___x_1213_;
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1218_; lean_object* v___x_1220_; 
lean_inc(v_ref_1212_);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v_ref_1212_);
lean_ctor_set(v___x_1218_, 1, v_a_1214_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set_tag(v___x_1216_, 1);
lean_ctor_set(v___x_1216_, 0, v___x_1218_);
v___x_1220_ = v___x_1216_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg___boxed(lean_object* v_msg_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v_msg_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(lean_object* v_u_1230_, lean_object* v_as_1231_, size_t v_i_1232_, size_t v_stop_1233_, lean_object* v_b_1234_){
_start:
{
uint8_t v___x_1235_; 
v___x_1235_ = lean_usize_dec_eq(v_i_1232_, v_stop_1233_);
if (v___x_1235_ == 0)
{
size_t v___x_1236_; size_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1236_ = ((size_t)1ULL);
v___x_1237_ = lean_usize_sub(v_i_1232_, v___x_1236_);
v___x_1238_ = lean_array_uget_borrowed(v_as_1231_, v___x_1237_);
lean_inc(v___x_1238_);
lean_inc(v_u_1230_);
v___x_1239_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(v_u_1230_, v___x_1238_, v_b_1234_);
v_i_1232_ = v___x_1237_;
v_b_1234_ = v___x_1239_;
goto _start;
}
else
{
lean_dec(v_u_1230_);
return v_b_1234_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7___boxed(lean_object* v_u_1241_, lean_object* v_as_1242_, lean_object* v_i_1243_, lean_object* v_stop_1244_, lean_object* v_b_1245_){
_start:
{
size_t v_i_boxed_1246_; size_t v_stop_boxed_1247_; lean_object* v_res_1248_; 
v_i_boxed_1246_ = lean_unbox_usize(v_i_1243_);
lean_dec(v_i_1243_);
v_stop_boxed_1247_ = lean_unbox_usize(v_stop_1244_);
lean_dec(v_stop_1244_);
v_res_1248_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(v_u_1241_, v_as_1242_, v_i_boxed_1246_, v_stop_boxed_1247_, v_b_1245_);
lean_dec_ref(v_as_1242_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(size_t v_sz_1249_, size_t v_i_1250_, lean_object* v_bs_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
uint8_t v___x_1257_; 
v___x_1257_ = lean_usize_dec_lt(v_i_1250_, v_sz_1249_);
if (v___x_1257_ == 0)
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1258_ = l_unsafeCast___redArg(v_bs_1251_);
lean_dec_ref(v_bs_1251_);
v___x_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
return v___x_1259_;
}
else
{
lean_object* v_v_1260_; lean_object* v___x_1261_; lean_object* v_bs_x27_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v_v_1260_ = lean_array_uget(v_bs_1251_, v_i_1250_);
v___x_1261_ = lean_unsigned_to_nat(0u);
v_bs_x27_1262_ = lean_array_uset(v_bs_1251_, v_i_1250_, v___x_1261_);
v___x_1263_ = l_unsafeCast___redArg(v_v_1260_);
lean_dec(v_v_1260_);
v___x_1264_ = l_Lean_Meta_mkEqRefl(v___x_1263_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; size_t v___x_1266_; size_t v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___x_1264_, 1);
v___x_1266_ = ((size_t)1ULL);
v___x_1267_ = lean_usize_add(v_i_1250_, v___x_1266_);
v___x_1268_ = l_unsafeCast___redArg(v_a_1265_);
lean_dec(v_a_1265_);
v___x_1269_ = lean_array_uset(v_bs_x27_1262_, v_i_1250_, v___x_1268_);
v_i_1250_ = v___x_1267_;
v_bs_1251_ = v___x_1269_;
goto _start;
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
lean_dec_ref(v_bs_x27_1262_);
v_a_1271_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1264_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1264_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6___boxed(lean_object* v_sz_1279_, lean_object* v_i_1280_, lean_object* v_bs_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
size_t v_sz_boxed_1287_; size_t v_i_boxed_1288_; lean_object* v_res_1289_; 
v_sz_boxed_1287_ = lean_unbox_usize(v_sz_1279_);
lean_dec(v_sz_1279_);
v_i_boxed_1288_ = lean_unbox_usize(v_i_1280_);
lean_dec(v_i_1280_);
v_res_1289_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(v_sz_boxed_1287_, v_i_boxed_1288_, v_bs_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(size_t v_sz_1290_, size_t v_i_1291_, lean_object* v_bs_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
uint8_t v___x_1296_; 
v___x_1296_ = lean_usize_dec_lt(v_i_1291_, v_sz_1290_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = l_unsafeCast___redArg(v_bs_1292_);
lean_dec_ref(v_bs_1292_);
v___x_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
return v___x_1298_;
}
else
{
lean_object* v_v_1299_; lean_object* v___x_1300_; lean_object* v_bs_x27_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v_v_1299_ = lean_array_uget(v_bs_1292_, v_i_1291_);
v___x_1300_ = lean_unsigned_to_nat(0u);
v_bs_x27_1301_ = lean_array_uset(v_bs_1292_, v_i_1291_, v___x_1300_);
v___x_1302_ = lean_usize_to_nat(v_i_1291_);
v___x_1303_ = l_unsafeCast___redArg(v_v_1299_);
lean_dec(v_v_1299_);
v___x_1304_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___closed__1));
v___x_1305_ = l_Lean_Core_mkFreshUserName(v___x_1304_, v___y_1293_, v___y_1294_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; size_t v___x_1311_; size_t v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_a_1306_);
lean_dec_ref_known(v___x_1305_, 1);
v___x_1307_ = lean_unsigned_to_nat(1u);
v___x_1308_ = lean_nat_add(v___x_1302_, v___x_1307_);
lean_dec(v___x_1302_);
v___x_1309_ = lean_name_append_index_after(v_a_1306_, v___x_1308_);
v___x_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set(v___x_1310_, 1, v___x_1303_);
v___x_1311_ = ((size_t)1ULL);
v___x_1312_ = lean_usize_add(v_i_1291_, v___x_1311_);
v___x_1313_ = l_unsafeCast___redArg(v___x_1310_);
lean_dec_ref_known(v___x_1310_, 2);
v___x_1314_ = lean_array_uset(v_bs_x27_1301_, v_i_1291_, v___x_1313_);
v_i_1291_ = v___x_1312_;
v_bs_1292_ = v___x_1314_;
goto _start;
}
else
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_dec(v___x_1303_);
lean_dec(v___x_1302_);
lean_dec_ref(v_bs_x27_1301_);
v_a_1316_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1305_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1305_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg___boxed(lean_object* v_sz_1324_, lean_object* v_i_1325_, lean_object* v_bs_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
size_t v_sz_boxed_1330_; size_t v_i_boxed_1331_; lean_object* v_res_1332_; 
v_sz_boxed_1330_ = lean_unbox_usize(v_sz_1324_);
lean_dec(v_sz_1324_);
v_i_boxed_1331_ = lean_unbox_usize(v_i_1325_);
lean_dec(v_i_1325_);
v_res_1332_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_sz_boxed_1330_, v_i_boxed_1331_, v_bs_1326_, v___y_1327_, v___y_1328_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4(lean_object* v_as_1333_, size_t v_sz_1334_, size_t v_i_1335_, lean_object* v_bs_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_sz_1334_, v_i_1335_, v_bs_1336_, v___y_1343_, v___y_1344_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___boxed(lean_object* v_as_1347_, lean_object* v_sz_1348_, lean_object* v_i_1349_, lean_object* v_bs_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
size_t v_sz_boxed_1360_; size_t v_i_boxed_1361_; lean_object* v_res_1362_; 
v_sz_boxed_1360_ = lean_unbox_usize(v_sz_1348_);
lean_dec(v_sz_1348_);
v_i_boxed_1361_ = lean_unbox_usize(v_i_1349_);
lean_dec(v_i_1349_);
v_res_1362_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4(v_as_1347_, v_sz_boxed_1360_, v_i_boxed_1361_, v_bs_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec_ref(v_as_1347_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(lean_object* v_a_1363_, lean_object* v_b_1364_){
_start:
{
lean_object* v_array_1365_; lean_object* v_start_1366_; lean_object* v_stop_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1380_; 
v_array_1365_ = lean_ctor_get(v_a_1363_, 0);
v_start_1366_ = lean_ctor_get(v_a_1363_, 1);
v_stop_1367_ = lean_ctor_get(v_a_1363_, 2);
v_isSharedCheck_1380_ = !lean_is_exclusive(v_a_1363_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1369_ = v_a_1363_;
v_isShared_1370_ = v_isSharedCheck_1380_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_stop_1367_);
lean_inc(v_start_1366_);
lean_inc(v_array_1365_);
lean_dec(v_a_1363_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1380_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
uint8_t v___x_1371_; 
v___x_1371_ = lean_nat_dec_lt(v_start_1366_, v_stop_1367_);
if (v___x_1371_ == 0)
{
lean_del_object(v___x_1369_);
lean_dec(v_stop_1367_);
lean_dec(v_start_1366_);
lean_dec_ref(v_array_1365_);
return v_b_1364_;
}
else
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1375_; 
v___x_1372_ = lean_unsigned_to_nat(1u);
v___x_1373_ = lean_nat_add(v_start_1366_, v___x_1372_);
lean_inc_ref(v_array_1365_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 1, v___x_1373_);
v___x_1375_ = v___x_1369_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_array_1365_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v___x_1373_);
lean_ctor_set(v_reuseFailAlloc_1379_, 2, v_stop_1367_);
v___x_1375_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = lean_array_fget(v_array_1365_, v_start_1366_);
lean_dec(v_start_1366_);
lean_dec_ref(v_array_1365_);
v___x_1377_ = lean_array_push(v_b_1364_, v___x_1376_);
v_a_1363_ = v___x_1375_;
v_b_1364_ = v___x_1377_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0(lean_object* v___x_1381_, lean_object* v___x_1382_, lean_object* v_a_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_){
_start:
{
lean_object* v___x_16792__overap_1393_; lean_object* v___x_1394_; 
v___x_16792__overap_1393_ = l_instInhabitedOfMonad___redArg(v___x_1381_, v___x_1382_);
lean_inc(v___y_1391_);
lean_inc_ref(v___y_1390_);
lean_inc(v___y_1389_);
lean_inc_ref(v___y_1388_);
lean_inc(v___y_1387_);
lean_inc_ref(v___y_1386_);
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1384_);
v___x_1394_ = lean_apply_9(v___x_16792__overap_1393_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, lean_box(0));
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0___boxed(lean_object* v___x_1395_, lean_object* v___x_1396_, lean_object* v_a_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v_res_1407_; 
v_res_1407_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0(v___x_1395_, v___x_1396_, v_a_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec_ref(v_a_1397_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0(lean_object* v_k_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v_b_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v___x_1419_; 
lean_inc(v___y_1417_);
lean_inc_ref(v___y_1416_);
lean_inc(v___y_1415_);
lean_inc_ref(v___y_1414_);
lean_inc(v___y_1412_);
lean_inc_ref(v___y_1411_);
lean_inc(v___y_1410_);
lean_inc_ref(v___y_1409_);
v___x_1419_ = lean_apply_10(v_k_1408_, v_b_1413_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, lean_box(0));
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0___boxed(lean_object* v_k_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v_b_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0(v_k_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_, v_b_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(lean_object* v_name_1432_, uint8_t v_bi_1433_, lean_object* v_type_1434_, lean_object* v_k_1435_, uint8_t v_kind_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v___f_1446_; lean_object* v___x_1447_; 
lean_inc(v___y_1440_);
lean_inc_ref(v___y_1439_);
lean_inc(v___y_1438_);
lean_inc_ref(v___y_1437_);
v___f_1446_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1446_, 0, v_k_1435_);
lean_closure_set(v___f_1446_, 1, v___y_1437_);
lean_closure_set(v___f_1446_, 2, v___y_1438_);
lean_closure_set(v___f_1446_, 3, v___y_1439_);
lean_closure_set(v___f_1446_, 4, v___y_1440_);
v___x_1447_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1432_, v_bi_1433_, v_type_1434_, v___f_1446_, v_kind_1436_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
if (lean_obj_tag(v___x_1447_) == 0)
{
return v___x_1447_;
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1447_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1447_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___boxed(lean_object* v_name_1456_, lean_object* v_bi_1457_, lean_object* v_type_1458_, lean_object* v_k_1459_, lean_object* v_kind_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
uint8_t v_bi_boxed_1470_; uint8_t v_kind_boxed_1471_; lean_object* v_res_1472_; 
v_bi_boxed_1470_ = lean_unbox(v_bi_1457_);
v_kind_boxed_1471_ = lean_unbox(v_kind_1460_);
v_res_1472_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(v_name_1456_, v_bi_boxed_1470_, v_type_1458_, v_k_1459_, v_kind_boxed_1471_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1___boxed(lean_object* v_acc_1477_, lean_object* v_declInfos_1478_, lean_object* v_k_1479_, lean_object* v_kind_1480_, lean_object* v_x_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
uint8_t v_kind_boxed_1491_; lean_object* v_res_1492_; 
v_kind_boxed_1491_ = lean_unbox(v_kind_1480_);
v_res_1492_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1(v_acc_1477_, v_declInfos_1478_, v_k_1479_, v_kind_boxed_1491_, v_x_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
lean_dec(v___y_1487_);
lean_dec_ref(v___y_1486_);
lean_dec(v___y_1485_);
lean_dec_ref(v___y_1484_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(lean_object* v_declInfos_1493_, lean_object* v_k_1494_, uint8_t v_kind_1495_, lean_object* v_acc_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v___x_1506_; lean_object* v_toApplicative_1507_; lean_object* v_toFunctor_1508_; lean_object* v_toSeq_1509_; lean_object* v_toSeqLeft_1510_; lean_object* v_toSeqRight_1511_; lean_object* v___f_1512_; lean_object* v___f_1513_; lean_object* v___f_1514_; lean_object* v___f_1515_; lean_object* v___x_1516_; lean_object* v___f_1517_; lean_object* v___f_1518_; lean_object* v___f_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v_toApplicative_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1641_; 
v___x_1506_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_1507_ = lean_ctor_get(v___x_1506_, 0);
v_toFunctor_1508_ = lean_ctor_get(v_toApplicative_1507_, 0);
v_toSeq_1509_ = lean_ctor_get(v_toApplicative_1507_, 2);
v_toSeqLeft_1510_ = lean_ctor_get(v_toApplicative_1507_, 3);
v_toSeqRight_1511_ = lean_ctor_get(v_toApplicative_1507_, 4);
v___f_1512_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_1513_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1508_, 2);
v___f_1514_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1514_, 0, v_toFunctor_1508_);
v___f_1515_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1515_, 0, v_toFunctor_1508_);
v___x_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___f_1514_);
lean_ctor_set(v___x_1516_, 1, v___f_1515_);
lean_inc(v_toSeqRight_1511_);
v___f_1517_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1517_, 0, v_toSeqRight_1511_);
lean_inc(v_toSeqLeft_1510_);
v___f_1518_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1518_, 0, v_toSeqLeft_1510_);
lean_inc(v_toSeq_1509_);
v___f_1519_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1519_, 0, v_toSeq_1509_);
v___x_1520_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1516_);
lean_ctor_set(v___x_1520_, 1, v___f_1512_);
lean_ctor_set(v___x_1520_, 2, v___f_1519_);
lean_ctor_set(v___x_1520_, 3, v___f_1518_);
lean_ctor_set(v___x_1520_, 4, v___f_1517_);
v___x_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
lean_ctor_set(v___x_1521_, 1, v___f_1513_);
v___x_1522_ = l_StateRefT_x27_instMonad___redArg(v___x_1521_);
v_toApplicative_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; 
v_unused_1642_ = lean_ctor_get(v___x_1522_, 1);
lean_dec(v_unused_1642_);
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1641_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_toApplicative_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1641_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v_toFunctor_1527_; lean_object* v_toSeq_1528_; lean_object* v_toSeqLeft_1529_; lean_object* v_toSeqRight_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1639_; 
v_toFunctor_1527_ = lean_ctor_get(v_toApplicative_1523_, 0);
v_toSeq_1528_ = lean_ctor_get(v_toApplicative_1523_, 2);
v_toSeqLeft_1529_ = lean_ctor_get(v_toApplicative_1523_, 3);
v_toSeqRight_1530_ = lean_ctor_get(v_toApplicative_1523_, 4);
v_isSharedCheck_1639_ = !lean_is_exclusive(v_toApplicative_1523_);
if (v_isSharedCheck_1639_ == 0)
{
lean_object* v_unused_1640_; 
v_unused_1640_ = lean_ctor_get(v_toApplicative_1523_, 1);
lean_dec(v_unused_1640_);
v___x_1532_ = v_toApplicative_1523_;
v_isShared_1533_ = v_isSharedCheck_1639_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_toSeqRight_1530_);
lean_inc(v_toSeqLeft_1529_);
lean_inc(v_toSeq_1528_);
lean_inc(v_toFunctor_1527_);
lean_dec(v_toApplicative_1523_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1639_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___f_1534_; lean_object* v___f_1535_; lean_object* v___f_1536_; lean_object* v___f_1537_; lean_object* v___x_1538_; lean_object* v___f_1539_; lean_object* v___f_1540_; lean_object* v___f_1541_; lean_object* v___x_1543_; 
v___f_1534_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_1535_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_1527_);
v___f_1536_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1536_, 0, v_toFunctor_1527_);
v___f_1537_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1537_, 0, v_toFunctor_1527_);
v___x_1538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1538_, 0, v___f_1536_);
lean_ctor_set(v___x_1538_, 1, v___f_1537_);
v___f_1539_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1539_, 0, v_toSeqRight_1530_);
v___f_1540_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1540_, 0, v_toSeqLeft_1529_);
v___f_1541_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1541_, 0, v_toSeq_1528_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 4, v___f_1539_);
lean_ctor_set(v___x_1532_, 3, v___f_1540_);
lean_ctor_set(v___x_1532_, 2, v___f_1541_);
lean_ctor_set(v___x_1532_, 1, v___f_1534_);
lean_ctor_set(v___x_1532_, 0, v___x_1538_);
v___x_1543_ = v___x_1532_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1638_, 1, v___f_1534_);
lean_ctor_set(v_reuseFailAlloc_1638_, 2, v___f_1541_);
lean_ctor_set(v_reuseFailAlloc_1638_, 3, v___f_1540_);
lean_ctor_set(v_reuseFailAlloc_1638_, 4, v___f_1539_);
v___x_1543_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
lean_object* v___x_1545_; 
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 1, v___f_1535_);
lean_ctor_set(v___x_1525_, 0, v___x_1543_);
v___x_1545_ = v___x_1525_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v___f_1535_);
v___x_1545_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
lean_object* v___x_1546_; lean_object* v_toApplicative_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1635_; 
v___x_1546_ = l_StateRefT_x27_instMonad___redArg(v___x_1545_);
v_toApplicative_1547_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1635_ == 0)
{
lean_object* v_unused_1636_; 
v_unused_1636_ = lean_ctor_get(v___x_1546_, 1);
lean_dec(v_unused_1636_);
v___x_1549_ = v___x_1546_;
v_isShared_1550_ = v_isSharedCheck_1635_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_toApplicative_1547_);
lean_dec(v___x_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1635_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v_toFunctor_1551_; lean_object* v_toSeq_1552_; lean_object* v_toSeqLeft_1553_; lean_object* v_toSeqRight_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1633_; 
v_toFunctor_1551_ = lean_ctor_get(v_toApplicative_1547_, 0);
v_toSeq_1552_ = lean_ctor_get(v_toApplicative_1547_, 2);
v_toSeqLeft_1553_ = lean_ctor_get(v_toApplicative_1547_, 3);
v_toSeqRight_1554_ = lean_ctor_get(v_toApplicative_1547_, 4);
v_isSharedCheck_1633_ = !lean_is_exclusive(v_toApplicative_1547_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; 
v_unused_1634_ = lean_ctor_get(v_toApplicative_1547_, 1);
lean_dec(v_unused_1634_);
v___x_1556_ = v_toApplicative_1547_;
v_isShared_1557_ = v_isSharedCheck_1633_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_toSeqRight_1554_);
lean_inc(v_toSeqLeft_1553_);
lean_inc(v_toSeq_1552_);
lean_inc(v_toFunctor_1551_);
lean_dec(v_toApplicative_1547_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1633_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___f_1558_; lean_object* v___f_1559_; lean_object* v___f_1560_; lean_object* v___f_1561_; lean_object* v___x_1562_; lean_object* v___f_1563_; lean_object* v___f_1564_; lean_object* v___f_1565_; lean_object* v___x_1567_; 
v___f_1558_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__0));
v___f_1559_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__1));
lean_inc_ref(v_toFunctor_1551_);
v___f_1560_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1560_, 0, v_toFunctor_1551_);
v___f_1561_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1561_, 0, v_toFunctor_1551_);
v___x_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___f_1560_);
lean_ctor_set(v___x_1562_, 1, v___f_1561_);
v___f_1563_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1563_, 0, v_toSeqRight_1554_);
v___f_1564_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1564_, 0, v_toSeqLeft_1553_);
v___f_1565_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1565_, 0, v_toSeq_1552_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 4, v___f_1563_);
lean_ctor_set(v___x_1556_, 3, v___f_1564_);
lean_ctor_set(v___x_1556_, 2, v___f_1565_);
lean_ctor_set(v___x_1556_, 1, v___f_1558_);
lean_ctor_set(v___x_1556_, 0, v___x_1562_);
v___x_1567_ = v___x_1556_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1562_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v___f_1558_);
lean_ctor_set(v_reuseFailAlloc_1632_, 2, v___f_1565_);
lean_ctor_set(v_reuseFailAlloc_1632_, 3, v___f_1564_);
lean_ctor_set(v_reuseFailAlloc_1632_, 4, v___f_1563_);
v___x_1567_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
lean_object* v___x_1569_; 
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 1, v___f_1559_);
lean_ctor_set(v___x_1549_, 0, v___x_1567_);
v___x_1569_ = v___x_1549_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1567_);
lean_ctor_set(v_reuseFailAlloc_1631_, 1, v___f_1559_);
v___x_1569_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
lean_object* v___x_1570_; lean_object* v_toApplicative_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1629_; 
v___x_1570_ = l_StateRefT_x27_instMonad___redArg(v___x_1569_);
v_toApplicative_1571_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1629_ == 0)
{
lean_object* v_unused_1630_; 
v_unused_1630_ = lean_ctor_get(v___x_1570_, 1);
lean_dec(v_unused_1630_);
v___x_1573_ = v___x_1570_;
v_isShared_1574_ = v_isSharedCheck_1629_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_toApplicative_1571_);
lean_dec(v___x_1570_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1629_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v_toFunctor_1575_; lean_object* v_toSeq_1576_; lean_object* v_toSeqLeft_1577_; lean_object* v_toSeqRight_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1627_; 
v_toFunctor_1575_ = lean_ctor_get(v_toApplicative_1571_, 0);
v_toSeq_1576_ = lean_ctor_get(v_toApplicative_1571_, 2);
v_toSeqLeft_1577_ = lean_ctor_get(v_toApplicative_1571_, 3);
v_toSeqRight_1578_ = lean_ctor_get(v_toApplicative_1571_, 4);
v_isSharedCheck_1627_ = !lean_is_exclusive(v_toApplicative_1571_);
if (v_isSharedCheck_1627_ == 0)
{
lean_object* v_unused_1628_; 
v_unused_1628_ = lean_ctor_get(v_toApplicative_1571_, 1);
lean_dec(v_unused_1628_);
v___x_1580_ = v_toApplicative_1571_;
v_isShared_1581_ = v_isSharedCheck_1627_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_toSeqRight_1578_);
lean_inc(v_toSeqLeft_1577_);
lean_inc(v_toSeq_1576_);
lean_inc(v_toFunctor_1575_);
lean_dec(v_toApplicative_1571_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1627_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___f_1582_; lean_object* v___f_1583_; lean_object* v___f_1584_; lean_object* v___f_1585_; lean_object* v___x_1586_; lean_object* v___f_1587_; lean_object* v___f_1588_; lean_object* v___f_1589_; lean_object* v___x_1591_; 
v___f_1582_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__2));
v___f_1583_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__3));
lean_inc_ref(v_toFunctor_1575_);
v___f_1584_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1584_, 0, v_toFunctor_1575_);
v___f_1585_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1585_, 0, v_toFunctor_1575_);
v___x_1586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___f_1584_);
lean_ctor_set(v___x_1586_, 1, v___f_1585_);
v___f_1587_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1587_, 0, v_toSeqRight_1578_);
v___f_1588_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1588_, 0, v_toSeqLeft_1577_);
v___f_1589_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1589_, 0, v_toSeq_1576_);
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 4, v___f_1587_);
lean_ctor_set(v___x_1580_, 3, v___f_1588_);
lean_ctor_set(v___x_1580_, 2, v___f_1589_);
lean_ctor_set(v___x_1580_, 1, v___f_1582_);
lean_ctor_set(v___x_1580_, 0, v___x_1586_);
v___x_1591_ = v___x_1580_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1586_);
lean_ctor_set(v_reuseFailAlloc_1626_, 1, v___f_1582_);
lean_ctor_set(v_reuseFailAlloc_1626_, 2, v___f_1589_);
lean_ctor_set(v_reuseFailAlloc_1626_, 3, v___f_1588_);
lean_ctor_set(v_reuseFailAlloc_1626_, 4, v___f_1587_);
v___x_1591_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1593_; 
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 1, v___f_1583_);
lean_ctor_set(v___x_1573_, 0, v___x_1591_);
v___x_1593_ = v___x_1573_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1625_, 1, v___f_1583_);
v___x_1593_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; uint8_t v___x_1596_; 
v___x_1594_ = lean_array_get_size(v_acc_1496_);
v___x_1595_ = lean_array_get_size(v_declInfos_1493_);
v___x_1596_ = lean_nat_dec_lt(v___x_1594_, v___x_1595_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; 
lean_dec_ref(v___x_1593_);
lean_dec_ref(v_declInfos_1493_);
lean_inc(v___y_1504_);
lean_inc_ref(v___y_1503_);
lean_inc(v___y_1502_);
lean_inc_ref(v___y_1501_);
lean_inc(v___y_1500_);
lean_inc_ref(v___y_1499_);
lean_inc(v___y_1498_);
lean_inc_ref(v___y_1497_);
v___x_1597_ = lean_apply_10(v_k_1494_, v_acc_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, lean_box(0));
return v___x_1597_;
}
else
{
lean_object* v___x_1598_; uint8_t v___x_1599_; lean_object* v___x_1600_; lean_object* v___f_1601_; lean_object* v___f_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v_snd_1607_; lean_object* v_fst_1608_; lean_object* v_fst_1609_; lean_object* v_snd_1610_; lean_object* v___x_1611_; lean_object* v___f_1612_; lean_object* v___x_1613_; 
v___x_1598_ = l_Lean_instInhabitedName;
v___x_1599_ = 0;
v___x_1600_ = l_Lean_instInhabitedExpr;
v___f_1601_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1601_, 0, v___x_1593_);
lean_closure_set(v___f_1601_, 1, v___x_1600_);
v___f_1602_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1602_, 0, v___f_1601_);
v___x_1603_ = lean_box(v___x_1599_);
v___x_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
lean_ctor_set(v___x_1604_, 1, v___f_1602_);
v___x_1605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1598_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
v___x_1606_ = lean_array_get(v___x_1605_, v_declInfos_1493_, v___x_1594_);
lean_dec_ref_known(v___x_1605_, 2);
v_snd_1607_ = lean_ctor_get(v___x_1606_, 1);
lean_inc(v_snd_1607_);
v_fst_1608_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_fst_1608_);
lean_dec(v___x_1606_);
v_fst_1609_ = lean_ctor_get(v_snd_1607_, 0);
lean_inc(v_fst_1609_);
v_snd_1610_ = lean_ctor_get(v_snd_1607_, 1);
lean_inc(v_snd_1610_);
lean_dec(v_snd_1607_);
v___x_1611_ = lean_box(v_kind_1495_);
lean_inc_ref(v_acc_1496_);
v___f_1612_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1___boxed), 14, 4);
lean_closure_set(v___f_1612_, 0, v_acc_1496_);
lean_closure_set(v___f_1612_, 1, v_declInfos_1493_);
lean_closure_set(v___f_1612_, 2, v_k_1494_);
lean_closure_set(v___f_1612_, 3, v___x_1611_);
lean_inc(v___y_1504_);
lean_inc_ref(v___y_1503_);
lean_inc(v___y_1502_);
lean_inc_ref(v___y_1501_);
lean_inc(v___y_1500_);
lean_inc_ref(v___y_1499_);
lean_inc(v___y_1498_);
lean_inc_ref(v___y_1497_);
v___x_1613_ = lean_apply_10(v_snd_1610_, v_acc_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, lean_box(0));
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; uint8_t v___x_1615_; lean_object* v___x_1616_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___x_1613_, 1);
v___x_1615_ = lean_unbox(v_fst_1609_);
lean_dec(v_fst_1609_);
v___x_1616_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(v_fst_1608_, v___x_1615_, v_a_1614_, v___f_1612_, v_kind_1495_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
return v___x_1616_;
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec_ref(v___f_1612_);
lean_dec(v_fst_1609_);
lean_dec(v_fst_1608_);
v_a_1617_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1613_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1613_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1622_; 
if (v_isShared_1620_ == 0)
{
v___x_1622_ = v___x_1619_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_a_1617_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1(lean_object* v_acc_1643_, lean_object* v_declInfos_1644_, lean_object* v_k_1645_, uint8_t v_kind_1646_, lean_object* v_x_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_array_push(v_acc_1643_, v_x_1647_);
v___x_1658_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(v_declInfos_1644_, v_k_1645_, v_kind_1646_, v___x_1657_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___boxed(lean_object* v_declInfos_1659_, lean_object* v_k_1660_, lean_object* v_kind_1661_, lean_object* v_acc_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
uint8_t v_kind_boxed_1672_; lean_object* v_res_1673_; 
v_kind_boxed_1672_ = lean_unbox(v_kind_1661_);
v_res_1673_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(v_declInfos_1659_, v_k_1660_, v_kind_boxed_1672_, v_acc_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14(lean_object* v_declInfos_1674_, lean_object* v_k_1675_, uint8_t v_kind_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1));
v___x_1687_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(v_declInfos_1674_, v_k_1675_, v_kind_1676_, v___x_1686_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14___boxed(lean_object* v_declInfos_1688_, lean_object* v_k_1689_, lean_object* v_kind_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
uint8_t v_kind_boxed_1700_; lean_object* v_res_1701_; 
v_kind_boxed_1700_ = lean_unbox(v_kind_1690_);
v_res_1701_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14(v_declInfos_1688_, v_k_1689_, v_kind_boxed_1700_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13(size_t v_sz_1702_, size_t v_i_1703_, lean_object* v_bs_1704_){
_start:
{
uint8_t v___x_1705_; 
v___x_1705_ = lean_usize_dec_lt(v_i_1703_, v_sz_1702_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; 
v___x_1706_ = l_unsafeCast___redArg(v_bs_1704_);
lean_dec_ref(v_bs_1704_);
return v___x_1706_;
}
else
{
lean_object* v_v_1707_; lean_object* v___x_1708_; lean_object* v_fst_1709_; lean_object* v_snd_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1727_; 
v_v_1707_ = lean_array_uget_borrowed(v_bs_1704_, v_i_1703_);
v___x_1708_ = l_unsafeCast___redArg(v_v_1707_);
v_fst_1709_ = lean_ctor_get(v___x_1708_, 0);
v_snd_1710_ = lean_ctor_get(v___x_1708_, 1);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1712_ = v___x_1708_;
v_isShared_1713_ = v_isSharedCheck_1727_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_snd_1710_);
lean_inc(v_fst_1709_);
lean_dec(v___x_1708_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1727_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1714_; lean_object* v_bs_x27_1715_; uint8_t v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1719_; 
v___x_1714_ = lean_unsigned_to_nat(0u);
v_bs_x27_1715_ = lean_array_uset(v_bs_1704_, v_i_1703_, v___x_1714_);
v___x_1716_ = 0;
v___x_1717_ = lean_box(v___x_1716_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1717_);
v___x_1719_ = v___x_1712_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1717_);
lean_ctor_set(v_reuseFailAlloc_1726_, 1, v_snd_1710_);
v___x_1719_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
lean_object* v___x_1720_; size_t v___x_1721_; size_t v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1720_, 0, v_fst_1709_);
lean_ctor_set(v___x_1720_, 1, v___x_1719_);
v___x_1721_ = ((size_t)1ULL);
v___x_1722_ = lean_usize_add(v_i_1703_, v___x_1721_);
v___x_1723_ = l_unsafeCast___redArg(v___x_1720_);
lean_dec_ref_known(v___x_1720_, 2);
v___x_1724_ = lean_array_uset(v_bs_x27_1715_, v_i_1703_, v___x_1723_);
v_i_1703_ = v___x_1722_;
v_bs_1704_ = v___x_1724_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13___boxed(lean_object* v_sz_1728_, lean_object* v_i_1729_, lean_object* v_bs_1730_){
_start:
{
size_t v_sz_boxed_1731_; size_t v_i_boxed_1732_; lean_object* v_res_1733_; 
v_sz_boxed_1731_ = lean_unbox_usize(v_sz_1728_);
lean_dec(v_sz_1728_);
v_i_boxed_1732_ = lean_unbox_usize(v_i_1729_);
lean_dec(v_i_1729_);
v_res_1733_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13(v_sz_boxed_1731_, v_i_boxed_1732_, v_bs_1730_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(lean_object* v_declInfos_1734_, lean_object* v_k_1735_, uint8_t v_kind_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
size_t v_sz_1746_; size_t v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_sz_1746_ = lean_array_size(v_declInfos_1734_);
v___x_1747_ = ((size_t)0ULL);
v___x_1748_ = l_unsafeCast___redArg(v_declInfos_1734_);
v___x_1749_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13(v_sz_1746_, v___x_1747_, v___x_1748_);
v___x_1750_ = l_unsafeCast___redArg(v___x_1749_);
lean_dec_ref(v___x_1749_);
v___x_1751_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14(v___x_1750_, v_k_1735_, v_kind_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___boxed(lean_object* v_declInfos_1752_, lean_object* v_k_1753_, lean_object* v_kind_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
uint8_t v_kind_boxed_1764_; lean_object* v_res_1765_; 
v_kind_boxed_1764_ = lean_unbox(v_kind_1754_);
v_res_1765_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(v_declInfos_1752_, v_k_1753_, v_kind_boxed_1764_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
lean_dec_ref(v_declInfos_1752_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0(lean_object* v_snd_1766_, lean_object* v_x_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1777_, 0, v_snd_1766_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0___boxed(lean_object* v_snd_1778_, lean_object* v_x_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0(v_snd_1778_, v_x_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v_x_1779_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7(size_t v_sz_1790_, size_t v_i_1791_, lean_object* v_bs_1792_){
_start:
{
uint8_t v___x_1793_; 
v___x_1793_ = lean_usize_dec_lt(v_i_1791_, v_sz_1790_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; 
v___x_1794_ = l_unsafeCast___redArg(v_bs_1792_);
lean_dec_ref(v_bs_1792_);
return v___x_1794_;
}
else
{
lean_object* v_v_1795_; lean_object* v___x_1796_; lean_object* v_fst_1797_; lean_object* v_snd_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1813_; 
v_v_1795_ = lean_array_uget_borrowed(v_bs_1792_, v_i_1791_);
v___x_1796_ = l_unsafeCast___redArg(v_v_1795_);
v_fst_1797_ = lean_ctor_get(v___x_1796_, 0);
v_snd_1798_ = lean_ctor_get(v___x_1796_, 1);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1800_ = v___x_1796_;
v_isShared_1801_ = v_isSharedCheck_1813_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_snd_1798_);
lean_inc(v_fst_1797_);
lean_dec(v___x_1796_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1813_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1802_; lean_object* v_bs_x27_1803_; lean_object* v___f_1804_; lean_object* v___x_1806_; 
v___x_1802_ = lean_unsigned_to_nat(0u);
v_bs_x27_1803_ = lean_array_uset(v_bs_1792_, v_i_1791_, v___x_1802_);
v___f_1804_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1804_, 0, v_snd_1798_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 1, v___f_1804_);
v___x_1806_ = v___x_1800_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_fst_1797_);
lean_ctor_set(v_reuseFailAlloc_1812_, 1, v___f_1804_);
v___x_1806_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
size_t v___x_1807_; size_t v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1807_ = ((size_t)1ULL);
v___x_1808_ = lean_usize_add(v_i_1791_, v___x_1807_);
v___x_1809_ = l_unsafeCast___redArg(v___x_1806_);
lean_dec_ref(v___x_1806_);
v___x_1810_ = lean_array_uset(v_bs_x27_1803_, v_i_1791_, v___x_1809_);
v_i_1791_ = v___x_1808_;
v_bs_1792_ = v___x_1810_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___boxed(lean_object* v_sz_1814_, lean_object* v_i_1815_, lean_object* v_bs_1816_){
_start:
{
size_t v_sz_boxed_1817_; size_t v_i_boxed_1818_; lean_object* v_res_1819_; 
v_sz_boxed_1817_ = lean_unbox_usize(v_sz_1814_);
lean_dec(v_sz_1814_);
v_i_boxed_1818_ = lean_unbox_usize(v_i_1815_);
lean_dec(v_i_1815_);
v_res_1819_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7(v_sz_boxed_1817_, v_i_boxed_1818_, v_bs_1816_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(lean_object* v_declInfos_1820_, lean_object* v_k_1821_, uint8_t v_kind_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
size_t v_sz_1832_; size_t v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v_sz_1832_ = lean_array_size(v_declInfos_1820_);
v___x_1833_ = ((size_t)0ULL);
v___x_1834_ = l_unsafeCast___redArg(v_declInfos_1820_);
v___x_1835_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7(v_sz_1832_, v___x_1833_, v___x_1834_);
v___x_1836_ = l_unsafeCast___redArg(v___x_1835_);
lean_dec_ref(v___x_1835_);
v___x_1837_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(v___x_1836_, v_k_1821_, v_kind_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
lean_dec(v___x_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5___boxed(lean_object* v_declInfos_1838_, lean_object* v_k_1839_, lean_object* v_kind_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
uint8_t v_kind_boxed_1850_; lean_object* v_res_1851_; 
v_kind_boxed_1850_ = lean_unbox(v_kind_1840_);
v_res_1851_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(v_declInfos_1838_, v_k_1839_, v_kind_boxed_1850_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec_ref(v_declInfos_1838_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(size_t v_sz_1852_, size_t v_i_1853_, lean_object* v_bs_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
uint8_t v___x_1860_; 
v___x_1860_ = lean_usize_dec_lt(v_i_1853_, v_sz_1852_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1861_ = l_unsafeCast___redArg(v_bs_1854_);
lean_dec_ref(v_bs_1854_);
v___x_1862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
return v___x_1862_;
}
else
{
lean_object* v_v_1863_; lean_object* v___x_1864_; lean_object* v_bs_x27_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v_v_1863_ = lean_array_uget(v_bs_1854_, v_i_1853_);
v___x_1864_ = lean_unsigned_to_nat(0u);
v_bs_x27_1865_ = lean_array_uset(v_bs_1854_, v_i_1853_, v___x_1864_);
v___x_1866_ = l_unsafeCast___redArg(v_v_1863_);
lean_dec(v_v_1863_);
lean_inc(v___y_1858_);
lean_inc_ref(v___y_1857_);
lean_inc(v___y_1856_);
lean_inc_ref(v___y_1855_);
v___x_1867_ = lean_infer_type(v___x_1866_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; size_t v___x_1869_; size_t v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_a_1868_);
lean_dec_ref_known(v___x_1867_, 1);
v___x_1869_ = ((size_t)1ULL);
v___x_1870_ = lean_usize_add(v_i_1853_, v___x_1869_);
v___x_1871_ = l_unsafeCast___redArg(v_a_1868_);
lean_dec(v_a_1868_);
v___x_1872_ = lean_array_uset(v_bs_x27_1865_, v_i_1853_, v___x_1871_);
v_i_1853_ = v___x_1870_;
v_bs_1854_ = v___x_1872_;
goto _start;
}
else
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
lean_dec_ref(v_bs_x27_1865_);
v_a_1874_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1867_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1867_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3___boxed(lean_object* v_sz_1882_, lean_object* v_i_1883_, lean_object* v_bs_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
size_t v_sz_boxed_1890_; size_t v_i_boxed_1891_; lean_object* v_res_1892_; 
v_sz_boxed_1890_ = lean_unbox_usize(v_sz_1882_);
lean_dec(v_sz_1882_);
v_i_boxed_1891_ = lean_unbox_usize(v_i_1883_);
lean_dec(v_i_1883_);
v_res_1892_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(v_sz_boxed_1890_, v_i_boxed_1891_, v_bs_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(size_t v_sz_1893_, size_t v_i_1894_, lean_object* v_bs_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
uint8_t v___x_1901_; 
v___x_1901_ = lean_usize_dec_lt(v_i_1894_, v_sz_1893_);
if (v___x_1901_ == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = l_unsafeCast___redArg(v_bs_1895_);
lean_dec_ref(v_bs_1895_);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
return v___x_1903_;
}
else
{
lean_object* v_v_1904_; lean_object* v___x_1905_; lean_object* v_fst_1906_; lean_object* v_snd_1907_; lean_object* v___x_1908_; lean_object* v_bs_x27_1909_; lean_object* v___x_1910_; 
v_v_1904_ = lean_array_uget_borrowed(v_bs_1895_, v_i_1894_);
v___x_1905_ = l_unsafeCast___redArg(v_v_1904_);
v_fst_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_fst_1906_);
v_snd_1907_ = lean_ctor_get(v___x_1905_, 1);
lean_inc(v_snd_1907_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_unsigned_to_nat(0u);
v_bs_x27_1909_ = lean_array_uset(v_bs_1895_, v_i_1894_, v___x_1908_);
v___x_1910_ = l_Lean_Meta_mkEq(v_snd_1907_, v_fst_1906_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; size_t v___x_1912_; size_t v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
v___x_1912_ = ((size_t)1ULL);
v___x_1913_ = lean_usize_add(v_i_1894_, v___x_1912_);
v___x_1914_ = l_unsafeCast___redArg(v_a_1911_);
lean_dec(v_a_1911_);
v___x_1915_ = lean_array_uset(v_bs_x27_1909_, v_i_1894_, v___x_1914_);
v_i_1894_ = v___x_1913_;
v_bs_1895_ = v___x_1915_;
goto _start;
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
lean_dec_ref(v_bs_x27_1909_);
v_a_1917_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1910_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1910_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg___boxed(lean_object* v_sz_1925_, lean_object* v_i_1926_, lean_object* v_bs_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
size_t v_sz_boxed_1933_; size_t v_i_boxed_1934_; lean_object* v_res_1935_; 
v_sz_boxed_1933_ = lean_unbox_usize(v_sz_1925_);
lean_dec(v_sz_1925_);
v_i_boxed_1934_ = lean_unbox_usize(v_i_1926_);
lean_dec(v_i_1926_);
v_res_1935_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_boxed_1933_, v_i_boxed_1934_, v_bs_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2(size_t v_sz_1936_, size_t v_i_1937_, lean_object* v_bs_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_1936_, v_i_1937_, v_bs_1938_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___boxed(lean_object* v_sz_1949_, lean_object* v_i_1950_, lean_object* v_bs_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
size_t v_sz_boxed_1961_; size_t v_i_boxed_1962_; lean_object* v_res_1963_; 
v_sz_boxed_1961_ = lean_unbox_usize(v_sz_1949_);
lean_dec(v_sz_1949_);
v_i_boxed_1962_ = lean_unbox_usize(v_i_1950_);
lean_dec(v_i_1950_);
v_res_1963_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2(v_sz_boxed_1961_, v_i_boxed_1962_, v_bs_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(lean_object* v_revertArgs_1966_, lean_object* v_u_1967_, lean_object* v_00_u03c3s_1968_, lean_object* v_hypName_1969_, uint8_t v___x_1970_, lean_object* v_hyps_1971_, lean_object* v_ss_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v___x_1982_; size_t v_sz_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_16730__overap_1988_; lean_object* v___x_1989_; 
v___x_1982_ = l_Array_zip___redArg(v_revertArgs_1966_, v_ss_1972_);
v_sz_1983_ = lean_array_size(v___x_1982_);
v___x_1984_ = l_unsafeCast___redArg(v___x_1982_);
lean_dec_ref(v___x_1982_);
v___x_1985_ = lean_box_usize(v_sz_1983_);
v___x_1986_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed__const__1));
v___x_1987_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___boxed), 12, 3);
lean_closure_set(v___x_1987_, 0, v___x_1985_);
lean_closure_set(v___x_1987_, 1, v___x_1986_);
lean_closure_set(v___x_1987_, 2, v___x_1984_);
v___x_16730__overap_1988_ = l_unsafeCast___redArg(v___x_1987_);
lean_dec_ref(v___x_1987_);
lean_inc(v___y_1980_);
lean_inc_ref(v___y_1979_);
lean_inc(v___y_1978_);
lean_inc_ref(v___y_1977_);
lean_inc(v___y_1976_);
lean_inc_ref(v___y_1975_);
lean_inc(v___y_1974_);
lean_inc_ref(v___y_1973_);
v___x_1989_ = lean_apply_9(v___x_16730__overap_1988_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, lean_box(0));
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v_eqs_1991_; lean_object* v_00_u03c6_1992_; lean_object* v_00_u03c6_1993_; lean_object* v___x_1994_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v_eqs_1991_ = lean_array_to_list(v_a_1990_);
v_00_u03c6_1992_ = l_Lean_mkAndN(v_eqs_1991_);
v_00_u03c6_1993_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_u_1967_, v_00_u03c3s_1968_, v_00_u03c6_1992_);
lean_inc(v_hypName_1969_);
v___x_1994_ = l_Lean_Core_mkFreshUserName(v_hypName_1969_, v___y_1979_, v___y_1980_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; uint8_t v___x_1996_; uint8_t v___x_1997_; lean_object* v___x_1998_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v___x_1996_ = 1;
v___x_1997_ = 1;
lean_inc_ref(v_ss_1972_);
v___x_1998_ = l_Lean_Meta_mkLambdaFVars(v_ss_1972_, v_00_u03c6_1993_, v___x_1970_, v___x_1996_, v___x_1970_, v___x_1996_, v___x_1997_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; lean_object* v___x_2000_; lean_object* v_00_u03c6_2001_; lean_object* v___x_2002_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1998_, 1);
v___x_2000_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2000_, 0, v_hypName_1969_);
lean_ctor_set(v___x_2000_, 1, v_a_1995_);
lean_ctor_set(v___x_2000_, 2, v_a_1999_);
v_00_u03c6_2001_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_2000_);
v___x_2002_ = l_Lean_Meta_mkLambdaFVars(v_ss_1972_, v_hyps_1971_, v___x_1970_, v___x_1996_, v___x_1970_, v___x_1996_, v___x_1997_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2011_; 
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2005_ = v___x_2002_;
v_isShared_2006_ = v_isSharedCheck_2011_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_2002_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2011_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2007_; lean_object* v___x_2009_; 
v___x_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2007_, 0, v_a_2003_);
lean_ctor_set(v___x_2007_, 1, v_00_u03c6_2001_);
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 0, v___x_2007_);
v___x_2009_ = v___x_2005_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2007_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
lean_dec_ref(v_00_u03c6_2001_);
v_a_2012_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_2002_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_2002_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
lean_dec(v_a_1995_);
lean_dec_ref(v_ss_1972_);
lean_dec_ref(v_hyps_1971_);
lean_dec(v_hypName_1969_);
v_a_2020_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_1998_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_1998_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
else
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2035_; 
lean_dec_ref(v_00_u03c6_1993_);
lean_dec_ref(v_ss_1972_);
lean_dec_ref(v_hyps_1971_);
lean_dec(v_hypName_1969_);
v_a_2028_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2030_ = v___x_1994_;
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_1994_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2033_; 
if (v_isShared_2031_ == 0)
{
v___x_2033_ = v___x_2030_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_a_2028_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
}
}
else
{
lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2043_; 
lean_dec_ref(v_ss_1972_);
lean_dec_ref(v_hyps_1971_);
lean_dec(v_hypName_1969_);
lean_dec_ref(v_00_u03c3s_1968_);
lean_dec(v_u_1967_);
v_a_2036_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2038_ = v___x_1989_;
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_dec(v___x_1989_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2036_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed(lean_object* v_revertArgs_2044_, lean_object* v_u_2045_, lean_object* v_00_u03c3s_2046_, lean_object* v_hypName_2047_, lean_object* v___x_2048_, lean_object* v_hyps_2049_, lean_object* v_ss_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_){
_start:
{
uint8_t v___x_18351__boxed_2060_; lean_object* v_res_2061_; 
v___x_18351__boxed_2060_ = lean_unbox(v___x_2048_);
v_res_2061_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(v_revertArgs_2044_, v_u_2045_, v_00_u03c3s_2046_, v_hypName_2047_, v___x_18351__boxed_2060_, v_hyps_2049_, v_ss_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec_ref(v_revertArgs_2044_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(lean_object* v_goal_2062_, lean_object* v_n_2063_, lean_object* v_hypName_2064_, lean_object* v_k_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v___x_2075_; uint8_t v___x_2076_; 
v___x_2075_ = lean_unsigned_to_nat(0u);
v___x_2076_ = lean_nat_dec_eq(v_n_2063_, v___x_2075_);
if (v___x_2076_ == 0)
{
lean_object* v_u_2077_; lean_object* v_00_u03c3s_2078_; lean_object* v_hyps_2079_; lean_object* v_target_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2248_; 
v_u_2077_ = lean_ctor_get(v_goal_2062_, 0);
v_00_u03c3s_2078_ = lean_ctor_get(v_goal_2062_, 1);
v_hyps_2079_ = lean_ctor_get(v_goal_2062_, 2);
v_target_2080_ = lean_ctor_get(v_goal_2062_, 3);
v_isSharedCheck_2248_ = !lean_is_exclusive(v_goal_2062_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2082_ = v_goal_2062_;
v_isShared_2083_ = v_isSharedCheck_2248_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_target_2080_);
lean_inc(v_hyps_2079_);
lean_inc(v_00_u03c3s_2078_);
lean_inc(v_u_2077_);
lean_dec(v_goal_2062_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2248_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v_T_2084_; lean_object* v_f_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v_a_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v_revertArgs_2092_; lean_object* v___y_2094_; lean_object* v___y_2095_; lean_object* v___y_2096_; lean_object* v___y_2097_; lean_object* v___y_2098_; lean_object* v___y_2099_; lean_object* v___y_2100_; lean_object* v___y_2101_; lean_object* v___y_2102_; lean_object* v___y_2103_; lean_object* v___y_2104_; lean_object* v___y_2105_; lean_object* v___x_2144_; lean_object* v___f_2145_; lean_object* v___y_2147_; lean_object* v___y_2148_; lean_object* v___y_2149_; lean_object* v___y_2150_; lean_object* v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___x_2222_; uint8_t v___x_2223_; 
v_T_2084_ = l_Lean_Expr_consumeMData(v_target_2080_);
v_f_2085_ = l_Lean_Expr_getAppFn(v_T_2084_);
v___x_2086_ = l_Lean_Expr_getAppNumArgs(v_T_2084_);
v___x_2087_ = lean_mk_empty_array_with_capacity(v___x_2086_);
lean_dec(v___x_2086_);
lean_inc_ref(v_T_2084_);
v_a_2088_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_T_2084_, v___x_2087_);
lean_inc(v_n_2063_);
lean_inc_ref(v_a_2088_);
v___x_2089_ = l_Array_toSubarray___redArg(v_a_2088_, v___x_2075_, v_n_2063_);
v___x_2090_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1));
v___x_2091_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(v___x_2089_, v___x_2090_);
v_revertArgs_2092_ = l_Array_reverse___redArg(v___x_2091_);
v___x_2144_ = lean_box(v___x_2076_);
lean_inc_ref(v_hyps_2079_);
lean_inc_ref(v_00_u03c3s_2078_);
lean_inc(v_u_2077_);
lean_inc_ref(v_revertArgs_2092_);
v___f_2145_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed), 16, 6);
lean_closure_set(v___f_2145_, 0, v_revertArgs_2092_);
lean_closure_set(v___f_2145_, 1, v_u_2077_);
lean_closure_set(v___f_2145_, 2, v_00_u03c3s_2078_);
lean_closure_set(v___f_2145_, 3, v_hypName_2064_);
lean_closure_set(v___f_2145_, 4, v___x_2144_);
lean_closure_set(v___f_2145_, 5, v_hyps_2079_);
v___x_2222_ = lean_array_get_size(v_revertArgs_2092_);
v___x_2223_ = lean_nat_dec_eq(v___x_2222_, v_n_2063_);
if (v___x_2223_ == 0)
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_dec_ref(v___f_2145_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_f_2085_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
lean_dec_ref(v_k_2065_);
v___x_2224_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3);
v___x_2225_ = l_Nat_reprFast(v_n_2063_);
v___x_2226_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
v___x_2227_ = l_Lean_MessageData_ofFormat(v___x_2226_);
v___x_2228_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2224_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5);
v___x_2230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2228_);
lean_ctor_set(v___x_2230_, 1, v___x_2229_);
v___x_2231_ = l_Lean_MessageData_ofExpr(v_T_2084_);
v___x_2232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2230_);
lean_ctor_set(v___x_2232_, 1, v___x_2231_);
v___x_2233_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7);
v___x_2234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2232_);
lean_ctor_set(v___x_2234_, 1, v___x_2233_);
v___x_2235_ = l_Nat_reprFast(v___x_2222_);
v___x_2236_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
v___x_2237_ = l_Lean_MessageData_ofFormat(v___x_2236_);
v___x_2238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2234_);
lean_ctor_set(v___x_2238_, 1, v___x_2237_);
v___x_2239_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v___x_2238_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2239_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2239_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
else
{
lean_dec_ref(v_T_2084_);
v___y_2147_ = v___y_2066_;
v___y_2148_ = v___y_2067_;
v___y_2149_ = v___y_2068_;
v___y_2150_ = v___y_2069_;
v___y_2151_ = v___y_2070_;
v___y_2152_ = v___y_2071_;
v___y_2153_ = v___y_2072_;
v___y_2154_ = v___y_2073_;
goto v___jp_2146_;
}
v___jp_2093_:
{
lean_object* v___x_2106_; 
v___x_2106_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v___y_2099_, v___y_2103_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v_a_2107_; lean_object* v_H_2108_; lean_object* v___x_2109_; lean_object* v_fst_2110_; lean_object* v_snd_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2143_; 
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_a_2107_);
lean_dec_ref_known(v___x_2106_, 1);
lean_inc_ref_n(v___y_2105_, 2);
v_H_2108_ = l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(v___y_2105_, v_a_2107_);
lean_inc(v_u_2077_);
v___x_2109_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_2077_, v___y_2105_, v_H_2108_, v___y_2098_);
v_fst_2110_ = lean_ctor_get(v___x_2109_, 0);
v_snd_2111_ = lean_ctor_get(v___x_2109_, 1);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2113_ = v___x_2109_;
v_isShared_2114_ = v_isSharedCheck_2143_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_snd_2111_);
lean_inc(v_fst_2110_);
lean_dec(v___x_2109_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2143_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v_goal_x27_2120_; 
v___x_2115_ = lean_array_get_size(v_a_2088_);
v___x_2116_ = l_Array_toSubarray___redArg(v_a_2088_, v_n_2063_, v___x_2115_);
v___x_2117_ = l_Subarray_copy___redArg(v___x_2116_);
v___x_2118_ = l_Lean_mkAppRev(v_f_2085_, v___x_2117_);
lean_dec_ref(v___x_2117_);
lean_inc(v_fst_2110_);
lean_inc(v_u_2077_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 3, v___x_2118_);
lean_ctor_set(v___x_2082_, 2, v_fst_2110_);
lean_ctor_set(v___x_2082_, 1, v___y_2105_);
v_goal_x27_2120_ = v___x_2082_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_u_2077_);
lean_ctor_set(v_reuseFailAlloc_2142_, 1, v___y_2105_);
lean_ctor_set(v_reuseFailAlloc_2142_, 2, v_fst_2110_);
lean_ctor_set(v_reuseFailAlloc_2142_, 3, v___x_2118_);
v_goal_x27_2120_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
lean_object* v___x_2121_; 
lean_inc(v___y_2096_);
lean_inc_ref(v___y_2097_);
lean_inc(v___y_2103_);
lean_inc_ref(v___y_2094_);
lean_inc(v___y_2095_);
lean_inc_ref(v___y_2101_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2104_);
v___x_2121_ = lean_apply_10(v_k_2065_, v_goal_x27_2120_, v___y_2104_, v___y_2102_, v___y_2101_, v___y_2095_, v___y_2094_, v___y_2103_, v___y_2097_, v___y_2096_, lean_box(0));
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v_a_2122_; lean_object* v___x_2123_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
lean_inc(v_a_2122_);
lean_dec_ref_known(v___x_2121_, 1);
lean_inc(v___y_2096_);
lean_inc_ref(v___y_2097_);
lean_inc(v___y_2103_);
lean_inc_ref(v___y_2094_);
lean_inc_ref(v___y_2100_);
v___x_2123_ = lean_infer_type(v___y_2100_, v___y_2094_, v___y_2103_, v___y_2097_, v___y_2096_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2141_; 
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2126_ = v___x_2123_;
v_isShared_2127_ = v_isSharedCheck_2141_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2123_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2141_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2131_; 
v___x_2128_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1));
v___x_2129_ = lean_box(0);
if (v_isShared_2114_ == 0)
{
lean_ctor_set_tag(v___x_2113_, 1);
lean_ctor_set(v___x_2113_, 1, v___x_2129_);
lean_ctor_set(v___x_2113_, 0, v_u_2077_);
v___x_2131_ = v___x_2113_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_u_2077_);
lean_ctor_set(v_reuseFailAlloc_2140_, 1, v___x_2129_);
v___x_2131_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v_prf_2136_; lean_object* v___x_2138_; 
v___x_2132_ = l_Lean_mkConst(v___x_2128_, v___x_2131_);
v___x_2133_ = l_Lean_mkAppN(v_fst_2110_, v_revertArgs_2092_);
v___x_2134_ = l_Lean_mkAppN(v_snd_2111_, v_revertArgs_2092_);
v___x_2135_ = l_Lean_mkAppN(v_a_2122_, v_revertArgs_2092_);
lean_dec_ref(v_revertArgs_2092_);
v_prf_2136_ = l_Lean_mkApp8(v___x_2132_, v_00_u03c3s_2078_, v_a_2124_, v_hyps_2079_, v___x_2133_, v_target_2080_, v___y_2100_, v___x_2134_, v___x_2135_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 0, v_prf_2136_);
v___x_2138_ = v___x_2126_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v_prf_2136_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
return v___x_2138_;
}
}
}
}
else
{
lean_dec(v_a_2122_);
lean_del_object(v___x_2113_);
lean_dec(v_snd_2111_);
lean_dec(v_fst_2110_);
lean_dec_ref(v___y_2100_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
return v___x_2123_;
}
}
else
{
lean_del_object(v___x_2113_);
lean_dec(v_snd_2111_);
lean_dec(v_fst_2110_);
lean_dec_ref(v___y_2100_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
return v___x_2121_;
}
}
}
}
else
{
lean_dec_ref(v___y_2105_);
lean_dec_ref(v___y_2100_);
lean_dec_ref(v___y_2098_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_f_2085_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
lean_dec_ref(v_k_2065_);
lean_dec(v_n_2063_);
return v___x_2106_;
}
}
v___jp_2146_:
{
size_t v_sz_2155_; size_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_16339__overap_2161_; lean_object* v___x_2162_; 
v_sz_2155_ = lean_array_size(v_revertArgs_2092_);
v___x_2156_ = ((size_t)0ULL);
v___x_2157_ = l_unsafeCast___redArg(v_revertArgs_2092_);
v___x_2158_ = lean_box_usize(v_sz_2155_);
v___x_2159_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed__const__1));
lean_inc(v___x_2157_);
v___x_2160_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3___boxed), 8, 3);
lean_closure_set(v___x_2160_, 0, v___x_2158_);
lean_closure_set(v___x_2160_, 1, v___x_2159_);
lean_closure_set(v___x_2160_, 2, v___x_2157_);
v___x_16339__overap_2161_ = l_unsafeCast___redArg(v___x_2160_);
lean_dec_ref(v___x_2160_);
lean_inc(v___y_2154_);
lean_inc_ref(v___y_2153_);
lean_inc(v___y_2152_);
lean_inc_ref(v___y_2151_);
v___x_2162_ = lean_apply_5(v___x_16339__overap_2161_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, lean_box(0));
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; size_t v_sz_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_16342__overap_2169_; lean_object* v___x_2170_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc_n(v_a_2163_, 2);
lean_dec_ref_known(v___x_2162_, 1);
v_sz_2164_ = lean_array_size(v_a_2163_);
v___x_2165_ = l_unsafeCast___redArg(v_a_2163_);
v___x_2166_ = lean_box_usize(v_sz_2164_);
v___x_2167_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed__const__1));
v___x_2168_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___boxed), 13, 4);
lean_closure_set(v___x_2168_, 0, v_a_2163_);
lean_closure_set(v___x_2168_, 1, v___x_2166_);
lean_closure_set(v___x_2168_, 2, v___x_2167_);
lean_closure_set(v___x_2168_, 3, v___x_2165_);
v___x_16342__overap_2169_ = l_unsafeCast___redArg(v___x_2168_);
lean_dec_ref(v___x_2168_);
lean_inc(v___y_2154_);
lean_inc_ref(v___y_2153_);
lean_inc(v___y_2152_);
lean_inc_ref(v___y_2151_);
lean_inc(v___y_2150_);
lean_inc_ref(v___y_2149_);
lean_inc(v___y_2148_);
lean_inc_ref(v___y_2147_);
v___x_2170_ = lean_apply_9(v___x_16342__overap_2169_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, lean_box(0));
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; uint8_t v___x_2172_; lean_object* v___x_2173_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v___x_2170_, 1);
v___x_2172_ = 0;
v___x_2173_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(v_a_2171_, v___f_2145_, v___x_2172_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
lean_dec(v_a_2171_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v_fst_2175_; lean_object* v_snd_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_16344__overap_2180_; lean_object* v___x_2181_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2173_, 1);
v_fst_2175_ = lean_ctor_get(v_a_2174_, 0);
lean_inc(v_fst_2175_);
v_snd_2176_ = lean_ctor_get(v_a_2174_, 1);
lean_inc(v_snd_2176_);
lean_dec(v_a_2174_);
v___x_2177_ = lean_box_usize(v_sz_2155_);
v___x_2178_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed__const__1));
v___x_2179_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6___boxed), 8, 3);
lean_closure_set(v___x_2179_, 0, v___x_2177_);
lean_closure_set(v___x_2179_, 1, v___x_2178_);
lean_closure_set(v___x_2179_, 2, v___x_2157_);
v___x_16344__overap_2180_ = l_unsafeCast___redArg(v___x_2179_);
lean_dec_ref(v___x_2179_);
lean_inc(v___y_2154_);
lean_inc_ref(v___y_2153_);
lean_inc(v___y_2152_);
lean_inc_ref(v___y_2151_);
v___x_2181_ = lean_apply_5(v___x_16344__overap_2180_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, lean_box(0));
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2182_);
lean_dec_ref_known(v___x_2181_, 1);
v___x_2183_ = lean_array_to_list(v_a_2182_);
v___x_2184_ = l_Lean_Meta_mkAndIntroN(v___x_2183_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_a_2185_);
lean_dec_ref_known(v___x_2184_, 1);
v___x_2186_ = lean_array_get_size(v_a_2163_);
v___x_2187_ = lean_nat_dec_lt(v___x_2075_, v___x_2186_);
if (v___x_2187_ == 0)
{
lean_dec(v_a_2163_);
lean_inc_ref(v_00_u03c3s_2078_);
v___y_2094_ = v___y_2151_;
v___y_2095_ = v___y_2150_;
v___y_2096_ = v___y_2154_;
v___y_2097_ = v___y_2153_;
v___y_2098_ = v_snd_2176_;
v___y_2099_ = v_fst_2175_;
v___y_2100_ = v_a_2185_;
v___y_2101_ = v___y_2149_;
v___y_2102_ = v___y_2148_;
v___y_2103_ = v___y_2152_;
v___y_2104_ = v___y_2147_;
v___y_2105_ = v_00_u03c3s_2078_;
goto v___jp_2093_;
}
else
{
size_t v___x_2188_; lean_object* v___x_2189_; 
v___x_2188_ = lean_usize_of_nat(v___x_2186_);
lean_inc_ref(v_00_u03c3s_2078_);
lean_inc(v_u_2077_);
v___x_2189_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(v_u_2077_, v_a_2163_, v___x_2188_, v___x_2156_, v_00_u03c3s_2078_);
lean_dec(v_a_2163_);
v___y_2094_ = v___y_2151_;
v___y_2095_ = v___y_2150_;
v___y_2096_ = v___y_2154_;
v___y_2097_ = v___y_2153_;
v___y_2098_ = v_snd_2176_;
v___y_2099_ = v_fst_2175_;
v___y_2100_ = v_a_2185_;
v___y_2101_ = v___y_2149_;
v___y_2102_ = v___y_2148_;
v___y_2103_ = v___y_2152_;
v___y_2104_ = v___y_2147_;
v___y_2105_ = v___x_2189_;
goto v___jp_2093_;
}
}
else
{
lean_dec(v_snd_2176_);
lean_dec(v_fst_2175_);
lean_dec(v_a_2163_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_f_2085_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
lean_dec_ref(v_k_2065_);
lean_dec(v_n_2063_);
return v___x_2184_;
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec(v_snd_2176_);
lean_dec(v_fst_2175_);
lean_dec(v_a_2163_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_f_2085_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
lean_dec_ref(v_k_2065_);
lean_dec(v_n_2063_);
v_a_2190_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2181_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2181_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
lean_dec(v_a_2163_);
lean_dec(v___x_2157_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_f_2085_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
lean_dec_ref(v_k_2065_);
lean_dec(v_n_2063_);
v_a_2198_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2173_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2173_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec(v_a_2163_);
lean_dec(v___x_2157_);
lean_dec_ref(v___f_2145_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_f_2085_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
lean_dec_ref(v_k_2065_);
lean_dec(v_n_2063_);
v_a_2206_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2170_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2170_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
lean_dec(v___x_2157_);
lean_dec_ref(v___f_2145_);
lean_dec_ref(v_revertArgs_2092_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_f_2085_);
lean_del_object(v___x_2082_);
lean_dec_ref(v_target_2080_);
lean_dec_ref(v_hyps_2079_);
lean_dec_ref(v_00_u03c3s_2078_);
lean_dec(v_u_2077_);
lean_dec_ref(v_k_2065_);
lean_dec(v_n_2063_);
v_a_2214_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2162_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2162_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
}
}
else
{
lean_object* v___x_2249_; 
lean_dec(v_hypName_2064_);
lean_dec(v_n_2063_);
lean_inc(v___y_2073_);
lean_inc_ref(v___y_2072_);
lean_inc(v___y_2071_);
lean_inc_ref(v___y_2070_);
lean_inc(v___y_2069_);
lean_inc_ref(v___y_2068_);
lean_inc(v___y_2067_);
lean_inc_ref(v___y_2066_);
v___x_2249_ = lean_apply_10(v_k_2065_, v_goal_2062_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, lean_box(0));
return v___x_2249_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___boxed(lean_object* v_goal_2250_, lean_object* v_n_2251_, lean_object* v_hypName_2252_, lean_object* v_k_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(v_goal_2250_, v_n_2251_, v_hypName_2252_, v_k_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(lean_object* v___x_2267_, lean_object* v_snd_2268_, lean_object* v___y_2269_, lean_object* v_fst_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v___x_2280_; lean_object* v___f_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2280_ = lean_st_mk_ref(v___x_2267_);
lean_inc(v___x_2280_);
v___f_2281_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2281_, 0, v___x_2280_);
v___x_2282_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1));
v___x_2283_ = l_Lean_Core_mkFreshUserName(v___x_2282_, v___y_2277_, v___y_2278_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; lean_object* v___x_2285_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
lean_inc(v_a_2284_);
lean_dec_ref_known(v___x_2283_, 1);
v___x_2285_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(v_snd_2268_, v___y_2269_, v_a_2284_, v___f_2281_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2285_, 1);
v___x_2287_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_fst_2270_, v_a_2286_, v___y_2276_);
lean_dec_ref(v___x_2287_);
v___x_2288_ = lean_st_ref_get(v___x_2280_);
lean_dec(v___x_2280_);
v___x_2289_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2288_, v___y_2272_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
return v___x_2289_;
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2297_; 
lean_dec(v___x_2280_);
lean_dec(v_fst_2270_);
v_a_2290_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2292_ = v___x_2285_;
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___x_2285_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_a_2290_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec_ref(v___f_2281_);
lean_dec(v___x_2280_);
lean_dec(v_fst_2270_);
lean_dec(v___y_2269_);
lean_dec_ref(v_snd_2268_);
v_a_2298_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2283_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2283_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed(lean_object* v___x_2306_, lean_object* v_snd_2307_, lean_object* v___y_2308_, lean_object* v_fst_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(v___x_2306_, v_snd_2307_, v___y_2308_, v_fst_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(lean_object* v_goal_2327_, lean_object* v_ref_2328_, lean_object* v_k_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v___x_2339_; 
lean_inc_ref(v_goal_2327_);
v___x_2339_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(v_goal_2327_, v_ref_2328_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v_focusHyp_2341_; lean_object* v_restHyps_2342_; lean_object* v_proof_2343_; lean_object* v___x_2344_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v_focusHyp_2341_ = lean_ctor_get(v_a_2340_, 0);
lean_inc_ref_n(v_focusHyp_2341_, 2);
v_restHyps_2342_ = lean_ctor_get(v_a_2340_, 1);
lean_inc_ref(v_restHyps_2342_);
v_proof_2343_ = lean_ctor_get(v_a_2340_, 2);
lean_inc_ref(v_proof_2343_);
lean_dec(v_a_2340_);
v___x_2344_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_focusHyp_2341_);
if (lean_obj_tag(v___x_2344_) == 1)
{
lean_object* v_val_2345_; lean_object* v_u_2346_; lean_object* v_00_u03c3s_2347_; lean_object* v_hyps_2348_; lean_object* v_target_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2374_; 
v_val_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_val_2345_);
lean_dec_ref_known(v___x_2344_, 1);
v_u_2346_ = lean_ctor_get(v_goal_2327_, 0);
v_00_u03c3s_2347_ = lean_ctor_get(v_goal_2327_, 1);
v_hyps_2348_ = lean_ctor_get(v_goal_2327_, 2);
v_target_2349_ = lean_ctor_get(v_goal_2327_, 3);
v_isSharedCheck_2374_ = !lean_is_exclusive(v_goal_2327_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2351_ = v_goal_2327_;
v_isShared_2352_ = v_isSharedCheck_2374_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_target_2349_);
lean_inc(v_hyps_2348_);
lean_inc(v_00_u03c3s_2347_);
lean_inc(v_u_2346_);
lean_dec(v_goal_2327_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2374_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v_p_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2360_; 
v_p_2353_ = lean_ctor_get(v_val_2345_, 2);
lean_inc_ref(v_p_2353_);
lean_dec(v_val_2345_);
v___x_2354_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4));
v___x_2355_ = lean_box(0);
lean_inc(v_u_2346_);
v___x_2356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2356_, 0, v_u_2346_);
lean_ctor_set(v___x_2356_, 1, v___x_2355_);
lean_inc_ref(v___x_2356_);
v___x_2357_ = l_Lean_mkConst(v___x_2354_, v___x_2356_);
lean_inc_ref(v_target_2349_);
lean_inc_ref_n(v_00_u03c3s_2347_, 2);
v___x_2358_ = l_Lean_mkApp3(v___x_2357_, v_00_u03c3s_2347_, v_p_2353_, v_target_2349_);
lean_inc_ref(v_restHyps_2342_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 3, v___x_2358_);
lean_ctor_set(v___x_2351_, 2, v_restHyps_2342_);
v___x_2360_ = v___x_2351_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_u_2346_);
lean_ctor_set(v_reuseFailAlloc_2373_, 1, v_00_u03c3s_2347_);
lean_ctor_set(v_reuseFailAlloc_2373_, 2, v_restHyps_2342_);
lean_ctor_set(v_reuseFailAlloc_2373_, 3, v___x_2358_);
v___x_2360_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
lean_object* v___x_2361_; 
lean_inc(v___y_2337_);
lean_inc_ref(v___y_2336_);
lean_inc(v___y_2335_);
lean_inc_ref(v___y_2334_);
lean_inc(v___y_2333_);
lean_inc_ref(v___y_2332_);
lean_inc(v___y_2331_);
lean_inc_ref(v___y_2330_);
v___x_2361_ = lean_apply_10(v_k_2329_, v___x_2360_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, lean_box(0));
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2372_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2364_ = v___x_2361_;
v_isShared_2365_ = v_isSharedCheck_2372_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2361_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2372_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v_prf_2368_; lean_object* v___x_2370_; 
v___x_2366_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0));
v___x_2367_ = l_Lean_mkConst(v___x_2366_, v___x_2356_);
v_prf_2368_ = l_Lean_mkApp7(v___x_2367_, v_00_u03c3s_2347_, v_hyps_2348_, v_restHyps_2342_, v_focusHyp_2341_, v_target_2349_, v_proof_2343_, v_a_2362_);
if (v_isShared_2365_ == 0)
{
lean_ctor_set(v___x_2364_, 0, v_prf_2368_);
v___x_2370_ = v___x_2364_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_prf_2368_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
else
{
lean_dec_ref_known(v___x_2356_, 2);
lean_dec_ref(v_target_2349_);
lean_dec_ref(v_hyps_2348_);
lean_dec_ref(v_00_u03c3s_2347_);
lean_dec_ref(v_proof_2343_);
lean_dec_ref(v_restHyps_2342_);
lean_dec_ref(v_focusHyp_2341_);
return v___x_2361_;
}
}
}
}
else
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
lean_dec(v___x_2344_);
lean_dec_ref(v_proof_2343_);
lean_dec_ref(v_restHyps_2342_);
lean_dec_ref(v_focusHyp_2341_);
lean_dec_ref(v_k_2329_);
lean_dec_ref(v_goal_2327_);
v___x_2375_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6);
v___x_2376_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v___x_2375_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
return v___x_2376_;
}
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2384_; 
lean_dec_ref(v_k_2329_);
lean_dec_ref(v_goal_2327_);
v_a_2377_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2379_ = v___x_2339_;
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___x_2339_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2382_; 
if (v_isShared_2380_ == 0)
{
v___x_2382_ = v___x_2379_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_a_2377_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___boxed(lean_object* v_goal_2385_, lean_object* v_ref_2386_, lean_object* v_k_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(v_goal_2385_, v_ref_2386_, v_k_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(lean_object* v___x_2398_, lean_object* v_val_2399_, lean_object* v_h_2400_, lean_object* v_a_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v___x_2411_; lean_object* v___f_2412_; lean_object* v___x_2413_; 
v___x_2411_ = lean_st_mk_ref(v___x_2398_);
lean_inc(v___x_2411_);
v___f_2412_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2412_, 0, v___x_2411_);
v___x_2413_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(v_val_2399_, v_h_2400_, v___f_2412_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref_known(v___x_2413_, 1);
v___x_2415_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_a_2401_, v_a_2414_, v___y_2407_);
lean_dec_ref(v___x_2415_);
v___x_2416_ = lean_st_ref_get(v___x_2411_);
lean_dec(v___x_2411_);
v___x_2417_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2416_, v___y_2403_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
return v___x_2417_;
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
lean_dec(v___x_2411_);
lean_dec(v_a_2401_);
v_a_2418_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2413_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2413_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed(lean_object* v___x_2426_, lean_object* v_val_2427_, lean_object* v_h_2428_, lean_object* v_a_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(v___x_2426_, v_val_2427_, v_h_2428_, v_a_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(lean_object* v_msg_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v_ref_2446_; lean_object* v___x_2447_; lean_object* v_a_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2456_; 
v_ref_2446_ = lean_ctor_get(v___y_2443_, 2);
v___x_2447_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msg_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
v_a_2448_ = lean_ctor_get(v___x_2447_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2447_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2450_ = v___x_2447_;
v_isShared_2451_ = v_isSharedCheck_2456_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_a_2448_);
lean_dec(v___x_2447_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2456_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2452_; lean_object* v___x_2454_; 
lean_inc(v_ref_2446_);
v___x_2452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2452_, 0, v_ref_2446_);
lean_ctor_set(v___x_2452_, 1, v_a_2448_);
if (v_isShared_2451_ == 0)
{
lean_ctor_set_tag(v___x_2450_, 1);
lean_ctor_set(v___x_2450_, 0, v___x_2452_);
v___x_2454_ = v___x_2450_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v___x_2452_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg___boxed(lean_object* v_msg_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v_msg_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
return v_res_2463_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11(void){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10));
v___x_2489_ = l_Lean_stringToMessageData(v___x_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(lean_object* v_x_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_){
_start:
{
lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___x_2515_; uint8_t v___x_2516_; 
v___x_2515_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3));
lean_inc(v_x_2490_);
v___x_2516_ = l_Lean_Syntax_isOfKind(v_x_2490_, v___x_2515_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2517_; 
lean_dec(v_x_2490_);
v___x_2517_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2517_;
}
else
{
lean_object* v___x_2518_; lean_object* v_n_2520_; lean_object* v___y_2521_; lean_object* v___y_2522_; lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___x_2545_; uint8_t v___x_2546_; 
v___x_2518_ = lean_unsigned_to_nat(1u);
v___x_2545_ = l_Lean_Syntax_getArg(v_x_2490_, v___x_2518_);
lean_dec(v_x_2490_);
lean_inc(v___x_2545_);
v___x_2546_ = l_Lean_Syntax_matchesNull(v___x_2545_, v___x_2518_);
if (v___x_2546_ == 0)
{
lean_object* v___x_2547_; 
lean_dec(v___x_2545_);
v___x_2547_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2547_;
}
else
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___x_2548_ = lean_unsigned_to_nat(0u);
v___x_2549_ = l_Lean_Syntax_getArg(v___x_2545_, v___x_2548_);
lean_dec(v___x_2545_);
v___x_2550_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5));
lean_inc(v___x_2549_);
v___x_2551_ = l_Lean_Syntax_isOfKind(v___x_2549_, v___x_2550_);
if (v___x_2551_ == 0)
{
lean_object* v___x_2552_; uint8_t v___x_2553_; 
v___x_2552_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7));
lean_inc(v___x_2549_);
v___x_2553_ = l_Lean_Syntax_isOfKind(v___x_2549_, v___x_2552_);
if (v___x_2553_ == 0)
{
lean_object* v___x_2554_; 
lean_dec(v___x_2549_);
v___x_2554_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2554_;
}
else
{
lean_object* v___x_2555_; uint8_t v___x_2556_; 
v___x_2555_ = l_Lean_Syntax_getArg(v___x_2549_, v___x_2518_);
lean_dec(v___x_2549_);
v___x_2556_ = l_Lean_Syntax_isNone(v___x_2555_);
if (v___x_2556_ == 0)
{
uint8_t v___x_2557_; 
lean_inc(v___x_2555_);
v___x_2557_ = l_Lean_Syntax_matchesNull(v___x_2555_, v___x_2518_);
if (v___x_2557_ == 0)
{
lean_object* v___x_2558_; 
lean_dec(v___x_2555_);
v___x_2558_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2558_;
}
else
{
lean_object* v_n_2559_; lean_object* v___x_2560_; 
v_n_2559_ = l_Lean_Syntax_getArg(v___x_2555_, v___x_2548_);
lean_dec(v___x_2555_);
v___x_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2560_, 0, v_n_2559_);
v_n_2520_ = v___x_2560_;
v___y_2521_ = v_a_2491_;
v___y_2522_ = v_a_2492_;
v___y_2523_ = v_a_2493_;
v___y_2524_ = v_a_2494_;
v___y_2525_ = v_a_2495_;
v___y_2526_ = v_a_2496_;
v___y_2527_ = v_a_2497_;
v___y_2528_ = v_a_2498_;
goto v___jp_2519_;
}
}
else
{
lean_object* v___x_2561_; 
lean_dec(v___x_2555_);
v___x_2561_ = lean_box(0);
v_n_2520_ = v___x_2561_;
v___y_2521_ = v_a_2491_;
v___y_2522_ = v_a_2492_;
v___y_2523_ = v_a_2493_;
v___y_2524_ = v_a_2494_;
v___y_2525_ = v_a_2495_;
v___y_2526_ = v_a_2496_;
v___y_2527_ = v_a_2497_;
v___y_2528_ = v_a_2498_;
goto v___jp_2519_;
}
}
}
else
{
lean_object* v_h_2562_; lean_object* v___x_2563_; uint8_t v___x_2564_; 
v_h_2562_ = l_Lean_Syntax_getArg(v___x_2549_, v___x_2548_);
lean_dec(v___x_2549_);
v___x_2563_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9));
lean_inc(v_h_2562_);
v___x_2564_ = l_Lean_Syntax_isOfKind(v_h_2562_, v___x_2563_);
if (v___x_2564_ == 0)
{
lean_object* v___x_2565_; 
lean_dec(v_h_2562_);
v___x_2565_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2565_;
}
else
{
lean_object* v___x_2566_; 
v___x_2566_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_2492_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v_a_2567_; lean_object* v___x_2568_; 
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc_n(v_a_2567_, 2);
lean_dec_ref_known(v___x_2566_, 1);
v___x_2568_ = l_Lean_MVarId_getType(v_a_2567_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2570_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2568_, 1);
v___x_2570_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_2569_);
lean_dec(v_a_2569_);
if (lean_obj_tag(v___x_2570_) == 1)
{
lean_object* v_val_2571_; lean_object* v___x_2572_; lean_object* v___f_2573_; lean_object* v___x_2574_; 
v_val_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_val_2571_);
lean_dec_ref_known(v___x_2570_, 1);
v___x_2572_ = lean_box(0);
lean_inc(v_a_2567_);
v___f_2573_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed), 13, 4);
lean_closure_set(v___f_2573_, 0, v___x_2572_);
lean_closure_set(v___f_2573_, 1, v_val_2571_);
lean_closure_set(v___f_2573_, 2, v_h_2562_);
lean_closure_set(v___f_2573_, 3, v_a_2567_);
v___x_2574_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_a_2567_, v___f_2573_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_);
return v___x_2574_;
}
else
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
lean_dec(v___x_2570_);
lean_dec(v_a_2567_);
lean_dec(v_h_2562_);
v___x_2575_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11);
v___x_2576_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v___x_2575_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_);
return v___x_2576_;
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2584_; 
lean_dec(v_a_2567_);
lean_dec(v_h_2562_);
v_a_2577_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2579_ = v___x_2568_;
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2568_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2577_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
}
else
{
lean_object* v_a_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2592_; 
lean_dec(v_h_2562_);
v_a_2585_ = lean_ctor_get(v___x_2566_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2587_ = v___x_2566_;
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_a_2585_);
lean_dec(v___x_2566_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2590_; 
if (v_isShared_2588_ == 0)
{
v___x_2590_ = v___x_2587_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_a_2585_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
}
}
v___jp_2519_:
{
lean_object* v___x_2529_; 
v___x_2529_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v___y_2522_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v_a_2530_; 
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v___x_2529_, 1);
if (lean_obj_tag(v_n_2520_) == 0)
{
lean_object* v_fst_2531_; lean_object* v_snd_2532_; 
v_fst_2531_ = lean_ctor_get(v_a_2530_, 0);
lean_inc(v_fst_2531_);
v_snd_2532_ = lean_ctor_get(v_a_2530_, 1);
lean_inc(v_snd_2532_);
lean_dec(v_a_2530_);
v___y_2501_ = v_fst_2531_;
v___y_2502_ = v_snd_2532_;
v___y_2503_ = v___y_2528_;
v___y_2504_ = v___y_2526_;
v___y_2505_ = v___y_2522_;
v___y_2506_ = v___y_2527_;
v___y_2507_ = v___y_2521_;
v___y_2508_ = v___y_2523_;
v___y_2509_ = v___y_2525_;
v___y_2510_ = v___y_2524_;
v___y_2511_ = v___x_2518_;
goto v___jp_2500_;
}
else
{
lean_object* v_fst_2533_; lean_object* v_snd_2534_; lean_object* v_val_2535_; lean_object* v___x_2536_; 
v_fst_2533_ = lean_ctor_get(v_a_2530_, 0);
lean_inc(v_fst_2533_);
v_snd_2534_ = lean_ctor_get(v_a_2530_, 1);
lean_inc(v_snd_2534_);
lean_dec(v_a_2530_);
v_val_2535_ = lean_ctor_get(v_n_2520_, 0);
lean_inc(v_val_2535_);
lean_dec_ref_known(v_n_2520_, 1);
v___x_2536_ = l_Lean_TSyntax_getNat(v_val_2535_);
lean_dec(v_val_2535_);
v___y_2501_ = v_fst_2533_;
v___y_2502_ = v_snd_2534_;
v___y_2503_ = v___y_2528_;
v___y_2504_ = v___y_2526_;
v___y_2505_ = v___y_2522_;
v___y_2506_ = v___y_2527_;
v___y_2507_ = v___y_2521_;
v___y_2508_ = v___y_2523_;
v___y_2509_ = v___y_2525_;
v___y_2510_ = v___y_2524_;
v___y_2511_ = v___x_2536_;
goto v___jp_2500_;
}
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2544_; 
lean_dec(v_n_2520_);
v_a_2537_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2539_ = v___x_2529_;
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_a_2537_);
lean_dec(v___x_2529_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2542_; 
if (v_isShared_2540_ == 0)
{
v___x_2542_ = v___x_2539_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_a_2537_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
}
v___jp_2500_:
{
lean_object* v___x_2512_; lean_object* v___f_2513_; lean_object* v___x_2514_; 
v___x_2512_ = lean_box(0);
lean_inc(v___y_2501_);
v___f_2513_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed), 13, 4);
lean_closure_set(v___f_2513_, 0, v___x_2512_);
lean_closure_set(v___f_2513_, 1, v___y_2502_);
lean_closure_set(v___f_2513_, 2, v___y_2511_);
lean_closure_set(v___f_2513_, 3, v___y_2501_);
v___x_2514_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v___y_2501_, v___f_2513_, v___y_2507_, v___y_2505_, v___y_2508_, v___y_2510_, v___y_2509_, v___y_2504_, v___y_2506_, v___y_2503_);
return v___x_2514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___boxed(lean_object* v_x_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(v_x_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
lean_dec(v_a_2601_);
lean_dec_ref(v_a_2600_);
lean_dec(v_a_2599_);
lean_dec_ref(v_a_2598_);
lean_dec(v_a_2597_);
lean_dec_ref(v_a_2596_);
lean_dec(v_a_2595_);
lean_dec_ref(v_a_2594_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2(lean_object* v_mvarId_2604_, lean_object* v_val_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_){
_start:
{
lean_object* v___x_2615_; 
v___x_2615_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_mvarId_2604_, v_val_2605_, v___y_2611_);
return v___x_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___boxed(lean_object* v_mvarId_2616_, lean_object* v_val_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2(v_mvarId_2616_, v_val_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5(lean_object* v_00_u03b1_2628_, lean_object* v_msg_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v_msg_2629_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___boxed(lean_object* v_00_u03b1_2640_, lean_object* v_msg_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5(v_00_u03b1_2640_, v_msg_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1(lean_object* v_inst_2652_, lean_object* v_R_2653_, lean_object* v_a_2654_, lean_object* v_b_2655_){
_start:
{
lean_object* v___x_2656_; 
v___x_2656_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(v_a_2654_, v_b_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8(lean_object* v_00_u03b1_2657_, lean_object* v_msg_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v___x_2664_; 
v___x_2664_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v_msg_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___boxed(lean_object* v_00_u03b1_2665_, lean_object* v_msg_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v_res_2672_; 
v_res_2672_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8(v_00_u03b1_2665_, v_msg_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10(lean_object* v_00_u03b2_2673_, lean_object* v_x_2674_, lean_object* v_x_2675_, lean_object* v_x_2676_){
_start:
{
lean_object* v___x_2677_; 
v___x_2677_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(v_x_2674_, v_x_2675_, v_x_2676_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14(lean_object* v_00_u03b2_2678_, lean_object* v_x_2679_, size_t v_x_2680_, size_t v_x_2681_, lean_object* v_x_2682_, lean_object* v_x_2683_){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_x_2679_, v_x_2680_, v_x_2681_, v_x_2682_, v_x_2683_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___boxed(lean_object* v_00_u03b2_2685_, lean_object* v_x_2686_, lean_object* v_x_2687_, lean_object* v_x_2688_, lean_object* v_x_2689_, lean_object* v_x_2690_){
_start:
{
size_t v_x_19588__boxed_2691_; size_t v_x_19589__boxed_2692_; lean_object* v_res_2693_; 
v_x_19588__boxed_2691_ = lean_unbox_usize(v_x_2687_);
lean_dec(v_x_2687_);
v_x_19589__boxed_2692_ = lean_unbox_usize(v_x_2688_);
lean_dec(v_x_2688_);
v_res_2693_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14(v_00_u03b2_2685_, v_x_2686_, v_x_19588__boxed_2691_, v_x_19589__boxed_2692_, v_x_2689_, v_x_2690_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20(lean_object* v_00_u03b2_2694_, lean_object* v_n_2695_, lean_object* v_k_2696_, lean_object* v_v_2697_){
_start:
{
lean_object* v___x_2698_; 
v___x_2698_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20___redArg(v_n_2695_, v_k_2696_, v_v_2697_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21(lean_object* v_00_u03b2_2699_, size_t v_depth_2700_, lean_object* v_keys_2701_, lean_object* v_vals_2702_, lean_object* v_heq_2703_, lean_object* v_i_2704_, lean_object* v_entries_2705_){
_start:
{
lean_object* v___x_2706_; 
v___x_2706_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(v_depth_2700_, v_keys_2701_, v_vals_2702_, v_i_2704_, v_entries_2705_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___boxed(lean_object* v_00_u03b2_2707_, lean_object* v_depth_2708_, lean_object* v_keys_2709_, lean_object* v_vals_2710_, lean_object* v_heq_2711_, lean_object* v_i_2712_, lean_object* v_entries_2713_){
_start:
{
size_t v_depth_boxed_2714_; lean_object* v_res_2715_; 
v_depth_boxed_2714_ = lean_unbox_usize(v_depth_2708_);
lean_dec(v_depth_2708_);
v_res_2715_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21(v_00_u03b2_2707_, v_depth_boxed_2714_, v_keys_2709_, v_vals_2710_, v_heq_2711_, v_i_2712_, v_entries_2713_);
lean_dec_ref(v_vals_2710_);
lean_dec_ref(v_keys_2709_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21(lean_object* v_00_u03b1_2716_, lean_object* v_name_2717_, uint8_t v_bi_2718_, lean_object* v_type_2719_, lean_object* v_k_2720_, uint8_t v_kind_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(v_name_2717_, v_bi_2718_, v_type_2719_, v_k_2720_, v_kind_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___boxed(lean_object* v_00_u03b1_2732_, lean_object* v_name_2733_, lean_object* v_bi_2734_, lean_object* v_type_2735_, lean_object* v_k_2736_, lean_object* v_kind_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
uint8_t v_bi_boxed_2747_; uint8_t v_kind_boxed_2748_; lean_object* v_res_2749_; 
v_bi_boxed_2747_ = lean_unbox(v_bi_2734_);
v_kind_boxed_2748_ = lean_unbox(v_kind_2737_);
v_res_2749_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21(v_00_u03b1_2732_, v_name_2733_, v_bi_boxed_2747_, v_type_2735_, v_k_2736_, v_kind_boxed_2748_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22(lean_object* v_00_u03b2_2750_, lean_object* v_x_2751_, lean_object* v_x_2752_, lean_object* v_x_2753_, lean_object* v_x_2754_){
_start:
{
lean_object* v___x_2755_; 
v___x_2755_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22___redArg(v_x_2751_, v_x_2752_, v_x_2753_, v_x_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1(){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2767_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2768_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3));
v___x_2769_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3));
v___x_2770_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___boxed), 10, 0);
v___x_2771_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2767_, v___x_2768_, v___x_2769_, v___x_2770_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___boxed(lean_object* v_a_2772_){
_start:
{
lean_object* v_res_2773_; 
v_res_2773_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1();
return v_res_2773_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(builtin);
}
#ifdef __cplusplus
}
#endif

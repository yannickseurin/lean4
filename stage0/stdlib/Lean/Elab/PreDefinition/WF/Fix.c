// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Fix
// Imports: public import Lean.Data.Array public import Lean.Elab.PreDefinition.Basic public import Lean.Elab.PreDefinition.WF.Basic public import Lean.Meta.ArgsPacker public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Meta.Tactic.Cleanup public import Lean.Util.HasConstCache
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
lean_object* l_Lean_stringToMessageData(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedMVarId_default;
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_applyCleanWfTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_reportUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_setGoals___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Term_withDeclName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRecAppWithSyntax(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_HasConstCache_containsUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMData(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* l_Lean_LocalContext_size(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_local_ctx_is_empty(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "replaceRecApps"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(222, 200, 98, 106, 253, 180, 239, 155)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(54, 49, 183, 192, 189, 122, 168, 8)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(68, 153, 95, 135, 30, 171, 176, 236)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Type check every step of the well-founded definition translation"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(24, 25, 43, 203, 194, 237, 195, 214)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(7, 7, 223, 43, 113, 218, 153, 204)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(253, 66, 61, 195, 239, 57, 103, 30)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(65, 40, 109, 48, 223, 99, 87, 96)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_5),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(255, 91, 253, 16, 215, 73, 25, 62)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0;
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected empty local context"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Type not preserved transforming"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nType was"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nand now is"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Type error introduced when transforming"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__4 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__4_value;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed__const__1 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "replaceRecApp: eta-expanding"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "unexpected matcher application alternative"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\nat application"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "type of functorial "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " is"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "replaceRecApps:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inl"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PSum"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(14, 217, 178, 28, 107, 212, 157, 131)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inr"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value),LEAN_SCALAR_PTR_LITERAL(201, 156, 94, 164, 220, 114, 107, 70)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(166, 115, 173, 38, 27, 113, 160, 8)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "_private.Lean.Elab.PreDefinition.WF.Fix.0.Lean.Elab.WF.processPSigmaCasesOn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Elab.PreDefinition.WF.Fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "PSigma"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(248, 249, 30, 71, 49, 108, 60, 175)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object**);
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(225, 129, 3, 119, 45, 252, 168, 83)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "tacticDecreasing_tactic"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 100, 186, 108, 185, 30, 251, 120)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "decreasing_tactic"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_WF_assignSubsumed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_WF_assignSubsumed___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_WF_assignSubsumed___closed__0 = (const lean_object*)&l_Lean_Elab_WF_assignSubsumed___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "MVar does not look like a recursive call:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Cannot unpack param, unexpected expression:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "MVar not annotated as a recursive call:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "invImage"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__0 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 194, 127, 152, 147, 1, 182, 44)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__1 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__1_value;
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__2 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__3 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__3_value;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__4;
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lt_wfRel"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__5 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__5_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__5_value),LEAN_SCALAR_PTR_LITERAL(154, 103, 103, 42, 122, 250, 41, 80)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__6 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__6_value;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "WellFounded"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 126, 194, 128, 117, 36, 224, 78)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 0, 160, 225, 119, 146, 123, 62)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "WellFoundedRelation"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 146, 95, 132, 177, 137, 153, 47)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__4_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "opaqueId"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__5_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 89, 34, 148, 92, 203, 118, 146)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(172, 133, 211, 204, 28, 206, 53, 233)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_WF_mkFix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_mkFix___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkFix___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_mkFix___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mkFix___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_61_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_62_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_63_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_64_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(v___x_61_, v___x_62_, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4____boxed(lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
return v_res_66_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_box(0);
v___x_68_ = l_unsafeCast___redArg(v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object* v_decreasingProp_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v_ref_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_ref_77_ = lean_ctor_get(v_a_74_, 2);
lean_inc(v_ref_77_);
v___x_78_ = l_Lean_mkRecAppWithSyntax(v_decreasingProp_71_, v_ref_77_);
v___x_79_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0);
v___x_80_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_78_, v___x_79_, v_a_72_, v_a_73_, v_a_74_, v_a_75_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v_a_81_; lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; lean_object* v___x_85_; 
v_a_81_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_81_);
lean_dec_ref_known(v___x_80_, 1);
v___x_82_ = l_Lean_Expr_mvarId_x21(v_a_81_);
v___x_83_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__1));
v___x_84_ = 1;
v___x_85_ = l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(v___x_82_, v___x_83_, v___x_84_, v_a_72_, v_a_73_, v_a_74_, v_a_75_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_92_; 
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_92_ == 0)
{
lean_object* v_unused_93_; 
v_unused_93_ = lean_ctor_get(v___x_85_, 0);
lean_dec(v_unused_93_);
v___x_87_ = v___x_85_;
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
else
{
lean_dec(v___x_85_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 0, v_a_81_);
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_a_81_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
else
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_101_; 
lean_dec(v_a_81_);
v_a_94_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_101_ == 0)
{
v___x_96_ = v___x_85_;
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v___x_85_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_99_; 
if (v_isShared_97_ == 0)
{
v___x_99_ = v___x_96_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_a_94_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
else
{
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___boxed(lean_object* v_decreasingProp_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v_decreasingProp_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_105_);
lean_dec(v_a_104_);
lean_dec_ref(v_a_103_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object* v_decreasingProp_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v_decreasingProp_109_, v_a_112_, v_a_113_, v_a_114_, v_a_115_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object* v_decreasingProp_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(v_decreasingProp_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(lean_object* v_msg_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = l_Lean_instInhabitedLocalDecl_default;
v___x_129_ = lean_panic_fn_borrowed(v___x_128_, v_msg_127_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(lean_object* v_msgData_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_){
_start:
{
lean_object* v___x_136_; lean_object* v_env_137_; lean_object* v___x_138_; lean_object* v_toCold_139_; lean_object* v_mctx_140_; lean_object* v_lctx_141_; lean_object* v_options_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_136_ = lean_st_ref_get(v___y_134_);
v_env_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc_ref(v_env_137_);
lean_dec(v___x_136_);
v___x_138_ = lean_st_ref_get(v___y_132_);
v_toCold_139_ = lean_ctor_get(v___y_133_, 0);
v_mctx_140_ = lean_ctor_get(v___x_138_, 0);
lean_inc_ref(v_mctx_140_);
lean_dec(v___x_138_);
v_lctx_141_ = lean_ctor_get(v___y_131_, 2);
v_options_142_ = lean_ctor_get(v_toCold_139_, 2);
lean_inc_ref(v_options_142_);
lean_inc_ref(v_lctx_141_);
v___x_143_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_143_, 0, v_env_137_);
lean_ctor_set(v___x_143_, 1, v_mctx_140_);
lean_ctor_set(v___x_143_, 2, v_lctx_141_);
lean_ctor_set(v___x_143_, 3, v_options_142_);
v___x_144_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v_msgData_130_);
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1___boxed(lean_object* v_msgData_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msgData_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(lean_object* v_msg_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_ref_159_; lean_object* v___x_160_; lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_ref_159_ = lean_ctor_get(v___y_156_, 2);
v___x_160_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
v_a_161_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v___x_160_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v___x_167_; 
lean_inc(v_ref_159_);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v_ref_159_);
lean_ctor_set(v___x_165_, 1, v_a_161_);
if (v_isShared_164_ == 0)
{
lean_ctor_set_tag(v___x_163_, 1);
lean_ctor_set(v___x_163_, 0, v___x_165_);
v___x_167_ = v___x_163_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_165_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg___boxed(lean_object* v_msg_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v_msg_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
return v_res_176_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_180_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2));
v___x_181_ = lean_unsigned_to_nat(14u);
v___x_182_ = lean_unsigned_to_nat(22u);
v___x_183_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1));
v___x_184_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0));
v___x_185_ = l_mkPanicMessageWithDecl(v___x_184_, v___x_183_, v___x_182_, v___x_181_, v___x_180_);
return v___x_185_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4));
v___x_188_ = l_Lean_stringToMessageData(v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___y_195_; lean_object* v___y_199_; lean_object* v_lctx_203_; lean_object* v___x_204_; uint8_t v___x_214_; 
v_lctx_203_ = lean_ctor_get(v_a_189_, 2);
v___x_204_ = lean_box(0);
lean_inc_ref(v_lctx_203_);
v___x_214_ = lean_local_ctx_is_empty(v_lctx_203_);
if (v___x_214_ == 0)
{
goto v___jp_205_;
}
else
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
v___x_215_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5);
v___x_216_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_215_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
v_a_217_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_216_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_216_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
v___jp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = l_Lean_LocalDecl_fvarId(v___y_195_);
lean_dec_ref(v___y_195_);
v___x_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
return v___x_197_;
}
v___jp_198_:
{
if (lean_obj_tag(v___y_199_) == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3);
v___x_201_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(v___x_200_);
v___y_195_ = v___x_201_;
goto v___jp_194_;
}
else
{
lean_object* v_val_202_; 
v_val_202_ = lean_ctor_get(v___y_199_, 0);
lean_inc(v_val_202_);
lean_dec_ref_known(v___y_199_, 1);
v___y_195_ = v_val_202_;
goto v___jp_194_;
}
}
v___jp_205_:
{
lean_object* v_decls_206_; lean_object* v_size_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_decls_206_ = lean_ctor_get(v_lctx_203_, 1);
v_size_207_ = lean_ctor_get(v_decls_206_, 2);
v___x_208_ = l_Lean_LocalContext_size(v_lctx_203_);
v___x_209_ = lean_unsigned_to_nat(1u);
v___x_210_ = lean_nat_sub(v___x_208_, v___x_209_);
lean_dec(v___x_208_);
v___x_211_ = lean_nat_dec_lt(v___x_210_, v_size_207_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; 
lean_dec(v___x_210_);
v___x_212_ = l_outOfBounds___redArg(v___x_204_);
v___y_199_ = v___x_212_;
goto v___jp_198_;
}
else
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_PersistentArray_get_x21___redArg(v___x_204_, v_decls_206_, v___x_210_);
lean_dec(v___x_210_);
v___y_199_ = v___x_213_;
goto v___jp_198_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___boxed(lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(v_a_225_, v_a_226_, v_a_227_, v_a_228_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(lean_object* v_00_u03b1_231_, lean_object* v_msg_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v_msg_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___boxed(lean_object* v_00_u03b1_239_, lean_object* v_msg_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(v_00_u03b1_239_, v_msg_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(lean_object* v_lctxid_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_lctx_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_lctx_250_ = lean_ctor_get(v_a_248_, 2);
v___x_251_ = l_Lean_LocalContext_contains(v_lctx_250_, v_lctxid_247_);
v___x_252_ = lean_box(v___x_251_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg___boxed(lean_object* v_lctxid_254_, lean_object* v_a_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_lctxid_254_, v_a_255_);
lean_dec_ref(v_a_255_);
lean_dec(v_lctxid_254_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(lean_object* v_lctxid_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_lctxid_258_, v_a_259_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___boxed(lean_object* v_lctxid_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(v_lctxid_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_);
lean_dec(v_a_269_);
lean_dec_ref(v_a_268_);
lean_dec(v_a_267_);
lean_dec_ref(v_a_266_);
lean_dec(v_lctxid_265_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object* v_recFnName_272_, lean_object* v_e_273_, lean_object* v_a_274_){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_fst_281_; lean_object* v_snd_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_276_ = lean_unsigned_to_nat(1u);
v___x_277_ = lean_mk_empty_array_with_capacity(v___x_276_);
v___x_278_ = lean_array_push(v___x_277_, v_recFnName_272_);
v___x_279_ = lean_st_ref_take(v_a_274_);
v___x_280_ = l_Lean_HasConstCache_containsUnsafe(v___x_278_, v_e_273_, v___x_279_);
lean_dec_ref(v___x_278_);
v_fst_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_fst_281_);
v_snd_282_ = lean_ctor_get(v___x_280_, 1);
lean_inc(v_snd_282_);
lean_dec_ref(v___x_280_);
v___x_283_ = lean_st_ref_put(v_a_274_, v_snd_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v_fst_281_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object* v_recFnName_285_, lean_object* v_e_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_285_, v_e_286_, v_a_287_);
lean_dec(v_a_287_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object* v_recFnName_290_, lean_object* v_e_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_290_, v_e_291_, v_a_292_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object* v_recFnName_302_, lean_object* v_e_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(v_recFnName_302_, v_e_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_);
lean_dec(v_a_311_);
lean_dec_ref(v_a_310_);
lean_dec(v_a_309_);
lean_dec_ref(v_a_308_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec(v_a_305_);
lean_dec(v_a_304_);
return v_res_313_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_314_; double v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_float_of_nat(v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object* v_cls_319_, lean_object* v_msg_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_ref_326_; lean_object* v___x_327_; lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_372_; 
v_ref_326_ = lean_ctor_get(v___y_323_, 2);
v___x_327_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
v_a_328_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_372_ == 0)
{
v___x_330_ = v___x_327_;
v_isShared_331_ = v_isSharedCheck_372_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_372_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v_traceState_333_; lean_object* v_env_334_; lean_object* v_nextMacroScope_335_; lean_object* v_ngen_336_; lean_object* v_auxDeclNGen_337_; lean_object* v_cache_338_; lean_object* v_messages_339_; lean_object* v_infoState_340_; lean_object* v_snapshotTasks_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_371_; 
v___x_332_ = lean_st_ref_take(v___y_324_);
v_traceState_333_ = lean_ctor_get(v___x_332_, 4);
v_env_334_ = lean_ctor_get(v___x_332_, 0);
v_nextMacroScope_335_ = lean_ctor_get(v___x_332_, 1);
v_ngen_336_ = lean_ctor_get(v___x_332_, 2);
v_auxDeclNGen_337_ = lean_ctor_get(v___x_332_, 3);
v_cache_338_ = lean_ctor_get(v___x_332_, 5);
v_messages_339_ = lean_ctor_get(v___x_332_, 6);
v_infoState_340_ = lean_ctor_get(v___x_332_, 7);
v_snapshotTasks_341_ = lean_ctor_get(v___x_332_, 8);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_371_ == 0)
{
v___x_343_ = v___x_332_;
v_isShared_344_ = v_isSharedCheck_371_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_snapshotTasks_341_);
lean_inc(v_infoState_340_);
lean_inc(v_messages_339_);
lean_inc(v_cache_338_);
lean_inc(v_traceState_333_);
lean_inc(v_auxDeclNGen_337_);
lean_inc(v_ngen_336_);
lean_inc(v_nextMacroScope_335_);
lean_inc(v_env_334_);
lean_dec(v___x_332_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_371_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
uint64_t v_tid_345_; lean_object* v_traces_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_370_; 
v_tid_345_ = lean_ctor_get_uint64(v_traceState_333_, sizeof(void*)*1);
v_traces_346_ = lean_ctor_get(v_traceState_333_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v_traceState_333_);
if (v_isSharedCheck_370_ == 0)
{
v___x_348_ = v_traceState_333_;
v_isShared_349_ = v_isSharedCheck_370_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_traces_346_);
lean_dec(v_traceState_333_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_370_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_351_; double v___x_352_; uint8_t v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_350_ = lean_box(0);
v___x_351_ = lean_box(0);
v___x_352_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0);
v___x_353_ = 0;
v___x_354_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1));
v___x_355_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_355_, 0, v_cls_319_);
lean_ctor_set(v___x_355_, 1, v___x_351_);
lean_ctor_set(v___x_355_, 2, v___x_354_);
lean_ctor_set_float(v___x_355_, sizeof(void*)*3, v___x_352_);
lean_ctor_set_float(v___x_355_, sizeof(void*)*3 + 8, v___x_352_);
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*3 + 16, v___x_353_);
v___x_356_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2));
v___x_357_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_357_, 0, v___x_355_);
lean_ctor_set(v___x_357_, 1, v_a_328_);
lean_ctor_set(v___x_357_, 2, v___x_356_);
lean_inc(v_ref_326_);
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v_ref_326_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = l_Lean_PersistentArray_push___redArg(v_traces_346_, v___x_358_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_359_);
v___x_361_ = v___x_348_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_359_);
lean_ctor_set_uint64(v_reuseFailAlloc_369_, sizeof(void*)*1, v_tid_345_);
v___x_361_ = v_reuseFailAlloc_369_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_363_; 
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 4, v___x_361_);
v___x_363_ = v___x_343_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_env_334_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_nextMacroScope_335_);
lean_ctor_set(v_reuseFailAlloc_368_, 2, v_ngen_336_);
lean_ctor_set(v_reuseFailAlloc_368_, 3, v_auxDeclNGen_337_);
lean_ctor_set(v_reuseFailAlloc_368_, 4, v___x_361_);
lean_ctor_set(v_reuseFailAlloc_368_, 5, v_cache_338_);
lean_ctor_set(v_reuseFailAlloc_368_, 6, v_messages_339_);
lean_ctor_set(v_reuseFailAlloc_368_, 7, v_infoState_340_);
lean_ctor_set(v_reuseFailAlloc_368_, 8, v_snapshotTasks_341_);
v___x_363_ = v_reuseFailAlloc_368_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_364_ = lean_st_ref_put(v___y_324_, v___x_363_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_350_);
v___x_366_ = v___x_330_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_350_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object* v_cls_373_, lean_object* v_msg_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_373_, v_msg_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(lean_object* v_x_381_, lean_object* v_x_382_){
_start:
{
if (lean_obj_tag(v_x_382_) == 0)
{
return v_x_381_;
}
else
{
lean_object* v_key_383_; lean_object* v_value_384_; lean_object* v_tail_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_408_; 
v_key_383_ = lean_ctor_get(v_x_382_, 0);
v_value_384_ = lean_ctor_get(v_x_382_, 1);
v_tail_385_ = lean_ctor_get(v_x_382_, 2);
v_isSharedCheck_408_ = !lean_is_exclusive(v_x_382_);
if (v_isSharedCheck_408_ == 0)
{
v___x_387_ = v_x_382_;
v_isShared_388_ = v_isSharedCheck_408_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_tail_385_);
lean_inc(v_value_384_);
lean_inc(v_key_383_);
lean_dec(v_x_382_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_408_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; uint64_t v___x_390_; uint64_t v___x_391_; uint64_t v___x_392_; uint64_t v_fold_393_; uint64_t v___x_394_; uint64_t v___x_395_; uint64_t v___x_396_; size_t v___x_397_; size_t v___x_398_; size_t v___x_399_; size_t v___x_400_; size_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_389_ = lean_array_get_size(v_x_381_);
v___x_390_ = l_Lean_Expr_hash(v_key_383_);
v___x_391_ = 32ULL;
v___x_392_ = lean_uint64_shift_right(v___x_390_, v___x_391_);
v_fold_393_ = lean_uint64_xor(v___x_390_, v___x_392_);
v___x_394_ = 16ULL;
v___x_395_ = lean_uint64_shift_right(v_fold_393_, v___x_394_);
v___x_396_ = lean_uint64_xor(v_fold_393_, v___x_395_);
v___x_397_ = lean_uint64_to_usize(v___x_396_);
v___x_398_ = lean_usize_of_nat(v___x_389_);
v___x_399_ = ((size_t)1ULL);
v___x_400_ = lean_usize_sub(v___x_398_, v___x_399_);
v___x_401_ = lean_usize_land(v___x_397_, v___x_400_);
v___x_402_ = lean_array_uget_borrowed(v_x_381_, v___x_401_);
lean_inc(v___x_402_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 2, v___x_402_);
v___x_404_ = v___x_387_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_key_383_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_value_384_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v___x_402_);
v___x_404_ = v_reuseFailAlloc_407_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_405_; 
v___x_405_ = lean_array_uset(v_x_381_, v___x_401_, v___x_404_);
v_x_381_ = v___x_405_;
v_x_382_ = v_tail_385_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(lean_object* v_i_409_, lean_object* v_source_410_, lean_object* v_target_411_){
_start:
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = lean_array_get_size(v_source_410_);
v___x_413_ = lean_nat_dec_lt(v_i_409_, v___x_412_);
if (v___x_413_ == 0)
{
lean_dec_ref(v_source_410_);
lean_dec(v_i_409_);
return v_target_411_;
}
else
{
lean_object* v_es_414_; lean_object* v___x_415_; lean_object* v_source_416_; lean_object* v_target_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v_es_414_ = lean_array_fget(v_source_410_, v_i_409_);
v___x_415_ = lean_box(0);
v_source_416_ = lean_array_fset(v_source_410_, v_i_409_, v___x_415_);
v_target_417_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(v_target_411_, v_es_414_);
v___x_418_ = lean_unsigned_to_nat(1u);
v___x_419_ = lean_nat_add(v_i_409_, v___x_418_);
lean_dec(v_i_409_);
v_i_409_ = v___x_419_;
v_source_410_ = v_source_416_;
v_target_411_ = v_target_417_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(lean_object* v_data_421_){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v_nbuckets_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_422_ = lean_array_get_size(v_data_421_);
v___x_423_ = lean_unsigned_to_nat(2u);
v_nbuckets_424_ = lean_nat_mul(v___x_422_, v___x_423_);
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = lean_box(0);
v___x_427_ = lean_mk_array(v_nbuckets_424_, v___x_426_);
v___x_428_ = lean_array_propagate_mark(v_data_421_, v___x_427_);
v___x_429_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(v___x_425_, v_data_421_, v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object* v_a_430_, lean_object* v_x_431_){
_start:
{
if (lean_obj_tag(v_x_431_) == 0)
{
uint8_t v___x_432_; 
v___x_432_ = 0;
return v___x_432_;
}
else
{
lean_object* v_key_433_; lean_object* v_tail_434_; uint8_t v___x_435_; 
v_key_433_ = lean_ctor_get(v_x_431_, 0);
v_tail_434_ = lean_ctor_get(v_x_431_, 2);
v___x_435_ = lean_expr_eqv(v_key_433_, v_a_430_);
if (v___x_435_ == 0)
{
v_x_431_ = v_tail_434_;
goto _start;
}
else
{
return v___x_435_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object* v_a_437_, lean_object* v_x_438_){
_start:
{
uint8_t v_res_439_; lean_object* v_r_440_; 
v_res_439_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_437_, v_x_438_);
lean_dec(v_x_438_);
lean_dec_ref(v_a_437_);
v_r_440_ = lean_box(v_res_439_);
return v_r_440_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(lean_object* v_a_441_, lean_object* v_b_442_, lean_object* v_x_443_){
_start:
{
if (lean_obj_tag(v_x_443_) == 0)
{
lean_dec(v_b_442_);
lean_dec_ref(v_a_441_);
return v_x_443_;
}
else
{
lean_object* v_key_444_; lean_object* v_value_445_; lean_object* v_tail_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_458_; 
v_key_444_ = lean_ctor_get(v_x_443_, 0);
v_value_445_ = lean_ctor_get(v_x_443_, 1);
v_tail_446_ = lean_ctor_get(v_x_443_, 2);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_443_);
if (v_isSharedCheck_458_ == 0)
{
v___x_448_ = v_x_443_;
v_isShared_449_ = v_isSharedCheck_458_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_tail_446_);
lean_inc(v_value_445_);
lean_inc(v_key_444_);
lean_dec(v_x_443_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_458_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
uint8_t v___x_450_; 
v___x_450_ = lean_expr_eqv(v_key_444_, v_a_441_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_451_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_441_, v_b_442_, v_tail_446_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 2, v___x_451_);
v___x_453_ = v___x_448_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_key_444_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_value_445_);
lean_ctor_set(v_reuseFailAlloc_454_, 2, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
else
{
lean_object* v___x_456_; 
lean_dec(v_value_445_);
lean_dec(v_key_444_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v_b_442_);
lean_ctor_set(v___x_448_, 0, v_a_441_);
v___x_456_ = v___x_448_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_441_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_b_442_);
lean_ctor_set(v_reuseFailAlloc_457_, 2, v_tail_446_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(lean_object* v_m_459_, lean_object* v_a_460_, lean_object* v_b_461_){
_start:
{
lean_object* v_size_462_; lean_object* v_buckets_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_506_; 
v_size_462_ = lean_ctor_get(v_m_459_, 0);
v_buckets_463_ = lean_ctor_get(v_m_459_, 1);
v_isSharedCheck_506_ = !lean_is_exclusive(v_m_459_);
if (v_isSharedCheck_506_ == 0)
{
v___x_465_ = v_m_459_;
v_isShared_466_ = v_isSharedCheck_506_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_buckets_463_);
lean_inc(v_size_462_);
lean_dec(v_m_459_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_506_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; uint64_t v___x_468_; uint64_t v___x_469_; uint64_t v___x_470_; uint64_t v_fold_471_; uint64_t v___x_472_; uint64_t v___x_473_; uint64_t v___x_474_; size_t v___x_475_; size_t v___x_476_; size_t v___x_477_; size_t v___x_478_; size_t v___x_479_; lean_object* v_bkt_480_; uint8_t v___x_481_; 
v___x_467_ = lean_array_get_size(v_buckets_463_);
v___x_468_ = l_Lean_Expr_hash(v_a_460_);
v___x_469_ = 32ULL;
v___x_470_ = lean_uint64_shift_right(v___x_468_, v___x_469_);
v_fold_471_ = lean_uint64_xor(v___x_468_, v___x_470_);
v___x_472_ = 16ULL;
v___x_473_ = lean_uint64_shift_right(v_fold_471_, v___x_472_);
v___x_474_ = lean_uint64_xor(v_fold_471_, v___x_473_);
v___x_475_ = lean_uint64_to_usize(v___x_474_);
v___x_476_ = lean_usize_of_nat(v___x_467_);
v___x_477_ = ((size_t)1ULL);
v___x_478_ = lean_usize_sub(v___x_476_, v___x_477_);
v___x_479_ = lean_usize_land(v___x_475_, v___x_478_);
v_bkt_480_ = lean_array_uget_borrowed(v_buckets_463_, v___x_479_);
v___x_481_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_460_, v_bkt_480_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; lean_object* v_size_x27_483_; lean_object* v___x_484_; lean_object* v_buckets_x27_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_482_ = lean_unsigned_to_nat(1u);
v_size_x27_483_ = lean_nat_add(v_size_462_, v___x_482_);
lean_dec(v_size_462_);
lean_inc(v_bkt_480_);
v___x_484_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_484_, 0, v_a_460_);
lean_ctor_set(v___x_484_, 1, v_b_461_);
lean_ctor_set(v___x_484_, 2, v_bkt_480_);
v_buckets_x27_485_ = lean_array_uset(v_buckets_463_, v___x_479_, v___x_484_);
v___x_486_ = lean_unsigned_to_nat(4u);
v___x_487_ = lean_nat_mul(v_size_x27_483_, v___x_486_);
v___x_488_ = lean_unsigned_to_nat(3u);
v___x_489_ = lean_nat_div(v___x_487_, v___x_488_);
lean_dec(v___x_487_);
v___x_490_ = lean_array_get_size(v_buckets_x27_485_);
v___x_491_ = lean_nat_dec_le(v___x_489_, v___x_490_);
lean_dec(v___x_489_);
if (v___x_491_ == 0)
{
lean_object* v_val_492_; lean_object* v___x_494_; 
v_val_492_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(v_buckets_x27_485_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v_val_492_);
lean_ctor_set(v___x_465_, 0, v_size_x27_483_);
v___x_494_ = v___x_465_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_size_x27_483_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_val_492_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
else
{
lean_object* v___x_497_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v_buckets_x27_485_);
lean_ctor_set(v___x_465_, 0, v_size_x27_483_);
v___x_497_ = v___x_465_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_size_x27_483_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_buckets_x27_485_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
else
{
lean_object* v___x_499_; lean_object* v_buckets_x27_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_504_; 
lean_inc(v_bkt_480_);
v___x_499_ = lean_box(0);
v_buckets_x27_500_ = lean_array_uset(v_buckets_463_, v___x_479_, v___x_499_);
v___x_501_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_460_, v_b_461_, v_bkt_480_);
v___x_502_ = lean_array_uset(v_buckets_x27_500_, v___x_479_, v___x_501_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v___x_502_);
v___x_504_ = v___x_465_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_size_462_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(lean_object* v_msg_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v_ref_513_; lean_object* v___x_514_; lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
v_ref_513_ = lean_ctor_get(v___y_510_, 2);
v___x_514_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
v_a_515_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v___x_514_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_514_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
lean_inc(v_ref_513_);
v___x_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_519_, 0, v_ref_513_);
lean_ctor_set(v___x_519_, 1, v_a_515_);
if (v_isShared_518_ == 0)
{
lean_ctor_set_tag(v___x_517_, 1);
lean_ctor_set(v___x_517_, 0, v___x_519_);
v___x_521_ = v___x_517_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg___boxed(lean_object* v_msg_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
return v_res_530_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0));
v___x_533_ = l_Lean_stringToMessageData(v___x_532_);
return v___x_533_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2));
v___x_536_ = l_Lean_stringToMessageData(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4));
v___x_539_ = l_Lean_stringToMessageData(v___x_538_);
return v___x_539_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6));
v___x_542_ = l_Lean_stringToMessageData(v___x_541_);
return v___x_542_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8));
v___x_545_ = l_Lean_stringToMessageData(v___x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object* v_e_546_, lean_object* v_a_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___x_631_; 
lean_inc_ref(v_a_547_);
v___x_631_ = l_Lean_Meta_isTypeCorrect(v_a_547_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; uint8_t v___x_633_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___x_631_, 1);
v___x_633_ = lean_unbox(v_a_632_);
lean_dec(v_a_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_634_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9);
lean_inc_ref(v_e_546_);
v___x_635_ = l_Lean_indentExpr(v_e_546_);
v___x_636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_634_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v___x_637_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
v___x_638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
lean_inc_ref(v_a_547_);
v___x_639_ = l_Lean_indentExpr(v_a_547_);
v___x_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_640_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_dec_ref_known(v___x_641_, 1);
goto v___jp_557_;
}
else
{
lean_dec_ref(v_a_547_);
lean_dec_ref(v_e_546_);
return v___x_641_;
}
}
else
{
goto v___jp_557_;
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec_ref(v_a_547_);
lean_dec_ref(v_e_546_);
v_a_642_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_631_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_631_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
v___jp_557_:
{
lean_object* v___x_558_; 
lean_inc(v___y_555_);
lean_inc_ref(v___y_554_);
lean_inc(v___y_553_);
lean_inc_ref(v___y_552_);
lean_inc_ref(v_e_546_);
v___x_558_ = lean_infer_type(v_e_546_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_560_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_a_559_);
lean_dec_ref_known(v___x_558_, 1);
lean_inc(v___y_555_);
lean_inc_ref(v___y_554_);
lean_inc(v___y_553_);
lean_inc_ref(v___y_552_);
lean_inc_ref(v_a_547_);
v___x_560_ = lean_infer_type(v_a_547_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc_n(v_a_561_, 2);
lean_dec_ref_known(v___x_560_, 1);
lean_inc(v_a_559_);
v___x_562_ = l_Lean_Meta_isExprDefEq(v_a_559_, v_a_561_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_606_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_606_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_606_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_606_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
uint8_t v___x_567_; 
v___x_567_ = lean_unbox(v_a_563_);
lean_dec(v_a_563_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; 
lean_del_object(v___x_565_);
v___x_568_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_a_559_, v_a_561_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v_fst_570_; lean_object* v_snd_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_593_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_568_, 1);
v_fst_570_ = lean_ctor_get(v_a_569_, 0);
v_snd_571_ = lean_ctor_get(v_a_569_, 1);
v_isSharedCheck_593_ = !lean_is_exclusive(v_a_569_);
if (v_isSharedCheck_593_ == 0)
{
v___x_573_ = v_a_569_;
v_isShared_574_ = v_isSharedCheck_593_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_snd_571_);
lean_inc(v_fst_570_);
lean_dec(v_a_569_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_593_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
v___x_575_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1);
v___x_576_ = l_Lean_indentExpr(v_e_546_);
if (v_isShared_574_ == 0)
{
lean_ctor_set_tag(v___x_573_, 7);
lean_ctor_set(v___x_573_, 1, v___x_576_);
lean_ctor_set(v___x_573_, 0, v___x_575_);
v___x_578_ = v___x_573_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_575_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v___x_576_);
v___x_578_ = v_reuseFailAlloc_592_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_579_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
v___x_580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_578_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = l_Lean_indentExpr(v_a_547_);
v___x_582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_580_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
v___x_583_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5);
v___x_584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_582_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = l_Lean_indentExpr(v_fst_570_);
v___x_586_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7);
v___x_588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = l_Lean_indentExpr(v_snd_571_);
v___x_590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_588_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_590_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
return v___x_591_;
}
}
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec_ref(v_a_547_);
lean_dec_ref(v_e_546_);
v_a_594_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_568_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_568_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
else
{
lean_object* v___x_602_; lean_object* v___x_604_; 
lean_dec(v_a_561_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_547_);
lean_dec_ref(v_e_546_);
v___x_602_ = lean_box(0);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___x_602_);
v___x_604_ = v___x_565_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_dec(v_a_561_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_547_);
lean_dec_ref(v_e_546_);
v_a_607_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_562_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_562_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec(v_a_559_);
lean_dec_ref(v_a_547_);
lean_dec_ref(v_e_546_);
v_a_615_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_560_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_560_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
lean_dec_ref(v_a_547_);
lean_dec_ref(v_e_546_);
v_a_623_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_558_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_558_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object* v_e_650_, lean_object* v_a_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(v_e_650_, v_a_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
return v_res_661_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0(void){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_662_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1(void){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_663_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0);
v___x_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
return v___x_664_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1);
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
lean_ctor_set(v___x_667_, 2, v___x_666_);
lean_ctor_set(v___x_667_, 3, v___x_666_);
lean_ctor_set(v___x_667_, 4, v___x_665_);
lean_ctor_set(v___x_667_, 5, v___x_665_);
lean_ctor_set(v___x_667_, 6, v___x_665_);
lean_ctor_set(v___x_667_, 7, v___x_665_);
lean_ctor_set(v___x_667_, 8, v___x_665_);
lean_ctor_set(v___x_667_, 9, v___x_665_);
lean_ctor_set(v___x_667_, 10, v___x_665_);
return v___x_667_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_668_ = lean_unsigned_to_nat(32u);
v___x_669_ = lean_mk_empty_array_with_capacity(v___x_668_);
v___x_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
return v___x_670_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4(void){
_start:
{
size_t v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_671_ = ((size_t)5ULL);
v___x_672_ = lean_unsigned_to_nat(0u);
v___x_673_ = lean_unsigned_to_nat(32u);
v___x_674_ = lean_mk_empty_array_with_capacity(v___x_673_);
v___x_675_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3);
v___x_676_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_676_, 0, v___x_675_);
lean_ctor_set(v___x_676_, 1, v___x_674_);
lean_ctor_set(v___x_676_, 2, v___x_672_);
lean_ctor_set(v___x_676_, 3, v___x_672_);
lean_ctor_set_usize(v___x_676_, 4, v___x_671_);
return v___x_676_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_677_ = lean_box(1);
v___x_678_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4);
v___x_679_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1);
v___x_680_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
lean_ctor_set(v___x_680_, 1, v___x_678_);
lean_ctor_set(v___x_680_, 2, v___x_677_);
return v___x_680_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6));
v___x_683_ = l_Lean_stringToMessageData(v___x_682_);
return v___x_683_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8));
v___x_686_ = l_Lean_stringToMessageData(v___x_685_);
return v___x_686_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10));
v___x_689_ = l_Lean_stringToMessageData(v___x_688_);
return v___x_689_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12));
v___x_692_ = l_Lean_stringToMessageData(v___x_691_);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14));
v___x_695_ = l_Lean_stringToMessageData(v___x_694_);
return v___x_695_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16));
v___x_698_ = l_Lean_stringToMessageData(v___x_697_);
return v___x_698_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19(void){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18));
v___x_701_ = l_Lean_stringToMessageData(v___x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(lean_object* v_msg_702_, lean_object* v_declHint_703_, lean_object* v___y_704_){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v_env_708_; uint8_t v___x_709_; 
v___x_706_ = l_Lean_instInhabitedName;
v___x_707_ = lean_st_ref_get(v___y_704_);
v_env_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc_ref(v_env_708_);
lean_dec(v___x_707_);
v___x_709_ = l_Lean_Name_isAnonymous(v_declHint_703_);
if (v___x_709_ == 0)
{
uint8_t v_isExporting_710_; 
v_isExporting_710_ = lean_ctor_get_uint8(v_env_708_, sizeof(void*)*8);
if (v_isExporting_710_ == 0)
{
lean_object* v___x_711_; 
lean_dec_ref(v_env_708_);
lean_dec(v_declHint_703_);
v___x_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_711_, 0, v_msg_702_);
return v___x_711_;
}
else
{
lean_object* v___x_712_; uint8_t v___x_713_; 
lean_inc_ref(v_env_708_);
v___x_712_ = l_Lean_Environment_setExporting(v_env_708_, v___x_709_);
lean_inc(v_declHint_703_);
lean_inc_ref(v___x_712_);
v___x_713_ = l_Lean_Environment_contains(v___x_712_, v_declHint_703_, v_isExporting_710_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; 
lean_dec_ref(v___x_712_);
lean_dec_ref(v_env_708_);
lean_dec(v_declHint_703_);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v_msg_702_);
return v___x_714_;
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v_c_720_; lean_object* v___x_721_; 
v___x_715_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2);
v___x_716_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5);
v___x_717_ = l_Lean_Options_empty;
v___x_718_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_718_, 0, v___x_712_);
lean_ctor_set(v___x_718_, 1, v___x_715_);
lean_ctor_set(v___x_718_, 2, v___x_716_);
lean_ctor_set(v___x_718_, 3, v___x_717_);
lean_inc(v_declHint_703_);
v___x_719_ = l_Lean_MessageData_ofConstName(v_declHint_703_, v___x_709_);
v_c_720_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_720_, 0, v___x_718_);
lean_ctor_set(v_c_720_, 1, v___x_719_);
v___x_721_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_708_, v_declHint_703_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
lean_dec_ref(v_env_708_);
lean_dec(v_declHint_703_);
v___x_722_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7);
v___x_723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v_c_720_);
v___x_724_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9);
v___x_725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = l_Lean_MessageData_note(v___x_725_);
v___x_727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_727_, 0, v_msg_702_);
lean_ctor_set(v___x_727_, 1, v___x_726_);
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
return v___x_728_;
}
else
{
lean_object* v_val_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_763_; 
v_val_729_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_763_ == 0)
{
v___x_731_ = v___x_721_;
v_isShared_732_ = v_isSharedCheck_763_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_val_729_);
lean_dec(v___x_721_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_763_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v_mod_735_; uint8_t v___x_736_; 
v___x_733_ = l_Lean_Environment_header(v_env_708_);
lean_dec_ref(v_env_708_);
v___x_734_ = l_Lean_EnvironmentHeader_moduleNames(v___x_733_);
lean_dec_ref(v___x_733_);
v_mod_735_ = lean_array_get(v___x_706_, v___x_734_, v_val_729_);
lean_dec(v_val_729_);
lean_dec_ref(v___x_734_);
v___x_736_ = l_Lean_isPrivateName(v_declHint_703_);
lean_dec(v_declHint_703_);
if (v___x_736_ == 0)
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_737_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11);
v___x_738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
lean_ctor_set(v___x_738_, 1, v_c_720_);
v___x_739_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13);
v___x_740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
v___x_741_ = l_Lean_MessageData_ofName(v_mod_735_);
v___x_742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_740_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15);
v___x_744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = l_Lean_MessageData_note(v___x_744_);
v___x_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_746_, 0, v_msg_702_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
if (v_isShared_732_ == 0)
{
lean_ctor_set_tag(v___x_731_, 0);
lean_ctor_set(v___x_731_, 0, v___x_746_);
v___x_748_ = v___x_731_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_746_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
else
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_750_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7);
v___x_751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
lean_ctor_set(v___x_751_, 1, v_c_720_);
v___x_752_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17);
v___x_753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = l_Lean_MessageData_ofName(v_mod_735_);
v___x_755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_755_, 0, v___x_753_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19);
v___x_757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_757_, 0, v___x_755_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
v___x_758_ = l_Lean_MessageData_note(v___x_757_);
v___x_759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_759_, 0, v_msg_702_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
if (v_isShared_732_ == 0)
{
lean_ctor_set_tag(v___x_731_, 0);
lean_ctor_set(v___x_731_, 0, v___x_759_);
v___x_761_ = v___x_731_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_764_; 
lean_dec_ref(v_env_708_);
lean_dec(v_declHint_703_);
v___x_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_764_, 0, v_msg_702_);
return v___x_764_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___boxed(lean_object* v_msg_765_, lean_object* v_declHint_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_765_, v_declHint_766_, v___y_767_);
lean_dec(v___y_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(lean_object* v_msg_770_, lean_object* v_declHint_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v___x_781_; lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_791_; 
v___x_781_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_770_, v_declHint_771_, v___y_779_);
v_a_782_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_791_ == 0)
{
v___x_784_ = v___x_781_;
v_isShared_785_ = v_isSharedCheck_791_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_791_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_786_ = l_Lean_unknownIdentifierMessageTag;
v___x_787_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
lean_ctor_set(v___x_787_, 1, v_a_782_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 0, v___x_787_);
v___x_789_ = v___x_784_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30___boxed(lean_object* v_msg_792_, lean_object* v_declHint_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(v_msg_792_, v_declHint_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec(v___y_794_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(lean_object* v_ref_804_, lean_object* v_msg_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_toCold_815_; lean_object* v_currRecDepth_816_; lean_object* v_ref_817_; uint8_t v_diag_818_; uint8_t v_suppressElabErrors_819_; lean_object* v_ref_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_toCold_815_ = lean_ctor_get(v___y_812_, 0);
v_currRecDepth_816_ = lean_ctor_get(v___y_812_, 1);
v_ref_817_ = lean_ctor_get(v___y_812_, 2);
v_diag_818_ = lean_ctor_get_uint8(v___y_812_, sizeof(void*)*3);
v_suppressElabErrors_819_ = lean_ctor_get_uint8(v___y_812_, sizeof(void*)*3 + 1);
v_ref_820_ = l_Lean_replaceRef(v_ref_804_, v_ref_817_);
lean_inc(v_currRecDepth_816_);
lean_inc_ref(v_toCold_815_);
v___x_821_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_821_, 0, v_toCold_815_);
lean_ctor_set(v___x_821_, 1, v_currRecDepth_816_);
lean_ctor_set(v___x_821_, 2, v_ref_820_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*3, v_diag_818_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*3 + 1, v_suppressElabErrors_819_);
v___x_822_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_805_, v___y_810_, v___y_811_, v___x_821_, v___y_813_);
lean_dec_ref_known(v___x_821_, 3);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg___boxed(lean_object* v_ref_823_, lean_object* v_msg_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_823_, v_msg_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
lean_dec(v_ref_823_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(lean_object* v_ref_835_, lean_object* v_msg_836_, lean_object* v_declHint_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v___x_847_; lean_object* v_a_848_; lean_object* v___x_849_; 
v___x_847_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(v_msg_836_, v_declHint_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_);
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
lean_dec_ref(v___x_847_);
v___x_849_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_835_, v_a_848_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg___boxed(lean_object* v_ref_850_, lean_object* v_msg_851_, lean_object* v_declHint_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_850_, v_msg_851_, v_declHint_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec(v___y_853_);
lean_dec(v_ref_850_);
return v_res_862_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0));
v___x_865_ = l_Lean_stringToMessageData(v___x_864_);
return v___x_865_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2));
v___x_868_ = l_Lean_stringToMessageData(v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(lean_object* v_ref_869_, lean_object* v_constName_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v___x_880_; uint8_t v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_880_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1);
v___x_881_ = 0;
lean_inc(v_constName_870_);
v___x_882_ = l_Lean_MessageData_ofConstName(v_constName_870_, v___x_881_);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_880_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3);
v___x_885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_869_, v___x_885_, v_constName_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___boxed(lean_object* v_ref_887_, lean_object* v_constName_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_887_, v_constName_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec(v___y_890_);
lean_dec(v___y_889_);
lean_dec(v_ref_887_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(lean_object* v_constName_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_ref_909_; lean_object* v___x_910_; 
v_ref_909_ = lean_ctor_get(v___y_906_, 2);
v___x_910_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_909_, v_constName_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg___boxed(lean_object* v_constName_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec(v___y_912_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(lean_object* v_constName_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v___x_932_; lean_object* v_env_933_; uint8_t v___x_934_; lean_object* v___x_935_; 
v___x_932_ = lean_st_ref_get(v___y_930_);
v_env_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc_ref(v_env_933_);
lean_dec(v___x_932_);
v___x_934_ = 0;
lean_inc(v_constName_922_);
v___x_935_ = l_Lean_Environment_find_x3f(v_env_933_, v_constName_922_, v___x_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v___x_936_; 
v___x_936_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_);
return v___x_936_;
}
else
{
lean_object* v_val_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec(v_constName_922_);
v_val_937_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_935_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_val_937_);
lean_dec(v___x_935_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set_tag(v___x_939_, 0);
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_val_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18___boxed(lean_object* v_constName_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_constName_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
lean_dec(v___y_947_);
lean_dec(v___y_946_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(lean_object* v_declName_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; lean_object* v_env_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_959_ = lean_st_ref_get(v___y_957_);
v_env_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc_ref(v_env_960_);
lean_dec(v___x_959_);
v___x_961_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_960_, v_declName_956_);
v___x_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg___boxed(lean_object* v_declName_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_963_, v___y_964_);
lean_dec(v___y_964_);
return v_res_966_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0(void){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = l_instMonadEIO___redArg();
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(lean_object* v_msg_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v_toApplicative_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1079_; 
v___x_984_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0);
v___x_985_ = l_StateRefT_x27_instMonad___redArg(v___x_984_);
v_toApplicative_986_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1079_ == 0)
{
lean_object* v_unused_1080_; 
v_unused_1080_ = lean_ctor_get(v___x_985_, 1);
lean_dec(v_unused_1080_);
v___x_988_ = v___x_985_;
v_isShared_989_ = v_isSharedCheck_1079_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_toApplicative_986_);
lean_dec(v___x_985_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1079_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v_toFunctor_990_; lean_object* v_toSeq_991_; lean_object* v_toSeqLeft_992_; lean_object* v_toSeqRight_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1077_; 
v_toFunctor_990_ = lean_ctor_get(v_toApplicative_986_, 0);
v_toSeq_991_ = lean_ctor_get(v_toApplicative_986_, 2);
v_toSeqLeft_992_ = lean_ctor_get(v_toApplicative_986_, 3);
v_toSeqRight_993_ = lean_ctor_get(v_toApplicative_986_, 4);
v_isSharedCheck_1077_ = !lean_is_exclusive(v_toApplicative_986_);
if (v_isSharedCheck_1077_ == 0)
{
lean_object* v_unused_1078_; 
v_unused_1078_ = lean_ctor_get(v_toApplicative_986_, 1);
lean_dec(v_unused_1078_);
v___x_995_ = v_toApplicative_986_;
v_isShared_996_ = v_isSharedCheck_1077_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_toSeqRight_993_);
lean_inc(v_toSeqLeft_992_);
lean_inc(v_toSeq_991_);
lean_inc(v_toFunctor_990_);
lean_dec(v_toApplicative_986_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1077_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___f_997_; lean_object* v___f_998_; lean_object* v___f_999_; lean_object* v___f_1000_; lean_object* v___x_1001_; lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___f_1004_; lean_object* v___x_1006_; 
v___f_997_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1));
v___f_998_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2));
lean_inc_ref(v_toFunctor_990_);
v___f_999_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_999_, 0, v_toFunctor_990_);
v___f_1000_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1000_, 0, v_toFunctor_990_);
v___x_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___f_999_);
lean_ctor_set(v___x_1001_, 1, v___f_1000_);
v___f_1002_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1002_, 0, v_toSeqRight_993_);
v___f_1003_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1003_, 0, v_toSeqLeft_992_);
v___f_1004_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1004_, 0, v_toSeq_991_);
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 4, v___f_1002_);
lean_ctor_set(v___x_995_, 3, v___f_1003_);
lean_ctor_set(v___x_995_, 2, v___f_1004_);
lean_ctor_set(v___x_995_, 1, v___f_997_);
lean_ctor_set(v___x_995_, 0, v___x_1001_);
v___x_1006_ = v___x_995_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1001_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___f_997_);
lean_ctor_set(v_reuseFailAlloc_1076_, 2, v___f_1004_);
lean_ctor_set(v_reuseFailAlloc_1076_, 3, v___f_1003_);
lean_ctor_set(v_reuseFailAlloc_1076_, 4, v___f_1002_);
v___x_1006_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
lean_object* v___x_1008_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v___f_998_);
lean_ctor_set(v___x_988_, 0, v___x_1006_);
v___x_1008_ = v___x_988_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1006_);
lean_ctor_set(v_reuseFailAlloc_1075_, 1, v___f_998_);
v___x_1008_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v___x_1009_; lean_object* v_toApplicative_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1073_; 
v___x_1009_ = l_StateRefT_x27_instMonad___redArg(v___x_1008_);
v_toApplicative_1010_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1073_ == 0)
{
lean_object* v_unused_1074_; 
v_unused_1074_ = lean_ctor_get(v___x_1009_, 1);
lean_dec(v_unused_1074_);
v___x_1012_ = v___x_1009_;
v_isShared_1013_ = v_isSharedCheck_1073_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_toApplicative_1010_);
lean_dec(v___x_1009_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1073_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v_toFunctor_1014_; lean_object* v_toSeq_1015_; lean_object* v_toSeqLeft_1016_; lean_object* v_toSeqRight_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1071_; 
v_toFunctor_1014_ = lean_ctor_get(v_toApplicative_1010_, 0);
v_toSeq_1015_ = lean_ctor_get(v_toApplicative_1010_, 2);
v_toSeqLeft_1016_ = lean_ctor_get(v_toApplicative_1010_, 3);
v_toSeqRight_1017_ = lean_ctor_get(v_toApplicative_1010_, 4);
v_isSharedCheck_1071_ = !lean_is_exclusive(v_toApplicative_1010_);
if (v_isSharedCheck_1071_ == 0)
{
lean_object* v_unused_1072_; 
v_unused_1072_ = lean_ctor_get(v_toApplicative_1010_, 1);
lean_dec(v_unused_1072_);
v___x_1019_ = v_toApplicative_1010_;
v_isShared_1020_ = v_isSharedCheck_1071_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_toSeqRight_1017_);
lean_inc(v_toSeqLeft_1016_);
lean_inc(v_toSeq_1015_);
lean_inc(v_toFunctor_1014_);
lean_dec(v_toApplicative_1010_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1071_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___f_1021_; lean_object* v___f_1022_; lean_object* v___f_1023_; lean_object* v___f_1024_; lean_object* v___x_1025_; lean_object* v___f_1026_; lean_object* v___f_1027_; lean_object* v___f_1028_; lean_object* v___x_1030_; 
v___f_1021_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3));
v___f_1022_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4));
lean_inc_ref(v_toFunctor_1014_);
v___f_1023_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1023_, 0, v_toFunctor_1014_);
v___f_1024_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1024_, 0, v_toFunctor_1014_);
v___x_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___f_1023_);
lean_ctor_set(v___x_1025_, 1, v___f_1024_);
v___f_1026_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1026_, 0, v_toSeqRight_1017_);
v___f_1027_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1027_, 0, v_toSeqLeft_1016_);
v___f_1028_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1028_, 0, v_toSeq_1015_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 4, v___f_1026_);
lean_ctor_set(v___x_1019_, 3, v___f_1027_);
lean_ctor_set(v___x_1019_, 2, v___f_1028_);
lean_ctor_set(v___x_1019_, 1, v___f_1021_);
lean_ctor_set(v___x_1019_, 0, v___x_1025_);
v___x_1030_ = v___x_1019_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1025_);
lean_ctor_set(v_reuseFailAlloc_1070_, 1, v___f_1021_);
lean_ctor_set(v_reuseFailAlloc_1070_, 2, v___f_1028_);
lean_ctor_set(v_reuseFailAlloc_1070_, 3, v___f_1027_);
lean_ctor_set(v_reuseFailAlloc_1070_, 4, v___f_1026_);
v___x_1030_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1032_; 
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v___f_1022_);
lean_ctor_set(v___x_1012_, 0, v___x_1030_);
v___x_1032_ = v___x_1012_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1030_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v___f_1022_);
v___x_1032_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1033_; lean_object* v_toApplicative_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1067_; 
v___x_1033_ = l_StateRefT_x27_instMonad___redArg(v___x_1032_);
v_toApplicative_1034_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; 
v_unused_1068_ = lean_ctor_get(v___x_1033_, 1);
lean_dec(v_unused_1068_);
v___x_1036_ = v___x_1033_;
v_isShared_1037_ = v_isSharedCheck_1067_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_toApplicative_1034_);
lean_dec(v___x_1033_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1067_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v_toFunctor_1038_; lean_object* v_toSeq_1039_; lean_object* v_toSeqLeft_1040_; lean_object* v_toSeqRight_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1065_; 
v_toFunctor_1038_ = lean_ctor_get(v_toApplicative_1034_, 0);
v_toSeq_1039_ = lean_ctor_get(v_toApplicative_1034_, 2);
v_toSeqLeft_1040_ = lean_ctor_get(v_toApplicative_1034_, 3);
v_toSeqRight_1041_ = lean_ctor_get(v_toApplicative_1034_, 4);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_toApplicative_1034_);
if (v_isSharedCheck_1065_ == 0)
{
lean_object* v_unused_1066_; 
v_unused_1066_ = lean_ctor_get(v_toApplicative_1034_, 1);
lean_dec(v_unused_1066_);
v___x_1043_ = v_toApplicative_1034_;
v_isShared_1044_ = v_isSharedCheck_1065_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_toSeqRight_1041_);
lean_inc(v_toSeqLeft_1040_);
lean_inc(v_toSeq_1039_);
lean_inc(v_toFunctor_1038_);
lean_dec(v_toApplicative_1034_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1065_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___f_1045_; lean_object* v___f_1046_; lean_object* v___f_1047_; lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___f_1050_; lean_object* v___f_1051_; lean_object* v___f_1052_; lean_object* v___x_1054_; 
v___f_1045_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5));
v___f_1046_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6));
lean_inc_ref(v_toFunctor_1038_);
v___f_1047_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1047_, 0, v_toFunctor_1038_);
v___f_1048_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1048_, 0, v_toFunctor_1038_);
v___x_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___f_1047_);
lean_ctor_set(v___x_1049_, 1, v___f_1048_);
v___f_1050_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1050_, 0, v_toSeqRight_1041_);
v___f_1051_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1051_, 0, v_toSeqLeft_1040_);
v___f_1052_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1052_, 0, v_toSeq_1039_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 4, v___f_1050_);
lean_ctor_set(v___x_1043_, 3, v___f_1051_);
lean_ctor_set(v___x_1043_, 2, v___f_1052_);
lean_ctor_set(v___x_1043_, 1, v___f_1045_);
lean_ctor_set(v___x_1043_, 0, v___x_1049_);
v___x_1054_ = v___x_1043_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1049_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v___f_1045_);
lean_ctor_set(v_reuseFailAlloc_1064_, 2, v___f_1052_);
lean_ctor_set(v_reuseFailAlloc_1064_, 3, v___f_1051_);
lean_ctor_set(v_reuseFailAlloc_1064_, 4, v___f_1050_);
v___x_1054_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1056_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 1, v___f_1046_);
lean_ctor_set(v___x_1036_, 0, v___x_1054_);
v___x_1056_ = v___x_1036_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v___f_1046_);
v___x_1056_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_49723__overap_1061_; lean_object* v___x_1062_; 
v___x_1057_ = l_StateRefT_x27_instMonad___redArg(v___x_1056_);
v___x_1058_ = l_StateRefT_x27_instMonad___redArg(v___x_1057_);
v___x_1059_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_1060_ = l_instInhabitedOfMonad___redArg(v___x_1058_, v___x_1059_);
v___x_49723__overap_1061_ = lean_panic_fn_borrowed(v___x_1060_, v_msg_974_);
lean_dec(v___x_1060_);
lean_inc(v___y_982_);
lean_inc_ref(v___y_981_);
lean_inc(v___y_980_);
lean_inc_ref(v___y_979_);
lean_inc(v___y_978_);
lean_inc_ref(v___y_977_);
lean_inc(v___y_976_);
lean_inc(v___y_975_);
v___x_1062_ = lean_apply_9(v___x_49723__overap_1061_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, lean_box(0));
return v___x_1062_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___boxed(lean_object* v_msg_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(v_msg_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec(v___y_1082_);
return v_res_1091_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1095_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2));
v___x_1096_ = lean_unsigned_to_nat(53u);
v___x_1097_ = lean_unsigned_to_nat(62u);
v___x_1098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1));
v___x_1099_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0));
v___x_1100_ = l_mkPanicMessageWithDecl(v___x_1099_, v___x_1098_, v___x_1097_, v___x_1096_, v___x_1095_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(size_t v_sz_1101_, size_t v_i_1102_, lean_object* v_bs_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
uint8_t v___x_1113_; 
v___x_1113_ = lean_usize_dec_lt(v_i_1102_, v_sz_1101_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = l_unsafeCast___redArg(v_bs_1103_);
lean_dec_ref(v_bs_1103_);
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
return v___x_1115_;
}
else
{
lean_object* v_v_1116_; lean_object* v___x_1117_; lean_object* v_bs_x27_1118_; lean_object* v_a_1120_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v_v_1116_ = lean_array_uget(v_bs_1103_, v_i_1102_);
v___x_1117_ = lean_unsigned_to_nat(0u);
v_bs_x27_1118_ = lean_array_uset(v_bs_1103_, v_i_1102_, v___x_1117_);
v___x_1126_ = l_unsafeCast___redArg(v_v_1116_);
lean_dec(v_v_1116_);
v___x_1127_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v___x_1126_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v_a_1128_; 
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref_known(v___x_1127_, 1);
if (lean_obj_tag(v_a_1128_) == 6)
{
lean_object* v_val_1129_; lean_object* v_numFields_1130_; uint8_t v___x_1131_; lean_object* v___x_1132_; 
v_val_1129_ = lean_ctor_get(v_a_1128_, 0);
lean_inc_ref(v_val_1129_);
lean_dec_ref_known(v_a_1128_, 1);
v_numFields_1130_ = lean_ctor_get(v_val_1129_, 4);
lean_inc(v_numFields_1130_);
lean_dec_ref(v_val_1129_);
v___x_1131_ = 0;
v___x_1132_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1132_, 0, v_numFields_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1117_);
lean_ctor_set_uint8(v___x_1132_, sizeof(void*)*2, v___x_1131_);
v_a_1120_ = v___x_1132_;
goto v___jp_1119_;
}
else
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec(v_a_1128_);
v___x_1133_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3);
v___x_1134_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(v___x_1133_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_a_1135_);
lean_dec_ref_known(v___x_1134_, 1);
v_a_1120_ = v_a_1135_;
goto v___jp_1119_;
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec_ref(v_bs_x27_1118_);
v_a_1136_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1134_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1134_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
lean_dec_ref(v_bs_x27_1118_);
v_a_1144_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v___x_1127_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1127_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1144_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
v___jp_1119_:
{
size_t v___x_1121_; size_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1121_ = ((size_t)1ULL);
v___x_1122_ = lean_usize_add(v_i_1102_, v___x_1121_);
v___x_1123_ = l_unsafeCast___redArg(v_a_1120_);
lean_dec_ref(v_a_1120_);
v___x_1124_ = lean_array_uset(v_bs_x27_1118_, v_i_1102_, v___x_1123_);
v_i_1102_ = v___x_1122_;
v_bs_1103_ = v___x_1124_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed(lean_object* v_sz_1152_, lean_object* v_i_1153_, lean_object* v_bs_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
size_t v_sz_boxed_1164_; size_t v_i_boxed_1165_; lean_object* v_res_1166_; 
v_sz_boxed_1164_ = lean_unbox_usize(v_sz_1152_);
lean_dec(v_sz_1152_);
v_i_boxed_1165_ = lean_unbox_usize(v_i_1153_);
lean_dec(v_i_1153_);
v_res_1166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(v_sz_boxed_1164_, v_i_boxed_1165_, v_bs_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec(v___y_1155_);
return v_res_1166_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = lean_box(0);
v___x_1168_ = l_unsafeCast___redArg(v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1(void){
_start:
{
lean_object* v___x_1169_; lean_object* v_dummy_1170_; 
v___x_1169_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
v_dummy_1170_ = l_Lean_Expr_sort___override(v___x_1169_);
return v_dummy_1170_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = lean_box(0);
v___x_1172_ = lean_unsigned_to_nat(16u);
v___x_1173_ = lean_mk_array(v___x_1172_, v___x_1171_);
return v___x_1173_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2);
v___x_1175_ = lean_unsigned_to_nat(0u);
v___x_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___x_1174_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(lean_object* v_e_1181_, uint8_t v_alsoCasesOn_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
uint8_t v___x_1195_; 
v___x_1195_ = l_Lean_Expr_isApp(v_e_1181_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_dec_ref(v_e_1181_);
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
return v___x_1197_;
}
else
{
lean_object* v___x_1198_; 
v___x_1198_ = l_Lean_Expr_getAppFn(v_e_1181_);
if (lean_obj_tag(v___x_1198_) == 4)
{
lean_object* v_declName_1199_; lean_object* v_us_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1359_; 
v_declName_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc_n(v_declName_1199_, 2);
v_us_1200_ = lean_ctor_get(v___x_1198_, 1);
lean_inc(v_us_1200_);
lean_dec_ref_known(v___x_1198_, 2);
v___x_1201_ = l_Lean_instInhabitedExpr;
v___x_1202_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_1199_, v___y_1190_);
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1359_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1359_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
if (lean_obj_tag(v_a_1203_) == 1)
{
lean_object* v_val_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1248_; 
v_val_1207_ = lean_ctor_get(v_a_1203_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_a_1203_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1209_ = v_a_1203_;
v_isShared_1210_ = v_isSharedCheck_1248_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_val_1207_);
lean_dec(v_a_1203_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1248_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v_dummy_1211_; lean_object* v_nargs_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v_args_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; 
v_dummy_1211_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
v_nargs_1212_ = l_Lean_Expr_getAppNumArgs(v_e_1181_);
lean_inc(v_nargs_1212_);
v___x_1213_ = lean_mk_array(v_nargs_1212_, v_dummy_1211_);
v___x_1214_ = lean_unsigned_to_nat(1u);
v___x_1215_ = lean_nat_sub(v_nargs_1212_, v___x_1214_);
lean_dec(v_nargs_1212_);
v_args_1216_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1181_, v___x_1213_, v___x_1215_);
v___x_1217_ = lean_array_get_size(v_args_1216_);
v___x_1218_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_1207_);
v___x_1219_ = lean_nat_dec_lt(v___x_1217_, v___x_1218_);
lean_dec(v___x_1218_);
if (v___x_1219_ == 0)
{
lean_object* v_numParams_1220_; lean_object* v_numDiscrs_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1239_; 
v_numParams_1220_ = lean_ctor_get(v_val_1207_, 0);
v_numDiscrs_1221_ = lean_ctor_get(v_val_1207_, 1);
v___x_1222_ = lean_array_mk(v_us_1200_);
v___x_1223_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1220_);
v___x_1224_ = l_Array_extract___redArg(v_args_1216_, v___x_1223_, v_numParams_1220_);
v___x_1225_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_1207_);
v___x_1226_ = lean_array_get(v___x_1201_, v_args_1216_, v___x_1225_);
lean_dec(v___x_1225_);
v___x_1227_ = lean_nat_add(v_numParams_1220_, v___x_1214_);
v___x_1228_ = lean_nat_add(v___x_1227_, v_numDiscrs_1221_);
lean_inc(v___x_1228_);
lean_inc_ref_n(v_args_1216_, 2);
v___x_1229_ = l_Array_toSubarray___redArg(v_args_1216_, v___x_1227_, v___x_1228_);
v___x_1230_ = l_Subarray_copy___redArg(v___x_1229_);
v___x_1231_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_1207_);
v___x_1232_ = lean_nat_add(v___x_1228_, v___x_1231_);
lean_dec(v___x_1231_);
lean_inc(v___x_1232_);
v___x_1233_ = l_Array_toSubarray___redArg(v_args_1216_, v___x_1228_, v___x_1232_);
v___x_1234_ = l_Subarray_copy___redArg(v___x_1233_);
v___x_1235_ = l_Array_toSubarray___redArg(v_args_1216_, v___x_1232_, v___x_1217_);
v___x_1236_ = l_Subarray_copy___redArg(v___x_1235_);
v___x_1237_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1237_, 0, v_val_1207_);
lean_ctor_set(v___x_1237_, 1, v_declName_1199_);
lean_ctor_set(v___x_1237_, 2, v___x_1222_);
lean_ctor_set(v___x_1237_, 3, v___x_1224_);
lean_ctor_set(v___x_1237_, 4, v___x_1226_);
lean_ctor_set(v___x_1237_, 5, v___x_1230_);
lean_ctor_set(v___x_1237_, 6, v___x_1234_);
lean_ctor_set(v___x_1237_, 7, v___x_1236_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 0, v___x_1237_);
v___x_1239_ = v___x_1209_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1237_);
v___x_1239_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
lean_object* v___x_1241_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1239_);
v___x_1241_ = v___x_1205_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v___x_1239_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
else
{
lean_object* v___x_1244_; lean_object* v___x_1246_; 
lean_dec_ref(v_args_1216_);
lean_del_object(v___x_1209_);
lean_dec(v_val_1207_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
v___x_1244_ = lean_box(0);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1244_);
v___x_1246_ = v___x_1205_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___x_1244_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
else
{
lean_object* v___x_1249_; 
lean_del_object(v___x_1205_);
lean_dec(v_a_1203_);
v___x_1249_ = lean_st_ref_get(v___y_1190_);
if (v_alsoCasesOn_1182_ == 0)
{
lean_dec(v___x_1249_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
lean_dec_ref(v_e_1181_);
goto v___jp_1192_;
}
else
{
lean_object* v_env_1250_; uint8_t v___x_1251_; 
v_env_1250_ = lean_ctor_get(v___x_1249_, 0);
lean_inc_ref(v_env_1250_);
lean_dec(v___x_1249_);
lean_inc(v_declName_1199_);
v___x_1251_ = l_Lean_isCasesOnRecursor(v_env_1250_, v_declName_1199_);
if (v___x_1251_ == 0)
{
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
lean_dec_ref(v_e_1181_);
goto v___jp_1192_;
}
else
{
lean_object* v_indName_1252_; lean_object* v___x_1253_; 
v_indName_1252_ = l_Lean_Name_getPrefix(v_declName_1199_);
v___x_1253_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_indName_1252_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1350_; 
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1256_ = v___x_1253_;
v_isShared_1257_ = v_isSharedCheck_1350_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1253_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1350_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
if (lean_obj_tag(v_a_1254_) == 5)
{
lean_object* v_val_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1345_; 
v_val_1258_ = lean_ctor_get(v_a_1254_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v_a_1254_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1260_ = v_a_1254_;
v_isShared_1261_ = v_isSharedCheck_1345_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_val_1258_);
lean_dec(v_a_1254_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1345_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v_toConstantVal_1262_; lean_object* v_numParams_1263_; lean_object* v_numIndices_1264_; lean_object* v_ctors_1265_; lean_object* v_nargs_1266_; lean_object* v_dummy_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v_args_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; 
v_toConstantVal_1262_ = lean_ctor_get(v_val_1258_, 0);
lean_inc_ref(v_toConstantVal_1262_);
v_numParams_1263_ = lean_ctor_get(v_val_1258_, 1);
lean_inc(v_numParams_1263_);
v_numIndices_1264_ = lean_ctor_get(v_val_1258_, 2);
lean_inc(v_numIndices_1264_);
v_ctors_1265_ = lean_ctor_get(v_val_1258_, 4);
lean_inc(v_ctors_1265_);
v_nargs_1266_ = l_Lean_Expr_getAppNumArgs(v_e_1181_);
v_dummy_1267_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
lean_inc(v_nargs_1266_);
v___x_1268_ = lean_mk_array(v_nargs_1266_, v_dummy_1267_);
v___x_1269_ = lean_unsigned_to_nat(1u);
v___x_1270_ = lean_nat_sub(v_nargs_1266_, v___x_1269_);
lean_dec(v_nargs_1266_);
v_args_1271_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1181_, v___x_1268_, v___x_1270_);
v___x_1272_ = lean_nat_add(v_numParams_1263_, v___x_1269_);
v___x_1273_ = lean_nat_add(v___x_1272_, v_numIndices_1264_);
v___x_1274_ = lean_nat_add(v___x_1273_, v___x_1269_);
lean_dec(v___x_1273_);
v___x_1275_ = l_Lean_InductiveVal_numCtors(v_val_1258_);
lean_dec_ref(v_val_1258_);
v___x_1276_ = lean_nat_add(v___x_1274_, v___x_1275_);
lean_dec(v___x_1275_);
v___x_1277_ = lean_array_get_size(v_args_1271_);
v___x_1278_ = lean_nat_dec_le(v___x_1276_, v___x_1277_);
if (v___x_1278_ == 0)
{
lean_object* v___x_1279_; lean_object* v___x_1281_; 
lean_dec(v___x_1276_);
lean_dec(v___x_1274_);
lean_dec(v___x_1272_);
lean_dec_ref(v_args_1271_);
lean_dec(v_ctors_1265_);
lean_dec(v_numIndices_1264_);
lean_dec(v_numParams_1263_);
lean_dec_ref(v_toConstantVal_1262_);
lean_del_object(v___x_1260_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
v___x_1279_ = lean_box(0);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 0, v___x_1279_);
v___x_1281_ = v___x_1256_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1279_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
else
{
lean_object* v___x_1283_; lean_object* v_params_1284_; lean_object* v_motive_1285_; lean_object* v_discrs_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v_discrInfos_1289_; lean_object* v_alts_1290_; lean_object* v___y_1292_; lean_object* v___y_1293_; lean_object* v_lower_1336_; lean_object* v_upper_1337_; uint8_t v___x_1344_; 
lean_del_object(v___x_1256_);
v___x_1283_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1263_);
lean_inc_ref_n(v_args_1271_, 3);
v_params_1284_ = l_Array_toSubarray___redArg(v_args_1271_, v___x_1283_, v_numParams_1263_);
v_motive_1285_ = lean_array_get(v___x_1201_, v_args_1271_, v_numParams_1263_);
lean_dec(v_numParams_1263_);
lean_inc(v___x_1274_);
v_discrs_1286_ = l_Array_toSubarray___redArg(v_args_1271_, v___x_1272_, v___x_1274_);
v___x_1287_ = lean_nat_add(v_numIndices_1264_, v___x_1269_);
lean_dec(v_numIndices_1264_);
v___x_1288_ = lean_box(0);
v_discrInfos_1289_ = lean_mk_array(v___x_1287_, v___x_1288_);
lean_inc(v___x_1276_);
v_alts_1290_ = l_Array_toSubarray___redArg(v_args_1271_, v___x_1274_, v___x_1276_);
v___x_1344_ = lean_nat_dec_le(v___x_1276_, v___x_1283_);
if (v___x_1344_ == 0)
{
v_lower_1336_ = v___x_1276_;
v_upper_1337_ = v___x_1277_;
goto v___jp_1335_;
}
else
{
lean_dec(v___x_1276_);
v_lower_1336_ = v___x_1283_;
v_upper_1337_ = v___x_1277_;
goto v___jp_1335_;
}
v___jp_1291_:
{
lean_object* v___x_1294_; size_t v_sz_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_54846__overap_1300_; lean_object* v___x_1301_; 
v___x_1294_ = lean_array_mk(v_ctors_1265_);
v_sz_1295_ = lean_array_size(v___x_1294_);
v___x_1296_ = l_unsafeCast___redArg(v___x_1294_);
lean_dec_ref(v___x_1294_);
v___x_1297_ = lean_box_usize(v_sz_1295_);
v___x_1298_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed__const__1));
v___x_1299_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed), 12, 3);
lean_closure_set(v___x_1299_, 0, v___x_1297_);
lean_closure_set(v___x_1299_, 1, v___x_1298_);
lean_closure_set(v___x_1299_, 2, v___x_1296_);
v___x_54846__overap_1300_ = l_unsafeCast___redArg(v___x_1299_);
lean_dec_ref(v___x_1299_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1188_);
lean_inc_ref(v___y_1187_);
lean_inc(v___y_1186_);
lean_inc_ref(v___y_1185_);
lean_inc(v___y_1184_);
lean_inc(v___y_1183_);
v___x_1301_ = lean_apply_9(v___x_54846__overap_1300_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, lean_box(0));
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1326_; 
v_a_1302_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1304_ = v___x_1301_;
v_isShared_1305_ = v_isSharedCheck_1326_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1301_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1326_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v_start_1306_; lean_object* v_stop_1307_; lean_object* v_start_1308_; lean_object* v_stop_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1321_; 
v_start_1306_ = lean_ctor_get(v_params_1284_, 1);
lean_inc(v_start_1306_);
v_stop_1307_ = lean_ctor_get(v_params_1284_, 2);
lean_inc(v_stop_1307_);
v_start_1308_ = lean_ctor_get(v_discrs_1286_, 1);
lean_inc(v_start_1308_);
v_stop_1309_ = lean_ctor_get(v_discrs_1286_, 2);
lean_inc(v_stop_1309_);
v___x_1310_ = lean_nat_sub(v_stop_1307_, v_start_1306_);
lean_dec(v_start_1306_);
lean_dec(v_stop_1307_);
v___x_1311_ = lean_nat_sub(v_stop_1309_, v_start_1308_);
lean_dec(v_start_1308_);
lean_dec(v_stop_1309_);
v___x_1312_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3);
v___x_1313_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1310_);
lean_ctor_set(v___x_1313_, 1, v___x_1311_);
lean_ctor_set(v___x_1313_, 2, v_a_1302_);
lean_ctor_set(v___x_1313_, 3, v___y_1293_);
lean_ctor_set(v___x_1313_, 4, v_discrInfos_1289_);
lean_ctor_set(v___x_1313_, 5, v___x_1312_);
v___x_1314_ = lean_array_mk(v_us_1200_);
v___x_1315_ = l_Subarray_copy___redArg(v_params_1284_);
v___x_1316_ = l_Subarray_copy___redArg(v_discrs_1286_);
v___x_1317_ = l_Subarray_copy___redArg(v_alts_1290_);
v___x_1318_ = l_Subarray_copy___redArg(v___y_1292_);
v___x_1319_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1313_);
lean_ctor_set(v___x_1319_, 1, v_declName_1199_);
lean_ctor_set(v___x_1319_, 2, v___x_1314_);
lean_ctor_set(v___x_1319_, 3, v___x_1315_);
lean_ctor_set(v___x_1319_, 4, v_motive_1285_);
lean_ctor_set(v___x_1319_, 5, v___x_1316_);
lean_ctor_set(v___x_1319_, 6, v___x_1317_);
lean_ctor_set(v___x_1319_, 7, v___x_1318_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set_tag(v___x_1260_, 1);
lean_ctor_set(v___x_1260_, 0, v___x_1319_);
v___x_1321_ = v___x_1260_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1319_);
v___x_1321_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
lean_object* v___x_1323_; 
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 0, v___x_1321_);
v___x_1323_ = v___x_1304_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
else
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
lean_dec_ref(v_alts_1290_);
lean_dec_ref(v_discrInfos_1289_);
lean_dec_ref(v_discrs_1286_);
lean_dec(v_motive_1285_);
lean_dec_ref(v_params_1284_);
lean_del_object(v___x_1260_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
v_a_1327_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1301_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1301_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
v___jp_1335_:
{
lean_object* v_levelParams_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v_levelParams_1338_ = lean_ctor_get(v_toConstantVal_1262_, 1);
lean_inc(v_levelParams_1338_);
lean_dec_ref(v_toConstantVal_1262_);
v___x_1339_ = l_Array_toSubarray___redArg(v_args_1271_, v_lower_1336_, v_upper_1337_);
v___x_1340_ = l_List_lengthTR___redArg(v_levelParams_1338_);
lean_dec(v_levelParams_1338_);
v___x_1341_ = l_List_lengthTR___redArg(v_us_1200_);
v___x_1342_ = lean_nat_dec_eq(v___x_1340_, v___x_1341_);
lean_dec(v___x_1341_);
lean_dec(v___x_1340_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
v___x_1343_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__4));
v___y_1292_ = v___x_1339_;
v___y_1293_ = v___x_1343_;
goto v___jp_1291_;
}
else
{
v___y_1292_ = v___x_1339_;
v___y_1293_ = v___x_1288_;
goto v___jp_1291_;
}
}
}
}
}
else
{
lean_object* v___x_1346_; lean_object* v___x_1348_; 
lean_dec(v_a_1254_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
lean_dec_ref(v_e_1181_);
v___x_1346_ = lean_box(0);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 0, v___x_1346_);
v___x_1348_ = v___x_1256_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1346_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
lean_dec_ref(v_e_1181_);
v_a_1351_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1253_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1253_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
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
lean_dec_ref(v___x_1198_);
lean_dec_ref(v_e_1181_);
goto v___jp_1192_;
}
}
v___jp_1192_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_box(0);
v___x_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
return v___x_1194_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed(lean_object* v_e_1360_, lean_object* v_alsoCasesOn_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
uint8_t v_alsoCasesOn_boxed_1371_; lean_object* v_res_1372_; 
v_alsoCasesOn_boxed_1371_ = lean_unbox(v_alsoCasesOn_1361_);
v_res_1372_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(v_e_1360_, v_alsoCasesOn_boxed_1371_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec(v___y_1363_);
lean_dec(v___y_1362_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(lean_object* v_k_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v_b_1378_, lean_object* v_c_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v___x_1385_; 
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
lean_inc(v___y_1381_);
lean_inc_ref(v___y_1380_);
lean_inc(v___y_1377_);
lean_inc_ref(v___y_1376_);
lean_inc(v___y_1375_);
lean_inc(v___y_1374_);
v___x_1385_ = lean_apply_11(v_k_1373_, v_b_1378_, v_c_1379_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, lean_box(0));
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed(lean_object* v_k_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v_b_1391_, lean_object* v_c_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(v_k_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v_b_1391_, v_c_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec(v___y_1387_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(lean_object* v_e_1399_, lean_object* v_maxFVars_1400_, lean_object* v_k_1401_, uint8_t v_cleanupAnnotations_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v___f_1412_; uint8_t v___x_1413_; uint8_t v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
lean_inc(v___y_1406_);
lean_inc_ref(v___y_1405_);
lean_inc(v___y_1404_);
lean_inc(v___y_1403_);
v___f_1412_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1412_, 0, v_k_1401_);
lean_closure_set(v___f_1412_, 1, v___y_1403_);
lean_closure_set(v___f_1412_, 2, v___y_1404_);
lean_closure_set(v___f_1412_, 3, v___y_1405_);
lean_closure_set(v___f_1412_, 4, v___y_1406_);
v___x_1413_ = 1;
v___x_1414_ = 0;
v___x_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1415_, 0, v_maxFVars_1400_);
v___x_1416_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1399_, v___x_1413_, v___x_1414_, v___x_1413_, v___x_1414_, v___x_1415_, v___f_1412_, v_cleanupAnnotations_1402_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
lean_dec_ref_known(v___x_1415_, 1);
if (lean_obj_tag(v___x_1416_) == 0)
{
return v___x_1416_;
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1416_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1416_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___boxed(lean_object* v_e_1425_, lean_object* v_maxFVars_1426_, lean_object* v_k_1427_, lean_object* v_cleanupAnnotations_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1438_; lean_object* v_res_1439_; 
v_cleanupAnnotations_boxed_1438_ = lean_unbox(v_cleanupAnnotations_1428_);
v_res_1439_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_e_1425_, v_maxFVars_1426_, v_k_1427_, v_cleanupAnnotations_boxed_1438_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec(v___y_1429_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(lean_object* v_k_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v_b_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_){
_start:
{
lean_object* v___x_1451_; 
lean_inc(v___y_1449_);
lean_inc_ref(v___y_1448_);
lean_inc(v___y_1447_);
lean_inc_ref(v___y_1446_);
lean_inc(v___y_1444_);
lean_inc_ref(v___y_1443_);
lean_inc(v___y_1442_);
lean_inc(v___y_1441_);
v___x_1451_ = lean_apply_10(v_k_1440_, v_b_1445_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, lean_box(0));
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed(lean_object* v_k_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v_b_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(v_k_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v_b_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec(v___y_1453_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(lean_object* v_name_1464_, lean_object* v_type_1465_, lean_object* v_val_1466_, lean_object* v_k_1467_, uint8_t v_nondep_1468_, uint8_t v_kind_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v___f_1479_; lean_object* v___x_1480_; 
lean_inc(v___y_1473_);
lean_inc_ref(v___y_1472_);
lean_inc(v___y_1471_);
lean_inc(v___y_1470_);
v___f_1479_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1479_, 0, v_k_1467_);
lean_closure_set(v___f_1479_, 1, v___y_1470_);
lean_closure_set(v___f_1479_, 2, v___y_1471_);
lean_closure_set(v___f_1479_, 3, v___y_1472_);
lean_closure_set(v___f_1479_, 4, v___y_1473_);
v___x_1480_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1464_, v_type_1465_, v_val_1466_, v___f_1479_, v_nondep_1468_, v_kind_1469_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
if (lean_obj_tag(v___x_1480_) == 0)
{
return v___x_1480_;
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1480_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1480_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg___boxed(lean_object* v_name_1489_, lean_object* v_type_1490_, lean_object* v_val_1491_, lean_object* v_k_1492_, lean_object* v_nondep_1493_, lean_object* v_kind_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
uint8_t v_nondep_boxed_1504_; uint8_t v_kind_boxed_1505_; lean_object* v_res_1506_; 
v_nondep_boxed_1504_ = lean_unbox(v_nondep_1493_);
v_kind_boxed_1505_ = lean_unbox(v_kind_1494_);
v_res_1506_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_1489_, v_type_1490_, v_val_1491_, v_k_1492_, v_nondep_boxed_1504_, v_kind_boxed_1505_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec(v___y_1495_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(lean_object* v_k_1507_, uint8_t v_usedLetOnly_1508_, lean_object* v_x_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v___x_1519_; 
lean_inc(v___y_1517_);
lean_inc_ref(v___y_1516_);
lean_inc(v___y_1515_);
lean_inc_ref(v___y_1514_);
lean_inc(v___y_1513_);
lean_inc_ref(v___y_1512_);
lean_inc(v___y_1511_);
lean_inc(v___y_1510_);
lean_inc_ref(v_x_1509_);
v___x_1519_ = lean_apply_10(v_k_1507_, v_x_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, lean_box(0));
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1519_, 1);
v___x_1521_ = lean_unsigned_to_nat(1u);
v___x_1522_ = lean_mk_empty_array_with_capacity(v___x_1521_);
v___x_1523_ = lean_array_push(v___x_1522_, v_x_1509_);
v___x_1524_ = 0;
v___x_1525_ = 1;
v___x_1526_ = l_Lean_Meta_mkLetFVars(v___x_1523_, v_a_1520_, v_usedLetOnly_1508_, v___x_1524_, v___x_1525_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_);
return v___x_1526_;
}
else
{
lean_dec_ref(v_x_1509_);
return v___x_1519_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed(lean_object* v_k_1527_, lean_object* v_usedLetOnly_1528_, lean_object* v_x_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
uint8_t v_usedLetOnly_boxed_1539_; lean_object* v_res_1540_; 
v_usedLetOnly_boxed_1539_ = lean_unbox(v_usedLetOnly_1528_);
v_res_1540_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(v_k_1527_, v_usedLetOnly_boxed_1539_, v_x_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec(v___y_1530_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(lean_object* v_name_1541_, lean_object* v_type_1542_, lean_object* v_val_1543_, lean_object* v_k_1544_, uint8_t v_nondep_1545_, uint8_t v_kind_1546_, uint8_t v_usedLetOnly_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v___x_1557_; lean_object* v___f_1558_; lean_object* v___x_1559_; 
v___x_1557_ = lean_box(v_usedLetOnly_1547_);
v___f_1558_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1558_, 0, v_k_1544_);
lean_closure_set(v___f_1558_, 1, v___x_1557_);
v___x_1559_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_1541_, v_type_1542_, v_val_1543_, v___f_1558_, v_nondep_1545_, v_kind_1546_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___boxed(lean_object* v_name_1560_, lean_object* v_type_1561_, lean_object* v_val_1562_, lean_object* v_k_1563_, lean_object* v_nondep_1564_, lean_object* v_kind_1565_, lean_object* v_usedLetOnly_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
uint8_t v_nondep_boxed_1576_; uint8_t v_kind_boxed_1577_; uint8_t v_usedLetOnly_boxed_1578_; lean_object* v_res_1579_; 
v_nondep_boxed_1576_ = lean_unbox(v_nondep_1564_);
v_kind_boxed_1577_ = lean_unbox(v_kind_1565_);
v_usedLetOnly_boxed_1578_ = lean_unbox(v_usedLetOnly_1566_);
v_res_1579_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(v_name_1560_, v_type_1561_, v_val_1562_, v_k_1563_, v_nondep_boxed_1576_, v_kind_boxed_1577_, v_usedLetOnly_boxed_1578_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec(v___y_1567_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(lean_object* v_name_1580_, uint8_t v_bi_1581_, lean_object* v_type_1582_, lean_object* v_k_1583_, uint8_t v_kind_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v___f_1594_; lean_object* v___x_1595_; 
lean_inc(v___y_1588_);
lean_inc_ref(v___y_1587_);
lean_inc(v___y_1586_);
lean_inc(v___y_1585_);
v___f_1594_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1594_, 0, v_k_1583_);
lean_closure_set(v___f_1594_, 1, v___y_1585_);
lean_closure_set(v___f_1594_, 2, v___y_1586_);
lean_closure_set(v___f_1594_, 3, v___y_1587_);
lean_closure_set(v___f_1594_, 4, v___y_1588_);
v___x_1595_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1580_, v_bi_1581_, v_type_1582_, v___f_1594_, v_kind_1584_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_);
if (lean_obj_tag(v___x_1595_) == 0)
{
return v___x_1595_;
}
else
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v___x_1595_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___boxed(lean_object* v_name_1604_, lean_object* v_bi_1605_, lean_object* v_type_1606_, lean_object* v_k_1607_, lean_object* v_kind_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
uint8_t v_bi_boxed_1618_; uint8_t v_kind_boxed_1619_; lean_object* v_res_1620_; 
v_bi_boxed_1618_ = lean_unbox(v_bi_1605_);
v_kind_boxed_1619_ = lean_unbox(v_kind_1608_);
v_res_1620_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_name_1604_, v_bi_boxed_1618_, v_type_1606_, v_k_1607_, v_kind_boxed_1619_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec(v___y_1609_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(lean_object* v_k_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v___x_1631_; 
lean_inc(v___y_1625_);
lean_inc_ref(v___y_1624_);
lean_inc(v___y_1623_);
lean_inc(v___y_1622_);
v___x_1631_ = lean_apply_9(v_k_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, lean_box(0));
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed(lean_object* v_k_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(v_k_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec(v___y_1633_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(lean_object* v_k_1643_, uint8_t v_allowLevelAssignments_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v___f_1654_; lean_object* v___x_1655_; 
lean_inc(v___y_1648_);
lean_inc_ref(v___y_1647_);
lean_inc(v___y_1646_);
lean_inc(v___y_1645_);
v___f_1654_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1654_, 0, v_k_1643_);
lean_closure_set(v___f_1654_, 1, v___y_1645_);
lean_closure_set(v___f_1654_, 2, v___y_1646_);
lean_closure_set(v___f_1654_, 3, v___y_1647_);
lean_closure_set(v___f_1654_, 4, v___y_1648_);
v___x_1655_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1644_, v___f_1654_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
if (lean_obj_tag(v___x_1655_) == 0)
{
return v___x_1655_;
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1655_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1655_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___boxed(lean_object* v_k_1664_, lean_object* v_allowLevelAssignments_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1675_; lean_object* v_res_1676_; 
v_allowLevelAssignments_boxed_1675_ = lean_unbox(v_allowLevelAssignments_1665_);
v_res_1676_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v_k_1664_, v_allowLevelAssignments_boxed_1675_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
lean_dec(v___y_1667_);
lean_dec(v___y_1666_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(lean_object* v_a_1677_, lean_object* v_x_1678_){
_start:
{
if (lean_obj_tag(v_x_1678_) == 0)
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_box(0);
return v___x_1679_;
}
else
{
lean_object* v_key_1680_; lean_object* v_value_1681_; lean_object* v_tail_1682_; uint8_t v___x_1683_; 
v_key_1680_ = lean_ctor_get(v_x_1678_, 0);
v_value_1681_ = lean_ctor_get(v_x_1678_, 1);
v_tail_1682_ = lean_ctor_get(v_x_1678_, 2);
v___x_1683_ = lean_expr_eqv(v_key_1680_, v_a_1677_);
if (v___x_1683_ == 0)
{
v_x_1678_ = v_tail_1682_;
goto _start;
}
else
{
lean_object* v___x_1685_; 
lean_inc(v_value_1681_);
v___x_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1685_, 0, v_value_1681_);
return v___x_1685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg___boxed(lean_object* v_a_1686_, lean_object* v_x_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_1686_, v_x_1687_);
lean_dec(v_x_1687_);
lean_dec_ref(v_a_1686_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(lean_object* v_m_1689_, lean_object* v_a_1690_){
_start:
{
lean_object* v_buckets_1691_; lean_object* v___x_1692_; uint64_t v___x_1693_; uint64_t v___x_1694_; uint64_t v___x_1695_; uint64_t v_fold_1696_; uint64_t v___x_1697_; uint64_t v___x_1698_; uint64_t v___x_1699_; size_t v___x_1700_; size_t v___x_1701_; size_t v___x_1702_; size_t v___x_1703_; size_t v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v_buckets_1691_ = lean_ctor_get(v_m_1689_, 1);
v___x_1692_ = lean_array_get_size(v_buckets_1691_);
v___x_1693_ = l_Lean_Expr_hash(v_a_1690_);
v___x_1694_ = 32ULL;
v___x_1695_ = lean_uint64_shift_right(v___x_1693_, v___x_1694_);
v_fold_1696_ = lean_uint64_xor(v___x_1693_, v___x_1695_);
v___x_1697_ = 16ULL;
v___x_1698_ = lean_uint64_shift_right(v_fold_1696_, v___x_1697_);
v___x_1699_ = lean_uint64_xor(v_fold_1696_, v___x_1698_);
v___x_1700_ = lean_uint64_to_usize(v___x_1699_);
v___x_1701_ = lean_usize_of_nat(v___x_1692_);
v___x_1702_ = ((size_t)1ULL);
v___x_1703_ = lean_usize_sub(v___x_1701_, v___x_1702_);
v___x_1704_ = lean_usize_land(v___x_1700_, v___x_1703_);
v___x_1705_ = lean_array_uget_borrowed(v_buckets_1691_, v___x_1704_);
v___x_1706_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_1690_, v___x_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg___boxed(lean_object* v_m_1707_, lean_object* v_a_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v_m_1707_, v_a_1708_);
lean_dec_ref(v_a_1708_);
lean_dec_ref(v_m_1707_);
return v_res_1709_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(lean_object* v_opts_1710_, lean_object* v_opt_1711_){
_start:
{
lean_object* v_name_1712_; lean_object* v_defValue_1713_; lean_object* v_map_1714_; lean_object* v___x_1715_; 
v_name_1712_ = lean_ctor_get(v_opt_1711_, 0);
v_defValue_1713_ = lean_ctor_get(v_opt_1711_, 1);
v_map_1714_ = lean_ctor_get(v_opts_1710_, 0);
v___x_1715_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1714_, v_name_1712_);
if (lean_obj_tag(v___x_1715_) == 0)
{
uint8_t v___x_1716_; 
v___x_1716_ = lean_unbox(v_defValue_1713_);
return v___x_1716_;
}
else
{
lean_object* v_val_1717_; 
v_val_1717_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_val_1717_);
lean_dec_ref_known(v___x_1715_, 1);
if (lean_obj_tag(v_val_1717_) == 1)
{
uint8_t v_v_1718_; 
v_v_1718_ = lean_ctor_get_uint8(v_val_1717_, 0);
lean_dec_ref_known(v_val_1717_, 0);
return v_v_1718_;
}
else
{
uint8_t v___x_1719_; 
lean_dec(v_val_1717_);
v___x_1719_ = lean_unbox(v_defValue_1713_);
return v___x_1719_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5___boxed(lean_object* v_opts_1720_, lean_object* v_opt_1721_){
_start:
{
uint8_t v_res_1722_; lean_object* v_r_1723_; 
v_res_1722_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_opts_1720_, v_opt_1721_);
lean_dec_ref(v_opt_1721_);
lean_dec_ref(v_opts_1720_);
v_r_1723_ = lean_box(v_res_1722_);
return v_r_1723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(lean_object* v_a_1724_, lean_object* v_b_1725_){
_start:
{
lean_object* v_array_1726_; lean_object* v_start_1727_; lean_object* v_stop_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1741_; 
v_array_1726_ = lean_ctor_get(v_a_1724_, 0);
v_start_1727_ = lean_ctor_get(v_a_1724_, 1);
v_stop_1728_ = lean_ctor_get(v_a_1724_, 2);
v_isSharedCheck_1741_ = !lean_is_exclusive(v_a_1724_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1730_ = v_a_1724_;
v_isShared_1731_ = v_isSharedCheck_1741_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_stop_1728_);
lean_inc(v_start_1727_);
lean_inc(v_array_1726_);
lean_dec(v_a_1724_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1741_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
uint8_t v___x_1732_; 
v___x_1732_ = lean_nat_dec_lt(v_start_1727_, v_stop_1728_);
if (v___x_1732_ == 0)
{
lean_del_object(v___x_1730_);
lean_dec(v_stop_1728_);
lean_dec(v_start_1727_);
lean_dec_ref(v_array_1726_);
return v_b_1725_;
}
else
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1733_ = lean_unsigned_to_nat(1u);
v___x_1734_ = lean_nat_add(v_start_1727_, v___x_1733_);
lean_inc_ref(v_array_1726_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 1, v___x_1734_);
v___x_1736_ = v___x_1730_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_array_1726_);
lean_ctor_set(v_reuseFailAlloc_1740_, 1, v___x_1734_);
lean_ctor_set(v_reuseFailAlloc_1740_, 2, v_stop_1728_);
v___x_1736_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1737_ = lean_array_fget(v_array_1726_, v_start_1727_);
lean_dec(v_start_1727_);
lean_dec_ref(v_array_1726_);
v___x_1738_ = lean_array_push(v_b_1725_, v___x_1737_);
v_a_1724_ = v___x_1736_;
v_b_1725_ = v___x_1738_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object* v_body_1742_, lean_object* v_recFnName_1743_, lean_object* v_fixedPrefixSize_1744_, lean_object* v_F_1745_, lean_object* v_x_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1756_ = lean_expr_instantiate1(v_body_1742_, v_x_1746_);
v___x_1757_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1743_, v_fixedPrefixSize_1744_, v_F_1745_, v___x_1756_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; uint8_t v___x_1762_; uint8_t v___x_1763_; uint8_t v___x_1764_; lean_object* v___x_1765_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1758_);
lean_dec_ref_known(v___x_1757_, 1);
v___x_1759_ = lean_unsigned_to_nat(1u);
v___x_1760_ = lean_mk_empty_array_with_capacity(v___x_1759_);
v___x_1761_ = lean_array_push(v___x_1760_, v_x_1746_);
v___x_1762_ = 0;
v___x_1763_ = 1;
v___x_1764_ = 1;
v___x_1765_ = l_Lean_Meta_mkLambdaFVars(v___x_1761_, v_a_1758_, v___x_1762_, v___x_1763_, v___x_1762_, v___x_1763_, v___x_1764_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
return v___x_1765_;
}
else
{
lean_dec_ref(v_x_1746_);
return v___x_1757_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object* v_body_1766_, lean_object* v_recFnName_1767_, lean_object* v_fixedPrefixSize_1768_, lean_object* v_F_1769_, lean_object* v_x_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(v_body_1766_, v_recFnName_1767_, v_fixedPrefixSize_1768_, v_F_1769_, v_x_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v_body_1766_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object* v_body_1781_, lean_object* v_recFnName_1782_, lean_object* v_fixedPrefixSize_1783_, lean_object* v_F_1784_, lean_object* v_x_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = lean_expr_instantiate1(v_body_1781_, v_x_1785_);
v___x_1796_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1782_, v_fixedPrefixSize_1783_, v_F_1784_, v___x_1795_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; uint8_t v___x_1802_; uint8_t v___x_1803_; lean_object* v___x_1804_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref_known(v___x_1796_, 1);
v___x_1798_ = lean_unsigned_to_nat(1u);
v___x_1799_ = lean_mk_empty_array_with_capacity(v___x_1798_);
v___x_1800_ = lean_array_push(v___x_1799_, v_x_1785_);
v___x_1801_ = 0;
v___x_1802_ = 1;
v___x_1803_ = 1;
v___x_1804_ = l_Lean_Meta_mkForallFVars(v___x_1800_, v_a_1797_, v___x_1801_, v___x_1802_, v___x_1802_, v___x_1803_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
return v___x_1804_;
}
else
{
lean_dec_ref(v_x_1785_);
return v___x_1796_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object* v_body_1805_, lean_object* v_recFnName_1806_, lean_object* v_fixedPrefixSize_1807_, lean_object* v_F_1808_, lean_object* v_x_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(v_body_1805_, v_recFnName_1806_, v_fixedPrefixSize_1807_, v_F_1808_, v_x_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
lean_dec(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v_body_1805_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object* v_body_1820_, lean_object* v_recFnName_1821_, lean_object* v_fixedPrefixSize_1822_, lean_object* v_F_1823_, lean_object* v_x_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(v_body_1820_, v_recFnName_1821_, v_fixedPrefixSize_1822_, v_F_1823_, v_x_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec(v___y_1825_);
lean_dec_ref(v_x_1824_);
lean_dec_ref(v_body_1820_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object* v_recFnName_1837_, lean_object* v_fixedPrefixSize_1838_, lean_object* v_F_1839_, size_t v_sz_1840_, size_t v_i_1841_, lean_object* v_bs_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
uint8_t v___x_1852_; 
v___x_1852_ = lean_usize_dec_lt(v_i_1841_, v_sz_1840_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
lean_dec_ref(v_F_1839_);
lean_dec(v_fixedPrefixSize_1838_);
lean_dec(v_recFnName_1837_);
v___x_1853_ = l_unsafeCast___redArg(v_bs_1842_);
lean_dec_ref(v_bs_1842_);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
return v___x_1854_;
}
else
{
lean_object* v_v_1855_; lean_object* v___x_1856_; lean_object* v_bs_x27_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v_v_1855_ = lean_array_uget(v_bs_1842_, v_i_1841_);
v___x_1856_ = lean_unsigned_to_nat(0u);
v_bs_x27_1857_ = lean_array_uset(v_bs_1842_, v_i_1841_, v___x_1856_);
v___x_1858_ = l_unsafeCast___redArg(v_v_1855_);
lean_dec(v_v_1855_);
lean_inc_ref(v_F_1839_);
lean_inc(v_fixedPrefixSize_1838_);
lean_inc(v_recFnName_1837_);
v___x_1859_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1837_, v_fixedPrefixSize_1838_, v_F_1839_, v___x_1858_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; size_t v___x_1861_; size_t v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_a_1860_);
lean_dec_ref_known(v___x_1859_, 1);
v___x_1861_ = ((size_t)1ULL);
v___x_1862_ = lean_usize_add(v_i_1841_, v___x_1861_);
v___x_1863_ = l_unsafeCast___redArg(v_a_1860_);
lean_dec(v_a_1860_);
v___x_1864_ = lean_array_uset(v_bs_x27_1857_, v_i_1841_, v___x_1863_);
v_i_1841_ = v___x_1862_;
v_bs_1842_ = v___x_1864_;
goto _start;
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
lean_dec_ref(v_bs_x27_1857_);
lean_dec_ref(v_F_1839_);
lean_dec(v_fixedPrefixSize_1838_);
lean_dec(v_recFnName_1837_);
v_a_1866_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1859_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1859_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object* v_recFnName_1874_, lean_object* v_fixedPrefixSize_1875_, lean_object* v_F_1876_, lean_object* v_sz_1877_, lean_object* v_i_1878_, lean_object* v_bs_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
size_t v_sz_boxed_1889_; size_t v_i_boxed_1890_; lean_object* v_res_1891_; 
v_sz_boxed_1889_ = lean_unbox_usize(v_sz_1877_);
lean_dec(v_sz_1877_);
v_i_boxed_1890_ = lean_unbox_usize(v_i_1878_);
lean_dec(v_i_1878_);
v_res_1891_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_1874_, v_fixedPrefixSize_1875_, v_F_1876_, v_sz_boxed_1889_, v_i_boxed_1890_, v_bs_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec(v___y_1881_);
lean_dec(v___y_1880_);
return v_res_1891_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4(void){
_start:
{
lean_object* v_cls_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v_cls_1899_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_1900_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3));
v___x_1901_ = l_Lean_Name_append(v___x_1900_, v_cls_1899_);
return v___x_1901_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1903_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5));
v___x_1904_ = l_Lean_stringToMessageData(v___x_1903_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object* v_recFnName_1905_, lean_object* v_fixedPrefixSize_1906_, lean_object* v_F_1907_, lean_object* v_e_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1930_ = l_Lean_Expr_getAppNumArgs(v_e_1908_);
v___x_1931_ = lean_unsigned_to_nat(1u);
v___x_1932_ = lean_nat_add(v_fixedPrefixSize_1906_, v___x_1931_);
v___x_1933_ = lean_nat_dec_lt(v___x_1930_, v___x_1932_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; lean_object* v_dummy_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v_args_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1934_ = l_Lean_instInhabitedExpr;
v_dummy_1935_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
lean_inc(v___x_1930_);
v___x_1936_ = lean_mk_array(v___x_1930_, v_dummy_1935_);
v___x_1937_ = lean_nat_sub(v___x_1930_, v___x_1931_);
lean_dec(v___x_1930_);
v_args_1938_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1908_, v___x_1936_, v___x_1937_);
v___x_1939_ = lean_array_get(v___x_1934_, v_args_1938_, v_fixedPrefixSize_1906_);
lean_inc_ref(v_F_1907_);
lean_inc(v_fixedPrefixSize_1906_);
lean_inc(v_recFnName_1905_);
v___x_1940_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1905_, v_fixedPrefixSize_1906_, v_F_1907_, v___x_1939_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1940_, 1);
lean_inc_ref(v_F_1907_);
v___x_1942_ = l_Lean_Expr_app___override(v_F_1907_, v_a_1941_);
lean_inc(v_a_1916_);
lean_inc_ref(v_a_1915_);
lean_inc(v_a_1914_);
lean_inc_ref(v_a_1913_);
lean_inc_ref(v___x_1942_);
v___x_1943_ = lean_infer_type(v___x_1942_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v___x_1945_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
lean_inc(v_a_1916_);
lean_inc_ref(v_a_1915_);
lean_inc(v_a_1914_);
lean_inc_ref(v_a_1913_);
v___x_1945_ = lean_whnf(v_a_1944_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
v___x_1947_ = l_Lean_Expr_bindingDomain_x21(v_a_1946_);
lean_dec(v_a_1946_);
v___x_1948_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v___x_1947_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_a_1949_; lean_object* v___x_1950_; lean_object* v_lower_1952_; lean_object* v_upper_1953_; lean_object* v___x_1981_; lean_object* v___x_1982_; uint8_t v___x_1983_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_a_1949_);
lean_dec_ref_known(v___x_1948_, 1);
v___x_1950_ = l_Lean_Expr_app___override(v___x_1942_, v_a_1949_);
v___x_1981_ = lean_unsigned_to_nat(0u);
v___x_1982_ = lean_array_get_size(v_args_1938_);
v___x_1983_ = lean_nat_dec_le(v___x_1932_, v___x_1981_);
if (v___x_1983_ == 0)
{
v_lower_1952_ = v___x_1932_;
v_upper_1953_ = v___x_1982_;
goto v___jp_1951_;
}
else
{
lean_dec(v___x_1932_);
v_lower_1952_ = v___x_1981_;
v_upper_1953_ = v___x_1982_;
goto v___jp_1951_;
}
v___jp_1951_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; size_t v_sz_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_55024__overap_1962_; lean_object* v___x_1963_; 
v___x_1954_ = l_Array_toSubarray___redArg(v_args_1938_, v_lower_1952_, v_upper_1953_);
v___x_1955_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
v___x_1956_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(v___x_1954_, v___x_1955_);
v_sz_1957_ = lean_array_size(v___x_1956_);
v___x_1958_ = l_unsafeCast___redArg(v___x_1956_);
lean_dec_ref(v___x_1956_);
v___x_1959_ = lean_box_usize(v_sz_1957_);
v___x_1960_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed__const__1));
v___x_1961_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed), 15, 6);
lean_closure_set(v___x_1961_, 0, v_recFnName_1905_);
lean_closure_set(v___x_1961_, 1, v_fixedPrefixSize_1906_);
lean_closure_set(v___x_1961_, 2, v_F_1907_);
lean_closure_set(v___x_1961_, 3, v___x_1959_);
lean_closure_set(v___x_1961_, 4, v___x_1960_);
lean_closure_set(v___x_1961_, 5, v___x_1958_);
v___x_55024__overap_1962_ = l_unsafeCast___redArg(v___x_1961_);
lean_dec_ref(v___x_1961_);
lean_inc(v_a_1916_);
lean_inc_ref(v_a_1915_);
lean_inc(v_a_1914_);
lean_inc_ref(v_a_1913_);
lean_inc(v_a_1912_);
lean_inc_ref(v_a_1911_);
lean_inc(v_a_1910_);
lean_inc(v_a_1909_);
v___x_1963_ = lean_apply_9(v___x_55024__overap_1962_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_, lean_box(0));
if (lean_obj_tag(v___x_1963_) == 0)
{
lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1972_; 
v_a_1964_ = lean_ctor_get(v___x_1963_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1966_ = v___x_1963_;
v_isShared_1967_ = v_isSharedCheck_1972_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___x_1963_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1972_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1968_ = l_Lean_mkAppN(v___x_1950_, v_a_1964_);
lean_dec(v_a_1964_);
if (v_isShared_1967_ == 0)
{
lean_ctor_set(v___x_1966_, 0, v___x_1968_);
v___x_1970_ = v___x_1966_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
lean_dec_ref(v___x_1950_);
v_a_1973_ = lean_ctor_get(v___x_1963_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1963_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1963_);
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
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
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
}
else
{
lean_dec_ref(v___x_1942_);
lean_dec_ref(v_args_1938_);
lean_dec(v___x_1932_);
lean_dec_ref(v_F_1907_);
lean_dec(v_fixedPrefixSize_1906_);
lean_dec(v_recFnName_1905_);
return v___x_1948_;
}
}
else
{
lean_dec_ref(v___x_1942_);
lean_dec_ref(v_args_1938_);
lean_dec(v___x_1932_);
lean_dec_ref(v_F_1907_);
lean_dec(v_fixedPrefixSize_1906_);
lean_dec(v_recFnName_1905_);
return v___x_1945_;
}
}
else
{
lean_dec_ref(v___x_1942_);
lean_dec_ref(v_args_1938_);
lean_dec(v___x_1932_);
lean_dec_ref(v_F_1907_);
lean_dec(v_fixedPrefixSize_1906_);
lean_dec(v_recFnName_1905_);
return v___x_1943_;
}
}
else
{
lean_dec_ref(v_args_1938_);
lean_dec(v___x_1932_);
lean_dec_ref(v_F_1907_);
lean_dec(v_fixedPrefixSize_1906_);
lean_dec(v_recFnName_1905_);
return v___x_1940_;
}
}
else
{
lean_object* v_toCold_1984_; lean_object* v_options_1985_; uint8_t v_hasTrace_1986_; 
lean_dec(v___x_1932_);
lean_dec(v___x_1930_);
v_toCold_1984_ = lean_ctor_get(v_a_1915_, 0);
v_options_1985_ = lean_ctor_get(v_toCold_1984_, 2);
v_hasTrace_1986_ = lean_ctor_get_uint8(v_options_1985_, sizeof(void*)*1);
if (v_hasTrace_1986_ == 0)
{
v___y_1919_ = v_a_1909_;
v___y_1920_ = v_a_1910_;
v___y_1921_ = v_a_1911_;
v___y_1922_ = v_a_1912_;
v___y_1923_ = v_a_1913_;
v___y_1924_ = v_a_1914_;
v___y_1925_ = v_a_1915_;
v___y_1926_ = v_a_1916_;
goto v___jp_1918_;
}
else
{
lean_object* v_inheritedTraceOptions_1987_; lean_object* v_cls_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v_inheritedTraceOptions_1987_ = lean_ctor_get(v_toCold_1984_, 11);
v_cls_1988_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_1989_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_1990_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1987_, v_options_1985_, v___x_1989_);
if (v___x_1990_ == 0)
{
v___y_1919_ = v_a_1909_;
v___y_1920_ = v_a_1910_;
v___y_1921_ = v_a_1911_;
v___y_1922_ = v_a_1912_;
v___y_1923_ = v_a_1913_;
v___y_1924_ = v_a_1914_;
v___y_1925_ = v_a_1915_;
v___y_1926_ = v_a_1916_;
goto v___jp_1918_;
}
else
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1991_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6);
lean_inc_ref(v_e_1908_);
v___x_1992_ = l_Lean_indentExpr(v_e_1908_);
v___x_1993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1991_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
v___x_1994_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_1988_, v___x_1993_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_dec_ref_known(v___x_1994_, 1);
v___y_1919_ = v_a_1909_;
v___y_1920_ = v_a_1910_;
v___y_1921_ = v_a_1911_;
v___y_1922_ = v_a_1912_;
v___y_1923_ = v_a_1913_;
v___y_1924_ = v_a_1914_;
v___y_1925_ = v_a_1915_;
v___y_1926_ = v_a_1916_;
goto v___jp_1918_;
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
lean_dec_ref(v_e_1908_);
lean_dec_ref(v_F_1907_);
lean_dec(v_fixedPrefixSize_1906_);
lean_dec(v_recFnName_1905_);
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1994_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1994_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
}
}
v___jp_1918_:
{
lean_object* v___x_1927_; 
v___x_1927_ = l_Lean_Meta_etaExpand(v_e_1908_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1929_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1928_);
lean_dec_ref_known(v___x_1927_, 1);
v___x_1929_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1905_, v_fixedPrefixSize_1906_, v_F_1907_, v_a_1928_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_);
return v___x_1929_;
}
else
{
lean_dec_ref(v_F_1907_);
lean_dec(v_fixedPrefixSize_1906_);
lean_dec(v_recFnName_1905_);
return v___x_1927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(lean_object* v_recFnName_2003_, lean_object* v_fixedPrefixSize_2004_, lean_object* v_F_2005_, lean_object* v_x_2006_, lean_object* v_x_2007_, lean_object* v_x_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
if (lean_obj_tag(v_x_2006_) == 5)
{
lean_object* v_fn_2018_; lean_object* v_arg_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v_fn_2018_ = lean_ctor_get(v_x_2006_, 0);
lean_inc_ref(v_fn_2018_);
v_arg_2019_ = lean_ctor_get(v_x_2006_, 1);
lean_inc_ref(v_arg_2019_);
lean_dec_ref_known(v_x_2006_, 2);
v___x_2020_ = lean_array_set(v_x_2007_, v_x_2008_, v_arg_2019_);
v___x_2021_ = lean_unsigned_to_nat(1u);
v___x_2022_ = lean_nat_sub(v_x_2008_, v___x_2021_);
lean_dec(v_x_2008_);
v_x_2006_ = v_fn_2018_;
v_x_2007_ = v___x_2020_;
v_x_2008_ = v___x_2022_;
goto _start;
}
else
{
lean_object* v___x_2024_; 
lean_dec(v_x_2008_);
lean_inc_ref(v_F_2005_);
lean_inc(v_fixedPrefixSize_2004_);
lean_inc(v_recFnName_2003_);
v___x_2024_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2003_, v_fixedPrefixSize_2004_, v_F_2005_, v_x_2006_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v_a_2025_; size_t v_sz_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_54857__overap_2031_; lean_object* v___x_2032_; 
v_a_2025_ = lean_ctor_get(v___x_2024_, 0);
lean_inc(v_a_2025_);
lean_dec_ref_known(v___x_2024_, 1);
v_sz_2026_ = lean_array_size(v_x_2007_);
v___x_2027_ = l_unsafeCast___redArg(v_x_2007_);
lean_dec_ref(v_x_2007_);
v___x_2028_ = lean_box_usize(v_sz_2026_);
v___x_2029_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed__const__1));
v___x_2030_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed), 15, 6);
lean_closure_set(v___x_2030_, 0, v_recFnName_2003_);
lean_closure_set(v___x_2030_, 1, v_fixedPrefixSize_2004_);
lean_closure_set(v___x_2030_, 2, v_F_2005_);
lean_closure_set(v___x_2030_, 3, v___x_2028_);
lean_closure_set(v___x_2030_, 4, v___x_2029_);
lean_closure_set(v___x_2030_, 5, v___x_2027_);
v___x_54857__overap_2031_ = l_unsafeCast___redArg(v___x_2030_);
lean_dec_ref(v___x_2030_);
lean_inc(v___y_2016_);
lean_inc_ref(v___y_2015_);
lean_inc(v___y_2014_);
lean_inc_ref(v___y_2013_);
lean_inc(v___y_2012_);
lean_inc_ref(v___y_2011_);
lean_inc(v___y_2010_);
lean_inc(v___y_2009_);
v___x_2032_ = lean_apply_9(v___x_54857__overap_2031_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, lean_box(0));
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2041_; 
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2035_ = v___x_2032_;
v_isShared_2036_ = v_isSharedCheck_2041_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_2032_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2041_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; lean_object* v___x_2039_; 
v___x_2037_ = l_Lean_mkAppN(v_a_2025_, v_a_2033_);
lean_dec(v_a_2033_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v___x_2037_);
v___x_2039_ = v___x_2035_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2037_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
else
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2049_; 
lean_dec(v_a_2025_);
v_a_2042_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2044_ = v___x_2032_;
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v___x_2032_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_a_2042_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
else
{
lean_dec_ref(v_x_2007_);
lean_dec_ref(v_F_2005_);
lean_dec(v_fixedPrefixSize_2004_);
lean_dec(v_recFnName_2003_);
return v___x_2024_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object* v_recFnName_2050_, lean_object* v_fixedPrefixSize_2051_, lean_object* v_F_2052_, lean_object* v_e_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_){
_start:
{
uint8_t v___x_2063_; 
v___x_2063_ = l_Lean_Expr_isAppOf(v_e_2053_, v_recFnName_2050_);
if (v___x_2063_ == 0)
{
lean_object* v_dummy_2064_; lean_object* v_nargs_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v_dummy_2064_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
v_nargs_2065_ = l_Lean_Expr_getAppNumArgs(v_e_2053_);
lean_inc(v_nargs_2065_);
v___x_2066_ = lean_mk_array(v_nargs_2065_, v_dummy_2064_);
v___x_2067_ = lean_unsigned_to_nat(1u);
v___x_2068_ = lean_nat_sub(v_nargs_2065_, v___x_2067_);
lean_dec(v_nargs_2065_);
v___x_2069_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(v_recFnName_2050_, v_fixedPrefixSize_2051_, v_F_2052_, v_e_2053_, v___x_2066_, v___x_2068_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_, v_a_2061_);
return v___x_2069_;
}
else
{
lean_object* v___x_2070_; 
v___x_2070_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2050_, v_fixedPrefixSize_2051_, v_F_2052_, v_e_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_, v_a_2061_);
return v___x_2070_;
}
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0));
v___x_2073_ = l_Lean_stringToMessageData(v___x_2072_);
return v___x_2073_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2075_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2));
v___x_2076_ = l_Lean_stringToMessageData(v___x_2075_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(lean_object* v___x_2077_, lean_object* v_b_2078_, lean_object* v_recFnName_2079_, lean_object* v_fixedPrefixSize_2080_, uint8_t v___x_2081_, lean_object* v___x_2082_, lean_object* v_a_2083_, lean_object* v_e_2084_, lean_object* v_xs_2085_, lean_object* v_altBody_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v___x_2103_; uint8_t v___x_2104_; 
v___x_2103_ = lean_array_get_size(v_xs_2085_);
v___x_2104_ = lean_nat_dec_eq(v___x_2103_, v___x_2082_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
lean_dec_ref(v_altBody_2086_);
lean_dec_ref(v_xs_2085_);
lean_dec(v_fixedPrefixSize_2080_);
lean_dec(v_recFnName_2079_);
v___x_2105_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1);
v___x_2106_ = l_Lean_indentExpr(v_a_2083_);
v___x_2107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2105_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3);
v___x_2109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2107_);
lean_ctor_set(v___x_2109_, 1, v___x_2108_);
v___x_2110_ = l_Lean_indentExpr(v_e_2084_);
v___x_2111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_2111_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2112_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2112_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
else
{
lean_dec_ref(v_e_2084_);
lean_dec_ref(v_a_2083_);
goto v___jp_2096_;
}
v___jp_2096_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2097_ = lean_array_get_borrowed(v___x_2077_, v_xs_2085_, v_b_2078_);
lean_inc(v___x_2097_);
v___x_2098_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2079_, v_fixedPrefixSize_2080_, v___x_2097_, v_altBody_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; uint8_t v___x_2100_; uint8_t v___x_2101_; lean_object* v___x_2102_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
v___x_2100_ = 0;
v___x_2101_ = 1;
v___x_2102_ = l_Lean_Meta_mkLambdaFVars(v_xs_2085_, v_a_2099_, v___x_2100_, v___x_2081_, v___x_2100_, v___x_2081_, v___x_2101_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
return v___x_2102_;
}
else
{
lean_dec_ref(v_xs_2085_);
return v___x_2098_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed(lean_object** _args){
lean_object* v___x_2121_ = _args[0];
lean_object* v_b_2122_ = _args[1];
lean_object* v_recFnName_2123_ = _args[2];
lean_object* v_fixedPrefixSize_2124_ = _args[3];
lean_object* v___x_2125_ = _args[4];
lean_object* v___x_2126_ = _args[5];
lean_object* v_a_2127_ = _args[6];
lean_object* v_e_2128_ = _args[7];
lean_object* v_xs_2129_ = _args[8];
lean_object* v_altBody_2130_ = _args[9];
lean_object* v___y_2131_ = _args[10];
lean_object* v___y_2132_ = _args[11];
lean_object* v___y_2133_ = _args[12];
lean_object* v___y_2134_ = _args[13];
lean_object* v___y_2135_ = _args[14];
lean_object* v___y_2136_ = _args[15];
lean_object* v___y_2137_ = _args[16];
lean_object* v___y_2138_ = _args[17];
lean_object* v___y_2139_ = _args[18];
_start:
{
uint8_t v___x_57749__boxed_2140_; lean_object* v_res_2141_; 
v___x_57749__boxed_2140_ = lean_unbox(v___x_2125_);
v_res_2141_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(v___x_2121_, v_b_2122_, v_recFnName_2123_, v_fixedPrefixSize_2124_, v___x_57749__boxed_2140_, v___x_2126_, v_a_2127_, v_e_2128_, v_xs_2129_, v_altBody_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec(v___x_2126_);
lean_dec(v_b_2122_);
lean_dec_ref(v___x_2121_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(lean_object* v_recFnName_2142_, lean_object* v_fixedPrefixSize_2143_, lean_object* v_e_2144_, lean_object* v_as_2145_, lean_object* v_bs_2146_, lean_object* v_i_2147_, lean_object* v_cs_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v___x_2158_; uint8_t v___x_2159_; 
v___x_2158_ = lean_array_get_size(v_as_2145_);
v___x_2159_ = lean_nat_dec_lt(v_i_2147_, v___x_2158_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; 
lean_dec(v_i_2147_);
lean_dec_ref(v_e_2144_);
lean_dec(v_fixedPrefixSize_2143_);
lean_dec(v_recFnName_2142_);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_cs_2148_);
return v___x_2160_;
}
else
{
lean_object* v___x_2161_; uint8_t v___x_2162_; 
v___x_2161_ = lean_array_get_size(v_bs_2146_);
v___x_2162_ = lean_nat_dec_lt(v_i_2147_, v___x_2161_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2163_; 
lean_dec(v_i_2147_);
lean_dec_ref(v_e_2144_);
lean_dec(v_fixedPrefixSize_2143_);
lean_dec(v_recFnName_2142_);
v___x_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2163_, 0, v_cs_2148_);
return v___x_2163_;
}
else
{
lean_object* v___x_2164_; lean_object* v_a_2165_; lean_object* v_b_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___f_2170_; uint8_t v___x_2171_; lean_object* v___x_2172_; 
v___x_2164_ = l_Lean_instInhabitedExpr;
v_a_2165_ = lean_array_fget_borrowed(v_as_2145_, v_i_2147_);
v_b_2166_ = lean_array_fget_borrowed(v_bs_2146_, v_i_2147_);
v___x_2167_ = lean_unsigned_to_nat(1u);
v___x_2168_ = lean_nat_add(v_b_2166_, v___x_2167_);
v___x_2169_ = lean_box(v___x_2162_);
lean_inc_ref(v_e_2144_);
lean_inc_n(v_a_2165_, 2);
lean_inc(v___x_2168_);
lean_inc(v_fixedPrefixSize_2143_);
lean_inc(v_recFnName_2142_);
lean_inc(v_b_2166_);
v___f_2170_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed), 19, 8);
lean_closure_set(v___f_2170_, 0, v___x_2164_);
lean_closure_set(v___f_2170_, 1, v_b_2166_);
lean_closure_set(v___f_2170_, 2, v_recFnName_2142_);
lean_closure_set(v___f_2170_, 3, v_fixedPrefixSize_2143_);
lean_closure_set(v___f_2170_, 4, v___x_2169_);
lean_closure_set(v___f_2170_, 5, v___x_2168_);
lean_closure_set(v___f_2170_, 6, v_a_2165_);
lean_closure_set(v___f_2170_, 7, v_e_2144_);
v___x_2171_ = 0;
v___x_2172_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_a_2165_, v___x_2168_, v___f_2170_, v___x_2171_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref_known(v___x_2172_, 1);
v___x_2174_ = lean_nat_add(v_i_2147_, v___x_2167_);
lean_dec(v_i_2147_);
v___x_2175_ = lean_array_push(v_cs_2148_, v_a_2173_);
v_i_2147_ = v___x_2174_;
v_cs_2148_ = v___x_2175_;
goto _start;
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
lean_dec_ref(v_cs_2148_);
lean_dec(v_i_2147_);
lean_dec_ref(v_e_2144_);
lean_dec(v_fixedPrefixSize_2143_);
lean_dec(v_recFnName_2142_);
v_a_2177_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2172_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2172_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object* v_recFnName_2185_, lean_object* v_fixedPrefixSize_2186_, lean_object* v_F_2187_, lean_object* v_e_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_){
_start:
{
switch(lean_obj_tag(v_e_2188_))
{
case 6:
{
lean_object* v_binderName_2198_; lean_object* v_binderType_2199_; lean_object* v_body_2200_; uint8_t v_binderInfo_2201_; lean_object* v___f_2202_; lean_object* v___x_2203_; 
v_binderName_2198_ = lean_ctor_get(v_e_2188_, 0);
lean_inc(v_binderName_2198_);
v_binderType_2199_ = lean_ctor_get(v_e_2188_, 1);
lean_inc_ref(v_binderType_2199_);
v_body_2200_ = lean_ctor_get(v_e_2188_, 2);
lean_inc_ref(v_body_2200_);
v_binderInfo_2201_ = lean_ctor_get_uint8(v_e_2188_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2188_, 3);
lean_inc_ref(v_F_2187_);
lean_inc(v_fixedPrefixSize_2186_);
lean_inc(v_recFnName_2185_);
v___f_2202_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed), 14, 4);
lean_closure_set(v___f_2202_, 0, v_body_2200_);
lean_closure_set(v___f_2202_, 1, v_recFnName_2185_);
lean_closure_set(v___f_2202_, 2, v_fixedPrefixSize_2186_);
lean_closure_set(v___f_2202_, 3, v_F_2187_);
v___x_2203_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_binderType_2199_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; uint8_t v___x_2205_; lean_object* v___x_2206_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_a_2204_);
lean_dec_ref_known(v___x_2203_, 1);
v___x_2205_ = 0;
v___x_2206_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_binderName_2198_, v_binderInfo_2201_, v_a_2204_, v___f_2202_, v___x_2205_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
return v___x_2206_;
}
else
{
lean_dec_ref(v___f_2202_);
lean_dec(v_binderName_2198_);
return v___x_2203_;
}
}
case 7:
{
lean_object* v_binderName_2207_; lean_object* v_binderType_2208_; lean_object* v_body_2209_; uint8_t v_binderInfo_2210_; lean_object* v___f_2211_; lean_object* v___x_2212_; 
v_binderName_2207_ = lean_ctor_get(v_e_2188_, 0);
lean_inc(v_binderName_2207_);
v_binderType_2208_ = lean_ctor_get(v_e_2188_, 1);
lean_inc_ref(v_binderType_2208_);
v_body_2209_ = lean_ctor_get(v_e_2188_, 2);
lean_inc_ref(v_body_2209_);
v_binderInfo_2210_ = lean_ctor_get_uint8(v_e_2188_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2188_, 3);
lean_inc_ref(v_F_2187_);
lean_inc(v_fixedPrefixSize_2186_);
lean_inc(v_recFnName_2185_);
v___f_2211_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed), 14, 4);
lean_closure_set(v___f_2211_, 0, v_body_2209_);
lean_closure_set(v___f_2211_, 1, v_recFnName_2185_);
lean_closure_set(v___f_2211_, 2, v_fixedPrefixSize_2186_);
lean_closure_set(v___f_2211_, 3, v_F_2187_);
v___x_2212_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_binderType_2208_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; uint8_t v___x_2214_; lean_object* v___x_2215_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2213_);
lean_dec_ref_known(v___x_2212_, 1);
v___x_2214_ = 0;
v___x_2215_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_binderName_2207_, v_binderInfo_2210_, v_a_2213_, v___f_2211_, v___x_2214_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
return v___x_2215_;
}
else
{
lean_dec_ref(v___f_2211_);
lean_dec(v_binderName_2207_);
return v___x_2212_;
}
}
case 8:
{
lean_object* v_declName_2216_; lean_object* v_type_2217_; lean_object* v_value_2218_; lean_object* v_body_2219_; uint8_t v_nondep_2220_; lean_object* v___f_2221_; lean_object* v___x_2222_; 
v_declName_2216_ = lean_ctor_get(v_e_2188_, 0);
lean_inc(v_declName_2216_);
v_type_2217_ = lean_ctor_get(v_e_2188_, 1);
lean_inc_ref(v_type_2217_);
v_value_2218_ = lean_ctor_get(v_e_2188_, 2);
lean_inc_ref(v_value_2218_);
v_body_2219_ = lean_ctor_get(v_e_2188_, 3);
lean_inc_ref(v_body_2219_);
v_nondep_2220_ = lean_ctor_get_uint8(v_e_2188_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2188_, 4);
lean_inc_ref_n(v_F_2187_, 2);
lean_inc_n(v_fixedPrefixSize_2186_, 2);
lean_inc_n(v_recFnName_2185_, 2);
v___f_2221_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed), 14, 4);
lean_closure_set(v___f_2221_, 0, v_body_2219_);
lean_closure_set(v___f_2221_, 1, v_recFnName_2185_);
lean_closure_set(v___f_2221_, 2, v_fixedPrefixSize_2186_);
lean_closure_set(v___f_2221_, 3, v_F_2187_);
v___x_2222_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_type_2217_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2223_; lean_object* v___x_2224_; 
v_a_2223_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_a_2223_);
lean_dec_ref_known(v___x_2222_, 1);
v___x_2224_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_value_2218_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; uint8_t v___x_2226_; uint8_t v___x_2227_; lean_object* v___x_2228_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___x_2224_, 1);
v___x_2226_ = 0;
v___x_2227_ = 0;
v___x_2228_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(v_declName_2216_, v_a_2223_, v_a_2225_, v___f_2221_, v_nondep_2220_, v___x_2226_, v___x_2227_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
return v___x_2228_;
}
else
{
lean_dec(v_a_2223_);
lean_dec_ref(v___f_2221_);
lean_dec(v_declName_2216_);
return v___x_2224_;
}
}
else
{
lean_dec_ref(v___f_2221_);
lean_dec_ref(v_value_2218_);
lean_dec(v_declName_2216_);
lean_dec_ref(v_F_2187_);
lean_dec(v_fixedPrefixSize_2186_);
lean_dec(v_recFnName_2185_);
return v___x_2222_;
}
}
case 10:
{
lean_object* v_data_2229_; lean_object* v_expr_2230_; lean_object* v___x_2231_; 
v_data_2229_ = lean_ctor_get(v_e_2188_, 0);
lean_inc(v_data_2229_);
v_expr_2230_ = lean_ctor_get(v_e_2188_, 1);
lean_inc_ref(v_expr_2230_);
v___x_2231_ = l_Lean_getRecAppSyntax_x3f(v_e_2188_);
lean_dec_ref_known(v_e_2188_, 2);
if (lean_obj_tag(v___x_2231_) == 1)
{
lean_object* v_val_2232_; lean_object* v_toCold_2233_; lean_object* v_currRecDepth_2234_; lean_object* v_ref_2235_; uint8_t v_diag_2236_; uint8_t v_suppressElabErrors_2237_; lean_object* v_ref_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
lean_dec(v_data_2229_);
v_val_2232_ = lean_ctor_get(v___x_2231_, 0);
lean_inc(v_val_2232_);
lean_dec_ref_known(v___x_2231_, 1);
v_toCold_2233_ = lean_ctor_get(v_a_2195_, 0);
v_currRecDepth_2234_ = lean_ctor_get(v_a_2195_, 1);
v_ref_2235_ = lean_ctor_get(v_a_2195_, 2);
v_diag_2236_ = lean_ctor_get_uint8(v_a_2195_, sizeof(void*)*3);
v_suppressElabErrors_2237_ = lean_ctor_get_uint8(v_a_2195_, sizeof(void*)*3 + 1);
v_ref_2238_ = l_Lean_replaceRef(v_val_2232_, v_ref_2235_);
lean_dec(v_val_2232_);
lean_inc(v_currRecDepth_2234_);
lean_inc_ref(v_toCold_2233_);
v___x_2239_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2239_, 0, v_toCold_2233_);
lean_ctor_set(v___x_2239_, 1, v_currRecDepth_2234_);
lean_ctor_set(v___x_2239_, 2, v_ref_2238_);
lean_ctor_set_uint8(v___x_2239_, sizeof(void*)*3, v_diag_2236_);
lean_ctor_set_uint8(v___x_2239_, sizeof(void*)*3 + 1, v_suppressElabErrors_2237_);
v___x_2240_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_expr_2230_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v___x_2239_, v_a_2196_);
lean_dec_ref_known(v___x_2239_, 3);
return v___x_2240_;
}
else
{
lean_object* v___x_2241_; 
lean_dec(v___x_2231_);
v___x_2241_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_expr_2230_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2250_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2244_ = v___x_2241_;
v_isShared_2245_ = v_isSharedCheck_2250_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2241_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2250_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2246_; lean_object* v___x_2248_; 
v___x_2246_ = l_Lean_mkMData(v_data_2229_, v_a_2242_);
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 0, v___x_2246_);
v___x_2248_ = v___x_2244_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v___x_2246_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
else
{
lean_dec(v_data_2229_);
return v___x_2241_;
}
}
}
case 11:
{
lean_object* v_typeName_2251_; lean_object* v_idx_2252_; lean_object* v_struct_2253_; lean_object* v___x_2254_; 
v_typeName_2251_ = lean_ctor_get(v_e_2188_, 0);
lean_inc(v_typeName_2251_);
v_idx_2252_ = lean_ctor_get(v_e_2188_, 1);
lean_inc(v_idx_2252_);
v_struct_2253_ = lean_ctor_get(v_e_2188_, 2);
lean_inc_ref(v_struct_2253_);
lean_dec_ref_known(v_e_2188_, 3);
v___x_2254_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_struct_2253_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2263_; 
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2263_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2257_ = v___x_2254_;
v_isShared_2258_ = v_isSharedCheck_2263_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2254_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2263_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2259_; lean_object* v___x_2261_; 
v___x_2259_ = l_Lean_mkProj(v_typeName_2251_, v_idx_2252_, v_a_2255_);
if (v_isShared_2258_ == 0)
{
lean_ctor_set(v___x_2257_, 0, v___x_2259_);
v___x_2261_ = v___x_2257_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v___x_2259_);
v___x_2261_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
return v___x_2261_;
}
}
}
else
{
lean_dec(v_idx_2252_);
lean_dec(v_typeName_2251_);
return v___x_2254_;
}
}
case 4:
{
uint8_t v___x_2264_; 
v___x_2264_ = l_Lean_Expr_isConstOf(v_e_2188_, v_recFnName_2185_);
if (v___x_2264_ == 0)
{
lean_object* v___x_2265_; 
lean_dec_ref(v_F_2187_);
lean_dec(v_fixedPrefixSize_2186_);
lean_dec(v_recFnName_2185_);
v___x_2265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2265_, 0, v_e_2188_);
return v___x_2265_;
}
else
{
lean_object* v___x_2266_; 
v___x_2266_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_e_2188_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
return v___x_2266_;
}
}
case 5:
{
uint8_t v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = 1;
lean_inc_ref(v_e_2188_);
v___x_2268_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(v_e_2188_, v___x_2267_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v___x_2268_, 1);
if (lean_obj_tag(v_a_2269_) == 0)
{
lean_object* v___x_2270_; 
v___x_2270_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_e_2188_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
return v___x_2270_;
}
else
{
lean_object* v_val_2271_; lean_object* v___x_2272_; 
v_val_2271_ = lean_ctor_get(v_a_2269_, 0);
lean_inc(v_val_2271_);
lean_dec_ref_known(v_a_2269_, 1);
lean_inc_ref(v_F_2187_);
v___x_2272_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_val_2271_, v_F_2187_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2272_, 1);
if (lean_obj_tag(v_a_2273_) == 1)
{
lean_object* v_val_2274_; lean_object* v_toMatcherInfo_2275_; lean_object* v_matcherName_2276_; lean_object* v_matcherLevels_2277_; lean_object* v_params_2278_; lean_object* v_motive_2279_; lean_object* v_discrs_2280_; lean_object* v_alts_2281_; lean_object* v_remaining_2282_; lean_object* v___x_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2326_; 
v_val_2274_ = lean_ctor_get(v_a_2273_, 0);
lean_inc(v_val_2274_);
lean_dec_ref_known(v_a_2273_, 1);
v_toMatcherInfo_2275_ = lean_ctor_get(v_val_2274_, 0);
lean_inc_ref(v_toMatcherInfo_2275_);
v_matcherName_2276_ = lean_ctor_get(v_val_2274_, 1);
lean_inc(v_matcherName_2276_);
v_matcherLevels_2277_ = lean_ctor_get(v_val_2274_, 2);
lean_inc_ref(v_matcherLevels_2277_);
v_params_2278_ = lean_ctor_get(v_val_2274_, 3);
lean_inc_ref(v_params_2278_);
v_motive_2279_ = lean_ctor_get(v_val_2274_, 4);
lean_inc_ref(v_motive_2279_);
v_discrs_2280_ = lean_ctor_get(v_val_2274_, 5);
lean_inc_ref(v_discrs_2280_);
v_alts_2281_ = lean_ctor_get(v_val_2274_, 6);
lean_inc_ref(v_alts_2281_);
v_remaining_2282_ = lean_ctor_get(v_val_2274_, 7);
lean_inc_ref(v_remaining_2282_);
v___x_2283_ = l_Lean_Meta_MatcherApp_altNumParams(v_val_2274_);
v_isSharedCheck_2326_ = !lean_is_exclusive(v_val_2274_);
if (v_isSharedCheck_2326_ == 0)
{
lean_object* v_unused_2327_; lean_object* v_unused_2328_; lean_object* v_unused_2329_; lean_object* v_unused_2330_; lean_object* v_unused_2331_; lean_object* v_unused_2332_; lean_object* v_unused_2333_; lean_object* v_unused_2334_; 
v_unused_2327_ = lean_ctor_get(v_val_2274_, 7);
lean_dec(v_unused_2327_);
v_unused_2328_ = lean_ctor_get(v_val_2274_, 6);
lean_dec(v_unused_2328_);
v_unused_2329_ = lean_ctor_get(v_val_2274_, 5);
lean_dec(v_unused_2329_);
v_unused_2330_ = lean_ctor_get(v_val_2274_, 4);
lean_dec(v_unused_2330_);
v_unused_2331_ = lean_ctor_get(v_val_2274_, 3);
lean_dec(v_unused_2331_);
v_unused_2332_ = lean_ctor_get(v_val_2274_, 2);
lean_dec(v_unused_2332_);
v_unused_2333_ = lean_ctor_get(v_val_2274_, 1);
lean_dec(v_unused_2333_);
v_unused_2334_ = lean_ctor_get(v_val_2274_, 0);
lean_dec(v_unused_2334_);
v___x_2285_ = v_val_2274_;
v_isShared_2286_ = v_isSharedCheck_2326_;
goto v_resetjp_2284_;
}
else
{
lean_dec(v_val_2274_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2326_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2287_ = lean_unsigned_to_nat(0u);
v___x_2288_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
lean_inc(v_fixedPrefixSize_2186_);
lean_inc(v_recFnName_2185_);
v___x_2289_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_e_2188_, v_alts_2281_, v___x_2283_, v___x_2287_, v___x_2288_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
lean_dec_ref(v___x_2283_);
lean_dec_ref(v_alts_2281_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; size_t v_sz_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_54781__overap_2296_; lean_object* v___x_2297_; 
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2289_, 1);
v_sz_2291_ = lean_array_size(v_discrs_2280_);
v___x_2292_ = l_unsafeCast___redArg(v_discrs_2280_);
lean_dec_ref(v_discrs_2280_);
v___x_2293_ = lean_box_usize(v_sz_2291_);
v___x_2294_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed__const__1));
v___x_2295_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed), 15, 6);
lean_closure_set(v___x_2295_, 0, v_recFnName_2185_);
lean_closure_set(v___x_2295_, 1, v_fixedPrefixSize_2186_);
lean_closure_set(v___x_2295_, 2, v_F_2187_);
lean_closure_set(v___x_2295_, 3, v___x_2293_);
lean_closure_set(v___x_2295_, 4, v___x_2294_);
lean_closure_set(v___x_2295_, 5, v___x_2292_);
v___x_54781__overap_2296_ = l_unsafeCast___redArg(v___x_2295_);
lean_dec_ref(v___x_2295_);
lean_inc(v_a_2196_);
lean_inc_ref(v_a_2195_);
lean_inc(v_a_2194_);
lean_inc_ref(v_a_2193_);
lean_inc(v_a_2192_);
lean_inc_ref(v_a_2191_);
lean_inc(v_a_2190_);
lean_inc(v_a_2189_);
v___x_2297_ = lean_apply_9(v___x_54781__overap_2296_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_, lean_box(0));
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2309_; 
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2300_ = v___x_2297_;
v_isShared_2301_ = v_isSharedCheck_2309_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2297_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2309_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 6, v_a_2290_);
lean_ctor_set(v___x_2285_, 5, v_a_2298_);
v___x_2303_ = v___x_2285_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_toMatcherInfo_2275_);
lean_ctor_set(v_reuseFailAlloc_2308_, 1, v_matcherName_2276_);
lean_ctor_set(v_reuseFailAlloc_2308_, 2, v_matcherLevels_2277_);
lean_ctor_set(v_reuseFailAlloc_2308_, 3, v_params_2278_);
lean_ctor_set(v_reuseFailAlloc_2308_, 4, v_motive_2279_);
lean_ctor_set(v_reuseFailAlloc_2308_, 5, v_a_2298_);
lean_ctor_set(v_reuseFailAlloc_2308_, 6, v_a_2290_);
lean_ctor_set(v_reuseFailAlloc_2308_, 7, v_remaining_2282_);
v___x_2303_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
lean_object* v___x_2304_; lean_object* v___x_2306_; 
v___x_2304_ = l_Lean_Meta_MatcherApp_toExpr(v___x_2303_);
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 0, v___x_2304_);
v___x_2306_ = v___x_2300_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v___x_2304_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
lean_dec(v_a_2290_);
lean_del_object(v___x_2285_);
lean_dec_ref(v_remaining_2282_);
lean_dec_ref(v_motive_2279_);
lean_dec_ref(v_params_2278_);
lean_dec_ref(v_matcherLevels_2277_);
lean_dec(v_matcherName_2276_);
lean_dec_ref(v_toMatcherInfo_2275_);
v_a_2310_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2312_ = v___x_2297_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2297_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
else
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
lean_del_object(v___x_2285_);
lean_dec_ref(v_remaining_2282_);
lean_dec_ref(v_discrs_2280_);
lean_dec_ref(v_motive_2279_);
lean_dec_ref(v_params_2278_);
lean_dec_ref(v_matcherLevels_2277_);
lean_dec(v_matcherName_2276_);
lean_dec_ref(v_toMatcherInfo_2275_);
lean_dec_ref(v_F_2187_);
lean_dec(v_fixedPrefixSize_2186_);
lean_dec(v_recFnName_2185_);
v_a_2318_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2320_ = v___x_2289_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2289_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2318_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
}
}
else
{
lean_object* v___x_2335_; 
lean_dec(v_a_2273_);
v___x_2335_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2185_, v_fixedPrefixSize_2186_, v_F_2187_, v_e_2188_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
return v___x_2335_;
}
}
else
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
lean_dec_ref_known(v_e_2188_, 2);
lean_dec_ref(v_F_2187_);
lean_dec(v_fixedPrefixSize_2186_);
lean_dec(v_recFnName_2185_);
v_a_2336_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2272_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2272_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2341_; 
if (v_isShared_2339_ == 0)
{
v___x_2341_ = v___x_2338_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2336_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
lean_dec_ref_known(v_e_2188_, 2);
lean_dec_ref(v_F_2187_);
lean_dec(v_fixedPrefixSize_2186_);
lean_dec(v_recFnName_2185_);
v_a_2344_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2268_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2268_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
default: 
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
lean_dec_ref(v_F_2187_);
lean_dec(v_fixedPrefixSize_2186_);
v___x_2352_ = lean_unsigned_to_nat(1u);
v___x_2353_ = lean_mk_empty_array_with_capacity(v___x_2352_);
v___x_2354_ = lean_array_push(v___x_2353_, v_recFnName_2185_);
lean_inc_ref(v_e_2188_);
v___x_2355_ = l_Lean_Elab_ensureNoRecFn(v___x_2354_, v_e_2188_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2362_ == 0)
{
lean_object* v_unused_2363_; 
v_unused_2363_ = lean_ctor_get(v___x_2355_, 0);
lean_dec(v_unused_2363_);
v___x_2357_ = v___x_2355_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_dec(v___x_2355_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 0, v_e_2188_);
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_e_2188_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
else
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
lean_dec_ref(v_e_2188_);
v_a_2364_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v___x_2355_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2355_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
if (v_isShared_2367_ == 0)
{
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_a_2364_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object* v_recFnName_2372_, lean_object* v_fixedPrefixSize_2373_, lean_object* v_F_2374_, lean_object* v_e_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_){
_start:
{
lean_object* v___y_2386_; lean_object* v___y_2387_; lean_object* v___x_2404_; 
lean_inc_ref(v_e_2375_);
lean_inc(v_recFnName_2372_);
v___x_2404_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_2372_, v_e_2375_, v_a_2376_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2493_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2407_ = v___x_2404_;
v_isShared_2408_ = v_isSharedCheck_2493_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2404_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2493_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
uint8_t v___x_2409_; 
v___x_2409_ = lean_unbox(v_a_2405_);
lean_dec(v_a_2405_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2411_; 
lean_dec_ref(v_F_2374_);
lean_dec(v_fixedPrefixSize_2373_);
lean_dec(v_recFnName_2372_);
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 0, v_e_2375_);
v___x_2411_ = v___x_2407_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_e_2375_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
else
{
uint8_t v___x_2413_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___y_2420_; lean_object* v___y_2421_; lean_object* v___y_2422_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
lean_del_object(v___x_2407_);
v___x_2413_ = 0;
v___x_2470_ = lean_st_ref_get(v_a_2377_);
v___x_2471_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v___x_2470_, v_e_2375_);
lean_dec(v___x_2470_);
if (lean_obj_tag(v___x_2471_) == 1)
{
lean_object* v_val_2472_; lean_object* v_fst_2473_; lean_object* v_snd_2474_; lean_object* v___x_2475_; 
v_val_2472_ = lean_ctor_get(v___x_2471_, 0);
lean_inc(v_val_2472_);
lean_dec_ref_known(v___x_2471_, 1);
v_fst_2473_ = lean_ctor_get(v_val_2472_, 0);
lean_inc(v_fst_2473_);
v_snd_2474_ = lean_ctor_get(v_val_2472_, 1);
lean_inc(v_snd_2474_);
lean_dec(v_val_2472_);
v___x_2475_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_snd_2474_, v_a_2380_);
lean_dec(v_snd_2474_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2484_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2478_ = v___x_2475_;
v_isShared_2479_ = v_isSharedCheck_2484_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2475_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2484_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
uint8_t v___x_2480_; 
v___x_2480_ = lean_unbox(v_a_2476_);
lean_dec(v_a_2476_);
if (v___x_2480_ == 0)
{
lean_del_object(v___x_2478_);
lean_dec(v_fst_2473_);
v___y_2415_ = v_a_2376_;
v___y_2416_ = v_a_2377_;
v___y_2417_ = v_a_2378_;
v___y_2418_ = v_a_2379_;
v___y_2419_ = v_a_2380_;
v___y_2420_ = v_a_2381_;
v___y_2421_ = v_a_2382_;
v___y_2422_ = v_a_2383_;
goto v___jp_2414_;
}
else
{
lean_object* v___x_2482_; 
lean_dec_ref(v_e_2375_);
lean_dec_ref(v_F_2374_);
lean_dec(v_fixedPrefixSize_2373_);
lean_dec(v_recFnName_2372_);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 0, v_fst_2473_);
v___x_2482_ = v___x_2478_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_fst_2473_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
}
else
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
lean_dec(v_fst_2473_);
lean_dec_ref(v_e_2375_);
lean_dec_ref(v_F_2374_);
lean_dec(v_fixedPrefixSize_2373_);
lean_dec(v_recFnName_2372_);
v_a_2485_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2487_ = v___x_2475_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2475_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
else
{
lean_dec(v___x_2471_);
v___y_2415_ = v_a_2376_;
v___y_2416_ = v_a_2377_;
v___y_2417_ = v_a_2378_;
v___y_2418_ = v_a_2379_;
v___y_2419_ = v_a_2380_;
v___y_2420_ = v_a_2381_;
v___y_2421_ = v_a_2382_;
v___y_2422_ = v_a_2383_;
goto v___jp_2414_;
}
v___jp_2414_:
{
lean_object* v___x_2423_; 
lean_inc_ref(v_e_2375_);
v___x_2423_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(v_recFnName_2372_, v_fixedPrefixSize_2373_, v_F_2374_, v_e_2375_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___f_2425_; lean_object* v___x_2426_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc_n(v_a_2424_, 2);
lean_dec_ref_known(v___x_2423_, 1);
lean_inc_ref(v_e_2375_);
v___f_2425_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed), 11, 2);
lean_closure_set(v___f_2425_, 0, v_e_2375_);
lean_closure_set(v___f_2425_, 1, v_a_2424_);
v___x_2426_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2461_; 
v_a_2427_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2429_ = v___x_2426_;
v_isShared_2430_ = v_isSharedCheck_2461_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2426_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2461_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v_toCold_2435_; lean_object* v_options_2436_; lean_object* v___x_2437_; uint8_t v___x_2438_; 
v___x_2431_ = lean_st_ref_take(v___y_2416_);
lean_inc(v_a_2424_);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v_a_2424_);
lean_ctor_set(v___x_2432_, 1, v_a_2427_);
v___x_2433_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(v___x_2431_, v_e_2375_, v___x_2432_);
v___x_2434_ = lean_st_ref_put(v___y_2416_, v___x_2433_);
v_toCold_2435_ = lean_ctor_get(v___y_2421_, 0);
v_options_2436_ = lean_ctor_get(v_toCold_2435_, 2);
v___x_2437_ = l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
v___x_2438_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_options_2436_, v___x_2437_);
if (v___x_2438_ == 0)
{
lean_object* v___x_2440_; 
lean_dec_ref(v___f_2425_);
if (v_isShared_2430_ == 0)
{
lean_ctor_set(v___x_2429_, 0, v_a_2424_);
v___x_2440_ = v___x_2429_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2424_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
else
{
lean_object* v___x_2442_; uint8_t v_transparency_2443_; uint8_t v___x_2444_; uint8_t v___x_2445_; 
lean_del_object(v___x_2429_);
v___x_2442_ = l_Lean_Meta_Context_config(v___y_2419_);
v_transparency_2443_ = lean_ctor_get_uint8(v___x_2442_, 9);
lean_dec_ref(v___x_2442_);
v___x_2444_ = 0;
v___x_2445_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2443_, v___x_2444_);
if (v___x_2445_ == 0)
{
lean_object* v_keyedConfig_2446_; uint8_t v_trackZetaDelta_2447_; lean_object* v_zetaDeltaSet_2448_; lean_object* v_lctx_2449_; lean_object* v_localInstances_2450_; lean_object* v_defEqCtx_x3f_2451_; lean_object* v_synthPendingDepth_2452_; lean_object* v_customCanUnfoldPredicate_x3f_2453_; uint8_t v_univApprox_2454_; uint8_t v_inTypeClassResolution_2455_; uint8_t v_cacheInferType_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
v_keyedConfig_2446_ = lean_ctor_get(v___y_2419_, 0);
v_trackZetaDelta_2447_ = lean_ctor_get_uint8(v___y_2419_, sizeof(void*)*7);
v_zetaDeltaSet_2448_ = lean_ctor_get(v___y_2419_, 1);
v_lctx_2449_ = lean_ctor_get(v___y_2419_, 2);
v_localInstances_2450_ = lean_ctor_get(v___y_2419_, 3);
v_defEqCtx_x3f_2451_ = lean_ctor_get(v___y_2419_, 4);
v_synthPendingDepth_2452_ = lean_ctor_get(v___y_2419_, 5);
v_customCanUnfoldPredicate_x3f_2453_ = lean_ctor_get(v___y_2419_, 6);
v_univApprox_2454_ = lean_ctor_get_uint8(v___y_2419_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2455_ = lean_ctor_get_uint8(v___y_2419_, sizeof(void*)*7 + 2);
v_cacheInferType_2456_ = lean_ctor_get_uint8(v___y_2419_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2446_);
v___x_2457_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2444_, v_keyedConfig_2446_);
lean_inc(v_customCanUnfoldPredicate_x3f_2453_);
lean_inc(v_synthPendingDepth_2452_);
lean_inc(v_defEqCtx_x3f_2451_);
lean_inc_ref(v_localInstances_2450_);
lean_inc_ref(v_lctx_2449_);
lean_inc(v_zetaDeltaSet_2448_);
v___x_2458_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2458_, 0, v___x_2457_);
lean_ctor_set(v___x_2458_, 1, v_zetaDeltaSet_2448_);
lean_ctor_set(v___x_2458_, 2, v_lctx_2449_);
lean_ctor_set(v___x_2458_, 3, v_localInstances_2450_);
lean_ctor_set(v___x_2458_, 4, v_defEqCtx_x3f_2451_);
lean_ctor_set(v___x_2458_, 5, v_synthPendingDepth_2452_);
lean_ctor_set(v___x_2458_, 6, v_customCanUnfoldPredicate_x3f_2453_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*7, v_trackZetaDelta_2447_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*7 + 1, v_univApprox_2454_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2455_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*7 + 3, v_cacheInferType_2456_);
v___x_2459_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v___f_2425_, v___x_2413_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___x_2458_, v___y_2420_, v___y_2421_, v___y_2422_);
lean_dec_ref_known(v___x_2458_, 7);
v___y_2386_ = v_a_2424_;
v___y_2387_ = v___x_2459_;
goto v___jp_2385_;
}
else
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v___f_2425_, v___x_2413_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
v___y_2386_ = v_a_2424_;
v___y_2387_ = v___x_2460_;
goto v___jp_2385_;
}
}
}
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
lean_dec_ref(v___f_2425_);
lean_dec(v_a_2424_);
lean_dec_ref(v_e_2375_);
v_a_2462_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2464_ = v___x_2426_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2426_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2462_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
else
{
lean_dec_ref(v_e_2375_);
return v___x_2423_;
}
}
}
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2501_; 
lean_dec_ref(v_e_2375_);
lean_dec_ref(v_F_2374_);
lean_dec(v_fixedPrefixSize_2373_);
lean_dec(v_recFnName_2372_);
v_a_2494_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2496_ = v___x_2404_;
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2404_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
v___jp_2385_:
{
if (lean_obj_tag(v___y_2387_) == 0)
{
lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2394_; 
v_isSharedCheck_2394_ = !lean_is_exclusive(v___y_2387_);
if (v_isSharedCheck_2394_ == 0)
{
lean_object* v_unused_2395_; 
v_unused_2395_ = lean_ctor_get(v___y_2387_, 0);
lean_dec(v_unused_2395_);
v___x_2389_ = v___y_2387_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_dec(v___y_2387_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2392_; 
if (v_isShared_2390_ == 0)
{
lean_ctor_set(v___x_2389_, 0, v___y_2386_);
v___x_2392_ = v___x_2389_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v___y_2386_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
else
{
lean_object* v_a_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2403_; 
lean_dec_ref(v___y_2386_);
v_a_2396_ = lean_ctor_get(v___y_2387_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v___y_2387_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2398_ = v___y_2387_;
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_a_2396_);
lean_dec(v___y_2387_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2401_; 
if (v_isShared_2399_ == 0)
{
v___x_2401_ = v___x_2398_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_a_2396_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object* v_body_2502_, lean_object* v_recFnName_2503_, lean_object* v_fixedPrefixSize_2504_, lean_object* v_F_2505_, lean_object* v_x_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = lean_expr_instantiate1(v_body_2502_, v_x_2506_);
v___x_2517_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2503_, v_fixedPrefixSize_2504_, v_F_2505_, v___x_2516_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp___boxed(lean_object* v_recFnName_2518_, lean_object* v_fixedPrefixSize_2519_, lean_object* v_F_2520_, lean_object* v_e_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2518_, v_fixedPrefixSize_2519_, v_F_2520_, v_e_2521_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_);
lean_dec(v_a_2529_);
lean_dec_ref(v_a_2528_);
lean_dec(v_a_2527_);
lean_dec_ref(v_a_2526_);
lean_dec(v_a_2525_);
lean_dec_ref(v_a_2524_);
lean_dec(v_a_2523_);
lean_dec(v_a_2522_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16___boxed(lean_object* v_recFnName_2532_, lean_object* v_fixedPrefixSize_2533_, lean_object* v_F_2534_, lean_object* v_x_2535_, lean_object* v_x_2536_, lean_object* v_x_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(v_recFnName_2532_, v_fixedPrefixSize_2533_, v_F_2534_, v_x_2535_, v_x_2536_, v_x_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec_ref(v___y_2542_);
lean_dec(v___y_2541_);
lean_dec_ref(v___y_2540_);
lean_dec(v___y_2539_);
lean_dec(v___y_2538_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___boxed(lean_object* v_recFnName_2548_, lean_object* v_fixedPrefixSize_2549_, lean_object* v_e_2550_, lean_object* v_as_2551_, lean_object* v_bs_2552_, lean_object* v_i_2553_, lean_object* v_cs_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(v_recFnName_2548_, v_fixedPrefixSize_2549_, v_e_2550_, v_as_2551_, v_bs_2552_, v_i_2553_, v_cs_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_);
lean_dec(v___y_2562_);
lean_dec_ref(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec_ref(v___y_2559_);
lean_dec(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec_ref(v_bs_2552_);
lean_dec_ref(v_as_2551_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___boxed(lean_object* v_recFnName_2565_, lean_object* v_fixedPrefixSize_2566_, lean_object* v_F_2567_, lean_object* v_e_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_){
_start:
{
lean_object* v_res_2578_; 
v_res_2578_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2565_, v_fixedPrefixSize_2566_, v_F_2567_, v_e_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
lean_dec(v_a_2576_);
lean_dec_ref(v_a_2575_);
lean_dec(v_a_2574_);
lean_dec_ref(v_a_2573_);
lean_dec(v_a_2572_);
lean_dec_ref(v_a_2571_);
lean_dec(v_a_2570_);
lean_dec(v_a_2569_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___boxed(lean_object* v_recFnName_2579_, lean_object* v_fixedPrefixSize_2580_, lean_object* v_F_2581_, lean_object* v_e_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2579_, v_fixedPrefixSize_2580_, v_F_2581_, v_e_2582_, v_a_2583_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, v_a_2588_, v_a_2589_, v_a_2590_);
lean_dec(v_a_2590_);
lean_dec_ref(v_a_2589_);
lean_dec(v_a_2588_);
lean_dec_ref(v_a_2587_);
lean_dec(v_a_2586_);
lean_dec_ref(v_a_2585_);
lean_dec(v_a_2584_);
lean_dec(v_a_2583_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___boxed(lean_object* v_recFnName_2593_, lean_object* v_fixedPrefixSize_2594_, lean_object* v_F_2595_, lean_object* v_e_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(v_recFnName_2593_, v_fixedPrefixSize_2594_, v_F_2595_, v_e_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
lean_dec(v_a_2604_);
lean_dec_ref(v_a_2603_);
lean_dec(v_a_2602_);
lean_dec_ref(v_a_2601_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
lean_dec(v_a_2598_);
lean_dec(v_a_2597_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(lean_object* v_00_u03b1_2607_, lean_object* v_k_2608_, uint8_t v_allowLevelAssignments_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_){
_start:
{
lean_object* v___x_2619_; 
v___x_2619_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v_k_2608_, v_allowLevelAssignments_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___boxed(lean_object* v_00_u03b1_2620_, lean_object* v_k_2621_, lean_object* v_allowLevelAssignments_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2632_; lean_object* v_res_2633_; 
v_allowLevelAssignments_boxed_2632_ = lean_unbox(v_allowLevelAssignments_2622_);
v_res_2633_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(v_00_u03b1_2620_, v_k_2621_, v_allowLevelAssignments_boxed_2632_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec(v___y_2624_);
lean_dec(v___y_2623_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(lean_object* v_00_u03b1_2634_, lean_object* v_name_2635_, uint8_t v_bi_2636_, lean_object* v_type_2637_, lean_object* v_k_2638_, uint8_t v_kind_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v___x_2649_; 
v___x_2649_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_name_2635_, v_bi_2636_, v_type_2637_, v_k_2638_, v_kind_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___boxed(lean_object* v_00_u03b1_2650_, lean_object* v_name_2651_, lean_object* v_bi_2652_, lean_object* v_type_2653_, lean_object* v_k_2654_, lean_object* v_kind_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_){
_start:
{
uint8_t v_bi_boxed_2665_; uint8_t v_kind_boxed_2666_; lean_object* v_res_2667_; 
v_bi_boxed_2665_ = lean_unbox(v_bi_2652_);
v_kind_boxed_2666_ = lean_unbox(v_kind_2655_);
v_res_2667_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(v_00_u03b1_2650_, v_name_2651_, v_bi_boxed_2665_, v_type_2653_, v_k_2654_, v_kind_boxed_2666_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
lean_dec(v___y_2657_);
lean_dec(v___y_2656_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(lean_object* v_00_u03b1_2668_, lean_object* v_e_2669_, lean_object* v_maxFVars_2670_, lean_object* v_k_2671_, uint8_t v_cleanupAnnotations_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_e_2669_, v_maxFVars_2670_, v_k_2671_, v_cleanupAnnotations_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___boxed(lean_object* v_00_u03b1_2683_, lean_object* v_e_2684_, lean_object* v_maxFVars_2685_, lean_object* v_k_2686_, lean_object* v_cleanupAnnotations_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2697_; lean_object* v_res_2698_; 
v_cleanupAnnotations_boxed_2697_ = lean_unbox(v_cleanupAnnotations_2687_);
v_res_2698_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(v_00_u03b1_2683_, v_e_2684_, v_maxFVars_2685_, v_k_2686_, v_cleanupAnnotations_boxed_2697_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
lean_dec(v___y_2695_);
lean_dec_ref(v___y_2694_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec(v___y_2688_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object* v_inst_2699_, lean_object* v_R_2700_, lean_object* v_a_2701_, lean_object* v_b_2702_){
_start:
{
lean_object* v___x_2703_; 
v___x_2703_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(v_a_2701_, v_b_2702_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object* v_cls_2704_, lean_object* v_msg_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_2704_, v_msg_2705_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object* v_cls_2716_, lean_object* v_msg_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(v_cls_2716_, v_msg_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec(v___y_2718_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4(lean_object* v_00_u03b2_2728_, lean_object* v_m_2729_, lean_object* v_a_2730_, lean_object* v_b_2731_){
_start:
{
lean_object* v___x_2732_; 
v___x_2732_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(v_m_2729_, v_a_2730_, v_b_2731_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(lean_object* v_00_u03b1_2733_, lean_object* v_msg_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v___x_2744_; 
v___x_2744_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_2734_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___boxed(lean_object* v_00_u03b1_2745_, lean_object* v_msg_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(v_00_u03b1_2745_, v_msg_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec(v___y_2748_);
lean_dec(v___y_2747_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(lean_object* v_00_u03b2_2757_, lean_object* v_m_2758_, lean_object* v_a_2759_){
_start:
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v_m_2758_, v_a_2759_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___boxed(lean_object* v_00_u03b2_2761_, lean_object* v_m_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(v_00_u03b2_2761_, v_m_2762_, v_a_2763_);
lean_dec_ref(v_a_2763_);
lean_dec_ref(v_m_2762_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(lean_object* v_00_u03b1_2765_, lean_object* v_name_2766_, lean_object* v_type_2767_, lean_object* v_val_2768_, lean_object* v_k_2769_, uint8_t v_nondep_2770_, uint8_t v_kind_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_2766_, v_type_2767_, v_val_2768_, v_k_2769_, v_nondep_2770_, v_kind_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___boxed(lean_object* v_00_u03b1_2782_, lean_object* v_name_2783_, lean_object* v_type_2784_, lean_object* v_val_2785_, lean_object* v_k_2786_, lean_object* v_nondep_2787_, lean_object* v_kind_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
uint8_t v_nondep_boxed_2798_; uint8_t v_kind_boxed_2799_; lean_object* v_res_2800_; 
v_nondep_boxed_2798_ = lean_unbox(v_nondep_2787_);
v_kind_boxed_2799_ = lean_unbox(v_kind_2788_);
v_res_2800_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(v_00_u03b1_2782_, v_name_2783_, v_type_2784_, v_val_2785_, v_k_2786_, v_nondep_boxed_2798_, v_kind_boxed_2799_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
lean_dec(v___y_2796_);
lean_dec_ref(v___y_2795_);
lean_dec(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___y_2790_);
lean_dec(v___y_2789_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(lean_object* v_declName_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_){
_start:
{
lean_object* v___x_2811_; 
v___x_2811_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_2801_, v___y_2809_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___boxed(lean_object* v_declName_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_){
_start:
{
lean_object* v_res_2822_; 
v_res_2822_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(v_declName_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2817_);
lean_dec(v___y_2816_);
lean_dec_ref(v___y_2815_);
lean_dec(v___y_2814_);
lean_dec(v___y_2813_);
return v_res_2822_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(lean_object* v_00_u03b2_2823_, lean_object* v_a_2824_, lean_object* v_x_2825_){
_start:
{
uint8_t v___x_2826_; 
v___x_2826_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_2824_, v_x_2825_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object* v_00_u03b2_2827_, lean_object* v_a_2828_, lean_object* v_x_2829_){
_start:
{
uint8_t v_res_2830_; lean_object* v_r_2831_; 
v_res_2830_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(v_00_u03b2_2827_, v_a_2828_, v_x_2829_);
lean_dec(v_x_2829_);
lean_dec_ref(v_a_2828_);
v_r_2831_ = lean_box(v_res_2830_);
return v_r_2831_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5(lean_object* v_00_u03b2_2832_, lean_object* v_data_2833_){
_start:
{
lean_object* v___x_2834_; 
v___x_2834_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(v_data_2833_);
return v___x_2834_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6(lean_object* v_00_u03b2_2835_, lean_object* v_a_2836_, lean_object* v_b_2837_, lean_object* v_x_2838_){
_start:
{
lean_object* v___x_2839_; 
v___x_2839_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_2836_, v_b_2837_, v_x_2838_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(lean_object* v_00_u03b2_2840_, lean_object* v_a_2841_, lean_object* v_x_2842_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_2841_, v_x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2844_, lean_object* v_a_2845_, lean_object* v_x_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(v_00_u03b2_2844_, v_a_2845_, v_x_2846_);
lean_dec(v_x_2846_);
lean_dec_ref(v_a_2845_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12(lean_object* v_00_u03b2_2848_, lean_object* v_i_2849_, lean_object* v_source_2850_, lean_object* v_target_2851_){
_start:
{
lean_object* v___x_2852_; 
v___x_2852_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(v_i_2849_, v_source_2850_, v_target_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(lean_object* v_00_u03b1_2853_, lean_object* v_constName_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___boxed(lean_object* v_00_u03b1_2865_, lean_object* v_constName_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_){
_start:
{
lean_object* v_res_2876_; 
v_res_2876_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(v_00_u03b1_2865_, v_constName_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_);
lean_dec(v___y_2874_);
lean_dec_ref(v___y_2873_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
lean_dec(v___y_2868_);
lean_dec(v___y_2867_);
return v_res_2876_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22(lean_object* v_00_u03b2_2877_, lean_object* v_x_2878_, lean_object* v_x_2879_){
_start:
{
lean_object* v___x_2880_; 
v___x_2880_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(v_x_2878_, v_x_2879_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(lean_object* v_00_u03b1_2881_, lean_object* v_ref_2882_, lean_object* v_constName_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v___x_2893_; 
v___x_2893_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_2882_, v_constName_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___boxed(lean_object* v_00_u03b1_2894_, lean_object* v_ref_2895_, lean_object* v_constName_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
lean_object* v_res_2906_; 
v_res_2906_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(v_00_u03b1_2894_, v_ref_2895_, v_constName_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec(v_ref_2895_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(lean_object* v_00_u03b1_2907_, lean_object* v_ref_2908_, lean_object* v_msg_2909_, lean_object* v_declHint_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_2908_, v_msg_2909_, v_declHint_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___boxed(lean_object* v_00_u03b1_2921_, lean_object* v_ref_2922_, lean_object* v_msg_2923_, lean_object* v_declHint_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(v_00_u03b1_2921_, v_ref_2922_, v_msg_2923_, v_declHint_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v___y_2930_);
lean_dec_ref(v___y_2929_);
lean_dec(v___y_2928_);
lean_dec_ref(v___y_2927_);
lean_dec(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec(v_ref_2922_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(lean_object* v_msg_2935_, lean_object* v_declHint_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v___x_2946_; 
v___x_2946_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_2935_, v_declHint_2936_, v___y_2944_);
return v___x_2946_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___boxed(lean_object* v_msg_2947_, lean_object* v_declHint_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(v_msg_2947_, v_declHint_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
lean_dec(v___y_2956_);
lean_dec_ref(v___y_2955_);
lean_dec(v___y_2954_);
lean_dec_ref(v___y_2953_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
lean_dec(v___y_2950_);
lean_dec(v___y_2949_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(lean_object* v_00_u03b1_2959_, lean_object* v_ref_2960_, lean_object* v_msg_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
lean_object* v___x_2971_; 
v___x_2971_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_2960_, v_msg_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___boxed(lean_object* v_00_u03b1_2972_, lean_object* v_ref_2973_, lean_object* v_msg_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_){
_start:
{
lean_object* v_res_2984_; 
v_res_2984_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(v_00_u03b1_2972_, v_ref_2973_, v_msg_2974_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec_ref(v___y_2977_);
lean_dec(v___y_2976_);
lean_dec(v___y_2975_);
lean_dec(v_ref_2973_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(lean_object* v_cls_2985_, lean_object* v_msg_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_){
_start:
{
lean_object* v_ref_2992_; lean_object* v___x_2993_; lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3038_; 
v_ref_2992_ = lean_ctor_get(v___y_2989_, 2);
v___x_2993_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_);
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_2996_ = v___x_2993_;
v_isShared_2997_ = v_isSharedCheck_3038_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2993_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3038_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2998_; lean_object* v_traceState_2999_; lean_object* v_env_3000_; lean_object* v_nextMacroScope_3001_; lean_object* v_ngen_3002_; lean_object* v_auxDeclNGen_3003_; lean_object* v_cache_3004_; lean_object* v_messages_3005_; lean_object* v_infoState_3006_; lean_object* v_snapshotTasks_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3037_; 
v___x_2998_ = lean_st_ref_take(v___y_2990_);
v_traceState_2999_ = lean_ctor_get(v___x_2998_, 4);
v_env_3000_ = lean_ctor_get(v___x_2998_, 0);
v_nextMacroScope_3001_ = lean_ctor_get(v___x_2998_, 1);
v_ngen_3002_ = lean_ctor_get(v___x_2998_, 2);
v_auxDeclNGen_3003_ = lean_ctor_get(v___x_2998_, 3);
v_cache_3004_ = lean_ctor_get(v___x_2998_, 5);
v_messages_3005_ = lean_ctor_get(v___x_2998_, 6);
v_infoState_3006_ = lean_ctor_get(v___x_2998_, 7);
v_snapshotTasks_3007_ = lean_ctor_get(v___x_2998_, 8);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3009_ = v___x_2998_;
v_isShared_3010_ = v_isSharedCheck_3037_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_snapshotTasks_3007_);
lean_inc(v_infoState_3006_);
lean_inc(v_messages_3005_);
lean_inc(v_cache_3004_);
lean_inc(v_traceState_2999_);
lean_inc(v_auxDeclNGen_3003_);
lean_inc(v_ngen_3002_);
lean_inc(v_nextMacroScope_3001_);
lean_inc(v_env_3000_);
lean_dec(v___x_2998_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3037_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
uint64_t v_tid_3011_; lean_object* v_traces_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3036_; 
v_tid_3011_ = lean_ctor_get_uint64(v_traceState_2999_, sizeof(void*)*1);
v_traces_3012_ = lean_ctor_get(v_traceState_2999_, 0);
v_isSharedCheck_3036_ = !lean_is_exclusive(v_traceState_2999_);
if (v_isSharedCheck_3036_ == 0)
{
v___x_3014_ = v_traceState_2999_;
v_isShared_3015_ = v_isSharedCheck_3036_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_traces_3012_);
lean_dec(v_traceState_2999_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3036_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3016_; lean_object* v___x_3017_; double v___x_3018_; uint8_t v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3027_; 
v___x_3016_ = lean_box(0);
v___x_3017_ = lean_box(0);
v___x_3018_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0);
v___x_3019_ = 0;
v___x_3020_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1));
v___x_3021_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3021_, 0, v_cls_2985_);
lean_ctor_set(v___x_3021_, 1, v___x_3017_);
lean_ctor_set(v___x_3021_, 2, v___x_3020_);
lean_ctor_set_float(v___x_3021_, sizeof(void*)*3, v___x_3018_);
lean_ctor_set_float(v___x_3021_, sizeof(void*)*3 + 8, v___x_3018_);
lean_ctor_set_uint8(v___x_3021_, sizeof(void*)*3 + 16, v___x_3019_);
v___x_3022_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2));
v___x_3023_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3021_);
lean_ctor_set(v___x_3023_, 1, v_a_2994_);
lean_ctor_set(v___x_3023_, 2, v___x_3022_);
lean_inc(v_ref_2992_);
v___x_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3024_, 0, v_ref_2992_);
lean_ctor_set(v___x_3024_, 1, v___x_3023_);
v___x_3025_ = l_Lean_PersistentArray_push___redArg(v_traces_3012_, v___x_3024_);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 0, v___x_3025_);
v___x_3027_ = v___x_3014_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v___x_3025_);
lean_ctor_set_uint64(v_reuseFailAlloc_3035_, sizeof(void*)*1, v_tid_3011_);
v___x_3027_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
lean_object* v___x_3029_; 
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 4, v___x_3027_);
v___x_3029_ = v___x_3009_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_env_3000_);
lean_ctor_set(v_reuseFailAlloc_3034_, 1, v_nextMacroScope_3001_);
lean_ctor_set(v_reuseFailAlloc_3034_, 2, v_ngen_3002_);
lean_ctor_set(v_reuseFailAlloc_3034_, 3, v_auxDeclNGen_3003_);
lean_ctor_set(v_reuseFailAlloc_3034_, 4, v___x_3027_);
lean_ctor_set(v_reuseFailAlloc_3034_, 5, v_cache_3004_);
lean_ctor_set(v_reuseFailAlloc_3034_, 6, v_messages_3005_);
lean_ctor_set(v_reuseFailAlloc_3034_, 7, v_infoState_3006_);
lean_ctor_set(v_reuseFailAlloc_3034_, 8, v_snapshotTasks_3007_);
v___x_3029_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
lean_object* v___x_3030_; lean_object* v___x_3032_; 
v___x_3030_ = lean_st_ref_put(v___y_2990_, v___x_3029_);
if (v_isShared_2997_ == 0)
{
lean_ctor_set(v___x_2996_, 0, v___x_3016_);
v___x_3032_ = v___x_2996_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v___x_3016_);
v___x_3032_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
return v___x_3032_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg___boxed(lean_object* v_cls_3039_, lean_object* v_msg_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v_res_3046_; 
v_res_3046_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3039_, v_msg_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_);
lean_dec(v___y_3044_);
lean_dec_ref(v___y_3043_);
lean_dec(v___y_3042_);
lean_dec_ref(v___y_3041_);
return v_res_3046_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3047_ = lean_box(0);
v___x_3048_ = lean_unsigned_to_nat(16u);
v___x_3049_ = lean_mk_array(v___x_3048_, v___x_3047_);
return v___x_3049_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3050_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0);
v___x_3051_ = lean_unsigned_to_nat(0u);
v___x_3052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
lean_ctor_set(v___x_3052_, 1, v___x_3050_);
return v___x_3052_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3(void){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2));
v___x_3055_ = l_Lean_stringToMessageData(v___x_3054_);
return v___x_3055_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5(void){
_start:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3057_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4));
v___x_3058_ = l_Lean_stringToMessageData(v___x_3057_);
return v___x_3058_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7(void){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6));
v___x_3061_ = l_Lean_stringToMessageData(v___x_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object* v_recFnName_3062_, lean_object* v_fixedPrefixSize_3063_, lean_object* v_F_3064_, lean_object* v_e_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_){
_start:
{
lean_object* v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v_toCold_3094_; lean_object* v_options_3095_; uint8_t v_hasTrace_3096_; 
v_toCold_3094_ = lean_ctor_get(v_a_3070_, 0);
v_options_3095_ = lean_ctor_get(v_toCold_3094_, 2);
v_hasTrace_3096_ = lean_ctor_get_uint8(v_options_3095_, sizeof(void*)*1);
if (v_hasTrace_3096_ == 0)
{
v___y_3074_ = v_a_3066_;
v___y_3075_ = v_a_3067_;
v___y_3076_ = v_a_3068_;
v___y_3077_ = v_a_3069_;
v___y_3078_ = v_a_3070_;
v___y_3079_ = v_a_3071_;
goto v___jp_3073_;
}
else
{
lean_object* v_inheritedTraceOptions_3097_; lean_object* v_cls_3098_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v_options_3105_; lean_object* v_inheritedTraceOptions_3106_; lean_object* v___y_3107_; lean_object* v___x_3128_; uint8_t v___x_3129_; 
v_inheritedTraceOptions_3097_ = lean_ctor_get(v_toCold_3094_, 11);
v_cls_3098_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_3128_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_3129_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3097_, v_options_3095_, v___x_3128_);
if (v___x_3129_ == 0)
{
v___y_3100_ = v_a_3066_;
v___y_3101_ = v_a_3067_;
v___y_3102_ = v_a_3068_;
v___y_3103_ = v_a_3069_;
v___y_3104_ = v_a_3070_;
v_options_3105_ = v_options_3095_;
v_inheritedTraceOptions_3106_ = v_inheritedTraceOptions_3097_;
v___y_3107_ = v_a_3071_;
goto v___jp_3099_;
}
else
{
lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3130_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7);
lean_inc_ref(v_e_3065_);
v___x_3131_ = l_Lean_indentExpr(v_e_3065_);
v___x_3132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3130_);
lean_ctor_set(v___x_3132_, 1, v___x_3131_);
v___x_3133_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3098_, v___x_3132_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_);
if (lean_obj_tag(v___x_3133_) == 0)
{
lean_dec_ref_known(v___x_3133_, 1);
v___y_3100_ = v_a_3066_;
v___y_3101_ = v_a_3067_;
v___y_3102_ = v_a_3068_;
v___y_3103_ = v_a_3069_;
v___y_3104_ = v_a_3070_;
v_options_3105_ = v_options_3095_;
v_inheritedTraceOptions_3106_ = v_inheritedTraceOptions_3097_;
v___y_3107_ = v_a_3071_;
goto v___jp_3099_;
}
else
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3141_; 
lean_dec_ref(v_e_3065_);
lean_dec_ref(v_F_3064_);
lean_dec(v_fixedPrefixSize_3063_);
lean_dec(v_recFnName_3062_);
v_a_3134_ = lean_ctor_get(v___x_3133_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3133_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3136_ = v___x_3133_;
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3133_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
}
v___jp_3099_:
{
lean_object* v___x_3108_; uint8_t v___x_3109_; 
v___x_3108_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_3109_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3106_, v_options_3105_, v___x_3108_);
if (v___x_3109_ == 0)
{
v___y_3074_ = v___y_3100_;
v___y_3075_ = v___y_3101_;
v___y_3076_ = v___y_3102_;
v___y_3077_ = v___y_3103_;
v___y_3078_ = v___y_3104_;
v___y_3079_ = v___y_3107_;
goto v___jp_3073_;
}
else
{
lean_object* v___x_3110_; 
lean_inc(v___y_3107_);
lean_inc_ref(v___y_3104_);
lean_inc(v___y_3103_);
lean_inc_ref(v___y_3102_);
lean_inc_ref(v_F_3064_);
v___x_3110_ = lean_infer_type(v_F_3064_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3107_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc(v_a_3111_);
lean_dec_ref_known(v___x_3110_, 1);
v___x_3112_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3);
lean_inc_ref(v_F_3064_);
v___x_3113_ = l_Lean_MessageData_ofExpr(v_F_3064_);
v___x_3114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3112_);
lean_ctor_set(v___x_3114_, 1, v___x_3113_);
v___x_3115_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5);
v___x_3116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3114_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = l_Lean_indentExpr(v_a_3111_);
v___x_3118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3116_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
v___x_3119_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3098_, v___x_3118_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3107_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_dec_ref_known(v___x_3119_, 1);
v___y_3074_ = v___y_3100_;
v___y_3075_ = v___y_3101_;
v___y_3076_ = v___y_3102_;
v___y_3077_ = v___y_3103_;
v___y_3078_ = v___y_3104_;
v___y_3079_ = v___y_3107_;
goto v___jp_3073_;
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_dec_ref(v_e_3065_);
lean_dec_ref(v_F_3064_);
lean_dec(v_fixedPrefixSize_3063_);
lean_dec(v_recFnName_3062_);
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3122_ = v___x_3119_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3119_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
else
{
lean_dec_ref(v_e_3065_);
lean_dec_ref(v_F_3064_);
lean_dec(v_fixedPrefixSize_3063_);
lean_dec(v_recFnName_3062_);
return v___x_3110_;
}
}
}
}
v___jp_3073_:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3080_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1);
v___x_3081_ = lean_st_mk_ref(v___x_3080_);
v___x_3082_ = lean_st_mk_ref(v___x_3080_);
v___x_3083_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_3062_, v_fixedPrefixSize_3063_, v_F_3064_, v_e_3065_, v___x_3082_, v___x_3081_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3093_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3086_ = v___x_3083_;
v_isShared_3087_ = v_isSharedCheck_3093_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3083_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3093_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3091_; 
v___x_3088_ = lean_st_ref_get(v___x_3082_);
lean_dec(v___x_3082_);
lean_dec(v___x_3088_);
v___x_3089_ = lean_st_ref_get(v___x_3081_);
lean_dec(v___x_3081_);
lean_dec(v___x_3089_);
if (v_isShared_3087_ == 0)
{
v___x_3091_ = v___x_3086_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3084_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
else
{
lean_dec(v___x_3082_);
lean_dec(v___x_3081_);
return v___x_3083_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed(lean_object* v_recFnName_3142_, lean_object* v_fixedPrefixSize_3143_, lean_object* v_F_3144_, lean_object* v_e_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_){
_start:
{
lean_object* v_res_3153_; 
v_res_3153_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(v_recFnName_3142_, v_fixedPrefixSize_3143_, v_F_3144_, v_e_3145_, v_a_3146_, v_a_3147_, v_a_3148_, v_a_3149_, v_a_3150_, v_a_3151_);
lean_dec(v_a_3151_);
lean_dec_ref(v_a_3150_);
lean_dec(v_a_3149_);
lean_dec_ref(v_a_3148_);
lean_dec(v_a_3147_);
lean_dec_ref(v_a_3146_);
return v_res_3153_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(lean_object* v_cls_3154_, lean_object* v_msg_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_){
_start:
{
lean_object* v___x_3163_; 
v___x_3163_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3154_, v_msg_3155_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___boxed(lean_object* v_cls_3164_, lean_object* v_msg_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(v_cls_3164_, v_msg_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(lean_object* v_k_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v_b_3177_, lean_object* v_c_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_){
_start:
{
lean_object* v___x_3184_; 
lean_inc(v___y_3182_);
lean_inc_ref(v___y_3181_);
lean_inc(v___y_3180_);
lean_inc_ref(v___y_3179_);
lean_inc(v___y_3176_);
lean_inc_ref(v___y_3175_);
v___x_3184_ = lean_apply_9(v_k_3174_, v_b_3177_, v_c_3178_, v___y_3175_, v___y_3176_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_, lean_box(0));
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed(lean_object* v_k_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v_b_3188_, lean_object* v_c_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(v_k_3185_, v___y_3186_, v___y_3187_, v_b_3188_, v_c_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object* v_e_3196_, lean_object* v_maxFVars_3197_, lean_object* v_k_3198_, uint8_t v_cleanupAnnotations_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
lean_object* v___f_3207_; uint8_t v___x_3208_; uint8_t v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_inc(v___y_3201_);
lean_inc_ref(v___y_3200_);
v___f_3207_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3207_, 0, v_k_3198_);
lean_closure_set(v___f_3207_, 1, v___y_3200_);
lean_closure_set(v___f_3207_, 2, v___y_3201_);
v___x_3208_ = 1;
v___x_3209_ = 0;
v___x_3210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3210_, 0, v_maxFVars_3197_);
v___x_3211_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3196_, v___x_3208_, v___x_3209_, v___x_3208_, v___x_3209_, v___x_3210_, v___f_3207_, v_cleanupAnnotations_3199_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_);
lean_dec_ref_known(v___x_3210_, 1);
if (lean_obj_tag(v___x_3211_) == 0)
{
return v___x_3211_;
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3211_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3211_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object* v_e_3220_, lean_object* v_maxFVars_3221_, lean_object* v_k_3222_, lean_object* v_cleanupAnnotations_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3231_; lean_object* v_res_3232_; 
v_cleanupAnnotations_boxed_3231_ = lean_unbox(v_cleanupAnnotations_3223_);
v_res_3232_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_e_3220_, v_maxFVars_3221_, v_k_3222_, v_cleanupAnnotations_boxed_3231_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
lean_dec(v___y_3229_);
lean_dec_ref(v___y_3228_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___y_3225_);
lean_dec_ref(v___y_3224_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object* v_00_u03b1_3233_, lean_object* v_e_3234_, lean_object* v_maxFVars_3235_, lean_object* v_k_3236_, uint8_t v_cleanupAnnotations_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_){
_start:
{
lean_object* v___x_3245_; 
v___x_3245_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_e_3234_, v_maxFVars_3235_, v_k_3236_, v_cleanupAnnotations_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
return v___x_3245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object* v_00_u03b1_3246_, lean_object* v_e_3247_, lean_object* v_maxFVars_3248_, lean_object* v_k_3249_, lean_object* v_cleanupAnnotations_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3258_; lean_object* v_res_3259_; 
v_cleanupAnnotations_boxed_3258_ = lean_unbox(v_cleanupAnnotations_3250_);
v_res_3259_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(v_00_u03b1_3246_, v_e_3247_, v_maxFVars_3248_, v_k_3249_, v_cleanupAnnotations_boxed_3258_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
lean_dec(v___y_3256_);
lean_dec_ref(v___y_3255_);
lean_dec(v___y_3254_);
lean_dec_ref(v___y_3253_);
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(lean_object* v_e_3260_, lean_object* v_k_3261_, uint8_t v_cleanupAnnotations_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v___f_3270_; uint8_t v___x_3271_; uint8_t v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
lean_inc(v___y_3264_);
lean_inc_ref(v___y_3263_);
v___f_3270_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3270_, 0, v_k_3261_);
lean_closure_set(v___f_3270_, 1, v___y_3263_);
lean_closure_set(v___f_3270_, 2, v___y_3264_);
v___x_3271_ = 1;
v___x_3272_ = 0;
v___x_3273_ = lean_box(0);
v___x_3274_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3260_, v___x_3271_, v___x_3272_, v___x_3271_, v___x_3272_, v___x_3273_, v___f_3270_, v_cleanupAnnotations_3262_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
if (lean_obj_tag(v___x_3274_) == 0)
{
return v___x_3274_;
}
else
{
lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3282_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3277_ = v___x_3274_;
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_dec(v___x_3274_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3280_; 
if (v_isShared_3278_ == 0)
{
v___x_3280_ = v___x_3277_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_a_3275_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg___boxed(lean_object* v_e_3283_, lean_object* v_k_3284_, lean_object* v_cleanupAnnotations_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3293_; lean_object* v_res_3294_; 
v_cleanupAnnotations_boxed_3293_ = lean_unbox(v_cleanupAnnotations_3285_);
v_res_3294_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_e_3283_, v_k_3284_, v_cleanupAnnotations_boxed_3293_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v___y_3287_);
lean_dec_ref(v___y_3286_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(lean_object* v_00_u03b1_3295_, lean_object* v_e_3296_, lean_object* v_k_3297_, uint8_t v_cleanupAnnotations_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_){
_start:
{
lean_object* v___x_3306_; 
v___x_3306_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_e_3296_, v_k_3297_, v_cleanupAnnotations_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___boxed(lean_object* v_00_u03b1_3307_, lean_object* v_e_3308_, lean_object* v_k_3309_, lean_object* v_cleanupAnnotations_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3318_; lean_object* v_res_3319_; 
v_cleanupAnnotations_boxed_3318_ = lean_unbox(v_cleanupAnnotations_3310_);
v_res_3319_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(v_00_u03b1_3307_, v_e_3308_, v_k_3309_, v_cleanupAnnotations_boxed_3318_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
return v_res_3319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object* v_a_3320_, lean_object* v___x_3321_, lean_object* v___x_3322_, lean_object* v_x_3323_, uint8_t v___x_3324_, lean_object* v_xs_3325_, lean_object* v_type_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3334_ = l_Lean_LocalDecl_type(v_a_3320_);
v___x_3335_ = lean_array_get_borrowed(v___x_3321_, v_xs_3325_, v___x_3322_);
v___x_3336_ = l_Lean_Expr_replaceFVar(v___x_3334_, v_x_3323_, v___x_3335_);
lean_dec_ref(v___x_3334_);
v___x_3337_ = l_Lean_mkArrow(v___x_3336_, v_type_3326_, v___y_3331_, v___y_3332_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; uint8_t v___x_3339_; uint8_t v___x_3340_; lean_object* v___x_3341_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc_n(v_a_3338_, 2);
lean_dec_ref_known(v___x_3337_, 1);
v___x_3339_ = 0;
v___x_3340_ = 1;
v___x_3341_ = l_Lean_Meta_mkLambdaFVars(v_xs_3325_, v_a_3338_, v___x_3339_, v___x_3324_, v___x_3339_, v___x_3324_, v___x_3340_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
if (lean_obj_tag(v___x_3341_) == 0)
{
lean_object* v_a_3342_; lean_object* v___x_3343_; 
v_a_3342_ = lean_ctor_get(v___x_3341_, 0);
lean_inc(v_a_3342_);
lean_dec_ref_known(v___x_3341_, 1);
v___x_3343_ = l_Lean_Meta_getLevel(v_a_3338_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v_a_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3352_; 
v_a_3344_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3346_ = v___x_3343_;
v_isShared_3347_ = v_isSharedCheck_3352_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_a_3344_);
lean_dec(v___x_3343_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3352_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3348_; lean_object* v___x_3350_; 
v___x_3348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3348_, 0, v_a_3342_);
lean_ctor_set(v___x_3348_, 1, v_a_3344_);
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 0, v___x_3348_);
v___x_3350_ = v___x_3346_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v___x_3348_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
}
else
{
lean_object* v_a_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3360_; 
lean_dec(v_a_3342_);
v_a_3353_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3355_ = v___x_3343_;
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_a_3353_);
lean_dec(v___x_3343_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v___x_3358_; 
if (v_isShared_3356_ == 0)
{
v___x_3358_ = v___x_3355_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_a_3353_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
}
}
else
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3368_; 
lean_dec(v_a_3338_);
v_a_3361_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3363_ = v___x_3341_;
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3341_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3366_; 
if (v_isShared_3364_ == 0)
{
v___x_3366_ = v___x_3363_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v_a_3361_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
lean_dec_ref(v_xs_3325_);
v_a_3369_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3337_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3337_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object* v_a_3377_, lean_object* v___x_3378_, lean_object* v___x_3379_, lean_object* v_x_3380_, lean_object* v___x_3381_, lean_object* v_xs_3382_, lean_object* v_type_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
uint8_t v___x_6246__boxed_3391_; lean_object* v_res_3392_; 
v___x_6246__boxed_3391_ = lean_unbox(v___x_3381_);
v_res_3392_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(v_a_3377_, v___x_3378_, v___x_3379_, v_x_3380_, v___x_6246__boxed_3391_, v_xs_3382_, v_type_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_);
lean_dec(v___y_3389_);
lean_dec_ref(v___y_3388_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v___x_3379_);
lean_dec_ref(v___x_3378_);
lean_dec_ref(v_a_3377_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(lean_object* v_k_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v_b_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_){
_start:
{
lean_object* v___x_3402_; 
lean_inc(v___y_3400_);
lean_inc_ref(v___y_3399_);
lean_inc(v___y_3398_);
lean_inc_ref(v___y_3397_);
lean_inc(v___y_3395_);
lean_inc_ref(v___y_3394_);
v___x_3402_ = lean_apply_8(v_k_3393_, v_b_3396_, v___y_3394_, v___y_3395_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, lean_box(0));
return v___x_3402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v_b_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(v_k_3403_, v___y_3404_, v___y_3405_, v_b_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3407_);
lean_dec(v___y_3405_);
lean_dec_ref(v___y_3404_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(lean_object* v_name_3413_, uint8_t v_bi_3414_, lean_object* v_type_3415_, lean_object* v_k_3416_, uint8_t v_kind_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v___f_3425_; lean_object* v___x_3426_; 
lean_inc(v___y_3419_);
lean_inc_ref(v___y_3418_);
v___f_3425_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_3425_, 0, v_k_3416_);
lean_closure_set(v___f_3425_, 1, v___y_3418_);
lean_closure_set(v___f_3425_, 2, v___y_3419_);
v___x_3426_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3413_, v_bi_3414_, v_type_3415_, v___f_3425_, v_kind_3417_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_);
if (lean_obj_tag(v___x_3426_) == 0)
{
return v___x_3426_;
}
else
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3434_; 
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3429_ = v___x_3426_;
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v___x_3426_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3432_; 
if (v_isShared_3430_ == 0)
{
v___x_3432_ = v___x_3429_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v_a_3427_);
v___x_3432_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
return v___x_3432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___boxed(lean_object* v_name_3435_, lean_object* v_bi_3436_, lean_object* v_type_3437_, lean_object* v_k_3438_, lean_object* v_kind_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
uint8_t v_bi_boxed_3447_; uint8_t v_kind_boxed_3448_; lean_object* v_res_3449_; 
v_bi_boxed_3447_ = lean_unbox(v_bi_3436_);
v_kind_boxed_3448_ = lean_unbox(v_kind_3439_);
v_res_3449_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3435_, v_bi_boxed_3447_, v_type_3437_, v_k_3438_, v_kind_boxed_3448_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
lean_dec(v___y_3441_);
lean_dec_ref(v___y_3440_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object* v_name_3450_, lean_object* v_type_3451_, lean_object* v_k_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_){
_start:
{
uint8_t v___x_3460_; uint8_t v___x_3461_; lean_object* v___x_3462_; 
v___x_3460_ = 0;
v___x_3461_ = 0;
v___x_3462_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3450_, v___x_3460_, v_type_3451_, v_k_3452_, v___x_3461_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object* v_name_3463_, lean_object* v_type_3464_, lean_object* v_k_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_){
_start:
{
lean_object* v_res_3473_; 
v_res_3473_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v_name_3463_, v_type_3464_, v_k_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
lean_dec(v___y_3469_);
lean_dec_ref(v___y_3468_);
lean_dec(v___y_3467_);
lean_dec_ref(v___y_3466_);
return v_res_3473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object* v_x_3487_, lean_object* v_F_3488_, lean_object* v_val_3489_, lean_object* v_k_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_, lean_object* v_a_3494_, lean_object* v_a_3495_, lean_object* v_a_3496_){
_start:
{
lean_object* v___x_3498_; uint8_t v___y_3500_; uint8_t v___x_3614_; 
v___x_3498_ = l_Lean_instInhabitedExpr;
v___x_3614_ = l_Lean_Expr_isFVar(v_x_3487_);
if (v___x_3614_ == 0)
{
v___y_3500_ = v___x_3614_;
goto v___jp_3499_;
}
else
{
lean_object* v___x_3615_; lean_object* v___x_3616_; uint8_t v___x_3617_; 
v___x_3615_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6));
v___x_3616_ = lean_unsigned_to_nat(6u);
v___x_3617_ = l_Lean_Expr_isAppOfArity(v_val_3489_, v___x_3615_, v___x_3616_);
v___y_3500_ = v___x_3617_;
goto v___jp_3499_;
}
v___jp_3499_:
{
if (v___y_3500_ == 0)
{
lean_object* v___x_3501_; 
lean_inc(v_a_3496_);
lean_inc_ref(v_a_3495_);
lean_inc(v_a_3494_);
lean_inc_ref(v_a_3493_);
lean_inc(v_a_3492_);
lean_inc_ref(v_a_3491_);
v___x_3501_ = lean_apply_10(v_k_3490_, v_x_3487_, v_F_3488_, v_val_3489_, v_a_3491_, v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_, lean_box(0));
return v___x_3501_;
}
else
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; uint8_t v___x_3508_; 
v___x_3502_ = lean_unsigned_to_nat(3u);
v___x_3503_ = l_Lean_Expr_getAppNumArgs(v_val_3489_);
v___x_3504_ = lean_nat_sub(v___x_3503_, v___x_3502_);
v___x_3505_ = lean_unsigned_to_nat(1u);
v___x_3506_ = lean_nat_sub(v___x_3504_, v___x_3505_);
lean_dec(v___x_3504_);
v___x_3507_ = l_Lean_Expr_getRevArg_x21(v_val_3489_, v___x_3506_);
v___x_3508_ = lean_expr_eqv(v___x_3507_, v_x_3487_);
lean_dec_ref(v___x_3507_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3509_; 
lean_dec(v___x_3503_);
lean_inc(v_a_3496_);
lean_inc_ref(v_a_3495_);
lean_inc(v_a_3494_);
lean_inc_ref(v_a_3493_);
lean_inc(v_a_3492_);
lean_inc_ref(v_a_3491_);
v___x_3509_ = lean_apply_10(v_k_3490_, v_x_3487_, v_F_3488_, v_val_3489_, v_a_3491_, v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_, lean_box(0));
return v___x_3509_;
}
else
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; uint8_t v___x_3514_; 
v___x_3510_ = lean_unsigned_to_nat(4u);
v___x_3511_ = lean_nat_sub(v___x_3503_, v___x_3510_);
v___x_3512_ = lean_nat_sub(v___x_3511_, v___x_3505_);
lean_dec(v___x_3511_);
v___x_3513_ = l_Lean_Expr_getRevArg_x21(v_val_3489_, v___x_3512_);
v___x_3514_ = l_Lean_Expr_isLambda(v___x_3513_);
lean_dec_ref(v___x_3513_);
if (v___x_3514_ == 0)
{
lean_object* v___x_3515_; 
lean_dec(v___x_3503_);
lean_inc(v_a_3496_);
lean_inc_ref(v_a_3495_);
lean_inc(v_a_3494_);
lean_inc_ref(v_a_3493_);
lean_inc(v_a_3492_);
lean_inc_ref(v_a_3491_);
v___x_3515_ = lean_apply_10(v_k_3490_, v_x_3487_, v_F_3488_, v_val_3489_, v_a_3491_, v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_, lean_box(0));
return v___x_3515_;
}
else
{
lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; uint8_t v___x_3520_; 
v___x_3516_ = lean_unsigned_to_nat(5u);
v___x_3517_ = lean_nat_sub(v___x_3503_, v___x_3516_);
v___x_3518_ = lean_nat_sub(v___x_3517_, v___x_3505_);
lean_dec(v___x_3517_);
v___x_3519_ = l_Lean_Expr_getRevArg_x21(v_val_3489_, v___x_3518_);
v___x_3520_ = l_Lean_Expr_isLambda(v___x_3519_);
lean_dec_ref(v___x_3519_);
if (v___x_3520_ == 0)
{
lean_object* v___x_3521_; 
lean_dec(v___x_3503_);
lean_inc(v_a_3496_);
lean_inc_ref(v_a_3495_);
lean_inc(v_a_3494_);
lean_inc_ref(v_a_3493_);
lean_inc(v_a_3492_);
lean_inc_ref(v_a_3491_);
v___x_3521_ = lean_apply_10(v_k_3490_, v_x_3487_, v_F_3488_, v_val_3489_, v_a_3491_, v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_, lean_box(0));
return v___x_3521_;
}
else
{
lean_object* v_dummy_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v_args_3525_; lean_object* v___x_3526_; lean_object* v_00_u03b1_3527_; lean_object* v_00_u03b2_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
v_dummy_3522_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
lean_inc(v___x_3503_);
v___x_3523_ = lean_mk_array(v___x_3503_, v_dummy_3522_);
v___x_3524_ = lean_nat_sub(v___x_3503_, v___x_3505_);
lean_dec(v___x_3503_);
v_args_3525_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_3489_, v___x_3523_, v___x_3524_);
v___x_3526_ = lean_unsigned_to_nat(0u);
v_00_u03b1_3527_ = lean_array_get(v___x_3498_, v_args_3525_, v___x_3526_);
v_00_u03b2_3528_ = lean_array_get(v___x_3498_, v_args_3525_, v___x_3505_);
v___x_3529_ = l_Lean_Expr_fvarId_x21(v_F_3488_);
v___x_3530_ = l_Lean_FVarId_getDecl___redArg(v___x_3529_, v_a_3493_, v_a_3495_, v_a_3496_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3532_; lean_object* v___f_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; uint8_t v___x_3536_; lean_object* v___x_3537_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
lean_inc_n(v_a_3531_, 2);
lean_dec_ref_known(v___x_3530_, 1);
v___x_3532_ = lean_box(v___x_3514_);
lean_inc_ref(v_x_3487_);
v___f_3533_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3533_, 0, v_a_3531_);
lean_closure_set(v___f_3533_, 1, v___x_3498_);
lean_closure_set(v___f_3533_, 2, v___x_3526_);
lean_closure_set(v___f_3533_, 3, v_x_3487_);
lean_closure_set(v___f_3533_, 4, v___x_3532_);
v___x_3534_ = lean_unsigned_to_nat(2u);
v___x_3535_ = lean_array_get(v___x_3498_, v_args_3525_, v___x_3534_);
v___x_3536_ = 0;
v___x_3537_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_3535_, v___f_3533_, v___x_3536_, v_a_3491_, v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v_fst_3539_; lean_object* v_snd_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3597_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3537_, 1);
v_fst_3539_ = lean_ctor_get(v_a_3538_, 0);
v_snd_3540_ = lean_ctor_get(v_a_3538_, 1);
v_isSharedCheck_3597_ = !lean_is_exclusive(v_a_3538_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3542_ = v_a_3538_;
v_isShared_3543_ = v_isSharedCheck_3597_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_snd_3540_);
lean_inc(v_fst_3539_);
lean_dec(v_a_3538_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3597_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3544_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2));
v___x_3545_ = lean_array_get(v___x_3498_, v_args_3525_, v___x_3510_);
lean_inc_ref(v_x_3487_);
lean_inc(v_a_3531_);
lean_inc(v_00_u03b2_3528_);
lean_inc(v_00_u03b1_3527_);
lean_inc_ref(v_k_3490_);
v___x_3546_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3498_, v___x_3526_, v_k_3490_, v___x_3534_, v___x_3536_, v___x_3514_, v_00_u03b1_3527_, v_00_u03b2_3528_, v___x_3502_, v_a_3531_, v_x_3487_, v___x_3505_, v___x_3544_, v___x_3545_, v_a_3491_, v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_);
if (lean_obj_tag(v___x_3546_) == 0)
{
lean_object* v_a_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v_a_3547_ = lean_ctor_get(v___x_3546_, 0);
lean_inc(v_a_3547_);
lean_dec_ref_known(v___x_3546_, 1);
v___x_3548_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4));
v___x_3549_ = lean_array_get(v___x_3498_, v_args_3525_, v___x_3516_);
lean_dec_ref(v_args_3525_);
lean_inc_ref(v_x_3487_);
lean_inc(v_00_u03b2_3528_);
lean_inc(v_00_u03b1_3527_);
v___x_3550_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3498_, v___x_3526_, v_k_3490_, v___x_3534_, v___x_3536_, v___x_3514_, v_00_u03b1_3527_, v_00_u03b2_3528_, v___x_3502_, v_a_3531_, v_x_3487_, v___x_3505_, v___x_3548_, v___x_3549_, v_a_3491_, v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; lean_object* v___x_3552_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_a_3551_);
lean_dec_ref_known(v___x_3550_, 1);
lean_inc(v_00_u03b1_3527_);
v___x_3552_ = l_Lean_Meta_getLevel(v_00_u03b1_3527_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v___x_3554_; 
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_a_3553_);
lean_dec_ref_known(v___x_3552_, 1);
lean_inc(v_00_u03b2_3528_);
v___x_3554_ = l_Lean_Meta_getLevel(v_00_u03b2_3528_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3580_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3580_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3580_ == 0)
{
v___x_3557_ = v___x_3554_;
v_isShared_3558_ = v_isSharedCheck_3580_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_a_3555_);
lean_dec(v___x_3554_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3580_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3562_; 
v___x_3559_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6));
v___x_3560_ = lean_box(0);
if (v_isShared_3543_ == 0)
{
lean_ctor_set_tag(v___x_3542_, 1);
lean_ctor_set(v___x_3542_, 1, v___x_3560_);
lean_ctor_set(v___x_3542_, 0, v_a_3555_);
v___x_3562_ = v___x_3542_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_a_3555_);
lean_ctor_set(v_reuseFailAlloc_3579_, 1, v___x_3560_);
v___x_3562_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3577_; 
v___x_3563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3563_, 0, v_a_3553_);
lean_ctor_set(v___x_3563_, 1, v___x_3562_);
v___x_3564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3564_, 0, v_snd_3540_);
lean_ctor_set(v___x_3564_, 1, v___x_3563_);
v___x_3565_ = l_Lean_mkConst(v___x_3559_, v___x_3564_);
v___x_3566_ = lean_unsigned_to_nat(7u);
v___x_3567_ = lean_mk_empty_array_with_capacity(v___x_3566_);
v___x_3568_ = lean_array_push(v___x_3567_, v_00_u03b1_3527_);
v___x_3569_ = lean_array_push(v___x_3568_, v_00_u03b2_3528_);
v___x_3570_ = lean_array_push(v___x_3569_, v_fst_3539_);
v___x_3571_ = lean_array_push(v___x_3570_, v_x_3487_);
v___x_3572_ = lean_array_push(v___x_3571_, v_a_3547_);
v___x_3573_ = lean_array_push(v___x_3572_, v_a_3551_);
v___x_3574_ = lean_array_push(v___x_3573_, v_F_3488_);
v___x_3575_ = l_Lean_mkAppN(v___x_3565_, v___x_3574_);
lean_dec_ref(v___x_3574_);
if (v_isShared_3558_ == 0)
{
lean_ctor_set(v___x_3557_, 0, v___x_3575_);
v___x_3577_ = v___x_3557_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3575_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec(v_a_3553_);
lean_dec(v_a_3551_);
lean_dec(v_a_3547_);
lean_del_object(v___x_3542_);
lean_dec(v_snd_3540_);
lean_dec(v_fst_3539_);
lean_dec(v_00_u03b2_3528_);
lean_dec(v_00_u03b1_3527_);
lean_dec_ref(v_F_3488_);
lean_dec_ref(v_x_3487_);
v_a_3581_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3554_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3554_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec(v_a_3551_);
lean_dec(v_a_3547_);
lean_del_object(v___x_3542_);
lean_dec(v_snd_3540_);
lean_dec(v_fst_3539_);
lean_dec(v_00_u03b2_3528_);
lean_dec(v_00_u03b1_3527_);
lean_dec_ref(v_F_3488_);
lean_dec_ref(v_x_3487_);
v_a_3589_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3552_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3552_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
else
{
lean_dec(v_a_3547_);
lean_del_object(v___x_3542_);
lean_dec(v_snd_3540_);
lean_dec(v_fst_3539_);
lean_dec(v_00_u03b2_3528_);
lean_dec(v_00_u03b1_3527_);
lean_dec_ref(v_F_3488_);
lean_dec_ref(v_x_3487_);
return v___x_3550_;
}
}
else
{
lean_del_object(v___x_3542_);
lean_dec(v_snd_3540_);
lean_dec(v_fst_3539_);
lean_dec(v_a_3531_);
lean_dec(v_00_u03b2_3528_);
lean_dec(v_00_u03b1_3527_);
lean_dec_ref(v_args_3525_);
lean_dec_ref(v_k_3490_);
lean_dec_ref(v_F_3488_);
lean_dec_ref(v_x_3487_);
return v___x_3546_;
}
}
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3605_; 
lean_dec(v_a_3531_);
lean_dec(v_00_u03b2_3528_);
lean_dec(v_00_u03b1_3527_);
lean_dec_ref(v_args_3525_);
lean_dec_ref(v_k_3490_);
lean_dec_ref(v_F_3488_);
lean_dec_ref(v_x_3487_);
v_a_3598_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3600_ = v___x_3537_;
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_a_3598_);
lean_dec(v___x_3537_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3598_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
}
}
else
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3613_; 
lean_dec(v_00_u03b2_3528_);
lean_dec(v_00_u03b1_3527_);
lean_dec_ref(v_args_3525_);
lean_dec_ref(v_k_3490_);
lean_dec_ref(v_F_3488_);
lean_dec_ref(v_x_3487_);
v_a_3606_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3608_ = v___x_3530_;
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___x_3530_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___x_3611_; 
if (v_isShared_3609_ == 0)
{
v___x_3611_ = v___x_3608_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v_a_3606_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
return v___x_3611_;
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object* v___x_3618_, lean_object* v_body_3619_, lean_object* v_k_3620_, lean_object* v___x_3621_, uint8_t v___x_3622_, uint8_t v___x_3623_, lean_object* v_FNew_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_){
_start:
{
lean_object* v___x_3632_; 
lean_inc_ref(v_FNew_3624_);
lean_inc_ref(v___x_3618_);
v___x_3632_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v___x_3618_, v_FNew_3624_, v_body_3619_, v_k_3620_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v_a_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; uint8_t v___x_3637_; lean_object* v___x_3638_; 
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
lean_inc(v_a_3633_);
lean_dec_ref_known(v___x_3632_, 1);
v___x_3634_ = lean_mk_empty_array_with_capacity(v___x_3621_);
v___x_3635_ = lean_array_push(v___x_3634_, v___x_3618_);
v___x_3636_ = lean_array_push(v___x_3635_, v_FNew_3624_);
v___x_3637_ = 1;
v___x_3638_ = l_Lean_Meta_mkLambdaFVars(v___x_3636_, v_a_3633_, v___x_3622_, v___x_3623_, v___x_3622_, v___x_3623_, v___x_3637_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
return v___x_3638_;
}
else
{
lean_dec_ref(v_FNew_3624_);
lean_dec_ref(v___x_3618_);
return v___x_3632_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object* v___x_3639_, lean_object* v_body_3640_, lean_object* v_k_3641_, lean_object* v___x_3642_, lean_object* v___x_3643_, lean_object* v___x_3644_, lean_object* v_FNew_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_){
_start:
{
uint8_t v___x_6494__boxed_3653_; uint8_t v___x_6495__boxed_3654_; lean_object* v_res_3655_; 
v___x_6494__boxed_3653_ = lean_unbox(v___x_3643_);
v___x_6495__boxed_3654_ = lean_unbox(v___x_3644_);
v_res_3655_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(v___x_3639_, v_body_3640_, v_k_3641_, v___x_3642_, v___x_6494__boxed_3653_, v___x_6495__boxed_3654_, v_FNew_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_);
lean_dec(v___y_3651_);
lean_dec_ref(v___y_3650_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v___x_3642_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object* v___x_3656_, lean_object* v___x_3657_, lean_object* v_k_3658_, lean_object* v___x_3659_, uint8_t v___x_3660_, uint8_t v___x_3661_, lean_object* v_00_u03b1_3662_, lean_object* v_00_u03b2_3663_, lean_object* v___x_3664_, lean_object* v_ctorName_3665_, lean_object* v_a_3666_, lean_object* v_x_3667_, lean_object* v_xs_3668_, lean_object* v_body_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_){
_start:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___f_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3677_ = lean_array_get_borrowed(v___x_3656_, v_xs_3668_, v___x_3657_);
v___x_3678_ = lean_box(v___x_3660_);
v___x_3679_ = lean_box(v___x_3661_);
lean_inc_n(v___x_3677_, 2);
v___f_3680_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed), 14, 6);
lean_closure_set(v___f_3680_, 0, v___x_3677_);
lean_closure_set(v___f_3680_, 1, v_body_3669_);
lean_closure_set(v___f_3680_, 2, v_k_3658_);
lean_closure_set(v___f_3680_, 3, v___x_3659_);
lean_closure_set(v___f_3680_, 4, v___x_3678_);
lean_closure_set(v___f_3680_, 5, v___x_3679_);
v___x_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3681_, 0, v_00_u03b1_3662_);
v___x_3682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3682_, 0, v_00_u03b2_3663_);
v___x_3683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3677_);
v___x_3684_ = lean_mk_empty_array_with_capacity(v___x_3664_);
v___x_3685_ = lean_array_push(v___x_3684_, v___x_3681_);
v___x_3686_ = lean_array_push(v___x_3685_, v___x_3682_);
v___x_3687_ = lean_array_push(v___x_3686_, v___x_3683_);
v___x_3688_ = l_Lean_Meta_mkAppOptM(v_ctorName_3665_, v___x_3687_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_object* v_a_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v_a_3689_ = lean_ctor_get(v___x_3688_, 0);
lean_inc(v_a_3689_);
lean_dec_ref_known(v___x_3688_, 1);
v___x_3690_ = l_Lean_LocalDecl_type(v_a_3666_);
v___x_3691_ = l_Lean_Expr_replaceFVar(v___x_3690_, v_x_3667_, v_a_3689_);
lean_dec(v_a_3689_);
lean_dec_ref(v___x_3690_);
v___x_3692_ = l_Lean_LocalDecl_userName(v_a_3666_);
v___x_3693_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_3692_, v___x_3691_, v___f_3680_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
return v___x_3693_;
}
else
{
lean_dec_ref(v___f_3680_);
lean_dec_ref(v_x_3667_);
return v___x_3688_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object** _args){
lean_object* v___x_3694_ = _args[0];
lean_object* v___x_3695_ = _args[1];
lean_object* v_k_3696_ = _args[2];
lean_object* v___x_3697_ = _args[3];
lean_object* v___x_3698_ = _args[4];
lean_object* v___x_3699_ = _args[5];
lean_object* v_00_u03b1_3700_ = _args[6];
lean_object* v_00_u03b2_3701_ = _args[7];
lean_object* v___x_3702_ = _args[8];
lean_object* v_ctorName_3703_ = _args[9];
lean_object* v_a_3704_ = _args[10];
lean_object* v_x_3705_ = _args[11];
lean_object* v_xs_3706_ = _args[12];
lean_object* v_body_3707_ = _args[13];
lean_object* v___y_3708_ = _args[14];
lean_object* v___y_3709_ = _args[15];
lean_object* v___y_3710_ = _args[16];
lean_object* v___y_3711_ = _args[17];
lean_object* v___y_3712_ = _args[18];
lean_object* v___y_3713_ = _args[19];
lean_object* v___y_3714_ = _args[20];
_start:
{
uint8_t v___x_6514__boxed_3715_; uint8_t v___x_6515__boxed_3716_; lean_object* v_res_3717_; 
v___x_6514__boxed_3715_ = lean_unbox(v___x_3698_);
v___x_6515__boxed_3716_ = lean_unbox(v___x_3699_);
v_res_3717_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(v___x_3694_, v___x_3695_, v_k_3696_, v___x_3697_, v___x_6514__boxed_3715_, v___x_6515__boxed_3716_, v_00_u03b1_3700_, v_00_u03b2_3701_, v___x_3702_, v_ctorName_3703_, v_a_3704_, v_x_3705_, v_xs_3706_, v_body_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
lean_dec(v___y_3711_);
lean_dec_ref(v___y_3710_);
lean_dec(v___y_3709_);
lean_dec_ref(v___y_3708_);
lean_dec_ref(v_xs_3706_);
lean_dec_ref(v_a_3704_);
lean_dec(v___x_3702_);
lean_dec(v___x_3695_);
lean_dec_ref(v___x_3694_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object* v___x_3718_, lean_object* v___x_3719_, lean_object* v_k_3720_, lean_object* v___x_3721_, uint8_t v___x_3722_, uint8_t v___x_3723_, lean_object* v_00_u03b1_3724_, lean_object* v_00_u03b2_3725_, lean_object* v___x_3726_, lean_object* v_a_3727_, lean_object* v_x_3728_, lean_object* v___x_3729_, lean_object* v_ctorName_3730_, lean_object* v_minor_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___f_3741_; lean_object* v___x_3742_; 
v___x_3739_ = lean_box(v___x_3722_);
v___x_3740_ = lean_box(v___x_3723_);
v___f_3741_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed), 21, 12);
lean_closure_set(v___f_3741_, 0, v___x_3718_);
lean_closure_set(v___f_3741_, 1, v___x_3719_);
lean_closure_set(v___f_3741_, 2, v_k_3720_);
lean_closure_set(v___f_3741_, 3, v___x_3721_);
lean_closure_set(v___f_3741_, 4, v___x_3739_);
lean_closure_set(v___f_3741_, 5, v___x_3740_);
lean_closure_set(v___f_3741_, 6, v_00_u03b1_3724_);
lean_closure_set(v___f_3741_, 7, v_00_u03b2_3725_);
lean_closure_set(v___f_3741_, 8, v___x_3726_);
lean_closure_set(v___f_3741_, 9, v_ctorName_3730_);
lean_closure_set(v___f_3741_, 10, v_a_3727_);
lean_closure_set(v___f_3741_, 11, v_x_3728_);
v___x_3742_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_minor_3731_, v___x_3729_, v___f_3741_, v___x_3722_, v___y_3732_, v___y_3733_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_);
return v___x_3742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object** _args){
lean_object* v___x_3743_ = _args[0];
lean_object* v___x_3744_ = _args[1];
lean_object* v_k_3745_ = _args[2];
lean_object* v___x_3746_ = _args[3];
lean_object* v___x_3747_ = _args[4];
lean_object* v___x_3748_ = _args[5];
lean_object* v_00_u03b1_3749_ = _args[6];
lean_object* v_00_u03b2_3750_ = _args[7];
lean_object* v___x_3751_ = _args[8];
lean_object* v_a_3752_ = _args[9];
lean_object* v_x_3753_ = _args[10];
lean_object* v___x_3754_ = _args[11];
lean_object* v_ctorName_3755_ = _args[12];
lean_object* v_minor_3756_ = _args[13];
lean_object* v___y_3757_ = _args[14];
lean_object* v___y_3758_ = _args[15];
lean_object* v___y_3759_ = _args[16];
lean_object* v___y_3760_ = _args[17];
lean_object* v___y_3761_ = _args[18];
lean_object* v___y_3762_ = _args[19];
lean_object* v___y_3763_ = _args[20];
_start:
{
uint8_t v___x_6478__boxed_3764_; uint8_t v___x_6479__boxed_3765_; lean_object* v_res_3766_; 
v___x_6478__boxed_3764_ = lean_unbox(v___x_3747_);
v___x_6479__boxed_3765_ = lean_unbox(v___x_3748_);
v_res_3766_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3743_, v___x_3744_, v_k_3745_, v___x_3746_, v___x_6478__boxed_3764_, v___x_6479__boxed_3765_, v_00_u03b1_3749_, v_00_u03b2_3750_, v___x_3751_, v_a_3752_, v_x_3753_, v___x_3754_, v_ctorName_3755_, v_minor_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_, v___y_3762_);
lean_dec(v___y_3762_);
lean_dec_ref(v___y_3761_);
lean_dec(v___y_3760_);
lean_dec_ref(v___y_3759_);
lean_dec(v___y_3758_);
lean_dec_ref(v___y_3757_);
return v_res_3766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___boxed(lean_object* v_x_3767_, lean_object* v_F_3768_, lean_object* v_val_3769_, lean_object* v_k_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v_x_3767_, v_F_3768_, v_val_3769_, v_k_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_);
lean_dec(v_a_3776_);
lean_dec_ref(v_a_3775_);
lean_dec(v_a_3774_);
lean_dec_ref(v_a_3773_);
lean_dec(v_a_3772_);
lean_dec_ref(v_a_3771_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(lean_object* v_00_u03b1_3779_, lean_object* v_name_3780_, uint8_t v_bi_3781_, lean_object* v_type_3782_, lean_object* v_k_3783_, uint8_t v_kind_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_){
_start:
{
lean_object* v___x_3792_; 
v___x_3792_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3780_, v_bi_3781_, v_type_3782_, v_k_3783_, v_kind_3784_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_, v___y_3790_);
return v___x_3792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3793_, lean_object* v_name_3794_, lean_object* v_bi_3795_, lean_object* v_type_3796_, lean_object* v_k_3797_, lean_object* v_kind_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
uint8_t v_bi_boxed_3806_; uint8_t v_kind_boxed_3807_; lean_object* v_res_3808_; 
v_bi_boxed_3806_ = lean_unbox(v_bi_3795_);
v_kind_boxed_3807_ = lean_unbox(v_kind_3798_);
v_res_3808_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(v_00_u03b1_3793_, v_name_3794_, v_bi_boxed_3806_, v_type_3796_, v_k_3797_, v_kind_boxed_3807_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec(v___y_3802_);
lean_dec_ref(v___y_3801_);
lean_dec(v___y_3800_);
lean_dec_ref(v___y_3799_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object* v_00_u03b1_3809_, lean_object* v_name_3810_, lean_object* v_type_3811_, lean_object* v_k_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
lean_object* v___x_3820_; 
v___x_3820_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v_name_3810_, v_type_3811_, v_k_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object* v_00_u03b1_3821_, lean_object* v_name_3822_, lean_object* v_type_3823_, lean_object* v_k_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_){
_start:
{
lean_object* v_res_3832_; 
v_res_3832_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(v_00_u03b1_3821_, v_name_3822_, v_type_3823_, v_k_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
return v_res_3832_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3833_; 
v___x_3833_ = l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
return v___x_3833_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object* v_msg_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_){
_start:
{
lean_object* v___x_3842_; lean_object* v___x_3331__overap_3843_; lean_object* v___x_3844_; 
v___x_3842_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0);
v___x_3331__overap_3843_ = lean_panic_fn_borrowed(v___x_3842_, v_msg_3834_);
lean_inc(v___y_3840_);
lean_inc_ref(v___y_3839_);
lean_inc(v___y_3838_);
lean_inc_ref(v___y_3837_);
lean_inc(v___y_3836_);
lean_inc_ref(v___y_3835_);
v___x_3844_ = lean_apply_7(v___x_3331__overap_3843_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, lean_box(0));
return v___x_3844_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___boxed(lean_object* v_msg_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v_res_3853_; 
v_res_3853_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(v_msg_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_dec(v___y_3847_);
lean_dec_ref(v___y_3846_);
return v_res_3853_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3(void){
_start:
{
lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3857_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2));
v___x_3858_ = lean_unsigned_to_nat(49u);
v___x_3859_ = lean_unsigned_to_nat(186u);
v___x_3860_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1));
v___x_3861_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0));
v___x_3862_ = l_mkPanicMessageWithDecl(v___x_3861_, v___x_3860_, v___x_3859_, v___x_3858_, v___x_3857_);
return v___x_3862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object* v___x_3863_, lean_object* v_a_3864_, lean_object* v_k_3865_, lean_object* v___x_3866_, lean_object* v___x_3867_, lean_object* v___x_3868_, lean_object* v___x_3869_, lean_object* v___x_3870_, lean_object* v_FNew_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_){
_start:
{
uint8_t v___x_3509__boxed_3879_; uint8_t v___x_3510__boxed_3880_; uint8_t v___x_3511__boxed_3881_; lean_object* v_res_3882_; 
v___x_3509__boxed_3879_ = lean_unbox(v___x_3868_);
v___x_3510__boxed_3880_ = lean_unbox(v___x_3869_);
v___x_3511__boxed_3881_ = lean_unbox(v___x_3870_);
v_res_3882_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(v___x_3863_, v_a_3864_, v_k_3865_, v___x_3866_, v___x_3867_, v___x_3509__boxed_3879_, v___x_3510__boxed_3880_, v___x_3511__boxed_3881_, v_FNew_3871_, v___y_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_, v___y_3877_);
lean_dec(v___y_3877_);
lean_dec_ref(v___y_3876_);
lean_dec(v___y_3875_);
lean_dec_ref(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec(v___x_3866_);
return v_res_3882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object* v___x_3888_, lean_object* v___x_3889_, lean_object* v___x_3890_, lean_object* v___x_3891_, uint8_t v___x_3892_, uint8_t v___x_3893_, lean_object* v_k_3894_, lean_object* v___x_3895_, lean_object* v_00_u03b1_3896_, lean_object* v_00_u03b2_3897_, lean_object* v___x_3898_, lean_object* v_a_3899_, lean_object* v_x_3900_, lean_object* v_xs_3901_, lean_object* v_body_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; uint8_t v___x_3915_; lean_object* v___x_3916_; 
v___x_3910_ = lean_array_get(v___x_3888_, v_xs_3901_, v___x_3889_);
v___x_3911_ = lean_array_get(v___x_3888_, v_xs_3901_, v___x_3890_);
v___x_3912_ = lean_array_get_size(v_xs_3901_);
v___x_3913_ = l_Array_toSubarray___redArg(v_xs_3901_, v___x_3891_, v___x_3912_);
v___x_3914_ = l_Subarray_copy___redArg(v___x_3913_);
v___x_3915_ = 1;
v___x_3916_ = l_Lean_Meta_mkLambdaFVars(v___x_3914_, v_body_3902_, v___x_3892_, v___x_3893_, v___x_3892_, v___x_3893_, v___x_3915_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3943_; 
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v___x_3916_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3919_ = v___x_3916_;
v_isShared_3920_ = v_isSharedCheck_3943_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3916_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3943_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___f_3924_; lean_object* v___x_3925_; lean_object* v___x_3927_; 
v___x_3921_ = lean_box(v___x_3892_);
v___x_3922_ = lean_box(v___x_3893_);
v___x_3923_ = lean_box(v___x_3915_);
lean_inc(v___x_3910_);
lean_inc(v___x_3911_);
v___f_3924_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed), 16, 8);
lean_closure_set(v___f_3924_, 0, v___x_3911_);
lean_closure_set(v___f_3924_, 1, v_a_3917_);
lean_closure_set(v___f_3924_, 2, v_k_3894_);
lean_closure_set(v___f_3924_, 3, v___x_3895_);
lean_closure_set(v___f_3924_, 4, v___x_3910_);
lean_closure_set(v___f_3924_, 5, v___x_3921_);
lean_closure_set(v___f_3924_, 6, v___x_3922_);
lean_closure_set(v___f_3924_, 7, v___x_3923_);
v___x_3925_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2));
if (v_isShared_3920_ == 0)
{
lean_ctor_set_tag(v___x_3919_, 1);
lean_ctor_set(v___x_3919_, 0, v_00_u03b1_3896_);
v___x_3927_ = v___x_3919_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_00_u03b1_3896_);
v___x_3927_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; 
v___x_3928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3928_, 0, v_00_u03b2_3897_);
v___x_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3910_);
v___x_3930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3911_);
v___x_3931_ = lean_mk_empty_array_with_capacity(v___x_3898_);
v___x_3932_ = lean_array_push(v___x_3931_, v___x_3927_);
v___x_3933_ = lean_array_push(v___x_3932_, v___x_3928_);
v___x_3934_ = lean_array_push(v___x_3933_, v___x_3929_);
v___x_3935_ = lean_array_push(v___x_3934_, v___x_3930_);
v___x_3936_ = l_Lean_Meta_mkAppOptM(v___x_3925_, v___x_3935_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_);
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_object* v_a_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v_a_3937_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_a_3937_);
lean_dec_ref_known(v___x_3936_, 1);
v___x_3938_ = l_Lean_LocalDecl_type(v_a_3899_);
v___x_3939_ = l_Lean_Expr_replaceFVar(v___x_3938_, v_x_3900_, v_a_3937_);
lean_dec(v_a_3937_);
lean_dec_ref(v___x_3938_);
v___x_3940_ = l_Lean_LocalDecl_userName(v_a_3899_);
v___x_3941_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_3940_, v___x_3939_, v___f_3924_, v___y_3903_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_);
return v___x_3941_;
}
else
{
lean_dec_ref(v___f_3924_);
lean_dec_ref(v_x_3900_);
return v___x_3936_;
}
}
}
}
else
{
lean_dec(v___x_3911_);
lean_dec(v___x_3910_);
lean_dec_ref(v_x_3900_);
lean_dec_ref(v_00_u03b2_3897_);
lean_dec_ref(v_00_u03b1_3896_);
lean_dec(v___x_3895_);
lean_dec_ref(v_k_3894_);
return v___x_3916_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object** _args){
lean_object* v___x_3944_ = _args[0];
lean_object* v___x_3945_ = _args[1];
lean_object* v___x_3946_ = _args[2];
lean_object* v___x_3947_ = _args[3];
lean_object* v___x_3948_ = _args[4];
lean_object* v___x_3949_ = _args[5];
lean_object* v_k_3950_ = _args[6];
lean_object* v___x_3951_ = _args[7];
lean_object* v_00_u03b1_3952_ = _args[8];
lean_object* v_00_u03b2_3953_ = _args[9];
lean_object* v___x_3954_ = _args[10];
lean_object* v_a_3955_ = _args[11];
lean_object* v_x_3956_ = _args[12];
lean_object* v_xs_3957_ = _args[13];
lean_object* v_body_3958_ = _args[14];
lean_object* v___y_3959_ = _args[15];
lean_object* v___y_3960_ = _args[16];
lean_object* v___y_3961_ = _args[17];
lean_object* v___y_3962_ = _args[18];
lean_object* v___y_3963_ = _args[19];
lean_object* v___y_3964_ = _args[20];
lean_object* v___y_3965_ = _args[21];
_start:
{
uint8_t v___x_3536__boxed_3966_; uint8_t v___x_3537__boxed_3967_; lean_object* v_res_3968_; 
v___x_3536__boxed_3966_ = lean_unbox(v___x_3948_);
v___x_3537__boxed_3967_ = lean_unbox(v___x_3949_);
v_res_3968_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(v___x_3944_, v___x_3945_, v___x_3946_, v___x_3947_, v___x_3536__boxed_3966_, v___x_3537__boxed_3967_, v_k_3950_, v___x_3951_, v_00_u03b1_3952_, v_00_u03b2_3953_, v___x_3954_, v_a_3955_, v_x_3956_, v_xs_3957_, v_body_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
lean_dec(v___y_3964_);
lean_dec_ref(v___y_3963_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
lean_dec_ref(v_a_3955_);
lean_dec(v___x_3954_);
lean_dec(v___x_3946_);
lean_dec(v___x_3945_);
lean_dec_ref(v___x_3944_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object* v_x_3972_, lean_object* v_F_3973_, lean_object* v_val_3974_, lean_object* v_k_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_){
_start:
{
lean_object* v___y_3984_; lean_object* v___y_3985_; lean_object* v___y_3986_; lean_object* v___y_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___x_3992_; uint8_t v___y_3994_; uint8_t v___x_4085_; 
v___x_3992_ = l_Lean_instInhabitedExpr;
v___x_4085_ = l_Lean_Expr_isFVar(v_x_3972_);
if (v___x_4085_ == 0)
{
v___y_3994_ = v___x_4085_;
goto v___jp_3993_;
}
else
{
lean_object* v___x_4086_; lean_object* v___x_4087_; uint8_t v___x_4088_; 
v___x_4086_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4));
v___x_4087_ = lean_unsigned_to_nat(5u);
v___x_4088_ = l_Lean_Expr_isAppOfArity(v_val_3974_, v___x_4086_, v___x_4087_);
v___y_3994_ = v___x_4088_;
goto v___jp_3993_;
}
v___jp_3983_:
{
lean_object* v___x_3990_; lean_object* v___x_3991_; 
v___x_3990_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3);
v___x_3991_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(v___x_3990_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_);
return v___x_3991_;
}
v___jp_3993_:
{
if (v___y_3994_ == 0)
{
lean_object* v___x_3995_; 
lean_dec_ref(v_x_3972_);
lean_inc(v_a_3981_);
lean_inc_ref(v_a_3980_);
lean_inc(v_a_3979_);
lean_inc_ref(v_a_3978_);
lean_inc(v_a_3977_);
lean_inc_ref(v_a_3976_);
v___x_3995_ = lean_apply_9(v_k_3975_, v_F_3973_, v_val_3974_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_, lean_box(0));
return v___x_3995_;
}
else
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; uint8_t v___x_4002_; 
v___x_3996_ = lean_unsigned_to_nat(3u);
v___x_3997_ = l_Lean_Expr_getAppNumArgs(v_val_3974_);
v___x_3998_ = lean_nat_sub(v___x_3997_, v___x_3996_);
v___x_3999_ = lean_unsigned_to_nat(1u);
v___x_4000_ = lean_nat_sub(v___x_3998_, v___x_3999_);
lean_dec(v___x_3998_);
v___x_4001_ = l_Lean_Expr_getRevArg_x21(v_val_3974_, v___x_4000_);
v___x_4002_ = lean_expr_eqv(v___x_4001_, v_x_3972_);
lean_dec_ref(v___x_4001_);
if (v___x_4002_ == 0)
{
lean_object* v___x_4003_; 
lean_dec(v___x_3997_);
lean_dec_ref(v_x_3972_);
lean_inc(v_a_3981_);
lean_inc_ref(v_a_3980_);
lean_inc(v_a_3979_);
lean_inc_ref(v_a_3978_);
lean_inc(v_a_3977_);
lean_inc_ref(v_a_3976_);
v___x_4003_ = lean_apply_9(v_k_3975_, v_F_3973_, v_val_3974_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_, lean_box(0));
return v___x_4003_;
}
else
{
lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; uint8_t v___x_4008_; 
v___x_4004_ = lean_unsigned_to_nat(4u);
v___x_4005_ = lean_nat_sub(v___x_3997_, v___x_4004_);
v___x_4006_ = lean_nat_sub(v___x_4005_, v___x_3999_);
lean_dec(v___x_4005_);
v___x_4007_ = l_Lean_Expr_getRevArg_x21(v_val_3974_, v___x_4006_);
v___x_4008_ = l_Lean_Expr_isLambda(v___x_4007_);
if (v___x_4008_ == 0)
{
lean_object* v___x_4009_; 
lean_dec_ref(v___x_4007_);
lean_dec(v___x_3997_);
lean_dec_ref(v_x_3972_);
lean_inc(v_a_3981_);
lean_inc_ref(v_a_3980_);
lean_inc(v_a_3979_);
lean_inc_ref(v_a_3978_);
lean_inc(v_a_3977_);
lean_inc_ref(v_a_3976_);
v___x_4009_ = lean_apply_9(v_k_3975_, v_F_3973_, v_val_3974_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_, lean_box(0));
return v___x_4009_;
}
else
{
lean_object* v___x_4010_; uint8_t v___x_4011_; 
v___x_4010_ = l_Lean_Expr_bindingBody_x21(v___x_4007_);
lean_dec_ref(v___x_4007_);
v___x_4011_ = l_Lean_Expr_isLambda(v___x_4010_);
lean_dec_ref(v___x_4010_);
if (v___x_4011_ == 0)
{
lean_object* v___x_4012_; 
lean_dec(v___x_3997_);
lean_dec_ref(v_x_3972_);
lean_inc(v_a_3981_);
lean_inc_ref(v_a_3980_);
lean_inc(v_a_3979_);
lean_inc_ref(v_a_3978_);
lean_inc(v_a_3977_);
lean_inc_ref(v_a_3976_);
v___x_4012_ = lean_apply_9(v_k_3975_, v_F_3973_, v_val_3974_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_, lean_box(0));
return v___x_4012_;
}
else
{
lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4013_ = l_Lean_Expr_getAppFn(v_val_3974_);
v___x_4014_ = l_Lean_Expr_constLevels_x21(v___x_4013_);
lean_dec_ref(v___x_4013_);
if (lean_obj_tag(v___x_4014_) == 1)
{
lean_object* v_tail_4015_; 
v_tail_4015_ = lean_ctor_get(v___x_4014_, 1);
lean_inc(v_tail_4015_);
lean_dec_ref_known(v___x_4014_, 2);
if (lean_obj_tag(v_tail_4015_) == 1)
{
lean_object* v_tail_4016_; 
v_tail_4016_ = lean_ctor_get(v_tail_4015_, 1);
lean_inc(v_tail_4016_);
if (lean_obj_tag(v_tail_4016_) == 1)
{
lean_object* v_tail_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4083_; 
v_tail_4017_ = lean_ctor_get(v_tail_4016_, 1);
v_isSharedCheck_4083_ = !lean_is_exclusive(v_tail_4016_);
if (v_isSharedCheck_4083_ == 0)
{
lean_object* v_unused_4084_; 
v_unused_4084_ = lean_ctor_get(v_tail_4016_, 0);
lean_dec(v_unused_4084_);
v___x_4019_ = v_tail_4016_;
v_isShared_4020_ = v_isSharedCheck_4083_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_tail_4017_);
lean_dec(v_tail_4016_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4083_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
if (lean_obj_tag(v_tail_4017_) == 0)
{
lean_object* v_dummy_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v_args_4024_; lean_object* v___x_4025_; lean_object* v_00_u03b1_4026_; lean_object* v_00_u03b2_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v_dummy_4021_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
lean_inc(v___x_3997_);
v___x_4022_ = lean_mk_array(v___x_3997_, v_dummy_4021_);
v___x_4023_ = lean_nat_sub(v___x_3997_, v___x_3999_);
lean_dec(v___x_3997_);
v_args_4024_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_3974_, v___x_4022_, v___x_4023_);
v___x_4025_ = lean_unsigned_to_nat(0u);
v_00_u03b1_4026_ = lean_array_get(v___x_3992_, v_args_4024_, v___x_4025_);
v_00_u03b2_4027_ = lean_array_get(v___x_3992_, v_args_4024_, v___x_3999_);
v___x_4028_ = l_Lean_Expr_fvarId_x21(v_F_3973_);
v___x_4029_ = l_Lean_FVarId_getDecl___redArg(v___x_4028_, v_a_3978_, v_a_3980_, v_a_3981_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; lean_object* v___x_4031_; lean_object* v___f_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; uint8_t v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___f_4038_; lean_object* v___x_4039_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
lean_inc_n(v_a_4030_, 2);
lean_dec_ref_known(v___x_4029_, 1);
v___x_4031_ = lean_box(v___x_4008_);
lean_inc_ref_n(v_x_3972_, 2);
v___f_4032_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(v___f_4032_, 0, v_a_4030_);
lean_closure_set(v___f_4032_, 1, v___x_3992_);
lean_closure_set(v___f_4032_, 2, v___x_4025_);
lean_closure_set(v___f_4032_, 3, v_x_3972_);
lean_closure_set(v___f_4032_, 4, v___x_4031_);
v___x_4033_ = lean_unsigned_to_nat(2u);
v___x_4034_ = lean_array_get(v___x_3992_, v_args_4024_, v___x_4033_);
v___x_4035_ = 0;
v___x_4036_ = lean_box(v___x_4035_);
v___x_4037_ = lean_box(v___x_4008_);
lean_inc(v_00_u03b2_4027_);
lean_inc(v_00_u03b1_4026_);
v___f_4038_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed), 22, 13);
lean_closure_set(v___f_4038_, 0, v___x_3992_);
lean_closure_set(v___f_4038_, 1, v___x_4025_);
lean_closure_set(v___f_4038_, 2, v___x_3999_);
lean_closure_set(v___f_4038_, 3, v___x_4033_);
lean_closure_set(v___f_4038_, 4, v___x_4036_);
lean_closure_set(v___f_4038_, 5, v___x_4037_);
lean_closure_set(v___f_4038_, 6, v_k_3975_);
lean_closure_set(v___f_4038_, 7, v___x_3996_);
lean_closure_set(v___f_4038_, 8, v_00_u03b1_4026_);
lean_closure_set(v___f_4038_, 9, v_00_u03b2_4027_);
lean_closure_set(v___f_4038_, 10, v___x_4004_);
lean_closure_set(v___f_4038_, 11, v_a_4030_);
lean_closure_set(v___f_4038_, 12, v_x_3972_);
v___x_4039_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_4034_, v___f_4032_, v___x_4035_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_);
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_object* v_a_4040_; lean_object* v_fst_4041_; lean_object* v_snd_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; 
v_a_4040_ = lean_ctor_get(v___x_4039_, 0);
lean_inc(v_a_4040_);
lean_dec_ref_known(v___x_4039_, 1);
v_fst_4041_ = lean_ctor_get(v_a_4040_, 0);
lean_inc(v_fst_4041_);
v_snd_4042_ = lean_ctor_get(v_a_4040_, 1);
lean_inc(v_snd_4042_);
lean_dec(v_a_4040_);
v___x_4043_ = lean_array_get(v___x_3992_, v_args_4024_, v___x_4004_);
lean_dec_ref(v_args_4024_);
v___x_4044_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_4043_, v___f_4038_, v___x_4035_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4066_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4047_ = v___x_4044_;
v_isShared_4048_ = v_isSharedCheck_4066_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___x_4044_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4066_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v___x_4049_; lean_object* v___x_4051_; 
v___x_4049_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4));
if (v_isShared_4020_ == 0)
{
lean_ctor_set(v___x_4019_, 1, v_tail_4015_);
lean_ctor_set(v___x_4019_, 0, v_snd_4042_);
v___x_4051_ = v___x_4019_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v_snd_4042_);
lean_ctor_set(v_reuseFailAlloc_4065_, 1, v_tail_4015_);
v___x_4051_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4063_; 
v___x_4052_ = l_Lean_mkConst(v___x_4049_, v___x_4051_);
v___x_4053_ = lean_unsigned_to_nat(6u);
v___x_4054_ = lean_mk_empty_array_with_capacity(v___x_4053_);
v___x_4055_ = lean_array_push(v___x_4054_, v_00_u03b1_4026_);
v___x_4056_ = lean_array_push(v___x_4055_, v_00_u03b2_4027_);
v___x_4057_ = lean_array_push(v___x_4056_, v_fst_4041_);
v___x_4058_ = lean_array_push(v___x_4057_, v_x_3972_);
v___x_4059_ = lean_array_push(v___x_4058_, v_a_4045_);
v___x_4060_ = lean_array_push(v___x_4059_, v_F_3973_);
v___x_4061_ = l_Lean_mkAppN(v___x_4052_, v___x_4060_);
lean_dec_ref(v___x_4060_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 0, v___x_4061_);
v___x_4063_ = v___x_4047_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v___x_4061_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
return v___x_4063_;
}
}
}
}
else
{
lean_dec(v_snd_4042_);
lean_dec(v_fst_4041_);
lean_dec(v_00_u03b2_4027_);
lean_dec(v_00_u03b1_4026_);
lean_del_object(v___x_4019_);
lean_dec_ref_known(v_tail_4015_, 2);
lean_dec_ref(v_F_3973_);
lean_dec_ref(v_x_3972_);
return v___x_4044_;
}
}
else
{
lean_object* v_a_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4074_; 
lean_dec_ref(v___f_4038_);
lean_dec(v_00_u03b2_4027_);
lean_dec(v_00_u03b1_4026_);
lean_dec_ref(v_args_4024_);
lean_del_object(v___x_4019_);
lean_dec_ref_known(v_tail_4015_, 2);
lean_dec_ref(v_F_3973_);
lean_dec_ref(v_x_3972_);
v_a_4067_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4069_ = v___x_4039_;
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_a_4067_);
lean_dec(v___x_4039_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v___x_4072_; 
if (v_isShared_4070_ == 0)
{
v___x_4072_ = v___x_4069_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_a_4067_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
}
else
{
lean_object* v_a_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4082_; 
lean_dec(v_00_u03b2_4027_);
lean_dec(v_00_u03b1_4026_);
lean_dec_ref(v_args_4024_);
lean_del_object(v___x_4019_);
lean_dec_ref_known(v_tail_4015_, 2);
lean_dec_ref(v_k_3975_);
lean_dec_ref(v_F_3973_);
lean_dec_ref(v_x_3972_);
v_a_4075_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4077_ = v___x_4029_;
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_a_4075_);
lean_dec(v___x_4029_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4080_; 
if (v_isShared_4078_ == 0)
{
v___x_4080_ = v___x_4077_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_a_4075_);
v___x_4080_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
return v___x_4080_;
}
}
}
}
else
{
lean_del_object(v___x_4019_);
lean_dec(v_tail_4017_);
lean_dec_ref_known(v_tail_4015_, 2);
lean_dec(v___x_3997_);
lean_dec_ref(v_k_3975_);
lean_dec_ref(v_val_3974_);
lean_dec_ref(v_F_3973_);
lean_dec_ref(v_x_3972_);
v___y_3984_ = v_a_3976_;
v___y_3985_ = v_a_3977_;
v___y_3986_ = v_a_3978_;
v___y_3987_ = v_a_3979_;
v___y_3988_ = v_a_3980_;
v___y_3989_ = v_a_3981_;
goto v___jp_3983_;
}
}
}
else
{
lean_dec_ref_known(v_tail_4015_, 2);
lean_dec(v_tail_4016_);
lean_dec(v___x_3997_);
lean_dec_ref(v_k_3975_);
lean_dec_ref(v_val_3974_);
lean_dec_ref(v_F_3973_);
lean_dec_ref(v_x_3972_);
v___y_3984_ = v_a_3976_;
v___y_3985_ = v_a_3977_;
v___y_3986_ = v_a_3978_;
v___y_3987_ = v_a_3979_;
v___y_3988_ = v_a_3980_;
v___y_3989_ = v_a_3981_;
goto v___jp_3983_;
}
}
else
{
lean_dec(v_tail_4015_);
lean_dec(v___x_3997_);
lean_dec_ref(v_k_3975_);
lean_dec_ref(v_val_3974_);
lean_dec_ref(v_F_3973_);
lean_dec_ref(v_x_3972_);
v___y_3984_ = v_a_3976_;
v___y_3985_ = v_a_3977_;
v___y_3986_ = v_a_3978_;
v___y_3987_ = v_a_3979_;
v___y_3988_ = v_a_3980_;
v___y_3989_ = v_a_3981_;
goto v___jp_3983_;
}
}
else
{
lean_dec(v___x_4014_);
lean_dec(v___x_3997_);
lean_dec_ref(v_k_3975_);
lean_dec_ref(v_val_3974_);
lean_dec_ref(v_F_3973_);
lean_dec_ref(v_x_3972_);
v___y_3984_ = v_a_3976_;
v___y_3985_ = v_a_3977_;
v___y_3986_ = v_a_3978_;
v___y_3987_ = v_a_3979_;
v___y_3988_ = v_a_3980_;
v___y_3989_ = v_a_3981_;
goto v___jp_3983_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object* v___x_4089_, lean_object* v_a_4090_, lean_object* v_k_4091_, lean_object* v___x_4092_, lean_object* v___x_4093_, uint8_t v___x_4094_, uint8_t v___x_4095_, uint8_t v___x_4096_, lean_object* v_FNew_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_){
_start:
{
lean_object* v___x_4105_; 
lean_inc_ref(v_FNew_4097_);
lean_inc_ref(v___x_4089_);
v___x_4105_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v___x_4089_, v_FNew_4097_, v_a_4090_, v_k_4091_, v___y_4098_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_);
if (lean_obj_tag(v___x_4105_) == 0)
{
lean_object* v_a_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v_a_4106_ = lean_ctor_get(v___x_4105_, 0);
lean_inc(v_a_4106_);
lean_dec_ref_known(v___x_4105_, 1);
v___x_4107_ = lean_mk_empty_array_with_capacity(v___x_4092_);
v___x_4108_ = lean_array_push(v___x_4107_, v___x_4093_);
v___x_4109_ = lean_array_push(v___x_4108_, v___x_4089_);
v___x_4110_ = lean_array_push(v___x_4109_, v_FNew_4097_);
v___x_4111_ = l_Lean_Meta_mkLambdaFVars(v___x_4110_, v_a_4106_, v___x_4094_, v___x_4095_, v___x_4094_, v___x_4095_, v___x_4096_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_);
return v___x_4111_;
}
else
{
lean_dec_ref(v_FNew_4097_);
lean_dec_ref(v___x_4093_);
lean_dec_ref(v___x_4089_);
return v___x_4105_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___boxed(lean_object* v_x_4112_, lean_object* v_F_4113_, lean_object* v_val_4114_, lean_object* v_k_4115_, lean_object* v_a_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v_x_4112_, v_F_4113_, v_val_4114_, v_k_4115_, v_a_4116_, v_a_4117_, v_a_4118_, v_a_4119_, v_a_4120_, v_a_4121_);
lean_dec(v_a_4121_);
lean_dec_ref(v_a_4120_);
lean_dec(v_a_4119_);
lean_dec_ref(v_a_4118_);
lean_dec(v_a_4117_);
lean_dec_ref(v_a_4116_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v___x_4137_; 
v___x_4137_ = l_Lean_Elab_WF_applyCleanWfTactic(v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
if (lean_obj_tag(v___x_4137_) == 0)
{
lean_object* v_ref_4138_; uint8_t v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; 
lean_dec_ref_known(v___x_4137_, 1);
v_ref_4138_ = lean_ctor_get(v___y_4134_, 2);
v___x_4139_ = 0;
v___x_4140_ = l_Lean_SourceInfo_fromRef(v_ref_4138_, v___x_4139_);
v___x_4141_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1));
v___x_4142_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2));
lean_inc(v___x_4140_);
v___x_4143_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4143_, 0, v___x_4140_);
lean_ctor_set(v___x_4143_, 1, v___x_4142_);
v___x_4144_ = l_Lean_Syntax_node1(v___x_4140_, v___x_4141_, v___x_4143_);
v___x_4145_ = l_Lean_Elab_Tactic_evalTactic(v___x_4144_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
return v___x_4145_;
}
else
{
return v___x_4137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed(lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
lean_dec(v___y_4153_);
lean_dec_ref(v___y_4152_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec(v___y_4147_);
lean_dec_ref(v___y_4146_);
return v_res_4155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object* v_mvarId_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_){
_start:
{
lean_object* v___f_4165_; lean_object* v___x_4166_; 
v___f_4165_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0));
v___x_4166_ = l_Lean_Elab_Tactic_run(v_mvarId_4157_, v___f_4165_, v_a_4158_, v_a_4159_, v_a_4160_, v_a_4161_, v_a_4162_, v_a_4163_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4177_; 
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4166_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4169_ = v___x_4166_;
v_isShared_4170_ = v_isSharedCheck_4177_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4166_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4177_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
uint8_t v___x_4171_; 
v___x_4171_ = l_List_isEmpty___redArg(v_a_4167_);
if (v___x_4171_ == 0)
{
lean_object* v___x_4172_; 
lean_del_object(v___x_4169_);
v___x_4172_ = l_Lean_Elab_Term_reportUnsolvedGoals(v_a_4167_, v_a_4160_, v_a_4161_, v_a_4162_, v_a_4163_);
return v___x_4172_;
}
else
{
lean_object* v___x_4173_; lean_object* v___x_4175_; 
lean_dec(v_a_4167_);
v___x_4173_ = lean_box(0);
if (v_isShared_4170_ == 0)
{
lean_ctor_set(v___x_4169_, 0, v___x_4173_);
v___x_4175_ = v___x_4169_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v___x_4173_);
v___x_4175_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
return v___x_4175_;
}
}
}
}
else
{
lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4185_; 
v_a_4178_ = lean_ctor_get(v___x_4166_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v___x_4166_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4180_ = v___x_4166_;
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v___x_4166_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4183_; 
if (v_isShared_4181_ == 0)
{
v___x_4183_ = v___x_4180_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_a_4178_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
return v___x_4183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___boxed(lean_object* v_mvarId_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_){
_start:
{
lean_object* v_res_4194_; 
v_res_4194_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(v_mvarId_4186_, v_a_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_, v_a_4192_);
lean_dec(v_a_4192_);
lean_dec_ref(v_a_4191_);
lean_dec(v_a_4190_);
lean_dec_ref(v_a_4189_);
lean_dec(v_a_4188_);
lean_dec_ref(v_a_4187_);
return v_res_4194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object* v_x_4195_, lean_object* v_x_4196_, lean_object* v_x_4197_, lean_object* v_x_4198_){
_start:
{
lean_object* v_ks_4199_; lean_object* v_vs_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4224_; 
v_ks_4199_ = lean_ctor_get(v_x_4195_, 0);
v_vs_4200_ = lean_ctor_get(v_x_4195_, 1);
v_isSharedCheck_4224_ = !lean_is_exclusive(v_x_4195_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4202_ = v_x_4195_;
v_isShared_4203_ = v_isSharedCheck_4224_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_vs_4200_);
lean_inc(v_ks_4199_);
lean_dec(v_x_4195_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4224_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v___x_4204_; uint8_t v___x_4205_; 
v___x_4204_ = lean_array_get_size(v_ks_4199_);
v___x_4205_ = lean_nat_dec_lt(v_x_4196_, v___x_4204_);
if (v___x_4205_ == 0)
{
lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4209_; 
lean_dec(v_x_4196_);
v___x_4206_ = lean_array_push(v_ks_4199_, v_x_4197_);
v___x_4207_ = lean_array_push(v_vs_4200_, v_x_4198_);
if (v_isShared_4203_ == 0)
{
lean_ctor_set(v___x_4202_, 1, v___x_4207_);
lean_ctor_set(v___x_4202_, 0, v___x_4206_);
v___x_4209_ = v___x_4202_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v___x_4206_);
lean_ctor_set(v_reuseFailAlloc_4210_, 1, v___x_4207_);
v___x_4209_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
return v___x_4209_;
}
}
else
{
lean_object* v_k_x27_4211_; uint8_t v___x_4212_; 
v_k_x27_4211_ = lean_array_fget_borrowed(v_ks_4199_, v_x_4196_);
v___x_4212_ = l_Lean_instBEqMVarId_beq(v_x_4197_, v_k_x27_4211_);
if (v___x_4212_ == 0)
{
lean_object* v___x_4214_; 
if (v_isShared_4203_ == 0)
{
v___x_4214_ = v___x_4202_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v_ks_4199_);
lean_ctor_set(v_reuseFailAlloc_4218_, 1, v_vs_4200_);
v___x_4214_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___x_4215_ = lean_unsigned_to_nat(1u);
v___x_4216_ = lean_nat_add(v_x_4196_, v___x_4215_);
lean_dec(v_x_4196_);
v_x_4195_ = v___x_4214_;
v_x_4196_ = v___x_4216_;
goto _start;
}
}
else
{
lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4222_; 
v___x_4219_ = lean_array_fset(v_ks_4199_, v_x_4196_, v_x_4197_);
v___x_4220_ = lean_array_fset(v_vs_4200_, v_x_4196_, v_x_4198_);
lean_dec(v_x_4196_);
if (v_isShared_4203_ == 0)
{
lean_ctor_set(v___x_4202_, 1, v___x_4220_);
lean_ctor_set(v___x_4202_, 0, v___x_4219_);
v___x_4222_ = v___x_4202_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v___x_4219_);
lean_ctor_set(v_reuseFailAlloc_4223_, 1, v___x_4220_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_n_4225_, lean_object* v_k_4226_, lean_object* v_v_4227_){
_start:
{
lean_object* v___x_4228_; lean_object* v___x_4229_; 
v___x_4228_ = lean_unsigned_to_nat(0u);
v___x_4229_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_n_4225_, v___x_4228_, v_k_4226_, v_v_4227_);
return v___x_4229_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4230_; lean_object* v___x_4231_; 
v___x_4230_ = lean_box(0);
v___x_4231_ = l_unsafeCast___redArg(v___x_4230_);
return v___x_4231_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_4232_; 
v___x_4232_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_4232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(lean_object* v_x_4233_, size_t v_x_4234_, size_t v_x_4235_, lean_object* v_x_4236_, lean_object* v_x_4237_){
_start:
{
if (lean_obj_tag(v_x_4233_) == 0)
{
lean_object* v_es_4238_; size_t v___x_4239_; size_t v___x_4240_; lean_object* v_j_4241_; lean_object* v___x_4242_; uint8_t v___x_4243_; 
v_es_4238_ = lean_ctor_get(v_x_4233_, 0);
v___x_4239_ = ((size_t)31ULL);
v___x_4240_ = lean_usize_land(v_x_4234_, v___x_4239_);
v_j_4241_ = lean_usize_to_nat(v___x_4240_);
v___x_4242_ = lean_array_get_size(v_es_4238_);
v___x_4243_ = lean_nat_dec_lt(v_j_4241_, v___x_4242_);
if (v___x_4243_ == 0)
{
lean_dec(v_j_4241_);
lean_dec(v_x_4237_);
lean_dec(v_x_4236_);
return v_x_4233_;
}
else
{
lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4282_; 
lean_inc_ref(v_es_4238_);
v_isSharedCheck_4282_ = !lean_is_exclusive(v_x_4233_);
if (v_isSharedCheck_4282_ == 0)
{
lean_object* v_unused_4283_; 
v_unused_4283_ = lean_ctor_get(v_x_4233_, 0);
lean_dec(v_unused_4283_);
v___x_4245_ = v_x_4233_;
v_isShared_4246_ = v_isSharedCheck_4282_;
goto v_resetjp_4244_;
}
else
{
lean_dec(v_x_4233_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4282_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v_v_4247_; lean_object* v___x_4248_; lean_object* v_xs_x27_4249_; lean_object* v___y_4251_; 
v_v_4247_ = lean_array_fget(v_es_4238_, v_j_4241_);
v___x_4248_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_4249_ = lean_array_fset(v_es_4238_, v_j_4241_, v___x_4248_);
switch(lean_obj_tag(v_v_4247_))
{
case 0:
{
lean_object* v_key_4256_; lean_object* v_val_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4267_; 
v_key_4256_ = lean_ctor_get(v_v_4247_, 0);
v_val_4257_ = lean_ctor_get(v_v_4247_, 1);
v_isSharedCheck_4267_ = !lean_is_exclusive(v_v_4247_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4259_ = v_v_4247_;
v_isShared_4260_ = v_isSharedCheck_4267_;
goto v_resetjp_4258_;
}
else
{
lean_inc(v_val_4257_);
lean_inc(v_key_4256_);
lean_dec(v_v_4247_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4267_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
uint8_t v___x_4261_; 
v___x_4261_ = l_Lean_instBEqMVarId_beq(v_x_4236_, v_key_4256_);
if (v___x_4261_ == 0)
{
lean_object* v___x_4262_; lean_object* v___x_4263_; 
lean_del_object(v___x_4259_);
v___x_4262_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_4256_, v_val_4257_, v_x_4236_, v_x_4237_);
v___x_4263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4263_, 0, v___x_4262_);
v___y_4251_ = v___x_4263_;
goto v___jp_4250_;
}
else
{
lean_object* v___x_4265_; 
lean_dec(v_val_4257_);
lean_dec(v_key_4256_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 1, v_x_4237_);
lean_ctor_set(v___x_4259_, 0, v_x_4236_);
v___x_4265_ = v___x_4259_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_x_4236_);
lean_ctor_set(v_reuseFailAlloc_4266_, 1, v_x_4237_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
v___y_4251_ = v___x_4265_;
goto v___jp_4250_;
}
}
}
}
case 1:
{
lean_object* v_node_4268_; lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4280_; 
v_node_4268_ = lean_ctor_get(v_v_4247_, 0);
v_isSharedCheck_4280_ = !lean_is_exclusive(v_v_4247_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4270_ = v_v_4247_;
v_isShared_4271_ = v_isSharedCheck_4280_;
goto v_resetjp_4269_;
}
else
{
lean_inc(v_node_4268_);
lean_dec(v_v_4247_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4280_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
size_t v___x_4272_; size_t v___x_4273_; size_t v___x_4274_; size_t v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4278_; 
v___x_4272_ = ((size_t)5ULL);
v___x_4273_ = lean_usize_shift_right(v_x_4234_, v___x_4272_);
v___x_4274_ = ((size_t)1ULL);
v___x_4275_ = lean_usize_add(v_x_4235_, v___x_4274_);
v___x_4276_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_node_4268_, v___x_4273_, v___x_4275_, v_x_4236_, v_x_4237_);
if (v_isShared_4271_ == 0)
{
lean_ctor_set(v___x_4270_, 0, v___x_4276_);
v___x_4278_ = v___x_4270_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v___x_4276_);
v___x_4278_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
v___y_4251_ = v___x_4278_;
goto v___jp_4250_;
}
}
}
default: 
{
lean_object* v___x_4281_; 
v___x_4281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4281_, 0, v_x_4236_);
lean_ctor_set(v___x_4281_, 1, v_x_4237_);
v___y_4251_ = v___x_4281_;
goto v___jp_4250_;
}
}
v___jp_4250_:
{
lean_object* v___x_4252_; lean_object* v___x_4254_; 
v___x_4252_ = lean_array_fset(v_xs_x27_4249_, v_j_4241_, v___y_4251_);
lean_dec(v_j_4241_);
if (v_isShared_4246_ == 0)
{
lean_ctor_set(v___x_4245_, 0, v___x_4252_);
v___x_4254_ = v___x_4245_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4255_; 
v_reuseFailAlloc_4255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4255_, 0, v___x_4252_);
v___x_4254_ = v_reuseFailAlloc_4255_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
return v___x_4254_;
}
}
}
}
}
else
{
lean_object* v_ks_4284_; lean_object* v_vs_4285_; lean_object* v___x_4287_; uint8_t v_isShared_4288_; uint8_t v_isSharedCheck_4303_; 
v_ks_4284_ = lean_ctor_get(v_x_4233_, 0);
v_vs_4285_ = lean_ctor_get(v_x_4233_, 1);
v_isSharedCheck_4303_ = !lean_is_exclusive(v_x_4233_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4287_ = v_x_4233_;
v_isShared_4288_ = v_isSharedCheck_4303_;
goto v_resetjp_4286_;
}
else
{
lean_inc(v_vs_4285_);
lean_inc(v_ks_4284_);
lean_dec(v_x_4233_);
v___x_4287_ = lean_box(0);
v_isShared_4288_ = v_isSharedCheck_4303_;
goto v_resetjp_4286_;
}
v_resetjp_4286_:
{
lean_object* v___x_4290_; 
if (v_isShared_4288_ == 0)
{
v___x_4290_ = v___x_4287_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_ks_4284_);
lean_ctor_set(v_reuseFailAlloc_4302_, 1, v_vs_4285_);
v___x_4290_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
lean_object* v_newNode_4291_; size_t v___x_4292_; uint8_t v___x_4293_; 
v_newNode_4291_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(v___x_4290_, v_x_4236_, v_x_4237_);
v___x_4292_ = ((size_t)7ULL);
v___x_4293_ = lean_usize_dec_le(v___x_4292_, v_x_4235_);
if (v___x_4293_ == 0)
{
lean_object* v___x_4294_; lean_object* v___x_4295_; uint8_t v___x_4296_; 
v___x_4294_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_4291_);
v___x_4295_ = lean_unsigned_to_nat(4u);
v___x_4296_ = lean_nat_dec_lt(v___x_4294_, v___x_4295_);
lean_dec(v___x_4294_);
if (v___x_4296_ == 0)
{
lean_object* v_ks_4297_; lean_object* v_vs_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
v_ks_4297_ = lean_ctor_get(v_newNode_4291_, 0);
lean_inc_ref(v_ks_4297_);
v_vs_4298_ = lean_ctor_get(v_newNode_4291_, 1);
lean_inc_ref(v_vs_4298_);
lean_dec_ref(v_newNode_4291_);
v___x_4299_ = lean_unsigned_to_nat(0u);
v___x_4300_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_4301_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_x_4235_, v_ks_4297_, v_vs_4298_, v___x_4299_, v___x_4300_);
lean_dec_ref(v_vs_4298_);
lean_dec_ref(v_ks_4297_);
return v___x_4301_;
}
else
{
return v_newNode_4291_;
}
}
else
{
return v_newNode_4291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(size_t v_depth_4304_, lean_object* v_keys_4305_, lean_object* v_vals_4306_, lean_object* v_i_4307_, lean_object* v_entries_4308_){
_start:
{
lean_object* v___x_4309_; uint8_t v___x_4310_; 
v___x_4309_ = lean_array_get_size(v_keys_4305_);
v___x_4310_ = lean_nat_dec_lt(v_i_4307_, v___x_4309_);
if (v___x_4310_ == 0)
{
lean_dec(v_i_4307_);
return v_entries_4308_;
}
else
{
lean_object* v_k_4311_; lean_object* v_v_4312_; uint64_t v___x_4313_; size_t v_h_4314_; size_t v___x_4315_; lean_object* v___x_4316_; size_t v___x_4317_; size_t v___x_4318_; size_t v___x_4319_; size_t v_h_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
v_k_4311_ = lean_array_fget_borrowed(v_keys_4305_, v_i_4307_);
v_v_4312_ = lean_array_fget_borrowed(v_vals_4306_, v_i_4307_);
v___x_4313_ = l_Lean_instHashableMVarId_hash(v_k_4311_);
v_h_4314_ = lean_uint64_to_usize(v___x_4313_);
v___x_4315_ = ((size_t)5ULL);
v___x_4316_ = lean_unsigned_to_nat(1u);
v___x_4317_ = ((size_t)1ULL);
v___x_4318_ = lean_usize_sub(v_depth_4304_, v___x_4317_);
v___x_4319_ = lean_usize_mul(v___x_4315_, v___x_4318_);
v_h_4320_ = lean_usize_shift_right(v_h_4314_, v___x_4319_);
v___x_4321_ = lean_nat_add(v_i_4307_, v___x_4316_);
lean_dec(v_i_4307_);
lean_inc(v_v_4312_);
lean_inc(v_k_4311_);
v___x_4322_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_entries_4308_, v_h_4320_, v_depth_4304_, v_k_4311_, v_v_4312_);
v_i_4307_ = v___x_4321_;
v_entries_4308_ = v___x_4322_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_depth_4324_, lean_object* v_keys_4325_, lean_object* v_vals_4326_, lean_object* v_i_4327_, lean_object* v_entries_4328_){
_start:
{
size_t v_depth_boxed_4329_; lean_object* v_res_4330_; 
v_depth_boxed_4329_ = lean_unbox_usize(v_depth_4324_);
lean_dec(v_depth_4324_);
v_res_4330_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_boxed_4329_, v_keys_4325_, v_vals_4326_, v_i_4327_, v_entries_4328_);
lean_dec_ref(v_vals_4326_);
lean_dec_ref(v_keys_4325_);
return v_res_4330_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_4331_, lean_object* v_x_4332_, lean_object* v_x_4333_, lean_object* v_x_4334_, lean_object* v_x_4335_){
_start:
{
size_t v_x_3992__boxed_4336_; size_t v_x_3993__boxed_4337_; lean_object* v_res_4338_; 
v_x_3992__boxed_4336_ = lean_unbox_usize(v_x_4332_);
lean_dec(v_x_4332_);
v_x_3993__boxed_4337_ = lean_unbox_usize(v_x_4333_);
lean_dec(v_x_4333_);
v_res_4338_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4331_, v_x_3992__boxed_4336_, v_x_3993__boxed_4337_, v_x_4334_, v_x_4335_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object* v_x_4339_, lean_object* v_x_4340_, lean_object* v_x_4341_){
_start:
{
uint64_t v___x_4342_; size_t v___x_4343_; size_t v___x_4344_; lean_object* v___x_4345_; 
v___x_4342_ = l_Lean_instHashableMVarId_hash(v_x_4340_);
v___x_4343_ = lean_uint64_to_usize(v___x_4342_);
v___x_4344_ = ((size_t)1ULL);
v___x_4345_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4339_, v___x_4343_, v___x_4344_, v_x_4340_, v_x_4341_);
return v___x_4345_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object* v_mvarId_4346_, lean_object* v_val_4347_, lean_object* v___y_4348_){
_start:
{
lean_object* v___x_4350_; lean_object* v_mctx_4351_; lean_object* v_cache_4352_; lean_object* v_zetaDeltaFVarIds_4353_; lean_object* v_postponed_4354_; lean_object* v_diag_4355_; lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4384_; 
v___x_4350_ = lean_st_ref_take(v___y_4348_);
v_mctx_4351_ = lean_ctor_get(v___x_4350_, 0);
v_cache_4352_ = lean_ctor_get(v___x_4350_, 1);
v_zetaDeltaFVarIds_4353_ = lean_ctor_get(v___x_4350_, 2);
v_postponed_4354_ = lean_ctor_get(v___x_4350_, 3);
v_diag_4355_ = lean_ctor_get(v___x_4350_, 4);
v_isSharedCheck_4384_ = !lean_is_exclusive(v___x_4350_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4357_ = v___x_4350_;
v_isShared_4358_ = v_isSharedCheck_4384_;
goto v_resetjp_4356_;
}
else
{
lean_inc(v_diag_4355_);
lean_inc(v_postponed_4354_);
lean_inc(v_zetaDeltaFVarIds_4353_);
lean_inc(v_cache_4352_);
lean_inc(v_mctx_4351_);
lean_dec(v___x_4350_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4384_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v_depth_4359_; lean_object* v_levelAssignDepth_4360_; lean_object* v_lmvarCounter_4361_; lean_object* v_mvarCounter_4362_; lean_object* v_lDecls_4363_; lean_object* v_decls_4364_; lean_object* v_userNames_4365_; lean_object* v_lAssignment_4366_; lean_object* v_eAssignment_4367_; lean_object* v_dAssignment_4368_; lean_object* v_instanceTypedMVars_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4383_; 
v_depth_4359_ = lean_ctor_get(v_mctx_4351_, 0);
v_levelAssignDepth_4360_ = lean_ctor_get(v_mctx_4351_, 1);
v_lmvarCounter_4361_ = lean_ctor_get(v_mctx_4351_, 2);
v_mvarCounter_4362_ = lean_ctor_get(v_mctx_4351_, 3);
v_lDecls_4363_ = lean_ctor_get(v_mctx_4351_, 4);
v_decls_4364_ = lean_ctor_get(v_mctx_4351_, 5);
v_userNames_4365_ = lean_ctor_get(v_mctx_4351_, 6);
v_lAssignment_4366_ = lean_ctor_get(v_mctx_4351_, 7);
v_eAssignment_4367_ = lean_ctor_get(v_mctx_4351_, 8);
v_dAssignment_4368_ = lean_ctor_get(v_mctx_4351_, 9);
v_instanceTypedMVars_4369_ = lean_ctor_get(v_mctx_4351_, 10);
v_isSharedCheck_4383_ = !lean_is_exclusive(v_mctx_4351_);
if (v_isSharedCheck_4383_ == 0)
{
v___x_4371_ = v_mctx_4351_;
v_isShared_4372_ = v_isSharedCheck_4383_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_instanceTypedMVars_4369_);
lean_inc(v_dAssignment_4368_);
lean_inc(v_eAssignment_4367_);
lean_inc(v_lAssignment_4366_);
lean_inc(v_userNames_4365_);
lean_inc(v_decls_4364_);
lean_inc(v_lDecls_4363_);
lean_inc(v_mvarCounter_4362_);
lean_inc(v_lmvarCounter_4361_);
lean_inc(v_levelAssignDepth_4360_);
lean_inc(v_depth_4359_);
lean_dec(v_mctx_4351_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4383_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4376_; 
v___x_4373_ = lean_box(0);
v___x_4374_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(v_eAssignment_4367_, v_mvarId_4346_, v_val_4347_);
if (v_isShared_4372_ == 0)
{
lean_ctor_set(v___x_4371_, 8, v___x_4374_);
v___x_4376_ = v___x_4371_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v_depth_4359_);
lean_ctor_set(v_reuseFailAlloc_4382_, 1, v_levelAssignDepth_4360_);
lean_ctor_set(v_reuseFailAlloc_4382_, 2, v_lmvarCounter_4361_);
lean_ctor_set(v_reuseFailAlloc_4382_, 3, v_mvarCounter_4362_);
lean_ctor_set(v_reuseFailAlloc_4382_, 4, v_lDecls_4363_);
lean_ctor_set(v_reuseFailAlloc_4382_, 5, v_decls_4364_);
lean_ctor_set(v_reuseFailAlloc_4382_, 6, v_userNames_4365_);
lean_ctor_set(v_reuseFailAlloc_4382_, 7, v_lAssignment_4366_);
lean_ctor_set(v_reuseFailAlloc_4382_, 8, v___x_4374_);
lean_ctor_set(v_reuseFailAlloc_4382_, 9, v_dAssignment_4368_);
lean_ctor_set(v_reuseFailAlloc_4382_, 10, v_instanceTypedMVars_4369_);
v___x_4376_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
lean_object* v___x_4378_; 
if (v_isShared_4358_ == 0)
{
lean_ctor_set(v___x_4357_, 0, v___x_4376_);
v___x_4378_ = v___x_4357_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v___x_4376_);
lean_ctor_set(v_reuseFailAlloc_4381_, 1, v_cache_4352_);
lean_ctor_set(v_reuseFailAlloc_4381_, 2, v_zetaDeltaFVarIds_4353_);
lean_ctor_set(v_reuseFailAlloc_4381_, 3, v_postponed_4354_);
lean_ctor_set(v_reuseFailAlloc_4381_, 4, v_diag_4355_);
v___x_4378_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
lean_object* v___x_4379_; lean_object* v___x_4380_; 
v___x_4379_ = lean_st_ref_put(v___y_4348_, v___x_4378_);
v___x_4380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4380_, 0, v___x_4373_);
return v___x_4380_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object* v_mvarId_4385_, lean_object* v_val_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_){
_start:
{
lean_object* v_res_4389_; 
v_res_4389_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mvarId_4385_, v_val_4386_, v___y_4387_);
lean_dec(v___y_4387_);
return v_res_4389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object* v_mv_u2081_4394_, lean_object* v_mv_u2082_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_){
_start:
{
lean_object* v___x_4404_; 
lean_inc(v_mv_u2081_4394_);
v___x_4404_ = l_Lean_MVarId_getDecl(v_mv_u2081_4394_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_object* v_a_4405_; lean_object* v___x_4406_; 
v_a_4405_ = lean_ctor_get(v___x_4404_, 0);
lean_inc(v_a_4405_);
lean_dec_ref_known(v___x_4404_, 1);
lean_inc(v_mv_u2082_4395_);
v___x_4406_ = l_Lean_MVarId_getDecl(v_mv_u2082_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
if (lean_obj_tag(v___x_4406_) == 0)
{
lean_object* v_a_4407_; lean_object* v_lctx_4408_; lean_object* v_type_4409_; lean_object* v_lctx_4410_; lean_object* v_type_4411_; uint8_t v___x_4412_; 
v_a_4407_ = lean_ctor_get(v___x_4406_, 0);
lean_inc(v_a_4407_);
lean_dec_ref_known(v___x_4406_, 1);
v_lctx_4408_ = lean_ctor_get(v_a_4405_, 1);
lean_inc_ref(v_lctx_4408_);
v_type_4409_ = lean_ctor_get(v_a_4405_, 2);
lean_inc_ref(v_type_4409_);
lean_dec(v_a_4405_);
v_lctx_4410_ = lean_ctor_get(v_a_4407_, 1);
lean_inc_ref(v_lctx_4410_);
v_type_4411_ = lean_ctor_get(v_a_4407_, 2);
lean_inc_ref(v_type_4411_);
lean_dec(v_a_4407_);
v___x_4412_ = lean_expr_eqv(v_type_4409_, v_type_4411_);
lean_dec_ref(v_type_4411_);
lean_dec_ref(v_type_4409_);
if (v___x_4412_ == 0)
{
lean_dec_ref(v_lctx_4410_);
lean_dec_ref(v_lctx_4408_);
lean_dec(v_mv_u2082_4395_);
lean_dec(v_mv_u2081_4394_);
goto v___jp_4401_;
}
else
{
lean_object* v___x_4413_; uint8_t v___x_4414_; 
v___x_4413_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
v___x_4414_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_4408_, v_lctx_4410_, v___x_4413_);
if (v___x_4414_ == 0)
{
uint8_t v___x_4415_; 
v___x_4415_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_4410_, v_lctx_4408_, v___x_4413_);
lean_dec_ref(v_lctx_4408_);
lean_dec_ref(v_lctx_4410_);
if (v___x_4415_ == 0)
{
lean_dec(v_mv_u2082_4395_);
lean_dec(v_mv_u2081_4394_);
goto v___jp_4401_;
}
else
{
lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4427_; 
v___x_4416_ = l_Lean_Expr_mvar___override(v_mv_u2082_4395_);
v___x_4417_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mv_u2081_4394_, v___x_4416_, v___y_4397_);
v_isSharedCheck_4427_ = !lean_is_exclusive(v___x_4417_);
if (v_isSharedCheck_4427_ == 0)
{
lean_object* v_unused_4428_; 
v_unused_4428_ = lean_ctor_get(v___x_4417_, 0);
lean_dec(v_unused_4428_);
v___x_4419_ = v___x_4417_;
v_isShared_4420_ = v_isSharedCheck_4427_;
goto v_resetjp_4418_;
}
else
{
lean_dec(v___x_4417_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4427_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4425_; 
v___x_4421_ = lean_box(v___x_4414_);
v___x_4422_ = lean_box(v___x_4412_);
v___x_4423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4421_);
lean_ctor_set(v___x_4423_, 1, v___x_4422_);
if (v_isShared_4420_ == 0)
{
lean_ctor_set(v___x_4419_, 0, v___x_4423_);
v___x_4425_ = v___x_4419_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4426_; 
v_reuseFailAlloc_4426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4426_, 0, v___x_4423_);
v___x_4425_ = v_reuseFailAlloc_4426_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
return v___x_4425_;
}
}
}
}
else
{
lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4441_; 
lean_dec_ref(v_lctx_4410_);
lean_dec_ref(v_lctx_4408_);
v___x_4429_ = l_Lean_Expr_mvar___override(v_mv_u2081_4394_);
v___x_4430_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mv_u2082_4395_, v___x_4429_, v___y_4397_);
v_isSharedCheck_4441_ = !lean_is_exclusive(v___x_4430_);
if (v_isSharedCheck_4441_ == 0)
{
lean_object* v_unused_4442_; 
v_unused_4442_ = lean_ctor_get(v___x_4430_, 0);
lean_dec(v_unused_4442_);
v___x_4432_ = v___x_4430_;
v_isShared_4433_ = v_isSharedCheck_4441_;
goto v_resetjp_4431_;
}
else
{
lean_dec(v___x_4430_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4441_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
uint8_t v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4439_; 
v___x_4434_ = 0;
v___x_4435_ = lean_box(v___x_4412_);
v___x_4436_ = lean_box(v___x_4434_);
v___x_4437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4435_);
lean_ctor_set(v___x_4437_, 1, v___x_4436_);
if (v_isShared_4433_ == 0)
{
lean_ctor_set(v___x_4432_, 0, v___x_4437_);
v___x_4439_ = v___x_4432_;
goto v_reusejp_4438_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v___x_4437_);
v___x_4439_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4438_;
}
v_reusejp_4438_:
{
return v___x_4439_;
}
}
}
}
}
else
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4450_; 
lean_dec(v_a_4405_);
lean_dec(v_mv_u2082_4395_);
lean_dec(v_mv_u2081_4394_);
v_a_4443_ = lean_ctor_get(v___x_4406_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4406_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4445_ = v___x_4406_;
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4406_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4448_; 
if (v_isShared_4446_ == 0)
{
v___x_4448_ = v___x_4445_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v_a_4443_);
v___x_4448_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
return v___x_4448_;
}
}
}
}
else
{
lean_object* v_a_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4458_; 
lean_dec(v_mv_u2082_4395_);
lean_dec(v_mv_u2081_4394_);
v_a_4451_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4458_ == 0)
{
v___x_4453_ = v___x_4404_;
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_a_4451_);
lean_dec(v___x_4404_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v___x_4456_; 
if (v_isShared_4454_ == 0)
{
v___x_4456_ = v___x_4453_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_a_4451_);
v___x_4456_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
return v___x_4456_;
}
}
}
v___jp_4401_:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4402_ = ((lean_object*)(l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0));
v___x_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4402_);
return v___x_4403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object* v_mv_u2081_4459_, lean_object* v_mv_u2082_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l_Lean_Elab_WF_assignSubsumed___lam__0(v_mv_u2081_4459_, v_mv_u2082_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
lean_dec(v___y_4462_);
lean_dec_ref(v___y_4461_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(lean_object* v___x_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_){
_start:
{
lean_object* v___x_4473_; 
v___x_4473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4473_, 0, v___x_4467_);
return v___x_4473_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed(lean_object* v___x_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_){
_start:
{
lean_object* v_res_4480_; 
v_res_4480_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(v___x_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_);
lean_dec(v___y_4478_);
lean_dec_ref(v___y_4477_);
lean_dec(v___y_4476_);
lean_dec_ref(v___y_4475_);
return v_res_4480_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(lean_object* v_f_4481_, lean_object* v___x_4482_, lean_object* v___x_4483_, lean_object* v___x_4484_, lean_object* v_a_4485_, uint8_t v___x_4486_, lean_object* v_snd_4487_, lean_object* v_fst_4488_, lean_object* v_next_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_){
_start:
{
lean_object* v___x_4495_; 
v___x_4495_ = lean_apply_7(v_f_4481_, v___x_4482_, v___x_4483_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_, lean_box(0));
if (lean_obj_tag(v___x_4495_) == 0)
{
lean_object* v_a_4496_; lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4531_; 
v_a_4496_ = lean_ctor_get(v___x_4495_, 0);
v_isSharedCheck_4531_ = !lean_is_exclusive(v___x_4495_);
if (v_isSharedCheck_4531_ == 0)
{
v___x_4498_ = v___x_4495_;
v_isShared_4499_ = v_isSharedCheck_4531_;
goto v_resetjp_4497_;
}
else
{
lean_inc(v_a_4496_);
lean_dec(v___x_4495_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4531_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v_fst_4500_; lean_object* v_snd_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4530_; 
v_fst_4500_ = lean_ctor_get(v_a_4496_, 0);
v_snd_4501_ = lean_ctor_get(v_a_4496_, 1);
v_isSharedCheck_4530_ = !lean_is_exclusive(v_a_4496_);
if (v_isSharedCheck_4530_ == 0)
{
v___x_4503_ = v_a_4496_;
v_isShared_4504_ = v_isSharedCheck_4530_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_snd_4501_);
lean_inc(v_fst_4500_);
lean_dec(v_a_4496_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4530_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v_removed_4506_; lean_object* v_numRemoved_4507_; uint8_t v___x_4526_; 
v___x_4526_ = lean_unbox(v_fst_4500_);
lean_dec(v_fst_4500_);
if (v___x_4526_ == 0)
{
lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4527_ = lean_nat_add(v_snd_4487_, v___x_4484_);
lean_dec(v_snd_4487_);
v___x_4528_ = lean_box(v___x_4486_);
v___x_4529_ = lean_array_set(v_fst_4488_, v_next_4489_, v___x_4528_);
v_removed_4506_ = v___x_4529_;
v_numRemoved_4507_ = v___x_4527_;
goto v___jp_4505_;
}
else
{
v_removed_4506_ = v_fst_4488_;
v_numRemoved_4507_ = v_snd_4487_;
goto v___jp_4505_;
}
v___jp_4505_:
{
uint8_t v___x_4508_; 
v___x_4508_ = lean_unbox(v_snd_4501_);
lean_dec(v_snd_4501_);
if (v___x_4508_ == 0)
{
lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4513_; 
v___x_4509_ = lean_nat_add(v_numRemoved_4507_, v___x_4484_);
lean_dec(v_numRemoved_4507_);
v___x_4510_ = lean_box(v___x_4486_);
v___x_4511_ = lean_array_set(v_removed_4506_, v_a_4485_, v___x_4510_);
if (v_isShared_4504_ == 0)
{
lean_ctor_set(v___x_4503_, 1, v___x_4509_);
lean_ctor_set(v___x_4503_, 0, v___x_4511_);
v___x_4513_ = v___x_4503_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v___x_4511_);
lean_ctor_set(v_reuseFailAlloc_4518_, 1, v___x_4509_);
v___x_4513_ = v_reuseFailAlloc_4518_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
lean_object* v___x_4514_; lean_object* v___x_4516_; 
v___x_4514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4513_);
if (v_isShared_4499_ == 0)
{
lean_ctor_set(v___x_4498_, 0, v___x_4514_);
v___x_4516_ = v___x_4498_;
goto v_reusejp_4515_;
}
else
{
lean_object* v_reuseFailAlloc_4517_; 
v_reuseFailAlloc_4517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4517_, 0, v___x_4514_);
v___x_4516_ = v_reuseFailAlloc_4517_;
goto v_reusejp_4515_;
}
v_reusejp_4515_:
{
return v___x_4516_;
}
}
}
else
{
lean_object* v___x_4520_; 
if (v_isShared_4504_ == 0)
{
lean_ctor_set(v___x_4503_, 1, v_numRemoved_4507_);
lean_ctor_set(v___x_4503_, 0, v_removed_4506_);
v___x_4520_ = v___x_4503_;
goto v_reusejp_4519_;
}
else
{
lean_object* v_reuseFailAlloc_4525_; 
v_reuseFailAlloc_4525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4525_, 0, v_removed_4506_);
lean_ctor_set(v_reuseFailAlloc_4525_, 1, v_numRemoved_4507_);
v___x_4520_ = v_reuseFailAlloc_4525_;
goto v_reusejp_4519_;
}
v_reusejp_4519_:
{
lean_object* v___x_4521_; lean_object* v___x_4523_; 
v___x_4521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4520_);
if (v_isShared_4499_ == 0)
{
lean_ctor_set(v___x_4498_, 0, v___x_4521_);
v___x_4523_ = v___x_4498_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4524_; 
v_reuseFailAlloc_4524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4524_, 0, v___x_4521_);
v___x_4523_ = v_reuseFailAlloc_4524_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
return v___x_4523_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4539_; 
lean_dec(v_fst_4488_);
lean_dec(v_snd_4487_);
v_a_4532_ = lean_ctor_get(v___x_4495_, 0);
v_isSharedCheck_4539_ = !lean_is_exclusive(v___x_4495_);
if (v_isSharedCheck_4539_ == 0)
{
v___x_4534_ = v___x_4495_;
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4495_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v___x_4537_; 
if (v_isShared_4535_ == 0)
{
v___x_4537_ = v___x_4534_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v_a_4532_);
v___x_4537_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
return v___x_4537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_f_4540_, lean_object* v___x_4541_, lean_object* v___x_4542_, lean_object* v___x_4543_, lean_object* v_a_4544_, lean_object* v___x_4545_, lean_object* v_snd_4546_, lean_object* v_fst_4547_, lean_object* v_next_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_){
_start:
{
uint8_t v___x_4367__boxed_4554_; lean_object* v_res_4555_; 
v___x_4367__boxed_4554_ = lean_unbox(v___x_4545_);
v_res_4555_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(v_f_4540_, v___x_4541_, v___x_4542_, v___x_4543_, v_a_4544_, v___x_4367__boxed_4554_, v_snd_4546_, v_fst_4547_, v_next_4548_, v___y_4549_, v___y_4550_, v___y_4551_, v___y_4552_);
lean_dec(v_next_4548_);
lean_dec(v_a_4544_);
lean_dec(v___x_4543_);
return v_res_4555_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(lean_object* v_upperBound_4556_, lean_object* v_a_4557_, lean_object* v_next_4558_, lean_object* v_f_4559_, lean_object* v_a_4560_, lean_object* v_b_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_){
_start:
{
uint8_t v___x_4567_; 
v___x_4567_ = lean_nat_dec_lt(v_a_4560_, v_upperBound_4556_);
if (v___x_4567_ == 0)
{
lean_object* v___x_4568_; 
lean_dec(v_a_4560_);
lean_dec_ref(v_f_4559_);
lean_dec(v_next_4558_);
v___x_4568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4568_, 0, v_b_4561_);
return v___x_4568_;
}
else
{
lean_object* v_fst_4569_; lean_object* v_snd_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4617_; 
v_fst_4569_ = lean_ctor_get(v_b_4561_, 0);
v_snd_4570_ = lean_ctor_get(v_b_4561_, 1);
v_isSharedCheck_4617_ = !lean_is_exclusive(v_b_4561_);
if (v_isSharedCheck_4617_ == 0)
{
v___x_4572_ = v_b_4561_;
v_isShared_4573_ = v_isSharedCheck_4617_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_snd_4570_);
lean_inc(v_fst_4569_);
lean_dec(v_b_4561_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4617_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4574_; lean_object* v___y_4576_; uint8_t v___y_4599_; uint8_t v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; uint8_t v___x_4612_; 
v___x_4574_ = lean_unsigned_to_nat(1u);
v___x_4609_ = 0;
v___x_4610_ = lean_box(v___x_4609_);
v___x_4611_ = lean_array_get(v___x_4610_, v_fst_4569_, v_next_4558_);
lean_dec(v___x_4610_);
v___x_4612_ = lean_unbox(v___x_4611_);
if (v___x_4612_ == 0)
{
lean_object* v___x_4613_; lean_object* v___x_4614_; uint8_t v___x_4615_; 
lean_dec(v___x_4611_);
v___x_4613_ = lean_box(v___x_4609_);
v___x_4614_ = lean_array_get(v___x_4613_, v_fst_4569_, v_a_4560_);
lean_dec(v___x_4613_);
v___x_4615_ = lean_unbox(v___x_4614_);
lean_dec(v___x_4614_);
v___y_4599_ = v___x_4615_;
goto v___jp_4598_;
}
else
{
uint8_t v___x_4616_; 
v___x_4616_ = lean_unbox(v___x_4611_);
lean_dec(v___x_4611_);
v___y_4599_ = v___x_4616_;
goto v___jp_4598_;
}
v___jp_4575_:
{
lean_object* v___x_4577_; 
lean_inc(v___y_4565_);
lean_inc_ref(v___y_4564_);
lean_inc(v___y_4563_);
lean_inc_ref(v___y_4562_);
v___x_4577_ = lean_apply_5(v___y_4576_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, lean_box(0));
if (lean_obj_tag(v___x_4577_) == 0)
{
lean_object* v_a_4578_; lean_object* v___x_4580_; uint8_t v_isShared_4581_; uint8_t v_isSharedCheck_4589_; 
v_a_4578_ = lean_ctor_get(v___x_4577_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___x_4577_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4580_ = v___x_4577_;
v_isShared_4581_ = v_isSharedCheck_4589_;
goto v_resetjp_4579_;
}
else
{
lean_inc(v_a_4578_);
lean_dec(v___x_4577_);
v___x_4580_ = lean_box(0);
v_isShared_4581_ = v_isSharedCheck_4589_;
goto v_resetjp_4579_;
}
v_resetjp_4579_:
{
if (lean_obj_tag(v_a_4578_) == 0)
{
lean_object* v_a_4582_; lean_object* v___x_4584_; 
lean_dec(v_a_4560_);
lean_dec_ref(v_f_4559_);
lean_dec(v_next_4558_);
v_a_4582_ = lean_ctor_get(v_a_4578_, 0);
lean_inc(v_a_4582_);
lean_dec_ref_known(v_a_4578_, 1);
if (v_isShared_4581_ == 0)
{
lean_ctor_set(v___x_4580_, 0, v_a_4582_);
v___x_4584_ = v___x_4580_;
goto v_reusejp_4583_;
}
else
{
lean_object* v_reuseFailAlloc_4585_; 
v_reuseFailAlloc_4585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4585_, 0, v_a_4582_);
v___x_4584_ = v_reuseFailAlloc_4585_;
goto v_reusejp_4583_;
}
v_reusejp_4583_:
{
return v___x_4584_;
}
}
else
{
lean_object* v_a_4586_; lean_object* v___x_4587_; 
lean_del_object(v___x_4580_);
v_a_4586_ = lean_ctor_get(v_a_4578_, 0);
lean_inc(v_a_4586_);
lean_dec_ref_known(v_a_4578_, 1);
v___x_4587_ = lean_nat_add(v_a_4560_, v___x_4574_);
lean_dec(v_a_4560_);
v_a_4560_ = v___x_4587_;
v_b_4561_ = v_a_4586_;
goto _start;
}
}
}
else
{
lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4597_; 
lean_dec(v_a_4560_);
lean_dec_ref(v_f_4559_);
lean_dec(v_next_4558_);
v_a_4590_ = lean_ctor_get(v___x_4577_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v___x_4577_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4592_ = v___x_4577_;
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v___x_4577_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4595_; 
if (v_isShared_4593_ == 0)
{
v___x_4595_ = v___x_4592_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v_a_4590_);
v___x_4595_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
return v___x_4595_;
}
}
}
}
v___jp_4598_:
{
if (v___y_4599_ == 0)
{
lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___f_4603_; 
lean_del_object(v___x_4572_);
v___x_4600_ = lean_array_fget_borrowed(v_a_4557_, v_next_4558_);
v___x_4601_ = lean_array_fget_borrowed(v_a_4557_, v_a_4560_);
v___x_4602_ = lean_box(v___x_4567_);
lean_inc(v_next_4558_);
lean_inc(v_a_4560_);
lean_inc(v___x_4601_);
lean_inc(v___x_4600_);
lean_inc_ref(v_f_4559_);
v___f_4603_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_4603_, 0, v_f_4559_);
lean_closure_set(v___f_4603_, 1, v___x_4600_);
lean_closure_set(v___f_4603_, 2, v___x_4601_);
lean_closure_set(v___f_4603_, 3, v___x_4574_);
lean_closure_set(v___f_4603_, 4, v_a_4560_);
lean_closure_set(v___f_4603_, 5, v___x_4602_);
lean_closure_set(v___f_4603_, 6, v_snd_4570_);
lean_closure_set(v___f_4603_, 7, v_fst_4569_);
lean_closure_set(v___f_4603_, 8, v_next_4558_);
v___y_4576_ = v___f_4603_;
goto v___jp_4575_;
}
else
{
lean_object* v___x_4605_; 
if (v_isShared_4573_ == 0)
{
v___x_4605_ = v___x_4572_;
goto v_reusejp_4604_;
}
else
{
lean_object* v_reuseFailAlloc_4608_; 
v_reuseFailAlloc_4608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4608_, 0, v_fst_4569_);
lean_ctor_set(v_reuseFailAlloc_4608_, 1, v_snd_4570_);
v___x_4605_ = v_reuseFailAlloc_4608_;
goto v_reusejp_4604_;
}
v_reusejp_4604_:
{
lean_object* v___x_4606_; lean_object* v___f_4607_; 
v___x_4606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4606_, 0, v___x_4605_);
v___f_4607_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4607_, 0, v___x_4606_);
v___y_4576_ = v___f_4607_;
goto v___jp_4575_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___boxed(lean_object* v_upperBound_4618_, lean_object* v_a_4619_, lean_object* v_next_4620_, lean_object* v_f_4621_, lean_object* v_a_4622_, lean_object* v_b_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_){
_start:
{
lean_object* v_res_4629_; 
v_res_4629_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v_upperBound_4618_, v_a_4619_, v_next_4620_, v_f_4621_, v_a_4622_, v_b_4623_, v___y_4624_, v___y_4625_, v___y_4626_, v___y_4627_);
lean_dec(v___y_4627_);
lean_dec_ref(v___y_4626_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
lean_dec_ref(v_a_4619_);
lean_dec(v_upperBound_4618_);
return v_res_4629_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(lean_object* v_upperBound_4630_, lean_object* v___x_4631_, lean_object* v_a_4632_, lean_object* v_f_4633_, lean_object* v_a_4634_, lean_object* v_b_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_){
_start:
{
uint8_t v___x_4641_; 
v___x_4641_ = lean_nat_dec_lt(v_a_4634_, v_upperBound_4630_);
if (v___x_4641_ == 0)
{
lean_object* v___x_4642_; 
lean_dec(v_a_4634_);
lean_dec_ref(v_f_4633_);
v___x_4642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4642_, 0, v_b_4635_);
return v___x_4642_;
}
else
{
lean_object* v_fst_4643_; lean_object* v_snd_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4665_; 
v_fst_4643_ = lean_ctor_get(v_b_4635_, 0);
v_snd_4644_ = lean_ctor_get(v_b_4635_, 1);
v_isSharedCheck_4665_ = !lean_is_exclusive(v_b_4635_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4646_ = v_b_4635_;
v_isShared_4647_ = v_isSharedCheck_4665_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_snd_4644_);
lean_inc(v_fst_4643_);
lean_dec(v_b_4635_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4665_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4651_; 
v___x_4648_ = lean_unsigned_to_nat(1u);
v___x_4649_ = lean_nat_add(v_a_4634_, v___x_4648_);
if (v_isShared_4647_ == 0)
{
v___x_4651_ = v___x_4646_;
goto v_reusejp_4650_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v_fst_4643_);
lean_ctor_set(v_reuseFailAlloc_4664_, 1, v_snd_4644_);
v___x_4651_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4650_;
}
v_reusejp_4650_:
{
lean_object* v___x_4652_; 
lean_inc(v___x_4649_);
lean_inc_ref(v_f_4633_);
v___x_4652_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v___x_4631_, v_a_4632_, v_a_4634_, v_f_4633_, v___x_4649_, v___x_4651_, v___y_4636_, v___y_4637_, v___y_4638_, v___y_4639_);
if (lean_obj_tag(v___x_4652_) == 0)
{
lean_object* v_a_4653_; lean_object* v_fst_4654_; lean_object* v_snd_4655_; lean_object* v___x_4657_; uint8_t v_isShared_4658_; uint8_t v_isSharedCheck_4663_; 
v_a_4653_ = lean_ctor_get(v___x_4652_, 0);
lean_inc(v_a_4653_);
lean_dec_ref_known(v___x_4652_, 1);
v_fst_4654_ = lean_ctor_get(v_a_4653_, 0);
v_snd_4655_ = lean_ctor_get(v_a_4653_, 1);
v_isSharedCheck_4663_ = !lean_is_exclusive(v_a_4653_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4657_ = v_a_4653_;
v_isShared_4658_ = v_isSharedCheck_4663_;
goto v_resetjp_4656_;
}
else
{
lean_inc(v_snd_4655_);
lean_inc(v_fst_4654_);
lean_dec(v_a_4653_);
v___x_4657_ = lean_box(0);
v_isShared_4658_ = v_isSharedCheck_4663_;
goto v_resetjp_4656_;
}
v_resetjp_4656_:
{
lean_object* v___x_4660_; 
if (v_isShared_4658_ == 0)
{
v___x_4660_ = v___x_4657_;
goto v_reusejp_4659_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_fst_4654_);
lean_ctor_set(v_reuseFailAlloc_4662_, 1, v_snd_4655_);
v___x_4660_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4659_;
}
v_reusejp_4659_:
{
v_a_4634_ = v___x_4649_;
v_b_4635_ = v___x_4660_;
goto _start;
}
}
}
else
{
lean_dec(v___x_4649_);
lean_dec_ref(v_f_4633_);
return v___x_4652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4666_, lean_object* v___x_4667_, lean_object* v_a_4668_, lean_object* v_f_4669_, lean_object* v_a_4670_, lean_object* v_b_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_){
_start:
{
lean_object* v_res_4677_; 
v_res_4677_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v_upperBound_4666_, v___x_4667_, v_a_4668_, v_f_4669_, v_a_4670_, v_b_4671_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_);
lean_dec(v___y_4675_);
lean_dec_ref(v___y_4674_);
lean_dec(v___y_4673_);
lean_dec_ref(v___y_4672_);
lean_dec_ref(v_a_4668_);
lean_dec(v___x_4667_);
lean_dec(v_upperBound_4666_);
return v_res_4677_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(lean_object* v___x_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_){
_start:
{
lean_object* v___x_4684_; 
v___x_4684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4684_, 0, v___x_4678_);
return v___x_4684_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v___x_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_){
_start:
{
lean_object* v_res_4691_; 
v_res_4691_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(v___x_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_);
lean_dec(v___y_4689_);
lean_dec_ref(v___y_4688_);
lean_dec(v___y_4687_);
lean_dec_ref(v___y_4686_);
return v_res_4691_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(lean_object* v_upperBound_4692_, lean_object* v_removed_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_, lean_object* v_b_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_){
_start:
{
lean_object* v___y_4703_; uint8_t v___x_4726_; 
v___x_4726_ = lean_nat_dec_lt(v_a_4695_, v_upperBound_4692_);
if (v___x_4726_ == 0)
{
lean_object* v___x_4727_; 
lean_dec(v_a_4695_);
v___x_4727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4727_, 0, v_b_4696_);
return v___x_4727_;
}
else
{
uint8_t v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; uint8_t v___x_4731_; 
v___x_4728_ = 0;
v___x_4729_ = lean_box(v___x_4728_);
v___x_4730_ = lean_array_get(v___x_4729_, v_removed_4693_, v_a_4695_);
lean_dec(v___x_4729_);
v___x_4731_ = lean_unbox(v___x_4730_);
lean_dec(v___x_4730_);
if (v___x_4731_ == 0)
{
lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___f_4735_; 
v___x_4732_ = lean_array_fget_borrowed(v_a_4694_, v_a_4695_);
lean_inc(v___x_4732_);
v___x_4733_ = lean_array_push(v_b_4696_, v___x_4732_);
v___x_4734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4734_, 0, v___x_4733_);
v___f_4735_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4735_, 0, v___x_4734_);
v___y_4703_ = v___f_4735_;
goto v___jp_4702_;
}
else
{
lean_object* v___x_4736_; lean_object* v___f_4737_; 
v___x_4736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4736_, 0, v_b_4696_);
v___f_4737_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4737_, 0, v___x_4736_);
v___y_4703_ = v___f_4737_;
goto v___jp_4702_;
}
}
v___jp_4702_:
{
lean_object* v___x_4704_; 
lean_inc(v___y_4700_);
lean_inc_ref(v___y_4699_);
lean_inc(v___y_4698_);
lean_inc_ref(v___y_4697_);
v___x_4704_ = lean_apply_5(v___y_4703_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_, lean_box(0));
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v_a_4705_; lean_object* v___x_4707_; uint8_t v_isShared_4708_; uint8_t v_isSharedCheck_4717_; 
v_a_4705_ = lean_ctor_get(v___x_4704_, 0);
v_isSharedCheck_4717_ = !lean_is_exclusive(v___x_4704_);
if (v_isSharedCheck_4717_ == 0)
{
v___x_4707_ = v___x_4704_;
v_isShared_4708_ = v_isSharedCheck_4717_;
goto v_resetjp_4706_;
}
else
{
lean_inc(v_a_4705_);
lean_dec(v___x_4704_);
v___x_4707_ = lean_box(0);
v_isShared_4708_ = v_isSharedCheck_4717_;
goto v_resetjp_4706_;
}
v_resetjp_4706_:
{
if (lean_obj_tag(v_a_4705_) == 0)
{
lean_object* v_a_4709_; lean_object* v___x_4711_; 
lean_dec(v_a_4695_);
v_a_4709_ = lean_ctor_get(v_a_4705_, 0);
lean_inc(v_a_4709_);
lean_dec_ref_known(v_a_4705_, 1);
if (v_isShared_4708_ == 0)
{
lean_ctor_set(v___x_4707_, 0, v_a_4709_);
v___x_4711_ = v___x_4707_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_a_4709_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
return v___x_4711_;
}
}
else
{
lean_object* v_a_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; 
lean_del_object(v___x_4707_);
v_a_4713_ = lean_ctor_get(v_a_4705_, 0);
lean_inc(v_a_4713_);
lean_dec_ref_known(v_a_4705_, 1);
v___x_4714_ = lean_unsigned_to_nat(1u);
v___x_4715_ = lean_nat_add(v_a_4695_, v___x_4714_);
lean_dec(v_a_4695_);
v_a_4695_ = v___x_4715_;
v_b_4696_ = v_a_4713_;
goto _start;
}
}
}
else
{
lean_object* v_a_4718_; lean_object* v___x_4720_; uint8_t v_isShared_4721_; uint8_t v_isSharedCheck_4725_; 
lean_dec(v_a_4695_);
v_a_4718_ = lean_ctor_get(v___x_4704_, 0);
v_isSharedCheck_4725_ = !lean_is_exclusive(v___x_4704_);
if (v_isSharedCheck_4725_ == 0)
{
v___x_4720_ = v___x_4704_;
v_isShared_4721_ = v_isSharedCheck_4725_;
goto v_resetjp_4719_;
}
else
{
lean_inc(v_a_4718_);
lean_dec(v___x_4704_);
v___x_4720_ = lean_box(0);
v_isShared_4721_ = v_isSharedCheck_4725_;
goto v_resetjp_4719_;
}
v_resetjp_4719_:
{
lean_object* v___x_4723_; 
if (v_isShared_4721_ == 0)
{
v___x_4723_ = v___x_4720_;
goto v_reusejp_4722_;
}
else
{
lean_object* v_reuseFailAlloc_4724_; 
v_reuseFailAlloc_4724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4724_, 0, v_a_4718_);
v___x_4723_ = v_reuseFailAlloc_4724_;
goto v_reusejp_4722_;
}
v_reusejp_4722_:
{
return v___x_4723_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___boxed(lean_object* v_upperBound_4738_, lean_object* v_removed_4739_, lean_object* v_a_4740_, lean_object* v_a_4741_, lean_object* v_b_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_){
_start:
{
lean_object* v_res_4748_; 
v_res_4748_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v_upperBound_4738_, v_removed_4739_, v_a_4740_, v_a_4741_, v_b_4742_, v___y_4743_, v___y_4744_, v___y_4745_, v___y_4746_);
lean_dec(v___y_4746_);
lean_dec_ref(v___y_4745_);
lean_dec(v___y_4744_);
lean_dec_ref(v___y_4743_);
lean_dec_ref(v_a_4740_);
lean_dec_ref(v_removed_4739_);
lean_dec(v_upperBound_4738_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(lean_object* v_a_4749_, lean_object* v_f_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_){
_start:
{
lean_object* v___x_4756_; uint8_t v___x_4757_; lean_object* v___x_4758_; lean_object* v_removed_4759_; lean_object* v_numRemoved_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; 
v___x_4756_ = lean_array_get_size(v_a_4749_);
v___x_4757_ = 0;
v___x_4758_ = lean_box(v___x_4757_);
v_removed_4759_ = lean_mk_array(v___x_4756_, v___x_4758_);
v_numRemoved_4760_ = lean_unsigned_to_nat(0u);
v___x_4761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4761_, 0, v_removed_4759_);
lean_ctor_set(v___x_4761_, 1, v_numRemoved_4760_);
v___x_4762_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v___x_4756_, v___x_4756_, v_a_4749_, v_f_4750_, v_numRemoved_4760_, v___x_4761_, v___y_4751_, v___y_4752_, v___y_4753_, v___y_4754_);
if (lean_obj_tag(v___x_4762_) == 0)
{
lean_object* v_a_4763_; lean_object* v_fst_4764_; lean_object* v_snd_4765_; lean_object* v_a_x27_4766_; lean_object* v___x_4767_; 
v_a_4763_ = lean_ctor_get(v___x_4762_, 0);
lean_inc(v_a_4763_);
lean_dec_ref_known(v___x_4762_, 1);
v_fst_4764_ = lean_ctor_get(v_a_4763_, 0);
lean_inc(v_fst_4764_);
v_snd_4765_ = lean_ctor_get(v_a_4763_, 1);
lean_inc(v_snd_4765_);
lean_dec(v_a_4763_);
v_a_x27_4766_ = lean_mk_empty_array_with_capacity(v_snd_4765_);
lean_dec(v_snd_4765_);
v___x_4767_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v___x_4756_, v_fst_4764_, v_a_4749_, v_numRemoved_4760_, v_a_x27_4766_, v___y_4751_, v___y_4752_, v___y_4753_, v___y_4754_);
lean_dec(v_fst_4764_);
return v___x_4767_;
}
else
{
lean_object* v_a_4768_; lean_object* v___x_4770_; uint8_t v_isShared_4771_; uint8_t v_isSharedCheck_4775_; 
v_a_4768_ = lean_ctor_get(v___x_4762_, 0);
v_isSharedCheck_4775_ = !lean_is_exclusive(v___x_4762_);
if (v_isSharedCheck_4775_ == 0)
{
v___x_4770_ = v___x_4762_;
v_isShared_4771_ = v_isSharedCheck_4775_;
goto v_resetjp_4769_;
}
else
{
lean_inc(v_a_4768_);
lean_dec(v___x_4762_);
v___x_4770_ = lean_box(0);
v_isShared_4771_ = v_isSharedCheck_4775_;
goto v_resetjp_4769_;
}
v_resetjp_4769_:
{
lean_object* v___x_4773_; 
if (v_isShared_4771_ == 0)
{
v___x_4773_ = v___x_4770_;
goto v_reusejp_4772_;
}
else
{
lean_object* v_reuseFailAlloc_4774_; 
v_reuseFailAlloc_4774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4774_, 0, v_a_4768_);
v___x_4773_ = v_reuseFailAlloc_4774_;
goto v_reusejp_4772_;
}
v_reusejp_4772_:
{
return v___x_4773_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg___boxed(lean_object* v_a_4776_, lean_object* v_f_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_){
_start:
{
lean_object* v_res_4783_; 
v_res_4783_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_a_4776_, v_f_4777_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec_ref(v_a_4776_);
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object* v_mvars_4785_, lean_object* v_a_4786_, lean_object* v_a_4787_, lean_object* v_a_4788_, lean_object* v_a_4789_){
_start:
{
lean_object* v___f_4791_; lean_object* v___x_4792_; 
v___f_4791_ = ((lean_object*)(l_Lean_Elab_WF_assignSubsumed___closed__0));
v___x_4792_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_mvars_4785_, v___f_4791_, v_a_4786_, v_a_4787_, v_a_4788_, v_a_4789_);
return v___x_4792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object* v_mvars_4793_, lean_object* v_a_4794_, lean_object* v_a_4795_, lean_object* v_a_4796_, lean_object* v_a_4797_, lean_object* v_a_4798_){
_start:
{
lean_object* v_res_4799_; 
v_res_4799_ = l_Lean_Elab_WF_assignSubsumed(v_mvars_4793_, v_a_4794_, v_a_4795_, v_a_4796_, v_a_4797_);
lean_dec(v_a_4797_);
lean_dec_ref(v_a_4796_);
lean_dec(v_a_4795_);
lean_dec_ref(v_a_4794_);
lean_dec_ref(v_mvars_4793_);
return v_res_4799_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(lean_object* v_mvarId_4800_, lean_object* v_val_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_){
_start:
{
lean_object* v___x_4807_; 
v___x_4807_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mvarId_4800_, v_val_4801_, v___y_4803_);
return v___x_4807_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object* v_mvarId_4808_, lean_object* v_val_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_){
_start:
{
lean_object* v_res_4815_; 
v_res_4815_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(v_mvarId_4808_, v_val_4809_, v___y_4810_, v___y_4811_, v___y_4812_, v___y_4813_);
lean_dec(v___y_4813_);
lean_dec_ref(v___y_4812_);
lean_dec(v___y_4811_);
lean_dec_ref(v___y_4810_);
return v_res_4815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(lean_object* v_00_u03b1_4816_, lean_object* v_a_4817_, lean_object* v_f_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_){
_start:
{
lean_object* v___x_4824_; 
v___x_4824_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_a_4817_, v_f_4818_, v___y_4819_, v___y_4820_, v___y_4821_, v___y_4822_);
return v___x_4824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___boxed(lean_object* v_00_u03b1_4825_, lean_object* v_a_4826_, lean_object* v_f_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_){
_start:
{
lean_object* v_res_4833_; 
v_res_4833_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(v_00_u03b1_4825_, v_a_4826_, v_f_4827_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_);
lean_dec(v___y_4831_);
lean_dec_ref(v___y_4830_);
lean_dec(v___y_4829_);
lean_dec_ref(v___y_4828_);
lean_dec_ref(v_a_4826_);
return v_res_4833_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object* v_00_u03b2_4834_, lean_object* v_x_4835_, lean_object* v_x_4836_, lean_object* v_x_4837_){
_start:
{
lean_object* v___x_4838_; 
v___x_4838_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(v_x_4835_, v_x_4836_, v_x_4837_);
return v___x_4838_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(lean_object* v_upperBound_4839_, lean_object* v_00_u03b1_4840_, lean_object* v_a_4841_, lean_object* v_next_4842_, lean_object* v_f_4843_, lean_object* v_inst_4844_, lean_object* v_R_4845_, lean_object* v_a_4846_, lean_object* v_b_4847_, lean_object* v_c_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_){
_start:
{
lean_object* v___x_4854_; 
v___x_4854_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v_upperBound_4839_, v_a_4841_, v_next_4842_, v_f_4843_, v_a_4846_, v_b_4847_, v___y_4849_, v___y_4850_, v___y_4851_, v___y_4852_);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___boxed(lean_object* v_upperBound_4855_, lean_object* v_00_u03b1_4856_, lean_object* v_a_4857_, lean_object* v_next_4858_, lean_object* v_f_4859_, lean_object* v_inst_4860_, lean_object* v_R_4861_, lean_object* v_a_4862_, lean_object* v_b_4863_, lean_object* v_c_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(v_upperBound_4855_, v_00_u03b1_4856_, v_a_4857_, v_next_4858_, v_f_4859_, v_inst_4860_, v_R_4861_, v_a_4862_, v_b_4863_, v_c_4864_, v___y_4865_, v___y_4866_, v___y_4867_, v___y_4868_);
lean_dec(v___y_4868_);
lean_dec_ref(v___y_4867_);
lean_dec(v___y_4866_);
lean_dec_ref(v___y_4865_);
lean_dec_ref(v_a_4857_);
lean_dec(v_upperBound_4855_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(lean_object* v_00_u03b1_4871_, lean_object* v_upperBound_4872_, lean_object* v_removed_4873_, lean_object* v_a_4874_, lean_object* v_inst_4875_, lean_object* v_R_4876_, lean_object* v_a_4877_, lean_object* v_b_4878_, lean_object* v_c_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_){
_start:
{
lean_object* v___x_4885_; 
v___x_4885_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v_upperBound_4872_, v_removed_4873_, v_a_4874_, v_a_4877_, v_b_4878_, v___y_4880_, v___y_4881_, v___y_4882_, v___y_4883_);
return v___x_4885_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4886_, lean_object* v_upperBound_4887_, lean_object* v_removed_4888_, lean_object* v_a_4889_, lean_object* v_inst_4890_, lean_object* v_R_4891_, lean_object* v_a_4892_, lean_object* v_b_4893_, lean_object* v_c_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_){
_start:
{
lean_object* v_res_4900_; 
v_res_4900_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(v_00_u03b1_4886_, v_upperBound_4887_, v_removed_4888_, v_a_4889_, v_inst_4890_, v_R_4891_, v_a_4892_, v_b_4893_, v_c_4894_, v___y_4895_, v___y_4896_, v___y_4897_, v___y_4898_);
lean_dec(v___y_4898_);
lean_dec_ref(v___y_4897_);
lean_dec(v___y_4896_);
lean_dec_ref(v___y_4895_);
lean_dec_ref(v_a_4889_);
lean_dec_ref(v_removed_4888_);
lean_dec(v_upperBound_4887_);
return v_res_4900_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(lean_object* v_upperBound_4901_, lean_object* v___x_4902_, lean_object* v_00_u03b1_4903_, lean_object* v_a_4904_, lean_object* v_f_4905_, lean_object* v_inst_4906_, lean_object* v_R_4907_, lean_object* v_a_4908_, lean_object* v_b_4909_, lean_object* v_c_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_){
_start:
{
lean_object* v___x_4916_; 
v___x_4916_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v_upperBound_4901_, v___x_4902_, v_a_4904_, v_f_4905_, v_a_4908_, v_b_4909_, v___y_4911_, v___y_4912_, v___y_4913_, v___y_4914_);
return v___x_4916_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___boxed(lean_object* v_upperBound_4917_, lean_object* v___x_4918_, lean_object* v_00_u03b1_4919_, lean_object* v_a_4920_, lean_object* v_f_4921_, lean_object* v_inst_4922_, lean_object* v_R_4923_, lean_object* v_a_4924_, lean_object* v_b_4925_, lean_object* v_c_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_){
_start:
{
lean_object* v_res_4932_; 
v_res_4932_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(v_upperBound_4917_, v___x_4918_, v_00_u03b1_4919_, v_a_4920_, v_f_4921_, v_inst_4922_, v_R_4923_, v_a_4924_, v_b_4925_, v_c_4926_, v___y_4927_, v___y_4928_, v___y_4929_, v___y_4930_);
lean_dec(v___y_4930_);
lean_dec_ref(v___y_4929_);
lean_dec(v___y_4928_);
lean_dec_ref(v___y_4927_);
lean_dec_ref(v_a_4920_);
lean_dec(v___x_4918_);
lean_dec(v_upperBound_4917_);
return v_res_4932_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4933_, lean_object* v_x_4934_, size_t v_x_4935_, size_t v_x_4936_, lean_object* v_x_4937_, lean_object* v_x_4938_){
_start:
{
lean_object* v___x_4939_; 
v___x_4939_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4934_, v_x_4935_, v_x_4936_, v_x_4937_, v_x_4938_);
return v___x_4939_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4940_, lean_object* v_x_4941_, lean_object* v_x_4942_, lean_object* v_x_4943_, lean_object* v_x_4944_, lean_object* v_x_4945_){
_start:
{
size_t v_x_4937__boxed_4946_; size_t v_x_4938__boxed_4947_; lean_object* v_res_4948_; 
v_x_4937__boxed_4946_ = lean_unbox_usize(v_x_4942_);
lean_dec(v_x_4942_);
v_x_4938__boxed_4947_ = lean_unbox_usize(v_x_4943_);
lean_dec(v_x_4943_);
v_res_4948_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(v_00_u03b2_4940_, v_x_4941_, v_x_4937__boxed_4946_, v_x_4938__boxed_4947_, v_x_4944_, v_x_4945_);
return v_res_4948_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_4949_, lean_object* v_n_4950_, lean_object* v_k_4951_, lean_object* v_v_4952_){
_start:
{
lean_object* v___x_4953_; 
v___x_4953_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(v_n_4950_, v_k_4951_, v_v_4952_);
return v___x_4953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_4954_, size_t v_depth_4955_, lean_object* v_keys_4956_, lean_object* v_vals_4957_, lean_object* v_heq_4958_, lean_object* v_i_4959_, lean_object* v_entries_4960_){
_start:
{
lean_object* v___x_4961_; 
v___x_4961_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_4955_, v_keys_4956_, v_vals_4957_, v_i_4959_, v_entries_4960_);
return v___x_4961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4962_, lean_object* v_depth_4963_, lean_object* v_keys_4964_, lean_object* v_vals_4965_, lean_object* v_heq_4966_, lean_object* v_i_4967_, lean_object* v_entries_4968_){
_start:
{
size_t v_depth_boxed_4969_; lean_object* v_res_4970_; 
v_depth_boxed_4969_ = lean_unbox_usize(v_depth_4963_);
lean_dec(v_depth_4963_);
v_res_4970_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_4962_, v_depth_boxed_4969_, v_keys_4964_, v_vals_4965_, v_heq_4966_, v_i_4967_, v_entries_4968_);
lean_dec_ref(v_vals_4965_);
lean_dec_ref(v_keys_4964_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_4971_, lean_object* v_x_4972_, lean_object* v_x_4973_, lean_object* v_x_4974_, lean_object* v_x_4975_){
_start:
{
lean_object* v___x_4976_; 
v___x_4976_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_x_4972_, v_x_4973_, v_x_4974_, v_x_4975_);
return v___x_4976_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4978_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0));
v___x_4979_ = l_Lean_stringToMessageData(v___x_4978_);
return v___x_4979_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4981_; lean_object* v___x_4982_; 
v___x_4981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2));
v___x_4982_ = l_Lean_stringToMessageData(v___x_4981_);
return v___x_4982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object* v_argsPacker_4983_, lean_object* v_as_4984_, size_t v_sz_4985_, size_t v_i_4986_, lean_object* v_b_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_){
_start:
{
lean_object* v_a_4994_; uint8_t v___x_4998_; 
v___x_4998_ = lean_usize_dec_lt(v_i_4986_, v_sz_4985_);
if (v___x_4998_ == 0)
{
lean_object* v___x_4999_; 
v___x_4999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4999_, 0, v_b_4987_);
return v___x_4999_;
}
else
{
lean_object* v_a_5000_; lean_object* v___x_5001_; 
v_a_5000_ = lean_array_uget_borrowed(v_as_4984_, v_i_4986_);
lean_inc(v_a_5000_);
v___x_5001_ = l_Lean_MVarId_getType(v_a_5000_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_);
if (lean_obj_tag(v___x_5001_) == 0)
{
lean_object* v_a_5002_; lean_object* v___y_5004_; lean_object* v___y_5005_; lean_object* v___y_5006_; lean_object* v___y_5007_; 
v_a_5002_ = lean_ctor_get(v___x_5001_, 0);
lean_inc(v_a_5002_);
lean_dec_ref_known(v___x_5001_, 1);
if (lean_obj_tag(v_a_5002_) == 10)
{
lean_object* v_expr_5020_; 
v_expr_5020_ = lean_ctor_get(v_a_5002_, 1);
if (lean_obj_tag(v_expr_5020_) == 5)
{
lean_object* v_arg_5021_; lean_object* v___x_5022_; 
lean_inc_ref(v_expr_5020_);
lean_dec_ref_known(v_a_5002_, 2);
v_arg_5021_ = lean_ctor_get(v_expr_5020_, 1);
lean_inc_ref_n(v_arg_5021_, 2);
lean_dec_ref_known(v_expr_5020_, 2);
v___x_5022_ = l_Lean_Meta_ArgsPacker_unpack(v_argsPacker_4983_, v_arg_5021_);
if (lean_obj_tag(v___x_5022_) == 1)
{
lean_object* v_val_5023_; lean_object* v_fst_5024_; lean_object* v___x_5025_; uint8_t v___x_5026_; 
lean_dec_ref(v_arg_5021_);
v_val_5023_ = lean_ctor_get(v___x_5022_, 0);
lean_inc(v_val_5023_);
lean_dec_ref_known(v___x_5022_, 1);
v_fst_5024_ = lean_ctor_get(v_val_5023_, 0);
lean_inc(v_fst_5024_);
lean_dec(v_val_5023_);
v___x_5025_ = lean_array_get_size(v_b_4987_);
v___x_5026_ = lean_nat_dec_lt(v_fst_5024_, v___x_5025_);
if (v___x_5026_ == 0)
{
lean_dec(v_fst_5024_);
v_a_4994_ = v_b_4987_;
goto v___jp_4993_;
}
else
{
lean_object* v_v_5027_; lean_object* v___x_5028_; lean_object* v_xs_x27_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; 
v_v_5027_ = lean_array_fget(v_b_4987_, v_fst_5024_);
v___x_5028_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_5029_ = lean_array_fset(v_b_4987_, v_fst_5024_, v___x_5028_);
lean_inc(v_a_5000_);
v___x_5030_ = lean_array_push(v_v_5027_, v_a_5000_);
v___x_5031_ = lean_array_fset(v_xs_x27_5029_, v_fst_5024_, v___x_5030_);
lean_dec(v_fst_5024_);
v_a_4994_ = v___x_5031_;
goto v___jp_4993_;
}
}
else
{
lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; 
lean_dec(v___x_5022_);
v___x_5032_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3);
v___x_5033_ = l_Lean_indentExpr(v_arg_5021_);
v___x_5034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5034_, 0, v___x_5032_);
lean_ctor_set(v___x_5034_, 1, v___x_5033_);
v___x_5035_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_5034_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_);
if (lean_obj_tag(v___x_5035_) == 0)
{
lean_dec_ref_known(v___x_5035_, 1);
v_a_4994_ = v_b_4987_;
goto v___jp_4993_;
}
else
{
lean_object* v_a_5036_; lean_object* v___x_5038_; uint8_t v_isShared_5039_; uint8_t v_isSharedCheck_5043_; 
lean_dec_ref(v_b_4987_);
v_a_5036_ = lean_ctor_get(v___x_5035_, 0);
v_isSharedCheck_5043_ = !lean_is_exclusive(v___x_5035_);
if (v_isSharedCheck_5043_ == 0)
{
v___x_5038_ = v___x_5035_;
v_isShared_5039_ = v_isSharedCheck_5043_;
goto v_resetjp_5037_;
}
else
{
lean_inc(v_a_5036_);
lean_dec(v___x_5035_);
v___x_5038_ = lean_box(0);
v_isShared_5039_ = v_isSharedCheck_5043_;
goto v_resetjp_5037_;
}
v_resetjp_5037_:
{
lean_object* v___x_5041_; 
if (v_isShared_5039_ == 0)
{
v___x_5041_ = v___x_5038_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v_a_5036_);
v___x_5041_ = v_reuseFailAlloc_5042_;
goto v_reusejp_5040_;
}
v_reusejp_5040_:
{
return v___x_5041_;
}
}
}
}
}
else
{
v___y_5004_ = v___y_4988_;
v___y_5005_ = v___y_4989_;
v___y_5006_ = v___y_4990_;
v___y_5007_ = v___y_4991_;
goto v___jp_5003_;
}
}
else
{
v___y_5004_ = v___y_4988_;
v___y_5005_ = v___y_4989_;
v___y_5006_ = v___y_4990_;
v___y_5007_ = v___y_4991_;
goto v___jp_5003_;
}
v___jp_5003_:
{
lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; 
v___x_5008_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1);
v___x_5009_ = l_Lean_indentExpr(v_a_5002_);
v___x_5010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5010_, 0, v___x_5008_);
lean_ctor_set(v___x_5010_, 1, v___x_5009_);
v___x_5011_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_5010_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5011_) == 0)
{
lean_dec_ref_known(v___x_5011_, 1);
v_a_4994_ = v_b_4987_;
goto v___jp_4993_;
}
else
{
lean_object* v_a_5012_; lean_object* v___x_5014_; uint8_t v_isShared_5015_; uint8_t v_isSharedCheck_5019_; 
lean_dec_ref(v_b_4987_);
v_a_5012_ = lean_ctor_get(v___x_5011_, 0);
v_isSharedCheck_5019_ = !lean_is_exclusive(v___x_5011_);
if (v_isSharedCheck_5019_ == 0)
{
v___x_5014_ = v___x_5011_;
v_isShared_5015_ = v_isSharedCheck_5019_;
goto v_resetjp_5013_;
}
else
{
lean_inc(v_a_5012_);
lean_dec(v___x_5011_);
v___x_5014_ = lean_box(0);
v_isShared_5015_ = v_isSharedCheck_5019_;
goto v_resetjp_5013_;
}
v_resetjp_5013_:
{
lean_object* v___x_5017_; 
if (v_isShared_5015_ == 0)
{
v___x_5017_ = v___x_5014_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5018_; 
v_reuseFailAlloc_5018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5018_, 0, v_a_5012_);
v___x_5017_ = v_reuseFailAlloc_5018_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
return v___x_5017_;
}
}
}
}
}
else
{
lean_object* v_a_5044_; lean_object* v___x_5046_; uint8_t v_isShared_5047_; uint8_t v_isSharedCheck_5051_; 
lean_dec_ref(v_b_4987_);
v_a_5044_ = lean_ctor_get(v___x_5001_, 0);
v_isSharedCheck_5051_ = !lean_is_exclusive(v___x_5001_);
if (v_isSharedCheck_5051_ == 0)
{
v___x_5046_ = v___x_5001_;
v_isShared_5047_ = v_isSharedCheck_5051_;
goto v_resetjp_5045_;
}
else
{
lean_inc(v_a_5044_);
lean_dec(v___x_5001_);
v___x_5046_ = lean_box(0);
v_isShared_5047_ = v_isSharedCheck_5051_;
goto v_resetjp_5045_;
}
v_resetjp_5045_:
{
lean_object* v___x_5049_; 
if (v_isShared_5047_ == 0)
{
v___x_5049_ = v___x_5046_;
goto v_reusejp_5048_;
}
else
{
lean_object* v_reuseFailAlloc_5050_; 
v_reuseFailAlloc_5050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5050_, 0, v_a_5044_);
v___x_5049_ = v_reuseFailAlloc_5050_;
goto v_reusejp_5048_;
}
v_reusejp_5048_:
{
return v___x_5049_;
}
}
}
}
v___jp_4993_:
{
size_t v___x_4995_; size_t v___x_4996_; 
v___x_4995_ = ((size_t)1ULL);
v___x_4996_ = lean_usize_add(v_i_4986_, v___x_4995_);
v_i_4986_ = v___x_4996_;
v_b_4987_ = v_a_4994_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object* v_argsPacker_5052_, lean_object* v_as_5053_, lean_object* v_sz_5054_, lean_object* v_i_5055_, lean_object* v_b_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_){
_start:
{
size_t v_sz_boxed_5062_; size_t v_i_boxed_5063_; lean_object* v_res_5064_; 
v_sz_boxed_5062_ = lean_unbox_usize(v_sz_5054_);
lean_dec(v_sz_5054_);
v_i_boxed_5063_ = lean_unbox_usize(v_i_5055_);
lean_dec(v_i_5055_);
v_res_5064_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(v_argsPacker_5052_, v_as_5053_, v_sz_boxed_5062_, v_i_boxed_5063_, v_b_5056_, v___y_5057_, v___y_5058_, v___y_5059_, v___y_5060_);
lean_dec(v___y_5060_);
lean_dec_ref(v___y_5059_);
lean_dec(v___y_5058_);
lean_dec_ref(v___y_5057_);
lean_dec_ref(v_as_5053_);
lean_dec_ref(v_argsPacker_5052_);
return v_res_5064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object* v_argsPacker_5065_, lean_object* v_numFuncs_5066_, lean_object* v_goals_5067_, lean_object* v_a_5068_, lean_object* v_a_5069_, lean_object* v_a_5070_, lean_object* v_a_5071_){
_start:
{
lean_object* v___x_5073_; lean_object* v_r_5074_; size_t v_sz_5075_; size_t v___x_5076_; lean_object* v___x_5077_; 
v___x_5073_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__1));
v_r_5074_ = lean_mk_array(v_numFuncs_5066_, v___x_5073_);
v_sz_5075_ = lean_array_size(v_goals_5067_);
v___x_5076_ = ((size_t)0ULL);
v___x_5077_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(v_argsPacker_5065_, v_goals_5067_, v_sz_5075_, v___x_5076_, v_r_5074_, v_a_5068_, v_a_5069_, v_a_5070_, v_a_5071_);
return v___x_5077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object* v_argsPacker_5078_, lean_object* v_numFuncs_5079_, lean_object* v_goals_5080_, lean_object* v_a_5081_, lean_object* v_a_5082_, lean_object* v_a_5083_, lean_object* v_a_5084_, lean_object* v_a_5085_){
_start:
{
lean_object* v_res_5086_; 
v_res_5086_ = l_Lean_Elab_WF_groupGoalsByFunction(v_argsPacker_5078_, v_numFuncs_5079_, v_goals_5080_, v_a_5081_, v_a_5082_, v_a_5083_, v_a_5084_);
lean_dec(v_a_5084_);
lean_dec_ref(v_a_5083_);
lean_dec(v_a_5082_);
lean_dec_ref(v_a_5081_);
lean_dec_ref(v_goals_5080_);
lean_dec_ref(v_argsPacker_5078_);
return v_res_5086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(lean_object* v_t_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v___x_5090_; lean_object* v_infoState_5091_; uint8_t v_enabled_5092_; 
v___x_5090_ = lean_st_ref_get(v___y_5088_);
v_infoState_5091_ = lean_ctor_get(v___x_5090_, 7);
lean_inc_ref(v_infoState_5091_);
lean_dec(v___x_5090_);
v_enabled_5092_ = lean_ctor_get_uint8(v_infoState_5091_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5091_);
if (v_enabled_5092_ == 0)
{
lean_object* v___x_5093_; lean_object* v___x_5094_; 
lean_dec_ref(v_t_5087_);
v___x_5093_ = lean_box(0);
v___x_5094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5094_, 0, v___x_5093_);
return v___x_5094_;
}
else
{
lean_object* v___x_5095_; lean_object* v_infoState_5096_; lean_object* v_env_5097_; lean_object* v_nextMacroScope_5098_; lean_object* v_ngen_5099_; lean_object* v_auxDeclNGen_5100_; lean_object* v_traceState_5101_; lean_object* v_cache_5102_; lean_object* v_messages_5103_; lean_object* v_snapshotTasks_5104_; lean_object* v___x_5106_; uint8_t v_isShared_5107_; uint8_t v_isSharedCheck_5126_; 
v___x_5095_ = lean_st_ref_take(v___y_5088_);
v_infoState_5096_ = lean_ctor_get(v___x_5095_, 7);
v_env_5097_ = lean_ctor_get(v___x_5095_, 0);
v_nextMacroScope_5098_ = lean_ctor_get(v___x_5095_, 1);
v_ngen_5099_ = lean_ctor_get(v___x_5095_, 2);
v_auxDeclNGen_5100_ = lean_ctor_get(v___x_5095_, 3);
v_traceState_5101_ = lean_ctor_get(v___x_5095_, 4);
v_cache_5102_ = lean_ctor_get(v___x_5095_, 5);
v_messages_5103_ = lean_ctor_get(v___x_5095_, 6);
v_snapshotTasks_5104_ = lean_ctor_get(v___x_5095_, 8);
v_isSharedCheck_5126_ = !lean_is_exclusive(v___x_5095_);
if (v_isSharedCheck_5126_ == 0)
{
v___x_5106_ = v___x_5095_;
v_isShared_5107_ = v_isSharedCheck_5126_;
goto v_resetjp_5105_;
}
else
{
lean_inc(v_snapshotTasks_5104_);
lean_inc(v_infoState_5096_);
lean_inc(v_messages_5103_);
lean_inc(v_cache_5102_);
lean_inc(v_traceState_5101_);
lean_inc(v_auxDeclNGen_5100_);
lean_inc(v_ngen_5099_);
lean_inc(v_nextMacroScope_5098_);
lean_inc(v_env_5097_);
lean_dec(v___x_5095_);
v___x_5106_ = lean_box(0);
v_isShared_5107_ = v_isSharedCheck_5126_;
goto v_resetjp_5105_;
}
v_resetjp_5105_:
{
uint8_t v_enabled_5108_; lean_object* v_assignment_5109_; lean_object* v_lazyAssignment_5110_; lean_object* v_trees_5111_; lean_object* v___x_5113_; uint8_t v_isShared_5114_; uint8_t v_isSharedCheck_5125_; 
v_enabled_5108_ = lean_ctor_get_uint8(v_infoState_5096_, sizeof(void*)*3);
v_assignment_5109_ = lean_ctor_get(v_infoState_5096_, 0);
v_lazyAssignment_5110_ = lean_ctor_get(v_infoState_5096_, 1);
v_trees_5111_ = lean_ctor_get(v_infoState_5096_, 2);
v_isSharedCheck_5125_ = !lean_is_exclusive(v_infoState_5096_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5113_ = v_infoState_5096_;
v_isShared_5114_ = v_isSharedCheck_5125_;
goto v_resetjp_5112_;
}
else
{
lean_inc(v_trees_5111_);
lean_inc(v_lazyAssignment_5110_);
lean_inc(v_assignment_5109_);
lean_dec(v_infoState_5096_);
v___x_5113_ = lean_box(0);
v_isShared_5114_ = v_isSharedCheck_5125_;
goto v_resetjp_5112_;
}
v_resetjp_5112_:
{
lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5118_; 
v___x_5115_ = lean_box(0);
v___x_5116_ = l_Lean_PersistentArray_push___redArg(v_trees_5111_, v_t_5087_);
if (v_isShared_5114_ == 0)
{
lean_ctor_set(v___x_5113_, 2, v___x_5116_);
v___x_5118_ = v___x_5113_;
goto v_reusejp_5117_;
}
else
{
lean_object* v_reuseFailAlloc_5124_; 
v_reuseFailAlloc_5124_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5124_, 0, v_assignment_5109_);
lean_ctor_set(v_reuseFailAlloc_5124_, 1, v_lazyAssignment_5110_);
lean_ctor_set(v_reuseFailAlloc_5124_, 2, v___x_5116_);
lean_ctor_set_uint8(v_reuseFailAlloc_5124_, sizeof(void*)*3, v_enabled_5108_);
v___x_5118_ = v_reuseFailAlloc_5124_;
goto v_reusejp_5117_;
}
v_reusejp_5117_:
{
lean_object* v___x_5120_; 
if (v_isShared_5107_ == 0)
{
lean_ctor_set(v___x_5106_, 7, v___x_5118_);
v___x_5120_ = v___x_5106_;
goto v_reusejp_5119_;
}
else
{
lean_object* v_reuseFailAlloc_5123_; 
v_reuseFailAlloc_5123_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5123_, 0, v_env_5097_);
lean_ctor_set(v_reuseFailAlloc_5123_, 1, v_nextMacroScope_5098_);
lean_ctor_set(v_reuseFailAlloc_5123_, 2, v_ngen_5099_);
lean_ctor_set(v_reuseFailAlloc_5123_, 3, v_auxDeclNGen_5100_);
lean_ctor_set(v_reuseFailAlloc_5123_, 4, v_traceState_5101_);
lean_ctor_set(v_reuseFailAlloc_5123_, 5, v_cache_5102_);
lean_ctor_set(v_reuseFailAlloc_5123_, 6, v_messages_5103_);
lean_ctor_set(v_reuseFailAlloc_5123_, 7, v___x_5118_);
lean_ctor_set(v_reuseFailAlloc_5123_, 8, v_snapshotTasks_5104_);
v___x_5120_ = v_reuseFailAlloc_5123_;
goto v_reusejp_5119_;
}
v_reusejp_5119_:
{
lean_object* v___x_5121_; lean_object* v___x_5122_; 
v___x_5121_ = lean_st_ref_put(v___y_5088_, v___x_5120_);
v___x_5122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5122_, 0, v___x_5115_);
return v___x_5122_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg___boxed(lean_object* v_t_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_){
_start:
{
lean_object* v_res_5130_; 
v_res_5130_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v_t_5127_, v___y_5128_);
lean_dec(v___y_5128_);
return v_res_5130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object* v_t_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_){
_start:
{
lean_object* v___x_5139_; 
v___x_5139_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v_t_5131_, v___y_5137_);
return v___x_5139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object* v_t_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_, lean_object* v___y_5143_, lean_object* v___y_5144_, lean_object* v___y_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_){
_start:
{
lean_object* v_res_5148_; 
v_res_5148_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(v_t_5140_, v___y_5141_, v___y_5142_, v___y_5143_, v___y_5144_, v___y_5145_, v___y_5146_);
lean_dec(v___y_5146_);
lean_dec_ref(v___y_5145_);
lean_dec(v___y_5144_);
lean_dec_ref(v___y_5143_);
lean_dec(v___y_5142_);
lean_dec_ref(v___y_5141_);
return v_res_5148_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(lean_object* v_e_5149_, lean_object* v___y_5150_){
_start:
{
uint8_t v___x_5152_; 
v___x_5152_ = l_Lean_Expr_hasMVar(v_e_5149_);
if (v___x_5152_ == 0)
{
lean_object* v___x_5153_; 
v___x_5153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5153_, 0, v_e_5149_);
return v___x_5153_;
}
else
{
lean_object* v___x_5154_; lean_object* v_mctx_5155_; lean_object* v___x_5156_; lean_object* v_fst_5157_; lean_object* v_snd_5158_; lean_object* v___x_5159_; lean_object* v_cache_5160_; lean_object* v_zetaDeltaFVarIds_5161_; lean_object* v_postponed_5162_; lean_object* v_diag_5163_; lean_object* v___x_5165_; uint8_t v_isShared_5166_; uint8_t v_isSharedCheck_5172_; 
v___x_5154_ = lean_st_ref_get(v___y_5150_);
v_mctx_5155_ = lean_ctor_get(v___x_5154_, 0);
lean_inc_ref(v_mctx_5155_);
lean_dec(v___x_5154_);
v___x_5156_ = l_Lean_instantiateMVarsCore(v_mctx_5155_, v_e_5149_);
v_fst_5157_ = lean_ctor_get(v___x_5156_, 0);
lean_inc(v_fst_5157_);
v_snd_5158_ = lean_ctor_get(v___x_5156_, 1);
lean_inc(v_snd_5158_);
lean_dec_ref(v___x_5156_);
v___x_5159_ = lean_st_ref_take(v___y_5150_);
v_cache_5160_ = lean_ctor_get(v___x_5159_, 1);
v_zetaDeltaFVarIds_5161_ = lean_ctor_get(v___x_5159_, 2);
v_postponed_5162_ = lean_ctor_get(v___x_5159_, 3);
v_diag_5163_ = lean_ctor_get(v___x_5159_, 4);
v_isSharedCheck_5172_ = !lean_is_exclusive(v___x_5159_);
if (v_isSharedCheck_5172_ == 0)
{
lean_object* v_unused_5173_; 
v_unused_5173_ = lean_ctor_get(v___x_5159_, 0);
lean_dec(v_unused_5173_);
v___x_5165_ = v___x_5159_;
v_isShared_5166_ = v_isSharedCheck_5172_;
goto v_resetjp_5164_;
}
else
{
lean_inc(v_diag_5163_);
lean_inc(v_postponed_5162_);
lean_inc(v_zetaDeltaFVarIds_5161_);
lean_inc(v_cache_5160_);
lean_dec(v___x_5159_);
v___x_5165_ = lean_box(0);
v_isShared_5166_ = v_isSharedCheck_5172_;
goto v_resetjp_5164_;
}
v_resetjp_5164_:
{
lean_object* v___x_5168_; 
if (v_isShared_5166_ == 0)
{
lean_ctor_set(v___x_5165_, 0, v_snd_5158_);
v___x_5168_ = v___x_5165_;
goto v_reusejp_5167_;
}
else
{
lean_object* v_reuseFailAlloc_5171_; 
v_reuseFailAlloc_5171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5171_, 0, v_snd_5158_);
lean_ctor_set(v_reuseFailAlloc_5171_, 1, v_cache_5160_);
lean_ctor_set(v_reuseFailAlloc_5171_, 2, v_zetaDeltaFVarIds_5161_);
lean_ctor_set(v_reuseFailAlloc_5171_, 3, v_postponed_5162_);
lean_ctor_set(v_reuseFailAlloc_5171_, 4, v_diag_5163_);
v___x_5168_ = v_reuseFailAlloc_5171_;
goto v_reusejp_5167_;
}
v_reusejp_5167_:
{
lean_object* v___x_5169_; lean_object* v___x_5170_; 
v___x_5169_ = lean_st_ref_put(v___y_5150_, v___x_5168_);
v___x_5170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5170_, 0, v_fst_5157_);
return v___x_5170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg___boxed(lean_object* v_e_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_){
_start:
{
lean_object* v_res_5177_; 
v_res_5177_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_e_5174_, v___y_5175_);
lean_dec(v___y_5175_);
return v_res_5177_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(lean_object* v_e_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_){
_start:
{
lean_object* v___x_5184_; 
v___x_5184_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_e_5178_, v___y_5180_);
return v___x_5184_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___boxed(lean_object* v_e_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_){
_start:
{
lean_object* v_res_5191_; 
v_res_5191_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(v_e_5185_, v___y_5186_, v___y_5187_, v___y_5188_, v___y_5189_);
lean_dec(v___y_5189_);
lean_dec_ref(v___y_5188_);
lean_dec(v___y_5187_);
lean_dec_ref(v___y_5186_);
return v_res_5191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(lean_object* v_as_5192_, size_t v_i_5193_, size_t v_stop_5194_, lean_object* v_b_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_){
_start:
{
uint8_t v___x_5203_; 
v___x_5203_ = lean_usize_dec_eq(v_i_5193_, v_stop_5194_);
if (v___x_5203_ == 0)
{
lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; 
v___x_5204_ = lean_array_uget_borrowed(v_as_5192_, v_i_5193_);
lean_inc(v___x_5204_);
v___x_5205_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5205_, 0, v___x_5204_);
v___x_5206_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v___x_5205_, v___y_5201_);
if (lean_obj_tag(v___x_5206_) == 0)
{
lean_object* v_a_5207_; size_t v___x_5208_; size_t v___x_5209_; 
v_a_5207_ = lean_ctor_get(v___x_5206_, 0);
lean_inc(v_a_5207_);
lean_dec_ref_known(v___x_5206_, 1);
v___x_5208_ = ((size_t)1ULL);
v___x_5209_ = lean_usize_add(v_i_5193_, v___x_5208_);
v_i_5193_ = v___x_5209_;
v_b_5195_ = v_a_5207_;
goto _start;
}
else
{
return v___x_5206_;
}
}
else
{
lean_object* v___x_5211_; 
v___x_5211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5211_, 0, v_b_5195_);
return v___x_5211_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4___boxed(lean_object* v_as_5212_, lean_object* v_i_5213_, lean_object* v_stop_5214_, lean_object* v_b_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_){
_start:
{
size_t v_i_boxed_5223_; size_t v_stop_boxed_5224_; lean_object* v_res_5225_; 
v_i_boxed_5223_ = lean_unbox_usize(v_i_5213_);
lean_dec(v_i_5213_);
v_stop_boxed_5224_ = lean_unbox_usize(v_stop_5214_);
lean_dec(v_stop_5214_);
v_res_5225_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v_as_5212_, v_i_boxed_5223_, v_stop_boxed_5224_, v_b_5215_, v___y_5216_, v___y_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_);
lean_dec(v___y_5221_);
lean_dec_ref(v___y_5220_);
lean_dec(v___y_5219_);
lean_dec_ref(v___y_5218_);
lean_dec(v___y_5217_);
lean_dec_ref(v___y_5216_);
lean_dec_ref(v_as_5212_);
return v_res_5225_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; 
v___x_5226_ = lean_unsigned_to_nat(32u);
v___x_5227_ = lean_mk_empty_array_with_capacity(v___x_5226_);
v___x_5228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5228_, 0, v___x_5227_);
return v___x_5228_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5229_ = ((size_t)5ULL);
v___x_5230_ = lean_unsigned_to_nat(0u);
v___x_5231_ = lean_unsigned_to_nat(32u);
v___x_5232_ = lean_mk_empty_array_with_capacity(v___x_5231_);
v___x_5233_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0);
v___x_5234_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5234_, 0, v___x_5233_);
lean_ctor_set(v___x_5234_, 1, v___x_5232_);
lean_ctor_set(v___x_5234_, 2, v___x_5230_);
lean_ctor_set(v___x_5234_, 3, v___x_5230_);
lean_ctor_set_usize(v___x_5234_, 4, v___x_5229_);
return v___x_5234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(lean_object* v___y_5235_){
_start:
{
lean_object* v___x_5237_; lean_object* v_infoState_5238_; lean_object* v_trees_5239_; lean_object* v___x_5240_; lean_object* v_infoState_5241_; lean_object* v_env_5242_; lean_object* v_nextMacroScope_5243_; lean_object* v_ngen_5244_; lean_object* v_auxDeclNGen_5245_; lean_object* v_traceState_5246_; lean_object* v_cache_5247_; lean_object* v_messages_5248_; lean_object* v_snapshotTasks_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5270_; 
v___x_5237_ = lean_st_ref_get(v___y_5235_);
v_infoState_5238_ = lean_ctor_get(v___x_5237_, 7);
lean_inc_ref(v_infoState_5238_);
lean_dec(v___x_5237_);
v_trees_5239_ = lean_ctor_get(v_infoState_5238_, 2);
lean_inc_ref(v_trees_5239_);
lean_dec_ref(v_infoState_5238_);
v___x_5240_ = lean_st_ref_take(v___y_5235_);
v_infoState_5241_ = lean_ctor_get(v___x_5240_, 7);
v_env_5242_ = lean_ctor_get(v___x_5240_, 0);
v_nextMacroScope_5243_ = lean_ctor_get(v___x_5240_, 1);
v_ngen_5244_ = lean_ctor_get(v___x_5240_, 2);
v_auxDeclNGen_5245_ = lean_ctor_get(v___x_5240_, 3);
v_traceState_5246_ = lean_ctor_get(v___x_5240_, 4);
v_cache_5247_ = lean_ctor_get(v___x_5240_, 5);
v_messages_5248_ = lean_ctor_get(v___x_5240_, 6);
v_snapshotTasks_5249_ = lean_ctor_get(v___x_5240_, 8);
v_isSharedCheck_5270_ = !lean_is_exclusive(v___x_5240_);
if (v_isSharedCheck_5270_ == 0)
{
v___x_5251_ = v___x_5240_;
v_isShared_5252_ = v_isSharedCheck_5270_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_snapshotTasks_5249_);
lean_inc(v_infoState_5241_);
lean_inc(v_messages_5248_);
lean_inc(v_cache_5247_);
lean_inc(v_traceState_5246_);
lean_inc(v_auxDeclNGen_5245_);
lean_inc(v_ngen_5244_);
lean_inc(v_nextMacroScope_5243_);
lean_inc(v_env_5242_);
lean_dec(v___x_5240_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5270_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
uint8_t v_enabled_5253_; lean_object* v_assignment_5254_; lean_object* v_lazyAssignment_5255_; lean_object* v___x_5257_; uint8_t v_isShared_5258_; uint8_t v_isSharedCheck_5268_; 
v_enabled_5253_ = lean_ctor_get_uint8(v_infoState_5241_, sizeof(void*)*3);
v_assignment_5254_ = lean_ctor_get(v_infoState_5241_, 0);
v_lazyAssignment_5255_ = lean_ctor_get(v_infoState_5241_, 1);
v_isSharedCheck_5268_ = !lean_is_exclusive(v_infoState_5241_);
if (v_isSharedCheck_5268_ == 0)
{
lean_object* v_unused_5269_; 
v_unused_5269_ = lean_ctor_get(v_infoState_5241_, 2);
lean_dec(v_unused_5269_);
v___x_5257_ = v_infoState_5241_;
v_isShared_5258_ = v_isSharedCheck_5268_;
goto v_resetjp_5256_;
}
else
{
lean_inc(v_lazyAssignment_5255_);
lean_inc(v_assignment_5254_);
lean_dec(v_infoState_5241_);
v___x_5257_ = lean_box(0);
v_isShared_5258_ = v_isSharedCheck_5268_;
goto v_resetjp_5256_;
}
v_resetjp_5256_:
{
lean_object* v___x_5259_; lean_object* v___x_5261_; 
v___x_5259_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1);
if (v_isShared_5258_ == 0)
{
lean_ctor_set(v___x_5257_, 2, v___x_5259_);
v___x_5261_ = v___x_5257_;
goto v_reusejp_5260_;
}
else
{
lean_object* v_reuseFailAlloc_5267_; 
v_reuseFailAlloc_5267_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5267_, 0, v_assignment_5254_);
lean_ctor_set(v_reuseFailAlloc_5267_, 1, v_lazyAssignment_5255_);
lean_ctor_set(v_reuseFailAlloc_5267_, 2, v___x_5259_);
lean_ctor_set_uint8(v_reuseFailAlloc_5267_, sizeof(void*)*3, v_enabled_5253_);
v___x_5261_ = v_reuseFailAlloc_5267_;
goto v_reusejp_5260_;
}
v_reusejp_5260_:
{
lean_object* v___x_5263_; 
if (v_isShared_5252_ == 0)
{
lean_ctor_set(v___x_5251_, 7, v___x_5261_);
v___x_5263_ = v___x_5251_;
goto v_reusejp_5262_;
}
else
{
lean_object* v_reuseFailAlloc_5266_; 
v_reuseFailAlloc_5266_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5266_, 0, v_env_5242_);
lean_ctor_set(v_reuseFailAlloc_5266_, 1, v_nextMacroScope_5243_);
lean_ctor_set(v_reuseFailAlloc_5266_, 2, v_ngen_5244_);
lean_ctor_set(v_reuseFailAlloc_5266_, 3, v_auxDeclNGen_5245_);
lean_ctor_set(v_reuseFailAlloc_5266_, 4, v_traceState_5246_);
lean_ctor_set(v_reuseFailAlloc_5266_, 5, v_cache_5247_);
lean_ctor_set(v_reuseFailAlloc_5266_, 6, v_messages_5248_);
lean_ctor_set(v_reuseFailAlloc_5266_, 7, v___x_5261_);
lean_ctor_set(v_reuseFailAlloc_5266_, 8, v_snapshotTasks_5249_);
v___x_5263_ = v_reuseFailAlloc_5266_;
goto v_reusejp_5262_;
}
v_reusejp_5262_:
{
lean_object* v___x_5264_; lean_object* v___x_5265_; 
v___x_5264_ = lean_st_ref_put(v___y_5235_, v___x_5263_);
v___x_5265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5265_, 0, v_trees_5239_);
return v___x_5265_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___boxed(lean_object* v___y_5271_, lean_object* v___y_5272_){
_start:
{
lean_object* v_res_5273_; 
v_res_5273_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_5271_);
lean_dec(v___y_5271_);
return v_res_5273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(lean_object* v___y_5274_, lean_object* v_mkInfoTree_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v_a_5283_, lean_object* v_a_x3f_5284_){
_start:
{
lean_object* v___x_5286_; lean_object* v_infoState_5287_; lean_object* v_trees_5288_; lean_object* v___x_5289_; 
v___x_5286_ = lean_st_ref_get(v___y_5274_);
v_infoState_5287_ = lean_ctor_get(v___x_5286_, 7);
lean_inc_ref(v_infoState_5287_);
lean_dec(v___x_5286_);
v_trees_5288_ = lean_ctor_get(v_infoState_5287_, 2);
lean_inc_ref(v_trees_5288_);
lean_dec_ref(v_infoState_5287_);
lean_inc(v___y_5274_);
lean_inc_ref(v___y_5282_);
lean_inc(v___y_5281_);
lean_inc_ref(v___y_5280_);
lean_inc(v___y_5279_);
lean_inc_ref(v___y_5278_);
lean_inc(v___y_5277_);
lean_inc_ref(v___y_5276_);
v___x_5289_ = lean_apply_10(v_mkInfoTree_5275_, v_trees_5288_, v___y_5276_, v___y_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5274_, lean_box(0));
if (lean_obj_tag(v___x_5289_) == 0)
{
lean_object* v_a_5290_; lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5328_; 
v_a_5290_ = lean_ctor_get(v___x_5289_, 0);
v_isSharedCheck_5328_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5328_ == 0)
{
v___x_5292_ = v___x_5289_;
v_isShared_5293_ = v_isSharedCheck_5328_;
goto v_resetjp_5291_;
}
else
{
lean_inc(v_a_5290_);
lean_dec(v___x_5289_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5328_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
lean_object* v___x_5294_; lean_object* v_infoState_5295_; lean_object* v_env_5296_; lean_object* v_nextMacroScope_5297_; lean_object* v_ngen_5298_; lean_object* v_auxDeclNGen_5299_; lean_object* v_traceState_5300_; lean_object* v_cache_5301_; lean_object* v_messages_5302_; lean_object* v_snapshotTasks_5303_; lean_object* v___x_5305_; uint8_t v_isShared_5306_; uint8_t v_isSharedCheck_5327_; 
v___x_5294_ = lean_st_ref_take(v___y_5274_);
v_infoState_5295_ = lean_ctor_get(v___x_5294_, 7);
v_env_5296_ = lean_ctor_get(v___x_5294_, 0);
v_nextMacroScope_5297_ = lean_ctor_get(v___x_5294_, 1);
v_ngen_5298_ = lean_ctor_get(v___x_5294_, 2);
v_auxDeclNGen_5299_ = lean_ctor_get(v___x_5294_, 3);
v_traceState_5300_ = lean_ctor_get(v___x_5294_, 4);
v_cache_5301_ = lean_ctor_get(v___x_5294_, 5);
v_messages_5302_ = lean_ctor_get(v___x_5294_, 6);
v_snapshotTasks_5303_ = lean_ctor_get(v___x_5294_, 8);
v_isSharedCheck_5327_ = !lean_is_exclusive(v___x_5294_);
if (v_isSharedCheck_5327_ == 0)
{
v___x_5305_ = v___x_5294_;
v_isShared_5306_ = v_isSharedCheck_5327_;
goto v_resetjp_5304_;
}
else
{
lean_inc(v_snapshotTasks_5303_);
lean_inc(v_infoState_5295_);
lean_inc(v_messages_5302_);
lean_inc(v_cache_5301_);
lean_inc(v_traceState_5300_);
lean_inc(v_auxDeclNGen_5299_);
lean_inc(v_ngen_5298_);
lean_inc(v_nextMacroScope_5297_);
lean_inc(v_env_5296_);
lean_dec(v___x_5294_);
v___x_5305_ = lean_box(0);
v_isShared_5306_ = v_isSharedCheck_5327_;
goto v_resetjp_5304_;
}
v_resetjp_5304_:
{
uint8_t v_enabled_5307_; lean_object* v_assignment_5308_; lean_object* v_lazyAssignment_5309_; lean_object* v___x_5311_; uint8_t v_isShared_5312_; uint8_t v_isSharedCheck_5325_; 
v_enabled_5307_ = lean_ctor_get_uint8(v_infoState_5295_, sizeof(void*)*3);
v_assignment_5308_ = lean_ctor_get(v_infoState_5295_, 0);
v_lazyAssignment_5309_ = lean_ctor_get(v_infoState_5295_, 1);
v_isSharedCheck_5325_ = !lean_is_exclusive(v_infoState_5295_);
if (v_isSharedCheck_5325_ == 0)
{
lean_object* v_unused_5326_; 
v_unused_5326_ = lean_ctor_get(v_infoState_5295_, 2);
lean_dec(v_unused_5326_);
v___x_5311_ = v_infoState_5295_;
v_isShared_5312_ = v_isSharedCheck_5325_;
goto v_resetjp_5310_;
}
else
{
lean_inc(v_lazyAssignment_5309_);
lean_inc(v_assignment_5308_);
lean_dec(v_infoState_5295_);
v___x_5311_ = lean_box(0);
v_isShared_5312_ = v_isSharedCheck_5325_;
goto v_resetjp_5310_;
}
v_resetjp_5310_:
{
lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5316_; 
v___x_5313_ = lean_box(0);
v___x_5314_ = l_Lean_PersistentArray_push___redArg(v_a_5283_, v_a_5290_);
if (v_isShared_5312_ == 0)
{
lean_ctor_set(v___x_5311_, 2, v___x_5314_);
v___x_5316_ = v___x_5311_;
goto v_reusejp_5315_;
}
else
{
lean_object* v_reuseFailAlloc_5324_; 
v_reuseFailAlloc_5324_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5324_, 0, v_assignment_5308_);
lean_ctor_set(v_reuseFailAlloc_5324_, 1, v_lazyAssignment_5309_);
lean_ctor_set(v_reuseFailAlloc_5324_, 2, v___x_5314_);
lean_ctor_set_uint8(v_reuseFailAlloc_5324_, sizeof(void*)*3, v_enabled_5307_);
v___x_5316_ = v_reuseFailAlloc_5324_;
goto v_reusejp_5315_;
}
v_reusejp_5315_:
{
lean_object* v___x_5318_; 
if (v_isShared_5306_ == 0)
{
lean_ctor_set(v___x_5305_, 7, v___x_5316_);
v___x_5318_ = v___x_5305_;
goto v_reusejp_5317_;
}
else
{
lean_object* v_reuseFailAlloc_5323_; 
v_reuseFailAlloc_5323_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5323_, 0, v_env_5296_);
lean_ctor_set(v_reuseFailAlloc_5323_, 1, v_nextMacroScope_5297_);
lean_ctor_set(v_reuseFailAlloc_5323_, 2, v_ngen_5298_);
lean_ctor_set(v_reuseFailAlloc_5323_, 3, v_auxDeclNGen_5299_);
lean_ctor_set(v_reuseFailAlloc_5323_, 4, v_traceState_5300_);
lean_ctor_set(v_reuseFailAlloc_5323_, 5, v_cache_5301_);
lean_ctor_set(v_reuseFailAlloc_5323_, 6, v_messages_5302_);
lean_ctor_set(v_reuseFailAlloc_5323_, 7, v___x_5316_);
lean_ctor_set(v_reuseFailAlloc_5323_, 8, v_snapshotTasks_5303_);
v___x_5318_ = v_reuseFailAlloc_5323_;
goto v_reusejp_5317_;
}
v_reusejp_5317_:
{
lean_object* v___x_5319_; lean_object* v___x_5321_; 
v___x_5319_ = lean_st_ref_put(v___y_5274_, v___x_5318_);
if (v_isShared_5293_ == 0)
{
lean_ctor_set(v___x_5292_, 0, v___x_5313_);
v___x_5321_ = v___x_5292_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v___x_5313_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
return v___x_5321_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5329_; lean_object* v___x_5331_; uint8_t v_isShared_5332_; uint8_t v_isSharedCheck_5336_; 
lean_dec_ref(v_a_5283_);
v_a_5329_ = lean_ctor_get(v___x_5289_, 0);
v_isSharedCheck_5336_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5336_ == 0)
{
v___x_5331_ = v___x_5289_;
v_isShared_5332_ = v_isSharedCheck_5336_;
goto v_resetjp_5330_;
}
else
{
lean_inc(v_a_5329_);
lean_dec(v___x_5289_);
v___x_5331_ = lean_box(0);
v_isShared_5332_ = v_isSharedCheck_5336_;
goto v_resetjp_5330_;
}
v_resetjp_5330_:
{
lean_object* v___x_5334_; 
if (v_isShared_5332_ == 0)
{
v___x_5334_ = v___x_5331_;
goto v_reusejp_5333_;
}
else
{
lean_object* v_reuseFailAlloc_5335_; 
v_reuseFailAlloc_5335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5335_, 0, v_a_5329_);
v___x_5334_ = v_reuseFailAlloc_5335_;
goto v_reusejp_5333_;
}
v_reusejp_5333_:
{
return v___x_5334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0___boxed(lean_object* v___y_5337_, lean_object* v_mkInfoTree_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v_a_5346_, lean_object* v_a_x3f_5347_, lean_object* v___y_5348_){
_start:
{
lean_object* v_res_5349_; 
v_res_5349_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5337_, v_mkInfoTree_5338_, v___y_5339_, v___y_5340_, v___y_5341_, v___y_5342_, v___y_5343_, v___y_5344_, v___y_5345_, v_a_5346_, v_a_x3f_5347_);
lean_dec(v_a_x3f_5347_);
lean_dec_ref(v___y_5345_);
lean_dec(v___y_5344_);
lean_dec_ref(v___y_5343_);
lean_dec(v___y_5342_);
lean_dec_ref(v___y_5341_);
lean_dec(v___y_5340_);
lean_dec_ref(v___y_5339_);
lean_dec(v___y_5337_);
return v_res_5349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(lean_object* v_x_5350_, lean_object* v_mkInfoTree_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_){
_start:
{
lean_object* v___x_5361_; lean_object* v_infoState_5362_; uint8_t v_enabled_5363_; 
v___x_5361_ = lean_st_ref_get(v___y_5359_);
v_infoState_5362_ = lean_ctor_get(v___x_5361_, 7);
lean_inc_ref(v_infoState_5362_);
lean_dec(v___x_5361_);
v_enabled_5363_ = lean_ctor_get_uint8(v_infoState_5362_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5362_);
if (v_enabled_5363_ == 0)
{
lean_object* v___x_5364_; 
lean_dec_ref(v_mkInfoTree_5351_);
lean_inc(v___y_5359_);
lean_inc_ref(v___y_5358_);
lean_inc(v___y_5357_);
lean_inc_ref(v___y_5356_);
lean_inc(v___y_5355_);
lean_inc_ref(v___y_5354_);
lean_inc(v___y_5353_);
lean_inc_ref(v___y_5352_);
v___x_5364_ = lean_apply_9(v_x_5350_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v___y_5359_, lean_box(0));
return v___x_5364_;
}
else
{
lean_object* v___x_5365_; lean_object* v_a_5366_; lean_object* v_r_5367_; 
v___x_5365_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_5359_);
v_a_5366_ = lean_ctor_get(v___x_5365_, 0);
lean_inc(v_a_5366_);
lean_dec_ref(v___x_5365_);
lean_inc(v___y_5359_);
lean_inc_ref(v___y_5358_);
lean_inc(v___y_5357_);
lean_inc_ref(v___y_5356_);
lean_inc(v___y_5355_);
lean_inc_ref(v___y_5354_);
lean_inc(v___y_5353_);
lean_inc_ref(v___y_5352_);
v_r_5367_ = lean_apply_9(v_x_5350_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v___y_5359_, lean_box(0));
if (lean_obj_tag(v_r_5367_) == 0)
{
lean_object* v_a_5368_; lean_object* v___x_5370_; uint8_t v_isShared_5371_; uint8_t v_isSharedCheck_5392_; 
v_a_5368_ = lean_ctor_get(v_r_5367_, 0);
v_isSharedCheck_5392_ = !lean_is_exclusive(v_r_5367_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5370_ = v_r_5367_;
v_isShared_5371_ = v_isSharedCheck_5392_;
goto v_resetjp_5369_;
}
else
{
lean_inc(v_a_5368_);
lean_dec(v_r_5367_);
v___x_5370_ = lean_box(0);
v_isShared_5371_ = v_isSharedCheck_5392_;
goto v_resetjp_5369_;
}
v_resetjp_5369_:
{
lean_object* v___x_5373_; 
lean_inc(v_a_5368_);
if (v_isShared_5371_ == 0)
{
lean_ctor_set_tag(v___x_5370_, 1);
v___x_5373_ = v___x_5370_;
goto v_reusejp_5372_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v_a_5368_);
v___x_5373_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5372_;
}
v_reusejp_5372_:
{
lean_object* v___x_5374_; 
v___x_5374_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5359_, v_mkInfoTree_5351_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v_a_5366_, v___x_5373_);
lean_dec_ref(v___x_5373_);
if (lean_obj_tag(v___x_5374_) == 0)
{
lean_object* v___x_5376_; uint8_t v_isShared_5377_; uint8_t v_isSharedCheck_5381_; 
v_isSharedCheck_5381_ = !lean_is_exclusive(v___x_5374_);
if (v_isSharedCheck_5381_ == 0)
{
lean_object* v_unused_5382_; 
v_unused_5382_ = lean_ctor_get(v___x_5374_, 0);
lean_dec(v_unused_5382_);
v___x_5376_ = v___x_5374_;
v_isShared_5377_ = v_isSharedCheck_5381_;
goto v_resetjp_5375_;
}
else
{
lean_dec(v___x_5374_);
v___x_5376_ = lean_box(0);
v_isShared_5377_ = v_isSharedCheck_5381_;
goto v_resetjp_5375_;
}
v_resetjp_5375_:
{
lean_object* v___x_5379_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set(v___x_5376_, 0, v_a_5368_);
v___x_5379_ = v___x_5376_;
goto v_reusejp_5378_;
}
else
{
lean_object* v_reuseFailAlloc_5380_; 
v_reuseFailAlloc_5380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5380_, 0, v_a_5368_);
v___x_5379_ = v_reuseFailAlloc_5380_;
goto v_reusejp_5378_;
}
v_reusejp_5378_:
{
return v___x_5379_;
}
}
}
else
{
lean_object* v_a_5383_; lean_object* v___x_5385_; uint8_t v_isShared_5386_; uint8_t v_isSharedCheck_5390_; 
lean_dec(v_a_5368_);
v_a_5383_ = lean_ctor_get(v___x_5374_, 0);
v_isSharedCheck_5390_ = !lean_is_exclusive(v___x_5374_);
if (v_isSharedCheck_5390_ == 0)
{
v___x_5385_ = v___x_5374_;
v_isShared_5386_ = v_isSharedCheck_5390_;
goto v_resetjp_5384_;
}
else
{
lean_inc(v_a_5383_);
lean_dec(v___x_5374_);
v___x_5385_ = lean_box(0);
v_isShared_5386_ = v_isSharedCheck_5390_;
goto v_resetjp_5384_;
}
v_resetjp_5384_:
{
lean_object* v___x_5388_; 
if (v_isShared_5386_ == 0)
{
v___x_5388_ = v___x_5385_;
goto v_reusejp_5387_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v_a_5383_);
v___x_5388_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5387_;
}
v_reusejp_5387_:
{
return v___x_5388_;
}
}
}
}
}
}
else
{
lean_object* v_a_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; 
v_a_5393_ = lean_ctor_get(v_r_5367_, 0);
lean_inc(v_a_5393_);
lean_dec_ref_known(v_r_5367_, 1);
v___x_5394_ = lean_box(0);
v___x_5395_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5359_, v_mkInfoTree_5351_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v_a_5366_, v___x_5394_);
if (lean_obj_tag(v___x_5395_) == 0)
{
lean_object* v___x_5397_; uint8_t v_isShared_5398_; uint8_t v_isSharedCheck_5402_; 
v_isSharedCheck_5402_ = !lean_is_exclusive(v___x_5395_);
if (v_isSharedCheck_5402_ == 0)
{
lean_object* v_unused_5403_; 
v_unused_5403_ = lean_ctor_get(v___x_5395_, 0);
lean_dec(v_unused_5403_);
v___x_5397_ = v___x_5395_;
v_isShared_5398_ = v_isSharedCheck_5402_;
goto v_resetjp_5396_;
}
else
{
lean_dec(v___x_5395_);
v___x_5397_ = lean_box(0);
v_isShared_5398_ = v_isSharedCheck_5402_;
goto v_resetjp_5396_;
}
v_resetjp_5396_:
{
lean_object* v___x_5400_; 
if (v_isShared_5398_ == 0)
{
lean_ctor_set_tag(v___x_5397_, 1);
lean_ctor_set(v___x_5397_, 0, v_a_5393_);
v___x_5400_ = v___x_5397_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5401_; 
v_reuseFailAlloc_5401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5401_, 0, v_a_5393_);
v___x_5400_ = v_reuseFailAlloc_5401_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
return v___x_5400_;
}
}
}
else
{
lean_object* v_a_5404_; lean_object* v___x_5406_; uint8_t v_isShared_5407_; uint8_t v_isSharedCheck_5411_; 
lean_dec(v_a_5393_);
v_a_5404_ = lean_ctor_get(v___x_5395_, 0);
v_isSharedCheck_5411_ = !lean_is_exclusive(v___x_5395_);
if (v_isSharedCheck_5411_ == 0)
{
v___x_5406_ = v___x_5395_;
v_isShared_5407_ = v_isSharedCheck_5411_;
goto v_resetjp_5405_;
}
else
{
lean_inc(v_a_5404_);
lean_dec(v___x_5395_);
v___x_5406_ = lean_box(0);
v_isShared_5407_ = v_isSharedCheck_5411_;
goto v_resetjp_5405_;
}
v_resetjp_5405_:
{
lean_object* v___x_5409_; 
if (v_isShared_5407_ == 0)
{
v___x_5409_ = v___x_5406_;
goto v_reusejp_5408_;
}
else
{
lean_object* v_reuseFailAlloc_5410_; 
v_reuseFailAlloc_5410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5410_, 0, v_a_5404_);
v___x_5409_ = v_reuseFailAlloc_5410_;
goto v_reusejp_5408_;
}
v_reusejp_5408_:
{
return v___x_5409_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___boxed(lean_object* v_x_5412_, lean_object* v_mkInfoTree_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_){
_start:
{
lean_object* v_res_5423_; 
v_res_5423_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v_x_5412_, v_mkInfoTree_5413_, v___y_5414_, v___y_5415_, v___y_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, v___y_5421_);
lean_dec(v___y_5421_);
lean_dec_ref(v___y_5420_);
lean_dec(v___y_5419_);
lean_dec_ref(v___y_5418_);
lean_dec(v___y_5417_);
lean_dec_ref(v___y_5416_);
lean_dec(v___y_5415_);
lean_dec_ref(v___y_5414_);
return v_res_5423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(lean_object* v_a_5424_, lean_object* v_trees_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_){
_start:
{
lean_object* v___x_5435_; 
lean_inc(v___y_5433_);
lean_inc_ref(v___y_5432_);
lean_inc(v___y_5431_);
lean_inc_ref(v___y_5430_);
lean_inc(v___y_5429_);
lean_inc_ref(v___y_5428_);
lean_inc(v___y_5427_);
lean_inc_ref(v___y_5426_);
v___x_5435_ = lean_apply_9(v_a_5424_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_, lean_box(0));
if (lean_obj_tag(v___x_5435_) == 0)
{
lean_object* v_a_5436_; lean_object* v___x_5438_; uint8_t v_isShared_5439_; uint8_t v_isSharedCheck_5444_; 
v_a_5436_ = lean_ctor_get(v___x_5435_, 0);
v_isSharedCheck_5444_ = !lean_is_exclusive(v___x_5435_);
if (v_isSharedCheck_5444_ == 0)
{
v___x_5438_ = v___x_5435_;
v_isShared_5439_ = v_isSharedCheck_5444_;
goto v_resetjp_5437_;
}
else
{
lean_inc(v_a_5436_);
lean_dec(v___x_5435_);
v___x_5438_ = lean_box(0);
v_isShared_5439_ = v_isSharedCheck_5444_;
goto v_resetjp_5437_;
}
v_resetjp_5437_:
{
lean_object* v___x_5440_; lean_object* v___x_5442_; 
v___x_5440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5440_, 0, v_a_5436_);
lean_ctor_set(v___x_5440_, 1, v_trees_5425_);
if (v_isShared_5439_ == 0)
{
lean_ctor_set(v___x_5438_, 0, v___x_5440_);
v___x_5442_ = v___x_5438_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v___x_5440_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
}
else
{
lean_object* v_a_5445_; lean_object* v___x_5447_; uint8_t v_isShared_5448_; uint8_t v_isSharedCheck_5452_; 
lean_dec_ref(v_trees_5425_);
v_a_5445_ = lean_ctor_get(v___x_5435_, 0);
v_isSharedCheck_5452_ = !lean_is_exclusive(v___x_5435_);
if (v_isSharedCheck_5452_ == 0)
{
v___x_5447_ = v___x_5435_;
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
else
{
lean_inc(v_a_5445_);
lean_dec(v___x_5435_);
v___x_5447_ = lean_box(0);
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
v_resetjp_5446_:
{
lean_object* v___x_5450_; 
if (v_isShared_5448_ == 0)
{
v___x_5450_ = v___x_5447_;
goto v_reusejp_5449_;
}
else
{
lean_object* v_reuseFailAlloc_5451_; 
v_reuseFailAlloc_5451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5451_, 0, v_a_5445_);
v___x_5450_ = v_reuseFailAlloc_5451_;
goto v_reusejp_5449_;
}
v_reusejp_5449_:
{
return v___x_5450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed(lean_object* v_a_5453_, lean_object* v_trees_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_){
_start:
{
lean_object* v_res_5464_; 
v_res_5464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(v_a_5453_, v_trees_5454_, v___y_5455_, v___y_5456_, v___y_5457_, v___y_5458_, v___y_5459_, v___y_5460_, v___y_5461_, v___y_5462_);
lean_dec(v___y_5462_);
lean_dec_ref(v___y_5461_);
lean_dec(v___y_5460_);
lean_dec_ref(v___y_5459_);
lean_dec(v___y_5458_);
lean_dec_ref(v___y_5457_);
lean_dec(v___y_5456_);
lean_dec_ref(v___y_5455_);
return v_res_5464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(lean_object* v___x_5465_, lean_object* v_tactic_5466_, lean_object* v_ref_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_){
_start:
{
lean_object* v___x_5477_; 
v___x_5477_ = l_Lean_Elab_Tactic_setGoals___redArg(v___x_5465_, v___y_5469_);
if (lean_obj_tag(v___x_5477_) == 0)
{
lean_object* v___x_5478_; 
lean_dec_ref_known(v___x_5477_, 1);
v___x_5478_ = l_Lean_Elab_WF_applyCleanWfTactic(v___y_5468_, v___y_5469_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, v___y_5474_, v___y_5475_);
if (lean_obj_tag(v___x_5478_) == 0)
{
lean_object* v___x_5479_; lean_object* v___x_5480_; 
lean_dec_ref_known(v___x_5478_, 1);
v___x_5479_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_5479_, 0, v_tactic_5466_);
v___x_5480_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v_ref_5467_, v___y_5468_, v___y_5469_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, v___y_5474_, v___y_5475_);
if (lean_obj_tag(v___x_5480_) == 0)
{
lean_object* v_a_5481_; lean_object* v___f_5482_; lean_object* v___x_5483_; 
v_a_5481_ = lean_ctor_get(v___x_5480_, 0);
lean_inc(v_a_5481_);
lean_dec_ref_known(v___x_5480_, 1);
v___f_5482_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed), 11, 1);
lean_closure_set(v___f_5482_, 0, v_a_5481_);
v___x_5483_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v___x_5479_, v___f_5482_, v___y_5468_, v___y_5469_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, v___y_5474_, v___y_5475_);
return v___x_5483_;
}
else
{
lean_object* v_a_5484_; lean_object* v___x_5486_; uint8_t v_isShared_5487_; uint8_t v_isSharedCheck_5491_; 
lean_dec_ref(v___x_5479_);
v_a_5484_ = lean_ctor_get(v___x_5480_, 0);
v_isSharedCheck_5491_ = !lean_is_exclusive(v___x_5480_);
if (v_isSharedCheck_5491_ == 0)
{
v___x_5486_ = v___x_5480_;
v_isShared_5487_ = v_isSharedCheck_5491_;
goto v_resetjp_5485_;
}
else
{
lean_inc(v_a_5484_);
lean_dec(v___x_5480_);
v___x_5486_ = lean_box(0);
v_isShared_5487_ = v_isSharedCheck_5491_;
goto v_resetjp_5485_;
}
v_resetjp_5485_:
{
lean_object* v___x_5489_; 
if (v_isShared_5487_ == 0)
{
v___x_5489_ = v___x_5486_;
goto v_reusejp_5488_;
}
else
{
lean_object* v_reuseFailAlloc_5490_; 
v_reuseFailAlloc_5490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5490_, 0, v_a_5484_);
v___x_5489_ = v_reuseFailAlloc_5490_;
goto v_reusejp_5488_;
}
v_reusejp_5488_:
{
return v___x_5489_;
}
}
}
}
else
{
lean_dec(v_ref_5467_);
lean_dec(v_tactic_5466_);
return v___x_5478_;
}
}
else
{
lean_dec(v_ref_5467_);
lean_dec(v_tactic_5466_);
return v___x_5477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed(lean_object* v___x_5492_, lean_object* v_tactic_5493_, lean_object* v_ref_5494_, lean_object* v___y_5495_, lean_object* v___y_5496_, lean_object* v___y_5497_, lean_object* v___y_5498_, lean_object* v___y_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_){
_start:
{
lean_object* v_res_5504_; 
v_res_5504_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(v___x_5492_, v_tactic_5493_, v_ref_5494_, v___y_5495_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_, v___y_5501_, v___y_5502_);
lean_dec(v___y_5502_);
lean_dec_ref(v___y_5501_);
lean_dec(v___y_5500_);
lean_dec_ref(v___y_5499_);
lean_dec(v___y_5498_);
lean_dec_ref(v___y_5497_);
lean_dec(v___y_5496_);
lean_dec_ref(v___y_5495_);
return v_res_5504_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5505_; lean_object* v___x_5506_; 
v___x_5505_ = lean_box(1);
v___x_5506_ = l_Lean_MessageData_ofFormat(v___x_5505_);
return v___x_5506_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5510_; lean_object* v___x_5511_; 
v___x_5510_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2));
v___x_5511_ = l_Lean_MessageData_ofFormat(v___x_5510_);
return v___x_5511_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(lean_object* v_x_5512_, lean_object* v_x_5513_){
_start:
{
if (lean_obj_tag(v_x_5513_) == 0)
{
return v_x_5512_;
}
else
{
lean_object* v_head_5514_; lean_object* v_tail_5515_; lean_object* v___x_5517_; uint8_t v_isShared_5518_; uint8_t v_isSharedCheck_5537_; 
v_head_5514_ = lean_ctor_get(v_x_5513_, 0);
v_tail_5515_ = lean_ctor_get(v_x_5513_, 1);
v_isSharedCheck_5537_ = !lean_is_exclusive(v_x_5513_);
if (v_isSharedCheck_5537_ == 0)
{
v___x_5517_ = v_x_5513_;
v_isShared_5518_ = v_isSharedCheck_5537_;
goto v_resetjp_5516_;
}
else
{
lean_inc(v_tail_5515_);
lean_inc(v_head_5514_);
lean_dec(v_x_5513_);
v___x_5517_ = lean_box(0);
v_isShared_5518_ = v_isSharedCheck_5537_;
goto v_resetjp_5516_;
}
v_resetjp_5516_:
{
lean_object* v_before_5519_; lean_object* v___x_5521_; uint8_t v_isShared_5522_; uint8_t v_isSharedCheck_5535_; 
v_before_5519_ = lean_ctor_get(v_head_5514_, 0);
v_isSharedCheck_5535_ = !lean_is_exclusive(v_head_5514_);
if (v_isSharedCheck_5535_ == 0)
{
lean_object* v_unused_5536_; 
v_unused_5536_ = lean_ctor_get(v_head_5514_, 1);
lean_dec(v_unused_5536_);
v___x_5521_ = v_head_5514_;
v_isShared_5522_ = v_isSharedCheck_5535_;
goto v_resetjp_5520_;
}
else
{
lean_inc(v_before_5519_);
lean_dec(v_head_5514_);
v___x_5521_ = lean_box(0);
v_isShared_5522_ = v_isSharedCheck_5535_;
goto v_resetjp_5520_;
}
v_resetjp_5520_:
{
lean_object* v___x_5523_; lean_object* v___x_5525_; 
v___x_5523_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0);
if (v_isShared_5522_ == 0)
{
lean_ctor_set_tag(v___x_5521_, 7);
lean_ctor_set(v___x_5521_, 1, v___x_5523_);
lean_ctor_set(v___x_5521_, 0, v_x_5512_);
v___x_5525_ = v___x_5521_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5534_; 
v_reuseFailAlloc_5534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5534_, 0, v_x_5512_);
lean_ctor_set(v_reuseFailAlloc_5534_, 1, v___x_5523_);
v___x_5525_ = v_reuseFailAlloc_5534_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
lean_object* v___x_5526_; lean_object* v___x_5528_; 
v___x_5526_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3);
if (v_isShared_5518_ == 0)
{
lean_ctor_set_tag(v___x_5517_, 7);
lean_ctor_set(v___x_5517_, 1, v___x_5526_);
lean_ctor_set(v___x_5517_, 0, v___x_5525_);
v___x_5528_ = v___x_5517_;
goto v_reusejp_5527_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v___x_5525_);
lean_ctor_set(v_reuseFailAlloc_5533_, 1, v___x_5526_);
v___x_5528_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5527_;
}
v_reusejp_5527_:
{
lean_object* v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; 
v___x_5529_ = l_Lean_MessageData_ofSyntax(v_before_5519_);
v___x_5530_ = l_Lean_indentD(v___x_5529_);
v___x_5531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5531_, 0, v___x_5528_);
lean_ctor_set(v___x_5531_, 1, v___x_5530_);
v_x_5512_ = v___x_5531_;
v_x_5513_ = v_tail_5515_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_5541_; lean_object* v___x_5542_; 
v___x_5541_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1));
v___x_5542_ = l_Lean_MessageData_ofFormat(v___x_5541_);
return v___x_5542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object* v_msgData_5543_, lean_object* v_macroStack_5544_, lean_object* v___y_5545_){
_start:
{
lean_object* v_toCold_5547_; lean_object* v_options_5548_; lean_object* v___x_5549_; uint8_t v___x_5550_; 
v_toCold_5547_ = lean_ctor_get(v___y_5545_, 0);
v_options_5548_ = lean_ctor_get(v_toCold_5547_, 2);
v___x_5549_ = l_Lean_Elab_pp_macroStack;
v___x_5550_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_options_5548_, v___x_5549_);
if (v___x_5550_ == 0)
{
lean_object* v___x_5551_; 
lean_dec(v_macroStack_5544_);
v___x_5551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5551_, 0, v_msgData_5543_);
return v___x_5551_;
}
else
{
if (lean_obj_tag(v_macroStack_5544_) == 0)
{
lean_object* v___x_5552_; 
v___x_5552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5552_, 0, v_msgData_5543_);
return v___x_5552_;
}
else
{
lean_object* v_head_5553_; lean_object* v_after_5554_; lean_object* v___x_5556_; uint8_t v_isShared_5557_; uint8_t v_isSharedCheck_5569_; 
v_head_5553_ = lean_ctor_get(v_macroStack_5544_, 0);
lean_inc(v_head_5553_);
v_after_5554_ = lean_ctor_get(v_head_5553_, 1);
v_isSharedCheck_5569_ = !lean_is_exclusive(v_head_5553_);
if (v_isSharedCheck_5569_ == 0)
{
lean_object* v_unused_5570_; 
v_unused_5570_ = lean_ctor_get(v_head_5553_, 0);
lean_dec(v_unused_5570_);
v___x_5556_ = v_head_5553_;
v_isShared_5557_ = v_isSharedCheck_5569_;
goto v_resetjp_5555_;
}
else
{
lean_inc(v_after_5554_);
lean_dec(v_head_5553_);
v___x_5556_ = lean_box(0);
v_isShared_5557_ = v_isSharedCheck_5569_;
goto v_resetjp_5555_;
}
v_resetjp_5555_:
{
lean_object* v___x_5558_; lean_object* v___x_5560_; 
v___x_5558_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0);
if (v_isShared_5557_ == 0)
{
lean_ctor_set_tag(v___x_5556_, 7);
lean_ctor_set(v___x_5556_, 1, v___x_5558_);
lean_ctor_set(v___x_5556_, 0, v_msgData_5543_);
v___x_5560_ = v___x_5556_;
goto v_reusejp_5559_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v_msgData_5543_);
lean_ctor_set(v_reuseFailAlloc_5568_, 1, v___x_5558_);
v___x_5560_ = v_reuseFailAlloc_5568_;
goto v_reusejp_5559_;
}
v_reusejp_5559_:
{
lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v_msgData_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5561_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2);
v___x_5562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5562_, 0, v___x_5560_);
lean_ctor_set(v___x_5562_, 1, v___x_5561_);
v___x_5563_ = l_Lean_MessageData_ofSyntax(v_after_5554_);
v___x_5564_ = l_Lean_indentD(v___x_5563_);
v_msgData_5565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_5565_, 0, v___x_5562_);
lean_ctor_set(v_msgData_5565_, 1, v___x_5564_);
v___x_5566_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(v_msgData_5565_, v_macroStack_5544_);
v___x_5567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5567_, 0, v___x_5566_);
return v___x_5567_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object* v_msgData_5571_, lean_object* v_macroStack_5572_, lean_object* v___y_5573_, lean_object* v___y_5574_){
_start:
{
lean_object* v_res_5575_; 
v_res_5575_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_msgData_5571_, v_macroStack_5572_, v___y_5573_);
lean_dec_ref(v___y_5573_);
return v_res_5575_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object* v_msg_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_, lean_object* v___y_5581_, lean_object* v___y_5582_){
_start:
{
lean_object* v_ref_5584_; lean_object* v_macroStack_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v_a_5588_; lean_object* v___x_5589_; lean_object* v_a_5590_; lean_object* v___x_5592_; uint8_t v_isShared_5593_; uint8_t v_isSharedCheck_5598_; 
v_ref_5584_ = lean_ctor_get(v___y_5581_, 2);
v_macroStack_5585_ = lean_ctor_get(v___y_5577_, 1);
v___x_5586_ = l_Lean_Elab_getBetterRef(v_ref_5584_, v_macroStack_5585_);
v___x_5587_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_5576_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_);
v_a_5588_ = lean_ctor_get(v___x_5587_, 0);
lean_inc(v_a_5588_);
lean_dec_ref(v___x_5587_);
lean_inc(v_macroStack_5585_);
v___x_5589_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_a_5588_, v_macroStack_5585_, v___y_5581_);
v_a_5590_ = lean_ctor_get(v___x_5589_, 0);
v_isSharedCheck_5598_ = !lean_is_exclusive(v___x_5589_);
if (v_isSharedCheck_5598_ == 0)
{
v___x_5592_ = v___x_5589_;
v_isShared_5593_ = v_isSharedCheck_5598_;
goto v_resetjp_5591_;
}
else
{
lean_inc(v_a_5590_);
lean_dec(v___x_5589_);
v___x_5592_ = lean_box(0);
v_isShared_5593_ = v_isSharedCheck_5598_;
goto v_resetjp_5591_;
}
v_resetjp_5591_:
{
lean_object* v___x_5594_; lean_object* v___x_5596_; 
v___x_5594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5594_, 0, v___x_5586_);
lean_ctor_set(v___x_5594_, 1, v_a_5590_);
if (v_isShared_5593_ == 0)
{
lean_ctor_set_tag(v___x_5592_, 1);
lean_ctor_set(v___x_5592_, 0, v___x_5594_);
v___x_5596_ = v___x_5592_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v___x_5594_);
v___x_5596_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
return v___x_5596_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object* v_msg_5599_, lean_object* v___y_5600_, lean_object* v___y_5601_, lean_object* v___y_5602_, lean_object* v___y_5603_, lean_object* v___y_5604_, lean_object* v___y_5605_, lean_object* v___y_5606_){
_start:
{
lean_object* v_res_5607_; 
v_res_5607_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v_msg_5599_, v___y_5600_, v___y_5601_, v___y_5602_, v___y_5603_, v___y_5604_, v___y_5605_);
lean_dec(v___y_5605_);
lean_dec_ref(v___y_5604_);
lean_dec(v___y_5603_);
lean_dec_ref(v___y_5602_);
lean_dec(v___y_5601_);
lean_dec_ref(v___y_5600_);
return v_res_5607_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1(void){
_start:
{
lean_object* v___x_5609_; lean_object* v___x_5610_; 
v___x_5609_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0));
v___x_5610_ = l_Lean_stringToMessageData(v___x_5609_);
return v___x_5610_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(lean_object* v_as_5611_, size_t v_sz_5612_, size_t v_i_5613_, lean_object* v_b_5614_, lean_object* v___y_5615_, lean_object* v___y_5616_, lean_object* v___y_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_){
_start:
{
lean_object* v_a_5623_; uint8_t v___x_5627_; 
v___x_5627_ = lean_usize_dec_lt(v_i_5613_, v_sz_5612_);
if (v___x_5627_ == 0)
{
lean_object* v___x_5628_; 
v___x_5628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5628_, 0, v_b_5614_);
return v___x_5628_;
}
else
{
lean_object* v___x_5629_; lean_object* v_a_5630_; lean_object* v___x_5631_; 
v___x_5629_ = lean_box(0);
v_a_5630_ = lean_array_uget_borrowed(v_as_5611_, v_i_5613_);
lean_inc(v_a_5630_);
v___x_5631_ = l_Lean_MVarId_getType(v_a_5630_, v___y_5617_, v___y_5618_, v___y_5619_, v___y_5620_);
if (lean_obj_tag(v___x_5631_) == 0)
{
lean_object* v_a_5632_; lean_object* v___x_5633_; 
v_a_5632_ = lean_ctor_get(v___x_5631_, 0);
lean_inc(v_a_5632_);
lean_dec_ref_known(v___x_5631_, 1);
lean_inc(v_a_5630_);
v___x_5633_ = l_Lean_MVarId_getType(v_a_5630_, v___y_5617_, v___y_5618_, v___y_5619_, v___y_5620_);
if (lean_obj_tag(v___x_5633_) == 0)
{
lean_object* v_a_5634_; lean_object* v___x_5635_; 
v_a_5634_ = lean_ctor_get(v___x_5633_, 0);
lean_inc(v_a_5634_);
lean_dec_ref_known(v___x_5633_, 1);
v___x_5635_ = l_Lean_getRecAppSyntax_x3f(v_a_5634_);
lean_dec(v_a_5634_);
if (lean_obj_tag(v___x_5635_) == 1)
{
lean_object* v_val_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; 
v_val_5636_ = lean_ctor_get(v___x_5635_, 0);
lean_inc(v_val_5636_);
lean_dec_ref_known(v___x_5635_, 1);
v___x_5637_ = l_Lean_Expr_mdataExpr_x21(v_a_5632_);
lean_dec(v_a_5632_);
lean_inc(v_a_5630_);
v___x_5638_ = l_Lean_MVarId_setType___redArg(v_a_5630_, v___x_5637_, v___y_5618_);
if (lean_obj_tag(v___x_5638_) == 0)
{
lean_object* v_toCold_5639_; lean_object* v_currRecDepth_5640_; lean_object* v_ref_5641_; uint8_t v_diag_5642_; uint8_t v_suppressElabErrors_5643_; lean_object* v_ref_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; 
lean_dec_ref_known(v___x_5638_, 1);
v_toCold_5639_ = lean_ctor_get(v___y_5619_, 0);
v_currRecDepth_5640_ = lean_ctor_get(v___y_5619_, 1);
v_ref_5641_ = lean_ctor_get(v___y_5619_, 2);
v_diag_5642_ = lean_ctor_get_uint8(v___y_5619_, sizeof(void*)*3);
v_suppressElabErrors_5643_ = lean_ctor_get_uint8(v___y_5619_, sizeof(void*)*3 + 1);
v_ref_5644_ = l_Lean_replaceRef(v_val_5636_, v_ref_5641_);
lean_dec(v_val_5636_);
lean_inc(v_currRecDepth_5640_);
lean_inc_ref(v_toCold_5639_);
v___x_5645_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5645_, 0, v_toCold_5639_);
lean_ctor_set(v___x_5645_, 1, v_currRecDepth_5640_);
lean_ctor_set(v___x_5645_, 2, v_ref_5644_);
lean_ctor_set_uint8(v___x_5645_, sizeof(void*)*3, v_diag_5642_);
lean_ctor_set_uint8(v___x_5645_, sizeof(void*)*3 + 1, v_suppressElabErrors_5643_);
lean_inc(v_a_5630_);
v___x_5646_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(v_a_5630_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_, v___x_5645_, v___y_5620_);
lean_dec_ref_known(v___x_5645_, 3);
if (lean_obj_tag(v___x_5646_) == 0)
{
lean_dec_ref_known(v___x_5646_, 1);
v_a_5623_ = v___x_5629_;
goto v___jp_5622_;
}
else
{
return v___x_5646_;
}
}
else
{
lean_dec(v_val_5636_);
return v___x_5638_;
}
}
else
{
lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; 
lean_dec(v___x_5635_);
v___x_5647_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1);
v___x_5648_ = l_Lean_indentExpr(v_a_5632_);
v___x_5649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5649_, 0, v___x_5647_);
lean_ctor_set(v___x_5649_, 1, v___x_5648_);
v___x_5650_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v___x_5649_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_, v___y_5619_, v___y_5620_);
if (lean_obj_tag(v___x_5650_) == 0)
{
lean_dec_ref_known(v___x_5650_, 1);
v_a_5623_ = v___x_5629_;
goto v___jp_5622_;
}
else
{
return v___x_5650_;
}
}
}
else
{
lean_object* v_a_5651_; lean_object* v___x_5653_; uint8_t v_isShared_5654_; uint8_t v_isSharedCheck_5658_; 
lean_dec(v_a_5632_);
v_a_5651_ = lean_ctor_get(v___x_5633_, 0);
v_isSharedCheck_5658_ = !lean_is_exclusive(v___x_5633_);
if (v_isSharedCheck_5658_ == 0)
{
v___x_5653_ = v___x_5633_;
v_isShared_5654_ = v_isSharedCheck_5658_;
goto v_resetjp_5652_;
}
else
{
lean_inc(v_a_5651_);
lean_dec(v___x_5633_);
v___x_5653_ = lean_box(0);
v_isShared_5654_ = v_isSharedCheck_5658_;
goto v_resetjp_5652_;
}
v_resetjp_5652_:
{
lean_object* v___x_5656_; 
if (v_isShared_5654_ == 0)
{
v___x_5656_ = v___x_5653_;
goto v_reusejp_5655_;
}
else
{
lean_object* v_reuseFailAlloc_5657_; 
v_reuseFailAlloc_5657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5657_, 0, v_a_5651_);
v___x_5656_ = v_reuseFailAlloc_5657_;
goto v_reusejp_5655_;
}
v_reusejp_5655_:
{
return v___x_5656_;
}
}
}
}
else
{
lean_object* v_a_5659_; lean_object* v___x_5661_; uint8_t v_isShared_5662_; uint8_t v_isSharedCheck_5666_; 
v_a_5659_ = lean_ctor_get(v___x_5631_, 0);
v_isSharedCheck_5666_ = !lean_is_exclusive(v___x_5631_);
if (v_isSharedCheck_5666_ == 0)
{
v___x_5661_ = v___x_5631_;
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
else
{
lean_inc(v_a_5659_);
lean_dec(v___x_5631_);
v___x_5661_ = lean_box(0);
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
v_resetjp_5660_:
{
lean_object* v___x_5664_; 
if (v_isShared_5662_ == 0)
{
v___x_5664_ = v___x_5661_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v_a_5659_);
v___x_5664_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
return v___x_5664_;
}
}
}
}
v___jp_5622_:
{
size_t v___x_5624_; size_t v___x_5625_; 
v___x_5624_ = ((size_t)1ULL);
v___x_5625_ = lean_usize_add(v_i_5613_, v___x_5624_);
v_i_5613_ = v___x_5625_;
v_b_5614_ = v_a_5623_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___boxed(lean_object* v_as_5667_, lean_object* v_sz_5668_, lean_object* v_i_5669_, lean_object* v_b_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_, lean_object* v___y_5673_, lean_object* v___y_5674_, lean_object* v___y_5675_, lean_object* v___y_5676_, lean_object* v___y_5677_){
_start:
{
size_t v_sz_boxed_5678_; size_t v_i_boxed_5679_; lean_object* v_res_5680_; 
v_sz_boxed_5678_ = lean_unbox_usize(v_sz_5668_);
lean_dec(v_sz_5668_);
v_i_boxed_5679_ = lean_unbox_usize(v_i_5669_);
lean_dec(v_i_5669_);
v_res_5680_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(v_as_5667_, v_sz_boxed_5678_, v_i_boxed_5679_, v_b_5670_, v___y_5671_, v___y_5672_, v___y_5673_, v___y_5674_, v___y_5675_, v___y_5676_);
lean_dec(v___y_5676_);
lean_dec_ref(v___y_5675_);
lean_dec(v___y_5674_);
lean_dec_ref(v___y_5673_);
lean_dec(v___y_5672_);
lean_dec_ref(v___y_5671_);
lean_dec_ref(v_as_5667_);
return v_res_5680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(lean_object* v_as_5681_, size_t v_i_5682_, size_t v_stop_5683_, lean_object* v_b_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_){
_start:
{
uint8_t v___x_5690_; 
v___x_5690_ = lean_usize_dec_eq(v_i_5682_, v_stop_5683_);
if (v___x_5690_ == 0)
{
lean_object* v___x_5691_; lean_object* v___x_5692_; 
v___x_5691_ = lean_array_uget_borrowed(v_as_5681_, v_i_5682_);
lean_inc(v___x_5691_);
v___x_5692_ = l_Lean_MVarId_getType(v___x_5691_, v___y_5685_, v___y_5686_, v___y_5687_, v___y_5688_);
if (lean_obj_tag(v___x_5692_) == 0)
{
lean_object* v_a_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; 
v_a_5693_ = lean_ctor_get(v___x_5692_, 0);
lean_inc(v_a_5693_);
lean_dec_ref_known(v___x_5692_, 1);
v___x_5694_ = l_Lean_Expr_mdataExpr_x21(v_a_5693_);
lean_dec(v_a_5693_);
lean_inc(v___x_5691_);
v___x_5695_ = l_Lean_MVarId_setType___redArg(v___x_5691_, v___x_5694_, v___y_5686_);
if (lean_obj_tag(v___x_5695_) == 0)
{
lean_object* v_a_5696_; size_t v___x_5697_; size_t v___x_5698_; 
v_a_5696_ = lean_ctor_get(v___x_5695_, 0);
lean_inc(v_a_5696_);
lean_dec_ref_known(v___x_5695_, 1);
v___x_5697_ = ((size_t)1ULL);
v___x_5698_ = lean_usize_add(v_i_5682_, v___x_5697_);
v_i_5682_ = v___x_5698_;
v_b_5684_ = v_a_5696_;
goto _start;
}
else
{
return v___x_5695_;
}
}
else
{
lean_object* v_a_5700_; lean_object* v___x_5702_; uint8_t v_isShared_5703_; uint8_t v_isSharedCheck_5707_; 
v_a_5700_ = lean_ctor_get(v___x_5692_, 0);
v_isSharedCheck_5707_ = !lean_is_exclusive(v___x_5692_);
if (v_isSharedCheck_5707_ == 0)
{
v___x_5702_ = v___x_5692_;
v_isShared_5703_ = v_isSharedCheck_5707_;
goto v_resetjp_5701_;
}
else
{
lean_inc(v_a_5700_);
lean_dec(v___x_5692_);
v___x_5702_ = lean_box(0);
v_isShared_5703_ = v_isSharedCheck_5707_;
goto v_resetjp_5701_;
}
v_resetjp_5701_:
{
lean_object* v___x_5705_; 
if (v_isShared_5703_ == 0)
{
v___x_5705_ = v___x_5702_;
goto v_reusejp_5704_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v_a_5700_);
v___x_5705_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5704_;
}
v_reusejp_5704_:
{
return v___x_5705_;
}
}
}
}
else
{
lean_object* v___x_5708_; 
v___x_5708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5708_, 0, v_b_5684_);
return v___x_5708_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg___boxed(lean_object* v_as_5709_, lean_object* v_i_5710_, lean_object* v_stop_5711_, lean_object* v_b_5712_, lean_object* v___y_5713_, lean_object* v___y_5714_, lean_object* v___y_5715_, lean_object* v___y_5716_, lean_object* v___y_5717_){
_start:
{
size_t v_i_boxed_5718_; size_t v_stop_boxed_5719_; lean_object* v_res_5720_; 
v_i_boxed_5718_ = lean_unbox_usize(v_i_5710_);
lean_dec(v_i_5710_);
v_stop_boxed_5719_ = lean_unbox_usize(v_stop_5711_);
lean_dec(v_stop_5711_);
v_res_5720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v_as_5709_, v_i_boxed_5718_, v_stop_boxed_5719_, v_b_5712_, v___y_5713_, v___y_5714_, v___y_5715_, v___y_5716_);
lean_dec(v___y_5716_);
lean_dec_ref(v___y_5715_);
lean_dec(v___y_5714_);
lean_dec_ref(v___y_5713_);
lean_dec_ref(v_as_5709_);
return v_res_5720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(lean_object* v___x_5721_, lean_object* v___x_5722_, lean_object* v___x_5723_, lean_object* v___y_5724_, lean_object* v___y_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_){
_start:
{
if (lean_obj_tag(v___x_5721_) == 0)
{
lean_object* v___x_5731_; size_t v_sz_5732_; size_t v___x_5733_; lean_object* v___x_5734_; 
v___x_5731_ = lean_box(0);
v_sz_5732_ = lean_array_size(v___x_5722_);
v___x_5733_ = ((size_t)0ULL);
v___x_5734_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(v___x_5722_, v_sz_5732_, v___x_5733_, v___x_5731_, v___y_5724_, v___y_5725_, v___y_5726_, v___y_5727_, v___y_5728_, v___y_5729_);
lean_dec_ref(v___x_5722_);
if (lean_obj_tag(v___x_5734_) == 0)
{
lean_object* v___x_5736_; uint8_t v_isShared_5737_; uint8_t v_isSharedCheck_5741_; 
v_isSharedCheck_5741_ = !lean_is_exclusive(v___x_5734_);
if (v_isSharedCheck_5741_ == 0)
{
lean_object* v_unused_5742_; 
v_unused_5742_ = lean_ctor_get(v___x_5734_, 0);
lean_dec(v_unused_5742_);
v___x_5736_ = v___x_5734_;
v_isShared_5737_ = v_isSharedCheck_5741_;
goto v_resetjp_5735_;
}
else
{
lean_dec(v___x_5734_);
v___x_5736_ = lean_box(0);
v_isShared_5737_ = v_isSharedCheck_5741_;
goto v_resetjp_5735_;
}
v_resetjp_5735_:
{
lean_object* v___x_5739_; 
if (v_isShared_5737_ == 0)
{
lean_ctor_set(v___x_5736_, 0, v___x_5731_);
v___x_5739_ = v___x_5736_;
goto v_reusejp_5738_;
}
else
{
lean_object* v_reuseFailAlloc_5740_; 
v_reuseFailAlloc_5740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5740_, 0, v___x_5731_);
v___x_5739_ = v_reuseFailAlloc_5740_;
goto v_reusejp_5738_;
}
v_reusejp_5738_:
{
return v___x_5739_;
}
}
}
else
{
return v___x_5734_;
}
}
else
{
lean_object* v_val_5743_; lean_object* v___x_5745_; uint8_t v_isShared_5746_; uint8_t v_isSharedCheck_5810_; 
v_val_5743_ = lean_ctor_get(v___x_5721_, 0);
v_isSharedCheck_5810_ = !lean_is_exclusive(v___x_5721_);
if (v_isSharedCheck_5810_ == 0)
{
v___x_5745_ = v___x_5721_;
v_isShared_5746_ = v_isSharedCheck_5810_;
goto v_resetjp_5744_;
}
else
{
lean_inc(v_val_5743_);
lean_dec(v___x_5721_);
v___x_5745_ = lean_box(0);
v_isShared_5746_ = v_isSharedCheck_5810_;
goto v_resetjp_5744_;
}
v_resetjp_5744_:
{
lean_object* v_ref_5747_; lean_object* v_tactic_5748_; lean_object* v_toCold_5749_; lean_object* v_currRecDepth_5750_; lean_object* v_ref_5751_; uint8_t v_diag_5752_; uint8_t v_suppressElabErrors_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v_ref_5756_; lean_object* v___x_5757_; lean_object* v___y_5783_; lean_object* v___y_5800_; uint8_t v___x_5801_; 
v_ref_5747_ = lean_ctor_get(v_val_5743_, 0);
lean_inc(v_ref_5747_);
v_tactic_5748_ = lean_ctor_get(v_val_5743_, 1);
lean_inc(v_tactic_5748_);
lean_dec(v_val_5743_);
v_toCold_5749_ = lean_ctor_get(v___y_5728_, 0);
v_currRecDepth_5750_ = lean_ctor_get(v___y_5728_, 1);
v_ref_5751_ = lean_ctor_get(v___y_5728_, 2);
v_diag_5752_ = lean_ctor_get_uint8(v___y_5728_, sizeof(void*)*3);
v_suppressElabErrors_5753_ = lean_ctor_get_uint8(v___y_5728_, sizeof(void*)*3 + 1);
v___x_5754_ = lean_unsigned_to_nat(0u);
v___x_5755_ = lean_array_get_size(v___x_5722_);
v_ref_5756_ = l_Lean_replaceRef(v_ref_5747_, v_ref_5751_);
lean_inc(v_currRecDepth_5750_);
lean_inc_ref(v_toCold_5749_);
v___x_5757_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5757_, 0, v_toCold_5749_);
lean_ctor_set(v___x_5757_, 1, v_currRecDepth_5750_);
lean_ctor_set(v___x_5757_, 2, v_ref_5756_);
lean_ctor_set_uint8(v___x_5757_, sizeof(void*)*3, v_diag_5752_);
lean_ctor_set_uint8(v___x_5757_, sizeof(void*)*3 + 1, v_suppressElabErrors_5753_);
v___x_5801_ = lean_nat_dec_lt(v___x_5754_, v___x_5755_);
if (v___x_5801_ == 0)
{
goto v___jp_5784_;
}
else
{
lean_object* v___x_5802_; uint8_t v___x_5803_; 
v___x_5802_ = lean_box(0);
v___x_5803_ = lean_nat_dec_le(v___x_5755_, v___x_5755_);
if (v___x_5803_ == 0)
{
if (v___x_5801_ == 0)
{
goto v___jp_5784_;
}
else
{
size_t v___x_5804_; size_t v___x_5805_; lean_object* v___x_5806_; 
v___x_5804_ = ((size_t)0ULL);
v___x_5805_ = lean_usize_of_nat(v___x_5755_);
v___x_5806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v___x_5722_, v___x_5804_, v___x_5805_, v___x_5802_, v___y_5726_, v___y_5727_, v___x_5757_, v___y_5729_);
v___y_5800_ = v___x_5806_;
goto v___jp_5799_;
}
}
else
{
size_t v___x_5807_; size_t v___x_5808_; lean_object* v___x_5809_; 
v___x_5807_ = ((size_t)0ULL);
v___x_5808_ = lean_usize_of_nat(v___x_5755_);
v___x_5809_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v___x_5722_, v___x_5807_, v___x_5808_, v___x_5802_, v___y_5726_, v___y_5727_, v___x_5757_, v___y_5729_);
v___y_5800_ = v___x_5809_;
goto v___jp_5799_;
}
}
v___jp_5758_:
{
lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___f_5761_; lean_object* v___x_5762_; 
v___x_5759_ = lean_array_get(v___x_5723_, v___x_5722_, v___x_5754_);
v___x_5760_ = lean_array_to_list(v___x_5722_);
v___f_5761_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed), 12, 3);
lean_closure_set(v___f_5761_, 0, v___x_5760_);
lean_closure_set(v___f_5761_, 1, v_tactic_5748_);
lean_closure_set(v___f_5761_, 2, v_ref_5747_);
v___x_5762_ = l_Lean_Elab_Tactic_run(v___x_5759_, v___f_5761_, v___y_5724_, v___y_5725_, v___y_5726_, v___y_5727_, v___x_5757_, v___y_5729_);
if (lean_obj_tag(v___x_5762_) == 0)
{
lean_object* v_a_5763_; lean_object* v___x_5765_; uint8_t v_isShared_5766_; uint8_t v_isSharedCheck_5773_; 
v_a_5763_ = lean_ctor_get(v___x_5762_, 0);
v_isSharedCheck_5773_ = !lean_is_exclusive(v___x_5762_);
if (v_isSharedCheck_5773_ == 0)
{
v___x_5765_ = v___x_5762_;
v_isShared_5766_ = v_isSharedCheck_5773_;
goto v_resetjp_5764_;
}
else
{
lean_inc(v_a_5763_);
lean_dec(v___x_5762_);
v___x_5765_ = lean_box(0);
v_isShared_5766_ = v_isSharedCheck_5773_;
goto v_resetjp_5764_;
}
v_resetjp_5764_:
{
uint8_t v___x_5767_; 
v___x_5767_ = l_List_isEmpty___redArg(v_a_5763_);
if (v___x_5767_ == 0)
{
lean_object* v___x_5768_; 
lean_del_object(v___x_5765_);
v___x_5768_ = l_Lean_Elab_Term_reportUnsolvedGoals(v_a_5763_, v___y_5726_, v___y_5727_, v___x_5757_, v___y_5729_);
lean_dec_ref_known(v___x_5757_, 3);
return v___x_5768_;
}
else
{
lean_object* v___x_5769_; lean_object* v___x_5771_; 
lean_dec(v_a_5763_);
lean_dec_ref_known(v___x_5757_, 3);
v___x_5769_ = lean_box(0);
if (v_isShared_5766_ == 0)
{
lean_ctor_set(v___x_5765_, 0, v___x_5769_);
v___x_5771_ = v___x_5765_;
goto v_reusejp_5770_;
}
else
{
lean_object* v_reuseFailAlloc_5772_; 
v_reuseFailAlloc_5772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5772_, 0, v___x_5769_);
v___x_5771_ = v_reuseFailAlloc_5772_;
goto v_reusejp_5770_;
}
v_reusejp_5770_:
{
return v___x_5771_;
}
}
}
}
else
{
lean_object* v_a_5774_; lean_object* v___x_5776_; uint8_t v_isShared_5777_; uint8_t v_isSharedCheck_5781_; 
lean_dec_ref_known(v___x_5757_, 3);
v_a_5774_ = lean_ctor_get(v___x_5762_, 0);
v_isSharedCheck_5781_ = !lean_is_exclusive(v___x_5762_);
if (v_isSharedCheck_5781_ == 0)
{
v___x_5776_ = v___x_5762_;
v_isShared_5777_ = v_isSharedCheck_5781_;
goto v_resetjp_5775_;
}
else
{
lean_inc(v_a_5774_);
lean_dec(v___x_5762_);
v___x_5776_ = lean_box(0);
v_isShared_5777_ = v_isSharedCheck_5781_;
goto v_resetjp_5775_;
}
v_resetjp_5775_:
{
lean_object* v___x_5779_; 
if (v_isShared_5777_ == 0)
{
v___x_5779_ = v___x_5776_;
goto v_reusejp_5778_;
}
else
{
lean_object* v_reuseFailAlloc_5780_; 
v_reuseFailAlloc_5780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5780_, 0, v_a_5774_);
v___x_5779_ = v_reuseFailAlloc_5780_;
goto v_reusejp_5778_;
}
v_reusejp_5778_:
{
return v___x_5779_;
}
}
}
}
v___jp_5782_:
{
if (lean_obj_tag(v___y_5783_) == 0)
{
lean_dec_ref_known(v___y_5783_, 1);
goto v___jp_5758_;
}
else
{
lean_dec_ref_known(v___x_5757_, 3);
lean_dec(v_tactic_5748_);
lean_dec(v_ref_5747_);
lean_dec_ref(v___x_5722_);
return v___y_5783_;
}
}
v___jp_5784_:
{
uint8_t v___x_5785_; 
v___x_5785_ = lean_nat_dec_eq(v___x_5755_, v___x_5754_);
if (v___x_5785_ == 0)
{
uint8_t v___x_5786_; 
lean_del_object(v___x_5745_);
v___x_5786_ = lean_nat_dec_lt(v___x_5754_, v___x_5755_);
if (v___x_5786_ == 0)
{
goto v___jp_5758_;
}
else
{
lean_object* v___x_5787_; uint8_t v___x_5788_; 
v___x_5787_ = lean_box(0);
v___x_5788_ = lean_nat_dec_le(v___x_5755_, v___x_5755_);
if (v___x_5788_ == 0)
{
if (v___x_5786_ == 0)
{
goto v___jp_5758_;
}
else
{
size_t v___x_5789_; size_t v___x_5790_; lean_object* v___x_5791_; 
v___x_5789_ = ((size_t)0ULL);
v___x_5790_ = lean_usize_of_nat(v___x_5755_);
v___x_5791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v___x_5722_, v___x_5789_, v___x_5790_, v___x_5787_, v___y_5724_, v___y_5725_, v___y_5726_, v___y_5727_, v___x_5757_, v___y_5729_);
v___y_5783_ = v___x_5791_;
goto v___jp_5782_;
}
}
else
{
size_t v___x_5792_; size_t v___x_5793_; lean_object* v___x_5794_; 
v___x_5792_ = ((size_t)0ULL);
v___x_5793_ = lean_usize_of_nat(v___x_5755_);
v___x_5794_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v___x_5722_, v___x_5792_, v___x_5793_, v___x_5787_, v___y_5724_, v___y_5725_, v___y_5726_, v___y_5727_, v___x_5757_, v___y_5729_);
v___y_5783_ = v___x_5794_;
goto v___jp_5782_;
}
}
}
else
{
lean_object* v___x_5795_; lean_object* v___x_5797_; 
lean_dec_ref_known(v___x_5757_, 3);
lean_dec(v_tactic_5748_);
lean_dec(v_ref_5747_);
lean_dec_ref(v___x_5722_);
v___x_5795_ = lean_box(0);
if (v_isShared_5746_ == 0)
{
lean_ctor_set_tag(v___x_5745_, 0);
lean_ctor_set(v___x_5745_, 0, v___x_5795_);
v___x_5797_ = v___x_5745_;
goto v_reusejp_5796_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v___x_5795_);
v___x_5797_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5796_;
}
v_reusejp_5796_:
{
return v___x_5797_;
}
}
}
v___jp_5799_:
{
if (lean_obj_tag(v___y_5800_) == 0)
{
lean_dec_ref_known(v___y_5800_, 1);
goto v___jp_5784_;
}
else
{
lean_dec_ref_known(v___x_5757_, 3);
lean_dec(v_tactic_5748_);
lean_dec(v_ref_5747_);
lean_del_object(v___x_5745_);
lean_dec_ref(v___x_5722_);
return v___y_5800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed(lean_object* v___x_5811_, lean_object* v___x_5812_, lean_object* v___x_5813_, lean_object* v___y_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_, lean_object* v___y_5817_, lean_object* v___y_5818_, lean_object* v___y_5819_, lean_object* v___y_5820_){
_start:
{
lean_object* v_res_5821_; 
v_res_5821_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(v___x_5811_, v___x_5812_, v___x_5813_, v___y_5814_, v___y_5815_, v___y_5816_, v___y_5817_, v___y_5818_, v___y_5819_);
lean_dec(v___y_5819_);
lean_dec_ref(v___y_5818_);
lean_dec(v___y_5817_);
lean_dec_ref(v___y_5816_);
lean_dec(v___y_5815_);
lean_dec_ref(v___y_5814_);
lean_dec(v___x_5813_);
return v_res_5821_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(lean_object* v_x_5822_){
_start:
{
uint8_t v___x_5823_; 
v___x_5823_ = 0;
return v___x_5823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed(lean_object* v_x_5824_){
_start:
{
uint8_t v_res_5825_; lean_object* v_r_5826_; 
v_res_5825_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(v_x_5824_);
lean_dec(v_x_5824_);
v_r_5826_ = lean_box(v_res_5825_);
return v_r_5826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(lean_object* v_as_5833_, size_t v_sz_5834_, size_t v_i_5835_, lean_object* v_b_5836_, lean_object* v___y_5837_, lean_object* v___y_5838_, lean_object* v___y_5839_, lean_object* v___y_5840_){
_start:
{
uint8_t v___x_5842_; 
v___x_5842_ = lean_usize_dec_lt(v_i_5835_, v_sz_5834_);
if (v___x_5842_ == 0)
{
lean_object* v___x_5843_; 
v___x_5843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5843_, 0, v_b_5836_);
return v___x_5843_;
}
else
{
lean_object* v_snd_5844_; lean_object* v_fst_5845_; lean_object* v___x_5847_; uint8_t v_isShared_5848_; uint8_t v_isSharedCheck_5917_; 
v_snd_5844_ = lean_ctor_get(v_b_5836_, 1);
v_fst_5845_ = lean_ctor_get(v_b_5836_, 0);
v_isSharedCheck_5917_ = !lean_is_exclusive(v_b_5836_);
if (v_isSharedCheck_5917_ == 0)
{
v___x_5847_ = v_b_5836_;
v_isShared_5848_ = v_isSharedCheck_5917_;
goto v_resetjp_5846_;
}
else
{
lean_inc(v_snd_5844_);
lean_inc(v_fst_5845_);
lean_dec(v_b_5836_);
v___x_5847_ = lean_box(0);
v_isShared_5848_ = v_isSharedCheck_5917_;
goto v_resetjp_5846_;
}
v_resetjp_5846_:
{
lean_object* v_array_5849_; lean_object* v_start_5850_; lean_object* v_stop_5851_; uint8_t v___x_5852_; 
v_array_5849_ = lean_ctor_get(v_snd_5844_, 0);
v_start_5850_ = lean_ctor_get(v_snd_5844_, 1);
v_stop_5851_ = lean_ctor_get(v_snd_5844_, 2);
v___x_5852_ = lean_nat_dec_lt(v_start_5850_, v_stop_5851_);
if (v___x_5852_ == 0)
{
lean_object* v___x_5854_; 
if (v_isShared_5848_ == 0)
{
v___x_5854_ = v___x_5847_;
goto v_reusejp_5853_;
}
else
{
lean_object* v_reuseFailAlloc_5856_; 
v_reuseFailAlloc_5856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5856_, 0, v_fst_5845_);
lean_ctor_set(v_reuseFailAlloc_5856_, 1, v_snd_5844_);
v___x_5854_ = v_reuseFailAlloc_5856_;
goto v_reusejp_5853_;
}
v_reusejp_5853_:
{
lean_object* v___x_5855_; 
v___x_5855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5855_, 0, v___x_5854_);
return v___x_5855_;
}
}
else
{
lean_object* v___x_5858_; uint8_t v_isShared_5859_; uint8_t v_isSharedCheck_5913_; 
lean_inc(v_stop_5851_);
lean_inc(v_start_5850_);
lean_inc_ref(v_array_5849_);
v_isSharedCheck_5913_ = !lean_is_exclusive(v_snd_5844_);
if (v_isSharedCheck_5913_ == 0)
{
lean_object* v_unused_5914_; lean_object* v_unused_5915_; lean_object* v_unused_5916_; 
v_unused_5914_ = lean_ctor_get(v_snd_5844_, 2);
lean_dec(v_unused_5914_);
v_unused_5915_ = lean_ctor_get(v_snd_5844_, 1);
lean_dec(v_unused_5915_);
v_unused_5916_ = lean_ctor_get(v_snd_5844_, 0);
lean_dec(v_unused_5916_);
v___x_5858_ = v_snd_5844_;
v_isShared_5859_ = v_isSharedCheck_5913_;
goto v_resetjp_5857_;
}
else
{
lean_dec(v_snd_5844_);
v___x_5858_ = lean_box(0);
v_isShared_5859_ = v_isSharedCheck_5913_;
goto v_resetjp_5857_;
}
v_resetjp_5857_:
{
lean_object* v_array_5860_; lean_object* v_start_5861_; lean_object* v_stop_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5865_; lean_object* v___x_5867_; 
v_array_5860_ = lean_ctor_get(v_fst_5845_, 0);
v_start_5861_ = lean_ctor_get(v_fst_5845_, 1);
v_stop_5862_ = lean_ctor_get(v_fst_5845_, 2);
v___x_5863_ = lean_array_fget(v_array_5849_, v_start_5850_);
v___x_5864_ = lean_unsigned_to_nat(1u);
v___x_5865_ = lean_nat_add(v_start_5850_, v___x_5864_);
lean_dec(v_start_5850_);
if (v_isShared_5859_ == 0)
{
lean_ctor_set(v___x_5858_, 1, v___x_5865_);
v___x_5867_ = v___x_5858_;
goto v_reusejp_5866_;
}
else
{
lean_object* v_reuseFailAlloc_5912_; 
v_reuseFailAlloc_5912_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5912_, 0, v_array_5849_);
lean_ctor_set(v_reuseFailAlloc_5912_, 1, v___x_5865_);
lean_ctor_set(v_reuseFailAlloc_5912_, 2, v_stop_5851_);
v___x_5867_ = v_reuseFailAlloc_5912_;
goto v_reusejp_5866_;
}
v_reusejp_5866_:
{
uint8_t v___x_5868_; 
v___x_5868_ = lean_nat_dec_lt(v_start_5861_, v_stop_5862_);
if (v___x_5868_ == 0)
{
lean_object* v___x_5870_; 
lean_dec(v___x_5863_);
if (v_isShared_5848_ == 0)
{
lean_ctor_set(v___x_5847_, 1, v___x_5867_);
v___x_5870_ = v___x_5847_;
goto v_reusejp_5869_;
}
else
{
lean_object* v_reuseFailAlloc_5872_; 
v_reuseFailAlloc_5872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5872_, 0, v_fst_5845_);
lean_ctor_set(v_reuseFailAlloc_5872_, 1, v___x_5867_);
v___x_5870_ = v_reuseFailAlloc_5872_;
goto v_reusejp_5869_;
}
v_reusejp_5869_:
{
lean_object* v___x_5871_; 
v___x_5871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5871_, 0, v___x_5870_);
return v___x_5871_;
}
}
else
{
lean_object* v___x_5874_; uint8_t v_isShared_5875_; uint8_t v_isSharedCheck_5908_; 
lean_inc(v_stop_5862_);
lean_inc(v_start_5861_);
lean_inc_ref(v_array_5860_);
v_isSharedCheck_5908_ = !lean_is_exclusive(v_fst_5845_);
if (v_isSharedCheck_5908_ == 0)
{
lean_object* v_unused_5909_; lean_object* v_unused_5910_; lean_object* v_unused_5911_; 
v_unused_5909_ = lean_ctor_get(v_fst_5845_, 2);
lean_dec(v_unused_5909_);
v_unused_5910_ = lean_ctor_get(v_fst_5845_, 1);
lean_dec(v_unused_5910_);
v_unused_5911_ = lean_ctor_get(v_fst_5845_, 0);
lean_dec(v_unused_5911_);
v___x_5874_ = v_fst_5845_;
v_isShared_5875_ = v_isSharedCheck_5908_;
goto v_resetjp_5873_;
}
else
{
lean_dec(v_fst_5845_);
v___x_5874_ = lean_box(0);
v_isShared_5875_ = v_isSharedCheck_5908_;
goto v_resetjp_5873_;
}
v_resetjp_5873_:
{
lean_object* v___f_5876_; lean_object* v___x_5877_; lean_object* v_a_5878_; lean_object* v___x_5879_; lean_object* v___y_5880_; lean_object* v___x_5881_; lean_object* v___x_5883_; 
v___f_5876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0));
v___x_5877_ = l_Lean_instInhabitedMVarId_default;
v_a_5878_ = lean_array_uget_borrowed(v_as_5833_, v_i_5835_);
v___x_5879_ = lean_array_fget_borrowed(v_array_5860_, v_start_5861_);
lean_inc(v___x_5879_);
v___y_5880_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed), 10, 3);
lean_closure_set(v___y_5880_, 0, v___x_5863_);
lean_closure_set(v___y_5880_, 1, v___x_5879_);
lean_closure_set(v___y_5880_, 2, v___x_5877_);
v___x_5881_ = lean_nat_add(v_start_5861_, v___x_5864_);
lean_dec(v_start_5861_);
if (v_isShared_5875_ == 0)
{
lean_ctor_set(v___x_5874_, 1, v___x_5881_);
v___x_5883_ = v___x_5874_;
goto v_reusejp_5882_;
}
else
{
lean_object* v_reuseFailAlloc_5907_; 
v_reuseFailAlloc_5907_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5907_, 0, v_array_5860_);
lean_ctor_set(v_reuseFailAlloc_5907_, 1, v___x_5881_);
lean_ctor_set(v_reuseFailAlloc_5907_, 2, v_stop_5862_);
v___x_5883_ = v_reuseFailAlloc_5907_;
goto v_reusejp_5882_;
}
v_reusejp_5882_:
{
lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; uint8_t v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; 
lean_inc(v_a_5878_);
v___x_5884_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName___boxed), 10, 3);
lean_closure_set(v___x_5884_, 0, lean_box(0));
lean_closure_set(v___x_5884_, 1, v_a_5878_);
lean_closure_set(v___x_5884_, 2, v___y_5880_);
v___x_5885_ = lean_box(0);
v___x_5886_ = lean_box(0);
v___x_5887_ = lean_box(1);
v___x_5888_ = 0;
v___x_5889_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1));
v___x_5890_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_5890_, 0, v___x_5885_);
lean_ctor_set(v___x_5890_, 1, v___x_5886_);
lean_ctor_set(v___x_5890_, 2, v___x_5885_);
lean_ctor_set(v___x_5890_, 3, v___f_5876_);
lean_ctor_set(v___x_5890_, 4, v___x_5887_);
lean_ctor_set(v___x_5890_, 5, v___x_5887_);
lean_ctor_set(v___x_5890_, 6, v___x_5885_);
lean_ctor_set(v___x_5890_, 7, v___x_5889_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8, v___x_5868_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 1, v___x_5868_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 2, v___x_5868_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 3, v___x_5868_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 4, v___x_5888_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 5, v___x_5888_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 6, v___x_5888_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 7, v___x_5888_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 8, v___x_5868_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 9, v___x_5888_);
lean_ctor_set_uint8(v___x_5890_, sizeof(void*)*8 + 10, v___x_5868_);
v___x_5891_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2));
v___x_5892_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_5884_, v___x_5890_, v___x_5891_, v___y_5837_, v___y_5838_, v___y_5839_, v___y_5840_);
if (lean_obj_tag(v___x_5892_) == 0)
{
lean_object* v___x_5894_; 
lean_dec_ref_known(v___x_5892_, 1);
if (v_isShared_5848_ == 0)
{
lean_ctor_set(v___x_5847_, 1, v___x_5867_);
lean_ctor_set(v___x_5847_, 0, v___x_5883_);
v___x_5894_ = v___x_5847_;
goto v_reusejp_5893_;
}
else
{
lean_object* v_reuseFailAlloc_5898_; 
v_reuseFailAlloc_5898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5898_, 0, v___x_5883_);
lean_ctor_set(v_reuseFailAlloc_5898_, 1, v___x_5867_);
v___x_5894_ = v_reuseFailAlloc_5898_;
goto v_reusejp_5893_;
}
v_reusejp_5893_:
{
size_t v___x_5895_; size_t v___x_5896_; 
v___x_5895_ = ((size_t)1ULL);
v___x_5896_ = lean_usize_add(v_i_5835_, v___x_5895_);
v_i_5835_ = v___x_5896_;
v_b_5836_ = v___x_5894_;
goto _start;
}
}
else
{
lean_object* v_a_5899_; lean_object* v___x_5901_; uint8_t v_isShared_5902_; uint8_t v_isSharedCheck_5906_; 
lean_dec_ref(v___x_5883_);
lean_dec_ref(v___x_5867_);
lean_del_object(v___x_5847_);
v_a_5899_ = lean_ctor_get(v___x_5892_, 0);
v_isSharedCheck_5906_ = !lean_is_exclusive(v___x_5892_);
if (v_isSharedCheck_5906_ == 0)
{
v___x_5901_ = v___x_5892_;
v_isShared_5902_ = v_isSharedCheck_5906_;
goto v_resetjp_5900_;
}
else
{
lean_inc(v_a_5899_);
lean_dec(v___x_5892_);
v___x_5901_ = lean_box(0);
v_isShared_5902_ = v_isSharedCheck_5906_;
goto v_resetjp_5900_;
}
v_resetjp_5900_:
{
lean_object* v___x_5904_; 
if (v_isShared_5902_ == 0)
{
v___x_5904_ = v___x_5901_;
goto v_reusejp_5903_;
}
else
{
lean_object* v_reuseFailAlloc_5905_; 
v_reuseFailAlloc_5905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5905_, 0, v_a_5899_);
v___x_5904_ = v_reuseFailAlloc_5905_;
goto v_reusejp_5903_;
}
v_reusejp_5903_:
{
return v___x_5904_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___boxed(lean_object* v_as_5918_, lean_object* v_sz_5919_, lean_object* v_i_5920_, lean_object* v_b_5921_, lean_object* v___y_5922_, lean_object* v___y_5923_, lean_object* v___y_5924_, lean_object* v___y_5925_, lean_object* v___y_5926_){
_start:
{
size_t v_sz_boxed_5927_; size_t v_i_boxed_5928_; lean_object* v_res_5929_; 
v_sz_boxed_5927_ = lean_unbox_usize(v_sz_5919_);
lean_dec(v_sz_5919_);
v_i_boxed_5928_ = lean_unbox_usize(v_i_5920_);
lean_dec(v_i_5920_);
v_res_5929_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(v_as_5918_, v_sz_boxed_5927_, v_i_boxed_5928_, v_b_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_);
lean_dec(v___y_5925_);
lean_dec_ref(v___y_5924_);
lean_dec(v___y_5923_);
lean_dec_ref(v___y_5922_);
lean_dec_ref(v_as_5918_);
return v_res_5929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object* v_value_5930_, lean_object* v_decrTactics_5931_, lean_object* v_argsPacker_5932_, lean_object* v_funNames_5933_, lean_object* v___y_5934_, lean_object* v___y_5935_, lean_object* v___y_5936_, lean_object* v___y_5937_){
_start:
{
lean_object* v___x_5939_; 
lean_inc_ref(v_value_5930_);
v___x_5939_ = l_Lean_Meta_getMVarsNoDelayed(v_value_5930_, v___y_5934_, v___y_5935_, v___y_5936_, v___y_5937_);
if (lean_obj_tag(v___x_5939_) == 0)
{
lean_object* v_a_5940_; lean_object* v___x_5941_; 
v_a_5940_ = lean_ctor_get(v___x_5939_, 0);
lean_inc(v_a_5940_);
lean_dec_ref_known(v___x_5939_, 1);
v___x_5941_ = l_Lean_Elab_WF_assignSubsumed(v_a_5940_, v___y_5934_, v___y_5935_, v___y_5936_, v___y_5937_);
lean_dec(v_a_5940_);
if (lean_obj_tag(v___x_5941_) == 0)
{
lean_object* v_a_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; 
v_a_5942_ = lean_ctor_get(v___x_5941_, 0);
lean_inc(v_a_5942_);
lean_dec_ref_known(v___x_5941_, 1);
v___x_5943_ = lean_array_get_size(v_decrTactics_5931_);
v___x_5944_ = l_Lean_Elab_WF_groupGoalsByFunction(v_argsPacker_5932_, v___x_5943_, v_a_5942_, v___y_5934_, v___y_5935_, v___y_5936_, v___y_5937_);
lean_dec(v_a_5942_);
if (lean_obj_tag(v___x_5944_) == 0)
{
lean_object* v_a_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; size_t v_sz_5951_; size_t v___x_5952_; lean_object* v___x_5953_; 
v_a_5945_ = lean_ctor_get(v___x_5944_, 0);
lean_inc(v_a_5945_);
lean_dec_ref_known(v___x_5944_, 1);
v___x_5946_ = lean_unsigned_to_nat(0u);
v___x_5947_ = lean_array_get_size(v_a_5945_);
v___x_5948_ = l_Array_toSubarray___redArg(v_a_5945_, v___x_5946_, v___x_5947_);
v___x_5949_ = l_Array_toSubarray___redArg(v_decrTactics_5931_, v___x_5946_, v___x_5943_);
v___x_5950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5950_, 0, v___x_5948_);
lean_ctor_set(v___x_5950_, 1, v___x_5949_);
v_sz_5951_ = lean_array_size(v_funNames_5933_);
v___x_5952_ = ((size_t)0ULL);
v___x_5953_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(v_funNames_5933_, v_sz_5951_, v___x_5952_, v___x_5950_, v___y_5934_, v___y_5935_, v___y_5936_, v___y_5937_);
if (lean_obj_tag(v___x_5953_) == 0)
{
lean_object* v___x_5954_; 
lean_dec_ref_known(v___x_5953_, 1);
v___x_5954_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_value_5930_, v___y_5935_);
return v___x_5954_;
}
else
{
lean_object* v_a_5955_; lean_object* v___x_5957_; uint8_t v_isShared_5958_; uint8_t v_isSharedCheck_5962_; 
lean_dec_ref(v_value_5930_);
v_a_5955_ = lean_ctor_get(v___x_5953_, 0);
v_isSharedCheck_5962_ = !lean_is_exclusive(v___x_5953_);
if (v_isSharedCheck_5962_ == 0)
{
v___x_5957_ = v___x_5953_;
v_isShared_5958_ = v_isSharedCheck_5962_;
goto v_resetjp_5956_;
}
else
{
lean_inc(v_a_5955_);
lean_dec(v___x_5953_);
v___x_5957_ = lean_box(0);
v_isShared_5958_ = v_isSharedCheck_5962_;
goto v_resetjp_5956_;
}
v_resetjp_5956_:
{
lean_object* v___x_5960_; 
if (v_isShared_5958_ == 0)
{
v___x_5960_ = v___x_5957_;
goto v_reusejp_5959_;
}
else
{
lean_object* v_reuseFailAlloc_5961_; 
v_reuseFailAlloc_5961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5961_, 0, v_a_5955_);
v___x_5960_ = v_reuseFailAlloc_5961_;
goto v_reusejp_5959_;
}
v_reusejp_5959_:
{
return v___x_5960_;
}
}
}
}
else
{
lean_object* v_a_5963_; lean_object* v___x_5965_; uint8_t v_isShared_5966_; uint8_t v_isSharedCheck_5970_; 
lean_dec_ref(v_decrTactics_5931_);
lean_dec_ref(v_value_5930_);
v_a_5963_ = lean_ctor_get(v___x_5944_, 0);
v_isSharedCheck_5970_ = !lean_is_exclusive(v___x_5944_);
if (v_isSharedCheck_5970_ == 0)
{
v___x_5965_ = v___x_5944_;
v_isShared_5966_ = v_isSharedCheck_5970_;
goto v_resetjp_5964_;
}
else
{
lean_inc(v_a_5963_);
lean_dec(v___x_5944_);
v___x_5965_ = lean_box(0);
v_isShared_5966_ = v_isSharedCheck_5970_;
goto v_resetjp_5964_;
}
v_resetjp_5964_:
{
lean_object* v___x_5968_; 
if (v_isShared_5966_ == 0)
{
v___x_5968_ = v___x_5965_;
goto v_reusejp_5967_;
}
else
{
lean_object* v_reuseFailAlloc_5969_; 
v_reuseFailAlloc_5969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5969_, 0, v_a_5963_);
v___x_5968_ = v_reuseFailAlloc_5969_;
goto v_reusejp_5967_;
}
v_reusejp_5967_:
{
return v___x_5968_;
}
}
}
}
else
{
lean_object* v_a_5971_; lean_object* v___x_5973_; uint8_t v_isShared_5974_; uint8_t v_isSharedCheck_5978_; 
lean_dec_ref(v_decrTactics_5931_);
lean_dec_ref(v_value_5930_);
v_a_5971_ = lean_ctor_get(v___x_5941_, 0);
v_isSharedCheck_5978_ = !lean_is_exclusive(v___x_5941_);
if (v_isSharedCheck_5978_ == 0)
{
v___x_5973_ = v___x_5941_;
v_isShared_5974_ = v_isSharedCheck_5978_;
goto v_resetjp_5972_;
}
else
{
lean_inc(v_a_5971_);
lean_dec(v___x_5941_);
v___x_5973_ = lean_box(0);
v_isShared_5974_ = v_isSharedCheck_5978_;
goto v_resetjp_5972_;
}
v_resetjp_5972_:
{
lean_object* v___x_5976_; 
if (v_isShared_5974_ == 0)
{
v___x_5976_ = v___x_5973_;
goto v_reusejp_5975_;
}
else
{
lean_object* v_reuseFailAlloc_5977_; 
v_reuseFailAlloc_5977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5977_, 0, v_a_5971_);
v___x_5976_ = v_reuseFailAlloc_5977_;
goto v_reusejp_5975_;
}
v_reusejp_5975_:
{
return v___x_5976_;
}
}
}
}
else
{
lean_object* v_a_5979_; lean_object* v___x_5981_; uint8_t v_isShared_5982_; uint8_t v_isSharedCheck_5986_; 
lean_dec_ref(v_decrTactics_5931_);
lean_dec_ref(v_value_5930_);
v_a_5979_ = lean_ctor_get(v___x_5939_, 0);
v_isSharedCheck_5986_ = !lean_is_exclusive(v___x_5939_);
if (v_isSharedCheck_5986_ == 0)
{
v___x_5981_ = v___x_5939_;
v_isShared_5982_ = v_isSharedCheck_5986_;
goto v_resetjp_5980_;
}
else
{
lean_inc(v_a_5979_);
lean_dec(v___x_5939_);
v___x_5981_ = lean_box(0);
v_isShared_5982_ = v_isSharedCheck_5986_;
goto v_resetjp_5980_;
}
v_resetjp_5980_:
{
lean_object* v___x_5984_; 
if (v_isShared_5982_ == 0)
{
v___x_5984_ = v___x_5981_;
goto v_reusejp_5983_;
}
else
{
lean_object* v_reuseFailAlloc_5985_; 
v_reuseFailAlloc_5985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5985_, 0, v_a_5979_);
v___x_5984_ = v_reuseFailAlloc_5985_;
goto v_reusejp_5983_;
}
v_reusejp_5983_:
{
return v___x_5984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object* v_value_5987_, lean_object* v_decrTactics_5988_, lean_object* v_argsPacker_5989_, lean_object* v_funNames_5990_, lean_object* v___y_5991_, lean_object* v___y_5992_, lean_object* v___y_5993_, lean_object* v___y_5994_, lean_object* v___y_5995_){
_start:
{
lean_object* v_res_5996_; 
v_res_5996_ = l_Lean_Elab_WF_solveDecreasingGoals___lam__0(v_value_5987_, v_decrTactics_5988_, v_argsPacker_5989_, v_funNames_5990_, v___y_5991_, v___y_5992_, v___y_5993_, v___y_5994_);
lean_dec(v___y_5994_);
lean_dec_ref(v___y_5993_);
lean_dec(v___y_5992_);
lean_dec_ref(v___y_5991_);
lean_dec_ref(v_funNames_5990_);
lean_dec_ref(v_argsPacker_5989_);
return v_res_5996_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(lean_object* v___y_5997_, uint8_t v_isExporting_5998_, lean_object* v___x_5999_, lean_object* v___y_6000_, lean_object* v___x_6001_, lean_object* v_a_x3f_6002_){
_start:
{
lean_object* v___x_6004_; lean_object* v_env_6005_; lean_object* v_nextMacroScope_6006_; lean_object* v_ngen_6007_; lean_object* v_auxDeclNGen_6008_; lean_object* v_traceState_6009_; lean_object* v_messages_6010_; lean_object* v_infoState_6011_; lean_object* v_snapshotTasks_6012_; lean_object* v___x_6014_; uint8_t v_isShared_6015_; uint8_t v_isSharedCheck_6037_; 
v___x_6004_ = lean_st_ref_take(v___y_5997_);
v_env_6005_ = lean_ctor_get(v___x_6004_, 0);
v_nextMacroScope_6006_ = lean_ctor_get(v___x_6004_, 1);
v_ngen_6007_ = lean_ctor_get(v___x_6004_, 2);
v_auxDeclNGen_6008_ = lean_ctor_get(v___x_6004_, 3);
v_traceState_6009_ = lean_ctor_get(v___x_6004_, 4);
v_messages_6010_ = lean_ctor_get(v___x_6004_, 6);
v_infoState_6011_ = lean_ctor_get(v___x_6004_, 7);
v_snapshotTasks_6012_ = lean_ctor_get(v___x_6004_, 8);
v_isSharedCheck_6037_ = !lean_is_exclusive(v___x_6004_);
if (v_isSharedCheck_6037_ == 0)
{
lean_object* v_unused_6038_; 
v_unused_6038_ = lean_ctor_get(v___x_6004_, 5);
lean_dec(v_unused_6038_);
v___x_6014_ = v___x_6004_;
v_isShared_6015_ = v_isSharedCheck_6037_;
goto v_resetjp_6013_;
}
else
{
lean_inc(v_snapshotTasks_6012_);
lean_inc(v_infoState_6011_);
lean_inc(v_messages_6010_);
lean_inc(v_traceState_6009_);
lean_inc(v_auxDeclNGen_6008_);
lean_inc(v_ngen_6007_);
lean_inc(v_nextMacroScope_6006_);
lean_inc(v_env_6005_);
lean_dec(v___x_6004_);
v___x_6014_ = lean_box(0);
v_isShared_6015_ = v_isSharedCheck_6037_;
goto v_resetjp_6013_;
}
v_resetjp_6013_:
{
lean_object* v___x_6016_; lean_object* v___x_6018_; 
v___x_6016_ = l_Lean_Environment_setExporting(v_env_6005_, v_isExporting_5998_);
if (v_isShared_6015_ == 0)
{
lean_ctor_set(v___x_6014_, 5, v___x_5999_);
lean_ctor_set(v___x_6014_, 0, v___x_6016_);
v___x_6018_ = v___x_6014_;
goto v_reusejp_6017_;
}
else
{
lean_object* v_reuseFailAlloc_6036_; 
v_reuseFailAlloc_6036_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6036_, 0, v___x_6016_);
lean_ctor_set(v_reuseFailAlloc_6036_, 1, v_nextMacroScope_6006_);
lean_ctor_set(v_reuseFailAlloc_6036_, 2, v_ngen_6007_);
lean_ctor_set(v_reuseFailAlloc_6036_, 3, v_auxDeclNGen_6008_);
lean_ctor_set(v_reuseFailAlloc_6036_, 4, v_traceState_6009_);
lean_ctor_set(v_reuseFailAlloc_6036_, 5, v___x_5999_);
lean_ctor_set(v_reuseFailAlloc_6036_, 6, v_messages_6010_);
lean_ctor_set(v_reuseFailAlloc_6036_, 7, v_infoState_6011_);
lean_ctor_set(v_reuseFailAlloc_6036_, 8, v_snapshotTasks_6012_);
v___x_6018_ = v_reuseFailAlloc_6036_;
goto v_reusejp_6017_;
}
v_reusejp_6017_:
{
lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v_mctx_6021_; lean_object* v_zetaDeltaFVarIds_6022_; lean_object* v_postponed_6023_; lean_object* v_diag_6024_; lean_object* v___x_6026_; uint8_t v_isShared_6027_; uint8_t v_isSharedCheck_6034_; 
v___x_6019_ = lean_st_ref_put(v___y_5997_, v___x_6018_);
v___x_6020_ = lean_st_ref_take(v___y_6000_);
v_mctx_6021_ = lean_ctor_get(v___x_6020_, 0);
v_zetaDeltaFVarIds_6022_ = lean_ctor_get(v___x_6020_, 2);
v_postponed_6023_ = lean_ctor_get(v___x_6020_, 3);
v_diag_6024_ = lean_ctor_get(v___x_6020_, 4);
v_isSharedCheck_6034_ = !lean_is_exclusive(v___x_6020_);
if (v_isSharedCheck_6034_ == 0)
{
lean_object* v_unused_6035_; 
v_unused_6035_ = lean_ctor_get(v___x_6020_, 1);
lean_dec(v_unused_6035_);
v___x_6026_ = v___x_6020_;
v_isShared_6027_ = v_isSharedCheck_6034_;
goto v_resetjp_6025_;
}
else
{
lean_inc(v_diag_6024_);
lean_inc(v_postponed_6023_);
lean_inc(v_zetaDeltaFVarIds_6022_);
lean_inc(v_mctx_6021_);
lean_dec(v___x_6020_);
v___x_6026_ = lean_box(0);
v_isShared_6027_ = v_isSharedCheck_6034_;
goto v_resetjp_6025_;
}
v_resetjp_6025_:
{
lean_object* v___x_6028_; lean_object* v___x_6030_; 
v___x_6028_ = lean_box(0);
if (v_isShared_6027_ == 0)
{
lean_ctor_set(v___x_6026_, 1, v___x_6001_);
v___x_6030_ = v___x_6026_;
goto v_reusejp_6029_;
}
else
{
lean_object* v_reuseFailAlloc_6033_; 
v_reuseFailAlloc_6033_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6033_, 0, v_mctx_6021_);
lean_ctor_set(v_reuseFailAlloc_6033_, 1, v___x_6001_);
lean_ctor_set(v_reuseFailAlloc_6033_, 2, v_zetaDeltaFVarIds_6022_);
lean_ctor_set(v_reuseFailAlloc_6033_, 3, v_postponed_6023_);
lean_ctor_set(v_reuseFailAlloc_6033_, 4, v_diag_6024_);
v___x_6030_ = v_reuseFailAlloc_6033_;
goto v_reusejp_6029_;
}
v_reusejp_6029_:
{
lean_object* v___x_6031_; lean_object* v___x_6032_; 
v___x_6031_ = lean_st_ref_put(v___y_6000_, v___x_6030_);
v___x_6032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6032_, 0, v___x_6028_);
return v___x_6032_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0___boxed(lean_object* v___y_6039_, lean_object* v_isExporting_6040_, lean_object* v___x_6041_, lean_object* v___y_6042_, lean_object* v___x_6043_, lean_object* v_a_x3f_6044_, lean_object* v___y_6045_){
_start:
{
uint8_t v_isExporting_boxed_6046_; lean_object* v_res_6047_; 
v_isExporting_boxed_6046_ = lean_unbox(v_isExporting_6040_);
v_res_6047_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6039_, v_isExporting_boxed_6046_, v___x_6041_, v___y_6042_, v___x_6043_, v_a_x3f_6044_);
lean_dec(v_a_x3f_6044_);
lean_dec(v___y_6042_);
lean_dec(v___y_6039_);
return v_res_6047_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_6048_; lean_object* v___x_6049_; 
v___x_6048_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0);
v___x_6049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6049_, 0, v___x_6048_);
return v___x_6049_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_6050_; lean_object* v___x_6051_; 
v___x_6050_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_6051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6051_, 0, v___x_6050_);
lean_ctor_set(v___x_6051_, 1, v___x_6050_);
return v___x_6051_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_6052_; lean_object* v___x_6053_; 
v___x_6052_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_6053_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_6053_, 0, v___x_6052_);
lean_ctor_set(v___x_6053_, 1, v___x_6052_);
lean_ctor_set(v___x_6053_, 2, v___x_6052_);
lean_ctor_set(v___x_6053_, 3, v___x_6052_);
lean_ctor_set(v___x_6053_, 4, v___x_6052_);
lean_ctor_set(v___x_6053_, 5, v___x_6052_);
return v___x_6053_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(lean_object* v_x_6054_, uint8_t v_isExporting_6055_, lean_object* v___y_6056_, lean_object* v___y_6057_, lean_object* v___y_6058_, lean_object* v___y_6059_){
_start:
{
lean_object* v___x_6061_; lean_object* v_env_6062_; lean_object* v___x_6063_; uint8_t v_isModule_6064_; 
v___x_6061_ = lean_st_ref_get(v___y_6059_);
v_env_6062_ = lean_ctor_get(v___x_6061_, 0);
lean_inc_ref(v_env_6062_);
lean_dec(v___x_6061_);
v___x_6063_ = l_Lean_Environment_header(v_env_6062_);
v_isModule_6064_ = lean_ctor_get_uint8(v___x_6063_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_6063_);
if (v_isModule_6064_ == 0)
{
lean_object* v___x_6065_; 
lean_dec_ref(v_env_6062_);
lean_inc(v___y_6059_);
lean_inc_ref(v___y_6058_);
lean_inc(v___y_6057_);
lean_inc_ref(v___y_6056_);
v___x_6065_ = lean_apply_5(v_x_6054_, v___y_6056_, v___y_6057_, v___y_6058_, v___y_6059_, lean_box(0));
return v___x_6065_;
}
else
{
uint8_t v_isExporting_6066_; 
v_isExporting_6066_ = lean_ctor_get_uint8(v_env_6062_, sizeof(void*)*8);
lean_dec_ref(v_env_6062_);
if (v_isExporting_6055_ == 0)
{
if (v_isExporting_6066_ == 0)
{
lean_object* v___x_6132_; 
lean_inc(v___y_6059_);
lean_inc_ref(v___y_6058_);
lean_inc(v___y_6057_);
lean_inc_ref(v___y_6056_);
v___x_6132_ = lean_apply_5(v_x_6054_, v___y_6056_, v___y_6057_, v___y_6058_, v___y_6059_, lean_box(0));
return v___x_6132_;
}
else
{
goto v___jp_6067_;
}
}
else
{
if (v_isExporting_6066_ == 0)
{
goto v___jp_6067_;
}
else
{
lean_object* v___x_6133_; 
lean_inc(v___y_6059_);
lean_inc_ref(v___y_6058_);
lean_inc(v___y_6057_);
lean_inc_ref(v___y_6056_);
v___x_6133_ = lean_apply_5(v_x_6054_, v___y_6056_, v___y_6057_, v___y_6058_, v___y_6059_, lean_box(0));
return v___x_6133_;
}
}
v___jp_6067_:
{
lean_object* v___x_6068_; lean_object* v_env_6069_; lean_object* v_nextMacroScope_6070_; lean_object* v_ngen_6071_; lean_object* v_auxDeclNGen_6072_; lean_object* v_traceState_6073_; lean_object* v_messages_6074_; lean_object* v_infoState_6075_; lean_object* v_snapshotTasks_6076_; lean_object* v___x_6078_; uint8_t v_isShared_6079_; uint8_t v_isSharedCheck_6130_; 
v___x_6068_ = lean_st_ref_take(v___y_6059_);
v_env_6069_ = lean_ctor_get(v___x_6068_, 0);
v_nextMacroScope_6070_ = lean_ctor_get(v___x_6068_, 1);
v_ngen_6071_ = lean_ctor_get(v___x_6068_, 2);
v_auxDeclNGen_6072_ = lean_ctor_get(v___x_6068_, 3);
v_traceState_6073_ = lean_ctor_get(v___x_6068_, 4);
v_messages_6074_ = lean_ctor_get(v___x_6068_, 6);
v_infoState_6075_ = lean_ctor_get(v___x_6068_, 7);
v_snapshotTasks_6076_ = lean_ctor_get(v___x_6068_, 8);
v_isSharedCheck_6130_ = !lean_is_exclusive(v___x_6068_);
if (v_isSharedCheck_6130_ == 0)
{
lean_object* v_unused_6131_; 
v_unused_6131_ = lean_ctor_get(v___x_6068_, 5);
lean_dec(v_unused_6131_);
v___x_6078_ = v___x_6068_;
v_isShared_6079_ = v_isSharedCheck_6130_;
goto v_resetjp_6077_;
}
else
{
lean_inc(v_snapshotTasks_6076_);
lean_inc(v_infoState_6075_);
lean_inc(v_messages_6074_);
lean_inc(v_traceState_6073_);
lean_inc(v_auxDeclNGen_6072_);
lean_inc(v_ngen_6071_);
lean_inc(v_nextMacroScope_6070_);
lean_inc(v_env_6069_);
lean_dec(v___x_6068_);
v___x_6078_ = lean_box(0);
v_isShared_6079_ = v_isSharedCheck_6130_;
goto v_resetjp_6077_;
}
v_resetjp_6077_:
{
lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6083_; 
v___x_6080_ = l_Lean_Environment_setExporting(v_env_6069_, v_isExporting_6055_);
v___x_6081_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1);
if (v_isShared_6079_ == 0)
{
lean_ctor_set(v___x_6078_, 5, v___x_6081_);
lean_ctor_set(v___x_6078_, 0, v___x_6080_);
v___x_6083_ = v___x_6078_;
goto v_reusejp_6082_;
}
else
{
lean_object* v_reuseFailAlloc_6129_; 
v_reuseFailAlloc_6129_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6129_, 0, v___x_6080_);
lean_ctor_set(v_reuseFailAlloc_6129_, 1, v_nextMacroScope_6070_);
lean_ctor_set(v_reuseFailAlloc_6129_, 2, v_ngen_6071_);
lean_ctor_set(v_reuseFailAlloc_6129_, 3, v_auxDeclNGen_6072_);
lean_ctor_set(v_reuseFailAlloc_6129_, 4, v_traceState_6073_);
lean_ctor_set(v_reuseFailAlloc_6129_, 5, v___x_6081_);
lean_ctor_set(v_reuseFailAlloc_6129_, 6, v_messages_6074_);
lean_ctor_set(v_reuseFailAlloc_6129_, 7, v_infoState_6075_);
lean_ctor_set(v_reuseFailAlloc_6129_, 8, v_snapshotTasks_6076_);
v___x_6083_ = v_reuseFailAlloc_6129_;
goto v_reusejp_6082_;
}
v_reusejp_6082_:
{
lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v_mctx_6086_; lean_object* v_zetaDeltaFVarIds_6087_; lean_object* v_postponed_6088_; lean_object* v_diag_6089_; lean_object* v___x_6091_; uint8_t v_isShared_6092_; uint8_t v_isSharedCheck_6127_; 
v___x_6084_ = lean_st_ref_put(v___y_6059_, v___x_6083_);
v___x_6085_ = lean_st_ref_take(v___y_6057_);
v_mctx_6086_ = lean_ctor_get(v___x_6085_, 0);
v_zetaDeltaFVarIds_6087_ = lean_ctor_get(v___x_6085_, 2);
v_postponed_6088_ = lean_ctor_get(v___x_6085_, 3);
v_diag_6089_ = lean_ctor_get(v___x_6085_, 4);
v_isSharedCheck_6127_ = !lean_is_exclusive(v___x_6085_);
if (v_isSharedCheck_6127_ == 0)
{
lean_object* v_unused_6128_; 
v_unused_6128_ = lean_ctor_get(v___x_6085_, 1);
lean_dec(v_unused_6128_);
v___x_6091_ = v___x_6085_;
v_isShared_6092_ = v_isSharedCheck_6127_;
goto v_resetjp_6090_;
}
else
{
lean_inc(v_diag_6089_);
lean_inc(v_postponed_6088_);
lean_inc(v_zetaDeltaFVarIds_6087_);
lean_inc(v_mctx_6086_);
lean_dec(v___x_6085_);
v___x_6091_ = lean_box(0);
v_isShared_6092_ = v_isSharedCheck_6127_;
goto v_resetjp_6090_;
}
v_resetjp_6090_:
{
lean_object* v___x_6093_; lean_object* v___x_6095_; 
v___x_6093_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2);
if (v_isShared_6092_ == 0)
{
lean_ctor_set(v___x_6091_, 1, v___x_6093_);
v___x_6095_ = v___x_6091_;
goto v_reusejp_6094_;
}
else
{
lean_object* v_reuseFailAlloc_6126_; 
v_reuseFailAlloc_6126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6126_, 0, v_mctx_6086_);
lean_ctor_set(v_reuseFailAlloc_6126_, 1, v___x_6093_);
lean_ctor_set(v_reuseFailAlloc_6126_, 2, v_zetaDeltaFVarIds_6087_);
lean_ctor_set(v_reuseFailAlloc_6126_, 3, v_postponed_6088_);
lean_ctor_set(v_reuseFailAlloc_6126_, 4, v_diag_6089_);
v___x_6095_ = v_reuseFailAlloc_6126_;
goto v_reusejp_6094_;
}
v_reusejp_6094_:
{
lean_object* v___x_6096_; lean_object* v_r_6097_; 
v___x_6096_ = lean_st_ref_put(v___y_6057_, v___x_6095_);
lean_inc(v___y_6059_);
lean_inc_ref(v___y_6058_);
lean_inc(v___y_6057_);
lean_inc_ref(v___y_6056_);
v_r_6097_ = lean_apply_5(v_x_6054_, v___y_6056_, v___y_6057_, v___y_6058_, v___y_6059_, lean_box(0));
if (lean_obj_tag(v_r_6097_) == 0)
{
lean_object* v_a_6098_; lean_object* v___x_6100_; uint8_t v_isShared_6101_; uint8_t v_isSharedCheck_6114_; 
v_a_6098_ = lean_ctor_get(v_r_6097_, 0);
v_isSharedCheck_6114_ = !lean_is_exclusive(v_r_6097_);
if (v_isSharedCheck_6114_ == 0)
{
v___x_6100_ = v_r_6097_;
v_isShared_6101_ = v_isSharedCheck_6114_;
goto v_resetjp_6099_;
}
else
{
lean_inc(v_a_6098_);
lean_dec(v_r_6097_);
v___x_6100_ = lean_box(0);
v_isShared_6101_ = v_isSharedCheck_6114_;
goto v_resetjp_6099_;
}
v_resetjp_6099_:
{
lean_object* v___x_6103_; 
lean_inc(v_a_6098_);
if (v_isShared_6101_ == 0)
{
lean_ctor_set_tag(v___x_6100_, 1);
v___x_6103_ = v___x_6100_;
goto v_reusejp_6102_;
}
else
{
lean_object* v_reuseFailAlloc_6113_; 
v_reuseFailAlloc_6113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6113_, 0, v_a_6098_);
v___x_6103_ = v_reuseFailAlloc_6113_;
goto v_reusejp_6102_;
}
v_reusejp_6102_:
{
lean_object* v___x_6104_; lean_object* v___x_6106_; uint8_t v_isShared_6107_; uint8_t v_isSharedCheck_6111_; 
v___x_6104_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6059_, v_isExporting_6066_, v___x_6081_, v___y_6057_, v___x_6093_, v___x_6103_);
lean_dec_ref(v___x_6103_);
v_isSharedCheck_6111_ = !lean_is_exclusive(v___x_6104_);
if (v_isSharedCheck_6111_ == 0)
{
lean_object* v_unused_6112_; 
v_unused_6112_ = lean_ctor_get(v___x_6104_, 0);
lean_dec(v_unused_6112_);
v___x_6106_ = v___x_6104_;
v_isShared_6107_ = v_isSharedCheck_6111_;
goto v_resetjp_6105_;
}
else
{
lean_dec(v___x_6104_);
v___x_6106_ = lean_box(0);
v_isShared_6107_ = v_isSharedCheck_6111_;
goto v_resetjp_6105_;
}
v_resetjp_6105_:
{
lean_object* v___x_6109_; 
if (v_isShared_6107_ == 0)
{
lean_ctor_set(v___x_6106_, 0, v_a_6098_);
v___x_6109_ = v___x_6106_;
goto v_reusejp_6108_;
}
else
{
lean_object* v_reuseFailAlloc_6110_; 
v_reuseFailAlloc_6110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6110_, 0, v_a_6098_);
v___x_6109_ = v_reuseFailAlloc_6110_;
goto v_reusejp_6108_;
}
v_reusejp_6108_:
{
return v___x_6109_;
}
}
}
}
}
else
{
lean_object* v_a_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6119_; uint8_t v_isShared_6120_; uint8_t v_isSharedCheck_6124_; 
v_a_6115_ = lean_ctor_get(v_r_6097_, 0);
lean_inc(v_a_6115_);
lean_dec_ref_known(v_r_6097_, 1);
v___x_6116_ = lean_box(0);
v___x_6117_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6059_, v_isExporting_6066_, v___x_6081_, v___y_6057_, v___x_6093_, v___x_6116_);
v_isSharedCheck_6124_ = !lean_is_exclusive(v___x_6117_);
if (v_isSharedCheck_6124_ == 0)
{
lean_object* v_unused_6125_; 
v_unused_6125_ = lean_ctor_get(v___x_6117_, 0);
lean_dec(v_unused_6125_);
v___x_6119_ = v___x_6117_;
v_isShared_6120_ = v_isSharedCheck_6124_;
goto v_resetjp_6118_;
}
else
{
lean_dec(v___x_6117_);
v___x_6119_ = lean_box(0);
v_isShared_6120_ = v_isSharedCheck_6124_;
goto v_resetjp_6118_;
}
v_resetjp_6118_:
{
lean_object* v___x_6122_; 
if (v_isShared_6120_ == 0)
{
lean_ctor_set_tag(v___x_6119_, 1);
lean_ctor_set(v___x_6119_, 0, v_a_6115_);
v___x_6122_ = v___x_6119_;
goto v_reusejp_6121_;
}
else
{
lean_object* v_reuseFailAlloc_6123_; 
v_reuseFailAlloc_6123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6123_, 0, v_a_6115_);
v___x_6122_ = v_reuseFailAlloc_6123_;
goto v_reusejp_6121_;
}
v_reusejp_6121_:
{
return v___x_6122_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___boxed(lean_object* v_x_6134_, lean_object* v_isExporting_6135_, lean_object* v___y_6136_, lean_object* v___y_6137_, lean_object* v___y_6138_, lean_object* v___y_6139_, lean_object* v___y_6140_){
_start:
{
uint8_t v_isExporting_boxed_6141_; lean_object* v_res_6142_; 
v_isExporting_boxed_6141_ = lean_unbox(v_isExporting_6135_);
v_res_6142_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6134_, v_isExporting_boxed_6141_, v___y_6136_, v___y_6137_, v___y_6138_, v___y_6139_);
lean_dec(v___y_6139_);
lean_dec_ref(v___y_6138_);
lean_dec(v___y_6137_);
lean_dec_ref(v___y_6136_);
return v_res_6142_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(lean_object* v_x_6143_, uint8_t v_when_6144_, lean_object* v___y_6145_, lean_object* v___y_6146_, lean_object* v___y_6147_, lean_object* v___y_6148_){
_start:
{
if (v_when_6144_ == 0)
{
lean_object* v___x_6150_; 
lean_inc(v___y_6148_);
lean_inc_ref(v___y_6147_);
lean_inc(v___y_6146_);
lean_inc_ref(v___y_6145_);
v___x_6150_ = lean_apply_5(v_x_6143_, v___y_6145_, v___y_6146_, v___y_6147_, v___y_6148_, lean_box(0));
return v___x_6150_;
}
else
{
uint8_t v___x_6151_; lean_object* v___x_6152_; 
v___x_6151_ = 0;
v___x_6152_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6143_, v___x_6151_, v___y_6145_, v___y_6146_, v___y_6147_, v___y_6148_);
return v___x_6152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg___boxed(lean_object* v_x_6153_, lean_object* v_when_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_, lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_){
_start:
{
uint8_t v_when_boxed_6160_; lean_object* v_res_6161_; 
v_when_boxed_6160_ = lean_unbox(v_when_6154_);
v_res_6161_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v_x_6153_, v_when_boxed_6160_, v___y_6155_, v___y_6156_, v___y_6157_, v___y_6158_);
lean_dec(v___y_6158_);
lean_dec_ref(v___y_6157_);
lean_dec(v___y_6156_);
lean_dec_ref(v___y_6155_);
return v_res_6161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object* v_funNames_6162_, lean_object* v_argsPacker_6163_, lean_object* v_decrTactics_6164_, lean_object* v_value_6165_, lean_object* v_a_6166_, lean_object* v_a_6167_, lean_object* v_a_6168_, lean_object* v_a_6169_){
_start:
{
lean_object* v___f_6171_; uint8_t v___x_6172_; lean_object* v___x_6173_; 
v___f_6171_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed), 9, 4);
lean_closure_set(v___f_6171_, 0, v_value_6165_);
lean_closure_set(v___f_6171_, 1, v_decrTactics_6164_);
lean_closure_set(v___f_6171_, 2, v_argsPacker_6163_);
lean_closure_set(v___f_6171_, 3, v_funNames_6162_);
v___x_6172_ = 1;
v___x_6173_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v___f_6171_, v___x_6172_, v_a_6166_, v_a_6167_, v_a_6168_, v_a_6169_);
return v___x_6173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___boxed(lean_object* v_funNames_6174_, lean_object* v_argsPacker_6175_, lean_object* v_decrTactics_6176_, lean_object* v_value_6177_, lean_object* v_a_6178_, lean_object* v_a_6179_, lean_object* v_a_6180_, lean_object* v_a_6181_, lean_object* v_a_6182_){
_start:
{
lean_object* v_res_6183_; 
v_res_6183_ = l_Lean_Elab_WF_solveDecreasingGoals(v_funNames_6174_, v_argsPacker_6175_, v_decrTactics_6176_, v_value_6177_, v_a_6178_, v_a_6179_, v_a_6180_, v_a_6181_);
lean_dec(v_a_6181_);
lean_dec_ref(v_a_6180_);
lean_dec(v_a_6179_);
lean_dec_ref(v_a_6178_);
return v_res_6183_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object* v_00_u03b1_6184_, lean_object* v_msg_6185_, lean_object* v___y_6186_, lean_object* v___y_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_, lean_object* v___y_6190_, lean_object* v___y_6191_){
_start:
{
lean_object* v___x_6193_; 
v___x_6193_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v_msg_6185_, v___y_6186_, v___y_6187_, v___y_6188_, v___y_6189_, v___y_6190_, v___y_6191_);
return v___x_6193_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object* v_00_u03b1_6194_, lean_object* v_msg_6195_, lean_object* v___y_6196_, lean_object* v___y_6197_, lean_object* v___y_6198_, lean_object* v___y_6199_, lean_object* v___y_6200_, lean_object* v___y_6201_, lean_object* v___y_6202_){
_start:
{
lean_object* v_res_6203_; 
v_res_6203_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(v_00_u03b1_6194_, v_msg_6195_, v___y_6196_, v___y_6197_, v___y_6198_, v___y_6199_, v___y_6200_, v___y_6201_);
lean_dec(v___y_6201_);
lean_dec_ref(v___y_6200_);
lean_dec(v___y_6199_);
lean_dec_ref(v___y_6198_);
lean_dec(v___y_6197_);
lean_dec_ref(v___y_6196_);
return v_res_6203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(lean_object* v___y_6204_, lean_object* v___y_6205_, lean_object* v___y_6206_, lean_object* v___y_6207_, lean_object* v___y_6208_, lean_object* v___y_6209_, lean_object* v___y_6210_, lean_object* v___y_6211_){
_start:
{
lean_object* v___x_6213_; 
v___x_6213_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_6211_);
return v___x_6213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___boxed(lean_object* v___y_6214_, lean_object* v___y_6215_, lean_object* v___y_6216_, lean_object* v___y_6217_, lean_object* v___y_6218_, lean_object* v___y_6219_, lean_object* v___y_6220_, lean_object* v___y_6221_, lean_object* v___y_6222_){
_start:
{
lean_object* v_res_6223_; 
v_res_6223_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(v___y_6214_, v___y_6215_, v___y_6216_, v___y_6217_, v___y_6218_, v___y_6219_, v___y_6220_, v___y_6221_);
lean_dec(v___y_6221_);
lean_dec_ref(v___y_6220_);
lean_dec(v___y_6219_);
lean_dec_ref(v___y_6218_);
lean_dec(v___y_6217_);
lean_dec_ref(v___y_6216_);
lean_dec(v___y_6215_);
lean_dec_ref(v___y_6214_);
return v_res_6223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object* v_00_u03b1_6224_, lean_object* v_x_6225_, lean_object* v_mkInfoTree_6226_, lean_object* v___y_6227_, lean_object* v___y_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_, lean_object* v___y_6231_, lean_object* v___y_6232_, lean_object* v___y_6233_, lean_object* v___y_6234_){
_start:
{
lean_object* v___x_6236_; 
v___x_6236_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v_x_6225_, v_mkInfoTree_6226_, v___y_6227_, v___y_6228_, v___y_6229_, v___y_6230_, v___y_6231_, v___y_6232_, v___y_6233_, v___y_6234_);
return v___x_6236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object* v_00_u03b1_6237_, lean_object* v_x_6238_, lean_object* v_mkInfoTree_6239_, lean_object* v___y_6240_, lean_object* v___y_6241_, lean_object* v___y_6242_, lean_object* v___y_6243_, lean_object* v___y_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_, lean_object* v___y_6248_){
_start:
{
lean_object* v_res_6249_; 
v_res_6249_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(v_00_u03b1_6237_, v_x_6238_, v_mkInfoTree_6239_, v___y_6240_, v___y_6241_, v___y_6242_, v___y_6243_, v___y_6244_, v___y_6245_, v___y_6246_, v___y_6247_);
lean_dec(v___y_6247_);
lean_dec_ref(v___y_6246_);
lean_dec(v___y_6245_);
lean_dec_ref(v___y_6244_);
lean_dec(v___y_6243_);
lean_dec_ref(v___y_6242_);
lean_dec(v___y_6241_);
lean_dec_ref(v___y_6240_);
return v_res_6249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(lean_object* v_as_6250_, size_t v_i_6251_, size_t v_stop_6252_, lean_object* v_b_6253_, lean_object* v___y_6254_, lean_object* v___y_6255_, lean_object* v___y_6256_, lean_object* v___y_6257_, lean_object* v___y_6258_, lean_object* v___y_6259_){
_start:
{
lean_object* v___x_6261_; 
v___x_6261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v_as_6250_, v_i_6251_, v_stop_6252_, v_b_6253_, v___y_6256_, v___y_6257_, v___y_6258_, v___y_6259_);
return v___x_6261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___boxed(lean_object* v_as_6262_, lean_object* v_i_6263_, lean_object* v_stop_6264_, lean_object* v_b_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_, lean_object* v___y_6269_, lean_object* v___y_6270_, lean_object* v___y_6271_, lean_object* v___y_6272_){
_start:
{
size_t v_i_boxed_6273_; size_t v_stop_boxed_6274_; lean_object* v_res_6275_; 
v_i_boxed_6273_ = lean_unbox_usize(v_i_6263_);
lean_dec(v_i_6263_);
v_stop_boxed_6274_ = lean_unbox_usize(v_stop_6264_);
lean_dec(v_stop_6264_);
v_res_6275_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(v_as_6262_, v_i_boxed_6273_, v_stop_boxed_6274_, v_b_6265_, v___y_6266_, v___y_6267_, v___y_6268_, v___y_6269_, v___y_6270_, v___y_6271_);
lean_dec(v___y_6271_);
lean_dec_ref(v___y_6270_);
lean_dec(v___y_6269_);
lean_dec_ref(v___y_6268_);
lean_dec(v___y_6267_);
lean_dec_ref(v___y_6266_);
lean_dec_ref(v_as_6262_);
return v_res_6275_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(lean_object* v_00_u03b1_6276_, lean_object* v_x_6277_, uint8_t v_isExporting_6278_, lean_object* v___y_6279_, lean_object* v___y_6280_, lean_object* v___y_6281_, lean_object* v___y_6282_){
_start:
{
lean_object* v___x_6284_; 
v___x_6284_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6277_, v_isExporting_6278_, v___y_6279_, v___y_6280_, v___y_6281_, v___y_6282_);
return v___x_6284_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___boxed(lean_object* v_00_u03b1_6285_, lean_object* v_x_6286_, lean_object* v_isExporting_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_, lean_object* v___y_6291_, lean_object* v___y_6292_){
_start:
{
uint8_t v_isExporting_boxed_6293_; lean_object* v_res_6294_; 
v_isExporting_boxed_6293_ = lean_unbox(v_isExporting_6287_);
v_res_6294_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(v_00_u03b1_6285_, v_x_6286_, v_isExporting_boxed_6293_, v___y_6288_, v___y_6289_, v___y_6290_, v___y_6291_);
lean_dec(v___y_6291_);
lean_dec_ref(v___y_6290_);
lean_dec(v___y_6289_);
lean_dec_ref(v___y_6288_);
return v_res_6294_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(lean_object* v_00_u03b1_6295_, lean_object* v_x_6296_, uint8_t v_when_6297_, lean_object* v___y_6298_, lean_object* v___y_6299_, lean_object* v___y_6300_, lean_object* v___y_6301_){
_start:
{
lean_object* v___x_6303_; 
v___x_6303_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v_x_6296_, v_when_6297_, v___y_6298_, v___y_6299_, v___y_6300_, v___y_6301_);
return v___x_6303_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___boxed(lean_object* v_00_u03b1_6304_, lean_object* v_x_6305_, lean_object* v_when_6306_, lean_object* v___y_6307_, lean_object* v___y_6308_, lean_object* v___y_6309_, lean_object* v___y_6310_, lean_object* v___y_6311_){
_start:
{
uint8_t v_when_boxed_6312_; lean_object* v_res_6313_; 
v_when_boxed_6312_ = lean_unbox(v_when_6306_);
v_res_6313_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(v_00_u03b1_6304_, v_x_6305_, v_when_boxed_6312_, v___y_6307_, v___y_6308_, v___y_6309_, v___y_6310_);
lean_dec(v___y_6310_);
lean_dec_ref(v___y_6309_);
lean_dec(v___y_6308_);
lean_dec_ref(v___y_6307_);
return v_res_6313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object* v_msgData_6314_, lean_object* v_macroStack_6315_, lean_object* v___y_6316_, lean_object* v___y_6317_, lean_object* v___y_6318_, lean_object* v___y_6319_, lean_object* v___y_6320_, lean_object* v___y_6321_){
_start:
{
lean_object* v___x_6323_; 
v___x_6323_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_msgData_6314_, v_macroStack_6315_, v___y_6320_);
return v___x_6323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object* v_msgData_6324_, lean_object* v_macroStack_6325_, lean_object* v___y_6326_, lean_object* v___y_6327_, lean_object* v___y_6328_, lean_object* v___y_6329_, lean_object* v___y_6330_, lean_object* v___y_6331_, lean_object* v___y_6332_){
_start:
{
lean_object* v_res_6333_; 
v_res_6333_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(v_msgData_6324_, v_macroStack_6325_, v___y_6326_, v___y_6327_, v___y_6328_, v___y_6329_, v___y_6330_, v___y_6331_);
lean_dec(v___y_6331_);
lean_dec_ref(v___y_6330_);
lean_dec(v___y_6329_);
lean_dec_ref(v___y_6328_);
lean_dec(v___y_6327_);
lean_dec_ref(v___y_6326_);
return v_res_6333_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__4(void){
_start:
{
lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; 
v___x_6340_ = lean_box(0);
v___x_6341_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__3));
v___x_6342_ = l_Lean_mkConst(v___x_6341_, v___x_6340_);
return v___x_6342_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__7(void){
_start:
{
lean_object* v___x_6347_; lean_object* v___x_6348_; lean_object* v___x_6349_; 
v___x_6347_ = lean_box(0);
v___x_6348_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__6));
v___x_6349_ = l_Lean_mkConst(v___x_6348_, v___x_6347_);
return v___x_6349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object* v_wfRel_6350_, lean_object* v_a_6351_, lean_object* v_a_6352_, lean_object* v_a_6353_, lean_object* v_a_6354_){
_start:
{
lean_object* v___x_6359_; 
v___x_6359_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_wfRel_6350_, v_a_6352_);
if (lean_obj_tag(v___x_6359_) == 0)
{
lean_object* v_a_6360_; lean_object* v___x_6361_; uint8_t v___x_6362_; 
v_a_6360_ = lean_ctor_get(v___x_6359_, 0);
lean_inc(v_a_6360_);
lean_dec_ref_known(v___x_6359_, 1);
v___x_6361_ = l_Lean_Expr_cleanupAnnotations(v_a_6360_);
v___x_6362_ = l_Lean_Expr_isApp(v___x_6361_);
if (v___x_6362_ == 0)
{
lean_dec_ref(v___x_6361_);
goto v___jp_6356_;
}
else
{
lean_object* v_arg_6363_; lean_object* v___x_6364_; uint8_t v___x_6365_; 
v_arg_6363_ = lean_ctor_get(v___x_6361_, 1);
lean_inc_ref(v_arg_6363_);
v___x_6364_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6361_);
v___x_6365_ = l_Lean_Expr_isApp(v___x_6364_);
if (v___x_6365_ == 0)
{
lean_dec_ref(v___x_6364_);
lean_dec_ref(v_arg_6363_);
goto v___jp_6356_;
}
else
{
lean_object* v_arg_6366_; lean_object* v___x_6367_; uint8_t v___x_6368_; 
v_arg_6366_ = lean_ctor_get(v___x_6364_, 1);
lean_inc_ref(v_arg_6366_);
v___x_6367_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6364_);
v___x_6368_ = l_Lean_Expr_isApp(v___x_6367_);
if (v___x_6368_ == 0)
{
lean_dec_ref(v___x_6367_);
lean_dec_ref(v_arg_6366_);
lean_dec_ref(v_arg_6363_);
goto v___jp_6356_;
}
else
{
lean_object* v_arg_6369_; lean_object* v___x_6370_; uint8_t v___x_6371_; 
v_arg_6369_ = lean_ctor_get(v___x_6367_, 1);
lean_inc_ref(v_arg_6369_);
v___x_6370_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6367_);
v___x_6371_ = l_Lean_Expr_isApp(v___x_6370_);
if (v___x_6371_ == 0)
{
lean_dec_ref(v___x_6370_);
lean_dec_ref(v_arg_6369_);
lean_dec_ref(v_arg_6366_);
lean_dec_ref(v_arg_6363_);
goto v___jp_6356_;
}
else
{
lean_object* v___x_6372_; lean_object* v___x_6373_; uint8_t v___x_6374_; 
v___x_6372_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6370_);
v___x_6373_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__1));
v___x_6374_ = l_Lean_Expr_isConstOf(v___x_6372_, v___x_6373_);
lean_dec_ref(v___x_6372_);
if (v___x_6374_ == 0)
{
lean_dec_ref(v_arg_6369_);
lean_dec_ref(v_arg_6366_);
lean_dec_ref(v_arg_6363_);
goto v___jp_6356_;
}
else
{
lean_object* v___x_6375_; lean_object* v___x_6376_; 
v___x_6375_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__4, &l_Lean_Elab_WF_isNatLtWF___closed__4_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__4);
v___x_6376_ = l_Lean_Meta_isExprDefEq(v_arg_6369_, v___x_6375_, v_a_6351_, v_a_6352_, v_a_6353_, v_a_6354_);
if (lean_obj_tag(v___x_6376_) == 0)
{
lean_object* v_a_6377_; lean_object* v___x_6379_; uint8_t v_isShared_6380_; uint8_t v_isSharedCheck_6410_; 
v_a_6377_ = lean_ctor_get(v___x_6376_, 0);
v_isSharedCheck_6410_ = !lean_is_exclusive(v___x_6376_);
if (v_isSharedCheck_6410_ == 0)
{
v___x_6379_ = v___x_6376_;
v_isShared_6380_ = v_isSharedCheck_6410_;
goto v_resetjp_6378_;
}
else
{
lean_inc(v_a_6377_);
lean_dec(v___x_6376_);
v___x_6379_ = lean_box(0);
v_isShared_6380_ = v_isSharedCheck_6410_;
goto v_resetjp_6378_;
}
v_resetjp_6378_:
{
uint8_t v___x_6381_; 
v___x_6381_ = lean_unbox(v_a_6377_);
lean_dec(v_a_6377_);
if (v___x_6381_ == 0)
{
lean_object* v___x_6382_; lean_object* v___x_6384_; 
lean_dec_ref(v_arg_6366_);
lean_dec_ref(v_arg_6363_);
v___x_6382_ = lean_box(0);
if (v_isShared_6380_ == 0)
{
lean_ctor_set(v___x_6379_, 0, v___x_6382_);
v___x_6384_ = v___x_6379_;
goto v_reusejp_6383_;
}
else
{
lean_object* v_reuseFailAlloc_6385_; 
v_reuseFailAlloc_6385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6385_, 0, v___x_6382_);
v___x_6384_ = v_reuseFailAlloc_6385_;
goto v_reusejp_6383_;
}
v_reusejp_6383_:
{
return v___x_6384_;
}
}
else
{
lean_object* v___x_6386_; lean_object* v___x_6387_; 
lean_del_object(v___x_6379_);
v___x_6386_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__7, &l_Lean_Elab_WF_isNatLtWF___closed__7_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__7);
v___x_6387_ = l_Lean_Meta_isExprDefEq(v_arg_6363_, v___x_6386_, v_a_6351_, v_a_6352_, v_a_6353_, v_a_6354_);
if (lean_obj_tag(v___x_6387_) == 0)
{
lean_object* v_a_6388_; lean_object* v___x_6390_; uint8_t v_isShared_6391_; uint8_t v_isSharedCheck_6401_; 
v_a_6388_ = lean_ctor_get(v___x_6387_, 0);
v_isSharedCheck_6401_ = !lean_is_exclusive(v___x_6387_);
if (v_isSharedCheck_6401_ == 0)
{
v___x_6390_ = v___x_6387_;
v_isShared_6391_ = v_isSharedCheck_6401_;
goto v_resetjp_6389_;
}
else
{
lean_inc(v_a_6388_);
lean_dec(v___x_6387_);
v___x_6390_ = lean_box(0);
v_isShared_6391_ = v_isSharedCheck_6401_;
goto v_resetjp_6389_;
}
v_resetjp_6389_:
{
uint8_t v___x_6392_; 
v___x_6392_ = lean_unbox(v_a_6388_);
lean_dec(v_a_6388_);
if (v___x_6392_ == 0)
{
lean_object* v___x_6393_; lean_object* v___x_6395_; 
lean_dec_ref(v_arg_6366_);
v___x_6393_ = lean_box(0);
if (v_isShared_6391_ == 0)
{
lean_ctor_set(v___x_6390_, 0, v___x_6393_);
v___x_6395_ = v___x_6390_;
goto v_reusejp_6394_;
}
else
{
lean_object* v_reuseFailAlloc_6396_; 
v_reuseFailAlloc_6396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6396_, 0, v___x_6393_);
v___x_6395_ = v_reuseFailAlloc_6396_;
goto v_reusejp_6394_;
}
v_reusejp_6394_:
{
return v___x_6395_;
}
}
else
{
lean_object* v___x_6397_; lean_object* v___x_6399_; 
v___x_6397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6397_, 0, v_arg_6366_);
if (v_isShared_6391_ == 0)
{
lean_ctor_set(v___x_6390_, 0, v___x_6397_);
v___x_6399_ = v___x_6390_;
goto v_reusejp_6398_;
}
else
{
lean_object* v_reuseFailAlloc_6400_; 
v_reuseFailAlloc_6400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6400_, 0, v___x_6397_);
v___x_6399_ = v_reuseFailAlloc_6400_;
goto v_reusejp_6398_;
}
v_reusejp_6398_:
{
return v___x_6399_;
}
}
}
}
else
{
lean_object* v_a_6402_; lean_object* v___x_6404_; uint8_t v_isShared_6405_; uint8_t v_isSharedCheck_6409_; 
lean_dec_ref(v_arg_6366_);
v_a_6402_ = lean_ctor_get(v___x_6387_, 0);
v_isSharedCheck_6409_ = !lean_is_exclusive(v___x_6387_);
if (v_isSharedCheck_6409_ == 0)
{
v___x_6404_ = v___x_6387_;
v_isShared_6405_ = v_isSharedCheck_6409_;
goto v_resetjp_6403_;
}
else
{
lean_inc(v_a_6402_);
lean_dec(v___x_6387_);
v___x_6404_ = lean_box(0);
v_isShared_6405_ = v_isSharedCheck_6409_;
goto v_resetjp_6403_;
}
v_resetjp_6403_:
{
lean_object* v___x_6407_; 
if (v_isShared_6405_ == 0)
{
v___x_6407_ = v___x_6404_;
goto v_reusejp_6406_;
}
else
{
lean_object* v_reuseFailAlloc_6408_; 
v_reuseFailAlloc_6408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6408_, 0, v_a_6402_);
v___x_6407_ = v_reuseFailAlloc_6408_;
goto v_reusejp_6406_;
}
v_reusejp_6406_:
{
return v___x_6407_;
}
}
}
}
}
}
else
{
lean_object* v_a_6411_; lean_object* v___x_6413_; uint8_t v_isShared_6414_; uint8_t v_isSharedCheck_6418_; 
lean_dec_ref(v_arg_6366_);
lean_dec_ref(v_arg_6363_);
v_a_6411_ = lean_ctor_get(v___x_6376_, 0);
v_isSharedCheck_6418_ = !lean_is_exclusive(v___x_6376_);
if (v_isSharedCheck_6418_ == 0)
{
v___x_6413_ = v___x_6376_;
v_isShared_6414_ = v_isSharedCheck_6418_;
goto v_resetjp_6412_;
}
else
{
lean_inc(v_a_6411_);
lean_dec(v___x_6376_);
v___x_6413_ = lean_box(0);
v_isShared_6414_ = v_isSharedCheck_6418_;
goto v_resetjp_6412_;
}
v_resetjp_6412_:
{
lean_object* v___x_6416_; 
if (v_isShared_6414_ == 0)
{
v___x_6416_ = v___x_6413_;
goto v_reusejp_6415_;
}
else
{
lean_object* v_reuseFailAlloc_6417_; 
v_reuseFailAlloc_6417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6417_, 0, v_a_6411_);
v___x_6416_ = v_reuseFailAlloc_6417_;
goto v_reusejp_6415_;
}
v_reusejp_6415_:
{
return v___x_6416_;
}
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
lean_object* v_a_6419_; lean_object* v___x_6421_; uint8_t v_isShared_6422_; uint8_t v_isSharedCheck_6426_; 
v_a_6419_ = lean_ctor_get(v___x_6359_, 0);
v_isSharedCheck_6426_ = !lean_is_exclusive(v___x_6359_);
if (v_isSharedCheck_6426_ == 0)
{
v___x_6421_ = v___x_6359_;
v_isShared_6422_ = v_isSharedCheck_6426_;
goto v_resetjp_6420_;
}
else
{
lean_inc(v_a_6419_);
lean_dec(v___x_6359_);
v___x_6421_ = lean_box(0);
v_isShared_6422_ = v_isSharedCheck_6426_;
goto v_resetjp_6420_;
}
v_resetjp_6420_:
{
lean_object* v___x_6424_; 
if (v_isShared_6422_ == 0)
{
v___x_6424_ = v___x_6421_;
goto v_reusejp_6423_;
}
else
{
lean_object* v_reuseFailAlloc_6425_; 
v_reuseFailAlloc_6425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6425_, 0, v_a_6419_);
v___x_6424_ = v_reuseFailAlloc_6425_;
goto v_reusejp_6423_;
}
v_reusejp_6423_:
{
return v___x_6424_;
}
}
}
v___jp_6356_:
{
lean_object* v___x_6357_; lean_object* v___x_6358_; 
v___x_6357_ = lean_box(0);
v___x_6358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6358_, 0, v___x_6357_);
return v___x_6358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF___boxed(lean_object* v_wfRel_6427_, lean_object* v_a_6428_, lean_object* v_a_6429_, lean_object* v_a_6430_, lean_object* v_a_6431_, lean_object* v_a_6432_){
_start:
{
lean_object* v_res_6433_; 
v_res_6433_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_6427_, v_a_6428_, v_a_6429_, v_a_6430_, v_a_6431_);
lean_dec(v_a_6431_);
lean_dec_ref(v_a_6430_);
lean_dec(v_a_6429_);
lean_dec_ref(v_a_6428_);
return v_res_6433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(lean_object* v_type_6434_, lean_object* v_maxFVars_x3f_6435_, lean_object* v_k_6436_, uint8_t v_cleanupAnnotations_6437_, uint8_t v_whnfType_6438_, lean_object* v___y_6439_, lean_object* v___y_6440_, lean_object* v___y_6441_, lean_object* v___y_6442_, lean_object* v___y_6443_, lean_object* v___y_6444_){
_start:
{
lean_object* v___f_6446_; lean_object* v___x_6447_; 
lean_inc(v___y_6440_);
lean_inc_ref(v___y_6439_);
v___f_6446_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6446_, 0, v_k_6436_);
lean_closure_set(v___f_6446_, 1, v___y_6439_);
lean_closure_set(v___f_6446_, 2, v___y_6440_);
v___x_6447_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_6434_, v_maxFVars_x3f_6435_, v___f_6446_, v_cleanupAnnotations_6437_, v_whnfType_6438_, v___y_6441_, v___y_6442_, v___y_6443_, v___y_6444_);
if (lean_obj_tag(v___x_6447_) == 0)
{
return v___x_6447_;
}
else
{
lean_object* v_a_6448_; lean_object* v___x_6450_; uint8_t v_isShared_6451_; uint8_t v_isSharedCheck_6455_; 
v_a_6448_ = lean_ctor_get(v___x_6447_, 0);
v_isSharedCheck_6455_ = !lean_is_exclusive(v___x_6447_);
if (v_isSharedCheck_6455_ == 0)
{
v___x_6450_ = v___x_6447_;
v_isShared_6451_ = v_isSharedCheck_6455_;
goto v_resetjp_6449_;
}
else
{
lean_inc(v_a_6448_);
lean_dec(v___x_6447_);
v___x_6450_ = lean_box(0);
v_isShared_6451_ = v_isSharedCheck_6455_;
goto v_resetjp_6449_;
}
v_resetjp_6449_:
{
lean_object* v___x_6453_; 
if (v_isShared_6451_ == 0)
{
v___x_6453_ = v___x_6450_;
goto v_reusejp_6452_;
}
else
{
lean_object* v_reuseFailAlloc_6454_; 
v_reuseFailAlloc_6454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6454_, 0, v_a_6448_);
v___x_6453_ = v_reuseFailAlloc_6454_;
goto v_reusejp_6452_;
}
v_reusejp_6452_:
{
return v___x_6453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg___boxed(lean_object* v_type_6456_, lean_object* v_maxFVars_x3f_6457_, lean_object* v_k_6458_, lean_object* v_cleanupAnnotations_6459_, lean_object* v_whnfType_6460_, lean_object* v___y_6461_, lean_object* v___y_6462_, lean_object* v___y_6463_, lean_object* v___y_6464_, lean_object* v___y_6465_, lean_object* v___y_6466_, lean_object* v___y_6467_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_6468_; uint8_t v_whnfType_boxed_6469_; lean_object* v_res_6470_; 
v_cleanupAnnotations_boxed_6468_ = lean_unbox(v_cleanupAnnotations_6459_);
v_whnfType_boxed_6469_ = lean_unbox(v_whnfType_6460_);
v_res_6470_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_type_6456_, v_maxFVars_x3f_6457_, v_k_6458_, v_cleanupAnnotations_boxed_6468_, v_whnfType_boxed_6469_, v___y_6461_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_, v___y_6466_);
lean_dec(v___y_6466_);
lean_dec_ref(v___y_6465_);
lean_dec(v___y_6464_);
lean_dec_ref(v___y_6463_);
lean_dec(v___y_6462_);
lean_dec_ref(v___y_6461_);
return v_res_6470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(lean_object* v_00_u03b1_6471_, lean_object* v_type_6472_, lean_object* v_maxFVars_x3f_6473_, lean_object* v_k_6474_, uint8_t v_cleanupAnnotations_6475_, uint8_t v_whnfType_6476_, lean_object* v___y_6477_, lean_object* v___y_6478_, lean_object* v___y_6479_, lean_object* v___y_6480_, lean_object* v___y_6481_, lean_object* v___y_6482_){
_start:
{
lean_object* v___x_6484_; 
v___x_6484_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_type_6472_, v_maxFVars_x3f_6473_, v_k_6474_, v_cleanupAnnotations_6475_, v_whnfType_6476_, v___y_6477_, v___y_6478_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_);
return v___x_6484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___boxed(lean_object* v_00_u03b1_6485_, lean_object* v_type_6486_, lean_object* v_maxFVars_x3f_6487_, lean_object* v_k_6488_, lean_object* v_cleanupAnnotations_6489_, lean_object* v_whnfType_6490_, lean_object* v___y_6491_, lean_object* v___y_6492_, lean_object* v___y_6493_, lean_object* v___y_6494_, lean_object* v___y_6495_, lean_object* v___y_6496_, lean_object* v___y_6497_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_6498_; uint8_t v_whnfType_boxed_6499_; lean_object* v_res_6500_; 
v_cleanupAnnotations_boxed_6498_ = lean_unbox(v_cleanupAnnotations_6489_);
v_whnfType_boxed_6499_ = lean_unbox(v_whnfType_6490_);
v_res_6500_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(v_00_u03b1_6485_, v_type_6486_, v_maxFVars_x3f_6487_, v_k_6488_, v_cleanupAnnotations_boxed_6498_, v_whnfType_boxed_6499_, v___y_6491_, v___y_6492_, v___y_6493_, v___y_6494_, v___y_6495_, v___y_6496_);
lean_dec(v___y_6496_);
lean_dec_ref(v___y_6495_);
lean_dec(v___y_6494_);
lean_dec_ref(v___y_6493_);
lean_dec(v___y_6492_);
lean_dec_ref(v___y_6491_);
return v_res_6500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(lean_object* v_lctx_6501_, lean_object* v_x_6502_, lean_object* v___y_6503_, lean_object* v___y_6504_, lean_object* v___y_6505_, lean_object* v___y_6506_, lean_object* v___y_6507_, lean_object* v___y_6508_){
_start:
{
lean_object* v_keyedConfig_6510_; uint8_t v_trackZetaDelta_6511_; lean_object* v_zetaDeltaSet_6512_; lean_object* v_localInstances_6513_; lean_object* v_defEqCtx_x3f_6514_; lean_object* v_synthPendingDepth_6515_; lean_object* v_customCanUnfoldPredicate_x3f_6516_; uint8_t v_univApprox_6517_; uint8_t v_inTypeClassResolution_6518_; uint8_t v_cacheInferType_6519_; lean_object* v___x_6520_; lean_object* v___x_6521_; 
v_keyedConfig_6510_ = lean_ctor_get(v___y_6505_, 0);
v_trackZetaDelta_6511_ = lean_ctor_get_uint8(v___y_6505_, sizeof(void*)*7);
v_zetaDeltaSet_6512_ = lean_ctor_get(v___y_6505_, 1);
v_localInstances_6513_ = lean_ctor_get(v___y_6505_, 3);
v_defEqCtx_x3f_6514_ = lean_ctor_get(v___y_6505_, 4);
v_synthPendingDepth_6515_ = lean_ctor_get(v___y_6505_, 5);
v_customCanUnfoldPredicate_x3f_6516_ = lean_ctor_get(v___y_6505_, 6);
v_univApprox_6517_ = lean_ctor_get_uint8(v___y_6505_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_6518_ = lean_ctor_get_uint8(v___y_6505_, sizeof(void*)*7 + 2);
v_cacheInferType_6519_ = lean_ctor_get_uint8(v___y_6505_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_6516_);
lean_inc(v_synthPendingDepth_6515_);
lean_inc(v_defEqCtx_x3f_6514_);
lean_inc_ref(v_localInstances_6513_);
lean_inc(v_zetaDeltaSet_6512_);
lean_inc_ref(v_keyedConfig_6510_);
v___x_6520_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6520_, 0, v_keyedConfig_6510_);
lean_ctor_set(v___x_6520_, 1, v_zetaDeltaSet_6512_);
lean_ctor_set(v___x_6520_, 2, v_lctx_6501_);
lean_ctor_set(v___x_6520_, 3, v_localInstances_6513_);
lean_ctor_set(v___x_6520_, 4, v_defEqCtx_x3f_6514_);
lean_ctor_set(v___x_6520_, 5, v_synthPendingDepth_6515_);
lean_ctor_set(v___x_6520_, 6, v_customCanUnfoldPredicate_x3f_6516_);
lean_ctor_set_uint8(v___x_6520_, sizeof(void*)*7, v_trackZetaDelta_6511_);
lean_ctor_set_uint8(v___x_6520_, sizeof(void*)*7 + 1, v_univApprox_6517_);
lean_ctor_set_uint8(v___x_6520_, sizeof(void*)*7 + 2, v_inTypeClassResolution_6518_);
lean_ctor_set_uint8(v___x_6520_, sizeof(void*)*7 + 3, v_cacheInferType_6519_);
lean_inc(v___y_6508_);
lean_inc_ref(v___y_6507_);
lean_inc(v___y_6506_);
lean_inc(v___y_6504_);
lean_inc_ref(v___y_6503_);
v___x_6521_ = lean_apply_7(v_x_6502_, v___y_6503_, v___y_6504_, v___x_6520_, v___y_6506_, v___y_6507_, v___y_6508_, lean_box(0));
if (lean_obj_tag(v___x_6521_) == 0)
{
lean_object* v_a_6522_; lean_object* v___x_6524_; uint8_t v_isShared_6525_; uint8_t v_isSharedCheck_6529_; 
v_a_6522_ = lean_ctor_get(v___x_6521_, 0);
v_isSharedCheck_6529_ = !lean_is_exclusive(v___x_6521_);
if (v_isSharedCheck_6529_ == 0)
{
v___x_6524_ = v___x_6521_;
v_isShared_6525_ = v_isSharedCheck_6529_;
goto v_resetjp_6523_;
}
else
{
lean_inc(v_a_6522_);
lean_dec(v___x_6521_);
v___x_6524_ = lean_box(0);
v_isShared_6525_ = v_isSharedCheck_6529_;
goto v_resetjp_6523_;
}
v_resetjp_6523_:
{
lean_object* v___x_6527_; 
if (v_isShared_6525_ == 0)
{
v___x_6527_ = v___x_6524_;
goto v_reusejp_6526_;
}
else
{
lean_object* v_reuseFailAlloc_6528_; 
v_reuseFailAlloc_6528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6528_, 0, v_a_6522_);
v___x_6527_ = v_reuseFailAlloc_6528_;
goto v_reusejp_6526_;
}
v_reusejp_6526_:
{
return v___x_6527_;
}
}
}
else
{
return v___x_6521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg___boxed(lean_object* v_lctx_6530_, lean_object* v_x_6531_, lean_object* v___y_6532_, lean_object* v___y_6533_, lean_object* v___y_6534_, lean_object* v___y_6535_, lean_object* v___y_6536_, lean_object* v___y_6537_, lean_object* v___y_6538_){
_start:
{
lean_object* v_res_6539_; 
v_res_6539_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v_lctx_6530_, v_x_6531_, v___y_6532_, v___y_6533_, v___y_6534_, v___y_6535_, v___y_6536_, v___y_6537_);
lean_dec(v___y_6537_);
lean_dec_ref(v___y_6536_);
lean_dec(v___y_6535_);
lean_dec_ref(v___y_6534_);
lean_dec(v___y_6533_);
lean_dec_ref(v___y_6532_);
return v_res_6539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(lean_object* v_00_u03b1_6540_, lean_object* v_lctx_6541_, lean_object* v_x_6542_, lean_object* v___y_6543_, lean_object* v___y_6544_, lean_object* v___y_6545_, lean_object* v___y_6546_, lean_object* v___y_6547_, lean_object* v___y_6548_){
_start:
{
lean_object* v___x_6550_; 
v___x_6550_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v_lctx_6541_, v_x_6542_, v___y_6543_, v___y_6544_, v___y_6545_, v___y_6546_, v___y_6547_, v___y_6548_);
return v___x_6550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___boxed(lean_object* v_00_u03b1_6551_, lean_object* v_lctx_6552_, lean_object* v_x_6553_, lean_object* v___y_6554_, lean_object* v___y_6555_, lean_object* v___y_6556_, lean_object* v___y_6557_, lean_object* v___y_6558_, lean_object* v___y_6559_, lean_object* v___y_6560_){
_start:
{
lean_object* v_res_6561_; 
v_res_6561_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(v_00_u03b1_6551_, v_lctx_6552_, v_x_6553_, v___y_6554_, v___y_6555_, v___y_6556_, v___y_6557_, v___y_6558_, v___y_6559_);
lean_dec(v___y_6559_);
lean_dec_ref(v___y_6558_);
lean_dec(v___y_6557_);
lean_dec_ref(v___y_6556_);
lean_dec(v___y_6555_);
lean_dec_ref(v___y_6554_);
return v_res_6561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object* v_prefixArgs_6562_, lean_object* v_declName_6563_, lean_object* v_x_6564_, lean_object* v_F_6565_, lean_object* v_val_6566_, lean_object* v___y_6567_, lean_object* v___y_6568_, lean_object* v___y_6569_, lean_object* v___y_6570_, lean_object* v___y_6571_, lean_object* v___y_6572_){
_start:
{
lean_object* v___x_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; 
v___x_6574_ = lean_array_get_size(v_prefixArgs_6562_);
v___x_6575_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed), 11, 2);
lean_closure_set(v___x_6575_, 0, v_declName_6563_);
lean_closure_set(v___x_6575_, 1, v___x_6574_);
v___x_6576_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v_x_6564_, v_F_6565_, v_val_6566_, v___x_6575_, v___y_6567_, v___y_6568_, v___y_6569_, v___y_6570_, v___y_6571_, v___y_6572_);
return v___x_6576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object* v_prefixArgs_6577_, lean_object* v_declName_6578_, lean_object* v_x_6579_, lean_object* v_F_6580_, lean_object* v_val_6581_, lean_object* v___y_6582_, lean_object* v___y_6583_, lean_object* v___y_6584_, lean_object* v___y_6585_, lean_object* v___y_6586_, lean_object* v___y_6587_, lean_object* v___y_6588_){
_start:
{
lean_object* v_res_6589_; 
v_res_6589_ = l_Lean_Elab_WF_mkFix___lam__0(v_prefixArgs_6577_, v_declName_6578_, v_x_6579_, v_F_6580_, v_val_6581_, v___y_6582_, v___y_6583_, v___y_6584_, v___y_6585_, v___y_6586_, v___y_6587_);
lean_dec(v___y_6587_);
lean_dec_ref(v___y_6586_);
lean_dec(v___y_6585_);
lean_dec_ref(v___y_6584_);
lean_dec(v___y_6583_);
lean_dec_ref(v___y_6582_);
lean_dec_ref(v_prefixArgs_6577_);
return v_res_6589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object* v___x_6606_, lean_object* v___x_6607_, lean_object* v_wfRel_6608_, lean_object* v_x_6609_, lean_object* v_type_6610_, lean_object* v___y_6611_, lean_object* v___y_6612_, lean_object* v___y_6613_, lean_object* v___y_6614_, lean_object* v___y_6615_, lean_object* v___y_6616_){
_start:
{
lean_object* v___x_6618_; lean_object* v___x_6619_; lean_object* v___x_6620_; lean_object* v___x_6621_; 
v___x_6618_ = lean_unsigned_to_nat(0u);
v___x_6619_ = lean_array_get_borrowed(v___x_6606_, v_x_6609_, v___x_6618_);
v___x_6620_ = l_Lean_Expr_fvarId_x21(v___x_6619_);
v___x_6621_ = l_Lean_FVarId_getUserName___redArg(v___x_6620_, v___y_6613_, v___y_6615_, v___y_6616_);
if (lean_obj_tag(v___x_6621_) == 0)
{
lean_object* v_a_6622_; lean_object* v___x_6623_; 
v_a_6622_ = lean_ctor_get(v___x_6621_, 0);
lean_inc(v_a_6622_);
lean_dec_ref_known(v___x_6621_, 1);
lean_inc(v___y_6616_);
lean_inc_ref(v___y_6615_);
lean_inc(v___y_6614_);
lean_inc_ref(v___y_6613_);
lean_inc(v___x_6619_);
v___x_6623_ = lean_infer_type(v___x_6619_, v___y_6613_, v___y_6614_, v___y_6615_, v___y_6616_);
if (lean_obj_tag(v___x_6623_) == 0)
{
lean_object* v_a_6624_; lean_object* v___x_6625_; 
v_a_6624_ = lean_ctor_get(v___x_6623_, 0);
lean_inc_n(v_a_6624_, 2);
lean_dec_ref_known(v___x_6623_, 1);
v___x_6625_ = l_Lean_Meta_getLevel(v_a_6624_, v___y_6613_, v___y_6614_, v___y_6615_, v___y_6616_);
if (lean_obj_tag(v___x_6625_) == 0)
{
lean_object* v_a_6626_; lean_object* v___x_6627_; 
v_a_6626_ = lean_ctor_get(v___x_6625_, 0);
lean_inc(v_a_6626_);
lean_dec_ref_known(v___x_6625_, 1);
lean_inc_ref(v_type_6610_);
v___x_6627_ = l_Lean_Meta_getLevel(v_type_6610_, v___y_6613_, v___y_6614_, v___y_6615_, v___y_6616_);
if (lean_obj_tag(v___x_6627_) == 0)
{
lean_object* v_a_6628_; lean_object* v___x_6629_; lean_object* v___x_6630_; uint8_t v___x_6631_; uint8_t v___x_6632_; uint8_t v___x_6633_; lean_object* v___x_6634_; 
v_a_6628_ = lean_ctor_get(v___x_6627_, 0);
lean_inc(v_a_6628_);
lean_dec_ref_known(v___x_6627_, 1);
v___x_6629_ = lean_mk_empty_array_with_capacity(v___x_6607_);
lean_inc(v___x_6619_);
lean_inc_ref(v___x_6629_);
v___x_6630_ = lean_array_push(v___x_6629_, v___x_6619_);
v___x_6631_ = 0;
v___x_6632_ = 1;
v___x_6633_ = 1;
v___x_6634_ = l_Lean_Meta_mkLambdaFVars(v___x_6630_, v_type_6610_, v___x_6631_, v___x_6632_, v___x_6631_, v___x_6632_, v___x_6633_, v___y_6613_, v___y_6614_, v___y_6615_, v___y_6616_);
if (lean_obj_tag(v___x_6634_) == 0)
{
lean_object* v_a_6635_; lean_object* v___x_6636_; 
v_a_6635_ = lean_ctor_get(v___x_6634_, 0);
lean_inc(v_a_6635_);
lean_dec_ref_known(v___x_6634_, 1);
lean_inc_ref(v_wfRel_6608_);
v___x_6636_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_6608_, v___y_6613_, v___y_6614_, v___y_6615_, v___y_6616_);
if (lean_obj_tag(v___x_6636_) == 0)
{
lean_object* v_a_6637_; lean_object* v___x_6639_; uint8_t v_isShared_6640_; uint8_t v_isSharedCheck_6681_; 
v_a_6637_ = lean_ctor_get(v___x_6636_, 0);
v_isSharedCheck_6681_ = !lean_is_exclusive(v___x_6636_);
if (v_isSharedCheck_6681_ == 0)
{
v___x_6639_ = v___x_6636_;
v_isShared_6640_ = v_isSharedCheck_6681_;
goto v_resetjp_6638_;
}
else
{
lean_inc(v_a_6637_);
lean_dec(v___x_6636_);
v___x_6639_ = lean_box(0);
v_isShared_6640_ = v_isSharedCheck_6681_;
goto v_resetjp_6638_;
}
v_resetjp_6638_:
{
if (lean_obj_tag(v_a_6637_) == 1)
{
lean_object* v_val_6641_; lean_object* v___x_6642_; lean_object* v___x_6643_; lean_object* v___x_6644_; lean_object* v___x_6645_; lean_object* v___x_6646_; lean_object* v___x_6647_; lean_object* v___x_6648_; lean_object* v___x_6650_; 
lean_dec_ref(v___x_6629_);
lean_dec_ref(v_wfRel_6608_);
lean_dec(v___x_6607_);
v_val_6641_ = lean_ctor_get(v_a_6637_, 0);
lean_inc(v_val_6641_);
lean_dec_ref_known(v_a_6637_, 1);
v___x_6642_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__2));
v___x_6643_ = lean_box(0);
v___x_6644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6644_, 0, v_a_6628_);
lean_ctor_set(v___x_6644_, 1, v___x_6643_);
v___x_6645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6645_, 0, v_a_6626_);
lean_ctor_set(v___x_6645_, 1, v___x_6644_);
v___x_6646_ = l_Lean_mkConst(v___x_6642_, v___x_6645_);
v___x_6647_ = l_Lean_mkApp3(v___x_6646_, v_a_6624_, v_a_6635_, v_val_6641_);
v___x_6648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6648_, 0, v___x_6647_);
lean_ctor_set(v___x_6648_, 1, v_a_6622_);
if (v_isShared_6640_ == 0)
{
lean_ctor_set(v___x_6639_, 0, v___x_6648_);
v___x_6650_ = v___x_6639_;
goto v_reusejp_6649_;
}
else
{
lean_object* v_reuseFailAlloc_6651_; 
v_reuseFailAlloc_6651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6651_, 0, v___x_6648_);
v___x_6650_ = v_reuseFailAlloc_6651_;
goto v_reusejp_6649_;
}
v_reusejp_6649_:
{
return v___x_6650_;
}
}
else
{
lean_object* v___x_6652_; lean_object* v___x_6653_; lean_object* v___x_6654_; lean_object* v___x_6655_; lean_object* v___x_6656_; lean_object* v___x_6657_; 
lean_del_object(v___x_6639_);
lean_dec(v_a_6637_);
v___x_6652_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__4));
lean_inc_ref(v_wfRel_6608_);
v___x_6653_ = l_Lean_mkProj(v___x_6652_, v___x_6618_, v_wfRel_6608_);
v___x_6654_ = l_Lean_mkProj(v___x_6652_, v___x_6607_, v_wfRel_6608_);
v___x_6655_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__6));
v___x_6656_ = lean_array_push(v___x_6629_, v___x_6654_);
v___x_6657_ = l_Lean_Meta_mkAppM(v___x_6655_, v___x_6656_, v___y_6613_, v___y_6614_, v___y_6615_, v___y_6616_);
if (lean_obj_tag(v___x_6657_) == 0)
{
lean_object* v_a_6658_; lean_object* v___x_6660_; uint8_t v_isShared_6661_; uint8_t v_isSharedCheck_6672_; 
v_a_6658_ = lean_ctor_get(v___x_6657_, 0);
v_isSharedCheck_6672_ = !lean_is_exclusive(v___x_6657_);
if (v_isSharedCheck_6672_ == 0)
{
v___x_6660_ = v___x_6657_;
v_isShared_6661_ = v_isSharedCheck_6672_;
goto v_resetjp_6659_;
}
else
{
lean_inc(v_a_6658_);
lean_dec(v___x_6657_);
v___x_6660_ = lean_box(0);
v_isShared_6661_ = v_isSharedCheck_6672_;
goto v_resetjp_6659_;
}
v_resetjp_6659_:
{
lean_object* v___x_6662_; lean_object* v___x_6663_; lean_object* v___x_6664_; lean_object* v___x_6665_; lean_object* v___x_6666_; lean_object* v___x_6667_; lean_object* v___x_6668_; lean_object* v___x_6670_; 
v___x_6662_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__7));
v___x_6663_ = lean_box(0);
v___x_6664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6664_, 0, v_a_6628_);
lean_ctor_set(v___x_6664_, 1, v___x_6663_);
v___x_6665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6665_, 0, v_a_6626_);
lean_ctor_set(v___x_6665_, 1, v___x_6664_);
v___x_6666_ = l_Lean_mkConst(v___x_6662_, v___x_6665_);
v___x_6667_ = l_Lean_mkApp4(v___x_6666_, v_a_6624_, v_a_6635_, v___x_6653_, v_a_6658_);
v___x_6668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6668_, 0, v___x_6667_);
lean_ctor_set(v___x_6668_, 1, v_a_6622_);
if (v_isShared_6661_ == 0)
{
lean_ctor_set(v___x_6660_, 0, v___x_6668_);
v___x_6670_ = v___x_6660_;
goto v_reusejp_6669_;
}
else
{
lean_object* v_reuseFailAlloc_6671_; 
v_reuseFailAlloc_6671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6671_, 0, v___x_6668_);
v___x_6670_ = v_reuseFailAlloc_6671_;
goto v_reusejp_6669_;
}
v_reusejp_6669_:
{
return v___x_6670_;
}
}
}
else
{
lean_object* v_a_6673_; lean_object* v___x_6675_; uint8_t v_isShared_6676_; uint8_t v_isSharedCheck_6680_; 
lean_dec_ref(v___x_6653_);
lean_dec(v_a_6635_);
lean_dec(v_a_6628_);
lean_dec(v_a_6626_);
lean_dec(v_a_6624_);
lean_dec(v_a_6622_);
v_a_6673_ = lean_ctor_get(v___x_6657_, 0);
v_isSharedCheck_6680_ = !lean_is_exclusive(v___x_6657_);
if (v_isSharedCheck_6680_ == 0)
{
v___x_6675_ = v___x_6657_;
v_isShared_6676_ = v_isSharedCheck_6680_;
goto v_resetjp_6674_;
}
else
{
lean_inc(v_a_6673_);
lean_dec(v___x_6657_);
v___x_6675_ = lean_box(0);
v_isShared_6676_ = v_isSharedCheck_6680_;
goto v_resetjp_6674_;
}
v_resetjp_6674_:
{
lean_object* v___x_6678_; 
if (v_isShared_6676_ == 0)
{
v___x_6678_ = v___x_6675_;
goto v_reusejp_6677_;
}
else
{
lean_object* v_reuseFailAlloc_6679_; 
v_reuseFailAlloc_6679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6679_, 0, v_a_6673_);
v___x_6678_ = v_reuseFailAlloc_6679_;
goto v_reusejp_6677_;
}
v_reusejp_6677_:
{
return v___x_6678_;
}
}
}
}
}
}
else
{
lean_object* v_a_6682_; lean_object* v___x_6684_; uint8_t v_isShared_6685_; uint8_t v_isSharedCheck_6689_; 
lean_dec(v_a_6635_);
lean_dec_ref(v___x_6629_);
lean_dec(v_a_6628_);
lean_dec(v_a_6626_);
lean_dec(v_a_6624_);
lean_dec(v_a_6622_);
lean_dec_ref(v_wfRel_6608_);
lean_dec(v___x_6607_);
v_a_6682_ = lean_ctor_get(v___x_6636_, 0);
v_isSharedCheck_6689_ = !lean_is_exclusive(v___x_6636_);
if (v_isSharedCheck_6689_ == 0)
{
v___x_6684_ = v___x_6636_;
v_isShared_6685_ = v_isSharedCheck_6689_;
goto v_resetjp_6683_;
}
else
{
lean_inc(v_a_6682_);
lean_dec(v___x_6636_);
v___x_6684_ = lean_box(0);
v_isShared_6685_ = v_isSharedCheck_6689_;
goto v_resetjp_6683_;
}
v_resetjp_6683_:
{
lean_object* v___x_6687_; 
if (v_isShared_6685_ == 0)
{
v___x_6687_ = v___x_6684_;
goto v_reusejp_6686_;
}
else
{
lean_object* v_reuseFailAlloc_6688_; 
v_reuseFailAlloc_6688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6688_, 0, v_a_6682_);
v___x_6687_ = v_reuseFailAlloc_6688_;
goto v_reusejp_6686_;
}
v_reusejp_6686_:
{
return v___x_6687_;
}
}
}
}
else
{
lean_object* v_a_6690_; lean_object* v___x_6692_; uint8_t v_isShared_6693_; uint8_t v_isSharedCheck_6697_; 
lean_dec_ref(v___x_6629_);
lean_dec(v_a_6628_);
lean_dec(v_a_6626_);
lean_dec(v_a_6624_);
lean_dec(v_a_6622_);
lean_dec_ref(v_wfRel_6608_);
lean_dec(v___x_6607_);
v_a_6690_ = lean_ctor_get(v___x_6634_, 0);
v_isSharedCheck_6697_ = !lean_is_exclusive(v___x_6634_);
if (v_isSharedCheck_6697_ == 0)
{
v___x_6692_ = v___x_6634_;
v_isShared_6693_ = v_isSharedCheck_6697_;
goto v_resetjp_6691_;
}
else
{
lean_inc(v_a_6690_);
lean_dec(v___x_6634_);
v___x_6692_ = lean_box(0);
v_isShared_6693_ = v_isSharedCheck_6697_;
goto v_resetjp_6691_;
}
v_resetjp_6691_:
{
lean_object* v___x_6695_; 
if (v_isShared_6693_ == 0)
{
v___x_6695_ = v___x_6692_;
goto v_reusejp_6694_;
}
else
{
lean_object* v_reuseFailAlloc_6696_; 
v_reuseFailAlloc_6696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6696_, 0, v_a_6690_);
v___x_6695_ = v_reuseFailAlloc_6696_;
goto v_reusejp_6694_;
}
v_reusejp_6694_:
{
return v___x_6695_;
}
}
}
}
else
{
lean_object* v_a_6698_; lean_object* v___x_6700_; uint8_t v_isShared_6701_; uint8_t v_isSharedCheck_6705_; 
lean_dec(v_a_6626_);
lean_dec(v_a_6624_);
lean_dec(v_a_6622_);
lean_dec_ref(v_type_6610_);
lean_dec_ref(v_wfRel_6608_);
lean_dec(v___x_6607_);
v_a_6698_ = lean_ctor_get(v___x_6627_, 0);
v_isSharedCheck_6705_ = !lean_is_exclusive(v___x_6627_);
if (v_isSharedCheck_6705_ == 0)
{
v___x_6700_ = v___x_6627_;
v_isShared_6701_ = v_isSharedCheck_6705_;
goto v_resetjp_6699_;
}
else
{
lean_inc(v_a_6698_);
lean_dec(v___x_6627_);
v___x_6700_ = lean_box(0);
v_isShared_6701_ = v_isSharedCheck_6705_;
goto v_resetjp_6699_;
}
v_resetjp_6699_:
{
lean_object* v___x_6703_; 
if (v_isShared_6701_ == 0)
{
v___x_6703_ = v___x_6700_;
goto v_reusejp_6702_;
}
else
{
lean_object* v_reuseFailAlloc_6704_; 
v_reuseFailAlloc_6704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6704_, 0, v_a_6698_);
v___x_6703_ = v_reuseFailAlloc_6704_;
goto v_reusejp_6702_;
}
v_reusejp_6702_:
{
return v___x_6703_;
}
}
}
}
else
{
lean_object* v_a_6706_; lean_object* v___x_6708_; uint8_t v_isShared_6709_; uint8_t v_isSharedCheck_6713_; 
lean_dec(v_a_6624_);
lean_dec(v_a_6622_);
lean_dec_ref(v_type_6610_);
lean_dec_ref(v_wfRel_6608_);
lean_dec(v___x_6607_);
v_a_6706_ = lean_ctor_get(v___x_6625_, 0);
v_isSharedCheck_6713_ = !lean_is_exclusive(v___x_6625_);
if (v_isSharedCheck_6713_ == 0)
{
v___x_6708_ = v___x_6625_;
v_isShared_6709_ = v_isSharedCheck_6713_;
goto v_resetjp_6707_;
}
else
{
lean_inc(v_a_6706_);
lean_dec(v___x_6625_);
v___x_6708_ = lean_box(0);
v_isShared_6709_ = v_isSharedCheck_6713_;
goto v_resetjp_6707_;
}
v_resetjp_6707_:
{
lean_object* v___x_6711_; 
if (v_isShared_6709_ == 0)
{
v___x_6711_ = v___x_6708_;
goto v_reusejp_6710_;
}
else
{
lean_object* v_reuseFailAlloc_6712_; 
v_reuseFailAlloc_6712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6712_, 0, v_a_6706_);
v___x_6711_ = v_reuseFailAlloc_6712_;
goto v_reusejp_6710_;
}
v_reusejp_6710_:
{
return v___x_6711_;
}
}
}
}
else
{
lean_object* v_a_6714_; lean_object* v___x_6716_; uint8_t v_isShared_6717_; uint8_t v_isSharedCheck_6721_; 
lean_dec(v_a_6622_);
lean_dec_ref(v_type_6610_);
lean_dec_ref(v_wfRel_6608_);
lean_dec(v___x_6607_);
v_a_6714_ = lean_ctor_get(v___x_6623_, 0);
v_isSharedCheck_6721_ = !lean_is_exclusive(v___x_6623_);
if (v_isSharedCheck_6721_ == 0)
{
v___x_6716_ = v___x_6623_;
v_isShared_6717_ = v_isSharedCheck_6721_;
goto v_resetjp_6715_;
}
else
{
lean_inc(v_a_6714_);
lean_dec(v___x_6623_);
v___x_6716_ = lean_box(0);
v_isShared_6717_ = v_isSharedCheck_6721_;
goto v_resetjp_6715_;
}
v_resetjp_6715_:
{
lean_object* v___x_6719_; 
if (v_isShared_6717_ == 0)
{
v___x_6719_ = v___x_6716_;
goto v_reusejp_6718_;
}
else
{
lean_object* v_reuseFailAlloc_6720_; 
v_reuseFailAlloc_6720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6720_, 0, v_a_6714_);
v___x_6719_ = v_reuseFailAlloc_6720_;
goto v_reusejp_6718_;
}
v_reusejp_6718_:
{
return v___x_6719_;
}
}
}
}
else
{
lean_object* v_a_6722_; lean_object* v___x_6724_; uint8_t v_isShared_6725_; uint8_t v_isSharedCheck_6729_; 
lean_dec_ref(v_type_6610_);
lean_dec_ref(v_wfRel_6608_);
lean_dec(v___x_6607_);
v_a_6722_ = lean_ctor_get(v___x_6621_, 0);
v_isSharedCheck_6729_ = !lean_is_exclusive(v___x_6621_);
if (v_isSharedCheck_6729_ == 0)
{
v___x_6724_ = v___x_6621_;
v_isShared_6725_ = v_isSharedCheck_6729_;
goto v_resetjp_6723_;
}
else
{
lean_inc(v_a_6722_);
lean_dec(v___x_6621_);
v___x_6724_ = lean_box(0);
v_isShared_6725_ = v_isSharedCheck_6729_;
goto v_resetjp_6723_;
}
v_resetjp_6723_:
{
lean_object* v___x_6727_; 
if (v_isShared_6725_ == 0)
{
v___x_6727_ = v___x_6724_;
goto v_reusejp_6726_;
}
else
{
lean_object* v_reuseFailAlloc_6728_; 
v_reuseFailAlloc_6728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6728_, 0, v_a_6722_);
v___x_6727_ = v_reuseFailAlloc_6728_;
goto v_reusejp_6726_;
}
v_reusejp_6726_:
{
return v___x_6727_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object* v___x_6730_, lean_object* v___x_6731_, lean_object* v_wfRel_6732_, lean_object* v_x_6733_, lean_object* v_type_6734_, lean_object* v___y_6735_, lean_object* v___y_6736_, lean_object* v___y_6737_, lean_object* v___y_6738_, lean_object* v___y_6739_, lean_object* v___y_6740_, lean_object* v___y_6741_){
_start:
{
lean_object* v_res_6742_; 
v_res_6742_ = l_Lean_Elab_WF_mkFix___lam__1(v___x_6730_, v___x_6731_, v_wfRel_6732_, v_x_6733_, v_type_6734_, v___y_6735_, v___y_6736_, v___y_6737_, v___y_6738_, v___y_6739_, v___y_6740_);
lean_dec(v___y_6740_);
lean_dec_ref(v___y_6739_);
lean_dec(v___y_6738_);
lean_dec_ref(v___y_6737_);
lean_dec(v___y_6736_);
lean_dec_ref(v___y_6735_);
lean_dec_ref(v_x_6733_);
lean_dec_ref(v___x_6730_);
return v_res_6742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object* v___x_6743_, lean_object* v___x_6744_, lean_object* v___x_6745_, lean_object* v___f_6746_, lean_object* v_funNames_6747_, lean_object* v_argsPacker_6748_, lean_object* v_decrTactics_6749_, uint8_t v___x_6750_, lean_object* v_fst_6751_, lean_object* v_prefixArgs_6752_, lean_object* v___y_6753_, lean_object* v___y_6754_, lean_object* v___y_6755_, lean_object* v___y_6756_, lean_object* v___y_6757_, lean_object* v___y_6758_){
_start:
{
lean_object* v___x_6760_; 
lean_inc_ref(v___x_6744_);
lean_inc_ref(v___x_6743_);
v___x_6760_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v___x_6743_, v___x_6744_, v___x_6745_, v___f_6746_, v___y_6753_, v___y_6754_, v___y_6755_, v___y_6756_, v___y_6757_, v___y_6758_);
if (lean_obj_tag(v___x_6760_) == 0)
{
lean_object* v_a_6761_; lean_object* v___x_6762_; 
v_a_6761_ = lean_ctor_get(v___x_6760_, 0);
lean_inc(v_a_6761_);
lean_dec_ref_known(v___x_6760_, 1);
v___x_6762_ = l_Lean_Elab_WF_solveDecreasingGoals(v_funNames_6747_, v_argsPacker_6748_, v_decrTactics_6749_, v_a_6761_, v___y_6755_, v___y_6756_, v___y_6757_, v___y_6758_);
if (lean_obj_tag(v___x_6762_) == 0)
{
lean_object* v_a_6763_; lean_object* v___x_6764_; lean_object* v___x_6765_; lean_object* v___x_6766_; lean_object* v___x_6767_; uint8_t v___x_6768_; uint8_t v___x_6769_; lean_object* v___x_6770_; 
v_a_6763_ = lean_ctor_get(v___x_6762_, 0);
lean_inc(v_a_6763_);
lean_dec_ref_known(v___x_6762_, 1);
v___x_6764_ = lean_unsigned_to_nat(2u);
v___x_6765_ = lean_mk_empty_array_with_capacity(v___x_6764_);
v___x_6766_ = lean_array_push(v___x_6765_, v___x_6743_);
v___x_6767_ = lean_array_push(v___x_6766_, v___x_6744_);
v___x_6768_ = 1;
v___x_6769_ = 1;
v___x_6770_ = l_Lean_Meta_mkLambdaFVars(v___x_6767_, v_a_6763_, v___x_6750_, v___x_6768_, v___x_6750_, v___x_6768_, v___x_6769_, v___y_6755_, v___y_6756_, v___y_6757_, v___y_6758_);
if (lean_obj_tag(v___x_6770_) == 0)
{
lean_object* v_a_6771_; lean_object* v___x_6772_; lean_object* v___x_6773_; 
v_a_6771_ = lean_ctor_get(v___x_6770_, 0);
lean_inc(v_a_6771_);
lean_dec_ref_known(v___x_6770_, 1);
v___x_6772_ = l_Lean_Expr_app___override(v_fst_6751_, v_a_6771_);
v___x_6773_ = l_Lean_Meta_mkLambdaFVars(v_prefixArgs_6752_, v___x_6772_, v___x_6750_, v___x_6768_, v___x_6750_, v___x_6768_, v___x_6769_, v___y_6755_, v___y_6756_, v___y_6757_, v___y_6758_);
return v___x_6773_;
}
else
{
lean_dec_ref(v_prefixArgs_6752_);
lean_dec_ref(v_fst_6751_);
return v___x_6770_;
}
}
else
{
lean_dec_ref(v_prefixArgs_6752_);
lean_dec_ref(v_fst_6751_);
lean_dec_ref(v___x_6744_);
lean_dec_ref(v___x_6743_);
return v___x_6762_;
}
}
else
{
lean_dec_ref(v_prefixArgs_6752_);
lean_dec_ref(v_fst_6751_);
lean_dec_ref(v_decrTactics_6749_);
lean_dec_ref(v_argsPacker_6748_);
lean_dec_ref(v_funNames_6747_);
lean_dec_ref(v___x_6744_);
lean_dec_ref(v___x_6743_);
return v___x_6760_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object** _args){
lean_object* v___x_6774_ = _args[0];
lean_object* v___x_6775_ = _args[1];
lean_object* v___x_6776_ = _args[2];
lean_object* v___f_6777_ = _args[3];
lean_object* v_funNames_6778_ = _args[4];
lean_object* v_argsPacker_6779_ = _args[5];
lean_object* v_decrTactics_6780_ = _args[6];
lean_object* v___x_6781_ = _args[7];
lean_object* v_fst_6782_ = _args[8];
lean_object* v_prefixArgs_6783_ = _args[9];
lean_object* v___y_6784_ = _args[10];
lean_object* v___y_6785_ = _args[11];
lean_object* v___y_6786_ = _args[12];
lean_object* v___y_6787_ = _args[13];
lean_object* v___y_6788_ = _args[14];
lean_object* v___y_6789_ = _args[15];
lean_object* v___y_6790_ = _args[16];
_start:
{
uint8_t v___x_5939__boxed_6791_; lean_object* v_res_6792_; 
v___x_5939__boxed_6791_ = lean_unbox(v___x_6781_);
v_res_6792_ = l_Lean_Elab_WF_mkFix___lam__2(v___x_6774_, v___x_6775_, v___x_6776_, v___f_6777_, v_funNames_6778_, v_argsPacker_6779_, v_decrTactics_6780_, v___x_5939__boxed_6791_, v_fst_6782_, v_prefixArgs_6783_, v___y_6784_, v___y_6785_, v___y_6786_, v___y_6787_, v___y_6788_, v___y_6789_);
lean_dec(v___y_6789_);
lean_dec_ref(v___y_6788_);
lean_dec(v___y_6787_);
lean_dec_ref(v___y_6786_);
lean_dec(v___y_6785_);
lean_dec_ref(v___y_6784_);
return v_res_6792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object* v___x_6793_, lean_object* v_snd_6794_, lean_object* v___x_6795_, lean_object* v_prefixArgs_6796_, lean_object* v_value_6797_, lean_object* v___f_6798_, lean_object* v_funNames_6799_, lean_object* v_argsPacker_6800_, lean_object* v_decrTactics_6801_, uint8_t v___x_6802_, lean_object* v_fst_6803_, lean_object* v_xs_6804_, lean_object* v_x_6805_, lean_object* v___y_6806_, lean_object* v___y_6807_, lean_object* v___y_6808_, lean_object* v___y_6809_, lean_object* v___y_6810_, lean_object* v___y_6811_){
_start:
{
lean_object* v_lctx_6813_; lean_object* v___x_6814_; lean_object* v___x_6815_; lean_object* v___x_6816_; lean_object* v___x_6817_; lean_object* v___x_6818_; lean_object* v___x_6819_; lean_object* v___x_6820_; lean_object* v___x_6821_; lean_object* v___f_6822_; lean_object* v___x_6823_; 
v_lctx_6813_ = lean_ctor_get(v___y_6808_, 2);
v___x_6814_ = lean_unsigned_to_nat(0u);
v___x_6815_ = lean_array_get_borrowed(v___x_6793_, v_xs_6804_, v___x_6814_);
v___x_6816_ = l_Lean_Expr_fvarId_x21(v___x_6815_);
lean_inc_ref(v_lctx_6813_);
v___x_6817_ = l_Lean_LocalContext_setUserName(v_lctx_6813_, v___x_6816_, v_snd_6794_);
v___x_6818_ = lean_array_get_borrowed(v___x_6793_, v_xs_6804_, v___x_6795_);
lean_inc_n(v___x_6815_, 2);
lean_inc_ref(v_prefixArgs_6796_);
v___x_6819_ = lean_array_push(v_prefixArgs_6796_, v___x_6815_);
v___x_6820_ = l_Lean_Expr_beta(v_value_6797_, v___x_6819_);
v___x_6821_ = lean_box(v___x_6802_);
lean_inc(v___x_6818_);
v___f_6822_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__2___boxed), 17, 10);
lean_closure_set(v___f_6822_, 0, v___x_6815_);
lean_closure_set(v___f_6822_, 1, v___x_6818_);
lean_closure_set(v___f_6822_, 2, v___x_6820_);
lean_closure_set(v___f_6822_, 3, v___f_6798_);
lean_closure_set(v___f_6822_, 4, v_funNames_6799_);
lean_closure_set(v___f_6822_, 5, v_argsPacker_6800_);
lean_closure_set(v___f_6822_, 6, v_decrTactics_6801_);
lean_closure_set(v___f_6822_, 7, v___x_6821_);
lean_closure_set(v___f_6822_, 8, v_fst_6803_);
lean_closure_set(v___f_6822_, 9, v_prefixArgs_6796_);
v___x_6823_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v___x_6817_, v___f_6822_, v___y_6806_, v___y_6807_, v___y_6808_, v___y_6809_, v___y_6810_, v___y_6811_);
return v___x_6823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object** _args){
lean_object* v___x_6824_ = _args[0];
lean_object* v_snd_6825_ = _args[1];
lean_object* v___x_6826_ = _args[2];
lean_object* v_prefixArgs_6827_ = _args[3];
lean_object* v_value_6828_ = _args[4];
lean_object* v___f_6829_ = _args[5];
lean_object* v_funNames_6830_ = _args[6];
lean_object* v_argsPacker_6831_ = _args[7];
lean_object* v_decrTactics_6832_ = _args[8];
lean_object* v___x_6833_ = _args[9];
lean_object* v_fst_6834_ = _args[10];
lean_object* v_xs_6835_ = _args[11];
lean_object* v_x_6836_ = _args[12];
lean_object* v___y_6837_ = _args[13];
lean_object* v___y_6838_ = _args[14];
lean_object* v___y_6839_ = _args[15];
lean_object* v___y_6840_ = _args[16];
lean_object* v___y_6841_ = _args[17];
lean_object* v___y_6842_ = _args[18];
lean_object* v___y_6843_ = _args[19];
_start:
{
uint8_t v___x_6009__boxed_6844_; lean_object* v_res_6845_; 
v___x_6009__boxed_6844_ = lean_unbox(v___x_6833_);
v_res_6845_ = l_Lean_Elab_WF_mkFix___lam__3(v___x_6824_, v_snd_6825_, v___x_6826_, v_prefixArgs_6827_, v_value_6828_, v___f_6829_, v_funNames_6830_, v_argsPacker_6831_, v_decrTactics_6832_, v___x_6009__boxed_6844_, v_fst_6834_, v_xs_6835_, v_x_6836_, v___y_6837_, v___y_6838_, v___y_6839_, v___y_6840_, v___y_6841_, v___y_6842_);
lean_dec(v___y_6842_);
lean_dec_ref(v___y_6841_);
lean_dec(v___y_6840_);
lean_dec_ref(v___y_6839_);
lean_dec(v___y_6838_);
lean_dec_ref(v___y_6837_);
lean_dec_ref(v_x_6836_);
lean_dec_ref(v_xs_6835_);
lean_dec(v___x_6826_);
lean_dec_ref(v___x_6824_);
return v_res_6845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object* v_preDef_6850_, lean_object* v_prefixArgs_6851_, lean_object* v_argsPacker_6852_, lean_object* v_wfRel_6853_, lean_object* v_funNames_6854_, lean_object* v_decrTactics_6855_, lean_object* v_a_6856_, lean_object* v_a_6857_, lean_object* v_a_6858_, lean_object* v_a_6859_, lean_object* v_a_6860_, lean_object* v_a_6861_){
_start:
{
lean_object* v_declName_6863_; lean_object* v_type_6864_; lean_object* v_value_6865_; lean_object* v___f_6866_; lean_object* v___x_6867_; lean_object* v___x_6868_; 
v_declName_6863_ = lean_ctor_get(v_preDef_6850_, 3);
lean_inc(v_declName_6863_);
v_type_6864_ = lean_ctor_get(v_preDef_6850_, 6);
lean_inc_ref(v_type_6864_);
v_value_6865_ = lean_ctor_get(v_preDef_6850_, 7);
lean_inc_ref(v_value_6865_);
lean_dec_ref(v_preDef_6850_);
lean_inc_ref(v_prefixArgs_6851_);
v___f_6866_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__0___boxed), 12, 2);
lean_closure_set(v___f_6866_, 0, v_prefixArgs_6851_);
lean_closure_set(v___f_6866_, 1, v_declName_6863_);
v___x_6867_ = l_Lean_instInhabitedExpr;
v___x_6868_ = l_Lean_Meta_instantiateForall(v_type_6864_, v_prefixArgs_6851_, v_a_6858_, v_a_6859_, v_a_6860_, v_a_6861_);
if (lean_obj_tag(v___x_6868_) == 0)
{
lean_object* v_a_6869_; lean_object* v___x_6870_; lean_object* v___f_6871_; lean_object* v___x_6872_; uint8_t v___x_6873_; lean_object* v___x_6874_; 
v_a_6869_ = lean_ctor_get(v___x_6868_, 0);
lean_inc(v_a_6869_);
lean_dec_ref_known(v___x_6868_, 1);
v___x_6870_ = lean_unsigned_to_nat(1u);
v___f_6871_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__1___boxed), 12, 3);
lean_closure_set(v___f_6871_, 0, v___x_6867_);
lean_closure_set(v___f_6871_, 1, v___x_6870_);
lean_closure_set(v___f_6871_, 2, v_wfRel_6853_);
v___x_6872_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___closed__0));
v___x_6873_ = 0;
v___x_6874_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_a_6869_, v___x_6872_, v___f_6871_, v___x_6873_, v___x_6873_, v_a_6856_, v_a_6857_, v_a_6858_, v_a_6859_, v_a_6860_, v_a_6861_);
if (lean_obj_tag(v___x_6874_) == 0)
{
lean_object* v_a_6875_; lean_object* v_fst_6876_; lean_object* v_snd_6877_; lean_object* v___x_6878_; lean_object* v___f_6879_; lean_object* v___x_6880_; 
v_a_6875_ = lean_ctor_get(v___x_6874_, 0);
lean_inc(v_a_6875_);
lean_dec_ref_known(v___x_6874_, 1);
v_fst_6876_ = lean_ctor_get(v_a_6875_, 0);
lean_inc_n(v_fst_6876_, 2);
v_snd_6877_ = lean_ctor_get(v_a_6875_, 1);
lean_inc(v_snd_6877_);
lean_dec(v_a_6875_);
v___x_6878_ = lean_box(v___x_6873_);
v___f_6879_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__3___boxed), 20, 11);
lean_closure_set(v___f_6879_, 0, v___x_6867_);
lean_closure_set(v___f_6879_, 1, v_snd_6877_);
lean_closure_set(v___f_6879_, 2, v___x_6870_);
lean_closure_set(v___f_6879_, 3, v_prefixArgs_6851_);
lean_closure_set(v___f_6879_, 4, v_value_6865_);
lean_closure_set(v___f_6879_, 5, v___f_6866_);
lean_closure_set(v___f_6879_, 6, v_funNames_6854_);
lean_closure_set(v___f_6879_, 7, v_argsPacker_6852_);
lean_closure_set(v___f_6879_, 8, v_decrTactics_6855_);
lean_closure_set(v___f_6879_, 9, v___x_6878_);
lean_closure_set(v___f_6879_, 10, v_fst_6876_);
lean_inc(v_a_6861_);
lean_inc_ref(v_a_6860_);
lean_inc(v_a_6859_);
lean_inc_ref(v_a_6858_);
v___x_6880_ = lean_infer_type(v_fst_6876_, v_a_6858_, v_a_6859_, v_a_6860_, v_a_6861_);
if (lean_obj_tag(v___x_6880_) == 0)
{
lean_object* v_a_6881_; lean_object* v___x_6882_; 
v_a_6881_ = lean_ctor_get(v___x_6880_, 0);
lean_inc(v_a_6881_);
lean_dec_ref_known(v___x_6880_, 1);
lean_inc(v_a_6861_);
lean_inc_ref(v_a_6860_);
lean_inc(v_a_6859_);
lean_inc_ref(v_a_6858_);
v___x_6882_ = lean_whnf(v_a_6881_, v_a_6858_, v_a_6859_, v_a_6860_, v_a_6861_);
if (lean_obj_tag(v___x_6882_) == 0)
{
lean_object* v_a_6883_; lean_object* v___x_6884_; lean_object* v___x_6885_; lean_object* v___x_6886_; 
v_a_6883_ = lean_ctor_get(v___x_6882_, 0);
lean_inc(v_a_6883_);
lean_dec_ref_known(v___x_6882_, 1);
v___x_6884_ = l_Lean_Expr_bindingDomain_x21(v_a_6883_);
lean_dec(v_a_6883_);
v___x_6885_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___closed__1));
v___x_6886_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v___x_6884_, v___x_6885_, v___f_6879_, v___x_6873_, v___x_6873_, v_a_6856_, v_a_6857_, v_a_6858_, v_a_6859_, v_a_6860_, v_a_6861_);
return v___x_6886_;
}
else
{
lean_dec_ref(v___f_6879_);
return v___x_6882_;
}
}
else
{
lean_dec_ref(v___f_6879_);
return v___x_6880_;
}
}
else
{
lean_object* v_a_6887_; lean_object* v___x_6889_; uint8_t v_isShared_6890_; uint8_t v_isSharedCheck_6894_; 
lean_dec_ref(v___f_6866_);
lean_dec_ref(v_value_6865_);
lean_dec_ref(v_decrTactics_6855_);
lean_dec_ref(v_funNames_6854_);
lean_dec_ref(v_argsPacker_6852_);
lean_dec_ref(v_prefixArgs_6851_);
v_a_6887_ = lean_ctor_get(v___x_6874_, 0);
v_isSharedCheck_6894_ = !lean_is_exclusive(v___x_6874_);
if (v_isSharedCheck_6894_ == 0)
{
v___x_6889_ = v___x_6874_;
v_isShared_6890_ = v_isSharedCheck_6894_;
goto v_resetjp_6888_;
}
else
{
lean_inc(v_a_6887_);
lean_dec(v___x_6874_);
v___x_6889_ = lean_box(0);
v_isShared_6890_ = v_isSharedCheck_6894_;
goto v_resetjp_6888_;
}
v_resetjp_6888_:
{
lean_object* v___x_6892_; 
if (v_isShared_6890_ == 0)
{
v___x_6892_ = v___x_6889_;
goto v_reusejp_6891_;
}
else
{
lean_object* v_reuseFailAlloc_6893_; 
v_reuseFailAlloc_6893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6893_, 0, v_a_6887_);
v___x_6892_ = v_reuseFailAlloc_6893_;
goto v_reusejp_6891_;
}
v_reusejp_6891_:
{
return v___x_6892_;
}
}
}
}
else
{
lean_dec_ref(v___f_6866_);
lean_dec_ref(v_value_6865_);
lean_dec_ref(v_decrTactics_6855_);
lean_dec_ref(v_funNames_6854_);
lean_dec_ref(v_wfRel_6853_);
lean_dec_ref(v_argsPacker_6852_);
lean_dec_ref(v_prefixArgs_6851_);
return v___x_6868_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object* v_preDef_6895_, lean_object* v_prefixArgs_6896_, lean_object* v_argsPacker_6897_, lean_object* v_wfRel_6898_, lean_object* v_funNames_6899_, lean_object* v_decrTactics_6900_, lean_object* v_a_6901_, lean_object* v_a_6902_, lean_object* v_a_6903_, lean_object* v_a_6904_, lean_object* v_a_6905_, lean_object* v_a_6906_, lean_object* v_a_6907_){
_start:
{
lean_object* v_res_6908_; 
v_res_6908_ = l_Lean_Elab_WF_mkFix(v_preDef_6895_, v_prefixArgs_6896_, v_argsPacker_6897_, v_wfRel_6898_, v_funNames_6899_, v_decrTactics_6900_, v_a_6901_, v_a_6902_, v_a_6903_, v_a_6904_, v_a_6905_, v_a_6906_);
lean_dec(v_a_6906_);
lean_dec_ref(v_a_6905_);
lean_dec(v_a_6904_);
lean_dec_ref(v_a_6903_);
lean_dec(v_a_6902_);
lean_dec_ref(v_a_6901_);
return v_res_6908_;
}
}
lean_object* runtime_initialize_Lean_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_HasConstCache(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_WF_debug_definition_wf_replaceRecApps = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_WF_debug_definition_wf_replaceRecApps);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Array(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* initialize_Lean_Util_HasConstCache(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
}
#ifdef __cplusplus
}
#endif
